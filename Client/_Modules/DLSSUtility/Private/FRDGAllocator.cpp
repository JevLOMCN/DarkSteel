// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSSUtility
// Functions: 1

// Alloc<FGBufferResolvePS::FParameters> @ 14de06880

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall FRDGAllocator::Alloc<FGBufferResolvePS::FParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x270,0x10);
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
    *(undefined1 *)(puVar6 + 3) = 1;
    *puVar6 = &___7__TObject_VFParameters_FGBufferResolvePS___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    *(undefined1 *)(puVar6 + 5) = 1;
    *(undefined1 *)(puVar6 + 7) = 1;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    *(undefined4 *)(puVar6 + 0x30) = 0xffff0000;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    *(undefined4 *)(puVar6 + 0x33) = 0xffff0000;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    *(undefined4 *)(puVar6 + 0x36) = 0xffff0000;
    puVar6[0x37] = 0;
    puVar6[0x38] = 0;
    *(undefined4 *)(puVar6 + 0x39) = 0xffff0000;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    *(undefined4 *)(puVar6 + 0x3c) = 0xffff0000;
    puVar6[0x3d] = 0;
    puVar6[0x3e] = 0;
    *(undefined4 *)(puVar6 + 0x3f) = 0xffff0000;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    *(undefined4 *)(puVar6 + 0x42) = 0xffff0000;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    *(undefined4 *)(puVar6 + 0x45) = 0xffff0000;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    *(undefined2 *)(puVar6 + 0x48) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x244) = 0;
    puVar6[0x49] = 0xffffffffffffffff;
    puVar6[0x4a] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x4b) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x25c) = 0;
    puVar6[0x4c] = 0;
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

