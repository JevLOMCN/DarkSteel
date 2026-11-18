// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 29

// OodleScratchBuffer @ 141586940

OodleScratchBuffer * __thiscall
FOodleDataCompression::OodleScratchBuffers::OodleScratchBuffer::OodleScratchBuffer
          (OodleScratchBuffer *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  this->OodleScratchMemory = (void *)0x0;
  return this;
}

// ~OodleScratchBuffer @ 14158a4f0

void __stdcall
FOodleDataCompression::OodleScratchBuffers::OodleScratchBuffer::~OodleScratchBuffer
          (LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x00014158a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

// operator() @ 141592d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FOodleDataCompression::CompressParallelSub'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *this_00;
  ECompressionLevel EVar1;
  ECompressor EVar2;
  longlong *plVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  long64 lVar9;
  OodleScratchBuffers *this_01;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  long64 lVar13;
  
  plVar3 = *(longlong **)this;
  lVar12 = (longlong)param_1;
  uVar10 = 0;
  if (lVar12 < plVar3[1]) {
    uVar10 = (uint)(param_1 >> 0x1f) >> 0x1f ^ 1;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)(*plVar3 + lVar12 * 0x18);
  lVar4 = **(longlong **)((longlong)this + 8);
  lVar12 = lVar4 * lVar12;
  lVar11 = **(longlong **)((longlong)this + 0x10) - lVar12;
  if (lVar4 < lVar11) {
    lVar11 = lVar4;
  }
  lVar9 = OodleLZ_GetCompressedBufferSizeNeeded(OodleLZ_Compressor_Kraken,lVar11);
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(this_00,lVar9,Default);
  bVar7 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
  if (bVar7 == false) {
    lVar13 = **(longlong **)((longlong)this + 0x20);
    if (lVar12 < **(longlong **)((longlong)this + 0x20)) {
      lVar13 = lVar12;
    }
  }
  else {
    lVar13 = 0;
  }
  lVar4 = **(longlong **)((longlong)this + 0x28);
  EVar1 = **(ECompressionLevel **)((longlong)this + 0x38);
  EVar2 = **(ECompressor **)((longlong)this + 0x30);
  if (this_00->ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (this_00->AllocatorInstance).Data;
  this_01 = FOodleDataCompression::GetGlobalOodleScratchBuffers();
  lVar9 = FOodleDataCompression::OodleScratchBuffers::OodleEncode
                    (this_01,pFVar5,lVar9,(void *)(lVar12 + lVar4),lVar11,EVar2,EVar1,bVar7,lVar13);
  if (lVar9 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
                       ,0x28d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(this_00,lVar9,No);
  return;
}

// operator() @ 141592ee0

void __thiscall
`FOodleDataCompression::DecompressParallel'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar2 = *(longlong **)((longlong)this + 0x10);
  lVar7 = (longlong)param_1;
  iVar1 = **(int **)this;
  lVar6 = **(longlong **)((longlong)this + 8) - (longlong)(iVar1 * param_1);
  if (iVar1 < lVar6) {
    lVar6 = (longlong)iVar1;
  }
  uVar5 = 0;
  if (lVar7 < plVar2[1]) {
    uVar5 = (uint)(param_1 >> 0x1f) >> 0x1f ^ 1;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar4 = FOodleDataCompression::Decompress
                    ((void *)(**(longlong **)((longlong)this + 0x20) + (longlong)(iVar1 * param_1)),
                     lVar6,(void *)(*(longlong *)(*plVar2 + lVar7 * 8) +
                                   **(longlong **)((longlong)this + 0x28)),
                     (ulonglong)
                     *(uint *)(*(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x20) +
                              lVar7 * 4));
  if (!bVar4) {
    **(undefined1 **)((longlong)this + 0x30) = 1;
  }
  return;
}

// Compress @ 1415b1000

long64 __cdecl
FOodleDataCompression::Compress
          (void *param_1,long64 param_2,void *param_3,long64 param_4,ECompressor param_5,
          ECompressionLevel param_6,bool param_7,long64 param_8)

{
  OodleScratchBuffers *this;
  long64 lVar1;
  
  this = GetGlobalOodleScratchBuffers();
  lVar1 = OodleScratchBuffers::OodleEncode
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return lVar1;
}

// CompressParallel @ 1415b1560

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
FOodleDataCompression::CompressParallel
          (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1,void *param_2,long64 param_3,
          ECompressor param_4,ECompressionLevel param_5,bool param_6)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  long64 lVar6;
  OodleScratchBuffers *this;
  long64 lVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_> local_48;
  
  lVar11 = param_1->ArrayNum;
  uVar5 = (uint)((ulonglong)lVar11 >> 0x20);
  if (param_3 < 0x40001) {
    lVar6 = OodleLZ_GetCompressedBufferSizeNeeded(OodleLZ_Compressor_Kraken,param_3);
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(param_1,lVar11 + lVar6,Default);
    uVar12 = 0;
    if (lVar11 < param_1->ArrayNum) {
      uVar12 = uVar5 >> 0x1f ^ 1;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    this = GetGlobalOodleScratchBuffers();
    lVar7 = OodleScratchBuffers::OodleEncode
                      (this,pFVar10 + lVar11,lVar6,param_2,param_3,param_4,param_5,param_6,0);
    if (0 < lVar7) {
      if ((lVar6 < lVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TotalCompLen <= Reserve",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
                             ,0x2e8,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        lVar6 = (*pcVar1)();
        return lVar6;
      }
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(param_1,lVar11 + lVar7,No);
    }
  }
  else {
    lVar9 = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    lVar7 = CompressParallelSub(&local_48,param_2,param_3,param_4,param_5,param_6);
    if (lVar7 < 1) {
      if (1 < (byte)OodleDataCompression._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
      }
    }
    else {
      TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum(param_1,lVar11 + lVar7,Default);
      uVar12 = 0;
      if (lVar11 < param_1->ArrayNum) {
        uVar12 = uVar5 >> 0x1f ^ 1;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        lVar6 = (*pcVar1)();
        return lVar6;
      }
      pFVar8 = (param_1->AllocatorInstance).Data + lVar11;
      pFVar10 = pFVar8;
      lVar11 = lVar9;
      if (0 < local_48.ArrayNum) {
        do {
          uVar12 = (uint)((ulonglong)lVar9 >> 0x3f) ^ 1;
          uVar5 = 0;
          if (lVar9 < local_48.ArrayNum) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            lVar6 = (*pcVar1)();
            return lVar6;
          }
          FVar2.Data = local_48.AllocatorInstance.Data;
          uVar5 = 0;
          if (lVar9 < local_48.ArrayNum) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            lVar6 = (*pcVar1)();
            return lVar6;
          }
          FVar3.Data = local_48.AllocatorInstance.Data;
          if ((*(longlong *)(FVar2.Data + lVar11 + 8) < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            lVar6 = (*pcVar1)();
            return lVar6;
          }
          memcpy(pFVar10,*(void **)(FVar2.Data + lVar11),*(size_t *)(FVar3.Data + lVar11 + 8));
          uVar5 = 0;
          if (lVar9 < local_48.ArrayNum) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            lVar6 = (*pcVar1)();
            return lVar6;
          }
          lVar9 = lVar9 + 1;
          pFVar10 = pFVar10 + *(longlong *)(local_48.AllocatorInstance.Data + lVar11 + 8);
          lVar11 = lVar11 + 0x18;
        } while (lVar9 < local_48.ArrayNum);
      }
      if (((longlong)pFVar10 - (longlong)pFVar8 != lVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OutPtr - StartPtr) == TotalCompLen",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
                             ,0x2ff,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        lVar6 = (*pcVar1)();
        return lVar6;
      }
    }
    DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,__int64>
              ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_48.AllocatorInstance.Data,
               local_48.ArrayNum);
    if ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_48.AllocatorInstance.Data !=
        (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return lVar7;
}

// CompressParallel @ 1415b1940

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __cdecl
FOodleDataCompression::CompressParallel
          (void *param_1,long64 param_2,void *param_3,long64 param_4,ECompressor param_5,
          ECompressionLevel param_6,bool param_7)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  OodleScratchBuffers *this;
  long64 lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  void *_Dst;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_> local_48;
  
  if (param_4 < 0x40001) {
    this = GetGlobalOodleScratchBuffers();
    lVar6 = OodleScratchBuffers::OodleEncode
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    return lVar6;
  }
  lVar7 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  lVar6 = CompressParallelSub(&local_48,param_3,param_4,param_5,param_6,param_7);
  if (lVar6 < 1) {
    if (1 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
    }
  }
  else if (param_2 < lVar6) {
    if (1 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
    }
    lVar6 = 0;
  }
  else {
    lVar8 = lVar7;
    _Dst = param_1;
    if (0 < local_48.ArrayNum) {
      do {
        uVar9 = (uint)((ulonglong)lVar7 >> 0x3f) ^ 1;
        uVar5 = 0;
        if (lVar7 < local_48.ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          lVar6 = (*pcVar1)();
          return lVar6;
        }
        FVar2.Data = local_48.AllocatorInstance.Data;
        uVar5 = 0;
        if (lVar7 < local_48.ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          lVar6 = (*pcVar1)();
          return lVar6;
        }
        FVar3.Data = local_48.AllocatorInstance.Data;
        if ((*(longlong *)(FVar2.Data + lVar8 + 8) < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          lVar6 = (*pcVar1)();
          return lVar6;
        }
        memcpy(_Dst,*(void **)(FVar2.Data + lVar8),*(size_t *)(FVar3.Data + lVar8 + 8));
        uVar5 = 0;
        if (lVar7 < local_48.ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          lVar6 = (*pcVar1)();
          return lVar6;
        }
        lVar7 = lVar7 + 1;
        _Dst = (void *)((longlong)_Dst + *(longlong *)(local_48.AllocatorInstance.Data + lVar8 + 8))
        ;
        lVar8 = lVar8 + 0x18;
      } while (lVar7 < local_48.ArrayNum);
    }
    if (((longlong)_Dst - (longlong)param_1 != lVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OutPtr - StartPtr) == TotalCompLen",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
                           ,0x2c2,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      lVar6 = (*pcVar1)();
      return lVar6;
    }
  }
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,__int64>
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_48.AllocatorInstance.Data,
             local_48.ArrayNum);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_48.AllocatorInstance.Data !=
      (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return lVar6;
}

// CompressParallelSub @ 1415b1c40

long64 __cdecl
FOodleDataCompression::CompressParallelSub
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_>
           *param_1,void *param_2,long64 param_3,ECompressor param_4,ECompressionLevel param_5,
          bool param_6)

{
  long64 *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  long64 lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  void *local_res10;
  longlong local_res18;
  ECompressor local_res20 [8];
  longlong local_a8;
  TArrayView<std::nullptr_t,int> local_a0;
  code *local_90;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_> **local_88;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_> *local_80;
  longlong *local_78;
  longlong *local_70;
  bool *local_68;
  longlong *local_60;
  void **local_58;
  ECompressor *local_50;
  ECompressionLevel *local_48;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20[0] = param_4;
  iVar5 = OodleLZ_MakeSeekChunkLen(param_3,0x80);
  local_res8 = (longlong)iVar5;
  plVar1 = &param_1->ArrayNum;
  uVar6 = (local_res18 + -1 + local_res8) / local_res8;
  lVar8 = *plVar1;
  if (lVar8 < (longlong)uVar6) {
    lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (0x18,8,uVar6 - lVar8,&param_1->AllocatorInstance,plVar1,&param_1->ArrayMax);
    memset((param_1->AllocatorInstance).Data + lVar7 * 0x18,0,(uVar6 - lVar8) * 0x18);
  }
  else {
    if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar6);
    }
    if ((longlong)uVar6 < lVar8) {
      lVar8 = lVar8 - uVar6;
      if (((((uint)(uVar6 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar8 >> 0x3f) ^ 1)) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        lVar7 = (*pcVar3)();
        return lVar7;
      }
      if (lVar8 != 0) {
        TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<64>_>::
        RemoveAtImpl(param_1,uVar6,lVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (0x18,8,&param_1->AllocatorInstance,*plVar1,&param_1->ArrayMax);
      }
    }
  }
  local_a8 = local_res8;
  if (0x1000000 < local_res8) {
    local_a8 = 0x1000000;
  }
  local_78 = &local_res8;
  lVar7 = 0;
  local_70 = &local_res18;
  local_68 = &param_6;
  local_60 = &local_a8;
  local_58 = &local_res10;
  local_50 = local_res20;
  local_48 = &param_5;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`FOodleDataCompression::CompressParallelSub'::__l2::<lambda_1>,void,int>
             ::Call;
  local_88 = &local_80;
  local_a0.DataPtr = (void **)0x0;
  local_a0.ArrayNum = 0;
  local_80 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"OodleCompressParallel.PF",(int)uVar6,1,(TFunctionRef<void___cdecl(int)> *)&local_90,
             local_res18._0_1_,Unbalanced,&local_a0);
  lVar8 = lVar7;
  lVar9 = lVar7;
  if (0 < (longlong)uVar6) {
    do {
      if ((*plVar1 <= lVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        lVar7 = (*pcVar3)();
        return lVar7;
      }
      lVar2 = *(longlong *)((param_1->AllocatorInstance).Data + lVar9 + 8);
      if (lVar2 == 0) {
        return 0;
      }
      lVar7 = lVar7 + lVar2;
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar8 < (longlong)uVar6);
  }
  return lVar7;
}

// CompressedBufferSizeNeeded @ 1415b1ec0

long64 __cdecl FOodleDataCompression::CompressedBufferSizeNeeded(long64 param_1)

{
  long64 lVar1;
  
  lVar1 = OodleLZ_GetCompressedBufferSizeNeeded(OodleLZ_Compressor_Kraken,param_1);
  return lVar1;
}

// CompressionFormatInitOnFirstUseFromLock @ 1415b1ee0

void __cdecl FOodleDataCompression::CompressionFormatInitOnFirstUseFromLock(void)

{
  if (GlobalOodleDataCompressionFormat == (ICompressionFormat *)0x0) {
    GlobalOodleDataCompressionFormat = CreateOodleDataCompressionFormat();
  }
  return;
}

// Decompress @ 1415bc520

bool __cdecl
FOodleDataCompression::Decompress(void *param_1,long64 param_2,void *param_3,long64 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  OodleScratchBuffers *this;
  long64 lVar4;
  
  this = GetGlobalOodleScratchBuffers();
  lVar4 = OodleScratchBuffers::OodleDecode(this,param_3,param_4,param_1,param_2);
  bVar2 = false;
  if (lVar4 != 0) {
    if (lVar4 != param_2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecodeSize == InUncompressedSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
                         ,0x234,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

// DecompressParallel @ 1415bc5b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FOodleDataCompression::DecompressParallel(void *param_1,long64 param_2,void *param_3,long64 param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FTaskGraphInterface *pFVar9;
  longlong lVar10;
  ulong64 uVar11;
  OodleLZ_SeekTable *pOVar12;
  long64 lVar13;
  longlong lVar14;
  void *local_res8;
  long64 local_res10;
  void *local_res18 [2];
  char local_b8 [4];
  int local_b4;
  ForAnyElementType local_b0;
  long64 alStack_a8 [2];
  OodleLZ_SeekTable *local_98;
  TArrayView<std::nullptr_t,int> local_90;
  code *local_80;
  int **local_78;
  int *local_70;
  long64 *local_68;
  ForAnyElementType *local_60;
  OodleLZ_SeekTable **local_58;
  void **local_50;
  void **local_48;
  char *local_40;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (param_2 < 0x80001) {
    bVar5 = Decompress(param_1,param_2,param_3,param_4);
    return bVar5;
  }
  pFVar9 = FTaskGraphInterface::Get();
  iVar7 = (**(code **)((longlong)*pFVar9 + 0x20))(pFVar9);
  local_b4 = OodleLZ_MakeSeekChunkLen(local_res10,iVar7 * 3);
  lVar10 = (local_res10 + -1 + (longlong)local_b4) / (longlong)local_b4;
  uVar11 = OodleLZ_GetSeekTableMemorySizeNeeded((int)lVar10,OodleLZSeekTable_Flags_None);
  pOVar12 = FMemory::Malloc(uVar11,0);
  local_98 = pOVar12;
  iVar7 = OodleLZ_FillSeekTable
                    (pOVar12,OodleLZSeekTable_Flags_None,local_b4,local_res8,local_res10,
                     local_res18[0],param_4);
  if (iVar7 == 0) {
    if (3 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
    }
    return false;
  }
  if (local_98->seekChunksIndependent == 0) {
    FMemory::Free(pOVar12);
    bVar5 = Decompress(local_res8,local_res10,local_res18[0],param_4);
    return bVar5;
  }
  uVar11 = lVar10 + 1;
  lVar14 = 0;
  alStack_a8[1] = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  alStack_a8[0] = 0;
  if ((longlong)uVar11 < 1) {
    if ((longlong)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
  }
  else {
    lVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                       (8,8,uVar11,&local_b0,alStack_a8,alStack_a8 + 1);
    memset(local_b0.Data + lVar13 * 8,0,uVar11 * 8);
    if (0 < alStack_a8[0]) goto LAB_1415bc763;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_1415bc763:
  *(undefined8 *)local_b0.Data = 0;
  if (0 < lVar10) {
    do {
      if ((alStack_a8[0] <= lVar14) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar1 = lVar14 + 1;
      uVar2 = local_98->seekChunkCompLens[lVar14];
      lVar3 = *(longlong *)(local_b0.Data + lVar14 * 8);
      uVar8 = 0;
      if (lVar1 < alStack_a8[0]) {
        uVar8 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      *(ulonglong *)(local_b0.Data + lVar14 * 8 + 8) = (ulonglong)uVar2 + lVar3;
      lVar14 = lVar1;
    } while (lVar1 < lVar10);
  }
  local_70 = &local_b4;
  local_b8[0] = '\0';
  local_68 = &local_res10;
  local_90.DataPtr = (void **)0x0;
  local_60 = &local_b0;
  local_90.ArrayNum = 0;
  local_58 = &local_98;
  local_50 = &local_res8;
  local_48 = local_res18;
  local_40 = local_b8;
  local_80 = UE::Core::Private::Function::
             TFunctionRefCaller<`FOodleDataCompression::DecompressParallel'::__l2::<lambda_1>,void,int>
             ::Call;
  local_78 = &local_70;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"OodleDecompressParallel.PF",(int)lVar10,1,
             (TFunctionRef<void___cdecl(int)> *)&local_80,local_res10._0_1_,Unbalanced,&local_90);
  FMemory::Free(pOVar12);
  bVar5 = local_b8[0] == '\0';
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return bVar5;
}

// ECompressionLevelFromString @ 1415bed60

bool __cdecl
FOodleDataCompression::ECompressionLevelFromString(wchar_t *param_1,ECompressionLevel *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  wchar_t **ppwVar4;
  
  ppwVar4 = &CompressionLevelNameMap[0].Name;
  uVar3 = 0;
  do {
    iVar1 = FGenericPlatformStricmp::Stricmp(*ppwVar4,param_1);
    if (iVar1 == 0) {
      uVar2 = (uint)CompressionLevelNameMap[uVar3].Level;
      goto LAB_1415bede4;
    }
    uVar3 = uVar3 + 1;
    ppwVar4 = ppwVar4 + 2;
  } while (uVar3 < 0xe);
  if ((((*param_1 != L'-') || (iVar1 = iswdigit(param_1[1]), iVar1 == 0)) &&
      (iVar1 = iswdigit(*param_1), iVar1 == 0)) || (uVar2 = _wtoi(param_1), 0xd < uVar2 + 4)) {
    return false;
  }
LAB_1415bede4:
  *param_2 = (ECompressionLevel)uVar2;
  return true;
}

// ECompressionLevelFromValue @ 1415bee10

bool __cdecl
FOodleDataCompression::ECompressionLevelFromValue(schar param_1,ECompressionLevel *param_2)

{
  if ((byte)(param_1 + 4U) < 0xe) {
    *param_2 = param_1;
    return true;
  }
  return false;
}

// ECompressionLevelToString @ 1415bee30

wchar_t * __cdecl FOodleDataCompression::ECompressionLevelToString(ECompressionLevel param_1)

{
  ulonglong uVar1;
  <unnamed_type_CompressionLevelNameMap> *p<Var2;
  
  uVar1 = 0;
  p<Var2 = CompressionLevelNameMap;
  do {
    if (p<Var2->Level == param_1) {
      return CompressionLevelNameMap[uVar1].Name;
    }
    uVar1 = uVar1 + 1;
    p<Var2 = p<Var2 + 1;
  } while (uVar1 < 0xe);
  return (wchar_t *)0x0;
}

// ECompressionLevelToString @ 1415bee70

bool __cdecl
FOodleDataCompression::ECompressionLevelToString(ECompressionLevel param_1,wchar_t **param_2)

{
  ulonglong uVar1;
  <unnamed_type_CompressionLevelNameMap> *p<Var2;
  
  uVar1 = 0;
  p<Var2 = CompressionLevelNameMap;
  do {
    if (p<Var2->Level == param_1) {
      *param_2 = CompressionLevelNameMap[uVar1].Name;
      return true;
    }
    uVar1 = uVar1 + 1;
    p<Var2 = p<Var2 + 1;
  } while (uVar1 < 0xe);
  return false;
}

// ECompressorFromString @ 1415beeb0

bool __cdecl FOodleDataCompression::ECompressorFromString(FString *param_1,ECompressor *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  wchar_t **ppwVar4;
  
  ppwVar4 = &CompressorNameMap[0].Name;
  uVar3 = 0;
  while( true ) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,*ppwVar4);
    if (iVar1 == 0) break;
    uVar3 = uVar3 + 1;
    ppwVar4 = ppwVar4 + 2;
    if (4 < uVar3) {
      return false;
    }
  }
  *param_2 = CompressorNameMap[uVar3].Compressor;
  return true;
}

// ECompressorToString @ 1415bef40

wchar_t * __cdecl FOodleDataCompression::ECompressorToString(ECompressor param_1)

{
  if (param_1 < (Leviathan|Selkie)) {
    return CompressorNameMap[param_1].Name;
  }
  return (wchar_t *)0x0;
}

// ECompressorToString @ 1415bef60

bool __cdecl FOodleDataCompression::ECompressorToString(ECompressor param_1,wchar_t **param_2)

{
  if (Leviathan < param_1) {
    return false;
  }
  *param_2 = CompressorNameMap[param_1].Name;
  return true;
}

// GetCommonUsageFromLegacyCompressionFlags @ 1415c5140

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ECompressionCommonUsage __cdecl
FOodleDataCompression::GetCommonUsageFromLegacyCompressionFlags(ECompressionFlags param_1)

{
  if (param_1 != COMPRESS_NoFlags) {
    if (param_1 == COMPRESS_BiasMemory) {
      return SlowerSmallerEncode;
    }
    if (param_1 == COMPRESS_BiasSpeed) {
      return FastRealtimeEncode;
    }
    if (param_1 == COMPRESS_ForPackaging) {
      return SlowestOfflineDistributionEncode;
    }
    if (1 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
    }
  }
  return Default;
}

// GetCompressorAndLevelForCommonUsage @ 1415c5310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FOodleDataCompression::GetCompressorAndLevelForCommonUsage
          (ECompressionCommonUsage param_1,ECompressor *param_2,ECompressionLevel *param_3)

{
  if (param_1 == Default) {
    *param_2 = Kraken;
    *param_3 = Fast;
    return;
  }
  if (param_1 == FastRealtimeEncode) {
    *param_2 = Mermaid;
    *param_3 = HyperFast2;
    return;
  }
  if (param_1 == SlowerSmallerEncode) {
    *param_2 = Kraken;
    *param_3 = Normal;
    return;
  }
  if (param_1 != SlowestOfflineDistributionEncode) {
    if (1 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
    }
    *param_2 = Selkie;
    *param_3 = None;
    return;
  }
  *param_2 = Kraken;
  *param_3 = Optimal2;
  return;
}

// GetGlobalOodleScratchBuffers @ 1415c6ff0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

OodleScratchBuffers * __cdecl FOodleDataCompression::GetGlobalOodleScratchBuffers(void)

{
  undefined1 auVar1 [16];
  OodleScratchBuffer *pOVar2;
  int iVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulonglong *puVar6;
  OodleScratchBuffer *lpCriticalSection;
  ulonglong uVar7;
  FLLMScope local_res8 [2];
  int local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    iVar3 = OodleLZDecoder_MemorySizeNeeded(OodleLZ_Compressor_Invalid,-1);
    GlobalOodleScratchBuffers.OodleScratchMemorySize =
         OodleLZ_GetCompressScratchMemBound
                   (OodleLZ_Compressor_Mermaid,OodleLZ_CompressionLevel_VeryFast,0x10000,
                    (OodleLZ_CompressOptions *)0x0);
    local_res10[0] = 2;
    if (GlobalOodleScratchBuffers.OodleScratchMemorySize < iVar3) {
      GlobalOodleScratchBuffers.OodleScratchMemorySize = (longlong)iVar3;
    }
    if ((GConfig != (FConfigCacheIni *)0x0) &&
       (FConfigCacheIni::GetInt
                  (GConfig,L"OodleDataCompressionFormat",L"PreallocatedBufferCount",local_res10,
                   &GEngineIni), local_res10[0] < 0)) {
      local_res10[0] = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
    }
    GlobalOodleScratchBuffers.OodleScratchBufferCount = local_res10[0];
    if (local_res10[0] != 0) {
      FLLMScope::FLLMScope
                (local_res8,LLMTagDeclaration_OodleData.UniqueName,false,None,Default,true);
      local_res18 = LLMTagDeclaration_OodleData.UniqueName;
      FMemScope::FMemScope(&local_res20,&local_res18,true);
      uVar7 = (ulonglong)GlobalOodleScratchBuffers.OodleScratchBufferCount;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      uVar4 = SUB168(ZEXT816(0x40) * auVar1,0);
      if (SUB168(ZEXT816(0x40) * auVar1,8) != 0) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar5 = uVar4 + 0x40;
      if (0xffffffffffffffbf < uVar4) {
        uVar5 = 0xffffffffffffffff;
      }
      puVar6 = operator_new__(uVar5,0x40);
      if (puVar6 == (ulonglong *)0x0) {
        GlobalOodleScratchBuffers.OodleScratches = (OodleScratchBuffer *)0x0;
        pOVar2 = GlobalOodleScratchBuffers.OodleScratches;
      }
      else {
        *puVar6 = uVar7;
        lpCriticalSection = (OodleScratchBuffer *)(puVar6 + 8);
        for (; pOVar2 = (OodleScratchBuffer *)(puVar6 + 8), uVar7 != 0; uVar7 = uVar7 - 1) {
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
          lpCriticalSection->OodleScratchMemory = (void *)0x0;
          lpCriticalSection = lpCriticalSection + 1;
        }
      }
      GlobalOodleScratchBuffers.OodleScratches = pOVar2;
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res8);
    }
    if (5 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)
                 &`public:___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleScratchBuffers(void)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
    }
    atexit(`FOodleDataCompression::GetGlobalOodleScratchBuffers'::__l2::
           _dynamic_atexit_destructor_for__GlobalOodleScratchBuffers__);
    _Init_thread_footer(&::_TSS0);
    return &GlobalOodleScratchBuffers;
  }
  return &GlobalOodleScratchBuffers;
}

// GetMaximumCompressedSize @ 1415c7580

long64 __cdecl FOodleDataCompression::GetMaximumCompressedSize(long64 param_1)

{
  return param_1 + ((longlong)
                    (param_1 + 0x3ffff + (ulonglong)((uint)(param_1 + 0x3ffff >> 0x3f) & 0x3ffff))
                   >> 0x12) * 2;
}

// OodleAlloc @ 1415d5eb0

void * __cdecl FOodleDataCompression::OodleAlloc(long64 param_1,int param_2)

{
  void *pvVar1;
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_18 [2];
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_OodleData.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_OodleData.UniqueName;
  FMemScope::FMemScope(local_18,&local_res20,true);
  pvVar1 = FMemory::Malloc(param_1,param_2);
  FMemScope::~FMemScope(local_18);
  FLLMScope::~FLLMScope(local_res18);
  return pvVar1;
}

// OodleDecode @ 1415d5f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OodleLZ_Decode_ThreadPhase": Some values do not have unique names */

long64 __thiscall
FOodleDataCompression::OodleScratchBuffers::OodleDecode
          (OodleScratchBuffers *this,void *param_1,long64 param_2,void *param_3,long64 param_4)

{
  long64 lVar1;
  BOOL BVar2;
  OodleLZ_Compressor OVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  FLLMScope *this_00;
  ulonglong uVar7;
  bool bVar8;
  FLLMScope local_res18 [2];
  void *local_res20;
  FMemScope local_58;
  FName local_50;
  FMemScope local_48 [2];
  
  bVar8 = -1 < CpuChannel->Enabled;
  local_res20 = param_3;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId342,"Oodle.Decode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
               ,0x156);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId342);
  }
  lVar1 = param_4;
  if (6 < (byte)OodleDataCompression._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
  }
  if (param_2 < 1) {
    if (3 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
      uVar6 = 0;
      goto LAB_1415d6322;
    }
  }
  else {
    if (*(char *)param_1 != '\0') {
      uVar6 = 0;
      uVar7 = uVar6;
      if (0 < this->OodleScratchBufferCount) {
        do {
          iVar4 = (int)uVar7;
          BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(this->OodleScratches + iVar4));
          if (BVar2 != 0) {
            if (this->OodleScratches[iVar4].OodleScratchMemory == (void *)0x0) {
              FLLMScope::FLLMScope
                        ((FLLMScope *)&param_4,LLMTagDeclaration_OodleData.UniqueName,false,None,
                         Default,true);
              local_50 = LLMTagDeclaration_OodleData.UniqueName;
              FMemScope::FMemScope(&local_58,&local_50,true);
              pvVar5 = FMemory::Malloc(this->OodleScratchMemorySize,0);
              this->OodleScratches[iVar4].OodleScratchMemory = pvVar5;
              if (this->OodleScratches[iVar4].OodleScratchMemory == (void *)0x0) {
                if (1 < (byte)OodleDataCompression._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                              ::__l75::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
                }
                FMemScope::~FMemScope(&local_58);
                this_00 = (FLLMScope *)&param_4;
                goto LAB_1415d630d;
              }
              FMemScope::~FMemScope(&local_58);
              FLLMScope::~FLLMScope((FLLMScope *)&param_4);
            }
            uVar6 = OodleLZ_Decompress(param_1,param_2,local_res20,lVar1,OodleLZ_FuzzSafe_Yes,
                                       OodleLZ_CheckCRC_Yes,OodleLZ_Verbosity_None,(void *)0x0,0,
                                       (_func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
                                        *)0x0,(void *)0x0,
                                       this->OodleScratches[iVar4].OodleScratchMemory,
                                       this->OodleScratchMemorySize,OodleLZ_Decode_ThreadPhaseAll);
            LeaveCriticalSection((LPCRITICAL_SECTION)(this->OodleScratches + iVar4));
            goto LAB_1415d6322;
          }
          uVar7 = (ulonglong)(iVar4 + 1U);
        } while ((int)(iVar4 + 1U) < this->OodleScratchBufferCount);
      }
      OVar3 = OodleLZ_GetChunkCompressor(param_1,param_2,(int *)0x0);
      if (OVar3 == OodleLZ_Compressor_Invalid) {
        if (3 < (byte)OodleDataCompression._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                      ::__l96::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
        }
      }
      else {
        iVar4 = OodleLZDecoder_MemorySizeNeeded(OVar3,lVar1);
        if (iVar4 < 1) {
          if (3 < (byte)OodleDataCompression._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                        ::__l117::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
            uVar6 = 0;
          }
        }
        else {
          FLLMScope::FLLMScope
                    (local_res18,LLMTagDeclaration_OodleData.UniqueName,false,None,Default,true);
          param_4._0_4_ = LLMTagDeclaration_OodleData.UniqueName.ComparisonIndex.Value;
          param_4._4_4_ = LLMTagDeclaration_OodleData.UniqueName.Number;
          FMemScope::FMemScope(local_48,(FName *)&param_4,true);
          pvVar5 = FMemory::Malloc((longlong)iVar4,0);
          if (pvVar5 == (void *)0x0) {
            if (1 < (byte)OodleDataCompression._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        ((FStaticBasicLogRecord *)
                         &`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                          ::K::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
            }
          }
          else {
            uVar6 = OodleLZ_Decompress(param_1,param_2,local_res20,lVar1,OodleLZ_FuzzSafe_Yes,
                                       OodleLZ_CheckCRC_Yes,OodleLZ_Verbosity_None,(void *)0x0,0,
                                       (_func___cdecl_OodleDecompressCallbackRet_void_ptr_uchar_ptr_long64_uchar_ptr_long64_long64_long64
                                        *)0x0,(void *)0x0,pvVar5,(longlong)iVar4,
                                       OodleLZ_Decode_ThreadPhaseAll);
            FMemory::Free(pvVar5);
          }
          FMemScope::~FMemScope(local_48);
          this_00 = local_res18;
LAB_1415d630d:
          FLLMScope::~FLLMScope(this_00);
        }
      }
      goto LAB_1415d6322;
    }
    if (3 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleDecode(void_const*___ptr64,__int64,void*___ptr64,__int64)___ptr64'
                  ::__l46::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
    }
  }
  uVar6 = 0;
LAB_1415d6322:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return uVar6;
}

// OodleEncode @ 1415d6370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

long64 __thiscall
FOodleDataCompression::OodleScratchBuffers::OodleEncode
          (OodleScratchBuffers *this,void *param_1,long64 param_2,void *param_3,long64 param_4,
          ECompressor param_5,ECompressionLevel param_6,bool param_7,long64 param_8)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  long64 lVar4;
  OodleLZ_CompressOptions *pOVar5;
  void *pvVar6;
  FStaticBasicLogRecord *pFVar7;
  ulonglong uVar8;
  <unnamed_type_CompressionLevelNameMap> *p<Var9;
  OodleLZ_Compressor OVar10;
  int iVar11;
  ulonglong uVar12;
  OodleLZ_CompressionLevel OVar13;
  bool bVar14;
  undefined1 auStackY_128 [32];
  FLLMScope local_d4;
  void *local_d0;
  void *local_c8;
  FMemScope local_c0;
  void *local_b8;
  FName local_b0;
  OodleLZ_CompressOptions local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  OVar13 = (OodleLZ_CompressionLevel)(char)param_6;
  bVar14 = -1 < CpuChannel->Enabled;
  local_d0 = (void *)param_2;
  local_c8 = param_3;
  local_b8 = param_1;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleEncode(void*___ptr64,__int64,void_const*___ptr64,__int64,FOodleDataCompression::ECompressor,FOodleDataCompression::ECompressionLevel,bool,__int64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId436,"Oodle.Encode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
               ,0x1b4);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleEncode(void*___ptr64,__int64,void_const*___ptr64,__int64,FOodleDataCompression::ECompressor,FOodleDataCompression::ECompressionLevel,bool,__int64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId436);
  }
  if (param_5 == NotSet) {
LAB_1415d644d:
    OVar10 = OodleLZ_Compressor_Invalid;
  }
  else if (param_5 == Selkie) {
    OVar10 = OodleLZ_Compressor_Selkie;
  }
  else if (param_5 == Mermaid) {
    OVar10 = OodleLZ_Compressor_Mermaid;
  }
  else if (param_5 == Kraken) {
    OVar10 = OodleLZ_Compressor_Kraken;
  }
  else {
    if (param_5 != Leviathan) {
      if (1 < (byte)OodleDataCompression._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Invalid_Compres_150621a00,
                   (FLogCategoryBase *)&OodleDataCompression);
      }
      goto LAB_1415d644d;
    }
    OVar10 = OodleLZ_Compressor_Leviathan;
  }
  if (0xd < (byte)(param_6 + Normal)) {
    if (1 < (byte)OodleDataCompression._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Invalid_Level___150621ab8,
                 (FLogCategoryBase *)&OodleDataCompression);
    }
    OVar13 = OodleLZ_CompressionLevel_Force32;
  }
  if ((OVar10 == OodleLZ_Compressor_Invalid) || (OVar13 == OodleLZ_CompressionLevel_Force32)) {
    if (1 < (byte)OodleDataCompression._0_1_) {
      pFVar7 = &`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleEncode(void*___ptr64,__int64,void_const*___ptr64,__int64,FOodleDataCompression::ECompressor,FOodleDataCompression::ECompressionLevel,bool,__int64)___ptr64'
                ::__l6::LOG_Static;
LAB_1415d683e:
      UE::Logging::Private::BasicLog<2>(pFVar7,(FLogCategoryBase *)&OodleDataCompression);
    }
  }
  else {
    lVar4 = OodleLZ_GetCompressedBufferSizeNeeded(OVar10,param_4);
    if (lVar4 <= (longlong)local_d0) {
      pOVar5 = OodleLZ_CompressOptions_GetDefault(OVar10,OVar13);
      local_a8.unused_was_verbosity = pOVar5->unused_was_verbosity;
      local_a8.minMatchLen = pOVar5->minMatchLen;
      local_a8.seekChunkReset = pOVar5->seekChunkReset;
      local_a8.seekChunkLen = pOVar5->seekChunkLen;
      local_a8.profile = pOVar5->profile;
      local_a8.dictionarySize = pOVar5->dictionarySize;
      local_a8.spaceSpeedTradeoffBytes = pOVar5->spaceSpeedTradeoffBytes;
      local_a8.unused_was_maxHuffmansPerChunk = pOVar5->unused_was_maxHuffmansPerChunk;
      local_a8.sendQuantumCRCs = pOVar5->sendQuantumCRCs;
      local_a8.maxLocalDictionarySize = pOVar5->maxLocalDictionarySize;
      local_a8.makeLongRangeMatcher = pOVar5->makeLongRangeMatcher;
      local_a8.matchTableSizeLog2 = pOVar5->matchTableSizeLog2;
      local_a8.jobify = pOVar5->jobify;
      local_a8._52_4_ = *(undefined4 *)&pOVar5->field_0x34;
      local_a8.jobifyUserPtr = pOVar5->jobifyUserPtr;
      local_a8.farMatchMinLen = pOVar5->farMatchMinLen;
      local_a8.farMatchOffsetLog2 = pOVar5->farMatchOffsetLog2;
      local_a8.reserved._0_8_ = *(undefined8 *)pOVar5->reserved;
      local_a8.reserved._8_8_ = *(undefined8 *)(pOVar5->reserved + 2);
      if (((param_7) && (local_a8.seekChunkReset = 1, local_a8.seekChunkLen = 0x40000, param_8 != 0)
          ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DictionaryBackup == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\OodleDataCompression.cpp"
                                   ,0x1ca,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        lVar4 = (*pcVar1)();
        return lVar4;
      }
      uVar8 = 0;
      lVar4 = 0;
      local_d0 = (void *)((longlong)local_c8 - param_8);
      uVar12 = uVar8;
      if (0 < this->OodleScratchBufferCount) {
        do {
          iVar11 = (int)uVar12;
          BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(this->OodleScratches + iVar11));
          if (BVar3 != 0) {
            if (this->OodleScratches[iVar11].OodleScratchMemory == (void *)0x0) {
              FLLMScope::FLLMScope
                        (&local_d4,LLMTagDeclaration_OodleData.UniqueName,false,None,Default,true);
              local_b0 = LLMTagDeclaration_OodleData.UniqueName;
              FMemScope::FMemScope(&local_c0,&local_b0,true);
              pvVar6 = FMemory::Malloc(this->OodleScratchMemorySize,0);
              this->OodleScratches[iVar11].OodleScratchMemory = pvVar6;
              if (this->OodleScratches[iVar11].OodleScratchMemory == (void *)0x0) {
                if (1 < (byte)OodleDataCompression._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleEncode(void*___ptr64,__int64,void_const*___ptr64,__int64,FOodleDataCompression::ECompressor,FOodleDataCompression::ECompressionLevel,bool,__int64)___ptr64'
                              ::__l66::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
                }
                FMemScope::~FMemScope(&local_c0);
                FLLMScope::~FLLMScope(&local_d4);
                goto LAB_1415d684c;
              }
              FMemScope::~FMemScope(&local_c0);
              FLLMScope::~FLLMScope(&local_d4);
            }
            lVar4 = OodleLZ_Compress(OVar10,local_c8,param_4,local_b8,OVar13,&local_a8,local_d0,
                                     (void *)0x0,this->OodleScratches[iVar11].OodleScratchMemory,
                                     this->OodleScratchMemorySize);
            LeaveCriticalSection((LPCRITICAL_SECTION)(this->OodleScratches + iVar11));
            if ((byte)OodleDataCompression._0_1_ < 7) goto LAB_1415d684c;
            p<Var9 = CompressionLevelNameMap;
            goto LAB_1415d6790;
          }
          uVar12 = (ulonglong)(iVar11 + 1U);
        } while ((int)(iVar11 + 1U) < this->OodleScratchBufferCount);
      }
      lVar4 = OodleLZ_Compress(OVar10,local_c8,param_4,local_b8,OVar13,&local_a8,local_d0,
                               (void *)0x0,(void *)0x0,0);
      if (6 < (byte)OodleDataCompression._0_1_) {
        p<Var9 = CompressionLevelNameMap;
        do {
          if (p<Var9->Level == param_6) break;
          uVar8 = uVar8 + 1;
          p<Var9 = p<Var9 + 1;
        } while (uVar8 < 0xe);
        UE::Logging::Private::BasicLog<7>
                  (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleEncode(void*___ptr64,__int64,void_const*___ptr64,__int64,FOodleDataCompression::ECompressor,FOodleDataCompression::ECompressionLevel,bool,__int64)___ptr64'
                    ::__l102::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
      }
      goto LAB_1415d684c;
    }
    if (1 < (byte)OodleDataCompression._0_1_) {
      pFVar7 = &`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleEncode(void*___ptr64,__int64,void_const*___ptr64,__int64,FOodleDataCompression::ECompressor,FOodleDataCompression::ECompressionLevel,bool,__int64)___ptr64'
                ::__l27::LOG_Static;
      goto LAB_1415d683e;
    }
  }
  lVar4 = 0;
