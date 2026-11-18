// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// AddMatch @ 143233140

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
BuildPatchServices::FDeltaMatchProcessor::AddMatch
          (FDeltaMatchProcessor *this,FChunkMatchMeta *param_1,bool *param_2)

{
  int *piVar1;
  FChunkMatchMeta *pFVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  bool local_res8;
  
  uVar14 = 0;
  uVar17 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
    ::__l2::Invalidate.Match.ChunkGuid = (FGuid)ZEXT816(0);
    `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
    ::__l2::Invalidate.Match.DataOffset = 0;
    `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
    ::__l2::Invalidate.Match.WindowSize = 0;
    `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
    ::__l2::Invalidate.bSameFile = false;
    `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
    ::__l2::Invalidate.Range = (FBlockRange)ZEXT816(0);
    `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
    ::__l2::Invalidate.FileLocOffset = 0;
    _Init_thread_footer(&`public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  *param_2 = false;
  uVar15 = this->LastAcceptedIdx;
  if (uVar15 == 0xffffffff) {
    pFVar2 = (FChunkMatchMeta *)(this->Matches).AllocatorInstance.Data;
    if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Matches).ArrayMax)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    iVar9 = (this->Matches).ArrayNum;
    piVar1 = &(this->Matches).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,(ForAnyElementType *)this,piVar1);
    }
    (this->Matches).ArrayNum = iVar9 + 1;
    uVar5 = *(undefined8 *)&(param_1->Match).ChunkGuid;
    pFVar12 = (this->Matches).AllocatorInstance.Data;
    lVar11 = (longlong)iVar9 * 0x40;
    *(ulong64 *)(pFVar12 + lVar11) = (param_1->Match).DataOffset;
    *(undefined8 *)(pFVar12 + lVar11 + 8) = uVar5;
    uVar5 = *(undefined8 *)&(param_1->Match).WindowSize;
    *(undefined8 *)(pFVar12 + lVar11 + 0x10) = *(undefined8 *)&(param_1->Match).ChunkGuid.C;
    *(undefined8 *)(pFVar12 + lVar11 + 0x10 + 8) = uVar5;
    uVar6 = (param_1->Range).Size;
    *(ulong64 *)(pFVar12 + lVar11 + 0x20) = (param_1->Range).First;
    *(ulong64 *)(pFVar12 + lVar11 + 0x20 + 8) = uVar6;
    uVar6 = param_1->FileLocOffset;
    *(undefined8 *)(pFVar12 + lVar11 + 0x30) = *(undefined8 *)&param_1->bSameFile;
    *(ulong64 *)(pFVar12 + lVar11 + 0x30 + 8) = uVar6;
  }
  else {
    iVar9 = (this->Matches).ArrayNum;
    if ((int)uVar15 < iVar9) {
      do {
        uVar10 = uVar17;
        if ((int)uVar15 < iVar9) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        pFVar12 = (this->Matches).AllocatorInstance.Data;
        if (((*(longlong *)(pFVar12 + (longlong)(int)uVar15 * 0x40 + 0x28) != 0) &&
            ((param_1->Range).Size != 0)) &&
           (*(ulonglong *)(pFVar12 + (longlong)(int)uVar15 * 0x40 + 0x20) <=
            ((param_1->Range).Size - 1) + (param_1->Range).First)) {
          lVar11 = *(longlong *)(pFVar12 + (longlong)(int)uVar15 * 0x40 + 0x28);
          lVar3 = *(longlong *)(pFVar12 + (longlong)(int)uVar15 * 0x40 + 0x20);
          if (((param_1->Range).Size == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                                 ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          if ((param_1->Range).First <= (ulonglong)(lVar11 + -1 + lVar3)) break;
        }
        this->LastAcceptedIdx = this->LastAcceptedIdx + 1;
        uVar15 = this->LastAcceptedIdx;
        iVar9 = (this->Matches).ArrayNum;
      } while ((int)uVar15 < iVar9);
    }
    if ((((param_1->Match).ChunkGuid.A == 1) && ((param_1->Match).ChunkGuid.B == 0)) &&
       (((param_1->Match).ChunkGuid.C == 0 && ((param_1->Match).ChunkGuid.D < 0x100)))) {
      uVar17 = this->LastAcceptedIdx;
      if ((-1 < (int)uVar17) && (iVar9 = (this->Matches).ArrayNum, (int)uVar17 < iVar9)) {
        uVar15 = iVar9 - uVar17;
        if (((int)(uVar15 | uVar17) < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        if (uVar15 != 0) {
          pFVar12 = (this->Matches).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x40;
          iVar9 = ((this->Matches).ArrayNum - uVar17) - uVar15;
          if (iVar9 != 0) {
            memmove(pFVar12,pFVar12 + (longlong)(int)uVar15 * 0x40,(longlong)iVar9 << 6);
          }
          piVar1 = &(this->Matches).ArrayNum;
          *piVar1 = *piVar1 - uVar15;
        }
      }
      pFVar2 = (FChunkMatchMeta *)(this->Matches).AllocatorInstance.Data;
      if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Matches).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = (this->Matches).ArrayNum;
      piVar1 = &(this->Matches).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,(ForAnyElementType *)this,piVar1);
      }
      (this->Matches).ArrayNum = iVar9 + 1;
      uVar5 = *(undefined8 *)&(param_1->Match).ChunkGuid;
      pFVar12 = (this->Matches).AllocatorInstance.Data;
      lVar11 = (longlong)iVar9 * 0x40;
      *(ulong64 *)(pFVar12 + lVar11) = (param_1->Match).DataOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 8) = uVar5;
      uVar5 = *(undefined8 *)&(param_1->Match).WindowSize;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10) = *(undefined8 *)&(param_1->Match).ChunkGuid.C;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10 + 8) = uVar5;
      uVar6 = (param_1->Range).Size;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20) = (param_1->Range).First;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20 + 8) = uVar6;
      uVar6 = param_1->FileLocOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 0x30) = *(undefined8 *)&param_1->bSameFile;
      *(ulong64 *)(pFVar12 + lVar11 + 0x30 + 8) = uVar6;
      *param_2 = true;
      return true;
    }
    iVar9 = this->LastAcceptedIdx;
    uVar18 = (ulonglong)iVar9;
    uVar15 = 0;
    if ((iVar9 < 0) || (iVar21 = (this->Matches).ArrayNum, iVar21 <= iVar9)) {
      pFVar2 = (FChunkMatchMeta *)(this->Matches).AllocatorInstance.Data;
      if ((pFVar2 <= param_1) &&
         ((param_1 < pFVar2 + (this->Matches).ArrayMax &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)))) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = (this->Matches).ArrayNum;
      piVar1 = &(this->Matches).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,(ForAnyElementType *)this,piVar1);
      }
      (this->Matches).ArrayNum = iVar9 + 1;
      uVar5 = *(undefined8 *)&(param_1->Match).ChunkGuid;
      pFVar12 = (this->Matches).AllocatorInstance.Data;
      lVar11 = (longlong)iVar9 * 0x40;
      *(ulong64 *)(pFVar12 + lVar11) = (param_1->Match).DataOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 8) = uVar5;
      uVar5 = *(undefined8 *)&(param_1->Match).WindowSize;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10) = *(undefined8 *)&(param_1->Match).ChunkGuid.C;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10 + 8) = uVar5;
      uVar6 = (param_1->Range).Size;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20) = (param_1->Range).First;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20 + 8) = uVar6;
      uVar6 = param_1->FileLocOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 0x30) = *(undefined8 *)&param_1->bSameFile;
      *(ulong64 *)(pFVar12 + lVar11 + 0x30 + 8) = uVar6;
      iVar9 = (this->Matches).ArrayNum;
      this->LastAcceptedIdx = iVar9 + -1;
      if (param_1->bSameFile == false) {
        return true;
      }
      uVar17 = iVar9 - 2;
      if ((int)uVar17 < iVar9) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar12 = (this->Matches).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x28) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      lVar11 = *(longlong *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x20);
      lVar3 = *(longlong *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x28);
      if (((param_1->Range).Size == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (((pFVar12[(longlong)(int)uVar17 * 0x40 + 0x30] != (FScriptContainerElement)0x0) &&
          (lVar11 + lVar3 == (param_1->Range).First)) &&
         (*(ulong64 *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x38) == param_1->FileLocOffset)) {
        *param_2 = true;
        return true;
      }
      *param_2 = false;
      return true;
    }
    if (param_1->bSameFile == false) {
      lVar11 = uVar18 << 6;
      while (iVar9 = (int)uVar18, iVar9 < (this->Matches).ArrayNum) {
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return (bool)uVar8;
        }
        if ((this->Matches).AllocatorInstance.Data[lVar11 + 0x30] != (FScriptContainerElement)0x0) {
          return false;
        }
        lVar11 = lVar11 + 0x40;
        uVar18 = (ulonglong)(iVar9 + 1);
      }
      pFVar2 = (FChunkMatchMeta *)(this->Matches).AllocatorInstance.Data;
      if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Matches).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = (this->Matches).ArrayNum;
      piVar1 = &(this->Matches).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,(ForAnyElementType *)this,piVar1);
      }
      (this->Matches).ArrayNum = iVar9 + 1;
      uVar5 = *(undefined8 *)&(param_1->Match).ChunkGuid;
      pFVar12 = (this->Matches).AllocatorInstance.Data;
      lVar11 = (longlong)iVar9 * 0x40;
      *(ulong64 *)(pFVar12 + lVar11) = (param_1->Match).DataOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 8) = uVar5;
      uVar5 = *(undefined8 *)&(param_1->Match).WindowSize;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10) = *(undefined8 *)&(param_1->Match).ChunkGuid.C;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10 + 8) = uVar5;
      uVar6 = (param_1->Range).Size;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20) = (param_1->Range).First;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20 + 8) = uVar6;
      uVar6 = param_1->FileLocOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 0x30) = *(undefined8 *)&param_1->bSameFile;
      *(ulong64 *)(pFVar12 + lVar11 + 0x30 + 8) = uVar6;
      return true;
    }
    uVar10 = uVar17;
    if ((int)(iVar21 - 1U) < iVar21) {
      uVar10 = ~(iVar21 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    uVar10 = (this->Matches).ArrayNum;
    uVar18 = (ulonglong)(int)uVar10;
    lVar11 = uVar18 - 1;
    pFVar12 = (this->Matches).AllocatorInstance.Data;
    if ((*(ulong64 *)(pFVar12 + lVar11 * 0x40 + 0x20) != (param_1->Range).First) ||
       (*(ulong64 *)(pFVar12 + lVar11 * 0x40 + 0x28) != (param_1->Range).Size)) {
      uVar19 = (ulonglong)this->LastAcceptedIdx;
      local_res8 = false;
      if (this->LastAcceptedIdx < (int)uVar10) {
        lVar11 = uVar19 << 6;
        do {
          uVar16 = (uint)uVar19;
          uVar17 = uVar15;
          if ((int)uVar16 < (int)uVar18) {
            uVar17 = ~uVar16 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar12 = (this->Matches).AllocatorInstance.Data + lVar11;
          if ((pFVar12[0x30] == (FScriptContainerElement)0x0) ||
             (param_1->FileLocOffset < *(ulonglong *)(pFVar12 + 0x38))) {
            uVar5 = `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                    ::__l2::Invalidate.Match.ChunkGuid._0_8_;
            *(ulong64 *)pFVar12 =
                 `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                 ::__l2::Invalidate.Match.DataOffset;
            *(undefined8 *)(pFVar12 + 8) = uVar5;
            local_res8 = true;
            uVar6 = CONCAT44(`public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                             ::__l2::Invalidate.Match._28_4_,
                             `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                             ::__l2::Invalidate.Match.WindowSize);
            *(undefined8 *)(pFVar12 + 0x10) =
                 `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                 ::__l2::Invalidate.Match.ChunkGuid._8_8_;
            *(ulong64 *)(pFVar12 + 0x18) = uVar6;
            *(FBlockRange *)(pFVar12 + 0x20) =
                 `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                 ::__l2::Invalidate.Range;
            uVar6 = `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                    ::__l2::Invalidate.FileLocOffset;
            *(ulong64 *)(pFVar12 + 0x30) =
                 CONCAT71(`public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                          ::__l2::Invalidate._49_7_,
                          `public:_bool___cdecl_BuildPatchServices::FDeltaMatchProcessor::AddMatch(BuildPatchServices::FChunkMatchMeta_const&___ptr64,bool&___ptr64)___ptr64'
                          ::__l2::Invalidate.bSameFile);
            *(ulong64 *)(pFVar12 + 0x38) = uVar6;
          }
          uVar10 = (this->Matches).ArrayNum;
          uVar18 = (ulonglong)uVar10;
          uVar19 = (ulonglong)(uVar16 + 1);
          lVar11 = lVar11 + 0x40;
        } while ((int)(uVar16 + 1) < (int)uVar10);
      }
      if (uVar10 != 0) {
        pFVar12 = (this->Matches).AllocatorInstance.Data;
        lVar11 = (longlong)(int)uVar10;
        bVar7 = ((*(int *)(pFVar12 + 0x14) != 0 || *(int *)(pFVar12 + 0x10) != 0) ||
                *(int *)(pFVar12 + 0xc) != 0) || *(int *)(pFVar12 + 8) != 0;
        uVar18 = uVar14;
        uVar19 = uVar14;
        do {
          iVar9 = (int)uVar14;
          uVar18 = uVar18 + 1;
          uVar14 = (ulonglong)(iVar9 + 1);
          if ((longlong)uVar18 < lVar11) {
            pFVar13 = pFVar12 + uVar18 * 0x40 + 0x10;
            do {
              if (bVar7 != (((*(int *)(pFVar13 + -8) != 0 || *(int *)(pFVar13 + -4) != 0) ||
                            *(int *)(pFVar13 + 4) != 0) || *(int *)pFVar13 != 0)) break;
              uVar14 = (ulonglong)((int)uVar14 + 1);
              uVar18 = uVar18 + 1;
              pFVar13 = pFVar13 + 0x40;
            } while ((longlong)uVar18 < lVar11);
          }
          iVar21 = (int)uVar14 - iVar9;
          if (bVar7 != false) {
            iVar20 = (int)uVar19;
            if (iVar20 != iVar9) {
              memmove(pFVar12 + (longlong)iVar20 * 0x40,pFVar12 + (longlong)iVar9 * 0x40,
                      (longlong)iVar21 << 6);
            }
            uVar19 = (ulonglong)(uint)(iVar20 + iVar21);
          }
          bVar7 = (bool)(bVar7 ^ 1);
        } while ((longlong)uVar18 < lVar11);
        (this->Matches).ArrayNum = (int)uVar19;
      }
      if (local_res8 == false) {
        return false;
      }
      pFVar2 = (FChunkMatchMeta *)(this->Matches).AllocatorInstance.Data;
      if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Matches).ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar9 = (this->Matches).ArrayNum;
      piVar1 = &(this->Matches).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,(ForAnyElementType *)this,piVar1);
      }
      (this->Matches).ArrayNum = iVar9 + 1;
      uVar5 = *(undefined8 *)&(param_1->Match).ChunkGuid;
      pFVar12 = (this->Matches).AllocatorInstance.Data;
      lVar11 = (longlong)iVar9 * 0x40;
      *(ulong64 *)(pFVar12 + lVar11) = (param_1->Match).DataOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 8) = uVar5;
      uVar5 = *(undefined8 *)&(param_1->Match).WindowSize;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10) = *(undefined8 *)&(param_1->Match).ChunkGuid.C;
      *(undefined8 *)(pFVar12 + lVar11 + 0x10 + 8) = uVar5;
      uVar6 = (param_1->Range).Size;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20) = (param_1->Range).First;
      *(ulong64 *)(pFVar12 + lVar11 + 0x20 + 8) = uVar6;
      uVar6 = param_1->FileLocOffset;
      *(undefined8 *)(pFVar12 + lVar11 + 0x30) = *(undefined8 *)&param_1->bSameFile;
      *(ulong64 *)(pFVar12 + lVar11 + 0x30 + 8) = uVar6;
      iVar9 = (this->Matches).ArrayNum;
      this->LastAcceptedIdx = iVar9 + -1;
      if (param_1->bSameFile == false) {
        return local_res8;
      }
      if (iVar9 + -1 < 1) {
        return local_res8;
      }
      uVar17 = iVar9 - 2;
      if ((int)uVar17 < iVar9) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      pFVar12 = (this->Matches).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x28) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x17,L"Using GetLast for a 0 size range is invalid."), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      lVar11 = *(longlong *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x28);
      lVar3 = *(longlong *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x20);
      if (((param_1->Range).Size == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Core\\BlockRange.h"
                             ,0x11,L"Using GetFirst for a 0 size range is invalid."), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (((pFVar12[(longlong)(int)uVar17 * 0x40 + 0x30] != (FScriptContainerElement)0x0) &&
          (lVar11 + lVar3 == (param_1->Range).First)) &&
         (*(ulong64 *)(pFVar12 + (longlong)(int)uVar17 * 0x40 + 0x38) == param_1->FileLocOffset)) {
        *param_2 = true;
        return local_res8;
      }
      *param_2 = false;
      return local_res8;
    }
    if (*(ulonglong *)(pFVar12 + lVar11 * 0x40 + 0x38) <= param_1->FileLocOffset) {
      return false;
    }
    if ((int)(uVar10 - 1) < (int)uVar10) {
      uVar17 = ~(uVar10 - 1) >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return (bool)uVar8;
    }
    uVar5 = *(undefined8 *)&(param_1->Match).ChunkGuid;
    pFVar12 = (this->Matches).AllocatorInstance.Data;
    lVar11 = (longlong)(this->Matches).ArrayNum * 0x40;
    *(ulong64 *)(pFVar12 + lVar11 + -0x40) = (param_1->Match).DataOffset;
    *(undefined8 *)(pFVar12 + lVar11 + -0x40 + 8) = uVar5;
    uVar5 = *(undefined8 *)&(param_1->Match).WindowSize;
    *(undefined8 *)(pFVar12 + lVar11 + -0x30) = *(undefined8 *)&(param_1->Match).ChunkGuid.C;
    *(undefined8 *)(pFVar12 + lVar11 + -0x30 + 8) = uVar5;
    uVar6 = (param_1->Range).Size;
    *(ulong64 *)(pFVar12 + lVar11 + -0x20) = (param_1->Range).First;
    *(ulong64 *)(pFVar12 + lVar11 + -0x20 + 8) = uVar6;
    uVar6 = param_1->FileLocOffset;
    *(undefined8 *)(pFVar12 + lVar11 + -0x10) = *(undefined8 *)&param_1->bSameFile;
    *(ulong64 *)(pFVar12 + lVar11 + -0x10 + 8) = uVar6;
  }
  this->LastAcceptedIdx = (this->Matches).ArrayNum + -1;
  return true;
}

