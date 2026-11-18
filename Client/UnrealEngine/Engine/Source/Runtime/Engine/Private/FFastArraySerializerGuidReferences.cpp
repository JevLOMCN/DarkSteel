// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FFastArraySerializerGuidReferences @ 148a419e0

FFastArraySerializerGuidReferences * __thiscall
FFastArraySerializerGuidReferences::FFastArraySerializerGuidReferences
          (FFastArraySerializerGuidReferences *this,FFastArraySerializerGuidReferences *param_1)

{
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
            (&this->UnmappedGUIDs,&param_1->UnmappedGUIDs);
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
            (&this->MappedDynamicGUIDs,&param_1->MappedDynamicGUIDs);
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).AllocatorInstance.Data = (param_1->Buffer).AllocatorInstance.Data;
  (param_1->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = (param_1->Buffer).ArrayNum;
  (this->Buffer).ArrayMax = (param_1->Buffer).ArrayMax;
  (param_1->Buffer).ArrayNum = 0;
  (param_1->Buffer).ArrayMax = 0;
  this->NumBufferBits = param_1->NumBufferBits;
  return this;
}

