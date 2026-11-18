// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// GetDepthStencilClearValue @ 145ae6630

void __thiscall
FRHITexture::GetDepthStencilClearValue(FRHITexture *this,float *param_1,uint *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(this->_padding_ + 0x20))();
  if (*(int *)(lVar3 + 8) != 2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<456935519012520236>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,300,"ColorBinding == EClearBinding::EDepthStencilBound");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = *(float *)(lVar3 + 0xc);
  *param_2 = *(uint *)(lVar3 + 0x10);
  return;
}

