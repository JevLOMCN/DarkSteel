// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ~FVulkanViewableResource @ 145adcb90

void __thiscall FVulkanViewableResource::~FVulkanViewableResource(FVulkanViewableResource *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FVulkanViewableResource__6B_;
  if (this->LinkedViews != (FVulkanLinkedView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasLinkedViews()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                       ,0x232,
                       L"All linked views must have been removed before the underlying resource can be deleted."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateLinkedViews @ 145bd60d0

void __thiscall
FVulkanViewableResource::UpdateLinkedViews
          (FVulkanViewableResource *this,FVulkanContextArray *param_1)

{
  FVulkanLinkedView *pFVar1;
  
  for (pFVar1 = this->LinkedViews; pFVar1 != (FVulkanLinkedView *)0x0;
      pFVar1 = *(FVulkanLinkedView **)&pFVar1->field_0x40) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,param_1);
  }
  return;
}

