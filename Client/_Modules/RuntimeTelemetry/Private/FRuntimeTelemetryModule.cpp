// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RuntimeTelemetry
// Functions: 2

// StartupModule @ 14ea1ed70

void __thiscall FRuntimeTelemetryModule::StartupModule(FRuntimeTelemetryModule *this)

{
  FStudioTelemetry *this_00;
  <lambda_1> local_res18 [2];
  
  this_00 = FStudioTelemetry::Get();
  FStudioTelemetry::StartSession(this_00);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FRuntimeTelemetry::StartSession_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnEnginePreExit,local_res18);
  return;
}

// ShutdownModule @ 14ea1edb0

void __thiscall FRuntimeTelemetryModule::ShutdownModule(FRuntimeTelemetryModule *this)

{
  FStudioTelemetry *this_00;
  
  this_00 = FStudioTelemetry::Get();
  FStudioTelemetry::EndSession(this_00);
  return;
}

