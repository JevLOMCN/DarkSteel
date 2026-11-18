// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusSettings
// Functions: 6

// StartupModule @ 14e0ffb60

void __thiscall FOptimusSettingsModule::StartupModule(FOptimusSettingsModule *this)

{
  IModularFeatures *pIVar1;
  TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  
  pIVar1 = IModularFeatures::Get();
  pTVar2 = &this->DefaultDeformer;
  if (this == (FOptimusSettingsModule *)0x0) {
    pTVar2 = (TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)0x0;
  }
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,IMeshDeformerProvider::ModularFeatureName,pTVar2);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FOptimusSettingsModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(FOptimusSettingsModule *)&stack0x00000008,
             (pmf_4fbf44fe *)this);
  return;
}

// ShutdownModule @ 14e0ffbe0

void __thiscall FOptimusSettingsModule::ShutdownModule(FOptimusSettingsModule *this)

{
  IModularFeatures *pIVar1;
  TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar2;
  
  pIVar1 = IModularFeatures::Get();
  pTVar2 = &this->DefaultDeformer;
  if (this == (FOptimusSettingsModule *)0x0) {
    pTVar2 = (TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014e0ffc11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))
            (pIVar1,IMeshDeformerProvider::ModularFeatureName,pTVar2,
             *(code **)((longlong)*pIVar1 + 0x30));
  return;
}

// IsSupported @ 14e0ffc20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FOptimusSettingsModule::IsSupported(FOptimusSettingsModule *this,EShaderPlatform param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&PerPlatformCVar.CVarName,L"r.DeformerGraph.Enable");
      PerPlatformCVar.CVar = (IConsoleVariable *)0x0;
      atexit(`Optimus::IsSupported'::__l2::_dynamic_atexit_destructor_for__PerPlatformCVar__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = FShaderPlatformCachedIniValue<int>::Get(&PerPlatformCVar,param_1);
  if (iVar2 != 0) {
    bVar1 = ComputeFramework::IsSupported(param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// GetDefaultMeshDeformer @ 14e0ffcd0

TObjectPtr<UMeshDeformer> __thiscall
FOptimusSettingsModule::GetDefaultMeshDeformer
          (FOptimusSettingsModule *this,FDefaultMeshDeformerSetup *param_1)

{
  char cVar1;
  UClass *this_00;
  UObject *pUVar2;
  char *in_R8;
  
  this_00 = UOptimusSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (((pUVar2 == (UObject *)0x0) ||
      ((cVar1 = pUVar2[1].field_0x10, cVar1 != '\x02' && ((cVar1 != '\x01' || (*in_R8 == '\0'))))))
     || (((in_R8[1] == '\0' || (pUVar2 = (this->DefaultDeformer).Object, pUVar2 == (UObject *)0x0))
         && (pUVar2 = (UObject *)this->_padding_, pUVar2 == (UObject *)0x0)))) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    *(UObject **)param_1 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  return (TObjectPtr<UMeshDeformer>)(TObjectPtr<UMeshDeformer>_u_0)param_1;
}

// CacheDefaultMeshDeformers @ 14e100490

void __thiscall
FOptimusSettingsModule::CacheDefaultMeshDeformers
          (FOptimusSettingsModule *this,UOptimusSettings *param_1)

{
  TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  bool bVar2;
  bool bVar3;
  UObjectBase *pUVar4;
  UObjectBase *pUVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  if ((param_1 == (UOptimusSettings *)0x0) || (param_1->DefaultMode == Never)) {
    bVar3 = false;
  }
  else {
    bVar2 = true;
    bVar3 = true;
    if (*(longlong *)&(param_1->DefaultDeformer).SoftObjectPtr.field_0x8 != 0) {
      pUVar4 = (UObjectBase *)
               TSoftObjectPtr<UMeshDeformer>::LoadSynchronous(&param_1->DefaultDeformer);
      pUVar5 = (UObjectBase *)0x0;
      if (pUVar4 != (UObjectBase *)0x0) {
        UObjectBase::AddRef(pUVar4);
        pUVar5 = pUVar4;
      }
      goto LAB_14e1004ef;
    }
  }
  bVar2 = bVar3;
  pUVar5 = (UObjectBase *)0x0;
LAB_14e1004ef:
  pUVar4 = (UObjectBase *)0x0;
  pTVar1 = &this->DefaultDeformer;
  if (pTVar1 == (TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_28) {
    if (pUVar5 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar5);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar5;
  }
  if ((bVar2) &&
     (*(longlong *)&(param_1->DefaultRecomputeTangentDeformer).SoftObjectPtr.field_0x8 != 0)) {
    pUVar5 = (UObjectBase *)
             TSoftObjectPtr<UMeshDeformer>::LoadSynchronous
                       (&param_1->DefaultRecomputeTangentDeformer);
    if (pUVar5 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(pUVar5);
      pUVar4 = pUVar5;
    }
  }
  pTVar1 = &this->DefaultRecomputeTangentDeformer;
  if (pTVar1 != (TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_20) {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar4;
    return;
  }
  if (pUVar4 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar4);
  }
  return;
}

// CacheDefaultMeshDeformers @ 14e1005a0

void __thiscall FOptimusSettingsModule::CacheDefaultMeshDeformers(FOptimusSettingsModule *this)

{
  TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  UObject *pUVar2;
  bool bVar3;
  bool bVar4;
  UClass *this_00;
  UObjectBase *pUVar5;
  UObjectBase *pUVar6;
  undefined8 local_28;
  undefined8 local_20;
  
  this_00 = UOptimusSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((pUVar2 == (UObject *)0x0) || (pUVar2[1].field_0x10 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar3 = true;
    bVar4 = true;
    if (*(longlong *)&pUVar2[1].field_0x20 != 0) {
      pUVar5 = (UObjectBase *)
               TSoftObjectPtr<UMeshDeformer>::LoadSynchronous
                         ((TSoftObjectPtr<UMeshDeformer> *)&pUVar2[1].field_0x18);
      pUVar6 = (UObjectBase *)0x0;
      if (pUVar5 != (UObjectBase *)0x0) {
        UObjectBase::AddRef(pUVar5);
        pUVar6 = pUVar5;
      }
      goto LAB_14e100621;
    }
  }
  bVar3 = bVar4;
  pUVar6 = (UObjectBase *)0x0;
LAB_14e100621:
  pUVar5 = (UObjectBase *)0x0;
  pTVar1 = &this->DefaultDeformer;
  if (pTVar1 == (TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_28) {
    if (pUVar6 != (UObjectBase *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar6);
    }
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar6;
  }
  if ((bVar3) && (*(longlong *)&pUVar2[2].field_0x20 != 0)) {
    pUVar6 = (UObjectBase *)
             TSoftObjectPtr<UMeshDeformer>::LoadSynchronous
                       ((TSoftObjectPtr<UMeshDeformer> *)&pUVar2[2].field_0x18);
    if (pUVar6 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(pUVar6);
      pUVar5 = pUVar6;
    }
  }
  pTVar1 = &this->DefaultRecomputeTangentDeformer;
  if (pTVar1 != (TStrongObjectPtr<UMeshDeformer,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_20) {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)pUVar5;
    return;
  }
  if (pUVar5 != (UObjectBase *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar5);
  }
  return;
}

