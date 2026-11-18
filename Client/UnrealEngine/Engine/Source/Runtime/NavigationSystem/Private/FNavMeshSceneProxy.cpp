// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 7

// FNavMeshSceneProxy @ 146dd4e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNavMeshSceneProxy * __thiscall
FNavMeshSceneProxy::FNavMeshSceneProxy
          (FNavMeshSceneProxy *this,UPrimitiveComponent *param_1,FNavMeshSceneProxyData *param_2,
          bool param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  FMeshBatchElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int *piVar12;
  longlong lVar13;
  FMaterialRenderProxy *pFVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  FNameEntryId FVar18;
  int iVar19;
  FNavMeshSceneProxy *pFVar20;
  UClass *pUVar21;
  FColoredMaterialRenderProxy *this_00;
  undefined4 extraout_var;
  FColoredMaterialRenderProxy *pFVar22;
  undefined4 extraout_var_00;
  uint uVar23;
  int *piVar24;
  FScriptContainerElement *pFVar25;
  int *piVar26;
  uint uVar27;
  int *piVar28;
  TArray<TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_>,TSizedDefaultAllocator<32>_>
  *pTVar29;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *pTVar30;
  uint local_res10;
  undefined1 local_res20 [8];
  int local_1d8 [2];
  int *local_1d0;
  TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> local_1c8;
  FColoredMaterialRenderProxy *local_1b8;
  FColoredMaterialRenderProxy *local_1b0;
  FWeakObjectPtr local_1a8;
  int *local_1a0;
  uint local_198;
  undefined4 uStack_194;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  FMaterialRenderProxy *local_178;
  uint local_170;
  undefined4 uStack_16c;
  FLinearColor_u_0 local_168;
  FLinearColor_u_0 local_158;
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  UPrimitiveComponent *local_140;
  int *local_138;
  TArray<TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_>,TSizedDefaultAllocator<32>_>
  *local_130;
  longlong local_128;
  FMeshBatchElement local_118;
  
  FDebugRenderSceneProxy::FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this,param_1);
  this->_padding_ = (longlong)&___7FNavMeshSceneProxy__6B_;
  FNavMeshSceneProxyData::FNavMeshSceneProxyData(&this->ProxyData);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FNavMeshSceneProxy");
  *(undefined4 *)&this->_padding_ = 2;
  (this->MeshColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130 = &this->MeshColors;
  (this->MeshColors).ArrayNum = 0;
  piVar28 = &(this->MeshColors).ArrayMax;
  *piVar28 = 0;
  piVar24 = &(this->MeshBatchElements).ArrayMax;
  (this->MeshBatchElements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar24 = 0;
  *(undefined8 *)&this->DebugTextDrawingDelegate = 0;
  *(undefined8 *)&(this->DebugTextDrawingDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->DebugTextDrawingDelegate).field_0x10 = 0;
  (this->DebugTextDrawingDelegateHandle).ID = 0;
  (this->RenderingComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_1d0 = &(this->MeshBatchElements).ArrayNum;
  *local_1d0 = 0;
  this->bForceRendering = 0;
  *(uint *)&this->field_0x8d8 = *(uint *)&this->field_0x8d8 | (uint)param_3;
  local_138 = piVar28;
  ::FString::operator=((FString *)&this->_padding_,L"Navigation");
  if (param_2 != (FNavMeshSceneProxyData *)0x0) {
    FNavMeshSceneProxyData::operator=(&this->ProxyData,param_2);
    plVar1 = &this->_padding_;
    if (((TArray<FDebugRenderSceneProxy::FDebugBox,TSizedDefaultAllocator<32>_> *)plVar1 ==
         &param_2->AuxBoxes) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar15)) {
      pcVar6 = (code *)swi(3);
      pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
      return pFVar20;
    }
    iVar17 = (param_2->AuxBoxes).ArrayNum;
    if (iVar17 != 0) {
      iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xb0,0x10,iVar17,(ForAnyElementType *)plVar1,(int *)&this->_padding_,
                          (int *)((longlong)&this->_padding_ + 4));
      memcpy((void *)(*plVar1 + (longlong)iVar16 * 0xb0),(param_2->AuxBoxes).AllocatorInstance.Data,
             (longlong)iVar17 * 0xb0);
    }
  }
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar21 = UNavMeshRenderingComponent::StaticClass();
    iVar17 = (int)pUVar21->_padding_;
    if ((iVar17 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar21->_padding_)) goto LAB_146dd508e;
  }
  param_1 = (UPrimitiveComponent *)0x0;
