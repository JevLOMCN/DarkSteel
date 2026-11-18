// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// Add @ 1449ab0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FHairInstanceCullingResults::Add
          (FHairInstanceCullingResults *this,FViewInfo *param_1,FHairStrandsInstance *param_2,
          EHairInstanceVisibilityType param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = param_2->RegisteredIndex;
  if ((-1 < (int)uVar2) && ((int)uVar2 < (this->InstancesVisibilityType).ArrayNum)) {
    iVar6 = 7;
    if (param_1->SceneRendererPrimaryViewId < 7) {
      iVar6 = param_1->SceneRendererPrimaryViewId;
    }
    bVar5 = (byte)(iVar6 << 2);
    uVar7 = 0;
    if ((int)uVar2 < (this->InstancesVisibilityType).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->InstancesVisibilityType).AllocatorInstance.Data + (longlong)(int)uVar2 * 4;
    *(uint *)pFVar1 = *(uint *)pFVar1 & ~(0xf << (bVar5 & 0x1f));
    uVar2 = param_2->RegisteredIndex;
    uVar7 = 0;
    if ((int)uVar2 < (this->InstancesVisibilityType).ArrayNum) {
      uVar7 = ~uVar2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->InstancesVisibilityType).AllocatorInstance.Data + (longlong)(int)uVar2 * 4;
    *(uint *)pFVar1 = *(uint *)pFVar1 | (uint)param_3 << (bVar5 & 0x1f);
  }
  return;
}

// InitVisibility @ 1449f3780

void __thiscall
FHairInstanceCullingResults::InitVisibility(FHairInstanceCullingResults *this,uint param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_18 [4];
  
  uVar7 = (ulonglong)param_1;
  local_18[0] = 0;
  pTVar1 = &this->InstancesVisibilityType;
  if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar2 = &(this->InstancesVisibilityType).ArrayMax;
  (this->InstancesVisibilityType).ArrayNum = 0;
  if (*piVar2 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (0 < (int)param_1) {
    do {
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar2 * 4)) {
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
      iVar6 = (this->InstancesVisibilityType).ArrayNum;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->InstancesVisibilityType).ArrayNum = iVar6 + 1;
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_18[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// Is @ 1449f75a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EHairInstanceVisibilityType __thiscall
FHairInstanceCullingResults::Is
          (FHairInstanceCullingResults *this,FSceneView *param_1,FHairStrandsInstance *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EHairInstanceVisibilityType EVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_2->RegisteredIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->InstancesVisibilityType).ArrayNum)) {
    iVar2 = *(int *)((longlong)param_1[1].PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64 + 4
                    );
    iVar7 = 7;
    if (iVar2 < 7) {
      iVar7 = iVar2;
    }
    uVar6 = 0;
    if ((int)uVar1 < (this->InstancesVisibilityType).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    return (EHairInstanceVisibilityType)
           (*(uint *)((this->InstancesVisibilityType).AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 4) >> ((char)iVar7 * '\x04' & 0x1fU)) & 0xf;
  }
  return NotVisible;
}

// Is @ 1449f75b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

EHairInstanceVisibilityType __thiscall
FHairInstanceCullingResults::Is
          (FHairInstanceCullingResults *this,FViewInfo *param_1,FHairStrandsInstance *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EHairInstanceVisibilityType EVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_2->RegisteredIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->InstancesVisibilityType).ArrayNum)) {
    iVar6 = 7;
    if (param_1->SceneRendererPrimaryViewId < 7) {
      iVar6 = param_1->SceneRendererPrimaryViewId;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->InstancesVisibilityType).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
    return (EHairInstanceVisibilityType)
           (*(uint *)((this->InstancesVisibilityType).AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 4) >> ((char)iVar6 * '\x04' & 0x1fU)) & 0xf;
  }
  return NotVisible;
}

// Is @ 1449f7660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __thiscall
FHairInstanceCullingResults::Is
          (FHairInstanceCullingResults *this,FViewInfo *param_1,FHairStrandsInstance *param_2,
          EHairInstanceVisibilityType param_3)

{
  EHairInstanceVisibilityType EVar1;
  
  EVar1 = Is(this,param_1,param_2);
  return EVar1 == param_3;
}

// IsVisibleInAnyViews @ 1449f8bf0

bool __thiscall
FHairInstanceCullingResults::IsVisibleInAnyViews
          (FHairInstanceCullingResults *this,FHairStrandsInstance *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = param_1->RegisteredIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->InstancesVisibilityType).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar1 < (this->InstancesVisibilityType).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    if (*(int *)((this->InstancesVisibilityType).AllocatorInstance.Data + (longlong)(int)uVar1 * 4)
        != 0) {
      return true;
    }
  }
  return false;
}

