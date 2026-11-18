// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// AddReferencedShaderResource @ 1459ff120

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingGlobalResourceBinder::AddReferencedShaderResource
          (FD3D12RayTracingGlobalResourceBinder *this,FD3D12BaseShaderResource *param_1)

{
  FD3D12Resource *pFVar1;
  FD3D12CommandContext *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pFVar1 = (param_1->ResourceLocation).UnderlyingResource;
  pFVar2 = this->CommandContext;
  if (pFVar1 == (FD3D12Resource *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)&pFVar2->field_0x188 == 0) {
    (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&pFVar2->field_0x188,pFVar1);
  return;
}

