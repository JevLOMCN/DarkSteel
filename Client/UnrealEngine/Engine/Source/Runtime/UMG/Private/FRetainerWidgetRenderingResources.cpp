// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// AddReferencedObjects @ 146a5d470

void __thiscall
FRetainerWidgetRenderingResources::AddReferencedObjects
          (FRetainerWidgetRenderingResources *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->WidgetRenderer,0,0);
                    /* WARNING: Could not recover jumptable at 0x000146a5d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->RenderTarget,0,0);
  return;
}

// GetReferencerName @ 146a78c90

FString * __thiscall
FRetainerWidgetRenderingResources::GetReferencerName
          (FRetainerWidgetRenderingResources *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FRetainerWidgetRenderingResources");
  return __return_storage_ptr__;
}

