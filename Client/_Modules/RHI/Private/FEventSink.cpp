// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FEventSink @ 145c45110

FEventSink * __thiscall UE::RHI::GPUProfiler::FEventSink::FEventSink(FEventSink *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::RHI::GPUProfiler::FEventSink_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FEventSink *pFVar6;
  FEventSink *local_18 [2];
  
  *this = (FEventSink)&___7FEventSink_GPUProfiler_RHI_UE__6B_;
  pTVar5 = GetSinks();
  pFVar1 = (pTVar5->AllocatorInstance).Data;
  local_18[0] = this;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar5->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FEventSink *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 == pTVar5->ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar4 + 1;
  *(FEventSink **)((pTVar5->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return this;
}

// ~FEventSink @ 145c47df0

void __thiscall UE::RHI::GPUProfiler::FEventSink::~FEventSink(FEventSink *this)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::RHI::GPUProfiler::FEventSink_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  *this = (FEventSink)&___7FEventSink_GPUProfiler_RHI_UE__6B_;
  pTVar2 = GetSinks();
  pFVar1 = (pTVar2->AllocatorInstance).Data;
  pFVar4 = pFVar1;
  if (pFVar1 != pFVar1 + (longlong)pTVar2->ArrayNum * 8) {
    while (*(FEventSink **)pFVar4 != this) {
      pFVar4 = pFVar4 + 8;
      if (pFVar4 == pFVar1 + (longlong)pTVar2->ArrayNum * 8) {
        return;
      }
    }
    iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 3);
    if (iVar3 != -1) {
      memmove(pFVar1 + (longlong)iVar3 * 8,pFVar1 + (longlong)iVar3 * 8 + 8,
              (longlong)((pTVar2->ArrayNum - iVar3) + -1) << 3);
      pTVar2->ArrayNum = pTVar2->ArrayNum + -1;
    }
  }
  return;
}

