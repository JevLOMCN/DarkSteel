// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FInstancedSkeletalMeshObjectGPUSkin @ 1486204b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstancedSkeletalMeshObjectGPUSkin * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::FInstancedSkeletalMeshObjectGPUSkin
          (FInstancedSkeletalMeshObjectGPUSkin *this,FInstancedSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  TArray<FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_>
  *pTVar1;
  UTransformProviderData *pUVar2;
  FSkeletalMeshRenderData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FInstancedSkeletalMeshObjectGPUSkin *pFVar8;
  FSkeletalMeshObjectLOD *this_00;
  FSkelMeshComponentLODInfo *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  
  FSkeletalMeshObject::FSkeletalMeshObject
            ((FSkeletalMeshObject *)this,(FSkinnedMeshSceneProxyDesc *)param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FInstancedSkeletalMeshObjectGPUSkin__6B_;
  pUVar2 = (param_1->TransformProvider).field0_0x0.DebugPtr;
  (this->TransformProvider).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UTransformProviderData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pTVar1 = &this->LODs;
  iVar13 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  (this->LODs).ArrayMax = 0;
  if (0 < (param_2->LODRenderData).Array.ArrayNum) {
    do {
      iVar6 = (this->LODs).ArrayNum;
      if (iVar6 == (this->LODs).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (600,8,&pTVar1->AllocatorInstance,&(this->LODs).ArrayMax);
      }
      (this->LODs).ArrayNum = iVar6 + 1;
      pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 600;
      *(FSkeletalMeshRenderData **)pFVar11 = param_2;
      FLocalVertexFactory::FLocalVertexFactory
                ((FLocalVertexFactory *)(pFVar11 + 8),param_3,
                 "FInstancedSkeletalMeshObjectGPUSkinLOD");
      *(int *)(pFVar11 + 0x248) = iVar13;
      iVar13 = iVar13 + 1;
      *(undefined8 *)(pFVar11 + 0x238) = 0;
      *(undefined8 *)(pFVar11 + 0x240) = 0;
      *(Type *)(pFVar11 + 0x24c) = param_3;
      *(undefined2 *)(pFVar11 + 0x250) = 0;
    } while (iVar13 < (param_2->LODRenderData).Array.ArrayNum);
  }
  uVar10 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar12 = 0;
    lVar15 = 0;
    do {
      uVar14 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < (this->LODs).ArrayNum) {
        uVar7 = uVar14;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FInstancedSkeletalMeshObjectGPUSkin *)(*pcVar4)();
          return pFVar8;
        }
      }
      this_00 = (FSkeletalMeshObjectLOD *)((pTVar1->AllocatorInstance).Data + lVar15);
      pFVar3 = this_00->RenderData;
      uVar7 = 0;
      if ((int)uVar10 < (pFVar3->LODRenderData).Array.ArrayNum) {
        uVar7 = uVar14;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FInstancedSkeletalMeshObjectGPUSkin *)(*pcVar4)();
          return pFVar8;
        }
      }
      if (*(int *)(*(longlong *)((pFVar3->LODRenderData).Array.AllocatorInstance.Data + lVar12 * 8)
                  + 300) != 0) {
        pFVar9 = (FSkelMeshComponentLODInfo *)0x0;
        if ((-1 < (int)uVar10) && ((int)uVar10 < (int)param_1->_padding_)) {
          uVar7 = 0;
          if ((int)uVar10 < (int)param_1->_padding_) {
            uVar7 = uVar14;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar8 = (FInstancedSkeletalMeshObjectGPUSkin *)(*pcVar4)();
              return pFVar8;
            }
          }
          pFVar9 = (FSkelMeshComponentLODInfo *)(param_1->_padding_ + (longlong)(int)uVar10 * 0x28);
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar9);
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 1;
      lVar15 = lVar15 + 600;
    } while ((int)uVar10 < (this->LODs).ArrayNum);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 6) = 1;
  return this;
}

// CreateSceneExtensionProxy @ 148635e50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinningSceneExtensionProxy * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::CreateSceneExtensionProxy
          (FInstancedSkeletalMeshObjectGPUSkin *this,USkinnedAsset *param_1,bool param_2)

