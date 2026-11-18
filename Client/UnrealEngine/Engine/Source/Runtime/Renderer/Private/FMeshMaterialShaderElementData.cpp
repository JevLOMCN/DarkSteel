// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// InitializeMeshMaterialData @ 1455b5540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FMeshMaterialShaderElementData::InitializeMeshMaterialData
          (FMeshMaterialShaderElementData *this,FSceneView *param_1,FPrimitiveSceneProxy *param_2,
          FMeshBatch *param_3,int param_4,bool param_5)

{
  int iVar1;
  
  iVar1 = param_4;
  param_4._0_1_ = param_3->bDitheredLODTransition;
  InitializeMeshMaterialData(this,param_1,param_2,iVar1,param_4._0_1_,param_5);
  return;
}

// InitializeMeshMaterialData @ 1455b5570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FMeshMaterialShaderElementData::InitializeMeshMaterialData
          (FMeshMaterialShaderElementData *this,FSceneView *param_1,FPrimitiveSceneProxy *param_2,
          int param_3,bool param_4,bool param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  FRHIUniformBuffer *pFVar6;
  uint uVar7;
  
  if (GDistanceCullFadedInUniformBuffer._40_8_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((GDistanceCullFadedInUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->FadeUniformBuffer = (FRHIUniformBuffer *)GDistanceCullFadedInUniformBuffer._40_8_;
  if (GDitherFadedInUniformBuffer._40_8_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((GDitherFadedInUniformBuffer._40_8_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->DitherUniformBuffer = (FRHIUniformBuffer *)GDitherFadedInUniformBuffer._40_8_;
  if (param_1 == (FSceneView *)0x0) {
    return;
  }
  if (((-1 < param_3) && (param_4)) &&
     ((!param_5 ||
      (*(char *)((longlong)param_1[1].ViewMatrices.InvTranslatedViewProjectionMatrix.M[3] + 9) ==
       '\0')))) {
    if (((int)param_1[1].SceneViewInitOptions._padding_ <= param_3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar5 = (longlong *)param_1[1].SceneViewInitOptions._padding_;
    uVar7 = 1 << ((byte)param_3 & 0x1f);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = &param_1[1].SceneViewInitOptions._padding_;
    }
    lVar1 = (ulonglong)((uint)param_3 >> 5) * 4;
    if ((*(uint *)((longlong)plVar5 + lVar1) & uVar7) == 0) {
      if (((int)param_1[1].SceneViewInitOptions._padding_ <= param_3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar5 = (longlong *)param_1[1].SceneViewInitOptions._padding_;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = &param_1[1].SceneViewInitOptions._padding_;
      }
      if ((*(uint *)((longlong)plVar5 + lVar1) & uVar7) == 0) goto LAB_1455b576c;
      pFVar6 = (FRHIUniformBuffer *)param_1[1].SceneViewInitOptions._padding_;
    }
    else {
      pFVar6 = (FRHIUniformBuffer *)param_1[1].SceneViewInitOptions._padding_;
    }
    this->DitherUniformBuffer = pFVar6;
  }
LAB_1455b576c:
  if (param_2 != (FPrimitiveSceneProxy *)0x0) {
    uVar7 = param_2->PrimitiveSceneInfo->PackedIndex;
    if ((-1 < (int)uVar7) && ((int)uVar7 < (int)param_1[1].SceneViewInitOptions._padding_)) {
      plVar5 = (longlong *)param_1[1].SceneViewInitOptions._padding_;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = &param_1[1].SceneViewInitOptions._padding_;
      }
      if ((*(uint *)((longlong)plVar5 +
                    (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar7 & 0x1f) & 1) != 0) {
        uVar4 = 0;
        if ((int)uVar7 < (int)param_1[1].SceneViewInitOptions._padding_) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this->FadeUniformBuffer =
             *(FRHIUniformBuffer **)
              (param_1[1].SceneViewInitOptions._padding_ + (longlong)(int)uVar7 * 8);
      }
    }
  }
  return;
}

// InitializeMeshMaterialData @ 1455b5840

void __thiscall
FMeshMaterialShaderElementData::InitializeMeshMaterialData(FMeshMaterialShaderElementData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (GDistanceCullFadedInUniformBuffer._40_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((GDistanceCullFadedInUniformBuffer._40_8_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->FadeUniformBuffer = (FRHIUniformBuffer *)GDistanceCullFadedInUniformBuffer._40_8_;
  if (GDitherFadedInUniformBuffer._40_8_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((GDitherFadedInUniformBuffer._40_8_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformBufferRHI.GetReference()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                           ,0x66,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->DitherUniformBuffer = (FRHIUniformBuffer *)GDitherFadedInUniformBuffer._40_8_;
  return;
}

