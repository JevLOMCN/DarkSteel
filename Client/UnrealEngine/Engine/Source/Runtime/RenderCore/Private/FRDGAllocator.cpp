// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// FRDGAllocator @ 145d8bae0

FRDGAllocator * __thiscall FRDGAllocator::FRDGAllocator(FRDGAllocator *this,FRDGAllocator *param_1)

{
  TArray<FRDGAllocator::FObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRDGAllocator::FObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRDGAllocator *pFVar6;
  
  FMemStackBase::FMemStackBase(&this->MemStack,Small);
  pTVar1 = &this->Objects;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  FMemStackBase::FreeChunks(&this->MemStack,(FTaggedMemory *)0x0);
  pTVar2 = &param_1->Objects;
  (this->MemStack).Top = (param_1->MemStack).Top;
  (this->MemStack).End = (param_1->MemStack).End;
  (this->MemStack).TopChunk = (param_1->MemStack).TopChunk;
  (this->MemStack).TopMark = (param_1->MemStack).TopMark;
  (this->MemStack).NumMarks = (param_1->MemStack).NumMarks;
  (this->MemStack).bShouldEnforceAllocMarks = (param_1->MemStack).bShouldEnforceAllocMarks;
  (param_1->MemStack).Top = (uchar *)0x0;
  (param_1->MemStack).End = (uchar *)0x0;
  (param_1->MemStack).TopChunk = (FTaggedMemory *)0x0;
  (param_1->MemStack).NumMarks = 0;
  (param_1->MemStack).bShouldEnforceAllocMarks = false;
  if (pTVar1 != pTVar2) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Objects).ArrayNum = (param_1->Objects).ArrayNum;
    (this->Objects).ArrayMax = (param_1->Objects).ArrayMax;
    (param_1->Objects).ArrayNum = 0;
    (param_1->Objects).ArrayMax = 0;
  }
  if ((param_1->Objects).ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.Objects.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphAllocator.cpp"
                       ,0x24,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRDGAllocator *)(*pcVar4)();
      return pFVar6;
    }
  }
  return this;
}

// FRDGAllocator @ 145d8bbe0

FRDGAllocator * __thiscall FRDGAllocator::FRDGAllocator(FRDGAllocator *this)

{
  FMemStackBase::FMemStackBase(&this->MemStack,Large);
  (this->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Objects).ArrayNum = 0;
  (this->Objects).ArrayMax = 0;
  return this;
}

// ~FRDGAllocator @ 145d909c0

void __thiscall FRDGAllocator::~FRDGAllocator(FRDGAllocator *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  ReleaseAll(this);
  pFVar1 = (this->Objects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((GIsCriticalError == false) && ((this->MemStack).NumMarks != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->MemStack,(FTaggedMemory *)0x0);
  return;
}

// operator= @ 145d916c0

FRDGAllocator * __thiscall FRDGAllocator::operator=(FRDGAllocator *this,FRDGAllocator *param_1)

{
  TArray<FRDGAllocator::FObject_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRDGAllocator::FObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRDGAllocator *pFVar6;
  
  FMemStackBase::FreeChunks(&this->MemStack,(FTaggedMemory *)0x0);
  pTVar1 = &param_1->Objects;
  (this->MemStack).Top = (param_1->MemStack).Top;
  pTVar2 = &this->Objects;
  (this->MemStack).End = (param_1->MemStack).End;
  (this->MemStack).TopChunk = (param_1->MemStack).TopChunk;
  (this->MemStack).TopMark = (param_1->MemStack).TopMark;
  (this->MemStack).NumMarks = (param_1->MemStack).NumMarks;
  (this->MemStack).bShouldEnforceAllocMarks = (param_1->MemStack).bShouldEnforceAllocMarks;
  (param_1->MemStack).Top = (uchar *)0x0;
  (param_1->MemStack).End = (uchar *)0x0;
  (param_1->MemStack).TopChunk = (FTaggedMemory *)0x0;
  (param_1->MemStack).NumMarks = 0;
  (param_1->MemStack).bShouldEnforceAllocMarks = false;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Objects).ArrayNum = (param_1->Objects).ArrayNum;
    (this->Objects).ArrayMax = (param_1->Objects).ArrayMax;
    (param_1->Objects).ArrayNum = 0;
    (param_1->Objects).ArrayMax = 0;
  }
  if ((param_1->Objects).ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Other.Objects.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphAllocator.cpp"
                       ,0x24,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FRDGAllocator *)(*pcVar4)();
      return pFVar6;
    }
  }
  return this;
}

