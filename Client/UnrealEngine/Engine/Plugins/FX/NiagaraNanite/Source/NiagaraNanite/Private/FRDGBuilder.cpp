// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 1

// AllocParameters<FNiagaraNaniteGPUSceneCS::FParameters> @ 14da3e840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FParameters * __thiscall
FRDGBuilder::AllocParameters<FNiagaraNaniteGPUSceneCS::FParameters>(FRDGBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  FParameters *pFVar7;
  longlong lVar8;
  undefined8 *local_18 [2];
  
  lVar8 = 0x10;
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x3d0,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar5 = (undefined8 *)0x0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FParameters *)(*pcVar2)();
      return pFVar7;
    }
  }
  else {
    puVar5[2] = 0;
    *puVar5 = &___7__TObject_VFParameters_FNiagaraNaniteGPUSceneCS___FRDGAllocator__6B_;
    puVar6 = puVar5 + 0x36;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[8] = 0;
    *(undefined1 *)(puVar5 + 9) = 1;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    do {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0x3f800000;
      puVar6 = puVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  local_18[0] = puVar5;
  if ((((undefined8 **)this->_padding_ <= local_18) &&
      (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FParameters *)(*pcVar2)();
    return pFVar7;
  }
  iVar4 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  *(undefined8 **)(this->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  return (FParameters *)(puVar5 + 2);
}

