// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12DepthStencilView @ 145a8ebb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DepthStencilView * __thiscall
FD3D12DepthStencilView::FD3D12DepthStencilView
          (FD3D12DepthStencilView *this,FD3D12Device *param_1,FD3D12DepthStencilView *param_2)

{
  code *pcVar1;
  bool bVar2;
  FD3D12DepthStencilView *pFVar3;
  
  *(FD3D12Device **)&this->field_0x8 = param_1;
  *(undefined ***)this = &___7FD3D12View__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined2 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x2a = 0;
  *(undefined2 *)&this->field_0x32 = 0;
  if ((param_1->OfflineDescriptorManagers).ArrayNum < 4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12DepthStencilView *)(*pcVar1)();
      return pFVar3;
    }
  }
  FD3D12OfflineDescriptorManager::AllocateHeapSlot
            ((FD3D12OfflineDescriptorManager *)
             ((param_1->OfflineDescriptorManagers).AllocatorInstance.InlineData + 3),
             (FD3D12OfflineDescriptor *)&this->field_0x38);
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  this->field_0x4c = 9;
  this->field_0x50 = param_2 == (FD3D12DepthStencilView *)0x0;
  *(undefined ***)this = &___7FD3D12DepthStencilView__6B_;
  this->field_0x51 = 3;
  return this;
}

// UpdateDescriptor @ 145abb500

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12DepthStencilView::UpdateDescriptor(FD3D12DepthStencilView *this)

{
  code *pcVar1;
  bool bVar2;
  ID3D12Device *pIVar3;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar3 = FD3D12Device::GetDevice(*(FD3D12Device **)&this->field_0x8);
  (**(code **)((longlong)*pIVar3 + 0xa8))
            (pIVar3,*(undefined8 *)(*(longlong *)&this->field_0x20 + 0x20),&this->field_0x58,
             *(undefined8 *)&this->field_0x38);
  *(int *)&this->field_0x44 = *(int *)&this->field_0x44 + 1;
  return;
}