{
  FInstancedSkinningSceneExtensionProxy *this_00;
  FInstancedSkinningSceneExtensionProxy *pFVar1;
  UTransformProviderData *local_res20;
  
  this_00 = ::operator_new(0x60);
  pFVar1 = (FInstancedSkinningSceneExtensionProxy *)0x0;
  if (this_00 != (FInstancedSkinningSceneExtensionProxy *)0x0) {
    local_res20 = (this->TransformProvider).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res20 != (UTransformProviderData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    pFVar1 = FInstancedSkinningSceneExtensionProxy::FInstancedSkinningSceneExtensionProxy
                       (this_00,(TObjectPtr<UTransformProviderData>)&local_res20,
                        (FSkeletalMeshObject *)this,param_1,param_2);
  }
  return (FSkinningSceneExtensionProxy *)pFVar1;
}

// GetComponentSpaceTransforms @ 1486478e0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetComponentSpaceTransforms
          (FInstancedSkeletalMeshObjectGPUSkin *this)

{
  return (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
}

// GetLOD @ 14864b390

int __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetLOD(FInstancedSkeletalMeshObjectGPUSkin *this)

{
  return 0;
}

// GetPrevReferenceToLocalMatrices @ 14864c910

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetPrevReferenceToLocalMatrices
          (FInstancedSkeletalMeshObjectGPUSkin *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TMatrix<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetReferenceToLocalMatrices @ 14864cff0

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetReferenceToLocalMatrices
          (FInstancedSkeletalMeshObjectGPUSkin *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TMatrix<float> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 14864d3e0

void __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetResourceSizeEx
          (FInstancedSkeletalMeshObjectGPUSkin *this,FResourceSizeEx *param_1)

{
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0xb0);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->LODs).ArrayMax * 600);
  return;
}

// GetSkinVertexFactory @ 14864e800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FVertexFactory * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetSkinVertexFactory
          (FInstancedSkeletalMeshObjectGPUSkin *this,FSceneView *param_1,int param_2,int param_3,
          ESkinVertexFactoryMode param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FVertexFactory *pFVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 < (this->LODs).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->LODs).AllocatorInstance.Data;
  if (param_4 == RayTracing) {
    pFVar4 = (FVertexFactory *)(pFVar1 + (longlong)param_2 * 600 + 8);
  }
  else {
    uVar5 = 0;
    if (param_3 < *(int *)(pFVar1 + (longlong)param_2 * 600 + 0x240)) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FVertexFactory *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = *(FVertexFactory **)
              (*(longlong *)(pFVar1 + (longlong)param_2 * 600 + 0x238) + (longlong)param_3 * 8);
  }
  return pFVar4;
}

// GetStaticRayTracingGeometry @ 14864f920

FRayTracingGeometry * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetStaticRayTracingGeometry
          (FInstancedSkeletalMeshObjectGPUSkin *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRayTracingGeometry *pFVar5;
  uint uVar6;
  
  uVar4 = (**(code **)(this->_padding_ + 0xe8))();
  uVar6 = 0;
  if ((int)uVar4 < (this->LODs).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRayTracingGeometry *)(*pcVar2)();
      return pFVar5;
    }
  }
  plVar1 = *(longlong **)((this->LODs).AllocatorInstance.Data + (longlong)(int)uVar4 * 600);
  uVar6 = 0;
  if ((int)uVar4 < (int)plVar1[1]) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRayTracingGeometry *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FRayTracingGeometry *)(*(longlong *)(*plVar1 + (longlong)(int)uVar4 * 8) + 0x668);
}

// GetStaticSkinVertexFactory @ 14864fa30

FVertexFactory * __thiscall
FInstancedSkeletalMeshObjectGPUSkin::GetStaticSkinVertexFactory
          (FInstancedSkeletalMeshObjectGPUSkin *this,int param_1,int param_2,
          ESkinVertexFactoryMode param_3)

{
  FVertexFactory *pFVar1;
  
  pFVar1 = (FVertexFactory *)(**(code **)(this->_padding_ + 0x28))(this,0,param_1,param_2,param_3);
  return pFVar1;
}

// HaveValidDynamicData @ 148651b10

bool __thiscall
FInstancedSkeletalMeshObjectGPUSkin::HaveValidDynamicData(FInstancedSkeletalMeshObjectGPUSkin *this)

{
  return false;
}

// InitResources @ 148655a30

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
FInstancedSkeletalMeshObjectGPUSkin::InitResources
          (FInstancedSkeletalMeshObjectGPUSkin *this,FSkinnedMeshSceneProxyDesc *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkelMeshComponentLODInfo *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FSkeletalMeshObjectLOD *this_00;
  longlong lVar9;
  
  uVar6 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->LODs).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((this->LODs).AllocatorInstance.Data + lVar9);
      pFVar1 = this_00->RenderData;
      uVar4 = 0;
      if ((int)uVar6 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)((pFVar1->LODRenderData).Array.AllocatorInstance.Data + lVar7 * 8) +
                  300) != 0) {
        pFVar5 = (FSkelMeshComponentLODInfo *)0x0;
        if ((-1 < (int)uVar6) && ((int)uVar6 < (param_1->LODInfo).ArrayNum)) {
          uVar4 = 0;
          if ((int)uVar6 < (param_1->LODInfo).ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar5 = (param_1->LODInfo).DataPtr + (int)uVar6;
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar5);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 600;
    } while ((int)uVar6 < (this->LODs).ArrayNum);
  }
  return;
}

