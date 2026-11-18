// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// AddReferencedObjects @ 14d5985e0

void __thiscall
UE::Cameras::FCameraRigCombinationRegistry::AddReferencedObjects
          (FCameraRigCombinationRegistry *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->CombinedCameraRigs).AllocatorInstance.Data,
             (this->CombinedCameraRigs).ArrayNum,0,0);
  return;
}

// FindOrCreateCombination @ 14d5a4650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCameraRigAsset * __thiscall
UE::Cameras::FCameraRigCombinationRegistry::FindOrCreateCombination
          (FCameraRigCombinationRegistry *this,TArrayView<UCameraRigAsset_const_*,int> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TObjectPtr<UCameraRigAsset>_u_0 *pTVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TObjectPtr<UCameraRigAsset>_u_0 TVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  UCameraRigAsset *pUVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  longlong lVar17;
  UObject *pUVar18;
  longlong lVar19;
  UObject *pUVar20;
  TObjectPtr<UCameraRigAsset>_u_0 *pTVar21;
  TArray<TObjectPtr<UCameraRigAsset_const_>,TSizedDefaultAllocator<32>_> *pTVar22;
  undefined1 auStack_368 [32];
  UObject **local_348;
  FScriptContainerElement *local_340;
  longlong local_338;
  longlong local_330;
  undefined8 local_328;
  UObject *local_318;
  undefined4 local_310;
  int local_30c;
  longlong local_308;
  undefined1 local_300 [24];
  void *local_2e8;
  longlong local_2e0;
  void *local_2d8;
  longlong local_2d0;
  TObjectPtr<UCameraRigAsset>_u_0 local_2c8;
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  ForAnyElementType local_2a0;
  undefined8 local_298;
  ForAnyElementType local_290;
  undefined8 local_288;
  ForAnyElementType local_280;
  undefined8 local_278;
  ForAnyElementType local_270;
  undefined8 local_268;
  ForAnyElementType local_260;
  undefined8 local_258;
  ForAnyElementType local_250;
  undefined8 local_248;
  ForAnyElementType local_240;
  undefined8 local_238;
  ForAnyElementType local_230;
  undefined8 local_228;
  ForAnyElementType local_220;
  undefined8 local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  ForAnyElementType local_200;
  undefined8 local_1f8;
  ForAnyElementType local_1f0;
  undefined8 local_1e8;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  TObjectPtr<UCameraRigAsset>_u_0 *local_1d0;
  undefined1 *local_1c8;
  TArray<TObjectPtr<UCameraRigAsset_const_>,TSizedDefaultAllocator<32>_> *local_1c0;
  UObject *local_1b8;
  UObject *local_1b0;
  FCameraRigCombinationRegistry *local_1a8;
  FCameraRigCombinationKey *local_1a0;
  undefined4 *local_198;
  TArrayView<UCameraRigAsset_const_*,int> local_188;
  undefined1 local_178 [128];
  undefined1 local_f8 [128];
  FCameraRigCombinationKey local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_368;
  local_188.DataPtr = param_1->DataPtr;
  local_188.ArrayNum = param_1->ArrayNum;
  local_188._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_1a8 = this;
  FCameraRigCombinationKey::FCameraRigCombinationKey(&local_78,&local_188);
  local_310 = 0xffffffff;
  iVar9 = TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey>
                    ((TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
                      *)this,local_78.CachedHash,&local_78);
  if ((iVar9 == -1) ||
     (lVar19 = *(longlong *)&this->Combinations + (longlong)iVar9 * 0x48, local_308 = lVar19,
     lVar19 == 0)) {
    local_1a0 = &local_78;
    local_348 = (UObject **)0x0;
    local_198 = &local_310;
    TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
    ::
    EmplaceByHash<TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>_>
              ((TSet<TTuple<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int>,TDefaultMapHashableKeyFuncs<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey,int,0>,FDefaultSetAllocator>
                *)this,(uint)&local_30c,
               (TPairInitializer<UE::Cameras::FCameraRigCombinationRegistry::FCameraRigCombinationKey_const_&,int_&&>
                *)(ulonglong)local_78.CachedHash,(bool *)&local_1a0);
    lVar19 = *(longlong *)&this->Combinations + (longlong)local_30c * 0x48;
  }
  local_308 = lVar19;
  if (*(int *)(lVar19 + 0x38) == -1) {
    pFVar5 = (this->CombinedCameraRigs).AllocatorInstance.Data;
    pTVar22 = &this->CombinedCameraRigs;
    for (pFVar15 = pFVar5; local_1c0 = pTVar22,
        pFVar15 != pFVar5 + (longlong)(this->CombinedCameraRigs).ArrayNum * 8; pFVar15 = pFVar15 + 8
        ) {
      if (*(longlong *)pFVar15 == 0) {
        iVar9 = (int)((longlong)pFVar15 - (longlong)pFVar5 >> 3);
        *(int *)(lVar19 + 0x38) = iVar9;
        if (iVar9 == -1) goto LAB_14d5a478c;
        goto LAB_14d5a484c;
      }
    }
    *(undefined4 *)(lVar19 + 0x38) = 0xffffffff;
LAB_14d5a478c:
    pFVar5 = (pTVar22->AllocatorInstance).Data;
    local_318 = (UObject *)0x0;
    if ((pFVar5 <= (FScriptContainerElement *)&local_318) &&
       (lVar17 = (longlong)(this->CombinedCameraRigs).ArrayMax,
       (FScriptContainerElement *)&local_318 < pFVar5 + lVar17 * 8)) {
      local_330 = (longlong)(this->CombinedCameraRigs).ArrayNum;
      local_328 = 8;
      local_348 = &local_318;
      local_340 = pFVar5;
      local_338 = lVar17;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pUVar11 = (UCameraRigAsset *)(*pcVar7)();
        return pUVar11;
      }
    }
    iVar9 = (this->CombinedCameraRigs).ArrayNum;
    piVar1 = &(this->CombinedCameraRigs).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar22->AllocatorInstance,piVar1);
    }
    pFVar5 = (pTVar22->AllocatorInstance).Data;
    (this->CombinedCameraRigs).ArrayNum = iVar9 + 1;
    *(UObject **)(pFVar5 + (longlong)iVar9 * 8) = local_318;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_318 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_318);
    }
    *(int *)(lVar19 + 0x38) = iVar9;