LAB_1415d684c:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return lVar4;
  while( true ) {
    uVar8 = uVar8 + 1;
    p<Var9 = p<Var9 + 1;
    if (0xd < uVar8) break;
LAB_1415d6790:
    if (p<Var9->Level == param_6) break;
  }
  UE::Logging::Private::BasicLog<7>
            (&`public:___int64___cdecl_FOodleDataCompression::OodleScratchBuffers::OodleEncode(void*___ptr64,__int64,void_const*___ptr64,__int64,FOodleDataCompression::ECompressor,FOodleDataCompression::ECompressionLevel,bool,__int64)___ptr64'
              ::__l84::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
  goto LAB_1415d684c;
}

// OodleFree @ 1415d68b0

void __cdecl FOodleDataCompression::OodleFree(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// OodlePrintf @ 1415d68d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FOodleDataCompression::OodlePrintf(int param_1,char *param_2,int param_3,char *param_4)

{
  undefined1 auStack_158 [32];
  TStringBuilderBase<char> local_138;
  char local_118 [256];
  ulonglong local_18 [3];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (char *)local_18;
  TStringBuilderBase<char>::AppendV(&local_138,param_4,&stack0x00000028);
  if (3 < (byte)OodleDataCompression._0_1_) {
    if (local_138.End < local_138.CurPos + 1) {
      TStringBuilderBase<char>::Extend(&local_138,1);
    }
    *local_138.CurPos = '\0';
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&OodleDataCompression);
  }
  TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_138);
  return;
}

// StartupPreInit @ 1415f6c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FOodleDataCompression::StartupPreInit(void)

{
  undefined1 auStack_58 [32];
  OodleConfigValues local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.m_OodleLZ_Small_Buffer_LZ_Fallback_Size_Unused = 0;
  local_38.m_OodleLZ_BackwardsCompatible_MajorVersion = 0;
  local_38.m_OodleLZ_LW_LRM_step = 0;
  local_38.m_OodleLZ_LW_LRM_hashLength = 0;
  local_38.m_OodleLZ_LW_LRM_jumpbits = 0;
  local_38.m_OodleLZ_Decoder_Max_Stack_Size = 0;
  local_38.m_oodle_header_version = 0;
  Oodle_GetConfigValues(&local_38);
  local_38.m_OodleLZ_BackwardsCompatible_MajorVersion = 9;
  Oodle_SetConfigValues(&local_38);
  OodleCore_Plugins_SetAllocators(OodleAlloc,OodleFree);
  OodleCore_Plugins_SetPrintf(OodlePrintf);
  return;
}

