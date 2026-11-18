// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 15

// StaticClass @ 14dc988e0

UClass * __cdecl UMovieGraphRenderPropertyModifier::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPropertyModifier",
               &Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderPropertyModifier,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderPropertyModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPropertyModifier>,local_res8,
               UMovieGraphCollectionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton;
}

// UMovieGraphRenderPropertyModifier @ 14dcb1040

UMovieGraphRenderPropertyModifier * __thiscall
UMovieGraphRenderPropertyModifier::UMovieGraphRenderPropertyModifier
          (UMovieGraphRenderPropertyModifier *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphRenderPropertyModifier__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CachedActorState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedActorState).ArrayNum = 0;
  (this->CachedActorState).ArrayMax = 0;
  (this->CachedComponentState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedComponentState).ArrayNum = 0;
  (this->CachedComponentState).ArrayMax = 0;
  return this;
}

// UMovieGraphRenderPropertyModifier @ 14dcb1090

UMovieGraphRenderPropertyModifier * __thiscall
UMovieGraphRenderPropertyModifier::UMovieGraphRenderPropertyModifier
          (UMovieGraphRenderPropertyModifier *this)

{
  undefined1 *puVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar2);
  this->bIsHidden = '\0';
  this->bCastsShadows = '\0';
  this->bCastsShadows = '\x01';
  this->bCastShadowWhileHidden = '\0';
  this->bProcessEditorOnlyActors = '\0';
  this->bHoldout = '\0';
  this->bAffectIndirectLightingWhileHidden = '\0';
  this->_padding_ = (longlong)&___7UMovieGraphRenderPropertyModifier__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CachedActorState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedActorState).ArrayNum = 0;
  (this->CachedActorState).ArrayMax = 0;
  (this->CachedComponentState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedComponentState).ArrayNum = 0;
  (this->CachedComponentState).ArrayMax = 0;
  return this;
}

// ~UMovieGraphRenderPropertyModifier @ 14dcb3310