LAB_14d5a484c:
    if (((iVar9 < 0) || ((this->CombinedCameraRigs).ArrayNum <= iVar9)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CombinedCameraRigs.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraRigCombinationRegistry.cpp"
                           ,0x27,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pUVar11 = (UCameraRigAsset *)(*pcVar7)();
      return pUVar11;
    }
    pUVar12 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = UCameraRigAsset::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_178,pUVar13);
    local_178._8_8_ = pUVar12;
    pUVar12 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_178);
    local_1b8 = pUVar12;
    if (local_178._64_8_ != 0) {
      plVar16 = (longlong *)(local_178 + 0x50);
      if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_178._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar13 = UCombinedCameraRigsCameraNode::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_f8,pUVar13);
    local_f8._8_8_ = pUVar12;
    pUVar14 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
    local_1b0 = pUVar14;
    if (local_f8._64_8_ != 0) {
      plVar16 = (longlong *)(local_f8 + 0x50);
      if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_f8._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    pTVar21 = (TObjectPtr<UCameraRigAsset>_u_0 *)param_1->DataPtr;
    pTVar3 = pTVar21 + param_1->ArrayNum;
    pUVar18 = pUVar14;
    pUVar20 = pUVar12;
    local_1d0 = pTVar3;
    if (pTVar21 != pTVar3) {
      puVar2 = &pUVar14[1].field_0x10;
      local_1c8 = &pUVar12[2].field_0x10;
      do {
        TVar6 = (TObjectPtr<UCameraRigAsset>_u_0)pTVar21->DebugPtr;
        local_300._0_8_ = &___7FBaseCameraObjectReference__6B_;
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)(local_300 + 8));
        local_300._0_8_ = &___7FCameraRigAssetReference__6B_;
        local_2e8 = (void *)0x0;
        local_2e0 = 0;
        local_2d8 = (void *)0x0;
        local_2d0 = 0;
        local_2c8 = TVar6;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UCameraRigAsset *)0x0)) {
          GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
        }
        pFVar5 = *(FScriptContainerElement **)puVar2;
        local_2c0.Data = (FScriptContainerElement *)0x0;
        local_2b8._0_4_ = 0;
        local_2b8._4_4_ = 0;
        local_2b0.Data = (FScriptContainerElement *)0x0;
        local_2a8._0_4_ = 0;
        local_2a8._4_4_ = 0;
        local_2a0.Data = (FScriptContainerElement *)0x0;
        local_298._0_4_ = 0;
        local_298._4_4_ = 0;
        local_290.Data = (FScriptContainerElement *)0x0;
        local_288._0_4_ = 0;
        local_288._4_4_ = 0;
        local_280.Data = (FScriptContainerElement *)0x0;
        local_278._0_4_ = 0;
        local_278._4_4_ = 0;
        local_270.Data = (FScriptContainerElement *)0x0;
        local_268._0_4_ = 0;
        local_268._4_4_ = 0;
        local_260.Data = (FScriptContainerElement *)0x0;
        local_258._0_4_ = 0;
        local_258._4_4_ = 0;
        local_250.Data = (FScriptContainerElement *)0x0;
        local_248._0_4_ = 0;
        local_248._4_4_ = 0;
        local_240.Data = (FScriptContainerElement *)0x0;
        local_238._0_4_ = 0;
        local_238._4_4_ = 0;
        local_230.Data = (FScriptContainerElement *)0x0;
        local_228._0_4_ = 0;
        local_228._4_4_ = 0;
        local_220.Data = (FScriptContainerElement *)0x0;
        local_218._0_4_ = 0;
        local_218._4_4_ = 0;
        local_210.Data = (FScriptContainerElement *)0x0;
        local_208._0_4_ = 0;
        local_208._4_4_ = 0;
        local_200.Data = (FScriptContainerElement *)0x0;
        local_1f8._0_4_ = 0;
        local_1f8._4_4_ = 0;
        local_1f0.Data = (FScriptContainerElement *)0x0;
        local_1e8._0_4_ = 0;
        local_1e8._4_4_ = 0;
        local_1e0.Data = (FScriptContainerElement *)0x0;
        local_1d8._0_4_ = 0;
        local_1d8._4_4_ = 0;
        if ((pFVar5 <= (FScriptContainerElement *)local_300) &&
           ((FScriptContainerElement *)local_300 <
            pFVar5 + (longlong)*(int *)&pUVar14[1].field_0x1c * 0x130)) {
          local_330 = (longlong)*(int *)&pUVar14[1].field_0x18;
          local_328 = 0x130;
          local_348 = (UObject **)local_300;
          local_340 = pFVar5;
          local_338 = (longlong)*(int *)&pUVar14[1].field_0x1c;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pUVar11 = (UCameraRigAsset *)(*pcVar7)();
            return pUVar11;
          }
        }
        iVar9 = *(int *)&pUVar14[1].field_0x18;
        if (iVar9 == *(int *)&pUVar14[1].field_0x1c) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x130,8,(ForAnyElementType *)puVar2,(int *)&pUVar14[1].field_0x1c);
        }
        *(int *)&pUVar14[1].field_0x18 = iVar9 + 1;
        FCameraRigAssetReference::FCameraRigAssetReference
                  ((FCameraRigAssetReference *)(*(longlong *)puVar2 + (longlong)iVar9 * 0x130),
                   (FCameraRigAssetReference *)local_300);
        DestructItems<FTransform3dCameraRigParameterOverride,int>
                  ((FTransform3dCameraRigParameterOverride *)local_1e0.Data,(int)local_1d8);
        if ((FTransform3dCameraRigParameterOverride *)local_1e0.Data !=
            (FTransform3dCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_1e0.Data);
        }
        DestructItems<FTransform3fCameraRigParameterOverride,int>
                  ((FTransform3fCameraRigParameterOverride *)local_1f0.Data,(int)local_1e8);
        if ((FTransform3fCameraRigParameterOverride *)local_1f0.Data !=
            (FTransform3fCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_1f0.Data);
        }
        DestructItems<FRotator3dCameraRigParameterOverride,int>
                  ((FRotator3dCameraRigParameterOverride *)local_200.Data,(int)local_1f8);
        if ((FRotator3dCameraRigParameterOverride *)local_200.Data !=
            (FRotator3dCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_200.Data);
        }
        DestructItems<FRotator3fCameraRigParameterOverride,int>
                  ((FRotator3fCameraRigParameterOverride *)local_210.Data,(int)local_208);
        if ((FRotator3fCameraRigParameterOverride *)local_210.Data !=
            (FRotator3fCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_210.Data);
        }
        DestructItems<FVector4dCameraRigParameterOverride,int>
                  ((FVector4dCameraRigParameterOverride *)local_220.Data,(int)local_218);
        if ((FVector4dCameraRigParameterOverride *)local_220.Data !=
            (FVector4dCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_220.Data);
        }
        DestructItems<FVector4fCameraRigParameterOverride,int>
                  ((FVector4fCameraRigParameterOverride *)local_230.Data,(int)local_228);
        if ((FVector4fCameraRigParameterOverride *)local_230.Data !=
            (FVector4fCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_230.Data);
        }
        DestructItems<FVector3dCameraRigParameterOverride,int>
                  ((FVector3dCameraRigParameterOverride *)local_240.Data,(int)local_238);
        if ((FVector3dCameraRigParameterOverride *)local_240.Data !=
            (FVector3dCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_240.Data);
        }
        DestructItems<FVector3fCameraRigParameterOverride,int>
                  ((FVector3fCameraRigParameterOverride *)local_250.Data,(int)local_248);
        if ((FVector3fCameraRigParameterOverride *)local_250.Data !=
            (FVector3fCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_250.Data);
        }
        DestructItems<FVector2dCameraRigParameterOverride,int>
                  ((FVector2dCameraRigParameterOverride *)local_260.Data,(int)local_258);
        if ((FVector2dCameraRigParameterOverride *)local_260.Data !=
            (FVector2dCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_260.Data);
        }
        DestructItems<FVector2fCameraRigParameterOverride,int>
                  ((FVector2fCameraRigParameterOverride *)local_270.Data,(int)local_268);
        if ((FVector2fCameraRigParameterOverride *)local_270.Data !=
            (FVector2fCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_270.Data);
        }
        DestructItems<FDoubleCameraRigParameterOverride,int>
                  ((FDoubleCameraRigParameterOverride *)local_280.Data,(int)local_278);
        if ((FDoubleCameraRigParameterOverride *)local_280.Data !=
            (FDoubleCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_280.Data);
        }
        DestructItems<FFloatCameraRigParameterOverride,int>
                  ((FFloatCameraRigParameterOverride *)local_290.Data,(int)local_288);
        if ((FFloatCameraRigParameterOverride *)local_290.Data !=
            (FFloatCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_290.Data);
        }
        DestructItems<FInteger32CameraRigParameterOverride,int>
                  ((FInteger32CameraRigParameterOverride *)local_2a0.Data,(int)local_298);
        if ((FInteger32CameraRigParameterOverride *)local_2a0.Data !=
            (FInteger32CameraRigParameterOverride *)0x0) {
          FMemory::Free(local_2a0.Data);
        }
        DestructItems<FBooleanCameraRigParameterOverride,int>
                  ((FBooleanCameraRigParameterOverride *)local_2b0.Data,(int)local_2a8);
        if ((FBooleanCameraRigParameterOverride *)local_2b0.Data !=
            (FBooleanCameraRigParameterOverride *)0x0) {
          FMemory::Free(local_2b0.Data);
        }
        if (local_2c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2c0.Data);
        }
        local_300._0_8_ = &___7FBaseCameraObjectReference__6B_;
        if (local_2d8 != (void *)0x0) {
          FMemory::Free(local_2d8);
        }
        if (local_2e8 != (void *)0x0) {
          FMemory::Free(local_2e8);
        }
        FInstancedStruct::Reset((FInstancedStruct *)(local_300 + 8));
        FCameraObjectAllocationInfo::Append
                  ((FCameraObjectAllocationInfo *)&pUVar12[2].field_0x10,
                   (FCameraObjectAllocationInfo *)&(TVar6.DebugPtr)->_padding_);
        pTVar21 = pTVar21 + 1;
        pUVar18 = local_1b0;
        lVar19 = local_308;
        pUVar20 = local_1b8;
        pTVar22 = local_1c0;
      } while (pTVar21 != pTVar3);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar18);
    }
    *(UObject **)(pUVar20 + 5) = pUVar18;
    uVar4 = *(uint *)(lVar19 + 0x38);
    uVar10 = 0;
    if ((int)uVar4 < pTVar22->ArrayNum) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_348 = (UObject **)(longlong)(int)uVar4,
       local_340 = (FScriptContainerElement *)(longlong)pTVar22->ArrayNum,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pUVar11 = (UCameraRigAsset *)(*pcVar7)();
      return pUVar11;
    }
    pFVar5 = (pTVar22->AllocatorInstance).Data;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar20);
    }
    *(UObject **)(pFVar5 + (longlong)(int)uVar4 * 8) = pUVar20;
    this = local_1a8;
  }
  uVar4 = *(uint *)(lVar19 + 0x38);
  iVar9 = (this->CombinedCameraRigs).ArrayNum;
  uVar10 = 0;
  if ((int)uVar4 < iVar9) {
    uVar10 = ~uVar4 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_348 = (UObject **)(longlong)(int)uVar4,
     local_340 = (FScriptContainerElement *)(longlong)iVar9,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar7 = (code *)swi(3);
    pUVar11 = (UCameraRigAsset *)(*pcVar7)();
    return pUVar11;
  }
  pUVar11 = *(UCameraRigAsset **)
             ((this->CombinedCameraRigs).AllocatorInstance.Data + (longlong)(int)uVar4 * 8);
  if (local_78.Combination.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_78.Combination.AllocatorInstance.SecondaryData);
  }
  return pUVar11;
}

