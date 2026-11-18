// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 75

// GetProxyAs<FNiagaraDataIntefaceProxyAsyncGpuTrace> @ 148e4a340

FNiagaraDataIntefaceProxyAsyncGpuTrace * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataIntefaceProxyAsyncGpuTrace>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataIntefaceProxyAsyncGpuTrace *pFVar3;
  
  pFVar3 = (FNiagaraDataIntefaceProxyAsyncGpuTrace *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataIntefaceProxyAsyncGpuTrace *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataIntefaceProxyAsyncGpuTrace *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxy_DataChannelWrite> @ 148e4a390

FNiagaraDataInterfaceProxy_DataChannelWrite * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxy_DataChannelWrite>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxy_DataChannelWrite *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxy_DataChannelWrite *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxy_DataChannelWrite *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxy_DataChannelWrite *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// CacheStaticBuffers @ 148e5caa0

void __thiscall
UNiagaraDataInterface::CacheStaticBuffers
          (UNiagaraDataInterface *this,FNiagaraSystemStaticBuffers *param_1,
          FNiagaraVariable *param_2,bool param_3,bool param_4)

{
  return;
}

// CalculateFinalTickGroup @ 148e5cab0

ETickingGroup __thiscall
UNiagaraDataInterface::CalculateFinalTickGroup(UNiagaraDataInterface *this,void *param_1)

{
  return TG_LastDemotable;
}

// CalculateTickGroup @ 148e5caf0

ETickingGroup __thiscall
UNiagaraDataInterface::CalculateTickGroup(UNiagaraDataInterface *this,void *param_1)

{
  return TG_PrePhysics;
}

// CanExposeVariables @ 148e5cfe0

bool __thiscall UNiagaraDataInterface::CanExposeVariables(UNiagaraDataInterface *this)

{
  return false;
}

// CanRenderVariablesToCanvas @ 148e5cff0

bool __thiscall UNiagaraDataInterface::CanRenderVariablesToCanvas(UNiagaraDataInterface *this)

{
  return false;
}

// DestroyPerInstanceData @ 148e62c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::DestroyPerInstanceData
          (UNiagaraDataInterface *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  return;
}

// DrawDebugHud @ 148e639a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::DrawDebugHud(UNiagaraDataInterface *this,FNDIDrawDebugHudContext *param_1)

{
  (**(code **)(this->_padding_ + 0x3e0))
            (this,param_1->Canvas,param_1->SystemInstance,&param_1->OutputString,param_1->bVerbose);
  return;
}

// DrawDebugHud @ 148e639d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::DrawDebugHud
          (UNiagaraDataInterface *this,UCanvas *param_1,FNiagaraSystemInstance *param_2,
          FString *param_3,bool param_4)

{
  return;
}

// GPUContextInit @ 148e669a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterface::GPUContextInit
          (UNiagaraDataInterface *this,FNiagaraScriptDataInterfaceCompileInfo *param_1,void *param_2
          ,FNiagaraSystemInstance *param_3)

{
  return false;
}

// GetCanvasVariables @ 148e68b30

void __thiscall
UNiagaraDataInterface::GetCanvasVariables
          (UNiagaraDataInterface *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetEmitterDependencies @ 148e68e10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::GetEmitterDependencies
          (UNiagaraDataInterface *this,UNiagaraSystem *param_1,
          TArray<FVersionedNiagaraEmitter,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetEmitterReferencesByName @ 148e68e30

void __thiscall
UNiagaraDataInterface::GetEmitterReferencesByName
          (UNiagaraDataInterface *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetExposedVariableValue @ 148e68e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterface::GetExposedVariableValue
          (UNiagaraDataInterface *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

{
  return false;
}

// GetExposedVariables @ 148e68e50

void __thiscall
UNiagaraDataInterface::GetExposedVariables
          (UNiagaraDataInterface *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetFunctions @ 148e6ca30

void __thiscall
UNiagaraDataInterface::GetFunctions
          (UNiagaraDataInterface *this,
          TArray<FNiagaraFunctionSignature,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetGpuCountBufferEstimate @ 148e6ca50

uint __thiscall UNiagaraDataInterface::GetGpuCountBufferEstimate(UNiagaraDataInterface *this)

{
  return 0;
}

// GetVMExternalFunction @ 148e6fd30

void __thiscall
UNiagaraDataInterface::GetVMExternalFunction
          (UNiagaraDataInterface *this,FVMExternalFunctionBindingInfo *param_1,void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  return;
}

// HasPostSimulateTick @ 148e72950

bool __thiscall UNiagaraDataInterface::HasPostSimulateTick(UNiagaraDataInterface *this)

{
  return false;
}

// HasPostStageTick @ 148e72980

bool __thiscall
UNiagaraDataInterface::HasPostStageTick(UNiagaraDataInterface *this,ENiagaraScriptUsage param_1)

{
  return false;
}

// HasPreSimulateTick @ 148e729a0

bool __thiscall UNiagaraDataInterface::HasPreSimulateTick(UNiagaraDataInterface *this)

{
  return false;
}

// HasPreStageTick @ 148e729f0

bool __thiscall
UNiagaraDataInterface::HasPreStageTick(UNiagaraDataInterface *this,ENiagaraScriptUsage param_1)

{
  return false;
}

// HasTickGroupPostreqs @ 148e72bc0

bool __thiscall UNiagaraDataInterface::HasTickGroupPostreqs(UNiagaraDataInterface *this)

{
  return false;
}

// HasTickGroupPrereqs @ 148e72bf0

bool __thiscall UNiagaraDataInterface::HasTickGroupPrereqs(UNiagaraDataInterface *this)

{
  return false;
}

// InitPerInstanceData @ 148e742c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterface::InitPerInstanceData
          (UNiagaraDataInterface *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  return true;
}

// NeedsGPUContextInit @ 148e75690

bool __thiscall UNiagaraDataInterface::NeedsGPUContextInit(UNiagaraDataInterface *this)

{
  return false;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e759d0

int __thiscall
UNiagaraDataInterface::PerInstanceDataPassedToRenderThreadSize(UNiagaraDataInterface *this)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  int iVar2;
  
  pFVar1 = (this->Proxy).Ptr;
  if (pFVar1 == (FNiagaraDataInterfaceProxy *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000148e759df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pFVar1->_padding_ + 8))();
  return iVar2;
}

// PerInstanceDataSize @ 148e75a00

int __thiscall UNiagaraDataInterface::PerInstanceDataSize(UNiagaraDataInterface *this)

{
  return 0;
}

// PerInstanceTick @ 148e75ab0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterface::PerInstanceTick
          (UNiagaraDataInterface *this,void *param_1,FNiagaraSystemInstance *param_2,float param_3)

{
  return false;
}

// PerInstanceTickPostSimulate @ 148e765d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterface::PerInstanceTickPostSimulate
          (UNiagaraDataInterface *this,void *param_1,FNiagaraSystemInstance *param_2,float param_3)

{
  return false;
}

// PostCompile @ 148e768b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::PostCompile(UNiagaraDataInterface *this,UNiagaraSystem *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148e768b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x370))();
  return;
}

// PostCompile @ 148e768c0

void __thiscall UNiagaraDataInterface::PostCompile(UNiagaraDataInterface *this)

{
  return;
}

// PostSimulateCanOverlapFrames @ 148e77850

bool __thiscall UNiagaraDataInterface::PostSimulateCanOverlapFrames(UNiagaraDataInterface *this)

{
  return true;
}

// PostStageCanOverlapTickGroups @ 148e77a00

bool __thiscall UNiagaraDataInterface::PostStageCanOverlapTickGroups(UNiagaraDataInterface *this)

{
  return true;
}

// PostStageTick @ 148e77a30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::PostStageTick
          (UNiagaraDataInterface *this,FNDICpuPrePostStageContext *param_1)

{
  return;
}

// PreStageTick @ 148e78a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::PreStageTick(UNiagaraDataInterface *this,FNDICpuPrePostStageContext *param_1)

{
  return;
}

// ProvidePerInstanceDataForRenderThread @ 148e78da0

void __thiscall
UNiagaraDataInterface::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterface *this,void *param_1,void *param_2,ulong64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                     ,0x28e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PushToRenderThreadImpl @ 148e799e0

void __thiscall UNiagaraDataInterface::PushToRenderThreadImpl(UNiagaraDataInterface *this)

{
  return;
}

// ReadsEmitterParticleData @ 148e7a0b0

bool __thiscall
UNiagaraDataInterface::ReadsEmitterParticleData(UNiagaraDataInterface *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FString *local_18;
  undefined8 local_10;
  
  local_18 = (FString *)0x0;
  local_10 = 0;
  (**(code **)(this->_padding_ + 0x438))(this,&local_18);
  pFVar4 = local_18 + (int)local_10;
  pFVar3 = local_18;
  do {
    if (pFVar3 == pFVar4) {
      bVar5 = false;
LAB_148e7a127:
      DestructItems<FString,int>(local_18,(int)local_10);
      if (local_18 != (FString *)0x0) {
        FMemory::Free(local_18);
      }
      return bVar5;
    }
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar5 = iVar2 == 0;
        goto LAB_148e7a115;
      }
LAB_148e7a157:
      bVar5 = true;
      goto LAB_148e7a127;
    }
    bVar5 = iVar2 + iVar1 == 1;
LAB_148e7a115:
    if (bVar5) goto LAB_148e7a157;
    pFVar3 = pFVar3 + 1;
  } while( true );
}

// RenderVariableToCanvas @ 148e7bbe0

bool __thiscall
UNiagaraDataInterface::RenderVariableToCanvas
          (UNiagaraDataInterface *this,ulong64 param_1,FName param_2,FCanvas *param_3,
          TIntRect<int> *param_4)

{
  return false;
}

// RequiresCurrentFrameNDC @ 148e7bbf0

bool __thiscall UNiagaraDataInterface::RequiresCurrentFrameNDC(UNiagaraDataInterface *this)

{
  return false;
}

// RequiresDepthBuffer @ 148e7bc10

bool __thiscall UNiagaraDataInterface::RequiresDepthBuffer(UNiagaraDataInterface *this)

{
  return false;
}

// RequiresDistanceFieldData @ 148e7bc20

bool __thiscall UNiagaraDataInterface::RequiresDistanceFieldData(UNiagaraDataInterface *this)

{
  return false;
}

// RequiresEarlyViewData @ 148e7bc30

bool __thiscall UNiagaraDataInterface::RequiresEarlyViewData(UNiagaraDataInterface *this)

{
  return false;
}

// RequiresGlobalDistanceField @ 148e7bc40

bool __thiscall UNiagaraDataInterface::RequiresGlobalDistanceField(UNiagaraDataInterface *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148e7bc43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x388))();
  return (bool)uVar1;
}

// RequiresRayTracingScene @ 148e7bc90

bool __thiscall UNiagaraDataInterface::RequiresRayTracingScene(UNiagaraDataInterface *this)

{
  return false;
}

// StaticClass @ 148e81540

UClass * __cdecl UNiagaraDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterface",
               &Z_Registration_Info_UClass_UNiagaraDataInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterface,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterface>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterface>,aFStackX_8,
               UNiagaraDataInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterface.InnerSingleton;
}

// GetProxyAs<NDIMemoryBufferLocal::FNDIProxy> @ 148e97190

FNDIProxy * __thiscall
UNiagaraDataInterface::GetProxyAs<NDIMemoryBufferLocal::FNDIProxy>(UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNDIProxy *pFVar3;
  
  pFVar3 = (FNDIProxy *)(this->Proxy).Ptr;
  if (pFVar3 == (FNDIProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNDIProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<NDISimCacheReaderLocal::FNDIProxy> @ 148e971e0

FNDIProxy * __thiscall
UNiagaraDataInterface::GetProxyAs<NDISimCacheReaderLocal::FNDIProxy>(UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNDIProxy *pFVar3;
  
  pFVar3 = (FNDIProxy *)(this->Proxy).Ptr;
  if (pFVar3 == (FNDIProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNDIProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<NDIStaticMeshLocal::FRenderProxy> @ 148efa3c0

FRenderProxy * __thiscall
UNiagaraDataInterface::GetProxyAs<NDIStaticMeshLocal::FRenderProxy>(UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderProxy *pFVar3;
  
  pFVar3 = (FRenderProxy *)(this->Proxy).Ptr;
  if (pFVar3 == (FRenderProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRenderProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxyOscilloscope> @ 14909ba70

FNiagaraDataInterfaceProxyOscilloscope * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyOscilloscope>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxyOscilloscope *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxyOscilloscope *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxyOscilloscope *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxyOscilloscope *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxySpectrum> @ 14909bac0

FNiagaraDataInterfaceProxySpectrum * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxySpectrum>(UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxySpectrum *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxySpectrum *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxySpectrum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxySpectrum *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<INDIArrayProxyBase> @ 14909bb10

INDIArrayProxyBase * __thiscall
UNiagaraDataInterface::GetProxyAs<INDIArrayProxyBase>(UNiagaraDataInterface *this)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  INDIArrayProxyBase *pIVar4;
  
  pFVar1 = (this->Proxy).Ptr;
  if (pFVar1 == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (INDIArrayProxyBase *)(*pcVar2)();
      return pIVar4;
    }
  }
  return (INDIArrayProxyBase *)pFVar1;
}

// UNiagaraDataInterface @ 1490b3230

UNiagaraDataInterface * __thiscall
UNiagaraDataInterface::UNiagaraDataInterface(UNiagaraDataInterface *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterface__6B_;
  (this->Proxy).Ptr = (FNiagaraDataInterfaceProxy *)0x0;
  return this;
}

// UNiagaraDataInterface @ 1490b3260

UNiagaraDataInterface * __thiscall
UNiagaraDataInterface::UNiagaraDataInterface
          (UNiagaraDataInterface *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar2);
  this->bRenderDataDirty = 0;
  this->bUsedWithGPUScript = 0;
  this->bUsedWithCPUScript = 0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterface__6B_;
  (this->Proxy).Ptr = (FNiagaraDataInterfaceProxy *)0x0;
  return this;
}

// ~UNiagaraDataInterface @ 1490b8a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNiagaraDataInterface::~UNiagaraDataInterface(UNiagaraDataInterface *this)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraDataInterfaceProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataInterfaceProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->_padding_ = (longlong)&___7UNiagaraDataInterface__6B_;
  pFVar1 = (this->Proxy).Ptr;
  (this->Proxy).Ptr = (FNiagaraDataInterfaceProxy *)0x0;
  if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterface::~UNiagaraDataInterface'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterface::~UNiagaraDataInterface'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = pFVar1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterface::~UNiagaraDataInterface_::__l5::TSTR_FDeleteProxyRT101>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterface::~UNiagaraDataInterface'::__l5::TSTR_FDeleteProxyRT101>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    if ((this->Proxy).Ptr != (FNiagaraDataInterfaceProxy *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy.IsValid() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                         ,0x6b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pFVar1 = (this->Proxy).Ptr;
  if (pFVar1 != (FNiagaraDataInterfaceProxy *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  UNiagaraDataInterfaceBase::~UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this);
  return;
}

// BuildObjectFlagsForOwner @ 1490d09a0

EObjectFlags __cdecl
UNiagaraDataInterface::BuildObjectFlagsForOwner(UObject *param_1,EObjectFlags param_2)

{
  bool bVar1;
  
  if (param_1 == (UObject *)0x0) {
    return param_2;
  }
  if ((*(uint *)&param_1->field_0x8 & 1) == 0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)param_1,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      param_2 = param_2 | RF_Public;
    }
    return param_2;
  }
  return param_2 | RF_Public;
}

// CanExecuteOnTarget @ 1490d2a40

bool __thiscall
UNiagaraDataInterface::CanExecuteOnTarget(UNiagaraDataInterface *this,ENiagaraSimTarget param_1)

{
  return false;
}

// CopyTo @ 1490d8970

bool __thiscall
UNiagaraDataInterface::CopyTo(UNiagaraDataInterface *this,UNiagaraDataInterface *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001490d8973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x458))();
  return (bool)uVar1;
}

// CopyToInternal @ 1490d8cb0

bool __thiscall
UNiagaraDataInterface::CopyToInternal(UNiagaraDataInterface *this,UNiagaraDataInterface *param_1)

{
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    return param_1->_padding_ == this->_padding_;
  }
  return false;
}

// Equals @ 1490f2310

bool __thiscall
UNiagaraDataInterface::Equals(UNiagaraDataInterface *this,UNiagaraDataInterface *param_1)

{
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    return param_1->_padding_ == this->_padding_;
  }
  return false;
}

// GetAssetTagsForContext @ 149102db0

void __thiscall
UNiagaraDataInterface::GetAssetTagsForContext
          (UNiagaraDataInterface *this,UObject *param_1,FGuid *param_2,
          TArray<UNiagaraDataInterface_const_*,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
          *param_4,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  FName local_res8;
  FName local_48;
  FName *local_40;
  FString local_38;
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pFVar5 = (param_3->AllocatorInstance).Data;
    iVar2 = param_3->ArrayNum;
    iVar7 = 0;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UNiagaraDataInterface_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar5 == pFVar1) break;
      if (*(longlong *)pFVar5 != 0) {
        lVar4 = *(longlong *)(*(longlong *)pFVar5 + 0x10);
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          iVar7 = iVar7 + 1;
        }
      }
      pFVar5 = pFVar5 + 8;
    }
    if ((iVar7 != 0) ||
       ((param_1 != (UObject *)0x0 && ((*(uint *)&param_1->field_0x8 >> 4 & 1) != 0)))) {
      local_res8 = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(&local_res8,&local_38);
      ::FString::ReplaceInline(&local_38,L"NiagaraDataInterface",L"",IgnoreCase);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar6.Data = local_38.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_48,(wchar_t *)FVar6.Data);
      local_40 = &local_48;
      TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_&&>_>
                ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
                  *)param_4,(TKeyInitializer<FName_&&> *)&local_res8,(bool *)&local_40);
      *(int *)(*(longlong *)param_4 + 8 + (longlong)(int)local_res8.ComparisonIndex.Value * 0x14) =
           iVar7;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetPrivateStaticClass @ 149108b20

