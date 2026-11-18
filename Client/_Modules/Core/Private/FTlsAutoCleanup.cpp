// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FTlsAutoCleanup @ 141481ca0

void __thiscall FTlsAutoCleanup::~FTlsAutoCleanup(FTlsAutoCleanup *this)

{
  *this = (FTlsAutoCleanup)&___7FTlsAutoCleanup__6B_;
  return;
}

// Register @ 1417098f0

void __thiscall FTlsAutoCleanup::Register(FTlsAutoCleanup *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  FTlsAutoCleanup *local_18 [2];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0xa08) & 1) == 0) {
    *(uint *)(lVar1 + 0xa08) = *(uint *)(lVar1 + 0xa08) | 1;
    __tlregdtor(`FTlsAutoCleanup::Register'::__l2::_dynamic_atexit_destructor_for__TlsInstances__);
  }
  pFVar5 = (ForAnyElementType *)(lVar1 + 0x9e0);
  local_18[0] = this;
  if ((pFVar5->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar5->Data + (longlong)*(int *)(lVar1 + 0x9ec) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x9e8);
  if (iVar4 == *(int *)(lVar1 + 0x9ec)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,(int *)(lVar1 + 0x9ec));
  }
  *(int *)(lVar1 + 0x9e8) = iVar4 + 1;
  *(FTlsAutoCleanup **)(pFVar5->Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