void __thiscall
UMovieGraphRenderPropertyModifier::~UMovieGraphRenderPropertyModifier
          (UMovieGraphRenderPropertyModifier *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieGraphRenderPropertyModifier__6B_;
  DestructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>
            ((FComponentState *)(this->CachedComponentState).AllocatorInstance.Data,
             (this->CachedComponentState).ArrayNum);
  pFVar1 = (this->CachedComponentState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UMovieGraphRenderPropertyModifier::FActorState,int>
            ((FActorState *)(this->CachedActorState).AllocatorInstance.Data,
             (this->CachedActorState).ArrayNum);
  pFVar1 = (this->CachedActorState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieGraphCollectionModifier__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7UMovieGraphModifierBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14dcb6700

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
`UMovieGraphRenderPropertyModifier::SetActorAndComponentState'::__l2::<lambda_2>::operator()
          (void *this,UActorComponent *param_1,FComponentState *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  UClass *pUVar3;
  longlong *plVar4;
  AActor *local_res10;
  AActor *local_res20;
  
  if (param_1 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar3->_padding_)) {
      pUVar3 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
      iVar2 = (int)pUVar3->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        pUVar3 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
        iVar2 = (int)pUVar3->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar3->_padding_)) {
          pUVar3 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
          iVar2 = (int)pUVar3->_padding_;
          if (*(int *)(param_1->_padding_ + 0x38) < iVar2) {
            return;
          }
          if ((longlong *)
              *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar3->_padding_) {
            return;
          }
          plVar4 = *(longlong **)((longlong)this + 8);
          if ((*(byte *)(*plVar4 + 0x58) & 0x10) != 0) {
            UExponentialHeightFogComponent::SetHoldout
                      ((UExponentialHeightFogComponent *)param_1,param_2->bHoldout);
          }
          if ((*(byte *)(*plVar4 + 0x58) & 1) != 0) {
            UExponentialHeightFogComponent::SetRenderInMainPass
                      ((UExponentialHeightFogComponent *)param_1,(bool)(~param_2->bIsHidden & 1));
          }
          if ((*(byte *)(*plVar4 + 0x58) & 8) == 0) {
            return;
          }
          UExponentialHeightFogComponent::SetRenderInMainPass
                    ((UExponentialHeightFogComponent *)param_1,
                     (bool)(~param_2->bAffectIndirectLightingWhileHidden & 1));
        }
        else {
          plVar4 = *(longlong **)((longlong)this + 8);
          if ((*(byte *)(*plVar4 + 0x58) & 0x10) != 0) {
            USkyAtmosphereComponent::SetHoldout
                      ((USkyAtmosphereComponent *)param_1,param_2->bHoldout);
          }
          if ((*(byte *)(*plVar4 + 0x58) & 1) != 0) {
            USkyAtmosphereComponent::SetRenderInMainPass
                      ((USkyAtmosphereComponent *)param_1,(bool)(~param_2->bIsHidden & 1));
          }
          if ((*(byte *)(*plVar4 + 0x58) & 8) == 0) {
            return;
          }
          USkyAtmosphereComponent::SetRenderInMainPass
                    ((USkyAtmosphereComponent *)param_1,
                     (bool)(~param_2->bAffectIndirectLightingWhileHidden & 1));
        }
      }
      else {
        plVar4 = *(longlong **)((longlong)this + 8);
        if ((*(byte *)(*plVar4 + 0x58) & 0x10) != 0) {
          UVolumetricCloudComponent::SetHoldout
                    ((UVolumetricCloudComponent *)param_1,param_2->bHoldout);
        }
        if ((*(byte *)(*plVar4 + 0x58) & 1) != 0) {
          UVolumetricCloudComponent::SetRenderInMainPass
                    ((UVolumetricCloudComponent *)param_1,(bool)(~param_2->bIsHidden & 1));
        }
        if ((*(byte *)(*plVar4 + 0x58) & 8) == 0) {
          return;
        }
        UVolumetricCloudComponent::SetRenderInMainPass
                  ((UVolumetricCloudComponent *)param_1,
                   (bool)(~param_2->bAffectIndirectLightingWhileHidden & 1));
      }
      if (param_2->bAffectIndirectLightingWhileHidden != '\0') {
        local_res20 = param_1->OwnerPrivate;
        TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Emplace<AActor_*>
                  ((TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)plVar4[1],
                   &local_res10,(bool *)&local_res20);
      }
    }
    else {
      if ((*(byte *)(*(longlong *)this + 0x58) & 2) != 0) {
        UPrimitiveComponent::SetCastShadow((UPrimitiveComponent *)param_1,param_2->bCastsShadows);
      }
      if ((*(byte *)(*(longlong *)this + 0x58) & 4) != 0) {
        UPrimitiveComponent::SetCastHiddenShadow
                  ((UPrimitiveComponent *)param_1,param_2->bCastShadowWhileHidden);
      }
      if ((*(byte *)(*(longlong *)this + 0x58) & 8) != 0) {
        UPrimitiveComponent::SetAffectIndirectLightingWhileHidden
                  ((UPrimitiveComponent *)param_1,param_2->bAffectIndirectLightingWhileHidden);
      }
      if ((*(byte *)(*(longlong *)this + 0x58) & 0x10) != 0) {
        UPrimitiveComponent::SetHoldout((UPrimitiveComponent *)param_1,param_2->bHoldout);
      }
      if ((*(byte *)(*(longlong *)this + 0x58) & 1) != 0) {
        USceneComponent::SetHiddenInGame((USceneComponent *)param_1,param_2->bIsHidden,DirtyOnly);
        return;
      }
    }
  }
  return;
}

// ApplyModifier @ 14dcbb390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphRenderPropertyModifier::ApplyModifier
          (UMovieGraphRenderPropertyModifier *this,UWorld *param_1)

{
  TArray<UMovieGraphRenderPropertyModifier::FComponentState,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  AActor *this_00;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  uint uVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  TArray<UMovieGraphRenderPropertyModifier::FActorState,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  FSoftObjectPtr *pFVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  uint *puVar25;
  UMovieGraphRenderPropertyModifier *this_01;
  undefined1 auStackY_358 [32];
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  uint local_324;
  uint local_320;
  longlong *local_318;
  int iStack_310;
  uint uStack_30c;
  TBitArray<FDefaultBitArrayAllocator> *local_308;
  undefined4 uStack_300;
  uint uStack_2fc;
  int local_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  UObject *local_2e8;
  TArray<UMovieGraphRenderPropertyModifier::FActorState,TSizedDefaultAllocator<32>_> *local_2e0;
  undefined8 *local_2d8;
  TArray<UMovieGraphRenderPropertyModifier::FActorState,TSizedDefaultAllocator<32>_> local_2d0;
  TArray<UMovieGraphRenderPropertyModifier::FComponentState,TSizedDefaultAllocator<32>_> local_2c0;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  UWorld *local_2a0;
  AActor *local_298;
  UClass *local_290;
  UClass *local_288;
  UObject *local_280;
  int *local_278;
  UMovieGraphRenderPropertyModifier *local_270;
  undefined8 *local_268;
  longlong *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  longlong *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  undefined4 local_1e4;
  undefined4 local_1c4;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  int local_184;
  ForElementType<FSetElementId> local_178;
  int local_170;
  undefined1 local_168 [32];
  uint *local_148;
  uint local_140;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  undefined8 local_118 [24];
  undefined8 *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pTVar19 = &this->CachedActorState;
  local_2e0 = pTVar19;
  local_2a0 = param_1;
  local_270 = this;
  DestructItems<UMovieGraphRenderPropertyModifier::FActorState,int>
            ((FActorState *)(pTVar19->AllocatorInstance).Data,(this->CachedActorState).ArrayNum);
  piVar24 = &(this->CachedActorState).ArrayMax;
  (this->CachedActorState).ArrayNum = 0;
  local_278 = piVar24;
  if (*piVar24 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&pTVar19->AllocatorInstance,0,piVar24);
  }
  pTVar1 = &this->CachedComponentState;
  DestructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>
            ((FComponentState *)(pTVar1->AllocatorInstance).Data,
             (this->CachedComponentState).ArrayNum);
  piVar2 = &(this->CachedComponentState).ArrayMax;
  (this->CachedComponentState).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  ValidateProjectSettings(this);
  local_320 = (uint)this->_padding_;
  uVar16 = (ulonglong)(int)local_320;
  puVar23 = (undefined8 *)this->_padding_;
  puVar22 = puVar23 + uVar16;
  this_01 = this;
  local_268 = puVar22;
LAB_14dcbb469:
  local_2d8 = puVar23;
  if ((int)this_01->_padding_ != (int)uVar16) {
    local_328 = 0;
    `TCheckedPointerIterator<TObjectPtr<UMovieGraphCollection>,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(&local_328);
  }
  if (puVar23 == puVar22) {
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax = 0;
    local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.ArrayNum = 0;
    local_2d0.ArrayMax = 0;
    SetActorAndComponentState(this_01,&local_2d0,&local_2c0,true);
    FVar6.Data = local_2d0.AllocatorInstance.Data;
    DestructItems<UMovieGraphRenderPropertyModifier::FActorState,int>
              ((FActorState *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
    if ((FActorState *)FVar6.Data != (FActorState *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    FVar6.Data = local_2c0.AllocatorInstance.Data;
    DestructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>
              ((FComponentState *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum);
    if ((FComponentState *)FVar6.Data != (FComponentState *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    return;
  }
  if ((UMovieGraphCollection *)*puVar23 != (UMovieGraphCollection *)0x0) {
    UMovieGraphCollection::EvaluateActorsAndComponents
              ((UMovieGraphCollection *)*puVar23,(FMovieGraphEvaluationResult *)local_1b8,local_2a0)
    ;
    uVar15 = local_1b8._8_4_ - local_184;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (*piVar24 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar15,&pTVar19->AllocatorInstance,pTVar19->ArrayNum,piVar24);
    }
    uVar15 = local_168._8_4_ - local_134;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (*piVar2 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar15,&pTVar1->AllocatorInstance,(this->CachedComponentState).ArrayNum,
                 piVar2);
    }
    uVar15 = local_190;
    iStack_310 = 0;
    local_2f8 = 0;
    uStack_30c = 1;
    uStack_2fc = 0;
    if (local_190 != 0) {
      puVar25 = (uint *)(local_1b8 + 0x10);
      if (local_198 != (uint *)0x0) {
        puVar25 = local_198;
      }
      uVar20 = *puVar25;
      while (uVar20 == 0) {
        iStack_310 = iStack_310 + 1;
        local_2f8 = local_2f8 + 0x20;
        uStack_2fc = local_190;
        if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_310)
        goto LAB_14dcbb5a0;
        uVar20 = puVar25[iStack_310];
      }
      uStack_30c = ~(uVar20 - 1) & uVar20;
      uVar16 = (ulonglong)uStack_30c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_2b0 = (int)lVar4;
      uStack_2fc = local_2b0 + -1 + local_2f8;
      if ((int)local_190 < (int)uStack_2fc) {
        uStack_2fc = local_190;
      }
    }
LAB_14dcbb5a0:
    local_318 = (longlong *)local_1b8;
    uStack_2f4 = local_1e4;
    local_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
    uVar20 = local_190 & 0xffffffe0;
    iStack_2f0 = local_1b8._8_4_ - local_184;
    TStack_258._padding_ = CONCAT44(uStack_30c,iStack_310);
    uStack_300 = 0xffffffff;
    TStack_258.CurrentBitIndex = uStack_2fc;
    TStack_258.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)local_190 >> 5;
    TStack_258._28_4_ = local_1e4;
    TStack_258.BaseBitIndex = local_2f8;
    uStack_238 = CONCAT44(uStack_2ec,iStack_2f0);
    bVar17 = (byte)local_190;
    local_324 = local_190;
    local_260 = local_318;
    TStack_258.Array = local_308;
    if (((int)local_190 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar15 != local_190) {
      puVar25 = (uint *)(local_1b8 + 0x10);
      if (local_198 != (uint *)0x0) {
        puVar25 = local_198;
      }
      uVar15 = -1 << (bVar17 & 0x1f) & puVar25[iVar18];
      while (uVar15 == 0) {
        iVar18 = iVar18 + 1;
        uVar20 = uVar20 + 0x20;
        if ((int)(((int)(local_190 - 1) >> 0x1f & 0x1fU) + (local_190 - 1)) >> 5 < iVar18) {
          local_324 = local_190;
          uVar15 = local_190;
          goto LAB_14dcbb6d4;
        }
        uVar15 = puVar25[iVar18];
      }
      uVar16 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_2ac = (int)lVar4;
      uVar15 = (uVar20 - 1) + local_2ac;
      local_324 = uVar15;
      if ((int)local_190 < (int)uVar15) {
        uVar15 = local_190;
        local_324 = local_190;
      }
    }
LAB_14dcbb6d4:
    plVar7 = local_260;
    if ((int)local_260[1] - *(int *)((longlong)local_260 + 0x34) != (int)uStack_238) {
      local_327 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_327);
    }
    uVar20 = local_140;
    if (((TStack_258.CurrentBitIndex != uVar15) ||
        (TStack_258.Array != (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) ||
       (plVar7 != (longlong *)local_1b8)) {
      this_00 = *(AActor **)(*plVar7 + (longlong)TStack_258.CurrentBitIndex * 0x10);
      bVar17 = this_00->bHidden;
      pUVar11 = Z_Construct_UClass_APostProcessVolume_NoRegister();
      pTVar19 = local_2e0;
      iVar18 = (int)pUVar11->_padding_;
      if (((iVar18 <= *(int *)(this_00->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
           &pUVar11->_padding_)) && (this_00 != (AActor *)0x0)) {
        bVar17 = ~*(byte *)((longlong)&this_00[3].ReplicatedComponents.AllocatorInstance.Data + 4);
      }
      iVar18 = local_2e0->ArrayNum;
      if (iVar18 == local_2e0->ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_2e0->AllocatorInstance,&local_2e0->ArrayMax);
      }
      pTVar19->ArrayNum = iVar18 + 1;
      pFVar21 = (FSoftObjectPtr *)((pTVar19->AllocatorInstance).Data + (longlong)iVar18 * 0x30);
      DefaultConstructItems<UMovieGraphRenderPropertyModifier::FActorState,int>(pFVar21,1);
      local_298 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FSoftObjectPtr::operator=(pFVar21,(FObjectPtr)&local_298);
      *(byte *)(pFVar21 + 1) = *(byte *)(pFVar21 + 1) ^ (bVar17 ^ *(byte *)(pFVar21 + 1)) & 1;
      pUVar14 = (UClass *)0x0;
      pUVar11 = (UClass *)0x0;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      local_4c = 0x18;
      pUVar12 = Z_Construct_UClass_USceneComponent_NoRegister();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar12 == (UClass *)0x0) goto LAB_14dcbb85a;
      }
      else {
        pUVar11 = pUVar14;
        if (pUVar12 == (UClass *)0x0) goto LAB_14dcbb85a;
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
      pUVar11 = pUVar14;
      if (pUVar13 != (UClass *)0x0) {
        iVar18 = (int)pUVar13->_padding_;
        if (((int)pUVar12->_padding_ < iVar18) ||
           ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar18 * 8) !=
            &pUVar13->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar11 = pUVar12;
        }
      }
LAB_14dcbb85a:
      pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar11 == pUVar14) {
        local_290 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        AActor::
        ForEachComponent_Internal<USceneComponent,1,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_290,
                   (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_118);
      }
      else {
        local_288 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        AActor::
        ForEachComponent_Internal<USceneComponent,0,1,_AActor::GetComponents<USceneComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_288,
                   (TArray<USceneComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_118);
      }
      uVar15 = local_50;
      uVar16 = (ulonglong)(int)local_50;
      puVar22 = local_118;
      if (local_58 != (undefined8 *)0x0) {
        puVar22 = local_58;
      }
      puVar23 = puVar22 + uVar16;
LAB_14dcbb8f0:
      do {
        if ((uint)uVar16 != uVar15) {
          local_326 = 0;
          `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_326);
        }
        if (puVar22 == puVar23) goto LAB_14dcbbb44;
        iVar18 = (this->CachedComponentState).ArrayNum;
        pUVar3 = (UObject *)*puVar22;
        if (iVar18 == *piVar2) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->CachedComponentState).ArrayNum = iVar18 + 1;
        pFVar21 = (FSoftObjectPtr *)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x30);
        DefaultConstructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>(pFVar21,1);
        local_2e8 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UObject *)0x0)) {
          FSoftObjectPtr::operator=(pFVar21,(FObjectPtr)&local_2e8);
          if (pUVar3 != (UObject *)0x0) goto LAB_14dcbb98e;
        }
        else {
          UE::GC::MarkAsReachable(pUVar3);
          FSoftObjectPtr::operator=(pFVar21,(FObjectPtr)&local_2e8);
LAB_14dcbb98e:
          pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar18 = (int)pUVar11->_padding_;
          if ((iVar18 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8) ==
              &pUVar11->_padding_)) {
            bVar17 = (*(byte *)(pFVar21 + 1) ^ pUVar3[0xf].field_0x26) & 1 ^ *(byte *)(pFVar21 + 1);
            *(byte *)(pFVar21 + 1) = bVar17;
            bVar17 = ((byte)pUVar3[0xf].field_0x27 >> 4 ^ bVar17) & 2 ^ bVar17;
            *(byte *)(pFVar21 + 1) = bVar17;
            bVar17 = ((byte)pUVar3[0xf].field_0x26 >> 1 ^ bVar17) & 4 ^ bVar17;
            *(byte *)(pFVar21 + 1) = bVar17;
            bVar17 = ((byte)pUVar3[0xf].field_0x24 >> 4 ^ bVar17) & 8 ^ bVar17;
            *(byte *)(pFVar21 + 1) = bVar17;
            *(byte *)(pFVar21 + 1) = (pUVar3[10].field_0x19 * '\x02' ^ bVar17) & 0x10 ^ bVar17;
            puVar22 = puVar22 + 1;
            uVar16 = (ulonglong)local_50;
            goto LAB_14dcbb8f0;
          }
          if (pUVar3 != (UObject *)0x0) {
            pUVar11 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
            iVar18 = (int)pUVar11->_padding_;
            if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar18) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
                &pUVar11->_padding_)) {
              pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
              iVar18 = (int)pUVar11->_padding_;
              if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar18) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8)
                  != &pUVar11->_padding_)) {
                pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
                iVar18 = (int)pUVar11->_padding_;
                if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar18) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8)
                    != &pUVar11->_padding_)) goto LAB_14dcbbb35;
                bVar17 = (pUVar3[10].field_0x19 * '\x02' ^ *(byte *)(pFVar21 + 1)) & 0x10 ^
                         *(byte *)(pFVar21 + 1);
                *(byte *)(pFVar21 + 1) = bVar17;
                bVar17 = (pUVar3[0x14].field_0x5 << 3 ^ bVar17) & 8 ^ bVar17;
                *(byte *)(pFVar21 + 1) = bVar17;
                cVar9 = pUVar3[0x14].field_0x5;
              }
              else {
                bVar17 = (pUVar3[10].field_0x19 * '\x02' ^ *(byte *)(pFVar21 + 1)) & 0x10 ^
                         *(byte *)(pFVar21 + 1);
                *(byte *)(pFVar21 + 1) = bVar17;
                bVar17 = (pUVar3[0x13].field_0x8 << 3 ^ bVar17) & 8 ^ bVar17;
                *(byte *)(pFVar21 + 1) = bVar17;
                cVar9 = pUVar3[0x13].field_0x8;
              }
            }
            else {
              bVar17 = (pUVar3[10].field_0x19 * '\x02' ^ *(byte *)(pFVar21 + 1)) & 0x10 ^
                       *(byte *)(pFVar21 + 1);
              *(byte *)(pFVar21 + 1) = bVar17;
              bVar17 = (pUVar3[0x12].field_0x8 << 3 ^ bVar17) & 8 ^ bVar17;
              *(byte *)(pFVar21 + 1) = bVar17;
              cVar9 = pUVar3[0x12].field_0x8;
            }
            *(byte *)(pFVar21 + 1) = (~(cVar9 * '\x02') ^ bVar17) & 4 ^ bVar17;
          }
        }
LAB_14dcbbb35:
        uVar16 = (ulonglong)local_50;
        puVar22 = puVar22 + 1;
      } while( true );
    }
    iStack_310 = 0;
    local_2f8 = 0;
    uStack_30c = 1;
    uStack_2fc = 0;
    if (local_140 != 0) {
      puVar25 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar25 = local_148;
      }
      uVar15 = *puVar25;
      while (uVar15 == 0) {
        iStack_310 = iStack_310 + 1;
        local_2f8 = local_2f8 + 0x20;
        uStack_2fc = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_310)
        goto LAB_14dcbbc00;
        uVar15 = puVar25[iStack_310];
      }
      uStack_30c = ~(uVar15 - 1) & uVar15;
      uVar16 = (ulonglong)uStack_30c * 2 + 1;
      lVar4 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_2a8 = (int)lVar4;
      uStack_2fc = local_2f8 + -1 + local_2a8;
      if ((int)local_140 < (int)uStack_2fc) {
        uStack_2fc = local_140;
      }
    }
LAB_14dcbbc00:
    local_318 = (longlong *)local_168;
    uStack_2f4 = local_1c4;
    local_308 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
    uVar15 = local_140 & 0xffffffe0;
    iStack_2f0 = local_168._8_4_ - local_134;
    TStack_228._padding_ = CONCAT44(uStack_30c,iStack_310);
    uStack_300 = 0xffffffff;
    TStack_228.CurrentBitIndex = uStack_2fc;
    TStack_228.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)local_140 >> 5;
    TStack_228._28_4_ = local_1c4;
    TStack_228.BaseBitIndex = local_2f8;
    uStack_208 = CONCAT44(uStack_2ec,iStack_2f0);
    bVar17 = (byte)local_140;
    local_230 = local_318;
    TStack_228.Array = local_308;
    if (((int)local_140 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar20 != local_140) {
      puVar25 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar25 = local_148;
      }
      uVar20 = -1 << (bVar17 & 0x1f) & puVar25[iVar18];
      while (uVar20 == 0) {
        iVar18 = iVar18 + 1;
        uVar15 = uVar15 + 0x20;
        uVar20 = local_140;
        if ((int)(((int)(local_140 - 1) >> 0x1f & 0x1fU) + (local_140 - 1)) >> 5 < iVar18)
        goto LAB_14dcbbd21;
        uVar20 = puVar25[iVar18];
      }
      uVar16 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_2a4 = (int)lVar4;
      uVar20 = (uVar15 - 1) + local_2a4;
      if ((int)local_140 < (int)uVar20) {
        uVar20 = local_140;
      }
    }
LAB_14dcbbd21:
    do {
      plVar7 = local_230;
      if ((int)local_230[1] - *(int *)((longlong)local_230 + 0x34) != (int)uStack_208) {
        local_325 = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_325);
      }
      if (((TStack_228.CurrentBitIndex == uVar20) &&
          (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10))) &&
         (plVar7 == (longlong *)local_168)) goto LAB_14dcbbfbd;
      pUVar3 = *(UObject **)(*plVar7 + (longlong)TStack_228.CurrentBitIndex * 0x10);
      if (pUVar3 != (UObject *)0x0) {
        pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar18 = (int)pUVar11->_padding_;
        if ((iVar18 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8) ==
            &pUVar11->_padding_)) {
          iVar18 = (this->CachedComponentState).ArrayNum;
          if (iVar18 == (this->CachedComponentState).ArrayMax) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&pTVar1->AllocatorInstance,
                                &(this->CachedComponentState).ArrayMax);
          }
          (this->CachedComponentState).ArrayNum = iVar18 + 1;
          pFVar21 = (FSoftObjectPtr *)((pTVar1->AllocatorInstance).Data + (longlong)iVar18 * 0x30);
          DefaultConstructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>(pFVar21,1);
          local_280 = pUVar3;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          FSoftObjectPtr::operator=(pFVar21,(FObjectPtr)&local_280);
          pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
          iVar18 = (int)pUVar11->_padding_;
          if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar18) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
              &pUVar11->_padding_)) {
            pUVar11 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
            iVar18 = (int)pUVar11->_padding_;
            if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar18) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
                &pUVar11->_padding_)) {
              pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
              iVar18 = (int)pUVar11->_padding_;
              if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar18) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8)
                  != &pUVar11->_padding_)) {
                pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
                iVar18 = (int)pUVar11->_padding_;
                if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar18) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar18 * 8)
                    != &pUVar11->_padding_)) goto LAB_14dcbbfa7;
                bVar17 = (pUVar3[10].field_0x19 * '\x02' ^ *(byte *)(pFVar21 + 1)) & 0x10 ^
                         *(byte *)(pFVar21 + 1);
                *(byte *)(pFVar21 + 1) = bVar17;
                bVar17 = (pUVar3[0x14].field_0x5 << 3 ^ bVar17) & 8 ^ bVar17;
                *(byte *)(pFVar21 + 1) = bVar17;
                cVar9 = pUVar3[0x14].field_0x5;
              }
              else {
                bVar17 = (pUVar3[10].field_0x19 * '\x02' ^ *(byte *)(pFVar21 + 1)) & 0x10 ^
                         *(byte *)(pFVar21 + 1);
                *(byte *)(pFVar21 + 1) = bVar17;
                bVar17 = (pUVar3[0x13].field_0x8 << 3 ^ bVar17) & 8 ^ bVar17;
                *(byte *)(pFVar21 + 1) = bVar17;
                cVar9 = pUVar3[0x13].field_0x8;
              }
            }
            else {
              bVar17 = (pUVar3[10].field_0x19 * '\x02' ^ *(byte *)(pFVar21 + 1)) & 0x10 ^
                       *(byte *)(pFVar21 + 1);
              *(byte *)(pFVar21 + 1) = bVar17;
              bVar17 = (pUVar3[0x12].field_0x8 << 3 ^ bVar17) & 8 ^ bVar17;
              *(byte *)(pFVar21 + 1) = bVar17;
              cVar9 = pUVar3[0x12].field_0x8;
            }
            bVar10 = (~(cVar9 * '\x02') ^ bVar17) & 4;
          }
          else {
            bVar17 = (*(byte *)(pFVar21 + 1) ^ pUVar3[0xf].field_0x26) & 1 ^ *(byte *)(pFVar21 + 1);
            *(byte *)(pFVar21 + 1) = bVar17;
            bVar17 = ((byte)pUVar3[0xf].field_0x27 >> 4 ^ bVar17) & 2 ^ bVar17;
            *(byte *)(pFVar21 + 1) = bVar17;
            bVar17 = ((byte)pUVar3[0xf].field_0x26 >> 1 ^ bVar17) & 4 ^ bVar17;
            *(byte *)(pFVar21 + 1) = bVar17;
            bVar17 = ((byte)pUVar3[0xf].field_0x24 >> 4 ^ bVar17) & 8 ^ bVar17;
            *(byte *)(pFVar21 + 1) = bVar17;
            bVar10 = (pUVar3[10].field_0x19 * '\x02' ^ bVar17) & 0x10;
          }
          *(byte *)(pFVar21 + 1) = bVar10 ^ bVar17;
        }
      }
LAB_14dcbbfa7:
      TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    } while( true );
  }
  goto LAB_14dcbc01a;
LAB_14dcbbfbd:
  local_120 = 0;
  if (local_128 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_168);
  local_170 = 0;
  if (local_178 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_178);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1b8);
  pTVar19 = local_2e0;
  puVar23 = local_2d8;
  piVar24 = local_278;
  this_01 = local_270;
  puVar22 = local_268;
LAB_14dcbc01a:
  uVar16 = (ulonglong)local_320;
  puVar23 = puVar23 + 1;
  goto LAB_14dcbb469;
LAB_14dcbbb44:
  if (local_58 != (undefined8 *)0x0) {
    FMemory::Free(local_58);
  }
  TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
  uVar15 = local_324;
  goto LAB_14dcbb6d4;
}

// GetModifierName @ 14dcceaf0

FText * __thiscall
UMovieGraphRenderPropertyModifier::GetModifierName
          (UMovieGraphRenderPropertyModifier *this,FText *__return_storage_ptr__)

{
  TRefCountPtr<ITextData> TVar1;
  undefined1 local_res10 [24];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&ModifierName,L"MovieGraph",L"RenderPropertyModifierName",L"Visibility");
      atexit(`UMovieGraphRenderPropertyModifier::GetModifierName'::__l2::
             _dynamic_atexit_destructor_for__ModifierName__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  TVar1 = ModifierName.TextData;
  (__return_storage_ptr__->TextData).Reference = ModifierName.TextData.Reference;
  if (TVar1.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar1.Reference + 8))(TVar1.Reference,local_res10);
  }
  __return_storage_ptr__->Flags = ModifierName.Flags;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dcd3180

UClass * __cdecl UMovieGraphRenderPropertyModifier::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphRenderPropertyModifier",
               &Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton,
               StaticRegisterNativesUMovieGraphRenderPropertyModifier,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphRenderPropertyModifier>,
               InternalVTableHelperCtorCaller<UMovieGraphRenderPropertyModifier>,local_res8,
               UMovieGraphCollectionModifier::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphRenderPropertyModifier.InnerSingleton;
}

// PostLoad @ 14dcda3b0

void __thiscall UMovieGraphRenderPropertyModifier::PostLoad(UMovieGraphRenderPropertyModifier *this)

{
  UObject::PostLoad((UObject *)this);
  ValidateProjectSettings(this);
  return;
}

// SetActorAndComponentState @ 14dce2910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UMovieGraphRenderPropertyModifier::SetActorAndComponentState
          (UMovieGraphRenderPropertyModifier *this,
          TArray<UMovieGraphRenderPropertyModifier::FActorState,TSizedDefaultAllocator<32>_>
          *param_1,TArray<UMovieGraphRenderPropertyModifier::FComponentState,TSizedDefaultAllocator<32>_>
                   *param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  UActorComponent *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  undefined1 *puVar8;
  FComponentState *this_00;
  FComponentState *pFVar9;
  FScriptContainerElement *pFVar10;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar11;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined1 local_d8 [24];
  FUtf8String local_c0;
  byte local_b0;
  UMovieGraphRenderPropertyModifier *local_a8;
  UMovieGraphRenderPropertyModifier **local_a0;
  UMovieGraphRenderPropertyModifier *local_98;
  TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_90;
  TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_90 = &local_88;
  local_a0 = &local_98;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_a8 = this;
  local_98 = this;
  if (param_3) {
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8._16_8_ = 0;
    local_d8._8_8_ = 0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    local_d8._0_8_ = 0;
    local_e0 = 0;
    FUtf8String::Reset(&local_c0,0);
    local_e0 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_d8,(FObjectPtr)&local_e0);
    iVar1 = (this->CachedComponentState).ArrayNum;
    pTVar11 = (TPersistentObjectPtr<FSoftObjectPath> *)
              (this->CachedComponentState).AllocatorInstance.Data;
    local_b0 = (byte)(this->field_0x58 & 0x40 | (byte)this->field_0x58 >> 5) >> 2 |
               (this->field_0x59 & 7) * '\x02' | local_b0 & 0xe0;
    pTVar12 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pTVar11 + (longlong)iVar1 * 0x30);
    while( true ) {
      if ((this->CachedComponentState).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UMovieGraphRenderPropertyModifier::FComponentState,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (pTVar11 == pTVar12) break;
      pUVar5 = (UActorComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar11);
      if (pUVar5 == (UActorComponent *)0x0) {
LAB_14dce2a5c:
        pUVar5 = (UActorComponent *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) goto LAB_14dce2a5c;
      }
      `UMovieGraphRenderPropertyModifier::SetActorAndComponentState'::__l2::<lambda_2>::operator()
                (&local_a8,pUVar5,(FComponentState *)local_d8);
      pTVar11 = (TPersistentObjectPtr<FSoftObjectPath> *)&pTVar11[1].ObjectID;
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8._16_8_ = 0;
    local_d8._8_8_ = 0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    local_d8._0_8_ = 0;
    local_e0 = 0;
    FUtf8String::Reset(&local_c0,0);
    local_e0 = 0;
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_d8,(FObjectPtr)&local_e0);
    iVar1 = (this->CachedActorState).ArrayNum;
    pTVar11 = (TPersistentObjectPtr<FSoftObjectPath> *)
              (this->CachedActorState).AllocatorInstance.Data;
    local_b0 = this->bIsHidden | local_b0 & 0xfe;
    pTVar12 = (TPersistentObjectPtr<FSoftObjectPath> *)((longlong)pTVar11 + (longlong)iVar1 * 0x30);
    while( true ) {
      if ((this->CachedActorState).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UMovieGraphRenderPropertyModifier::FActorState,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_e8);
      }
      if (pTVar11 == pTVar12) break;
      pUVar5 = (UActorComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar11);
      if (pUVar5 == (UActorComponent *)0x0) {
        if ((pTVar11->ObjectID).AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&pTVar11->ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar5 = (UActorComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar11);
          goto LAB_14dce2b2a;
        }
LAB_14dce2b52:
        pUVar5 = (UActorComponent *)0x0;
      }
      else {
LAB_14dce2b2a:
        if (pUVar5 == (UActorComponent *)0x0) goto LAB_14dce2b52;
        pUVar6 = Z_Construct_UClass_AActor_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) goto LAB_14dce2b52;
      }
      uVar4 = ((uint)((ulonglong)pUVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar5 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      if (local_88._8_4_ != local_88._52_4_) {
        puVar8 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar8 = local_48;
        }
        for (iVar2 = *(int *)(puVar8 + (ulonglong)(local_40 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
            iVar2 != -1; iVar2 = *(int *)(local_88._0_8_ + 8 + (longlong)iVar2 * 0x10)) {
          if (*(UActorComponent **)(local_88._0_8_ + (longlong)iVar2 * 0x10) == pUVar5)
          goto LAB_14dce2c18;
        }
      }
      if (pUVar5 != (UActorComponent *)0x0) {
        pUVar6 = Z_Construct_UClass_APostProcessVolume_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          *(uint *)&pUVar5[0xd].field_0xbc =
               (~(uint)local_b0 ^ *(uint *)&pUVar5[0xd].field_0xbc) & 1 ^
               *(uint *)&pUVar5[0xd].field_0xbc;
        }
      }
      (**(code **)(pUVar5->_padding_ + 0x368))(pUVar5);
LAB_14dce2c18:
      pTVar11 = (TPersistentObjectPtr<FSoftObjectPath> *)&pTVar11[1].ObjectID;
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  else {
    iVar1 = param_2->ArrayNum;
    this_00 = (FComponentState *)(param_2->AllocatorInstance).Data;
    pFVar9 = this_00 + iVar1;
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<UMovieGraphRenderPropertyModifier::FComponentState_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      if (this_00 == pFVar9) break;
      pUVar5 = (UActorComponent *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
      if (pUVar5 != (UActorComponent *)0x0) {
        pUVar6 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) {
          `UMovieGraphRenderPropertyModifier::SetActorAndComponentState'::__l2::<lambda_2>::
          operator()(&local_a8,pUVar5,this_00);
        }
      }
      this_00 = this_00 + 1;
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    pFVar10 = pFVar3 + 0x28;
    while( true ) {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<UMovieGraphRenderPropertyModifier::FActorState_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_e8);
      }
      pTVar11 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar10 + -0x28);
      if (pTVar11 == (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar3 + (longlong)iVar1 * 0x30))
      break;
      pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar11);
      if (pUVar7 == (UObject *)0x0) {
        if (*(longlong *)(pFVar10 + -0x20) != 0) {
          FSoftObjectPath::TryLoad
                    ((FSoftObjectPath *)(pFVar10 + -0x20),(FUObjectSerializeContext *)0x0);
          pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get(pTVar11);
          goto LAB_14dce2d73;
        }
      }
      else {
LAB_14dce2d73:
        if (pUVar7 != (UObject *)0x0) {
          pUVar6 = Z_Construct_UClass_AActor_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) {
            uVar4 = ((uint)((ulonglong)pUVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar7 >> 4)) *
                    -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            if (local_88._8_4_ != local_88._52_4_) {
              puVar8 = local_50;
              if (local_48 != (undefined1 *)0x0) {
                puVar8 = local_48;
              }
              for (iVar2 = *(int *)(puVar8 + (ulonglong)(local_40 - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                                             4); iVar2 != -1;
                  iVar2 = *(int *)(local_88._0_8_ + 8 + (longlong)iVar2 * 0x10)) {
                if (*(UObject **)(local_88._0_8_ + (longlong)iVar2 * 0x10) == pUVar7)
                goto LAB_14dce2e64;
              }
            }
            pUVar6 = Z_Construct_UClass_APostProcessVolume_NoRegister();
            iVar2 = (int)pUVar6->_padding_;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar6->_padding_)) {
              *(uint *)&pUVar7[0x43].field_0x4 =
                   (~(uint)(byte)*pFVar10 ^ *(uint *)&pUVar7[0x43].field_0x4) & 1 ^
                   *(uint *)&pUVar7[0x43].field_0x4;
            }
            (**(code **)(*(longlong *)pUVar7 + 0x368))(pUVar7);
          }
        }
      }
