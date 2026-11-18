// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// DumpToLog @ 145c55a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPipelineCacheFileFormatTOC::DumpToLog(FPipelineCacheFileFormatTOC *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  FString local_88;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  local_88.Data.ArrayMax = 1;
  local_88.Data.ArrayNum = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)&this->MetaData;
  iVar2 = *(int *)&(this->MetaData).field_0x28;
  local_78 = &(this->MetaData).field_0x10;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar2 != 0) {
    puVar5 = *(uint **)&(this->MetaData).field_0x20;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)local_78;
    }
    uVar3 = *puVar5;
    local_68 = 0;
    local_88.Data.ArrayNum = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_88.Data.ArrayNum;
      local_68 = local_68 + 0x20;
      local_88.Data.ArrayNum = local_88.Data.ArrayNum + 1;
      iStack_6c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88.Data.ArrayNum)
      goto LAB_145c55b1a;
      uVar3 = puVar5[lVar4 + 1];
    }
    local_88.Data.ArrayMax = -uVar3 & uVar3;
    uVar1 = (ulonglong)(uint)local_88.Data.ArrayMax * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar4;
    if (iVar2 < iStack_6c) {
      iStack_6c = iVar2;
    }
  }
LAB_145c55b1a:
  uStack_70 = 0xffffffff;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_._0_4_ = local_88.Data.ArrayNum;
  TStack_50._padding_._4_4_ = local_88.Data.ArrayMax;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = (TMap<unsigned_int,FPipelineCacheFileFormatPSOMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>_>
              *)local_88.Data.AllocatorInstance.Data;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar2) {
    do {
      if (6 < (byte)LogRHI._0_1_) {
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        FGuid::AppendString((FGuid *)((longlong)TStack_50.CurrentBitIndex * 0xc0 +
                                      *(longlong *)local_58 + 0x18),&local_88,Digits);
        UE::Logging::Private::BasicLog<7>
                  (&`public:_void___cdecl_FPipelineCacheFileFormatTOC::DumpToLog(void)const___ptr64'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&LogRHI);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  if (6 < (byte)LogRHI._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_FPipelineCacheFileFormatTOC::DumpToLog(void)const___ptr64'::
                __l23::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return;
}

