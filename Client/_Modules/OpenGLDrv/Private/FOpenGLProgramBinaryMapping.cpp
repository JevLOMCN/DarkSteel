// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 3

// FOpenGLProgramBinaryMapping @ 145be3040

FOpenGLProgramBinaryMapping * __thiscall
FOpenGLProgramBinaryMapping::FOpenGLProgramBinaryMapping
          (FOpenGLProgramBinaryMapping *this,
          TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> param_1,uint param_2)

{
  TSet<FOpenGLProgramKey,DefaultKeyFuncs<FOpenGLProgramKey,0>,FDefaultSetAllocator> *this_00;
  int *piVar1;
  ForElementType<FSetElementId> *pFVar2;
  ForElementType<FSetElementId> FVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  void *pvVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar10 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this_00 = &this->Content;
  this->_padding_ = (longlong)&___7FOpenGLProgramBinaryMapping__6B_;
  piVar1 = &(this->Content).HashSize;
  (this->MappedCacheFile).Ptr = (IMappedFileHandle *)(param_1.Ptr)->_padding_;
  (param_1.Ptr)->_padding_ = 0;
  (this->MappedRegions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MappedRegions).ArrayNum = 0;
  (this->MappedRegions).ArrayMax = 0;
  this->CurrentMappingRegionOffset = 0;
  *(undefined8 *)&this_00->Elements = 0;
  *(undefined8 *)&(this->Content).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Content).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Content).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Content).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Content).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Content).Elements.field_0x34 = 0;
  (this->Content).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *piVar1 = 0;
  if (param_2 == 0) goto LAB_145be32de;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)param_2);
  }
  TSparseArrayBase<128,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<128,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,param_2);
  if (param_2 < 4) {
    uVar11 = 1;
  }
  else {
    uVar8 = (ulonglong)((param_2 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*piVar1 != 0) && ((int)uVar11 <= *piVar1)) goto LAB_145be32de;
  pFVar2 = &(this->Content).Hash;
  *piVar1 = uVar11;
  if ((this->Content).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Content).Hash.SecondaryData,0,0,4);
  }
  if (uVar11 != 0) {
    uVar13 = uVar11;
    if (uVar11 < 2) {
      if ((this->Content).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_145be3145;
      }
    }
    else {
LAB_145be3145:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->Content).Hash.SecondaryData,0,uVar13,4);
    }
    if (0 < (int)uVar11) {
      uVar14 = (ulonglong)uVar11;
      uVar8 = uVar10;
      do {
        FVar3 = (this->Content).Hash.SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)pFVar2;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = uVar8 & (longlong)(int)uVar11 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)((longlong)FVar7 + uVar6 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
  if (*piVar1 != 0) {
    uVar11 = *(uint *)&(this->Content).Elements.field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Content).Elements.field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar15 = *(uint **)&(this->Content).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_50.Array;
      }
      uVar13 = *puVar15;
      uVar8 = uVar10;
      while (uVar13 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        local_78 = iVar9 + 1;
        uVar10 = (ulonglong)local_78;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_145be323b;
        uVar13 = puVar15[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_145be323b:
        uVar10 = (ulonglong)uVar11;
        uStack_64 = uVar11;
      }
    }
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    if ((int)uVar10 < (int)uVar11) {
      do {
        pvVar12 = (void *)(*(longlong *)&this_00->Elements + (longlong)(int)uVar10 * 0x80);
        uVar11 = (*FCrc::MemCrc32Func)(pvVar12,0x78,0);
        uVar11 = *piVar1 - 1U & uVar11;
        *(uint *)((longlong)pvVar12 + 0x7c) = uVar11;
        FVar3 = (this->Content).Hash.SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)pFVar2;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)((longlong)pvVar12 + 0x78) = *(undefined4 *)((longlong)FVar7 + uVar8 * 4);
        *(int *)((longlong)FVar7 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_145be32de:
  puVar4 = (undefined8 *)(param_1.Ptr)->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  return this;
}

// GetCurrentMappedRegion @ 145c01e40

TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> * __thiscall
FOpenGLProgramBinaryMapping::GetCurrentMappedRegion(FOpenGLProgramBinaryMapping *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *pTVar5;
  uint uVar6;
  
  if ((this->MappedRegions).ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!MappedRegions.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLProgramBinaryFileCache.cpp"
                       ,0xca,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar1 = (this->MappedRegions).ArrayNum;
  uVar6 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TUniquePtr<IMappedFileRegion,TDefaultDelete<IMappedFileRegion>_> *)
         ((this->MappedRegions).AllocatorInstance.Data +
         (longlong)((this->MappedRegions).ArrayNum + -1) * 8);
}

// HasValidMapping @ 145c04e50

bool __thiscall FOpenGLProgramBinaryMapping::HasValidMapping(FOpenGLProgramBinaryMapping *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->MappedCacheFile).Ptr != (IMappedFileHandle *)0x0) {
    iVar1 = (this->MappedRegions).ArrayNum;
    if (iVar1 != 0) {
      uVar5 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar5 = ~(iVar1 - 1U) >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (*(longlong *)
           ((this->MappedRegions).AllocatorInstance.Data +
           (longlong)(this->MappedRegions).ArrayNum * 8 + -8) != 0) {
        return true;
      }
    }
  }
  return false;
}