LAB_146dd508e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_1a8.ObjectIndex = 0;
  local_1a8.ObjectSerialNumber = 0;
  local_140 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_140);
  this->bSkipDistanceCheck = 0;
  this->bUseThickLines = 0;
  uVar23 = (this->ProxyData).MeshBuilders.ArrayNum;
  (this->RenderingComponent).WeakPtr = local_1a8;
  if (uVar23 != 0) {
    uVar27 = uVar23 + 1;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    pTVar29 = &this->MeshColors;
    if (*piVar28 < (int)uVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar27,&pTVar29->AllocatorInstance,(this->MeshColors).ArrayNum,piVar28);
    }
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    if (*piVar24 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x98,8,uVar23,&(this->MeshBatchElements).AllocatorInstance,*local_1d0,piVar24);
    }
    local_178 = (FMaterialRenderProxy *)
                (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ + 0x310))
                          ();
    fVar11 = __real_3f2aaaab;
    fVar10 = __real_3b808081;
    fVar9 = __real_3f000000;
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.ArrayNum = 0;
    local_1c8.ArrayMax = 0;
    local_res10 = 0;
    local_188 = 0;
    local_128 = (longlong)(int)uVar23;
    if (0 < (int)uVar23) {
      local_1a0 = local_1d0;
      local_180 = 0;
      do {
        lVar13 = local_180;
        piVar24 = local_1a0;
        piVar26 = &(this->MeshColors).ArrayNum;
        uVar23 = 0;
        if ((int)local_res10 < (this->ProxyData).MeshBuilders.ArrayNum) {
          uVar23 = ~local_res10 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
          return pFVar20;
        }
        piVar12 = local_1d0;
        pTVar30 = (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)
                  ((this->ProxyData).MeshBuilders.AllocatorInstance.Data + lVar13);
        local_118.PrimitiveIdMode = PrimID_FromPrimitiveSceneInfo;
        local_118.VisualizeElementIndex = -1;
        local_118.bFetchInstanceCountFromScene = 0;
        local_118.bPreserveInstanceOrder = 0;
        local_118.bForceInstanceCulling = 0;
        local_118.bIsInstanceRuns = 0;
        local_118.bIsSplineProxy = 0;
        local_118.bUserDataIsColorVertexBuffer = 0;
        local_118.InstancedLODRange = 0;
        local_118.InstancedLODIndex = 0;
        pFVar4 = (FMeshBatchElement *)(this->MeshBatchElements).AllocatorInstance.Data;
        local_118.SkinCacheDebugColor.field0_0x0._s_0 = FColor::White.field0_0x0;
        local_118.FirstIndex = (this->IndexBuffer).Indices.ArrayNum;
        local_118.LooseParametersUniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
        local_118.VertexFactoryUserData = (void *)0x0;
        local_118.IndirectArgsBuffer = (FRHIBuffer *)0x0;
        local_118.PrimitiveUniformBuffer = (FRHIUniformBuffer *)0x0;
        local_118.PrimitiveUniformBufferResource =
             (TUniformBuffer<FPrimitiveUniformShaderParameters> *)0x0;
        local_118.DynamicIndexBuffer.IndexBuffer = (FIndexBuffer *)0x0;
        local_118.field5_0x30.InstanceRuns = (uint *)0x0;
        local_118.UserData = (void *)0x0;
        local_118.IndirectArgsOffset = 0;
        local_118.NumInstances = 1;
        local_118.BaseVertexIndex = 0;
        local_118.UserIndex = -1;
        local_118.MinScreenSize = 0.0;
        local_118.MaxScreenSize = 1.0;
        local_118.DynamicPrimitiveData = (FMeshBatchDynamicPrimitiveData *)0x0;
        local_118.DynamicPrimitiveIndex = 0xffffffff;
        local_118.DynamicPrimitiveInstanceSceneDataOffset = 0xffffffff;
        local_118.MinVertexIndex = local_1c8.ArrayNum;
        local_118.NumPrimitives = (int)ROUND((float)pTVar30[1].ArrayNum * fVar11 - fVar9) >> 1;
        local_118.IndexBuffer = (FIndexBuffer *)&this->IndexBuffer;
        local_118.MaxVertexIndex = (local_1c8.ArrayNum - 1U) + pTVar30->ArrayNum;
        if (((pFVar4 <= &local_118) && (&local_118 < pFVar4 + (this->MeshBatchElements).ArrayMax))
           && (local_1a0 = local_1d0,
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), piVar24 = piVar12, bVar15)) {
          pcVar6 = (code *)swi(3);
          pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
          return pFVar20;
        }
        iVar17 = *piVar24;
        if (iVar17 == (this->MeshBatchElements).ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x898,&(this->MeshBatchElements).AllocatorInstance,
                              &(this->MeshBatchElements).ArrayMax);
        }
        *piVar24 = iVar17 + 1;
        FMeshBatchElement::FMeshBatchElement
                  ((FMeshBatchElement *)
                   ((this->MeshBatchElements).AllocatorInstance.Data + (longlong)iVar17 * 0x98),
                   &local_118);
        local_168._s_0.R =
             FLinearColor::sRGBToLinearTable
             [*(byte *)((longlong)&pTVar30[2].AllocatorInstance.Data + 2)];
        local_168._s_0.G =
             FLinearColor::sRGBToLinearTable
             [*(byte *)((longlong)&pTVar30[2].AllocatorInstance.Data + 1)];
        local_168._s_0.B =
             FLinearColor::sRGBToLinearTable[*(byte *)&pTVar30[2].AllocatorInstance.Data];
        local_168._s_0.A =
             (float)*(byte *)((longlong)&pTVar30[2].AllocatorInstance.Data + 3) * fVar10;
        this_00 = ::operator_new(0xe0);
        pFVar22 = (FColoredMaterialRenderProxy *)0x0;
        if (this_00 != (FColoredMaterialRenderProxy *)0x0) {
          FVar18 = FNameEntryId::FromValidEName((EName)local_148);
          uStack_194 = 0;
          local_198 = *(uint *)CONCAT44(extraout_var,FVar18.Value);
          FVar7.Number = 0;
          FVar7.ComparisonIndex.Value = local_198;
          pFVar22 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                              (this_00,local_178,(FLinearColor *)&local_168._s_0,FVar7);
        }
        pFVar25 = (pTVar29->AllocatorInstance).Data;
        local_1b8 = pFVar22;
        if (((pFVar25 <= (FScriptContainerElement *)&local_1b8) &&
            ((FScriptContainerElement *)&local_1b8 < pFVar25 + (longlong)*piVar28 * 8)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
          return pFVar20;
        }
        iVar17 = *piVar26;
        if (iVar17 == *piVar28) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar29->AllocatorInstance,piVar28);
        }
        *piVar26 = iVar17 + 1;
        *(FColoredMaterialRenderProxy **)((pTVar29->AllocatorInstance).Data + (longlong)iVar17 * 8)
             = local_1b8;
        iVar17 = local_1c8.ArrayNum;
        local_1b8 = (FColoredMaterialRenderProxy *)0x0;
        if ((&local_1c8 == pTVar30) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
          return pFVar20;
        }
        iVar16 = pTVar30->ArrayNum;
        if (iVar16 != 0) {
          iVar19 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x58,4,iVar16,&local_1c8.AllocatorInstance,&local_1c8.ArrayNum,
                              &local_1c8.ArrayMax);
          memcpy(local_1c8.AllocatorInstance.Data + (longlong)iVar19 * 0x58,
                 (pTVar30->AllocatorInstance).Data,(longlong)iVar16 * 0x58);
        }
        pTVar3 = &(this->IndexBuffer).Indices;
        if (iVar17 == 0) {
          if ((pTVar3 == (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(pTVar30 + 1)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar15)) {
            pcVar6 = (code *)swi(3);
            pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
            return pFVar20;
          }
          iVar17 = pTVar30[1].ArrayNum;
          if (iVar17 != 0) {
            iVar16 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar17,&pTVar3->AllocatorInstance,
                                &(this->IndexBuffer).Indices.ArrayNum,
                                &(this->IndexBuffer).Indices.ArrayMax);
            memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 4,
                   pTVar30[1].AllocatorInstance.Data,(longlong)iVar17 << 2);
          }
        }
        else {
          uVar23 = (this->IndexBuffer).Indices.ArrayNum + pTVar30[1].ArrayNum;
          if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
          }
          piVar24 = &(this->IndexBuffer).Indices.ArrayMax;
          if ((this->IndexBuffer).Indices.ArrayMax < (int)uVar23) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar23,&pTVar3->AllocatorInstance,(this->IndexBuffer).Indices.ArrayNum,
                       piVar24);
          }
          pFVar25 = pTVar30[1].AllocatorInstance.Data;
          iVar16 = pTVar30[1].ArrayNum;
          local_190 = pFVar25 + (longlong)iVar16 * 4;
          while( true ) {
            if (pTVar30[1].ArrayNum != iVar16) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res20);
            }
            piVar26 = &(this->IndexBuffer).Indices.ArrayNum;
            piVar28 = local_138;
            pTVar29 = local_130;
            if (pFVar25 == local_190) break;
            local_1d8[0] = iVar17 + *(int *)pFVar25;
            pFVar5 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar5 <= (FScriptContainerElement *)local_1d8) &&
                ((FScriptContainerElement *)local_1d8 < pFVar5 + (longlong)*piVar24 * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar6 = (code *)swi(3);
              pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
              return pFVar20;
            }
            iVar19 = *piVar26;
            if (iVar19 == *piVar24) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar3->AllocatorInstance,piVar24);
            }
            pFVar25 = pFVar25 + 4;
            *piVar26 = iVar19 + 1;
            *(int *)((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 4) = local_1d8[0];
          }
        }
        TRefCountPtr<FRHIUniformBuffer>::~TRefCountPtr<FRHIUniformBuffer>
                  (&local_118.LooseParametersUniformBuffer);
        local_res10 = local_res10 + 1;
        local_188 = local_188 + 1;
        local_180 = local_180 + 0x28;
      } while (local_188 < local_128);
    }
    pFVar14 = local_178;
    pFVar22 = ::operator_new(0xe0);
    local_1b0 = (FColoredMaterialRenderProxy *)0x0;
    if (pFVar22 != (FColoredMaterialRenderProxy *)0x0) {
      FVar18 = FNameEntryId::FromValidEName((EName)local_144);
      uStack_16c = 0;
      local_170 = *(uint *)CONCAT44(extraout_var_00,FVar18.Value);
      FVar8.Number = 0;
      FVar8.ComparisonIndex.Value = local_170;
      local_158._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
      local_158._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
      local_158._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
      local_158._s_0.A = 0.15686275;
      local_1b0 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                            (pFVar22,pFVar14,(FLinearColor *)&local_158._s_0,FVar8);
    }
    pFVar25 = (pTVar29->AllocatorInstance).Data;
    piVar24 = &(this->MeshColors).ArrayNum;
    if (((pFVar25 <= (FScriptContainerElement *)&local_1b0) &&
        ((FScriptContainerElement *)&local_1b0 < pFVar25 + (longlong)*piVar28 * 8)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar6 = (code *)swi(3);
      pFVar20 = (FNavMeshSceneProxy *)(*pcVar6)();
      return pFVar20;
    }
    iVar17 = *piVar24;
    if (iVar17 == *piVar28) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar29->AllocatorInstance,piVar28);
    }
    pFVar25 = (pTVar29->AllocatorInstance).Data;
    *piVar24 = iVar17 + 1;
    *(FColoredMaterialRenderProxy **)(pFVar25 + (longlong)iVar17 * 8) = local_1b0;
    if (local_1c8.ArrayNum != 0) {
      FStaticMeshVertexBuffers::InitFromDynamicVertex
                (&this->VertexBuffers,(FRHICommandListBase *)0x0,(FRenderCommandPipe *)0x0,
                 &this->VertexFactory,&local_1c8,1,0);
    }
    if ((this->IndexBuffer).Indices.ArrayNum != 0) {
      BeginInitResource((FRenderResource *)&this->IndexBuffer,(FRenderCommandPipe *)0x0);
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~FNavMeshSceneProxy @ 146dd95f0

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall FNavMeshSceneProxy::~FNavMeshSceneProxy(FNavMeshSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FNavMeshSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->DebugTextDrawingDelegate);
  DestructItems<FMeshBatchElement,int>
            ((FMeshBatchElement *)(this->MeshBatchElements).AllocatorInstance.Data,
             (this->MeshBatchElements).ArrayNum);
  pFVar1 = (this->MeshBatchElements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_>,int>
            ((TUniquePtr<FColoredMaterialRenderProxy,TDefaultDelete<FColoredMaterialRenderProxy>_> *
             )(this->MeshColors).AllocatorInstance.Data,(this->MeshColors).ArrayNum);
  pFVar1 = (this->MeshColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FNavMeshSceneProxyData::~FNavMeshSceneProxyData(&this->ProxyData);
  FDebugRenderSceneProxy::~FDebugRenderSceneProxy((FDebugRenderSceneProxy *)this);
  return;
}

// GetAllocatedSizeInternal @ 146e00440

uint __thiscall FNavMeshSceneProxy::GetAllocatedSizeInternal(FNavMeshSceneProxy *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_res10;
  
  uVar16 = (longlong)(this->ProxyData).AuxBoxes.ArrayMax * 0xb0 +
           ((longlong)(this->ProxyData).AuxLines.ArrayMax +
            (longlong)(this->ProxyData).ClusterLinkLines.ArrayMax +
            (longlong)(this->ProxyData).NavLinkLines.ArrayMax +
            (longlong)(this->ProxyData).NavMeshEdgeLines.ArrayMax +
            (longlong)(this->ProxyData).TileEdgeLines.ArrayMax +
           (longlong)(this->ProxyData).ThickLineItems.ArrayMax) * 0x38 +
           ((longlong)(this->ProxyData).AuxPoints.ArrayMax +
           (longlong)(this->ProxyData).OctreeBounds.ArrayMax * 2) * 0x20 +
           ((longlong)(this->ProxyData).DebugLabels.ArrayMax +
           (longlong)(this->ProxyData).MeshBuilders.ArrayMax) * 0x28;
  if (uVar16 != (uVar16 & 0xffffffff)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return uVar14;
    }
  }
  iVar1 = (this->IndexBuffer).Indices.ArrayMax;
  uVar14 = (this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  uVar2 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordStride;
  uVar3 = (this->VertexBuffers).PositionVertexBuffer.NumVertices;
  uVar4 = (this->VertexBuffers).PositionVertexBuffer.Stride;
  uVar5 = (this->VertexBuffers).ColorVertexBuffer.NumVertices;
  uVar6 = (this->VertexBuffers).ColorVertexBuffer.Stride;
  uVar7 = (this->VertexBuffers).StaticMeshVertexBuffer.TangentsStride;
  uVar8 = (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  iVar9 = (this->MeshColors).ArrayNum;
  iVar10 = (this->MeshColors).ArrayMax;
  iVar11 = (this->MeshBatchElements).ArrayMax;
  uVar15 = FDebugRenderSceneProxy::GetAllocatedSize((FDebugRenderSceneProxy *)this);
  local_res10 = (int)uVar16;
  uVar16 = (longlong)iVar9 * 0xe0 + (longlong)iVar1 * 4 +
           (ulonglong)(uVar15 + local_res10) + (ulonglong)(uVar6 * uVar5) +
           (ulonglong)(uVar4 * uVar3) + (ulonglong)((uVar14 * uVar2 + uVar7) * uVar8) +
           (longlong)iVar11 * 0x98 + (longlong)iVar10 * 8;
  if (uVar16 != (uVar16 & 0xffffffff)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return uVar14;
    }
  }
  return (uint)uVar16;
}

// GetDynamicMeshElements @ 146e02950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNavMeshSceneProxy::GetDynamicMeshElements
          (FNavMeshSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  FSceneView *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNavMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements>
  FVar14;
  FPrimitiveDrawInterface *pFVar15;
  FMeshElementCollector *pFVar16;
  int iVar17;
  FName FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  float *pfVar21;
  ulonglong uVar22;
  FMeshElementCollector *pFVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong uVar28;
  uint7 uVar29;
  undefined4 uVar30;
  uint local_1c0;
  uint local_1bc;
  longlong local_1b8;
  FColor_u_0 local_1b0 [2];
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  FName local_98;
  FName local_90 [11];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNavMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements>
         )0x0) {
      pFVar13 = ::FName::FName(&local_98,"STAT_RecastRenderingSceneProxy_GetDynamicMeshElements");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements,*pFVar13,
                 L"STAT_RecastRenderingSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements;
  if (StatPtr_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNavMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements>
       )0x0) {
    pFVar13 = ::FName::FName(local_90,"STAT_RecastRenderingSceneProxy_GetDynamicMeshElements");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FNavMeshSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_>_const_&,FSceneViewFamily_const_&,unsigned_int,FMeshElementCollector_&)const_::_2_::FStat_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RecastRenderingSceneProxy_GetDynamicMeshElements,*pFVar13,
                          L"STAT_RecastRenderingSceneProxy_GetDynamicMeshElements","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar4 = false;
  bVar5 = false;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b0[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_1a8.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\NavMeshRenderingComponent.cpp"
                   ,0x719);
        bVar4 = true;
        bVar5 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a0 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar10 = true;
      goto LAB_146e02aed;
    }
  }
  bVar5 = bVar11;
  bVar4 = bVar10;
  bVar10 = false;
  local_1a0 = local_198;
  FVar18 = local_198;