// GetTLS @ 145dbbc30

FRDGAllocator * __cdecl FRDGAllocator::GetTLS(void)

{
  code *pcVar1;
  bool bVar2;
  FRDGAllocator *pFVar3;
  
  pFVar3 = TlsGetValue(AllocatorTLSSlot);
  if ((pFVar3 == (FRDGAllocator *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphAllocator.cpp"
                         ,0x36,L"Attempted to access RDG allocator outside of FRDGAllocatorScope"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRDGAllocator *)(*pcVar1)();
    return pFVar3;
  }
  return pFVar3;
}

// ReleaseAll @ 145dc6a10

void __thiscall FRDGAllocator::ReleaseAll(FRDGAllocator *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (!__CsvProfilerStat74) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RDGAllocator_Clear");
    __CsvProfilerStat74 = true;
  }
  if ((GRDGVerboseCSVStats == 0) || (bVar2 = IsInRenderingThread(), !bVar2)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCsvProfiler::BeginExclusiveStat("RDGAllocator_Clear","CSV_RDGAllocator_Clear");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"FRDGAllocator::ReleaseAll",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphAllocator.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  uVar5 = (this->Objects).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Objects).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)**(undefined8 **)((this->Objects).AllocatorInstance.Data + lVar6))();
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  (this->Objects).ArrayNum = 0;
  if ((this->Objects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Objects).AllocatorInstance,0,&(this->Objects).ArrayMax);
  }
  if (((this->MemStack).NumMarks != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NumMarks",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0xad,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FMemStackBase::FreeChunks(&this->MemStack,(FTaggedMemory *)0x0);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar2) {
    return;
  }
  FCsvProfiler::EndExclusiveStat("RDGAllocator_Clear");
  return;
}

// Alloc<FVisualizeTexturePS::FParameters> @ 145ec1da0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FVisualizeTexturePS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x1b0,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
    *puVar6 = &___7__TObject_VFParameters_FVisualizeTexturePS___FRDGAllocator__6B_;
    puVar6[4] = 0;
    *(undefined4 *)(puVar6 + 5) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = 0x3f800000;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    *(undefined4 *)(puVar6 + 0x18) = 0xffff0000;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    *(undefined4 *)(puVar6 + 0x1b) = 0xffff0000;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    *(undefined4 *)(puVar6 + 0x1e) = 0xffff0000;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    *(undefined4 *)(puVar6 + 0x21) = 0xffff0000;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0;
    *(undefined4 *)(puVar6 + 0x24) = 0xffff0000;
    puVar6[0x25] = 0;
    puVar6[0x26] = 0;
    *(undefined4 *)(puVar6 + 0x27) = 0xffff0000;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    *(undefined4 *)(puVar6 + 0x2a) = 0xffff0000;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    *(undefined4 *)(puVar6 + 0x2d) = 0xffff0000;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    *(undefined2 *)(puVar6 + 0x30) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x184) = 0;
    puVar6[0x31] = 0xffffffffffffffff;
    puVar6[0x32] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x33) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x19c) = 0;
    puVar6[0x34] = 0;
  }
  pFVar2 = (this->Objects).AllocatorInstance.Data;
  local_18[0] = puVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Objects).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->Objects).ArrayNum;
  piVar1 = &(this->Objects).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Objects).AllocatorInstance,piVar1);
  }
  (this->Objects).ArrayNum = iVar5 + 1;
  *(undefined8 **)((this->Objects).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return (FParameters *)(puVar6 + 2);
}

