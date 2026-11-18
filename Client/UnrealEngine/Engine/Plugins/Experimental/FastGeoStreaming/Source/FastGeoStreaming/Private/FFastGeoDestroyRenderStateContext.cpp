// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 4

// FFastGeoDestroyRenderStateContext @ 14da18750

FFastGeoDestroyRenderStateContext * __thiscall
FFastGeoPrimitiveComponent::FFastGeoDestroyRenderStateContext::FFastGeoDestroyRenderStateContext
          (FFastGeoDestroyRenderStateContext *this,FSceneInterface *param_1)

{
  this->Scene = param_1;
  (this->PrimitiveSceneProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveSceneProxies).ArrayNum = 0;
  (this->PrimitiveSceneProxies).ArrayMax = 0;
  return this;
}

// ~FFastGeoDestroyRenderStateContext @ 14da1b440

void __thiscall
FFastGeoPrimitiveComponent::FFastGeoDestroyRenderStateContext::~FFastGeoDestroyRenderStateContext
          (FFastGeoDestroyRenderStateContext *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->PrimitiveSceneProxies).ArrayNum != 0) {
    (**(code **)(this->Scene->_padding_ + 0x40))(this->Scene,&this->PrimitiveSceneProxies);
  }
  pFVar1 = (this->PrimitiveSceneProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// DestroyProxy @ 14da26b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FFastGeoPrimitiveComponent::FFastGeoDestroyRenderStateContext::DestroyProxy
          (FFastGeoDestroyRenderStateContext *param_1,FPrimitiveSceneProxy *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPrimitiveSceneProxy *local_res10;
  ForAnyElementType local_18;
  undefined4 local_10;
  int local_c;
  
  local_res10 = param_2;
  if (param_1 == (FFastGeoDestroyRenderStateContext *)0x0) {
    pFVar3 = param_2->Scene;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 1;
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x40);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_18,1,&local_c);
    *(FPrimitiveSceneProxy **)local_18.Data = param_2;
    (*pcVar4)(pFVar3,&local_18);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
    return;
  }
  pFVar2 = (param_1->PrimitiveSceneProxies).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(param_1->PrimitiveSceneProxies).ArrayMax * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (param_1->PrimitiveSceneProxies).ArrayNum;
  piVar1 = &(param_1->PrimitiveSceneProxies).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_1->PrimitiveSceneProxies).AllocatorInstance,piVar1);
  }
  (param_1->PrimitiveSceneProxies).ArrayNum = iVar6 + 1;
  *(FPrimitiveSceneProxy **)
   ((param_1->PrimitiveSceneProxies).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_res10;
  return;
}

// HasPendingWork @ 14da2c120

bool __thiscall
FFastGeoPrimitiveComponent::FFastGeoDestroyRenderStateContext::HasPendingWork
          (FFastGeoDestroyRenderStateContext *this)

{
  return (this->PrimitiveSceneProxies).ArrayNum != 0;
}

