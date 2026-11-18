// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 12

// ~FComputeDataProviderRenderProxy @ 1494c58e0

void __thiscall
FComputeDataProviderRenderProxy::~FComputeDataProviderRenderProxy
          (FComputeDataProviderRenderProxy *this)

{
  *this = (FComputeDataProviderRenderProxy)&___7FComputeDataProviderRenderProxy__6B_;
  return;
}

// AllocateResources @ 1494c9b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FComputeDataProviderRenderProxy::AllocateResources
          (FComputeDataProviderRenderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  return;
}

// GatherDispatchData @ 1494ce1d0

void __thiscall
FComputeDataProviderRenderProxy::GatherDispatchData
          (FComputeDataProviderRenderProxy *this,FDispatchData *param_1)

{
  return;
}

// GatherPermutations @ 1494ce310

void __thiscall
FComputeDataProviderRenderProxy::GatherPermutations
          (FComputeDataProviderRenderProxy *this,FPermutationData *param_1)

{
  return;
}

// GetDispatchThreadCount @ 1494cf570

int __thiscall
FComputeDataProviderRenderProxy::GetDispatchThreadCount
          (FComputeDataProviderRenderProxy *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  return 0;
}

// GetReadbackData @ 1494d0dc0

void __thiscall
FComputeDataProviderRenderProxy::GetReadbackData
          (FComputeDataProviderRenderProxy *this,
          TArray<FComputeDataProviderRenderProxy::FReadbackData,TSizedDefaultAllocator<32>_>
          *param_1)

{
  return;
}

// IsValid @ 1494d47d0

bool __thiscall
FComputeDataProviderRenderProxy::IsValid
          (FComputeDataProviderRenderProxy *this,FValidationData *param_1)

{
  return false;
}

// PostGraphDispatch @ 1494d4ce0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FComputeDataProviderRenderProxy::PostGraphDispatch
          (FComputeDataProviderRenderProxy *this,FRDGBuilder *param_1)

{
  return;
}

// PostSubmit @ 1494d4d80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComputeDataProviderRenderProxy::PostSubmit
          (FComputeDataProviderRenderProxy *this,FComputeContext *param_1)

{
  return;
}

// PostSubmit @ 1494d4d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FComputeDataProviderRenderProxy::PostSubmit
          (FComputeDataProviderRenderProxy *this,FRDGBuilder *param_1)

{
  FRDGBuilder *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_38 = param_1;
  (**(code **)((longlong)*this + 0x50))(0,&local_38);
  return;
}

// PreSubmit @ 1494d4f80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComputeDataProviderRenderProxy::PreSubmit
          (FComputeDataProviderRenderProxy *this,FComputeContext *param_1)

{
  return;
}

// PreSubmit @ 1494d4f90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FComputeDataProviderRenderProxy::PreSubmit
          (FComputeDataProviderRenderProxy *this,FRDGBuilder *param_1)

{
  FRDGBuilder *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_38 = param_1;
  (**(code **)((longlong)*this + 0x40))(0,&local_38);
  return;
}

