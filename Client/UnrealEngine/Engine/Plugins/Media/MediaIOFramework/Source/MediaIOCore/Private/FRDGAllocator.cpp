// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// Alloc<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters> @ 14d781780

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FParameters * __thiscall
FRDGAllocator::Alloc<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters>
          (FRDGAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  undefined8 *local_18 [2];
  
  puVar6 = FMemStackBase::Alloc(&this->MemStack,0x200,0x10);
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
    *puVar6 = &
              ___7__TObject_VFParameters_FMediaCaptureResamplePS_Resample_MediaCapture_UE___FRDGAllocator__6B_
    ;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    *(undefined4 *)(puVar6 + 0x22) = 0xffff0000;
    puVar6[0x23] = 0;
    puVar6[0x24] = 0;
    *(undefined4 *)(puVar6 + 0x25) = 0xffff0000;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    *(undefined4 *)(puVar6 + 0x28) = 0xffff0000;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    *(undefined4 *)(puVar6 + 0x2b) = 0xffff0000;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    *(undefined4 *)(puVar6 + 0x2e) = 0xffff0000;
    puVar6[0x2f] = 0;
    puVar6[0x30] = 0;
    *(undefined4 *)(puVar6 + 0x31) = 0xffff0000;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    *(undefined4 *)(puVar6 + 0x34) = 0xffff0000;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    *(undefined4 *)(puVar6 + 0x37) = 0xffff0000;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    *(undefined2 *)(puVar6 + 0x3a) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1d4) = 0;
    puVar6[0x3b] = 0xffffffffffffffff;
    puVar6[0x3c] = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x3d) = 0;
    *(undefined2 *)((longlong)puVar6 + 0x1ec) = 0;
    puVar6[0x3e] = 0;
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