LAB_14dce2e64:
      pFVar10 = pFVar10 + 0x30;
    }
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<AActor_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}

// StaticRegisterNativesUMovieGraphRenderPropertyModifier @ 14dce67f0

void __cdecl
UMovieGraphRenderPropertyModifier::StaticRegisterNativesUMovieGraphRenderPropertyModifier(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphRenderPropertyModifier_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UndoModifier @ 14dce9b80

void __thiscall
UMovieGraphRenderPropertyModifier::UndoModifier(UMovieGraphRenderPropertyModifier *this)

{
  TArray<UMovieGraphRenderPropertyModifier::FComponentState,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UMovieGraphRenderPropertyModifier::FActorState,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  
  pTVar1 = &this->CachedComponentState;
  pTVar2 = &this->CachedActorState;
  SetActorAndComponentState(this,pTVar2,pTVar1,false);
  DestructItems<UMovieGraphRenderPropertyModifier::FActorState,int>
            ((FActorState *)(pTVar2->AllocatorInstance).Data,(this->CachedActorState).ArrayNum);
  piVar3 = &(this->CachedActorState).ArrayMax;
  (this->CachedActorState).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&pTVar2->AllocatorInstance,0,piVar3);
  }
  DestructItems<UMovieGraphRenderPropertyModifier::FComponentState,int>
            ((FComponentState *)(pTVar1->AllocatorInstance).Data,
             (this->CachedComponentState).ArrayNum);
  piVar3 = &(this->CachedComponentState).ArrayMax;
  (this->CachedComponentState).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&pTVar1->AllocatorInstance,0,piVar3);
  }
  return;
}

// ValidateProjectSettings @ 14dcece70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphRenderPropertyModifier::ValidateProjectSettings(UMovieGraphRenderPropertyModifier *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&HoldoutModifierLabel,L"MovieGraph",L"ConditionGroupQueryHoldoutModifier",
                 L"Holdout Modifier");
      atexit(`UMovieGraphRenderPropertyModifier::ValidateProjectSettings'::__l2::
             _dynamic_atexit_destructor_for__HoldoutModifierLabel__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((this->bHoldout != '\0') && (2 < (byte)LogMovieRenderPipeline._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    return;
  }
  return;
}

// execIsHidden @ 14dcf2230

void __cdecl
UMovieGraphRenderPropertyModifier::execIsHidden(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[2].field_0x8 >> 6 & 1;
  return;
}

// execSetHidden @ 14dcf37c0

void __cdecl
UMovieGraphRenderPropertyModifier::execSetHidden(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[2].field_0x8 = param_1[2].field_0x8 & 0xbf;
  param_1[2].field_0x8 = param_1[2].field_0x8 | -(local_res8[0] != 0) & 0x40U;
  return;
}

