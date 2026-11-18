// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// OnPreFreezeNetSerializerRegistry @ 1482cad80

void __thiscall
FNetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry
          (FNetworkPhysicsRewindDataImportantInputProxyNetSerializerRegistryDelegates *this)

{
  FName FVar1;
  FName FVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    FVar1 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy;
    if (::_TSS0 == -1) {
      UE::Net::FLastResortPropertyNetSerializerInfo::FLastResortPropertyNetSerializerInfo
                ((FLastResortPropertyNetSerializerInfo *)&::StaticInstance);
      FVar2 = PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.ComparisonIndex
           = FVar1.ComparisonIndex.Value;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.Number =
           FVar1.Number;
      ::StaticInstance._8_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.
           ComparisonIndex.Value;
      ::StaticInstance._12_4_ =
           PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy.Number;
      ::StaticInstance._0_8_ = &___7FNamedStructLastResortPropertyNetSerializerInfo_Net_UE__6B_;
      PropertyNetSerializerRegistry_NAME_NetworkPhysicsRewindDataImportantInputProxy = FVar2;
      _Init_thread_footer(&::_TSS0);
    }
  }
  UE::Net::FPropertyNetSerializerInfoRegistry::Register
            ((FPropertyNetSerializerInfo *)&::StaticInstance);
  return;
}