LAB_146e02aed:
  pFVar16 = param_4;
  FDebugRenderSceneProxy::GetDynamicMeshElements
            ((FDebugRenderSceneProxy *)this,param_1,param_2,param_3,param_4);
  uVar9 = __real_3f8ccccd;
  uVar8 = __real_40000000;
  fVar7 = __real_3b808081;
  uVar6 = __real_40800000;
  iVar17 = param_1->ArrayNum;
  local_1c0 = 0;
  if (0 < iVar17) {
    local_1bc = 1;
    local_1b8 = 0;
    do {
      if ((param_3 & local_1bc) != 0) {
        uVar19 = 0;
        if ((int)local_1c0 < iVar17) {
          uVar19 = ~local_1c0 >> 0x1f;
        }
        if (uVar19 == 0) {
          pFVar16 = (FMeshElementCollector *)(longlong)(int)local_1c0;
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar1 = *(FSceneView **)((param_1->AllocatorInstance).Data + local_1b8);
        if (((pFVar1->Family->EngineShowFlags).Navigation != 0) || (this->bForceRendering != 0)) {
          pFVar15 = FMeshElementCollector::GetPDI(param_4,local_1c0);
          iVar17 = (this->ProxyData).OctreeBounds.ArrayNum;
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < iVar17) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if (uVar12 == 0) {
                pFVar16 = (FMeshElementCollector *)(longlong)(int)uVar19;
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar11) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              pFVar20 = (this->ProxyData).OctreeBounds.AllocatorInstance.Data;
              local_c8._s_0.X = (double)*(undefined8 *)(pFVar20 + lVar24 + 0x20);
              local_c8._s_0.Y = (double)*(undefined8 *)(pFVar20 + lVar24 + 0x20 + 8);
              local_b0._s_0.X = (double)*(undefined8 *)(pFVar20 + lVar24);
              local_b0._s_0.Y = (double)*(undefined8 *)(pFVar20 + lVar24 + 8);
              local_c8._s_0.Z = (double)*(undefined8 *)(pFVar20 + lVar24 + 0x30);
              local_b0._s_0.Z = (double)*(undefined8 *)(pFVar20 + lVar24 + 0x10);
              FNavMeshRenderingHelpers::DrawDebugBox
                        (pFVar15,(TVector<double> *)&local_b0._s_0,(TVector<double> *)&local_c8._s_0
                         ,&FColor::White);
              iVar17 = (this->ProxyData).OctreeBounds.ArrayNum;
              uVar19 = uVar19 + 1;
              lVar24 = lVar24 + 0x40;
            } while ((int)uVar19 < iVar17);
          }
          iVar17 = (this->ProxyData).NavMeshEdgeLines.ArrayNum;
          uVar28 = (ulonglong)pFVar16 & 0xffffffffffffff00;
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,0,iVar17,0,uVar28);
          uVar28 = CONCAT71((int7)(uVar28 >> 8),1);
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,1,iVar17,0,uVar28);
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            uVar22 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < (this->ProxyData).NavMeshEdgeLines.ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (uVar28 = uVar22,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar20 = (this->ProxyData).NavMeshEdgeLines.AllocatorInstance.Data + lVar24;
              bVar11 = FNavMeshRenderingHelpers::LineInView
                                 ((TVector<double> *)pFVar20,(TVector<double> *)(pFVar20 + 0x18),
                                  pFVar1);
              if (bVar11) {
                dVar27 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
                dVar26 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
                dVar25 = dVar27 - *(double *)&pFVar20->field_0x0;
                dVar3 = dVar26 - *(double *)(pFVar20 + 8);
                uVar29 = (uint7)(uVar28 >> 8);
                if ((ARecastNavMesh::DrawDistanceSq <= dVar3 * dVar3 + dVar25 * dVar25) ||
                   (dVar26 = dVar26 - *(double *)(pFVar20 + 0x20),
                   dVar27 = dVar27 - *(double *)&pFVar20[0x18].field_0x0,
                   ARecastNavMesh::DrawDistanceSq <= dVar26 * dVar26 + dVar27 * dVar27)) {
                  if (this->bUseThickLines == 0) goto LAB_146e02ed4;
                  pfVar21 = &local_178;
                  uVar30 = 0;
                  local_178 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  uVar28 = CONCAT71(uVar29,1);
                  local_174 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_170 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_16c = (float)(byte)pFVar20[0x33] * fVar7;
                }
                else {
                  pfVar21 = &local_188;
                  local_188 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  uVar28 = (ulonglong)uVar29 << 8;
                  local_184 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_180 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_17c = (float)(byte)pFVar20[0x33] * fVar7;
                  uVar30 = uVar6;
                }
                (**(code **)(pFVar15->_padding_ + 0x30))
                          (pFVar15,pFVar20,pFVar20 + 0x18,pfVar21,uVar28,uVar30,0,1);
              }
LAB_146e02ed4:
              uVar19 = uVar19 + 1;
              uVar22 = uVar22 + 1;
              lVar24 = lVar24 + 0x38;
            } while ((int)uVar19 < iVar17);
          }
          iVar17 = (this->ProxyData).ClusterLinkLines.ArrayNum;
          uVar28 = uVar28 & 0xffffffffffffff00;
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,0,iVar17,0,uVar28);
          uVar28 = CONCAT71((int7)(uVar28 >> 8),1);
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,1,iVar17,0,uVar28);
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            uVar22 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < (this->ProxyData).ClusterLinkLines.ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (uVar28 = uVar22,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar20 = (this->ProxyData).ClusterLinkLines.AllocatorInstance.Data + lVar24;
              bVar11 = FNavMeshRenderingHelpers::LineInView
                                 ((TVector<double> *)pFVar20,(TVector<double> *)(pFVar20 + 0x18),
                                  pFVar1);
              if (bVar11) {
                dVar27 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
                dVar26 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
                dVar25 = dVar27 - *(double *)&pFVar20->field_0x0;
                dVar3 = dVar26 - *(double *)(pFVar20 + 8);
                uVar29 = (uint7)(uVar28 >> 8);
                if ((ARecastNavMesh::DrawDistanceSq <= dVar3 * dVar3 + dVar25 * dVar25) ||
                   (dVar26 = dVar26 - *(double *)(pFVar20 + 0x20),
                   dVar27 = dVar27 - *(double *)&pFVar20[0x18].field_0x0,
                   ARecastNavMesh::DrawDistanceSq <= dVar26 * dVar26 + dVar27 * dVar27)) {
                  if (this->bUseThickLines == 0) goto LAB_146e030d5;
                  pfVar21 = &local_158;
                  uVar30 = 0;
                  local_158 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  uVar28 = CONCAT71(uVar29,1);
                  local_154 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_150 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_14c = (float)(byte)pFVar20[0x33] * fVar7;
                }
                else {
                  pfVar21 = &local_168;
                  local_168 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  uVar28 = (ulonglong)uVar29 << 8;
                  local_164 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_160 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_15c = (float)(byte)pFVar20[0x33] * fVar7;
                  uVar30 = uVar8;
                }
                (**(code **)(pFVar15->_padding_ + 0x30))
                          (pFVar15,pFVar20,pFVar20 + 0x18,pfVar21,uVar28,uVar30,0,1);
              }
LAB_146e030d5:
              uVar19 = uVar19 + 1;
              uVar22 = uVar22 + 1;
              lVar24 = lVar24 + 0x38;
            } while ((int)uVar19 < iVar17);
          }
          iVar17 = (this->ProxyData).TileEdgeLines.ArrayNum;
          uVar28 = uVar28 & 0xffffffffffffff00;
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,0,iVar17,0,uVar28);
          uVar28 = CONCAT71((int7)(uVar28 >> 8),1);
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,1,iVar17,0,uVar28);
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            uVar22 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < (this->ProxyData).TileEdgeLines.ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (uVar28 = uVar22,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar20 = (this->ProxyData).TileEdgeLines.AllocatorInstance.Data + lVar24;
              bVar11 = FNavMeshRenderingHelpers::LineInView
                                 ((TVector<double> *)pFVar20,(TVector<double> *)(pFVar20 + 0x18),
                                  pFVar1);
              if (bVar11) {
                dVar27 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
                dVar26 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
                dVar25 = dVar27 - *(double *)&pFVar20->field_0x0;
                dVar3 = dVar26 - *(double *)(pFVar20 + 8);
                uVar29 = (uint7)(uVar28 >> 8);
                if ((ARecastNavMesh::DrawDistanceSq <= dVar3 * dVar3 + dVar25 * dVar25) ||
                   (dVar26 = dVar26 - *(double *)(pFVar20 + 0x20),
                   dVar27 = dVar27 - *(double *)&pFVar20[0x18].field_0x0,
                   ARecastNavMesh::DrawDistanceSq <= dVar26 * dVar26 + dVar27 * dVar27)) {
                  if (this->bUseThickLines == 0) goto LAB_146e032da;
                  uVar30 = 0;
                  local_138 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  uVar28 = CONCAT71(uVar29,1);
                  local_134 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_130 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_12c = (float)(byte)pFVar20[0x33] * fVar7;
                  pfVar21 = &local_138;
                }
                else {
                  local_148 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  uVar28 = (ulonglong)uVar29 << 8;
                  local_144 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_140 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_13c = (float)(byte)pFVar20[0x33] * fVar7;
                  pfVar21 = &local_148;
                  uVar30 = uVar9;
                }
                (**(code **)(pFVar15->_padding_ + 0x30))
                          (pFVar15,pFVar20,pFVar20 + 0x18,pfVar21,uVar28,uVar30,0,1);
              }
LAB_146e032da:
              uVar19 = uVar19 + 1;
              uVar22 = uVar22 + 1;
              lVar24 = lVar24 + 0x38;
            } while ((int)uVar19 < iVar17);
          }
          iVar17 = (this->ProxyData).NavLinkLines.ArrayNum;
          uVar28 = uVar28 & 0xffffffffffffff00;
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,0,iVar17,0,uVar28);
          uVar28 = CONCAT71((int7)(uVar28 >> 8),1);
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,1,iVar17,0,uVar28);
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            uVar22 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < (this->ProxyData).NavLinkLines.ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (uVar28 = uVar22,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar20 = (this->ProxyData).NavLinkLines.AllocatorInstance.Data + lVar24;
              bVar11 = FNavMeshRenderingHelpers::LineInView
                                 ((TVector<double> *)pFVar20,(TVector<double> *)(pFVar20 + 0x18),
                                  pFVar1);
              if (bVar11) {
                dVar27 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
                dVar26 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
                dVar25 = dVar27 - *(double *)&pFVar20->field_0x0;
                dVar3 = dVar26 - *(double *)(pFVar20 + 8);
                uVar29 = (uint7)(uVar28 >> 8);
                if ((ARecastNavMesh::DrawDistanceSq <= dVar3 * dVar3 + dVar25 * dVar25) ||
                   (dVar26 = dVar26 - *(double *)(pFVar20 + 0x20),
                   dVar27 = dVar27 - *(double *)&pFVar20[0x18].field_0x0,
                   ARecastNavMesh::DrawDistanceSq <= dVar26 * dVar26 + dVar27 * dVar27)) {
                  if (this->bUseThickLines == 0) goto LAB_146e034ec;
                  pfVar21 = &local_118;
                  uVar30 = 0;
                  local_118 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  uVar28 = CONCAT71(uVar29,1);
                  local_114 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_110 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_10c = (float)(byte)pFVar20[0x33] * fVar7;
                }
                else {
                  pfVar21 = &local_128;
                  local_128 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  local_124 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_120 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  uVar30 = *(undefined4 *)(pFVar20 + 0x34);
                  uVar28 = (ulonglong)uVar29 << 8;
                  local_11c = (float)(byte)pFVar20[0x33] * fVar7;
                }
                (**(code **)(pFVar15->_padding_ + 0x30))
                          (pFVar15,pFVar20,pFVar20 + 0x18,pfVar21,uVar28,uVar30,0,1);
              }
LAB_146e034ec:
              uVar19 = uVar19 + 1;
              uVar22 = uVar22 + 1;
              lVar24 = lVar24 + 0x38;
            } while ((int)uVar19 < iVar17);
          }
          iVar17 = (this->ProxyData).AuxLines.ArrayNum;
          uVar28 = uVar28 & 0xffffffffffffff00;
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,0,iVar17,0,uVar28);
          uVar28 = CONCAT71((int7)(uVar28 >> 8),1);
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,1,iVar17,0,uVar28);
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            uVar22 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < (this->ProxyData).AuxLines.ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (uVar28 = uVar22,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar20 = (this->ProxyData).AuxLines.AllocatorInstance.Data + lVar24;
              bVar11 = FNavMeshRenderingHelpers::LineInView
                                 ((TVector<double> *)pFVar20,(TVector<double> *)(pFVar20 + 0x18),
                                  pFVar1);
              if (bVar11) {
                local_108 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                local_104 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                local_100 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                uVar28 = uVar28 & 0xffffffffffffff00;
                local_fc = (float)(byte)pFVar20[0x33] * fVar7;
                (**(code **)(pFVar15->_padding_ + 0x30))
                          (pFVar15,pFVar20,pFVar20 + 0x18,&local_108,uVar28,
                           *(undefined4 *)(pFVar20 + 0x34),0,1);
              }
              uVar19 = uVar19 + 1;
              uVar22 = uVar22 + 1;
              lVar24 = lVar24 + 0x38;
            } while ((int)uVar19 < iVar17);
          }
          iVar17 = (this->ProxyData).AuxPoints.ArrayNum;
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            uVar22 = 0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < (this->ProxyData).AuxPoints.ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (uVar28 = uVar22,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar20 = (this->ProxyData).AuxPoints.AllocatorInstance.Data + lVar24;
              bVar11 = FNavMeshRenderingHelpers::PointInView((TVector<double> *)pFVar20,pFVar1);
              if (bVar11) {
                uVar28 = uVar28 & 0xffffffffffffff00;
                local_f8 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x1a]];
                local_f4 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x19]];
                local_f0 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x18].field_0x0];
                local_ec = (float)(byte)pFVar20[0x1b] * fVar7;
                (**(code **)(pFVar15->_padding_ + 0x40))
                          (pFVar15,pFVar20,&local_f8,*(undefined4 *)(pFVar20 + 0x1c),uVar28);
              }
              uVar19 = uVar19 + 1;
              uVar22 = uVar22 + 1;
              lVar24 = lVar24 + 0x20;
            } while ((int)uVar19 < iVar17);
          }
          iVar17 = (this->ProxyData).ThickLineItems.ArrayNum;
          pFVar16 = (FMeshElementCollector *)CONCAT71((int7)(uVar28 >> 8),1);
          (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15,1,iVar17,0,pFVar16);
          uVar19 = 0;
          if (0 < iVar17) {
            lVar24 = 0;
            pFVar23 = (FMeshElementCollector *)0x0;
            do {
              uVar12 = 0;
              if ((int)uVar19 < (this->ProxyData).ThickLineItems.ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (pFVar16 = pFVar23,
                 bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar20 = (this->ProxyData).ThickLineItems.AllocatorInstance.Data + lVar24;
              bVar11 = FNavMeshRenderingHelpers::LineInView
                                 ((TVector<double> *)pFVar20,(TVector<double> *)(pFVar20 + 0x18),
                                  pFVar1);
              if (bVar11) {
                dVar27 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
                dVar26 = (pFVar1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
                dVar25 = dVar27 - *(double *)&pFVar20->field_0x0;
                dVar3 = dVar26 - *(double *)(pFVar20 + 8);
                uVar29 = (uint7)((ulonglong)pFVar16 >> 8);
                if ((ARecastNavMesh::DrawDistanceSq <= dVar3 * dVar3 + dVar25 * dVar25) ||
                   (dVar26 = dVar26 - *(double *)(pFVar20 + 0x20),
                   dVar27 = dVar27 - *(double *)&pFVar20[0x18].field_0x0,
                   ARecastNavMesh::DrawDistanceSq <= dVar26 * dVar26 + dVar27 * dVar27)) {
                  if (this->bUseThickLines == 0) goto LAB_146e0391c;
                  pfVar21 = &local_d8;
                  uVar30 = 0;
                  local_d8 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  pFVar16 = (FMeshElementCollector *)CONCAT71(uVar29,1);
                  local_d4 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_d0 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  local_cc = (float)(byte)pFVar20[0x33] * fVar7;
                }
                else {
                  pfVar21 = &local_e8;
                  local_e8 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x32]];
                  local_e4 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x31]];
                  local_e0 = FLinearColor::sRGBToLinearTable[(byte)pFVar20[0x30].field_0x0];
                  uVar30 = *(undefined4 *)(pFVar20 + 0x34);
                  pFVar16 = (FMeshElementCollector *)((ulonglong)uVar29 << 8);
                  local_dc = (float)(byte)pFVar20[0x33] * fVar7;
                }
                (**(code **)(pFVar15->_padding_ + 0x30))
                          (pFVar15,pFVar20,pFVar20 + 0x18,pfVar21,pFVar16,uVar30,0,1);
              }
LAB_146e0391c:
              uVar19 = uVar19 + 1;
              pFVar23 = (FMeshElementCollector *)
                        ((longlong)&(pFVar23->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                        + 1);
              lVar24 = lVar24 + 0x38;
            } while ((int)uVar19 < iVar17);
          }
        }
      }
      iVar17 = param_1->ArrayNum;
      local_1c0 = local_1c0 + 1;
      local_1bc = local_1bc << 1 | (uint)((int)local_1bc < 0);
      local_1b8 = local_1b8 + 8;
      FVar18 = local_1a0;
    } while ((int)local_1c0 < iVar17);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 146e07970