UClass * __cdecl UNiagaraDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterface",
               &Z_Registration_Info_UClass_UNiagaraDataInterface.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterface,0x38,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterface>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterface>,local_res8,
               UNiagaraDataInterfaceBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterface.InnerSingleton;
}

// IsDataInterfaceType @ 149117510

bool __cdecl UNiagaraDataInterface::IsDataInterfaceType(FNiagaraTypeDefinition *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = FNiagaraTypeDefinition::GetClass(param_1);
  if (pUVar2 != (UClass *)0x0) {
    pUVar3 = StaticClass();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= (int)pUVar2->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
      return false;
    }
  }
  return false;
}

// PostLoad @ 149120bf0

void __thiscall UNiagaraDataInterface::PostLoad(UNiagaraDataInterface *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraDataInterface **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// SetShaderParameters @ 149132870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterface::SetShaderParameters
          (UNiagaraDataInterface *this,FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  return;
}

// StaticRegisterNativesUNiagaraDataInterface @ 149139e30

void __cdecl UNiagaraDataInterface::StaticRegisterNativesUNiagaraDataInterface(void)

{
  return;
}

// GetProxyAs<FNiagaraDataInterfaceProxyGrid2DCollectionProxy> @ 149165750

FNiagaraDataInterfaceProxyGrid2DCollectionProxy * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyGrid2DCollectionProxy>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxyGrid2DCollectionProxy *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxyGrid2DCollectionProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxyGrid3DCollectionProxy> @ 1491657a0

FNiagaraDataInterfaceProxyGrid3DCollectionProxy * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyGrid3DCollectionProxy>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxyGrid3DCollectionProxy *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxyGrid3DCollectionProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxyNeighborGrid3D> @ 1491a44f0

FNiagaraDataInterfaceProxyNeighborGrid3D * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyNeighborGrid3D>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxyNeighborGrid3D *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxyNeighborGrid3D *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxyNeighborGrid3D *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxyNeighborGrid3D *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxyRasterizationGrid3D> @ 1491a4540

FNiagaraDataInterfaceProxyRasterizationGrid3D * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyRasterizationGrid3D>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxyRasterizationGrid3D *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxyRasterizationGrid3D *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxyRasterizationGrid3D *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxyRasterizationGrid3D *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxyRenderTarget2DProxy> @ 1491a4590

FNiagaraDataInterfaceProxyRenderTarget2DProxy * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyRenderTarget2DProxy>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxyRenderTarget2DProxy *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxyRenderTarget2DProxy *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxyRenderTarget2DProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxyRenderTarget2DProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxyRenderTargetVolumeProxy> @ 1491a45e0

FNiagaraDataInterfaceProxyRenderTargetVolumeProxy * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyRenderTargetVolumeProxy>
          (UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyAs<FNiagaraDataInterfaceProxySpline> @ 1491ff7c0

FNiagaraDataInterfaceProxySpline * __thiscall
UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxySpline>(UNiagaraDataInterface *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxySpline *pFVar3;
  
  pFVar3 = (FNiagaraDataInterfaceProxySpline *)(this->Proxy).Ptr;
  if (pFVar3 == (FNiagaraDataInterfaceProxySpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxySpline *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

