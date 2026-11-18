// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 1

// ~FChaosCVDScopedDataChannelOverride @ 1441a1740

void __thiscall
FChaosCVDScopedDataChannelOverride::~FChaosCVDScopedDataChannelOverride
          (FChaosCVDScopedDataChannelOverride *this)

{
  uint *puVar1;
  FChaosVDThreadContext *this_00;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this_00 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  FChaosVDThreadContext::PopContext(this_00);
  return;
}

