// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~FRecordUpdateShaderResourceRenameListener @ 1459f9a60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateShaderResourceRenameListener::
~FRecordUpdateShaderResourceRenameListener(FRecordUpdateShaderResourceRenameListener *this)

{
  FD3D12BaseShaderResource *pFVar1;
  
  pFVar1 = (this->ShaderResource).Reference;
  if (pFVar1 != (FD3D12BaseShaderResource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459f9a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x10))();
    return;
  }
  return;
}

// ResourceRenamed @ 145a2f660

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingShaderBindingTableInternal::FRecordUpdateShaderResourceRenameListener::
ResourceRenamed(FRecordUpdateShaderResourceRenameListener *this,FD3D12ContextArray *param_1,
               FD3D12BaseShaderResource *param_2,FD3D12ResourceLocation *param_3)

{
  FD3D12Resource *pFVar1;
  FD3D12Resource *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->ShaderResource).Reference != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRenamedResource == ShaderResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x7d9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = param_3->UnderlyingResource;
  pFVar2 = this->CurrentResource;
  if (pFVar1 != pFVar2) {
    if (pFVar2 != (FD3D12Resource *)0x0) {
      UpdatePersistentReferencedResource(this->ShaderTable,0,pFVar2,-1);
    }
    if (pFVar1 != (FD3D12Resource *)0x0) {
      UpdatePersistentReferencedResource(this->ShaderTable,0,pFVar1,1);
    }
    this->CurrentResource = pFVar1;
  }
  return;
}

