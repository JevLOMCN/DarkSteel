// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 1

// Alloc<FOpenColorIOInvalidShaderParameters> @ 14d765ea0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenColorIOInvalidShaderParameters * __thiscall
FRDGAllocator::Alloc<FOpenColorIOInvalidShaderParameters>(FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FOpenColorIOInvalidShaderParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x130,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FOpenColorIOInvalidShaderParameters *)(*pcVar3)();
      return pFVar7;
    }
  }
  else {
    *puVar6 = &___7__TObject_VFOpenColorIOInvalidShaderParameters___FRDGAllocator__6B_;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0xffff0000;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined4 *)(puVar6 + 0xb) = 0xffff0000;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0xffff0000;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    *(undefined4 *)(puVar6 + 0x11) = 0xffff0000;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    *(undefined4 *)(puVar6 + 0x14) = 0xffff0000;
    puVar6[0x15] = 0;
    puVar6[0x16] = 0;
    *(undefined4 *)(puVar6 + 0x17) = 0xffff0000;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    *(undefined4 *)(puVar6 + 0x1a) = 0xffff0000;
    puVar6[0x1b] = 0;
    puVar6[0x1c] = 0;
    *(undefined4 *)(puVar6 + 0x1d) = 0xffff0000;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    *(undefined2 *)(puVar6 + 0x20) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x104) = 0;
    puVar6[0x21] = 0xffffffffffffffff;
    puVar6[0x22] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x23) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x11c) = 0;
    puVar6[0x24] = 0;
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
      pFVar7 = (FOpenColorIOInvalidShaderParameters *)(*pcVar3)();
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
  return (FOpenColorIOInvalidShaderParameters *)(puVar6 + 2);
}