// IsGPUSkinMesh @ 148659a00

bool __thiscall
FInstancedSkeletalMeshObjectGPUSkin::IsGPUSkinMesh(FInstancedSkeletalMeshObjectGPUSkin *this)

{
  return true;
}

// ReleaseResources @ 14865f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedSkeletalMeshObjectGPUSkin::ReleaseResources(FInstancedSkeletalMeshObjectGPUSkin *this)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined ***pppuVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  code *local_98 [2];
  undefined **local_88;
  FScriptContainerElement *local_80;
  undefined ***local_70;
  code *local_68 [2];
  undefined **local_58;
  longlong local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar1 = (this->LODs).ArrayNum;
  pFVar10 = (this->LODs).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar1 * 600;
  do {
    if ((this->LODs).ArrayNum != iVar1) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_a8);
    }
    if (pFVar10 == pFVar11) {
      return;
    }
    if ((*(longlong *)pFVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                           ,0xb17,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10[0x250] = (FScriptContainerElement)0x0;
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
    local_80 = pFVar10;
    FRenderCommandDispatcher::
    Enqueue<TRenderCommandTag<_FInstancedSkeletalMeshObjectGPUSkin::FSkeletalMeshObjectLOD::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectLOD_ReleaseResources2843>_>
              (&UE::RenderCommandPipe::SkeletalMesh,
               (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_98);
    if (local_98[0] != (code *)0x0) {
      pppuVar9 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar9 = local_70;
      }
      (*(code *)(*pppuVar9)[2])();
    }
    if (pFVar10[0x251] != (FScriptContainerElement)0x0) {
      uVar2 = *(uint *)(pFVar10 + 0x248);
      plVar3 = *(longlong **)pFVar10;
      iVar8 = (int)plVar3[1];
      uVar7 = 0;
      if ((int)uVar2 < iVar8) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_b8 = (longlong)(int)uVar2, local_b0 = (longlong)iVar8,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)(*plVar3 + (longlong)(int)uVar2 * 8);
      if ((0 < *(int *)(lVar4 + 0x65c)) &&
         (iVar8 = *(int *)(lVar4 + 0x65c) + -1, *(int *)(lVar4 + 0x65c) = iVar8, iVar8 == 0)) {
        local_50 = lVar4 + 0x660;
        local_40 = (undefined ***)0x0;
        local_58 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry'::`8'::<lambda_1>,1,0>
                    ::_vftable_;
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry'::__l8::<lambda_1>,void>
                      ::Call;
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_FSkeletalMeshRenderData::ReleaseStaticRayTracingGeometry_::__l8::TSTR_ResetStaticRayTracingGeometryFlag783>_>
                  (&UE::RenderCommandPipe::SkeletalMesh,
                   (TUniqueFunction<void___cdecl(void)> *)local_68);
        if (local_68[0] != (code *)0x0) {
          pppuVar9 = &local_58;
          if (local_40 != (undefined ***)0x0) {
            pppuVar9 = local_40;
          }
          (*(code *)(*pppuVar9)[2])();
        }
        BeginReleaseResource
                  ((FRenderResource *)(lVar4 + 0x668),&UE::RenderCommandPipe::SkeletalMesh);
      }
    }
    pFVar10 = pFVar10 + 600;
  } while( true );
}

// Update @ 148669e10

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
FInstancedSkeletalMeshObjectGPUSkin::Update
          (FInstancedSkeletalMeshObjectGPUSkin *this,int param_1,
          FSkinnedMeshSceneProxyDynamicData *param_2,FPrimitiveSceneProxy *param_3,
          USkinnedAsset *param_4,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_5,TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          EPreviousBoneTransformUpdateMode param_7,FExternalMorphWeightData *param_8)

{
  return;
}

// UpdateSkinWeightBuffer @ 148672d20

void __thiscall
FInstancedSkeletalMeshObjectGPUSkin::UpdateSkinWeightBuffer
          (FInstancedSkeletalMeshObjectGPUSkin *this,
          TArrayView<FSkelMeshComponentLODInfo_const_,int> *param_1)

{
  return;
}