uint __thiscall FNavMeshSceneProxy::GetMemoryFootprint(FNavMeshSceneProxy *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_res10;
  
  uVar16 = (longlong)(this->ProxyData).AuxBoxes.ArrayMax * 0xb0 +
           ((longlong)(this->ProxyData).AuxLines.ArrayMax +
            (longlong)(this->ProxyData).ClusterLinkLines.ArrayMax +
            (longlong)(this->ProxyData).NavLinkLines.ArrayMax +
            (longlong)(this->ProxyData).NavMeshEdgeLines.ArrayMax +
            (longlong)(this->ProxyData).TileEdgeLines.ArrayMax +
           (longlong)(this->ProxyData).ThickLineItems.ArrayMax) * 0x38 +
           ((longlong)(this->ProxyData).AuxPoints.ArrayMax +
           (longlong)(this->ProxyData).OctreeBounds.ArrayMax * 2) * 0x20 +
           ((longlong)(this->ProxyData).DebugLabels.ArrayMax +
           (longlong)(this->ProxyData).MeshBuilders.ArrayMax) * 0x28;
  if (uVar16 != (uVar16 & 0xffffffff)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return uVar14;
    }
  }
  iVar1 = (this->IndexBuffer).Indices.ArrayMax;
  uVar14 = (this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
  uVar2 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordStride;
  uVar3 = (this->VertexBuffers).PositionVertexBuffer.NumVertices;
  uVar4 = (this->VertexBuffers).PositionVertexBuffer.Stride;
  uVar5 = (this->VertexBuffers).ColorVertexBuffer.NumVertices;
  uVar6 = (this->VertexBuffers).ColorVertexBuffer.Stride;
  uVar7 = (this->VertexBuffers).StaticMeshVertexBuffer.TangentsStride;
  uVar8 = (this->VertexBuffers).StaticMeshVertexBuffer.NumVertices;
  iVar9 = (this->MeshColors).ArrayNum;
  iVar10 = (this->MeshColors).ArrayMax;
  iVar11 = (this->MeshBatchElements).ArrayMax;
  uVar15 = FDebugRenderSceneProxy::GetAllocatedSize((FDebugRenderSceneProxy *)this);
  local_res10 = (int)uVar16;
  uVar16 = (longlong)iVar9 * 0xe0 + (longlong)iVar1 * 4 +
           (ulonglong)(uVar15 + local_res10) + (ulonglong)(uVar6 * uVar5) +
           (ulonglong)(uVar4 * uVar3) + (ulonglong)((uVar14 * uVar2 + uVar7) * uVar8) +
           (longlong)iVar11 * 0x98 + (longlong)iVar10 * 8;
  if (uVar16 != (uVar16 & 0xffffffff)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IntFitsIn<OutType>(In)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                        ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      uVar14 = (*pcVar12)();
      return uVar14;
    }
  }
  return (int)uVar16 + 0x8e0;
}

