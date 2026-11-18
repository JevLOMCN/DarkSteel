// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// FOptimusAdvancedSkeletonDataProviderProxy @ 14e14f9e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusAdvancedSkeletonDataProviderProxy * __thiscall
FOptimusAdvancedSkeletonDataProviderProxy::FOptimusAdvancedSkeletonDataProviderProxy
          (FOptimusAdvancedSkeletonDataProviderProxy *this)

{
  this->_padding_ = (longlong)&___7FOptimusAdvancedSkeletonDataProviderProxy__6B_;
  this->SkeletalMeshObject = (FSkeletalMeshObject *)0x0;
  (this->SkinWeightProfile).ComparisonIndex = 0;
  (this->SkinWeightProfile).Number = 0;
  (this->ParameterBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterBuffer).ArrayNum = 0;
  (this->ParameterBuffer).ArrayMax = 0;
  (this->LayeredBoneMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayeredBoneMatrices).ArrayNum = 0;
  (this->LayeredBoneMatrices).ArrayMax = 0;
  (this->AttributeBufferRuntimeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBufferRuntimeData).ArrayNum = 0;
  (this->AttributeBufferRuntimeData).ArrayMax = 0;
  (this->Attributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attributes).ArrayNum = 0;
  (this->Attributes).ArrayMax = 0;
  (this->LayeredBoneMatrixBuffer).BufferRefPerSection.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LayeredBoneMatrixBuffer).BufferRefPerSection.ArrayNum = 0;
  (this->LayeredBoneMatrixBuffer).BufferRefPerSection.ArrayMax = 0;
  (this->LayeredBoneMatrixBuffer).BufferSRVPerSection.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LayeredBoneMatrixBuffer).BufferSRVPerSection.ArrayNum = 0;
  (this->LayeredBoneMatrixBuffer).BufferSRVPerSection.ArrayMax = 0;
  (this->LayeredBoneMatrixBuffer).BufferData.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->LayeredBoneMatrixBuffer).BufferData.ArrayNum = 0;
  (this->LayeredBoneMatrixBuffer).BufferData.ArrayMax = 0;
  (this->LayeredBoneMatrixBuffer).NumBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LayeredBoneMatrixBuffer).NumBones.ArrayNum = 0;
  (this->LayeredBoneMatrixBuffer).NumBones.ArrayMax = 0;
  (this->BuffersPerAttributePerSection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuffersPerAttributePerSection).ArrayNum = 0;
  (this->BuffersPerAttributePerSection).ArrayMax = 0;
  (this->BufferSRVsPerAttributePerSection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferSRVsPerAttributePerSection).ArrayNum = 0;
  (this->BufferSRVsPerAttributePerSection).ArrayMax = 0;
  (this->AttributeBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributeBuffers).ArrayNum = 0;
  (this->AttributeBuffers).ArrayMax = 0;
  this->FallbackSRV = (FRDGBufferSRV *)0x0;
  return this;
}

