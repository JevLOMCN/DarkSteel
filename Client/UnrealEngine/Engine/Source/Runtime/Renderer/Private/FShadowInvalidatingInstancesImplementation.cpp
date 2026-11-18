// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AddInstanceRange @ 1457d1b70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::FShadowInvalidatingInstancesImplementation::AddInstanceRange
          (FShadowInvalidatingInstancesImplementation *this,FPersistentPrimitiveIndex param_1,
          uint param_2,uint param_3)

{
  TArray<FVirtualShadowMapInstanceRange,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_18;
  uint uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  pTVar1 = &this->PrimitiveInstancesToInvalidate;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  uStack_c = CONCAT31(uStack_c._1_3_,1);
  local_18 = param_1.Index;
  uStack_14 = param_2;
  uStack_10 = param_3;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar3 + (longlong)(this->PrimitiveInstancesToInvalidate).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->PrimitiveInstancesToInvalidate).ArrayNum;
  piVar2 = &(this->PrimitiveInstancesToInvalidate).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->PrimitiveInstancesToInvalidate).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(ulonglong *)pFVar3 = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar3 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// AddPrimitive @ 1457d2110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayCacheManager::FShadowInvalidatingInstancesImplementation::AddPrimitive
          (FShadowInvalidatingInstancesImplementation *this,FPrimitiveSceneInfo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001457d2127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))
            (this,(param_1->PersistentIndex).Index,param_1->InstanceSceneDataOffset,
             param_1->NumInstanceSceneDataEntries);
  return;
}