// GetTypeHash @ 146e13990

ulong64 __thiscall FNavMeshSceneProxy::GetTypeHash(FNavMeshSceneProxy *this)

{
  return 0x1551c0a20;
}

// GetViewRelevance @ 146e13bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNavMeshSceneProxy::GetViewRelevance
          (FNavMeshSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  
  if (((param_1->Family->EngineShowFlags).Navigation == 0) && (this->bForceRendering == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  __return_storage_ptr__->_padding_ = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if ((bVar4) &&
     (bVar3 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1), bVar3)) {
    __return_storage_ptr__->bDynamicRelevance = 1;
    __return_storage_ptr__->bDrawRelevance = 1;
LAB_146e13c56:
    bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
    if (bVar4) {
      bVar5 = 4;
      goto LAB_146e13c6b;
    }
  }
  else {
    __return_storage_ptr__->bDrawRelevance = 0;
    __return_storage_ptr__->bDynamicRelevance = 1;
    if (bVar4) goto LAB_146e13c56;
  }
  bVar5 = 0;
LAB_146e13c6b:
  pbVar6 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 5);
  *pbVar1 = *pbVar1 | bVar5;
  *pbVar6 = *pbVar6 & 0x7f;
  *pbVar6 = *pbVar6 | (*(byte *)((longlong)&__return_storage_ptr__->_padding_ + 5) & 0xfc) << 5;
  return __return_storage_ptr__;
}