// AllocateResources @ 14e17a1e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusAdvancedSkeletonDataProviderProxy::AllocateResources
          (FOptimusAdvancedSkeletonDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  byte *pbVar1;
  int *piVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  FUploadedBuffer *pFVar7;
  code *pcVar8;
  FRDGBuffer *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FRDGBufferSRV *pFVar16;
  undefined8 *puVar17;
  FRDGBuffer *pFVar18;
  void *_Dst;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ForAnyElementType *pFVar22;
  ulong64 _Size;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint local_res8;
  uint local_res20;
  longlong local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_b8;
  FRDGBufferSRVDesc local_b0;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  longlong local_80;
  FRDGBufferDesc local_78;
  FRDGBufferSRVDesc local_60;
  
  uVar12 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar3 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar19 = 0;
  if ((int)uVar12 < (pFVar3->LODRenderData).Array.ArrayNum) {
    uVar19 = ~uVar12 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar4 = *(FSkeletalMeshLODRenderData **)
            ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
  local_60.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_60._padding_._4_4_ = 0;
  local_60._padding_._0_4_ = 0xffffffff;
  local_60._padding_ = 0;
  local_60._padding_._0_1_ = 0;
  if ((((local_60.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_60._padding_._0_1_ = 0x1c;
  }
  pFVar16 = FRDGBuilder::CreateSRV(param_1,&local_60);
  this->FallbackSRV = pFVar16;
  FOptimusBoneTransformBuffer::SetData
            (&this->LayeredBoneMatrixBuffer,pFVar4,&this->LayeredBoneMatrices);
  FOptimusBoneTransformBuffer::AllocateResources(&this->LayeredBoneMatrixBuffer,param_1);
  iVar15 = (pFVar4->RenderSections).ArrayNum;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar15,&(this->BuffersPerAttributePerSection).AllocatorInstance,
                      &(this->BuffersPerAttributePerSection).ArrayNum,
                      &(this->BuffersPerAttributePerSection).ArrayMax);
  memset((this->BuffersPerAttributePerSection).AllocatorInstance.Data + (longlong)iVar13 * 0x10,0,
         (longlong)iVar15 << 4);
  iVar15 = (pFVar4->RenderSections).ArrayNum;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar15,&(this->BufferSRVsPerAttributePerSection).AllocatorInstance,
                      &(this->BufferSRVsPerAttributePerSection).ArrayNum,
                      &(this->BufferSRVsPerAttributePerSection).ArrayMax);
  memset((this->BufferSRVsPerAttributePerSection).AllocatorInstance.Data + (longlong)iVar13 * 0x10,0
         ,(longlong)iVar15 << 4);
  iVar15 = (pFVar4->RenderSections).ArrayNum;
  pFVar24 = (FScriptContainerElement *)&(this->AttributeBuffers).ArrayNum;
  local_90 = pFVar24;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar15,&(this->AttributeBuffers).AllocatorInstance,(int *)pFVar24,
                      &(this->AttributeBuffers).ArrayMax);
  memset((this->AttributeBuffers).AllocatorInstance.Data + (longlong)iVar13 * 0x10,0,
         (longlong)iVar15 << 4);
  local_res8 = 0;
  if (0 < (pFVar4->RenderSections).ArrayNum) {
    local_b8 = 0;
    local_e0 = 0;
    do {
      uVar12 = ~local_res8 >> 0x1f;
      uVar19 = 0;
      if ((int)local_res8 < (pFVar4->RenderSections).ArrayNum) {
        uVar19 = uVar12;
      }
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar26 = (pFVar4->RenderSections).AllocatorInstance.Data + local_b8;
      uVar19 = 0;
      if ((int)local_res8 < *(int *)pFVar24) {
        uVar19 = uVar12;
      }
      local_88 = pFVar26;
      if ((uVar19 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = (this->AttributeBufferRuntimeData).ArrayNum;
      pFVar23 = (this->AttributeBuffers).AllocatorInstance.Data + local_e0;
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar15,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 8),
                          (int *)(pFVar23 + 0xc));
      memset((void *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar13 * 0x10),0,
             (longlong)iVar15 << 4);
      uVar19 = 0;
      if (0 < (this->AttributeBufferRuntimeData).ArrayNum) {
        local_f8 = 0;
        local_80 = 0;
        do {
          lVar6 = local_80;
          uVar25 = ~uVar19 >> 0x1f;
          uVar20 = 0;
          if ((int)uVar19 < (this->AttributeBufferRuntimeData).ArrayNum) {
            uVar20 = uVar25;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar15 = *(int *)(pFVar26 + 0x40);
          pFVar24 = (this->AttributeBufferRuntimeData).AllocatorInstance.Data;
          uVar20 = 0;
          if ((int)local_res8 < (this->AttributeBuffers).ArrayNum) {
            uVar20 = uVar12;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar23 = (this->AttributeBuffers).AllocatorInstance.Data + local_e0;
          uVar20 = 0;
          if ((int)uVar19 < *(int *)(pFVar23 + 8)) {
            uVar20 = uVar25;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar22 = (ForAnyElementType *)(local_f8 + *(longlong *)pFVar23);
          iVar13 = *(int *)(pFVar24 + lVar6 + 0x14);
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,iVar15 * iVar13,pFVar22,(int *)(pFVar22 + 1),
                              (int *)((longlong)&pFVar22[1].Data + 4));
          memset(pFVar22->Data + iVar14,0,(longlong)(iVar15 * iVar13));
          uVar20 = 0;
          if (0 < iVar15) {
            local_d0 = 0;
            do {
              uVar21 = 0;
              if ((int)local_res8 < (this->AttributeBuffers).ArrayNum) {
                uVar21 = uVar12;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar26 = (this->AttributeBuffers).AllocatorInstance.Data + local_e0;
              uVar21 = 0;
              if ((int)uVar19 < *(int *)(pFVar26 + 8)) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar23 = local_88;
              iVar13 = *(int *)(pFVar24 + lVar6 + 0x14);
              lVar5 = *(longlong *)(local_f8 + *(longlong *)pFVar26);
              uVar21 = 0;
              if ((int)uVar20 < *(int *)(local_88 + 0x40)) {
                uVar21 = ~uVar20 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar14 = (uint)*(ushort *)(local_d0 + *(longlong *)(pFVar23 + 0x38)) *
                       *(int *)(pFVar24 + lVar6 + 0x14);
              uVar21 = 0;
              if ((int)uVar19 < (this->Attributes).ArrayNum) {
                uVar21 = uVar25;
              }
              if ((uVar21 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (*(int *)((this->Attributes).AllocatorInstance.Data + local_f8 + 8) <
                  *(int *)(pFVar24 + lVar6 + 0x14) + iVar14) {
                bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4598663076290493554>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAdvancedSkeleton.cpp"
                                    ,0x38e,
                                    "(SourceDataOffset + AttributeData.Size) <= Attributes[AttributeIndex].Num()"
                                   );
                if (bVar10) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              else {
                uVar21 = 0;
                if ((int)uVar19 < (this->Attributes).ArrayNum) {
                  uVar21 = uVar25;
                }
                if ((uVar21 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                memcpy((void *)((int)(uVar20 * iVar13) + lVar5),
                       (void *)((longlong)iVar14 +
                               *(longlong *)((this->Attributes).AllocatorInstance.Data + local_f8)),
                       (longlong)*(int *)(pFVar24 + lVar6 + 0x14));
              }
              uVar20 = uVar20 + 1;
              local_d0 = local_d0 + 2;
              pFVar26 = local_88;
            } while ((int)uVar20 < iVar15);
          }
          uVar19 = uVar19 + 1;
          local_80 = local_80 + 0x80;
          local_f8 = local_f8 + 0x10;
          pFVar24 = local_90;
        } while ((int)uVar19 < (this->AttributeBufferRuntimeData).ArrayNum);
      }
      local_e0 = local_e0 + 0x10;
      local_res8 = local_res8 + 1;
      local_b8 = local_b8 + 0x118;
      iVar15 = (pFVar4->RenderSections).ArrayNum;
    } while ((int)local_res8 < iVar15);
    local_res20 = 0;
    if (0 < iVar15) {
      local_e8 = 0;
      local_d8 = 0;
      do {
        uVar12 = ~local_res20 >> 0x1f;
        uVar19 = 0;
        if ((int)local_res20 < (this->BuffersPerAttributePerSection).ArrayNum) {
          uVar19 = uVar12;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar24 = (this->BuffersPerAttributePerSection).AllocatorInstance.Data + local_e8;
        uVar19 = 0;
        if ((int)local_res20 < (this->AttributeBuffers).ArrayNum) {
          uVar19 = uVar12;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = *(int *)((this->AttributeBuffers).AllocatorInstance.Data + local_e8 + 8);
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar15,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 8),
                            (int *)(pFVar24 + 0xc));
        memset((void *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar13 * 8),0,
               (longlong)iVar15 << 3);
        uVar19 = 0;
        if ((int)local_res20 < (this->BufferSRVsPerAttributePerSection).ArrayNum) {
          uVar19 = uVar12;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar24 = (this->BufferSRVsPerAttributePerSection).AllocatorInstance.Data + local_e8;
        uVar19 = 0;
        if ((int)local_res20 < (this->AttributeBuffers).ArrayNum) {
          uVar19 = uVar12;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = *(int *)((this->AttributeBuffers).AllocatorInstance.Data + local_e8 + 8);
        iVar13 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar15,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 8),
                            (int *)(pFVar24 + 0xc));
        memset((void *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar13 * 8),0,
               (longlong)iVar15 << 3);
        uVar19 = 0;
        if ((int)local_res20 < (pFVar4->RenderSections).ArrayNum) {
          uVar19 = uVar12;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar20 = 0;
        local_f8 = 0;
        local_d0 = 0;
        uVar19 = *(uint *)((pFVar4->RenderSections).AllocatorInstance.Data + local_d8 + 0x40);
        while( true ) {
          uVar25 = 0;
          if ((int)local_res20 < (this->AttributeBuffers).ArrayNum) {
            uVar25 = uVar12;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(int *)((this->AttributeBuffers).AllocatorInstance.Data + local_e8 + 8) <=
              (int)uVar20) break;
          uVar25 = 0;
          if ((int)local_res20 < (this->AttributeBuffers).ArrayNum) {
            uVar25 = uVar12;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar24 = (this->AttributeBuffers).AllocatorInstance.Data;
          uVar21 = ~uVar20 >> 0x1f;
          uVar25 = 0;
          if ((int)uVar20 < *(int *)(pFVar24 + local_e8 + 8)) {
            uVar25 = uVar21;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          puVar17 = (undefined8 *)(*(longlong *)(pFVar24 + local_e8) + local_d0);
          local_b0._padding_._0_4_ = 0x10109;
          local_b0._padding_._0_4_ = *(int *)(puVar17 + 1) / (int)uVar19;
          local_b0._padding_ = 0;
          local_b0._padding_._4_4_ = local_78._12_4_;
          local_78.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
          local_78.Metadata = (FShaderParametersMetadata *)0x0;
          local_b0._padding_._4_4_ = uVar19;
          local_78.BytesPerElement = (uint)local_b0._padding_;
          local_78.NumElements = uVar19;
          FRDGUserValidation::ValidateCreateBuffer
                    (&param_1->UserValidation,&local_78,L"AttributeBuffer",None);
          if (local_78.BytesPerElement == 0) {
            local_78.BytesPerElement = 1;
          }
          if (local_78.NumElements == 0) {
            local_78.NumElements = 1;
          }
          pFVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
          pFVar18 = FRDGBuffer::FRDGBuffer(pFVar18,L"AttributeBuffer",&local_78,None);
          piVar2 = &(param_1->Buffers).Array.ArrayMax;
          iVar15 = (param_1->Buffers).Array.ArrayNum;
          if (iVar15 == *piVar2) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                               (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar2);
          }
          (param_1->Buffers).Array.ArrayNum = iVar15 + 1;
          (param_1->Buffers).Array.AllocatorInstance.Data[iVar15] = pFVar18;
          (pFVar18->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
          FRDGUserValidation::ValidateCreateBuffer(&param_1->UserValidation,pFVar18);
          FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar18);
          local_b0._padding_._0_4_ = 0xffffffff;
          local_b0._padding_._4_4_ = 0;
          local_b0._padding_ = 0;
          uVar11 = 0;
          if (((pFVar18->Desc).Usage & DrawIndirect) != None) {
            uVar11 = 0x1c;
          }
          local_b0._padding_._0_4_ = CONCAT31((int3)((uint)local_b0._padding_ >> 8),uVar11);
          local_b0.Buffer = pFVar18;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_b0);
          pFVar9 = local_b0.Buffer;
          pFVar16 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
          lVar6 = pFVar9->_padding_;
          piVar2 = &(param_1->Views).Array.ArrayMax;
          *(byte *)&pFVar16->_padding_ = (byte)pFVar16->_padding_ & 0xfe;
          *(undefined8 *)((longlong)&pFVar16->_padding_ + 4) = 0xffffffffffffffff;
          pFVar16->_padding_ = lVar6;
          pFVar16->_padding_ = 0;
          *(undefined1 *)&pFVar16->_padding_ = 3;
          pFVar16->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
          (pFVar16->Desc)._padding_ = CONCAT44(local_b0._padding_._4_4_,(uint)local_b0._padding_);
          (pFVar16->Desc)._padding_ =
               CONCAT44(local_b0._padding_._4_4_,(undefined4)local_b0._padding_);
          (pFVar16->Desc)._padding_ = local_b0._padding_;
          (pFVar16->Desc).Buffer = local_b0.Buffer;
          iVar15 = (param_1->Views).Array.ArrayNum;
          if (iVar15 == *piVar2) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                               (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar2);
          }
          (param_1->Views).Array.ArrayNum = iVar15 + 1;
          (param_1->Views).Array.AllocatorInstance.Data[iVar15] = (FRDGView *)pFVar16;
          *(int *)((longlong)&pFVar16->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar16);
          uVar25 = 0;
          if ((int)local_res20 < (this->BuffersPerAttributePerSection).ArrayNum) {
            uVar25 = uVar12;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_90 = (this->BuffersPerAttributePerSection).AllocatorInstance.Data + local_e8;
          uVar25 = 0;
          if ((int)uVar20 < *(int *)(local_90 + 8)) {
            uVar25 = uVar21;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(FRDGBuffer **)(*(longlong *)local_90 + local_f8 * 8) = pFVar18;
          uVar25 = 0;
          if ((int)local_res20 < (this->BufferSRVsPerAttributePerSection).ArrayNum) {
            uVar25 = uVar12;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar24 = (this->BufferSRVsPerAttributePerSection).AllocatorInstance.Data + local_e8;
          uVar25 = 0;
          if ((int)uVar20 < *(int *)(pFVar24 + 8)) {
            uVar25 = uVar21;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(FRDGBufferSRV **)(*(longlong *)pFVar24 + local_f8 * 8) = pFVar16;
          _Size = (ulong64)*(int *)(puVar17 + 1);
          _Src = (void *)*puVar17;
          FRDGUserValidation::ValidateUploadBuffer(&param_1->UserValidation,pFVar18,_Src,_Size);
          _Dst = _Src;
          if (_Size != 0) {
            _Dst = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,_Size,0x10);
            memcpy(_Dst,_Src,_Size);
          }
          iVar15 = (param_1->UploadedBuffers).ArrayNum;
          piVar2 = &(param_1->UploadedBuffers).ArrayMax;
          if (iVar15 == *piVar2) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                               (0x10e0,&(param_1->UploadedBuffers).AllocatorInstance,piVar2);
          }
          local_f8 = local_f8 + 1;
          (param_1->UploadedBuffers).ArrayNum = iVar15 + 1;
          uVar20 = uVar20 + 1;
          pFVar7 = (param_1->UploadedBuffers).AllocatorInstance.Data;
          pFVar7[iVar15].Buffer = pFVar18;
          pFVar7[iVar15].Data = _Dst;
          pFVar7[iVar15].DataSize = _Size;
          pFVar7[iVar15].bUseDataCallbacks = false;
          pFVar7[iVar15].bUseFreeCallbacks = false;
          *(undefined8 *)&pFVar7[iVar15].DataCallback = 0;
          *(undefined8 *)&pFVar7[iVar15].DataCallback.field_0x28 = 0;
          *(undefined8 *)&pFVar7[iVar15].DataSizeCallback = 0;
          *(undefined8 *)&pFVar7[iVar15].DataSizeCallback.field_0x28 = 0;
          *(undefined8 *)&pFVar7[iVar15].DataFreeCallback = 0;
          *(undefined8 *)&pFVar7[iVar15].DataFreeCallback.field_0x28 = 0;
          *(undefined8 *)&pFVar7[iVar15].DataFillCallback = 0;
          *(undefined8 *)&pFVar7[iVar15].DataFillCallback.field_0x28 = 0;
          pbVar1 = (byte *)((longlong)&pFVar18->_padding_ + 1);
          *pbVar1 = *pbVar1 | 0x80;
          local_d0 = local_d0 + 0x10;
        }
        local_res20 = local_res20 + 1;
        local_d8 = local_d8 + 0x118;
        local_e8 = local_e8 + 0x10;
      } while ((int)local_res20 < (pFVar4->RenderSections).ArrayNum);
    }
  }
  return;
}

// GatherDispatchData @ 14e1b2d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusAdvancedSkeletonDataProviderProxy::GatherDispatchData
          (FOptimusAdvancedSkeletonDataProviderProxy *this,FDispatchData *param_1)

{
  FSkinWeightProfilesData *this_00;
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  FRHIShaderResourceView *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  GPUSkinBoneInfluenceType GVar7;
  uint uVar8;
  FSkinWeightVertexBuffer *this_01;
  FRHIShaderResourceView *pFVar9;
  FRHIShaderResourceView *pFVar10;
  FRHIShaderResourceView *pFVar11;
  FRDGBufferSRV *pFVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uchar *puVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  uint local_a8;
  longlong local_a0;
  undefined8 local_98;
  FSkinWeightVertexBuffer *local_90;
  longlong local_88;
  longlong local_80;
  FRHIShaderResourceView *local_78;
  FRHIShaderResourceView *local_70;
  uchar *local_68;
  FDispatchData *local_60;
  FRHIShaderResourceView *local_58;
  FSkinWeightProfileStack local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_60 = param_1;
  local_a8 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar10 = (FRHIShaderResourceView *)0x0;
  lVar15 = (longlong)(int)local_a8;
  pFVar2 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  iVar1 = (pFVar2->LODRenderData).Array.ArrayNum;
  uVar13 = 0;
  if ((int)local_a8 < iVar1) {
    uVar13 = ~local_a8 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (local_b8 = lVar15, local_b0 = (longlong)iVar1,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_80 = *(longlong *)((pFVar2->LODRenderData).Array.AllocatorInstance.Data + lVar15 * 8);
  this_00 = (FSkinWeightProfilesData *)(local_80 + 0x328);
  pFVar11 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  this_01 = *(FSkinWeightVertexBuffer **)(local_80 + 0x330);
  if (*(FSkinWeightVertexBuffer **)(local_80 + 0x330) == (FSkinWeightVertexBuffer *)0x0) {
    this_01 = (FSkinWeightVertexBuffer *)(local_80 + 0x188);
  }
  local_90 = this_01;
  local_78 = pFVar11;
  bVar6 = FSkinWeightProfilesData::ContainsProfile(this_00,&this->SkinWeightProfile);
  if (bVar6) {
    local_50.Layers.Elements[0] = this->SkinWeightProfile;
    local_98 = 0;
    local_50.Layers.Elements[1].ComparisonIndex.Value = 0;
    local_50.Layers.Elements[1].Number = 0;
    this_01 = FSkinWeightProfilesData::GetOverrideBuffer(this_00,&local_50);
    local_90 = this_01;
  }
  if ((this_01 == (FSkinWeightVertexBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightBuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAdvancedSkeleton.cpp"
                         ,0x404,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this_01->DataVertexBuffer).SRVValue.Reference;
  GVar7 = FSkinWeightVertexBuffer::GetBoneInfluenceType(this_01);
  pFVar9 = pFVar10;
  if (GVar7 == UnlimitedBoneInfluence) {
    pFVar9 = (this_01->LookupVertexBuffer).SRVValue.Reference;
  }
  if (0 < param_1->NumInvocations) {
    local_a0 = 0;
    local_88 = 0;
    local_70 = pFVar11;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      local_70 = pFVar3;
    }
    local_58 = pFVar11;
    if (pFVar9 != (FRHIShaderResourceView *)0x0) {
      local_58 = pFVar9;
    }
    do {
      pFVar11 = local_58;
      lVar20 = local_88;
      lVar15 = local_a0;
      uVar14 = (uint)pFVar10;
      puVar16 = param_1->ParameterBuffer +
                (longlong)(int)(uVar14 * param_1->ParameterBufferStride) +
                (longlong)param_1->ParameterBufferOffset;
      local_68 = puVar16;
      pFVar10 = FSkeletalMeshDeformerHelpers::GetBoneBufferForReading
                          (this->SkeletalMeshObject,local_a8,uVar14,false);
      *(undefined4 *)puVar16 = *(undefined4 *)(local_80 + 300);
      *(uint *)(puVar16 + 4) = (this_01->DataVertexBuffer).MaxBoneInfluences;
      *(uint *)(puVar16 + 8) =
           ((uint)((this_01->DataVertexBuffer).bUse16BitBoneWeight != false) +
           ((this_01->DataVertexBuffer).bUse16BitBoneIndex != false) + 2) *
           (this_01->DataVertexBuffer).MaxBoneInfluences;
      uVar13 = 0x100;
      if ((this_01->DataVertexBuffer).bUse16BitBoneWeight != false) {
        uVar13 = 0x200;
      }
      bVar6 = (this_01->DataVertexBuffer).bUse16BitBoneIndex;
      *(FRHIShaderResourceView **)(puVar16 + 0x20) = pFVar11;
      *(uint *)(puVar16 + 0xc) = uVar13 | (bVar6 != false) + 1;
      pFVar11 = local_78;
      if (pFVar10 != (FRHIShaderResourceView *)0x0) {
        pFVar11 = pFVar10;
      }
      *(FRHIShaderResourceView **)(puVar16 + 0x10) = pFVar11;
      *(FRHIShaderResourceView **)(puVar16 + 0x18) = local_70;
      if ((this->LayeredBoneMatrixBuffer).NumBones.ArrayNum < 1) {
LAB_14e1b3049:
        pFVar12 = this->FallbackSRV;
      }
      else {
        iVar1 = (this->LayeredBoneMatrixBuffer).BufferSRVPerSection.ArrayNum;
        uVar13 = 0;
        if ((int)uVar14 < iVar1) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_b8 = (longlong)(int)uVar14;
          local_b0 = (longlong)iVar1;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (*(longlong *)
             ((this->LayeredBoneMatrixBuffer).BufferSRVPerSection.AllocatorInstance.Data + lVar20)
            == 0) goto LAB_14e1b3049;
        iVar1 = (this->LayeredBoneMatrixBuffer).BufferSRVPerSection.ArrayNum;
        uVar13 = 0;
        if ((int)uVar14 < iVar1) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_b8 = (longlong)(int)uVar14;
          local_b0 = (longlong)iVar1;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar12 = *(FRDGBufferSRV **)
                   ((this->LayeredBoneMatrixBuffer).BufferSRVPerSection.AllocatorInstance.Data +
                   lVar20);
      }
      uVar13 = 0;
      *(FRDGBufferSRV **)(puVar16 + 0x28) = pFVar12;
      if (0 < (this->AttributeBufferRuntimeData).ArrayNum) {
        lVar17 = 0;
        lVar19 = 0;
        do {
          iVar1 = (this->BufferSRVsPerAttributePerSection).ArrayNum;
          uVar8 = 0;
          if ((int)uVar14 < iVar1) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_b8 = (longlong)(int)uVar14;
            local_b0 = (longlong)iVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pFVar18 = (this->BufferSRVsPerAttributePerSection).AllocatorInstance.Data + lVar15;
          iVar1 = *(int *)(pFVar18 + 8);
          uVar8 = 0;
          if ((int)uVar13 < iVar1) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_b8 = (longlong)(int)uVar13;
            local_b0 = (longlong)iVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar1 = (this->AttributeBufferRuntimeData).ArrayNum;
          uVar4 = *(undefined8 *)(lVar19 + *(longlong *)pFVar18);
          uVar8 = 0;
          if ((int)uVar13 < iVar1) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if (uVar8 == 0) {
            local_b8 = (longlong)(int)uVar13;
            local_b0 = (longlong)iVar1;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          uVar13 = uVar13 + 1;
          lVar19 = lVar19 + 8;
          lVar15 = lVar17 + 0x10;
          lVar17 = lVar17 + 0x80;
          *(undefined8 *)
           (local_68 + *(int *)((this->AttributeBufferRuntimeData).AllocatorInstance.Data + lVar15))
               = uVar4;
          param_1 = local_60;
          this_01 = local_90;
          lVar15 = local_a0;
          lVar20 = local_88;
        } while ((int)uVar13 < (this->AttributeBufferRuntimeData).ArrayNum);
      }
      local_88 = lVar20 + 8;
      local_a0 = lVar15 + 0x10;
      pFVar10 = (FRHIShaderResourceView *)(ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < param_1->NumInvocations);
  }
  return;
}

// GatherPermutations @ 14e1b59f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusAdvancedSkeletonDataProviderProxy::GatherPermutations
          (FOptimusAdvancedSkeletonDataProviderProxy *this,FPermutationData *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FOptimusAdvancedSkeletonDataProviderProxy *pFVar8;
  FSkinWeightProfilesData *this_00;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  GPUSkinBoneInfluenceType GVar12;
  FRHIShaderResourceView *pFVar13;
  FSkinWeightVertexBuffer *this_01;
  FRHIShaderResourceView *pFVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_a0;
  uint local_98;
  undefined8 local_94;
  longlong local_88;
  FOptimusAdvancedSkeletonDataProviderProxy *local_80;
  FAdvancedSkeletonDataInterfacePermutationIds local_78;
  FSkinWeightVertexBuffer *local_68;
  FSkinWeightProfilesData *local_60;
  longlong local_58;
  FSkinWeightProfileStack local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_80 = this;
  local_98 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  uVar19 = (ulonglong)(int)local_98;
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  iVar3 = (pFVar4->LODRenderData).Array.ArrayNum;
  uVar17 = 0;
  if ((int)local_98 < iVar3) {
    uVar17 = ~local_98 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (local_a8 = uVar19, local_a0 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar15 = *(longlong *)((pFVar4->LODRenderData).Array.AllocatorInstance.Data + uVar19 * 8);
  local_58 = lVar15;
  FAdvancedSkeletonDataInterfacePermutationIds::FAdvancedSkeletonDataInterfacePermutationIds
            (&local_78,param_1->PermutationVector);
  uVar17 = 0;
  if (0 < param_1->NumInvocations) {
    local_68 = (FSkinWeightVertexBuffer *)(lVar15 + 0x188);
    local_60 = (FSkinWeightProfilesData *)(lVar15 + 0x328);
    uVar18 = 0;
    local_88 = 0;
    do {
      this_00 = local_60;
      uVar16 = ~uVar17 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar17 < *(int *)(lVar15 + 0x18)) {
        uVar11 = uVar16;
      }
      if (uVar11 == 0) {
        local_a8 = (ulonglong)(int)uVar17;
        local_a0 = (longlong)*(int *)(lVar15 + 0x18);
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar13 = FSkeletalMeshDeformerHelpers::GetBoneBufferForReading
                          (this->SkeletalMeshObject,(int)uVar19,uVar17,false);
      pFVar8 = local_80;
      this_01 = this_00->DefaultOverrideSkinWeightBuffer;
      if (this_00->DefaultOverrideSkinWeightBuffer == (FSkinWeightVertexBuffer *)0x0) {
        this_01 = local_68;
      }
      bVar9 = FSkinWeightProfilesData::ContainsProfile(this_00,&local_80->SkinWeightProfile);
      if (bVar9) {
        local_50.Layers.Elements[0] = pFVar8->SkinWeightProfile;
        local_94 = 0;
        local_50.Layers.Elements[1].ComparisonIndex.Value = 0;
        local_50.Layers.Elements[1].Number = 0;
        this_01 = FSkinWeightProfilesData::GetOverrideBuffer(this_00,&local_50);
      }
      if ((this_01 == (FSkinWeightVertexBuffer *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("WeightBuffer != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceAdvancedSkeleton.cpp"
                             ,999,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this_01->DataVertexBuffer).SRVValue.Reference;
      GVar12 = FSkinWeightVertexBuffer::GetBoneInfluenceType(this_01);
      if (GVar12 == UnlimitedBoneInfluence) {
        pFVar14 = (this_01->LookupVertexBuffer).SRVValue.Reference;
      }
      else {
        pFVar14 = (FRHIShaderResourceView *)0x0;
      }
      if (((pFVar13 == (FRHIShaderResourceView *)0x0) || (pFVar5 == (FRHIShaderResourceView *)0x0))
         || ((GVar12 == UnlimitedBoneInfluence && (pFVar14 == (FRHIShaderResourceView *)0x0)))) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      iVar3 = (param_1->PermutationIds).ArrayNum;
      bVar1 = (this_01->DataVertexBuffer).bUse16BitBoneIndex;
      bVar2 = (this_01->DataVertexBuffer).bUse16BitBoneWeight;
      uVar11 = 0;
      if ((int)uVar17 < iVar3) {
        uVar11 = uVar16;
      }
      if (uVar11 == 0) {
        local_a8 = (ulonglong)(int)uVar17;
        local_a0 = (longlong)iVar3;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar15 = local_88;
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data;
      uVar11 = 0;
      if (bVar9) {
        uVar11 = local_78.EnableDeformerBones;
      }
      *(uint *)(pFVar6 + uVar18 * 4) = uVar11 | *(uint *)(pFVar6 + local_88);
      iVar3 = (param_1->PermutationIds).ArrayNum;
      uVar11 = 0;
      if ((int)uVar17 < iVar3) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (local_a8 = uVar18, local_a0 = (longlong)iVar3,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data + uVar18 * 4;
      uVar11 = 0;
      if (GVar12 == UnlimitedBoneInfluence) {
        uVar11 = local_78.UnlimitedBoneInfluence;
      }
      *(uint *)pFVar6 = *(uint *)pFVar6 | uVar11;
      iVar3 = (param_1->PermutationIds).ArrayNum;
      uVar11 = 0;
      if ((int)uVar17 < iVar3) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (local_a8 = uVar18, local_a0 = (longlong)iVar3,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data + uVar18 * 4;
      uVar11 = 0;
      if (bVar1 != false) {
        uVar11 = local_78.BoneIndexUint16;
      }
      *(uint *)pFVar6 = *(uint *)pFVar6 | uVar11;
      iVar3 = (param_1->PermutationIds).ArrayNum;
      uVar11 = 0;
      if ((int)uVar17 < iVar3) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (local_a8 = uVar18, local_a0 = (longlong)iVar3,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = (ulonglong)local_98;
      pFVar6 = (param_1->PermutationIds).AllocatorInstance.Data + uVar18 * 4;
      uVar11 = 0;
      if (bVar2 != false) {
        uVar11 = local_78.BoneWeightsUint16;
      }
      local_88 = lVar15 + 4;
      *(uint *)pFVar6 = *(uint *)pFVar6 | uVar11;
      uVar17 = uVar17 + 1;
      uVar18 = uVar18 + 1;
      lVar15 = local_58;
      this = local_80;
    } while ((int)uVar17 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14e1f0380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOptimusAdvancedSkeletonDataProviderProxy::IsValid
          (FOptimusAdvancedSkeletonDataProviderProxy *this,FValidationData *param_1)

{
  int iVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FSkinWeightVertexBuffer *pFVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  FSkinWeightProfileStack local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((param_1->ParameterStructSize == (this->ParameterBuffer).ArrayNum) &&
     (this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0)) {
    uVar7 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
    pFVar2 = this->SkeletalMeshObject->SkeletalMeshRenderData;
    iVar1 = (pFVar2->LODRenderData).Array.ArrayNum;
    uVar9 = 0;
    if ((int)uVar7 < iVar1) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (local_38 = (longlong)(int)uVar7, local_30 = (longlong)iVar1,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar3 = *(longlong *)
             ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
    if (*(int *)(lVar3 + 0x18) == param_1->NumInvocations) {
      pFVar8 = *(FSkinWeightVertexBuffer **)(lVar3 + 0x330);
      if (*(FSkinWeightVertexBuffer **)(lVar3 + 0x330) == (FSkinWeightVertexBuffer *)0x0) {
        pFVar8 = (FSkinWeightVertexBuffer *)(lVar3 + 0x188);
      }
      bVar5 = FSkinWeightProfilesData::ContainsProfile
                        ((FSkinWeightProfilesData *)(lVar3 + 0x328),&this->SkinWeightProfile);
      if (bVar5) {
        local_20.Layers.Elements[0] = this->SkinWeightProfile;
        local_28 = 0;
        local_20.Layers.Elements[1].ComparisonIndex.Value = 0;
        local_20.Layers.Elements[1].Number = 0;
        pFVar8 = FSkinWeightProfilesData::GetOverrideBuffer
                           ((FSkinWeightProfilesData *)(lVar3 + 0x328),&local_20);
      }
      return pFVar8 != (FSkinWeightVertexBuffer *)0x0;
    }
  }
  return false;
}

