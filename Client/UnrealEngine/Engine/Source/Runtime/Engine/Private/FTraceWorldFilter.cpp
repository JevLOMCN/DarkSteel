// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Destroy @ 1488bbc40

void __cdecl FTraceWorldFilter::Destroy(void)

{
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
            *)&FWorldDelegates::OnPreWorldInitialization,WorldInitHandle);
  return;
}

// Initialize @ 1488cbce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FTraceWorldFilter::Initialize(void)

{
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPreWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  WorldInitHandle.ID = *FVar1.ID;
  return;
}

// OnWorldInit @ 1488d05a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FTraceWorldFilter::OnWorldInit(UWorld *param_1,FWorldInitializationValues *param_2)

{
  uchar uVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  
  pTVar3 = CVarRecordAllWorldTypes.Ref;
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar5) == 0) {
    if (param_1 != (UWorld *)0x0) {
      uVar1 = (param_1->WorldType).Value;
      if (uVar1 == '\x01') goto LAB_1488d064a;
      if (uVar1 != '\x03') {
        return;
      }
      goto LAB_1488d05ed;
    }
  }
  else {
LAB_1488d05ed:
    if (param_1 != (UWorld *)0x0) goto LAB_1488d064a;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5664537739974934824>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                     ,0x128,"InObject");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_1 == (UWorld *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                         ,0x3d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1488d064a:
  EnterCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  GObjectFilterAnnotations.AnnotationCacheValue.bIsTraceable = true;
  GObjectFilterAnnotations.AnnotationCacheKey = (UObjectBase *)param_1;
  FTraceUObjectAnnotation::RemoveAnnotation(&GObjectFilterAnnotations,(UObjectBase *)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  FObjectTrace::OutputObject((UObject *)param_1);
  return;
}

