// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FLODInfo @ 148776e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FLODInfo * __thiscall
FStaticMeshSceneProxy::FLODInfo::FLODInfo
          (FLODInfo *this,FStaticMeshSceneProxyDesc *param_1,
          TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,bool param_5)

{
  TArray<FStaticMeshSceneProxy::FLODInfo::FSectionInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  longlong lVar2;
  longlong lVar3;
  FStaticMeshRenderData *pFVar4;
  ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> FVar5;
  code *pcVar6;
  longlong lVar7;
  ForAnyElementType _Src;
  bool bVar8;
  bool bVar9;
  char cVar10;
  EShaderPlatform EVar11;
  int iVar12;
  FStaticMeshRenderData *pFVar13;
  FLODInfo *pFVar14;
  UClass *pUVar15;
  FStaticMeshComponentLODInfo *pFVar16;
  FMeshMapBuildData *pFVar17;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar18;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar19;
  TObjectPtr<UMaterialInterface> *pTVar20;
  TObjectPtr<UMaterialInterface>_u_0 TVar21;
  TObjectPtr<UMaterialInterface>_u_0 TVar22;
  ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo> FVar23;
  longlong *plVar24;
  FMaterial *this_02;
  longlong lVar25;
  code **ppcVar26;
  FColorVertexBuffer *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *pTVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  UMaterial *pUVar33;
  longlong lVar34;
  uint uVar35;
  UStaticMeshComponent *this_03;
  int *piVar36;
  longlong lVar37;
  undefined1 auStackY_1e8 [32];
  longlong local_190;
  TObjectPtr<UMaterialInterface>_u_0 local_178;
  int iStack_170;
  undefined4 uStack_16c;
  UMaterial *local_168;
  longlong local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  uint local_148;
  uint local_144;
  FStaticMeshRenderData *local_140;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *local_138;
  FScriptContainerElement *local_130;
  int local_128;
  FColorVertexBuffer *local_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  FString local_108;
  FScriptContainerElement *local_f8;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8 [2];
  code *local_b8 [3];
  code **local_a0;
  undefined1 local_98 [40];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar1 = &this->Sections;
  pTVar30 = &this->OverrideColorVFUniformBuffer;
  lVar37 = (longlong)param_3;
  *(undefined4 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 6) = 0;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLODInfo_FStaticMeshSceneProxy__6B_;
  (this->Sections).AllocatorInstance.SecondaryData =
       (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 1;
  this->OverrideColorVertexBuffer = (FColorVertexBuffer *)0x0;
  *pTVar30 = (TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters>)0x0;
  (this->IrrelevantLights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IrrelevantLights).ArrayNum = 0;
  (this->IrrelevantLights).ArrayMax = 0;
  this->bUsesMeshModifyingMaterials = false;
  local_f0 = pTVar30;
  EVar11 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1->_padding_);
  pFVar13 = UStaticMesh::GetRenderData(param_1->StaticMesh);
  uVar35 = (uint)~param_3 >> 0x1f;
  uVar28 = 0;
  if (param_3 < (pFVar13->LODResources).Array.ArrayNum) {
    uVar28 = uVar35;
  }
  local_148 = uVar35;
  local_140 = pFVar13;
  if ((uVar28 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FLODInfo *)(*pcVar6)();
    return pFVar14;
  }
  local_160 = *(longlong *)((pFVar13->LODResources).Array.AllocatorInstance.Data + lVar37 * 8);
  uVar28 = 0;
  if (param_3 < param_2->ArrayNum) {
    uVar28 = uVar35;
  }
  if ((uVar28 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FLODInfo *)(*pcVar6)();
    return pFVar14;
  }
  pFVar31 = (param_2->AllocatorInstance).Data + lVar37 * 0x470;
  if (param_1->LightmapType == ForceVolumetric) {
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  }
  this_03 = (UStaticMeshComponent *)param_1->_padding_;
  local_144 = *(uint *)((longlong)&param_1->_padding_ + 4) >> 0x1b & 0xffffff01;
  local_f8 = pFVar31;
  if (this_03 != (UStaticMeshComponent *)0x0) {
    pUVar15 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar12 = (int)pUVar15->_padding_;
    if ((iVar12 <= *(int *)(this_03->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar15->_padding_)) goto LAB_148777014;
  }
  this_03 = (UStaticMeshComponent *)0x0;
LAB_148777014:
  if ((param_3 < (param_1->LODData).ArrayNum) && (param_4 <= param_3)) {
    pFVar16 = TArrayView<FStaticMeshComponentLODInfo,int>::operator[](&param_1->LODData,param_3);
    if ((param_1->LightmapType != ForceVolumetric) &&
       ((this_03 != (UStaticMeshComponent *)0x0 &&
        (pFVar17 = UStaticMeshComponent::GetMeshMapBuildData(this_03,pFVar16,true),
        pFVar17 != (FMeshMapBuildData *)0x0)))) {
      this->_padding_ = (longlong)(pFVar17->LightMap).Reference;
      this->_padding_ = (longlong)(pFVar17->ShadowMap).Reference;
      this->_padding_ = (longlong)pFVar17->ResourceCluster;
      *(undefined1 *)&this->_padding_ = 1;
      TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                (&this->IrrelevantLights,&pFVar17->IrrelevantLights);
    }
    lVar7 = local_160;
    pFVar27 = pFVar16->OverrideVertexColors;
    if (pFVar27 != (FColorVertexBuffer *)0x0) {
      uVar28 = 0;
      if (0 < *(int *)(local_160 + 0x38)) {
        lVar2 = local_160 + 0x10;
        lVar32 = 0;
        lVar34 = local_160;
        do {
          uVar35 = 0;
          if ((int)uVar28 < *(int *)(lVar7 + 0x38)) {
            uVar35 = ~uVar28 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             lVar34 = local_160, bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FLODInfo *)(*pcVar6)();
            return pFVar14;
          }
          lVar3 = *(longlong *)(lVar7 + 0x30);
          pFVar27 = pFVar16->OverrideVertexColors;
          lVar25 = lVar2;
          if (lVar3 != 0) {
            lVar25 = lVar3;
          }
          if (pFVar27->NumVertices <= *(uint *)(lVar25 + 0x10 + lVar32)) goto LAB_14877744b;
          uVar28 = uVar28 + 1;
          lVar32 = lVar32 + 0x1c;
          pTVar30 = local_f0;
          pFVar31 = local_f8;
        } while ((int)uVar28 < *(int *)(lVar34 + 0x38));
      }
      this->OverrideColorVertexBuffer = pFVar27;
      if ((pFVar27->Stride != 4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("OverrideColorVertexBuffer->GetStride() == sizeof(FColor)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                             ,0xa26,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FLODInfo *)(*pcVar6)();
        return pFVar14;
      }
      uVar29 = (ulonglong)GMaxRHIShaderPlatform;
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar29].bContainsValidPlatformInfo == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid(Platform)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                             ,0x2ce,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FLODInfo *)(*pcVar6)();
        return pFVar14;
      }
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar29].bSupportsManualVertexFetch != 0) ||
         (FReadOnlyCVARCache::bAllowStaticLighting != false)) {
        pFVar27 = this->OverrideColorVertexBuffer;
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)param_1->_padding_,&local_108,(UObject *)0x0);
        if ((*(int *)(local_160 + 0x1cc) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("LODModel.VertexBuffers.PositionVertexBuffer.GetNumVertices() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                               ,0xa30,L"LOD: %i of PathName: %s has an empty position stream."),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FLODInfo *)(*pcVar6)();
          return pFVar14;
        }
        _Src.Data = local_108.Data.AllocatorInstance.Data;
        local_118.Data = (FScriptContainerElement *)0x0;
        local_110 = CONCAT44(local_110._4_4_,local_108.Data.ArrayNum);
        local_138 = pTVar30;
        local_130 = pFVar31 + 0x230;
        local_128 = param_3;
        local_120 = pFVar27;
        if (local_108.Data.ArrayNum == 0) {
          local_110 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_108.Data.ArrayNum,0,&local_118,local_108.Data.ArrayNum,
                     (int *)((longlong)&local_110 + 4));
          memcpy(local_118.Data,_Src.Data,(longlong)local_108.Data.ArrayNum * 2);
        }
        local_c8[0] = (code *)0x0;
        local_a0 = FMemory::Malloc(0x38,8);
        *local_a0 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::`38'::<lambda_1>,1,1>
                             ::_vftable_;
        local_a0[1] = (code *)local_138;
        local_a0[2] = (code *)local_130;
        *(int *)(local_a0 + 3) = local_128;
        local_a0[4] = (code *)local_120;
        local_a0[5] = (code *)0x0;
        local_a0[5] = (code *)local_118.Data;
        local_118.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)(local_a0 + 6) = (undefined4)local_110;
        *(undefined4 *)((longlong)local_a0 + 0x34) = local_110._4_4_;
        if (local_a0 + 1 != (code **)0x0) {
          local_c8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::<lambda_1>,void,FRHICommandListImmediate_&>
                        ::Call;
        }
        local_110 = 0;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FStaticMeshSceneProxy::FLODInfo::FLODInfo_::__l38::TSTR_FLocalVertexFactoryCopyData2610>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_98._0_8_ = local_c8[0];
          local_c8[0] = (code *)0x0;
          local_70 = local_a0;
          local_a0 = (code **)0x0;
          local_98._16_8_ = local_b8[0];
          local_98._24_8_ = local_b8[1];
          local_98._32_8_ = local_b8[2];
          local_68 = 2;
          pFVar18 = (FRenderCommandTag *)
                    TRenderCommandTag<`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::TSTR_FLocalVertexFactoryCopyData2610>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_98,pFVar18);
          uVar29 = (ulonglong)local_68;
          if ((2 < uVar29) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            pFVar14 = (FLODInfo *)(*pcVar6)();
            return pFVar14;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar29] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_98._0_8_ != (code *)0x0) {
              ppcVar26 = (code **)(local_98 + 0x10);
              if (local_70 != (code **)0x0) {
                ppcVar26 = local_70;
              }
              (**(code **)(*ppcVar26 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar29])(local_98);
          }
        }
        if (local_c8[0] != (code *)0x0) {
          ppcVar26 = local_c8 + 2;
          if (local_a0 != (code **)0x0) {
            ppcVar26 = local_a0;
          }
          (**(code **)(*ppcVar26 + 0x10))();
        }
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14877744b:
  if (((((0 < param_3) && (param_5)) && (0 < (param_1->LODData).ArrayNum)) &&
      ((param_1->LightmapType != ForceVolumetric && (param_4 <= param_3)))) &&
     ((pFVar16 = TArrayView<FStaticMeshComponentLODInfo,int>::operator[](&param_1->LODData,0),
      this_03 != (UStaticMeshComponent *)0x0 &&
      (pFVar17 = UStaticMeshComponent::GetMeshMapBuildData(this_03,pFVar16,true),
      pFVar17 != (FMeshMapBuildData *)0x0)))) {
    this->_padding_ = (longlong)(pFVar17->LightMap).Reference;
    this->_padding_ = (longlong)(pFVar17->ShadowMap).Reference;
    this->_padding_ = (longlong)pFVar17->ResourceCluster;
    *(undefined1 *)&this->_padding_ = 1;
    TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
              (&this->IrrelevantLights,&pFVar17->IrrelevantLights);
  }
  pFVar13 = local_140;
  if ((this->_padding_ != 0) || (bVar8 = false, this->_padding_ != 0)) {
    bVar8 = true;
  }
  uVar28 = 0;
  if (param_3 < (local_140->LODResources).Array.ArrayNum) {
    uVar28 = local_148;
  }
  if ((uVar28 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FLODInfo *)(*pcVar6)();
    return pFVar14;
  }
  uVar28 = *(uint *)(*(longlong *)
                      ((pFVar13->LODResources).Array.AllocatorInstance.Data + lVar37 * 8) + 0x38);
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
  }
  piVar36 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar36 != uVar28) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>_>
              (0x18,8,uVar28,&pTVar1->AllocatorInstance,0,piVar36);
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_158 !=
      &param_1->MaterialSlotsOverlayMaterial) {
    uVar28 = (param_1->MaterialSlotsOverlayMaterial).ArrayNum;
    pFVar31 = (param_1->MaterialSlotsOverlayMaterial).AllocatorInstance.Data;
    local_150 = (ulonglong)uVar28;
    if (uVar28 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar28,0,&local_158,uVar28,(int *)((longlong)&local_150 + 4));
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                (local_158.Data,(TObjectPtr<UMaterialInterface> *)pFVar31,uVar28);
    }
  }
  uVar28 = 0;
  if (0 < *(int *)(local_160 + 0x38)) {
    local_140 = (FStaticMeshRenderData *)(local_160 + 0x10);
    local_190 = 0;
    do {
      pFVar13 = local_140;
      uVar35 = 0;
      if ((int)uVar28 < (int)local_140->ScreenSize[2].Default) {
        uVar35 = ~uVar28 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FLODInfo *)(*pcVar6)();
        return pFVar14;
      }
      TVar21.DebugPtr = (UMaterialInterface *)0x0;
      pFVar4 = *(FStaticMeshRenderData **)pFVar13->ScreenSize;
      local_178.DebugPtr = (UMaterialInterface *)0x0;
      iStack_170 = 0;
      if (pFVar4 != (FStaticMeshRenderData *)0x0) {
        pFVar13 = pFVar4;
      }
      local_168 = (UMaterial *)0x0;
      piVar36 = (int *)((longlong)
                        &(((FStaticMeshRenderData *)(pFVar13->ScreenSize + -8))->LODResources).Array
                         .AllocatorInstance.Data + local_190);
      iVar12 = *piVar36;
      if (((iVar12 < 0) || ((param_1->OverrideMaterials).ArrayNum <= iVar12)) ||
         (pTVar19 = &TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                               (&param_1->OverrideMaterials,iVar12)->field0_0x0,
         pTVar19->DebugPtr == (UMaterialInterface *)0x0)) {
        if (param_1->StaticMesh != (UStaticMesh *)0x0) {
          TVar21.DebugPtr = UStaticMesh::GetMaterial(param_1->StaticMesh,iVar12);
          goto LAB_1487776c2;
        }
      }
      else {
        pTVar20 = TArrayView<TObjectPtr<UMaterialInterface>,int>::operator[]
                            (&param_1->OverrideMaterials,iVar12);
        TVar21.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar20->field0_0x0).DebugPtr;
LAB_1487776c2:
        if ((UMaterial *)TVar21.DebugPtr != (UMaterial *)0x0) {
          UObject::ConditionalPostLoad((UObject *)TVar21.DebugPtr);
          bVar9 = Nanite::FNaniteResourcesHelper::ShouldCreateNaniteProxy<FStaticMeshSceneProxyDesc>
                            (param_1,(FMaterialAudit *)0x0);
          if ((bVar9) && (Nanite::GEnableNaniteMaterialOverrides != 0)) {
            local_e8 = 0;
            uStack_e0 = 0;
            TVar22.DebugPtr =
                 (UMaterialInterface *)
                 (**(code **)((TVar21.DebugPtr)->_padding_ + 0x3a8))(TVar21.DebugPtr,&local_e8);
            if ((UMaterial *)TVar22.DebugPtr != (UMaterial *)0x0) {
              TVar21.DebugPtr = TVar22.DebugPtr;
            }
          }
        }
      }
      iVar12 = *piVar36;
      local_178 = TVar21;
      if ((iVar12 < 0) || ((int)local_150 <= iVar12)) {
        pUVar33 = (UMaterial *)0x0;
      }
      else {
        pUVar33 = *(UMaterial **)(local_158.Data + (longlong)iVar12 * 8);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar33 != (UMaterial *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar33);
        }
      }
      iStack_170 = *piVar36;
      local_168 = pUVar33;
      if ((char)local_144 == '\0') {
        if (GForceDefaultMaterial == false) goto LAB_148777793;
        if ((UMaterial *)local_178.DebugPtr != (UMaterial *)0x0) {
          bVar9 = IsTranslucentBlendMode(local_178.DebugPtr);
          if (!bVar9) goto LAB_14877776d;
          goto LAB_148777793;
        }
LAB_1487777b4:
        local_178.DebugPtr = (UMaterialInterface *)UMaterial::GetDefaultMaterial(MD_Surface);
        if (local_168 != (UMaterial *)0x0) {
          local_168 = UMaterial::GetDefaultMaterial(MD_Surface);
        }
      }
      else {
LAB_14877776d:
        local_178.DebugPtr = (UMaterialInterface *)UMaterial::GetDefaultMaterial(MD_Surface);
        if (local_168 != (UMaterial *)0x0) {
          local_168 = UMaterial::GetDefaultMaterial(MD_Surface);
        }
LAB_148777793:
        if (((UMaterial *)local_178.DebugPtr == (UMaterial *)0x0) ||
           ((bVar8 && (cVar10 = (**(code **)((local_178.DebugPtr)->_padding_ + 0x378))
                                          (local_178.DebugPtr,4), cVar10 == '\0'))))
        goto LAB_1487777b4;
      }
      FVar5 = (this->Sections).AllocatorInstance.SecondaryData;
      piVar36 = &(this->Sections).ArrayMax;
      FVar23 = (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)pTVar1;
      if (FVar5 != (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0) {
        FVar23 = FVar5;
      }
      if ((ulonglong)FVar23 <= &local_178) {
        FVar23 = (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)pTVar1;
        if (FVar5 != (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0) {
          FVar23 = FVar5;
        }
        if ((&local_178 <
             (TObjectPtr<UMaterialInterface>_u_0 *)((longlong)FVar23 + (longlong)*piVar36 * 0x18))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FLODInfo *)(*pcVar6)();
          return pFVar14;
        }
      }
      iVar12 = (this->Sections).ArrayNum;
      if (iVar12 == *piVar36) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>_>
                           (0x818,&pTVar1->AllocatorInstance,piVar36);
      }
      TVar21._4_4_ = uStack_16c;
      TVar21._0_4_ = iStack_170;
      (this->Sections).ArrayNum = iVar12 + 1;
      FVar5 = (this->Sections).AllocatorInstance.SecondaryData;
      FVar23 = (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)pTVar1;
      if (FVar5 != (ForElementType<FStaticMeshSceneProxy::FLODInfo::FSectionInfo>)0x0) {
        FVar23 = FVar5;
      }
      pTVar19 = (TObjectPtr<UMaterialInterface>_u_0 *)((longlong)FVar23 + (longlong)iVar12 * 0x18);
      pTVar19->DebugPtr = (UMaterialInterface *)local_178;
      pTVar19[1] = TVar21;
      *(UMaterial **)((uchar *)((longlong)FVar23 + 0x10) + (longlong)iVar12 * 0x18) = local_168;
      local_d8 = 0;
      uStack_d0 = 0;
      plVar24 = (longlong *)
                (**(code **)((local_178.DebugPtr)->_padding_ + 0x2e0))(local_178.DebugPtr,&local_d8)
      ;
      this_02 = (FMaterial *)(**(code **)(*plVar24 + 0x380))(plVar24,EVar11,4);
      if (this_02 != (FMaterial *)0x0) {
        bVar9 = IsInAnyRenderingThread();
        if (bVar9) {
          bVar9 = FMaterial::MaterialModifiesMeshPosition_RenderThread(this_02);
          if (bVar9) {
LAB_148777964:
            this->bUsesMeshModifyingMaterials = true;
          }
        }
        else {
          bVar9 = FMaterial::MaterialModifiesMeshPosition_GameThread(this_02);
          if (bVar9) goto LAB_148777964;
        }
      }
      uVar28 = uVar28 + 1;
      local_190 = local_190 + 0x1c;
    } while ((int)uVar28 < *(int *)(local_160 + 0x38));
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return this;
}

