// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Construct<FRendererOnScreenNotification> @ 1448e1b90

void __cdecl FLazySingleton::Construct<FRendererOnScreenNotification>(void *param_1)

{
  FDelegateHandle FVar1;
  <lambda_1> local_res10 [24];
  
  InitializeCriticalSectionAndSpinCount(param_1,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)param_1 + 0x28),4000);
  *(undefined8 *)((longlong)param_1 + 0x68) = 2;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
          ::
          AddLambda<_FRendererOnScreenNotification::FRendererOnScreenNotification_::__l2::<lambda_1>_>
                    (&FCoreDelegates::OnGetOnScreenMessages,local_res10);
  *(undefined8 *)((longlong)param_1 + 0x70) = *(undefined8 *)FVar1.ID;
  return;
}

