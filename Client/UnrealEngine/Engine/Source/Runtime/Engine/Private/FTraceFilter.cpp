// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// IsObjectTraceable<1> @ 1488ac4a0

bool __cdecl FTraceFilter::IsObjectTraceable<1>(UObject *param_1)

{
  FTraceFilterObjectAnnotation *pFVar1;
  
  pFVar1 = TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
                   *)&GObjectFilterAnnotations.AnnotationMap,(UObjectBase *)param_1);
  return pFVar1 == (FTraceFilterObjectAnnotation *)0x0;
}

// IsObjectTraceable<0> @ 1488ac4d0

bool __cdecl FTraceFilter::IsObjectTraceable<0>(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTraceFilterObjectAnnotation *pFVar4;
  
  if (!GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GObjectFilterAnnotations.IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x11b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
           ::Find((TMapBase<UObjectBase_const_*,FTraceFilterObjectAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>_>
                   *)&GObjectFilterAnnotations.AnnotationMap,(UObjectBase *)param_1);
  return pFVar4 == (FTraceFilterObjectAnnotation *)0x0;
}

// MarkObjectTraceable<1> @ 1488ac5a0

void __cdecl FTraceFilter::MarkObjectTraceable<1>(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5664537739974934824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x128,"InObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  GObjectFilterAnnotations.AnnotationCacheValue.bIsTraceable = true;
  GObjectFilterAnnotations.AnnotationCacheKey = (UObjectBase *)param_1;
  FTraceUObjectAnnotation::RemoveAnnotation(&GObjectFilterAnnotations,(UObjectBase *)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  FObjectTrace::OutputObject(param_1);
  return;
}

// MarkObjectTraceable<0> @ 1488ac650

void __cdecl FTraceFilter::MarkObjectTraceable<0>(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UObjectBase *local_res8 [4];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5664537739974934824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x128,"InObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GObjectFilterAnnotations.IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = (UObjectBase *)param_1;
  if (GObjectFilterAnnotations.AnnotationMap._8_4_ != GObjectFilterAnnotations.AnnotationMap._52_4_)
  {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
    ::RemoveImpl<UObjectBase_const_*>
              ((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
                *)&GObjectFilterAnnotations.AnnotationMap,uVar3 >> 0x10 ^ uVar3,local_res8);
  }
  FObjectTrace::OutputObject(param_1);
  return;
}

// SetObjectIsTraceable<1> @ 1488ad0f0

void __cdecl FTraceFilter::SetObjectIsTraceable<1>(UObject *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  TPairInitializer<UObjectBase_const_*_const_&,FTraceFilterObjectAnnotation_const_&> local_res10;
  bool local_18 [16];
  
  if (param_1 == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5664537739974934824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x128,"InObject");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  GObjectFilterAnnotations.AnnotationCacheKey = (UObjectBase *)param_1;
  GObjectFilterAnnotations.AnnotationCacheValue.bIsTraceable = param_2;
  if (param_2) {
    FTraceUObjectAnnotation::RemoveAnnotation(&GObjectFilterAnnotations,(UObjectBase *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
    FObjectTrace::OutputObject(param_1);
    return;
  }
  if (GObjectFilterAnnotations.AnnotationMap._8_4_ == GObjectFilterAnnotations.AnnotationMap._52_4_)
  {
    FUObjectArray::AddUObjectDeleteListener
              (&GUObjectArray,(FUObjectDeleteListener *)&GObjectFilterAnnotations);
  }
  local_18[0] = true;
  local_18[1] = true;
  local_18[2] = true;
  local_18[3] = true;
  local_18[4] = true;
  local_18[5] = false;
  local_18[6] = false;
  local_18[7] = false;
  local_18[8] = true;
  local_18[9] = true;
  local_18[10] = true;
  local_18[0xb] = true;
  local_18[0xc] = true;
  local_18[0xd] = false;
  local_18[0xe] = false;
  local_18[0xf] = false;
  TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FTraceFilterObjectAnnotation_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
              *)&GObjectFilterAnnotations.AnnotationMap,&local_res10,local_18);
                    /* WARNING: Could not recover jumptable at 0x0001488ad209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  return;
}

// SetObjectIsTraceable<0> @ 1488ad220

void __cdecl FTraceFilter::SetObjectIsTraceable<0>(UObject *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  UObject *local_res8;
  int local_res10 [2];
  UObject **local_res18;
  UObjectBase *local_res20;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5664537739974934824>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                         ,0x128,"InObject"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GObjectFilterAnnotations.IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TraceFilter.cpp"
                         ,0x137,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2) {
    local_res20 = (UObjectBase *)param_1;
    if (GObjectFilterAnnotations.AnnotationMap._8_4_ !=
        GObjectFilterAnnotations.AnnotationMap._52_4_) {
      uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
                  *)&GObjectFilterAnnotations.AnnotationMap,uVar5 >> 0x10 ^ uVar5,&local_res20);
    }
    FObjectTrace::OutputObject(param_1);
    return;
  }
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if (GObjectFilterAnnotations.AnnotationMap._8_4_ != GObjectFilterAnnotations.AnnotationMap._52_4_)
  {
    lVar4 = 0x154c6cf20;
    if (GObjectFilterAnnotations.AnnotationMap._64_8_ != 0) {
      lVar4 = GObjectFilterAnnotations.AnnotationMap._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)(GObjectFilterAnnotations.AnnotationMap._72_4_ - 1 & uVar5)
                             * 4);
    while (iVar1 != -1) {
      lVar4 = GObjectFilterAnnotations.AnnotationMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(UObject **)(GObjectFilterAnnotations.AnnotationMap._0_8_ + (longlong)iVar1 * 0x18) ==
          param_1) {
        if (lVar4 != 0) goto LAB_1488ad36c;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x10);
    }
  }
  local_res18 = &local_res8;
  local_res8 = param_1;
  TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObjectBase_const_*_&&>_>
            ((TSet<TTuple<UObjectBase_const_*,FTraceFilterObjectAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FTraceFilterObjectAnnotation,0>,FDefaultSetAllocator>
              *)&GObjectFilterAnnotations.AnnotationMap,(uint)local_res10,
             (TKeyInitializer<UObjectBase_const_*_&&> *)(ulonglong)uVar5,(bool *)&local_res18);
  lVar4 = GObjectFilterAnnotations.AnnotationMap._0_8_ + (longlong)local_res10[0] * 0x18;
LAB_1488ad36c:
  *(undefined1 *)(lVar4 + 8) = 0;
  return;
}

// Destroy @ 1488bbbe0

void __cdecl FTraceFilter::Destroy(void)

{
  FTraceUObjectAnnotation::RemoveAllAnnotations(&GObjectFilterAnnotations);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
            *)&FWorldDelegates::OnPreWorldInitialization,FTraceActorFilter::WorldPreInitHandle);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
            *)&FWorldDelegates::OnPostWorldInitialization,FTraceActorFilter::WorldPostInitHandle);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
            *)&FWorldDelegates::OnPreWorldInitialization,FTraceWorldFilter::WorldInitHandle);
  return;
}

// Init @ 1488c7d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FTraceFilter::Init(void)

{
  FDelegateHandle FVar1;
  undefined1 local_res8 [32];
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPreWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  FTraceActorFilter::WorldPreInitHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPostWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  FTraceActorFilter::WorldPostInitHandle.ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                         *)&FWorldDelegates::OnPreWorldInitialization,
                        (_func___cdecl_void_UWorld_ptr_FWorldInitializationValues *)local_res8);
                    /* WARNING: Load size is inaccurate */
  FTraceWorldFilter::WorldInitHandle.ID = *FVar1.ID;
  return;
}

// Lock @ 1488ce030

void __cdecl FTraceFilter::Lock(void)

{
  if ((GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet) &&
     (GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex !=
      (FWindowsRecursiveMutex *)0x0)) {
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex)
    ;
  }
  GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex =
       &GObjectFilterAnnotations.AnnotationMapCritical;
  EnterCriticalSection((LPCRITICAL_SECTION)&GObjectFilterAnnotations.AnnotationMapCritical);
  GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet = true;
  return;
}

// Unlock @ 1488ea1a0

void __cdecl FTraceFilter::Unlock(void)

{
  if (GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet) {
    if (GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex !=
        (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)
                 GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex);
      GObjectFilterAnnotations.AnnotationMapScopeLock.TypedValue.Mutex =
           (FWindowsRecursiveMutex *)0x0;
    }
    GObjectFilterAnnotations.AnnotationMapScopeLock.bIsSet = false;
  }
  return;
}