// operator() @ 148782a30

void __thiscall
`FStaticMeshSceneProxy::FLODInfo::FLODInfo'::__l38::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> TVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> TVar4;
  FRHIResource *local_res8;
  
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1e0) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalVF->GetTangentsSRV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                         ,0xa35,L"LOD: %i of PathName: %s has a null tangents srv."), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)(*(longlong *)((longlong)this + 8) + 0x1e8) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalVF->GetTextureCoordinatesSRV()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshSceneProxy.cpp"
                         ,0xa36,L"LOD: %i of PathName: %s has a null texcoord srv."), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar4 = CreateLocalVFUniformBuffer
                    ((FLocalVertexFactory *)&local_res8,(uint)*(undefined8 *)((longlong)this + 8),
                     (FColorVertexBuffer *)(ulonglong)*(uint *)((longlong)this + 0x10),
                     (int)*(undefined8 *)((longlong)this + 0x18),0);
  TVar1 = *(TUniformBufferRef<FLocalVertexFactoryUniformShaderParameters> *)this;
  if (TVar1 != TVar4) {
    this_00 = *(FRHIResource **)TVar1;
    *(undefined8 *)TVar1 = *(undefined8 *)TVar4;
    *(undefined8 *)TVar4 = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// GetInteraction @ 1487a0690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightInteraction __thiscall
FStaticMeshSceneProxy::FLODInfo::GetInteraction(FLODInfo *this,FLightSceneProxy *param_1)

{
  ELightInteractionType EVar1;
  FLightSceneProxy *in_R8;
  
  EVar1 = FLightCacheInterface::GetStaticInteraction
                    ((FLightCacheInterface *)this,in_R8,&this->IrrelevantLights);
  if (EVar1 != LIT_MAX) {
    *(ELightInteractionType *)&param_1->_padding_ = EVar1;
    return (FLightInteraction)(ELightInteractionType)param_1;
  }
  *(undefined4 *)&param_1->_padding_ = 2;
  return (FLightInteraction)(ELightInteractionType)param_1;
}

