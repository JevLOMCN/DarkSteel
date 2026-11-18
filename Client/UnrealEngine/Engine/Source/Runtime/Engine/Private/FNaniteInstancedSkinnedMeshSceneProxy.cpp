// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FNaniteInstancedSkinnedMeshSceneProxy @ 147cc5a10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNaniteInstancedSkinnedMeshSceneProxy * __thiscall
FNaniteInstancedSkinnedMeshSceneProxy::FNaniteInstancedSkinnedMeshSceneProxy
          (FNaniteInstancedSkinnedMeshSceneProxy *this,FMaterialAudit *param_1,
          FInstancedSkinnedMeshSceneProxyDesc *param_2,FSkeletalMeshRenderData *param_3)

{
  code *pcVar1;
  bool bVar2;
  FNaniteInstancedSkinnedMeshSceneProxy *pFVar3;
  FInstanceSceneDataBuffers *pFVar4;
  
  Nanite::FSkinnedSceneProxy::FSkinnedSceneProxy
            ((FSkinnedSceneProxy *)this,param_1,(FSkinnedMeshSceneProxyDesc *)param_2,param_3,false)
  ;
  *(undefined ***)this = &___7FNaniteInstancedSkinnedMeshSceneProxy__6B_;
  FInstancedSkinnedMeshData::FInstancedSkinnedMeshData(&this->Data,param_2);
  this->field_0x82 = this->field_0x82 | 0x80;
  this->field_0x84 = this->field_0x84 | 0x80;
  this->field_0x33e = this->field_0x33e & 0xfe;
  if ((this->Data).InstanceDataSceneProxy.Object == (FInstanceDataSceneProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNaniteInstancedSkinnedMeshSceneProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = (FInstanceSceneDataBuffers *)
           (**(code **)(((this->Data).InstanceDataSceneProxy.Object)->_padding_ + 8))();
  FPrimitiveSceneProxy::SetupInstanceSceneDataBuffers((FPrimitiveSceneProxy *)this,pFVar4);
  return this;
}

// GetAnimationMinScreenSize @ 147cfa9c0

float __thiscall
FNaniteInstancedSkinnedMeshSceneProxy::GetAnimationMinScreenSize
          (FNaniteInstancedSkinnedMeshSceneProxy *this)

{
  return (this->Data).AnimationMinScreenSize;
}

// GetCachedRayTracingInstance @ 147cfaed0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ERayTracingPrimitiveFlags __thiscall
FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance
          (FNaniteInstancedSkinnedMeshSceneProxy *this,FRayTracingInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  ERayTracingPrimitiveFlags EVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_enum_ERayTracingPrimitiveFlags___cdecl_FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance(FRayTracingInstance&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_enum_ERayTracingPrimitiveFlags___cdecl_FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance(FRayTracingInstance&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_enum_ERayTracingPrimitiveFlags___cdecl_FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance(FRayTracingInstance&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pIVar4 = IConsoleManager::Get();
      plVar5 = (longlong *)
               (**(code **)((longlong)*pIVar4 + 0xc0))
                         (pIVar4,L"r.RayTracing.Geometry.InstancedSkeletalMeshes",1);
      pTVar6 = (TConsoleVariableData<int> *)0x0;
      if (plVar5 != (longlong *)0x0) {
        pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
      }
      `public:_virtual_enum_ERayTracingPrimitiveFlags___cdecl_FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance(FRayTracingInstance&___ptr64)___ptr64'
      ::__l2::RayTracingInstancedSkeletalMeshesCVar = pTVar6;
      _Init_thread_footer(&`public:_virtual_enum_ERayTracingPrimitiveFlags___cdecl_FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance(FRayTracingInstance&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar6 = `public:_virtual_enum_ERayTracingPrimitiveFlags___cdecl_FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance(FRayTracingInstance&___ptr64)___ptr64'
           ::__l2::RayTracingInstancedSkeletalMeshesCVar;
  if (`public:_virtual_enum_ERayTracingPrimitiveFlags___cdecl_FNaniteInstancedSkinnedMeshSceneProxy::GetCachedRayTracingInstance(FRayTracingInstance&___ptr64)___ptr64'
      ::__l2::RayTracingInstancedSkeletalMeshesCVar != (TConsoleVariableData<int> *)0x0) {
    bVar2 = IsInParallelRenderingThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    if (pTVar6->ShadowedValue[1] < 1) {
      return Exclude;
    }
  }
  EVar3 = Nanite::FSkinnedSceneProxy::GetCachedRayTracingInstance
                    ((FSkinnedSceneProxy *)this,param_1);
  return EVar3;
}

// GetInstanceDataUpdateTaskInfo @ 147d062e0

FInstanceDataUpdateTaskInfo * __thiscall
FNaniteInstancedSkinnedMeshSceneProxy::GetInstanceDataUpdateTaskInfo
          (FNaniteInstancedSkinnedMeshSceneProxy *this)

{
  FInstanceDataSceneProxy *pFVar1;
  FInstanceDataUpdateTaskInfo *pFVar2;
  
  pFVar1 = (this->Data).InstanceDataSceneProxy.Object;
  if (pFVar1 != (FInstanceDataSceneProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d062ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FInstanceDataUpdateTaskInfo *)(**(code **)(pFVar1->_padding_ + 0x10))();
    return pFVar2;
  }
  return (FInstanceDataUpdateTaskInfo *)0x0;
}

// GetInstanceDrawDistanceMinMax @ 147d06420

bool __thiscall
FNaniteInstancedSkinnedMeshSceneProxy::GetInstanceDrawDistanceMinMax
          (FNaniteInstancedSkinnedMeshSceneProxy *this,TVector2<float> *param_1)

{
  uint uVar1;
  undefined8 local_res8;
  
  uVar1 = (this->Data).InstanceEndCullDistance;
  if (uVar1 != 0) {
    local_res8._4_4_ = (float)uVar1;
    local_res8._0_4_ = (float)(this->Data).InstanceMinDrawDistance;
    param_1->field0_0x0 = local_res8;
    return true;
  }
  param_1->field0_0x0 = (TVector2<float>_u_0)0x0;
  return false;
}

// GetTypeHash @ 147d0fe50

ulong64 __thiscall
FNaniteInstancedSkinnedMeshSceneProxy::GetTypeHash(FNaniteInstancedSkinnedMeshSceneProxy *this)

{
  return 0x15520cc48;
}

// SetInstanceCullDistance_RenderThread @ 147d2a010

void __thiscall
FNaniteInstancedSkinnedMeshSceneProxy::SetInstanceCullDistance_RenderThread
          (FNaniteInstancedSkinnedMeshSceneProxy *this,float param_1,float param_2)

{
  (this->Data).InstanceStartCullDistance = (uint)(longlong)param_1;
  (this->Data).InstanceEndCullDistance = (uint)(longlong)param_2;
  return;
}

