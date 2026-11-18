// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// <lambda_invoker_cdecl> @ 141f54a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
``FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::FScriptStructSettings::
FScriptStructSettings'::__l2::<lambda_1>::<lambda_invoker_cdecl>(double param_1)

{
  if (3 < (byte)LogClass._0_1_) {
    UE::Logging::Private::BasicLog<4>
              ((FStaticBasicLogRecord *)&PTR_u_AttemptToFindUn_15080db70,
               (FLogCategoryBase *)&LogClass);
    return;
  }
  return;
}

// FScriptStructSettings @ 141f66420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FScriptStructSettings * __thiscall
`FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::FScriptStructSettings::
FScriptStructSettings(void *this)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  longlong *plVar6;
  LARGE_INTEGER LVar7;
  undefined1 auStackY_d8 [32];
  LARGE_INTEGER local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined **local_88;
  code *local_80;
  undefined ***local_70;
  double local_68;
  double local_60;
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  *(undefined2 *)this = 0x404;
  local_88 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(undefined1 *)((longlong)this + 2) = 3;
  local_80 = ``FStructUtils::AttemptToFindUninitializedScriptStructMembers'::__l2::
             FScriptStructSettings::FScriptStructSettings'::__l2::<lambda_1>::<lambda_invoker_cdecl>
  ;
  local_98 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
             Call;
  local_70 = (undefined ***)0x0;
  QueryPerformanceCounter(&local_a8);
  local_58 = local_98;
  local_30 = (longlong *)0x0;
  local_68 = (double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  local_60 = __real_3fa999999999999a;
  if (local_98 != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)**pppuVar5)(__real_3fa999999999999a,local_48);
    if (local_98 != (code *)0x0) {
      pppuVar5 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar5 = local_70;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  local_a8.QuadPart = 0;
  local_a0 = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"CoreUObject.UninitializedScriptStructMembersCheck",
                     L"ProjectModuleReflectedUninitializedPropertyVerbosity",(FString *)&local_a8.s,
                     &GEngineIni);
  if (bVar2) {
    TVar3 = ParseLogVerbosityFromString((FString *)&local_a8.s);
    *(Type *)this = TVar3;
  }
  if ((void *)local_a8.QuadPart != (void *)0x0) {
    FMemory::Free((void *)local_a8);
  }
  local_a8.QuadPart = 0;
  local_a0 = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"CoreUObject.UninitializedScriptStructMembersCheck",
                     L"EngineModuleReflectedUninitializedPropertyVerbosity",(FString *)&local_a8.s,
                     &GEngineIni);
  if (bVar2) {
    TVar3 = ParseLogVerbosityFromString((FString *)&local_a8.s);
    *(Type *)((longlong)this + 1) = TVar3;
  }
  if ((void *)local_a8.QuadPart != (void *)0x0) {
    FMemory::Free((void *)local_a8);
  }
  local_a8.QuadPart = 0;
  local_a0 = 0;
  bVar2 = FConfigCacheIni::GetString
                    (GConfig,L"CoreUObject.UninitializedScriptStructMembersCheck",
                     L"ObjectReferenceReflectedUninitializedPropertyVerbosity",
                     (FString *)&local_a8.s,&GEngineIni);
  if (bVar2) {
    TVar3 = ParseLogVerbosityFromString((FString *)&local_a8.s);
    *(Type *)((longlong)this + 2) = TVar3;
  }
  if ((void *)local_a8.QuadPart != (void *)0x0) {
    FMemory::Free((void *)local_a8);
  }
  QueryPerformanceCounter(&local_a8);
  LVar7 = (LARGE_INTEGER)
          (((double)local_a8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000) - local_68);
  if (local_60 < (double)LVar7) {
    local_a8 = LVar7;
    UE::Core::Private::Function::CheckCallable(local_58);
    pcVar1 = local_58;
    plVar6 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar6 + 8))();
    if (pcVar1 == UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(double),void,double>::Call) {
      (*(code *)*puVar4)(local_a8.QuadPart);
    }
    else {
      (*pcVar1)(puVar4,&local_a8);
    }
  }
  if (local_58 != (code *)0x0) {
    plVar6 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

