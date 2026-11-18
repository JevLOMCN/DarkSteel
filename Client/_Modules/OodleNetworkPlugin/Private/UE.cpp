// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OodleNetworkPlugin
// Functions: 1

// CopyFunc<UE::Net::FNetResult> @ 14e292f30

void * __cdecl UE::Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>(void *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = ::operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DeleterFunc<UE::Net::FNetResult>;
    puVar1[1] = CopyFunc<UE::Net::FNetResult>;
    puVar1[2] = *(undefined8 *)param_1;
    puVar1[3] = *(undefined8 *)((longlong)param_1 + 8);
    puVar1[4] = *(undefined8 *)((longlong)param_1 + 0x10);
    ::FString::FString((FString *)(puVar1 + 5),(FString *)((longlong)param_1 + 0x18));
    puVar1[7] = 0;
    if (*(longlong *)((longlong)param_1 + 0x28) != 0) {
      uVar2 = (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + -8))();
      puVar1[7] = uVar2;
    }
    return puVar1 + 2;
  }
  return &DAT_00000010;
}

