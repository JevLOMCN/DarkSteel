// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 2

// NewObject_AnyThread<UPVGrowthData> @ 14da5f5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPVGrowthData * __cdecl FPCGContext::NewObject_AnyThread<UPVGrowthData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPVGrowthData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPVGrowthData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPVGrowthData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPVGrowthData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPVGrowthData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPVGrowthData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPVGrowthData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPVGrowthData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPVGrowthData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPVGrowthData>(pUVar4);
  return pUVar3;
}

// NewObject_AnyThread<UPVMeshData> @ 14da5f710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPVMeshData * __cdecl FPCGContext::NewObject_AnyThread<UPVMeshData>(FPCGContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPVMeshData *pUVar3;
  UObject *pUVar4;
  FGCScopeGuard local_res8 [8];
  TObjectPtr<UObject> local_res10;
  UPVMeshData *local_res18;
  
  if (param_1 != (FPCGContext *)0x0) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar4 = GetTransientPackageAsObject();
      pUVar3 = NewObject<UPVMeshData>(pUVar4);
      return pUVar3;
    }
    if ((param_1->AsyncState).bIsRunningOnMainThread != false) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4331830188552749348>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x124,"!AsyncState.bIsRunningOnMainThread");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPVMeshData *)(*pcVar1)();
        return pUVar3;
      }
    }
    FGCScopeGuard::FGCScopeGuard(local_res8);
    pUVar4 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UPVMeshData>(pUVar4);
    FGCScopeGuard::~FGCScopeGuard(local_res8);
    if (pUVar3 == (UPVMeshData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                         ,0x12a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPVMeshData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res18 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UPVMeshData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_res10,(bool *)&local_res18);
    return pUVar3;
  }
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4331830188552749225>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                       ,0xa9,"Context != nullptr || IsInGameThread()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPVMeshData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar4 = GetTransientPackageAsObject();
  pUVar3 = NewObject<UPVMeshData>(pUVar4);
  return pUVar3;
}

