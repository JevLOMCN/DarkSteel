// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// IsDecal @ 147fe25e0

bool __thiscall FMeshBatch::IsDecal(FMeshBatch *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  FMaterial *pFVar2;
  
  pFVar2 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                     (this->MaterialRenderProxy,param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x000147fe2601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
  return (bool)uVar1;
}

// IsDualBlend @ 147fe26d0

bool __thiscall FMeshBatch::IsDualBlend(FMeshBatch *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  FMaterial *pFVar2;
  
  pFVar2 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                     (this->MaterialRenderProxy,param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x318);
                    /* WARNING: Could not recover jumptable at 0x000147fe26f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
  return (bool)uVar1;
}

// IsMasked @ 147fe2eb0

bool __thiscall FMeshBatch::IsMasked(FMeshBatch *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  FMaterial *pFVar2;
  
  pFVar2 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                     (this->MaterialRenderProxy,param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x250);
                    /* WARNING: Could not recover jumptable at 0x000147fe2ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
  return (bool)uVar1;
}

// IsTranslucent @ 147fe3410

bool __thiscall FMeshBatch::IsTranslucent(FMeshBatch *this,Type param_1)

{
  uint uVar1;
  FMaterial *pFVar2;
  
  pFVar2 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                     (this->MaterialRenderProxy,param_1);
  uVar1 = (**(code **)(pFVar2->_padding_ + 0x268))(pFVar2);
  return 1 < uVar1;
}

// UseForHairStrands @ 1480005c0

bool __thiscall FMeshBatch::UseForHairStrands(FMeshBatch *this,Type param_1)

{
  bool bVar1;
  FMaterial *pFVar2;
  
  if (param_1 != SM5) {
    return false;
  }
  pFVar2 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this->MaterialRenderProxy,SM5);
  bVar1 = IsCompatibleWithHairStrands(pFVar2,SM5);
  return bVar1;
}

// operator() @ 1484bfc50

bool __thiscall `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  longlong lVar1;
  FString *pFVar2;
  bool bVar3;
  undefined4 local_res8 [2];
  FName local_res10;
  FScriptContainerElement *local_58;
  int local_50;
  int local_4c;
  FString local_48;
  undefined1 local_38 [16];
  undefined4 *local_28;
  undefined8 local_20;
  
  local_res8[0] = 0;
  bVar3 = *(longlong **)(*(longlong *)this + 0xa8) == (longlong *)0x0;
  if (bVar3) {
    pFVar2 = ::FString::FString(&local_48,L"nullptr");
  }
  else {
    lVar1 = (**(code **)(**(longlong **)(*(longlong *)this + 0xa8) + 0x30))();
    local_res10 = *(FName *)(lVar1 + 0x28);
    pFVar2 = ::FName::ToString(&local_res10,(FString *)local_38);
  }
  local_58 = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50 = (pFVar2->Data).ArrayNum;
  local_4c = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if ((*(longlong *)(*(longlong *)this + 0xa8) == 0) ||
     (local_res8[0] = 1, *(int *)(*(longlong *)(*(longlong *)this + 0xa8) + 0x18) == -1)) {
    local_res8[0] = 0;
  }
  local_38._8_8_ = &local_58;
  local_28 = local_res8;
  local_20 = *(undefined8 *)((longlong)this + 8);
  local_38._0_8_ = param_1;
  ``FMeshBatch::Validate'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(local_38);
  if (local_58 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58);
  }
  return false;
}

// PreparePrimitiveUniformBuffer @ 1484e61f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMeshBatch::PreparePrimitiveUniformBuffer
          (FMeshBatch *this,FPrimitiveSceneProxy *param_1,Type param_2)

{
  ForElementType<FMeshBatchElement> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<FMeshBatchElement> FVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  bVar3 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)param_2);
  if ((!bVar3) || (param_2 == ES3_1)) {
    iVar6 = (this->Elements).ArrayNum;
    uVar7 = 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
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
        FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
        FVar5 = (ForElementType<FMeshBatchElement>)this;
        if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
          FVar5 = FVar1;
        }
        if ((*(longlong *)(lVar8 + (longlong)FVar5) == 0) &&
           (*(longlong *)(lVar8 + 8 + (longlong)FVar5) == 0)) {
          *(TUniformBufferRef<FPrimitiveUniformShaderParameters> *)(lVar8 + (longlong)FVar5) =
               param_1->UniformBuffer;
        }
        iVar6 = (this->Elements).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x98;
      } while ((int)uVar7 < iVar6);
    }
  }
  return;
}

// Validate @ 148500c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FMeshBatch::Validate(FMeshBatch *this,FPrimitiveSceneProxy *param_1,Type param_2)

{
  undefined1 *puVar1;
  ForElementType<FMeshBatchElement> FVar2;
  FMaterialRenderProxy *pFVar3;
  FVertexFactory *pFVar4;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<FMeshBatchElement> FVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong local_res8;
  FPrimitiveSceneProxy *local_res10;
  FGenericStaticFeatureLevel local_res18;
  FMeshBatch *local_108;
  FPrimitiveSceneProxy **local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FScriptContainerElement *local_58 [2];
  FScriptContainerElement *local_48 [2];
  
  uVar18 = 0;
  local_res10 = param_1;
  local_res18.FeatureLevel = param_2;
  if ((param_1 == (FPrimitiveSceneProxy *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PrimitiveSceneProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SceneManagement.cpp"
                         ,0x64b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_100 = &local_res10;
  local_108 = this;
  if (this->MaterialRenderProxy == (FMaterialRenderProxy *)0x0) {
    ::FString::FString(&local_f8,L"Mesh has a null material render proxy!");
    bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_f8);
LAB_148500cba:
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    return bVar8;
  }
  bVar8 = FPrimitiveSceneProxy::VerifyUsedMaterial(local_res10,this->MaterialRenderProxy);
  if (!bVar8) {
    ::FString::FString(&local_e8,
                       L"Mesh material is not marked as used by the primitive scene proxy.");
    bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_e8);
    local_f8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    goto LAB_148500cba;
  }
  if (this->VertexFactory == (FVertexFactory *)0x0) {
    ::FString::FString(&local_d8,L"Mesh has a null vertex factory!");
    bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_d8);
    local_f8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    goto LAB_148500cba;
  }
  if ((int)this->VertexFactory->_padding_ == -1) {
    ::FString::FString(&local_c8,L"Mesh has an uninitialized vertex factory!");
    bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_c8);
    local_f8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    goto LAB_148500cba;
  }
  iVar16 = (this->Elements).ArrayNum;
  if (0 < iVar16) {
    local_res8 = 0;
    uVar19 = uVar18;
    do {
      uVar14 = (uint)uVar19;
      uVar11 = 0;
      if ((int)uVar14 < iVar16) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FMeshBatchElement>)this;
      if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
        FVar13 = FVar2;
      }
      if (*(longlong *)((uchar *)((longlong)FVar13 + 0x18) + local_res8) != 0) {
        lVar12 = *(longlong *)
                  (*(longlong *)((uchar *)((longlong)FVar13 + 0x18) + local_res8) + 0x20);
        if (lVar12 == 0) {
          pFVar3 = this->MaterialRenderProxy;
          if (pFVar3 != (FMaterialRenderProxy *)0x0) {
            (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,local_48);
            uVar18 = 2;
          }
          ::FString::PrintfImpl
                    (&local_a8,
                     L"FMeshElementCollector::AddMesh - On MeshBatchElement %d, Material \'%s\', index buffer object has null RHI resource"
                    );
          bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_a8);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (uVar18 == 0) {
            return bVar8;
          }
          goto LAB_1485012e0;
        }
        if (this->Type == 0) {
          iVar16 = 3;
        }
        else if (this->Type == 2) {
          iVar16 = 2;
        }
        else {
          iVar16 = 1;
          if (this->Type == 5) {
            iVar16 = 3;
          }
        }
        uVar11 = 0;
        if (this->Type == 1) {
          uVar11 = 2;
        }
        if ((*(uint *)(lVar12 + 0xd8) != 0) &&
           (*(uint *)(lVar12 + 0xd8) <
            (*(int *)((uchar *)((longlong)FVar13 + 0x58) + local_res8) +
            iVar16 * *(int *)((uchar *)((longlong)FVar13 + 0x5c) + local_res8) + uVar11) *
            *(int *)(lVar12 + 0xdc))) {
          pFVar3 = this->MaterialRenderProxy;
          if (pFVar3 != (FMaterialRenderProxy *)0x0) {
            (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,local_58);
          }
          ::FString::PrintfImpl
                    (&local_b8,
                     L"MeshBatchElement %d, Material \'%s\', index range extends past index buffer bounds: Start %u, Count %u, Buffer Size %u, Buffer stride %u"
                    );
          bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_b8);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          local_48[0] = local_58[0];
          if (pFVar3 == (FMaterialRenderProxy *)0x0) {
            return bVar8;
          }
          goto LAB_1485012e0;
        }
      }
      iVar16 = (this->Elements).ArrayNum;
      local_res8 = local_res8 + 0x98;
      uVar19 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < iVar16);
  }
  lVar12 = (**(code **)(this->VertexFactory->_padding_ + 0x30))();
  if ((local_res10->bVFRequiresPrimitiveUniformBuffer == '\0') &&
     ((*(byte *)(lVar12 + 0x38) & 0x80) == 0)) {
    ::FString::FString(&local_98,
                       L"PrimitiveSceneProxy has bVFRequiresPrimitiveUniformBuffer disabled yet tried to draw with a vertex factory that did not support PrimitiveIdStream"
                      );
    bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_98);
    local_48[0] = local_98.Data.AllocatorInstance.Data;
LAB_1485012e0:
    if (local_48[0] != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  else {
    if (local_res10->bSupportsGPUScene != '\0') {
      pFVar4 = this->VertexFactory;
      lVar12 = (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4);
      if ((((*(byte *)(lVar12 + 0x38) & 0x80) == 0) || (pFVar4->PrimitiveIdStreamIndex[0] == -1)) &&
         (local_res10->bVFRequiresPrimitiveUniformBuffer == '\0')) {
        ::FString::FString(&local_88,
                           L"PrimitiveSceneProxy has SupportsGPUScene() does not match VertexFactory->SupportsGPUScene() or bVFRequiresPrimitiveUniformBuffer"
                          );
        bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_88);
        local_48[0] = local_88.Data.AllocatorInstance.Data;
        goto LAB_1485012e0;
      }
    }
    bVar8 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,local_res18);
    if ((bVar8) && (-1 < this->VertexFactory->PrimitiveIdStreamIndex[0])) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    iVar16 = (this->Elements).ArrayNum;
    TVar5 = local_res10->UniformBuffer;
    if (0 < iVar16) {
      uVar19 = uVar18;
      do {
        uVar17 = (uint)uVar18;
        uVar15 = ~uVar17 >> 0x1f;
        uVar14 = 0;
        uVar11 = uVar14;
        if ((int)uVar17 < iVar16) {
          uVar11 = uVar15;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        if (bVar8) {
          if ((int)uVar17 < (this->Elements).ArrayNum) {
            uVar14 = uVar15;
          }
          if ((uVar14 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<FMeshBatchElement>)this;
          if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
            FVar13 = FVar2;
          }
          if (((*(longlong *)(uVar19 + (longlong)FVar13) != 0) &&
              (local_res10->bVFRequiresPrimitiveUniformBuffer == '\0')) &&
             (1 < (int)local_res18.FeatureLevel)) {
            ::FString::FString(&local_78,
                               L"FMeshBatch was assigned a PrimitiveUniformBuffer even though the vertex factory fetches primitive shader data through the GPUScene buffer. The assigned PrimitiveUniformBuffer cannot be respected. Use PrimitiveUniformBufferResource instead for dynamic primitive data, or leave both null to get FPrimitiveSceneProxy->UniformBuffer"
                              );
            `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_78);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (TVar5 == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
          uVar11 = uVar14;
          if ((int)uVar17 < (this->Elements).ArrayNum) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
          FVar13 = (ForElementType<FMeshBatchElement>)this;
          if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
            FVar13 = FVar2;
          }
          if (*(longlong *)(uVar19 + (longlong)FVar13) == 0) {
            if ((int)uVar17 < (this->Elements).ArrayNum) {
              uVar14 = uVar15;
            }
            if ((uVar14 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            FVar2 = (this->Elements).AllocatorInstance.SecondaryData;
            FVar13 = (ForElementType<FMeshBatchElement>)this;
            if (FVar2 != (ForElementType<FMeshBatchElement>)0x0) {
              FVar13 = FVar2;
            }
            if (*(longlong *)(uVar19 + 8 + (longlong)FVar13) == 0) {
              ::FString::FString(&local_68,
                                 L"No primitive uniform buffer was specified and the vertex factory does not have a valid primitive id stream"
                                );
              bVar8 = `FMeshBatch::Validate'::__l2::<lambda_1>::operator()(&local_108,&local_68);
              local_48[0] = local_68.Data.AllocatorInstance.Data;
              goto LAB_1485012e0;
            }
          }
        }
        iVar16 = (this->Elements).ArrayNum;
        uVar18 = (ulonglong)(uVar17 + 1);
        uVar19 = uVar19 + 0x98;
      } while ((int)(uVar17 + 1) < iVar16);
    }
    bVar8 = true;
  }
  return bVar8;
}

// operator= @ 148626480

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FMeshBatch * __thiscall FMeshBatch::operator=(FMeshBatch *this,FMeshBatch *param_1)

{
  ForElementType<FMeshBatchElement> FVar1;
  uint uVar2;
  ForElementType<FMeshBatchElement> FVar3;
  
  if (this != param_1) {
    FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
    FVar3 = (ForElementType<FMeshBatchElement>)this;
    if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
      FVar3 = FVar1;
    }
    DestructItems<FMeshBatchElement,int>((FMeshBatchElement *)FVar3,(this->Elements).ArrayNum);
    if ((param_1->Elements).AllocatorInstance.SecondaryData ==
        (ForElementType<FMeshBatchElement>)0x0) {
      memmove(this,param_1,0x98);
    }
    FVar1 = (this->Elements).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<FMeshBatchElement>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->Elements).AllocatorInstance.SecondaryData =
         (param_1->Elements).AllocatorInstance.SecondaryData;
    (param_1->Elements).AllocatorInstance.SecondaryData = (ForElementType<FMeshBatchElement>)0x0;
    (this->Elements).ArrayNum = (param_1->Elements).ArrayNum;
    (this->Elements).ArrayMax = (param_1->Elements).ArrayMax;
    (param_1->Elements).ArrayNum = 0;
    (param_1->Elements).ArrayMax = 1;
  }
  this->VertexFactory = param_1->VertexFactory;
  this->MaterialRenderProxy = param_1->MaterialRenderProxy;
  this->LCI = param_1->LCI;
  (this->BatchHitProxyId).Index = (param_1->BatchHitProxyId).Index;
  this->DynamicMeshBoundsIndex = param_1->DynamicMeshBoundsIndex;
  this->TessellationDisablingShadowMapMeshSize = param_1->TessellationDisablingShadowMapMeshSize;
  this->SegmentIndex = param_1->SegmentIndex;
  this->MeshIdInPrimitive = param_1->MeshIdInPrimitive;
  this->LODIndex = param_1->LODIndex;
  uVar2 = (ZPULL(*(undefined4 *)&this->field_0xd4,0,1) ^ param_1->ReverseCulling) & 1 ^
          *(undefined4 *)&this->field_0xd4;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 2 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 4 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 8 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x10 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x20 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x40 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x380 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x1c00 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x2000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x4000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x8000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x10000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x20000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x40000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x380000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x400000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x800000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x1000000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x2000000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  uVar2 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x4000000 ^ uVar2;
  *(uint *)&this->field_0xd4 = uVar2;
  *(uint *)&this->field_0xd4 = (uVar2 ^ *(uint *)&param_1->field_0xd4) & 0x8000000 ^ uVar2;
  this->VisualizeHLODIndex = param_1->VisualizeHLODIndex;
  this->VisualizeLODIndex = param_1->VisualizeLODIndex;
  return this;
}

