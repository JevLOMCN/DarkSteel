// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// GetFrameNumberForTimestamp @ 1419479e0

int __thiscall
FFrameBoundaries::GetFrameNumberForTimestamp(FFrameBoundaries *this,Type param_1,ulong64 param_2)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  if (this->FrameBoundaryTimestampsWriteBuffer[(int)param_1].ConsumerThreadReadIndex <
      this->FrameBoundaryTimestampsWriteBuffer[(int)param_1].Counter) {
    Update(this,param_1);
  }
  iVar4 = this->FrameBoundaryTimestamps[(int)param_1].ArrayNum;
  if (iVar4 != 0) {
    if ((iVar4 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    if (*(ulonglong *)this->FrameBoundaryTimestamps[(int)param_1].AllocatorInstance.Data <= param_2)
    {
      iVar7 = this->FrameBoundaryTimestamps[(int)param_1].ArrayNum;
      iVar4 = this->CurrentReadFrameIndex;
      if (iVar7 <= iVar4) {
        iVar4 = iVar7 + -1;
        this->CurrentReadFrameIndex = iVar4;
        iVar7 = this->FrameBoundaryTimestamps[(int)param_1].ArrayNum;
      }
      if (0 < iVar4) {
        uVar8 = iVar4 - 1;
        uVar6 = 0;
        if ((int)uVar8 < iVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        if (param_2 < *(ulonglong *)
                       (this->FrameBoundaryTimestamps[(int)param_1].AllocatorInstance.Data +
                       (longlong)(int)uVar8 * 8)) {
          uVar8 = 0;
          uVar6 = this->CurrentReadFrameIndex;
          uVar2 = uVar6;
          while (4 < (int)uVar6) {
            uVar5 = (int)(uVar2 + uVar8) / 2;
            uVar6 = 0;
            if ((int)uVar5 < this->FrameBoundaryTimestamps[(int)param_1].ArrayNum) {
              uVar6 = ~uVar5 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              iVar4 = (*pcVar1)();
              return iVar4;
            }
            if (*(ulonglong *)
                 (this->FrameBoundaryTimestamps[(int)param_1].AllocatorInstance.Data +
                 (longlong)(int)uVar5 * 8) <= param_2) {
              uVar8 = uVar5;
              uVar5 = uVar2;
            }
            uVar2 = uVar5;
            uVar6 = uVar5 - uVar8;
          }
          this->CurrentReadFrameIndex = uVar8;
        }
      }
      uVar6 = this->CurrentReadFrameIndex;
      iVar4 = this->FrameBoundaryTimestamps[(int)param_1].ArrayNum;
      if ((int)uVar6 < iVar4) {
        do {
          uVar8 = 0;
          if ((int)uVar6 < iVar4) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          iVar4 = this->CurrentReadFrameIndex;
          if (param_2 < *(ulonglong *)
                         (this->FrameBoundaryTimestamps[(int)param_1].AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 8)) break;
          uVar6 = iVar4 + 1;
          this->CurrentReadFrameIndex = uVar6;
          iVar4 = this->FrameBoundaryTimestamps[(int)param_1].ArrayNum;
        } while ((int)uVar6 < iVar4);
      }
      return iVar4 + -1;
    }
  }
  this->CurrentReadFrameIndex = 0;
  return -1;
}

// Update @ 14197b310

void __thiscall FFrameBoundaries::Update(FFrameBoundaries *this,Type param_1)

{
  FBlock *pFVar1;
  code *pcVar2;
  bool bVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  ulong64 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong lVar12;
  
  uVar5 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread) {
    uVar5 = GGameThreadId;
  }
  DVar4 = GetCurrentThreadId();
  if (DVar4 != uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInCsvProcessingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x57f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 == Count) {
    puVar7 = &this->FrameBoundaryTimestampsWriteBuffer[0].ConsumerThreadReadIndex;
    lVar12 = 0;
    piVar11 = &this->FrameBoundaryTimestamps[0].ArrayMax;
    do {
      uVar8 = (int)puVar7[-1] - (uint)*puVar7;
      uVar9 = (ulonglong)uVar8;
      uVar5 = piVar11[-1] + uVar8;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if (*piVar11 < (int)uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar5,(ForAnyElementType *)(piVar11 + -3),piVar11[-1],piVar11);
      }
      uVar5 = (uint)*puVar7 & 0xf;
      if (uVar8 != 0) {
        do {
          uVar10 = (ulonglong)uVar5;
          if (*puVar7 == puVar7[1] + 0x10) {
            pFVar1 = ((TSingleProducerSingleConsumerList<unsigned___int64,16> *)(puVar7 + -3))->
                     HeadBlock;
            uVar10 = 0;
            ((TSingleProducerSingleConsumerList<unsigned___int64,16> *)(puVar7 + -3))->HeadBlock =
                 pFVar1->Next;
            ::operator_delete(pFVar1,0x88);
            puVar7[1] = *puVar7;
          }
          if (((TSingleProducerSingleConsumerList<unsigned___int64,16> *)(puVar7 + -3))->HeadBlock
              == (FBlock *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("HeadBlock != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                               ,0x4b2,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (0xf < (uint)uVar10) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IndexInBlock < BlockSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                               ,0x4b3,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pFVar1 = ((TSingleProducerSingleConsumerList<unsigned___int64,16> *)(puVar7 + -3))->
                   HeadBlock;
          iVar6 = piVar11[-1];
          if (iVar6 == *piVar11) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)(piVar11 + -3),piVar11);
          }
          piVar11[-1] = iVar6 + 1;
          uVar5 = (uint)uVar10 + 1;
          *(ulong64 *)
           ((((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(piVar11 + -3))->
            AllocatorInstance).Data + (longlong)iVar6 * 8) = pFVar1->Entries[uVar10];
          *puVar7 = *puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      lVar12 = lVar12 + 1;
      puVar7 = puVar7 + 5;
      piVar11 = piVar11 + 4;
    } while (lVar12 < 3);
    return;
  }
  TSingleProducerSingleConsumerList<unsigned___int64,16>::PopAll
            (this->FrameBoundaryTimestampsWriteBuffer + (int)param_1,
             this->FrameBoundaryTimestamps + (int)param_1,-1);
  return;
}

