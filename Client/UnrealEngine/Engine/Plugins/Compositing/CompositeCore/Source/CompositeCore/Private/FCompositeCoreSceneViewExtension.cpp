// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 33

// FCompositeCoreSceneViewExtension @ 14ea75d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCompositeCoreSceneViewExtension * __thiscall
FCompositeCoreSceneViewExtension::FCompositeCoreSceneViewExtension
          (FCompositeCoreSceneViewExtension *this,FAutoRegister *param_1,UWorld *param_2)

{
  FWorldSceneViewExtension::FWorldSceneViewExtension
            ((FWorldSceneViewExtension *)this,param_1,param_2);
  this->_padding_ = (longlong)&___7FCompositeCoreSceneViewExtension__6B_;
  *(undefined8 *)&(this->CompositePrimitives).Elements = 0;
  *(undefined8 *)&(this->CompositePrimitives).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CompositePrimitives).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CompositePrimitives).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CompositePrimitives).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompositePrimitives).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CompositePrimitives).Elements.field_0x30 = 0xffffffff;
  (this->CompositePrimitives).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CompositePrimitives).HashSize = 0;
  (this->ExternalInputs_RenderThread).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExternalInputs_RenderThread).Pairs.ArrayNum = 0;
  (this->ExternalInputs_RenderThread).Pairs.ArrayMax = 0;
  (this->CustomRenderTargetPerView_RenderThread).Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum = 0;
  (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayMax = 0;
  (this->RenderWork_RenderThread).bIsSet = false;
  (this->BuiltInRenderPassOptions).bIsSet = false;
  this->bHasCustomRenderWork = false;
  (this->MainRenderMode).bIsSet = false;
  *(undefined8 *)&(this->AllowedViewModes).Elements = 0;
  *(undefined8 *)&(this->AllowedViewModes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllowedViewModes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
  (this->AllowedViewModes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllowedViewModes).HashSize = 0;
  (this->SceneCapturesUpdateQueue).AllocatorInstance.Data =
       (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
  (this->SceneCapturesUpdateQueue).ArrayNum = 0;
  (this->SceneCapturesUpdateQueue).ArrayMax = 0;
  (this->CachedOutputsPerView_RenderThread).Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CachedOutputsPerView_RenderThread).Pairs.ArrayNum = 0;
  (this->CachedOutputsPerView_RenderThread).Pairs.ArrayMax = 0;
  return this;
}

// ~FCompositeCoreSceneViewExtension @ 14ea773a0

void __thiscall
FCompositeCoreSceneViewExtension::~FCompositeCoreSceneViewExtension
          (FCompositeCoreSceneViewExtension *this)

{
  FScriptContainerElement *pFVar1;
  TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&___7FCompositeCoreSceneViewExtension__6B_;
  DestructItems<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int>
            ((TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
              *)(this->CachedOutputsPerView_RenderThread).Pairs.AllocatorInstance.Data,
             (this->CachedOutputsPerView_RenderThread).Pairs.ArrayNum);
  pFVar1 = (this->CachedOutputsPerView_RenderThread).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->SceneCapturesUpdateQueue).AllocatorInstance.Data;
  if (pTVar2 != (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar2);
  }
  (this->AllowedViewModes).HashSize = 0;
  FVar3 = (this->AllowedViewModes).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AllowedViewModes);
  if ((this->RenderWork_RenderThread).bIsSet != false) {
    UE::CompositeCore::FRenderWork::~FRenderWork(&(this->RenderWork_RenderThread).TypedValue);
  }
  DestructItems<TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_>,int>
            ((TTuple<unsigned_int,TRefCountPtr<IPooledRenderTarget>_> *)
             (this->CustomRenderTargetPerView_RenderThread).Pairs.AllocatorInstance.Data,
             (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum);
  pFVar1 = (this->CustomRenderTargetPerView_RenderThread).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
            ((TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
             (this->ExternalInputs_RenderThread).Pairs.AllocatorInstance.Data,
             (this->ExternalInputs_RenderThread).Pairs.ArrayNum);
  pFVar1 = (this->ExternalInputs_RenderThread).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->CompositePrimitives).HashSize = 0;
  FVar3 = (this->CompositePrimitives).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CompositePrimitives).Elements);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  return;
}

// operator() @ 14ea77c60

void __thiscall
`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea77d2a:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  else {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea77d2a;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    lVar1 = *(longlong *)this;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x140) != '\0') {
        UE::CompositeCore::FRenderWork::~FRenderWork((FRenderWork *)(lVar1 + 0xa0));
        *(undefined1 *)(lVar1 + 0x140) = 0;
      }
      pTVar2 = (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
               ((ForAnyElementType *)(lVar1 + 0x80))->Data;
      if (*(int *)(lVar1 + 0x8c) < 0) {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
        if (*(int *)(lVar1 + 0x8c) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)(lVar1 + 0x80),0,(int *)(lVar1 + 0x8c));
        }
      }
      else {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// operator() @ 14ea77d50

void __thiscall
`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
  *this_00;
  longlong lVar1;
  TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *pTVar2;
  longlong lVar3;
  UTexture *this_01;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  uint uVar8;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar9;
  FTextureResource *pFVar10;
  IPooledRenderTarget *pIVar11;
  TRefCountPtr<IPooledRenderTarget> TVar12;
  int iVar13;
  FRenderWork *this_02;
  uint uVar14;
  ulonglong uVar15;
  TReferenceControllerBase<1> *pTVar16;
  ulonglong uVar17;
  bool bVar18;
  uint local_res8 [2];
  UObject *local_res18;
  longlong *local_res20;
  
  pTVar16 = *(TReferenceControllerBase<1> **)((longlong)this + 0xa8);
  if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ea77fc0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  else {
    aVar6 = pTVar16->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar16 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ea77fc0;
      }
      LOCK();
      aVar7 = pTVar16->SharedReferenceCount;
      bVar18 = aVar6 == aVar7;
      if (bVar18) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar18);
    lVar1 = *(longlong *)((longlong)this + 0xa0);
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if (lVar1 != 0) {
      this_00 = (TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
                 *)(lVar1 + 0x80);
      pTVar2 = (TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget> *)
               (this_00->Pairs).AllocatorInstance.Data;
      if (*(int *)(lVar1 + 0x8c) < 0) {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
        if (*(int *)(lVar1 + 0x8c) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)(lVar1 + 0x8c));
        }
      }
      else {
        DestructItems<TTuple<unsigned_int,UE::CompositeCore::FExternalRenderTarget>,int>
                  (pTVar2,*(int *)(lVar1 + 0x88));
        *(undefined4 *)(lVar1 + 0x88) = 0;
      }
      uVar15 = 0;
      iVar13 = *(int *)((longlong)this + 8);
      uVar17 = uVar15;
      if (0 < iVar13) {
        do {
          uVar14 = (uint)uVar15;
          uVar8 = 0;
          if ((int)uVar14 < iVar13) {
            uVar8 = ~uVar14 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)this;
          TVar9 = FWeakObjectPtr::Pin((FWeakObjectPtr *)(lVar3 + uVar17));
          this_01 = *(UTexture **)TVar9.Object;
          *(undefined8 *)TVar9.Object = 0;
          if (local_res18 != (UObject *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject(local_res18);
            local_res18 = (UObject *)0x0;
          }
          if (this_01 != (UTexture *)0x0) {
            pFVar10 = UTexture::GetResource(this_01);
            if (pFVar10 != (FTextureResource *)0x0) {
              local_res8[0] = uVar14 + 100;
              pIVar11 = (IPooledRenderTarget *)
                        TSortedMap<unsigned_int,UE::CompositeCore::FExternalRenderTarget,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
                        ::Emplace<unsigned_int>(this_00,local_res8);
              TVar12 = CreateRenderTarget((FRHITexture *)&local_res20,(wchar_t *)pFVar10->_padding_)
              ;
              if (pIVar11 != TVar12.Reference) {
                pIVar4 = ((TRefCountPtr<IPooledRenderTarget> *)&pIVar11->_padding_)->Reference;
                ((TRefCountPtr<IPooledRenderTarget> *)&pIVar11->_padding_)->Reference =
                     (IPooledRenderTarget *)(TVar12.Reference)->_padding_;
                (TVar12.Reference)->_padding_ = 0;
                if (pIVar4 != (IPooledRenderTarget *)0x0) {
                  (**(code **)(pIVar4->_padding_ + 0x38))();
                }
              }
              if (local_res20 != (longlong *)0x0) {
                (**(code **)(*local_res20 + 0x38))();
              }
              (pIVar11->RenderTargetItem).TargetableTexture.Reference =
                   (FRHITexture *)((FWeakObjectPtr *)(lVar3 + uVar17))[1];
            }
            UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_01);
          }
          iVar13 = *(int *)((longlong)this + 8);
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar17 = uVar17 + 0x10;
        } while ((int)(uVar14 + 1) < iVar13);
      }
      this_02 = (FRenderWork *)(lVar1 + 0xa0);
      if (this != this_02) {
        if (*(char *)(lVar1 + 0x140) != '\0') {
          UE::CompositeCore::FRenderWork::~FRenderWork(this_02);
        }
        UE::CompositeCore::FRenderWork::FRenderWork(this_02,this);
        *(undefined1 *)(lVar1 + 0x140) = 1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16)
        ;
        return;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// ApplyPasses_Recursive @ 14ea7a7b0

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __thiscall
FCompositeCoreSceneViewExtension::ApplyPasses_Recursive
          (FCompositeCoreSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2,
          FPassInputArray *param_3,FPassInputArray *param_4,FPassContext *param_5,
          TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *param_6,
          FScopedExternalTextureMap *param_7,int param_8,int param_9,FPassTexture *param_10)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FCompositeCorePassProxy *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FPassTexture *pFVar12;
  undefined8 *puVar13;
  TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
  *this_00;
  int iVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  bool local_168;
  uint local_164;
  uint local_160;
  FPassInputArray local_158;
  uint local_128;
  uint local_124;
  uint local_120 [2];
  FCompositeCorePassProxy *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ERenderTargetLoadAction local_f8;
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  longlong local_e0;
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> local_d8;
  FPassTexture local_c8;
  TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
  *local_a8;
  uint *local_a0;
  uint *local_98;
  uint *local_90;
  TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
  *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  undefined1 local_58 [32];
  
  if (param_6->ArrayNum == 0) {
    pFVar16 = (param_6->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    return false;
  }
  local_110 = (param_3->OverrideOutput)._padding_;
  local_108 = (param_3->OverrideOutput)._padding_;
  local_100 = (param_3->OverrideOutput)._padding_;
  iVar14 = (param_3->Inputs).ArrayNum;
  local_f8 = (param_3->OverrideOutput).LoadAction;
  pFVar12 = (FPassTexture *)(param_3->Inputs).AllocatorInstance.Data;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = iVar14;
  if (iVar14 == 0) {
    local_e4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar14,0,&local_f0,iVar14,&local_e4);
    ConstructItems<UE::CompositeCore::FPassTexture,UE::CompositeCore::FPassTexture,int>
              (local_f0.Data,pFVar12,iVar14);
  }
  local_128 = FSceneView::GetViewKey(param_2);
  local_88 = &this->CachedOutputsPerView_RenderThread;
  local_a8 = TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
             ::FindOrAddImpl<unsigned_int>(local_88,&local_128);
  iVar14 = param_6->ArrayNum;
  local_160 = 0;
  if (0 < iVar14) {
    local_e0 = 0;
    do {
      lVar6 = local_e0;
      uVar10 = local_160;
      uVar15 = 0;
      if ((int)local_160 < iVar14) {
        uVar15 = ~local_160 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      iVar14 = local_e8;
      FVar5.Data = local_f0.Data;
      bVar7 = false;
      local_118 = *(FCompositeCorePassProxy **)((param_6->AllocatorInstance).Data + lVar6);
      if (param_9 == 0) {
        bVar7 = uVar10 == param_6->ArrayNum - 1U;
      }
      local_168 = param_9 == 0 && uVar10 == param_8;
      local_158.OverrideOutput._padding_ = local_110;
      local_158.OverrideOutput._padding_ = local_108;
      local_158.OverrideOutput._padding_ = local_100;
      local_158.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.OverrideOutput.LoadAction = local_f8;
      local_158.Inputs.ArrayNum = local_e8;
      if (local_e8 == 0) {
        local_158.Inputs.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,local_e8,0,&local_158.Inputs.AllocatorInstance,local_e8,
                   &local_158.Inputs.ArrayMax);
        ConstructItems<UE::CompositeCore::FPassTexture,UE::CompositeCore::FPassTexture,int>
                  (local_158.Inputs.AllocatorInstance.Data,(FPassTexture *)FVar5.Data,iVar14);
      }
      uVar17 = 0;
      uVar18 = uVar17;
      uVar20 = uVar17;
      if (0 < (local_118->PassDeclaredInputs).ArrayNum) {
        do {
          pFVar3 = local_118;
          uVar19 = (uint)uVar20;
          uVar15 = ~uVar19 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar19 < (local_118->PassDeclaredInputs).ArrayNum) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          pFVar16 = (pFVar3->PassDeclaredInputs).AllocatorInstance.Data + uVar17;
          FVar1 = pFVar16[8];
          if ((2 < (ulonglong)(byte)FVar1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return (bool)uVar8;
          }
          FVar2 = pFVar16[8];
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCompositeCorePassProxy_const*___ptr64,UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const*___ptr64>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + (ulonglong)(byte)FVar1) == '\0') {
            if ((2 < (ulonglong)(byte)FVar2) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            FVar1 = pFVar16[8];
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const*___ptr64>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + (ulonglong)(byte)FVar2 + 4) == '\0') {
              if ((2 < (ulonglong)(byte)FVar1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const*___ptr64>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + (ulonglong)(byte)FVar1) == '\0') {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!\"Enclosing block should never be called\"",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\CompositeCoreSceneViewExtension.cpp"
                                   ,0x2b9,L"");
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                goto LAB_14ea7af41;
              }
              if ((pFVar16[8] != (FScriptContainerElement)0x0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              local_164 = *(uint *)pFVar16;
              if (pFVar16[4] == (FScriptContainerElement)0x0) {
                if (((int)local_164 < 0) || (local_e8 <= (int)local_164)) {
                  local_90 = &local_164;
                  bVar9 = `FCompositeCoreSceneViewExtension::ApplyPasses_Recursive'::__l44::
                          <lambda_4>::operator()(&local_90);
                  if (!bVar9) goto LAB_14ea7af41;
                }
                uVar10 = local_164;
                uVar11 = 0;
                if ((int)local_164 < local_e8) {
                  uVar11 = ~local_164 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                pFVar12 = (FPassTexture *)(local_f0.Data + (longlong)(int)uVar10 * 0x20);
                goto LAB_14ea7aeb1;
              }
              if (((int)local_164 < 0) || ((param_4->Inputs).ArrayNum <= (int)local_164)) {
                local_98 = &local_164;
                bVar9 = `FCompositeCoreSceneViewExtension::ApplyPasses_Recursive'::__l39::<lambda_3>
                        ::operator()(&local_98);
                if (!bVar9) goto LAB_14ea7af41;
              }
              pFVar12 = UE::CompositeCore::FPassInputArray::operator[](param_4,local_164);
              uVar10 = 0;
              if ((int)uVar19 < local_158.Inputs.ArrayNum) {
                uVar10 = uVar15;
              }
            }
            else {
              if ((FVar1 != (FScriptContainerElement)0x1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              local_124 = *(uint *)pFVar16;
              pFVar12 = TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                        ::Find(&param_7->Textures,local_124);
              if (pFVar12 == (FPassTexture *)0x0) {
                local_a0 = &local_124;
                bVar9 = `FCompositeCoreSceneViewExtension::ApplyPasses_Recursive'::__l27::<lambda_1>
                        ::operator()(&local_a0);
                if (!bVar9) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1))
                  {
                    if (2 < (byte)LogCompositeCore._0_1_) {
                      UE::Logging::Private::BasicLog<3>
                                ((FStaticBasicLogRecord *)&PTR_u_Compositing_may_152ff1460,
                                 (FLogCategoryBase *)&LogCompositeCore);
                    }
                    ThreadSafeOnce254 = 1;
                    _Init_thread_footer(&::_TSS0);
                  }
                  goto LAB_14ea7af41;
                }
              }
LAB_14ea7aeb1:
              uVar10 = 0;
              if ((int)uVar19 < local_158.Inputs.ArrayNum) {
                uVar10 = uVar15;
              }
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            *(FRDGTexture **)(local_158.Inputs.AllocatorInstance.Data + uVar18) =
                 (pFVar12->Texture).Texture;
            *(TIntPoint<int>_u_0 *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 8) =
                 (pFVar12->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
            *(TIntPoint<int>_u_0 *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 0x10) =
                 (pFVar12->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
            *(FResourceMetadata *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 0x18) =
                 pFVar12->Metadata;
          }
          else {
            if ((FVar2 != (FScriptContainerElement)0x2) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              uVar8 = (*pcVar4)();
              return (bool)uVar8;
            }
            pFVar3 = *(FCompositeCorePassProxy **)pFVar16;
            local_c8.Texture.Texture = (FRDGTexture *)0x0;
            local_c8.Texture.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
                 (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
            local_c8.Texture.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
                 (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
            local_c8.Metadata.bInvertedAlpha = false;
            local_c8.Metadata.bDistorted = false;
            local_c8.Metadata.bPreExposed = false;
            local_c8.Metadata.Encoding = Linear;
            pFVar12 = TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
                      ::Find(local_a8,pFVar3);
            if (pFVar12 == (FPassTexture *)0x0) {
              local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_d8.ArrayNum = 1;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,1,0,&local_d8.AllocatorInstance,1,&local_d8.ArrayMax);
              *(FCompositeCorePassProxy **)local_d8.AllocatorInstance.Data = pFVar3;
              bVar9 = ApplyPasses_Recursive
                                (this,param_1,param_2,&local_158,param_4,param_5,&local_d8,param_7,
                                 -1,param_9 + 1,&local_c8);
              if (bVar9) {
                uVar10 = 0;
                if ((int)uVar19 < local_158.Inputs.ArrayNum) {
                  uVar10 = uVar15;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar4 = (code *)swi(3);
                  uVar8 = (*pcVar4)();
                  return (bool)uVar8;
                }
                *(FRDGTexture **)(local_158.Inputs.AllocatorInstance.Data + uVar18) =
                     local_c8.Texture.Texture;
                *(TIntPoint<int> *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 8) =
                     local_c8.Texture.ViewRect.field0_0x0._s_0.Min.field0_0x0;
                *(TIntPoint<int> *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 0x10) =
                     local_c8.Texture.ViewRect.field0_0x0._s_0.Max.field0_0x0;
                *(ulonglong *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 0x18) =
                     CONCAT44(local_c8.Metadata.Encoding,
                              CONCAT13(local_c8.Metadata._3_1_,
                                       CONCAT12(local_c8.Metadata.bPreExposed,
                                                local_c8.Metadata._0_2_)));
              }
            }
            else {
              uVar10 = 0;
              if ((int)uVar19 < local_158.Inputs.ArrayNum) {
                uVar10 = uVar15;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                uVar8 = (*pcVar4)();
                return (bool)uVar8;
              }
              *(FRDGTexture **)(local_158.Inputs.AllocatorInstance.Data + uVar18) =
                   (pFVar12->Texture).Texture;
              *(TIntPoint<int>_u_0 *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 8) =
                   (pFVar12->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
              *(TIntPoint<int>_u_0 *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 0x10) =
                   (pFVar12->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
              *(FResourceMetadata *)(local_158.Inputs.AllocatorInstance.Data + uVar18 + 0x18) =
                   pFVar12->Metadata;
            }
          }
LAB_14ea7af41:
          uVar17 = uVar17 + 0x10;
          uVar18 = uVar18 + 0x20;
          uVar20 = (ulonglong)(uVar19 + 1);
          uVar10 = local_160;
        } while ((int)(uVar19 + 1) < (local_118->PassDeclaredInputs).ArrayNum);
      }
      if (local_168) {
        param_5->bOutputSceneColor = true;
      }
      if (!bVar7) {
        local_67 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_63 = 0;
        local_158.OverrideOutput._padding_ = 0;
        local_158.OverrideOutput._padding_ = 0;
        local_61 = 0;
        local_80 = 0;
        local_68 = 0;
        local_158.OverrideOutput._padding_ = 0;
        local_158.OverrideOutput.LoadAction = ENoAction;
      }
      puVar13 = (undefined8 *)
                (**(code **)(local_118->_padding_ + 0x10))
                          (local_118,local_58,param_1,param_2,&local_158,param_5);
      (param_10->Texture).Texture = (FRDGTexture *)*puVar13;
      (param_10->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
           *(TIntPoint<int>_u_0 *)(puVar13 + 1);
      (param_10->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
           *(TIntPoint<int>_u_0 *)(puVar13 + 2);
      param_10->Metadata = *(FResourceMetadata *)(puVar13 + 3);
      local_120[0] = FSceneView::GetViewKey(param_2);
      this_00 = TSortedMap<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
                ::FindOrAddImpl<unsigned_int>(local_88,local_120);
      TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>
      ::Emplace<FCompositeCorePassProxy_const_*_const_&,UE::CompositeCore::FPassTexture_const_&>
                (this_00,&local_118,param_10);
      if ((local_e8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      *(FRDGTexture **)local_f0.Data = (param_10->Texture).Texture;
      *(TIntPoint<int>_u_0 *)(local_f0.Data + 8) =
           (param_10->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
      *(TIntPoint<int>_u_0 *)(local_f0.Data + 0x10) =
           (param_10->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
      *(FResourceMetadata *)(local_f0.Data + 0x18) = param_10->Metadata;
      if (local_158.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Inputs.AllocatorInstance.Data);
      }
      local_160 = uVar10 + 1;
      iVar14 = param_6->ArrayNum;
      local_e0 = local_e0 + 8;
    } while ((int)local_160 < iVar14);
  }
  if ((FPassTexture *)local_f0.Data != (FPassTexture *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  pFVar16 = (param_6->AllocatorInstance).Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  return true;
}

// ApplyPreprocessing @ 14ea7b160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::ApplyPreprocessing
          (FCompositeCoreSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  FRDGViewableResource **ppFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FRenderWork *pFVar7;
  FPassTexture *pFVar8;
  FPassTexture *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<FRDGViewableResource_*> FVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [2];
  uint local_134;
  FRDGTexture *local_130;
  TIntPoint<int>_u_0 local_128;
  TIntPoint<int>_u_0 TStack_120;
  undefined1 local_118;
  ForAnyElementType local_110;
  undefined8 local_108;
  FScriptContainerElement *local_100;
  FRenderWork *local_f8;
  FScriptContainerElement *local_f0;
  FScopedExternalTextureMap local_e8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  TIntPoint<int>_u_0 local_78;
  TIntPoint<int>_u_0 TStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  pFVar7 = GetRenderWork(this);
  if ((pFVar7->PreprocessingPasses).Pairs.ArrayNum != 0) {
    local_98 = 0;
    local_88 = 0;
    local_78 = (TIntPoint<int>_u_0)0x0;
    TStack_70 = (TIntPoint<int>_u_0)0x0;
    local_68 = 0;
    local_64 = 0;
    local_90 = 1;
    local_80 = 1;
    local_f8 = pFVar7;
    UE::CompositeCore::FScopedExternalTextureMap::FScopedExternalTextureMap
              (&local_e8,this,param_1,param_2);
    local_134 = (pFVar7->PreprocessingPasses).Pairs.ArrayNum;
    uVar11 = (ulonglong)(int)local_134;
    pFVar15 = (pFVar7->PreprocessingPasses).Pairs.AllocatorInstance.Data;
    pFVar12 = pFVar15 + uVar11 * 0x18;
    pFVar16 = pFVar15 + 0x10;
    local_f0 = pFVar12;
    while( true ) {
      local_100 = pFVar15;
      if ((pFVar7->PreprocessingPasses).Pairs.ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar15 == pFVar12) break;
      pFVar8 = TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
               ::Find(&local_e8.Textures,*(int *)pFVar15);
      if (pFVar8 == (FPassTexture *)0x0) {
        local_138 = 0;
        bVar4 = `FCompositeCoreSceneViewExtension::ApplyPreprocessing'::__l10::<lambda_1>::
                operator()(&local_138);
        if (bVar4) goto LAB_14ea7b25c;
      }
      else {
LAB_14ea7b25c:
        uVar14 = 0;
        local_130 = (FRDGTexture *)0x0;
        local_118 = 0;
        local_110.Data = (FScriptContainerElement *)0x0;
        local_128 = (TIntPoint<int>_u_0)0x0;
        TStack_120 = (TIntPoint<int>_u_0)0x0;
        local_108 = 0;
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_110,(int *)((longlong)&local_108 + 4));
        local_108 = CONCAT44(local_108._4_4_,iVar5 + 1);
        lVar10 = (longlong)iVar5 * 0x20;
        *(FRDGTexture **)(local_110.Data + lVar10) = (pFVar8->Texture).Texture;
        *(TIntPoint<int>_u_0 *)(local_110.Data + lVar10 + 8) =
             (pFVar8->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
        *(TIntPoint<int>_u_0 *)(local_110.Data + lVar10 + 0x10) =
             (pFVar8->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
        *(FResourceMetadata *)(local_110.Data + lVar10 + 0x18) = pFVar8->Metadata;
        iVar5 = *(int *)pFVar16;
        if (0 < iVar5) {
          lVar10 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar14 < iVar5) {
              uVar6 = ~uVar14 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            plVar2 = *(longlong **)(lVar10 + *(longlong *)(pFVar16 + -8));
            if (*(char *)((longlong)plVar2 + 0x1c) == '\0') {
LAB_14ea7b38e:
              local_130 = (FRDGTexture *)0x0;
              local_128 = (TIntPoint<int>_u_0)0x0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a7 = 0;
              TStack_120 = (TIntPoint<int>_u_0)0x0;
              local_78 = (pFVar8->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
              TStack_70 = (pFVar8->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
              local_a3 = 0;
              local_a1 = 0;
              local_c0 = 0;
              local_a8 = 0;
            }
            else {
              pFVar9 = TSortedMap<int,UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                       ::Find(&local_e8.Textures,(int)plVar2[3]);
              if (pFVar9 == (FPassTexture *)0x0) {
                local_137 = 0;
                bVar4 = `FCompositeCoreSceneViewExtension::ApplyPreprocessing'::__l18::<lambda_2>::
                        operator()(&local_137);
                if (!bVar4) goto LAB_14ea7b38e;
              }
              local_130 = (pFVar9->Texture).Texture;
              local_128 = (pFVar9->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
              TStack_120 = (pFVar9->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
              local_78 = (pFVar9->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0;
              TStack_70 = (pFVar9->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0;
            }
            local_118 = 0;
            (**(code **)(*plVar2 + 0x10))(plVar2,&local_58,param_1,param_2,&local_130,&local_98);
            if (((int)local_108 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar14 = uVar14 + 1;
            lVar10 = lVar10 + 8;
            *(undefined8 *)local_110.Data = local_58;
            *(undefined8 *)(local_110.Data + 8) = local_50;
            *(undefined8 *)(local_110.Data + 0x10) = local_48;
            *(undefined8 *)(local_110.Data + 0x18) = local_40;
            iVar5 = *(int *)pFVar16;
            pFVar12 = local_f0;
            pFVar15 = local_100;
            pFVar7 = local_f8;
          } while ((int)uVar14 < iVar5);
        }
        if (local_110.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data);
        }
      }
      uVar11 = (ulonglong)local_134;
      pFVar15 = pFVar15 + 0x18;
      pFVar16 = pFVar16 + 0x18;
    }
    iVar5 = local_e8.RestoreToExternal.ArrayNum;
    ppFVar1 = local_e8.RestoreToExternal.AllocatorInstance.Data + iVar5;
    FVar13.Data = local_e8.RestoreToExternal.AllocatorInstance.Data;
    while( true ) {
      if (local_e8.RestoreToExternal.ArrayNum != iVar5) {
        `TCheckedPointerIterator<FRDGViewableResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_136);
      }
      if (FVar13.Data == ppFVar1) break;
      FRDGBuilder::UseExternalAccessMode(local_e8.GraphBuilder,*FVar13.Data,SRVMask,Graphics);
      FVar13.Data = FVar13.Data + 1;
    }
    if (local_e8.RestoreToExternal.AllocatorInstance.Data != (FRDGViewableResource **)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
                (local_e8.RestoreToExternal.AllocatorInstance.Data);
    }
    if (local_e8.Textures.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Textures.Pairs.AllocatorInstance.Data);
    }
  }
  return;
}

// BeginRenderViewFamily @ 14ea7b620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::BeginRenderViewFamily
          (FCompositeCoreSceneViewExtension *this,FSceneViewFamily *param_1)

{
  FSceneView *this_00;
  uint *puVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  double dVar4;
  TConsoleVariableData<int> *pTVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar7;
  void *pvVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ESceneCaptureSource *pEVar13;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar14;
  ulonglong uVar15;
  longlong lVar16;
  FCustomRenderPassBase *this_01;
  UObject *pUVar17;
  byte bVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  undefined1 *puVar21;
  ForElementType<FSetElementId> FVar22;
  uint uVar23;
  char cVar24;
  undefined1 *puVar25;
  char cVar26;
  uint uVar27;
  uint uVar28;
  ForElementType<unsigned_int> FVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint *puVar32;
  undefined1 uVar33;
  int iVar34;
  undefined1 auStackY_598 [32];
  undefined1 local_568 [4];
  int local_564;
  int local_560;
  uint local_55c;
  FWeakObjectPtr local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  uint uStack_538;
  int iStack_534;
  int local_530;
  undefined4 uStack_52c;
  int iStack_528;
  undefined4 uStack_524;
  uint local_520 [2];
  FCompositeCoreSceneViewExtension *local_518;
  FSceneViewFamily *local_510;
  int local_508;
  uint uStack_504;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_500;
  undefined4 local_4f8;
  int iStack_4f4;
  int iStack_4f0;
  undefined4 uStack_4ec;
  UObject *local_4e8;
  TIntPoint<int>_u_0 local_4e0;
  int local_4d8;
  undefined4 uStack_4d4;
  longlong local_4d0;
  int local_4c8;
  undefined1 local_4c4;
  undefined1 local_4c0;
  int local_4bc;
  undefined1 local_4b8;
  int local_4b4;
  char local_4b0;
  undefined1 local_4ac;
  int local_4a8;
  undefined1 local_4a4;
  int local_4a0;
  int local_49c;
  undefined4 local_498;
  int local_494;
  FPrimitiveComponentId local_490 [2];
  UObject *local_488;
  longlong *local_480;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_478;
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_458;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_450;
  undefined8 uStack_430;
  FSparseArrayAllocationInfo local_428;
  FString local_418;
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_408;
  undefined8 uStack_400;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  int local_3e0;
  undefined4 uStack_3dc;
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_3d8;
  undefined8 uStack_3d0;
  TBitArray<FDefaultBitArrayAllocator> *local_3c8;
  undefined4 uStack_3c0;
  int iStack_3bc;
  uint uStack_3b8;
  int iStack_3b4;
  undefined8 uStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  double dStack_330;
  undefined4 local_30c;
  TVector<double>_u_0 local_308;
  TMatrix<double> local_2e8;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1e8;
  void *local_1a8;
  undefined4 local_1a0;
  TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>_u_0
  local_198;
  FEngineShowFlags local_148;
  undefined8 local_108;
  AActor *pAStack_100;
  int local_f0;
  undefined1 local_ec;
  undefined1 local_ea;
  FCustomRenderPassBase *local_e8;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_598;
  local_518 = this;
  local_510 = param_1;
  bVar9 = IsActiveForViewFamily(this,param_1);
  if (bVar9) {
    if ((this->MainRenderMode).bIsSet != false) {
      pEVar13 = TOptional<enum_ESceneCaptureSource>::GetValue(&this->MainRenderMode);
      param_1->SceneCaptureSource = *pEVar13;
    }
    local_488 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_488 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_488);
    }
    local_558.ObjectIndex = 0;
    local_558.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_488 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_488);
    }
    FWeakObjectPtr::operator=(&local_558,(FObjectPtr)&local_488);
    bVar9 = FWeakObjectPtr::IsValid(&local_558);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorldPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\CompositeCoreSceneViewExtension.cpp"
                           ,0x123,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar4 = __real_3e45798ee0000000;
    local_55c = 0;
    if (0 < (param_1->Views).ArrayNum) {
      local_4d0 = 0;
      do {
        lVar19 = local_4d0;
        puVar25 = &(this->CompositePrimitives).Elements.field_0x10;
        uVar28 = 0;
        uVar10 = uVar28;
        if ((int)local_55c < (param_1->Views).ArrayNum) {
          uVar10 = ~local_55c >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_530 = 0;
        this_00 = *(FSceneView **)((param_1->Views).AllocatorInstance.Data + lVar19);
        local_d8._0_8_ = (FScriptContainerElement *)0x0;
        local_b8 = (ForElementType<unsigned_int>)0x0;
        local_b0 = 0;
        local_a4 = 0;
        local_98.Data = (FScriptContainerElement *)0x0;
        local_90 = 0;
        uVar10 = 1;
        local_d8._8_8_ = 0;
        local_ac = 0x80;
        local_a8 = -1;
        iVar11 = *(int *)&(this->CompositePrimitives).Elements.field_0x28;
        iStack_534 = 0;
        if (iVar11 != 0) {
          puVar1 = *(uint **)&(this->CompositePrimitives).Elements.field_0x20;
          puVar32 = (uint *)puVar25;
          if (puVar1 != (uint *)0x0) {
            puVar32 = puVar1;
          }
          uVar23 = *puVar32;
          uVar28 = 0;
          while (uVar23 == 0) {
            lVar19 = (longlong)(int)uVar28;
            local_530 = local_530 + 0x20;
            uVar28 = uVar28 + 1;
            iStack_534 = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
            goto LAB_14ea7b8ad;
            uVar23 = puVar32[lVar19 + 1];
          }
          uVar10 = -uVar23 & uVar23;
          uVar30 = (ulonglong)uVar10 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_4a0 = (int)lVar19;
          iStack_534 = local_530 + -1 + local_4a0;
          if (iVar11 < iStack_534) {
            iStack_534 = iVar11;
          }
        }
LAB_14ea7b8ad:
        uVar23 = *(uint *)&(this->CompositePrimitives).Elements.field_0x28;
        bVar18 = (byte)uVar23 & 0x1f;
        uStack_52c = local_30c;
        iStack_528 = *(int *)&(this->CompositePrimitives).Elements.field_0x8 -
                     *(int *)&(this->CompositePrimitives).Elements.field_0x34;
        uVar27 = uVar23 & 0xffffffe0;
        uStack_548 = (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uVar10,uVar28);
        TStack_450.CurrentBitIndex = iStack_534;
        TStack_450.UnvisitedBitMask = 0xffffffff;
        iVar34 = (int)uVar23 >> 5;
        uVar28 = -1 << bVar18;
        local_550 = CONCAT44(1 << bVar18,iVar34);
        local_540 = CONCAT44(uVar23,uVar28);
        TStack_450._padding_ = (longlong)uStack_548;
        TStack_450._28_4_ = local_30c;
        TStack_450.BaseBitIndex = local_530;
        uStack_430 = CONCAT44(uStack_524,iStack_528);
        uStack_548 = (TBitArray<FDefaultBitArrayAllocator> *)puVar25;
        uStack_538 = uVar27;
        local_458 = &this->CompositePrimitives;
        TStack_450.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar25;
        if ((((int)uVar23 < 0) || (iVar11 < (int)uVar23)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar6 = uStack_548;
        uVar10 = *(uint *)&(this->CompositePrimitives).Elements.field_0x28;
        if (uVar23 != uVar10) {
          puVar25 = *(undefined1 **)&(this->CompositePrimitives).Elements.field_0x20;
          puVar21 = &(this->CompositePrimitives).Elements.field_0x10;
          if (puVar25 != (undefined1 *)0x0) {
            puVar21 = puVar25;
          }
          uVar28 = uVar28 & *(uint *)(puVar21 + (longlong)iVar34 * 4);
          while (uVar28 == 0) {
            uStack_538 = uVar27 + 0x20;
            lVar19 = (longlong)iVar34;
            iVar34 = iVar34 + 1;
            uVar30 = (ulonglong)local_550 >> 0x20;
            local_550 = CONCAT44((int)uVar30,iVar34);
            if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
            goto LAB_14ea7b9fd;
            uVar28 = *(uint *)(puVar21 + lVar19 * 4 + 4);
            local_540 = 0xffffffff;
            uVar27 = uStack_538;
          }
          local_550 = CONCAT44(-uVar28 & uVar28,(undefined4)local_550);
          uVar30 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_49c = (int)lVar19;
          iVar11 = (uVar27 - 1) + local_49c;
          local_540 = CONCAT44(iVar11,(undefined4)local_540);
          if ((int)uVar10 < iVar11) {
LAB_14ea7b9fd:
            local_540 = CONCAT44(uVar10,(undefined4)local_540);
          }
        }
        local_408 = &this->CompositePrimitives;
        uStack_3e8 = CONCAT44(iStack_534,uStack_538);
        local_3e0 = *(int *)&(this->CompositePrimitives).Elements.field_0x8 -
                    *(int *)&(this->CompositePrimitives).Elements.field_0x34;
        uStack_400 = local_550;
        pTStack_3f8 = uStack_548;
        uStack_3f0 = local_540;
        uStack_3d0 = local_550;
        uStack_3b0 = CONCAT44(uStack_3dc,local_3e0);
        local_3c8 = uStack_548;
        uStack_3c0 = (undefined4)local_540;
        iStack_3bc = (int)((ulonglong)local_540 >> 0x20);
        iVar11 = iStack_3bc;
        uStack_3b8 = uStack_538;
        iStack_3b4 = iStack_534;
        local_3d8 = local_408;
        while( true ) {
          pTVar7 = local_458;
          if (*(int *)&(local_458->Elements).field_0x8 - *(int *)&(local_458->Elements).field_0x34
              != (int)uStack_430) {
            local_568[0] = 0;
            `TSparseArray<TSparseSetElement<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_568);
          }
          this = local_518;
          pTVar5 = CVarCompositeCoreDebugDilationSize.Ref;
          if (((TStack_450.CurrentBitIndex == iVar11) && (TStack_450.Array == pTVar6)) &&
             (pTVar7 == local_3d8)) break;
          TVar14 = FWeakObjectPtr::Pin((FWeakObjectPtr *)
                                       ((longlong)TStack_450.CurrentBitIndex * 0x10 +
                                       *(longlong *)&pTVar7->Elements));
                    /* WARNING: Load size is inaccurate */
          pUVar17 = *TVar14.Object;
          *(undefined8 *)TVar14.Object = 0;
          if (local_4e8 != (UObject *)0x0) {
            UEStrongObjectPtr_Private::ReleaseUObject(local_4e8);
            local_4e8 = (UObject *)0x0;
          }
          if (pUVar17 != (UObject *)0x0) {
            if ((char)pUVar17[0xf].field_0x24 < '\0') {
              uVar28 = *(uint *)&pUVar17[0x14].field_0x24;
              if (*(int *)((longlong)&(this_00->ShowOnlyPrimitives).field0_0x0 + 0xc) == -1) {
                if (*(int *)&(this_00->HiddenPrimitives).Elements.field_0x8 !=
                    *(int *)&(this_00->HiddenPrimitives).Elements.field_0x34) {
                  FVar2 = (this_00->HiddenPrimitives).Hash.SecondaryData;
                  FVar22 = (ForElementType<FSetElementId>)&(this_00->HiddenPrimitives).Hash;
                  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
                    FVar22 = FVar2;
                  }
                  iVar34 = *(int *)((longlong)FVar22 +
                                   (ulonglong)((this_00->HiddenPrimitives).HashSize - 1U & uVar28) *
                                   4);
                  if (iVar34 != -1) {
                    lVar19 = *(longlong *)&(this_00->HiddenPrimitives).Elements;
                    do {
                      if (*(uint *)(lVar19 + (longlong)iVar34 * 0xc) == uVar28) goto LAB_14ea7bf82;
                      iVar34 = *(int *)(lVar19 + 4 + (longlong)iVar34 * 0xc);
                    } while (iVar34 != -1);
                  }
                }
                local_520[0] = uVar28;
                TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                ::Emplace<FPrimitiveComponentId>
                          ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                            *)local_d8,local_490,(bool *)local_520);
              }
              else if (*(int *)((longlong)&(this_00->ShowOnlyPrimitives).field0_0x0 + 8) !=
                       *(int *)((longlong)&(this_00->ShowOnlyPrimitives).field0_0x0 + 0x34)) {
                puVar25 = *(undefined1 **)
                           ((longlong)&(this_00->ShowOnlyPrimitives).field0_0x0 + 0x40);
                puVar21 = (undefined1 *)((longlong)&(this_00->ShowOnlyPrimitives).field0_0x0 + 0x38)
                ;
                if (puVar25 != (undefined1 *)0x0) {
                  puVar21 = puVar25;
                }
                iVar34 = *(int *)(puVar21 +
                                 (ulonglong)
                                 ((this_00->ShowOnlyPrimitives).field0_0x0.TypedValue.HashSize - 1U
                                 & uVar28) * 4);
                if (iVar34 != -1) {
                  lVar19 = *(longlong *)&(this_00->ShowOnlyPrimitives).field0_0x0;
LAB_14ea7bb50:
                  if (*(uint *)(lVar19 + (longlong)iVar34 * 0xc) != uVar28)
                  goto code_r0x00014ea7bb5b;
                  if (local_a4 == 0) {
                    iVar34 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0xc,4,1,(ForAnyElementType *)local_d8,(int *)(local_d8 + 8),
                                        (int *)(local_d8 + 0xc));
                    iVar12 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                       ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),1)
                    ;
                    FVar29 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
                    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
                      FVar29 = local_b8;
                    }
                    bVar18 = (byte)iVar12 & 0x1f;
                    if (iVar12 < 0) {
                      iVar12 = iVar12 + 0x1f;
                      bVar18 = bVar18 - 0x20;
                    }
                    puVar1 = (uint *)((longlong)FVar29 + (longlong)(iVar12 >> 5) * 4);
                    *puVar1 = *puVar1 & ~(1 << (bVar18 & 0x1f));
                    iVar12 = local_a8;
                  }
                  else {
                    local_a4 = local_a4 + -1;
                    iVar12 = *(int *)(local_d8._0_8_ + (longlong)local_a8 * 0xc + 4);
                    iVar34 = local_a8;
                    if (local_a4 != 0) {
                      *(undefined4 *)(local_d8._0_8_ + (longlong)iVar12 * 0xc) = 0xffffffff;
                    }
                  }
                  local_a8 = iVar12;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)local_d8,&local_428,iVar34);
                  pvVar8 = local_428.Pointer;
                  if (local_428.Pointer != (TSparseSetElement<FPrimitiveComponentId> *)0x0) {
                    *(uint *)local_428.Pointer = uVar28;
                    *(undefined4 *)((longlong)local_428.Pointer + 4) = 0xffffffff;
                  }
                  uVar28 = *(uint *)local_428.Pointer;
                  local_564 = local_428.Index;
                  bVar9 = TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                          ::TryReplaceExisting
                                    ((TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                                      *)local_d8,uVar28,local_428.Pointer,&local_564,(bool *)0x0);
                  if (bVar9) goto LAB_14ea7bf82;
                  uVar23 = 1;
                  uVar10 = local_d8._8_4_ - local_a4;
                  if (3 < uVar10) {
                    uVar30 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
                    lVar19 = 0x3f;
                    if (uVar30 != 0) {
                      for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                      }
                    }
                    local_498 = (undefined4)lVar19;
                    uVar23 = 1 << ((byte)lVar19 & 0x1f);
                  }
                  if (((int)uVar10 < 1) || ((int)uVar23 <= (int)local_90)) {
                    uVar28 = local_90 - 1 & uVar28;
                    *(uint *)((longlong)pvVar8 + 8) = uVar28;
                    FVar20.Data = (FScriptContainerElement *)local_a0;
                    if ((ForElementType<FSetElementId>)local_98.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      FVar20.Data = local_98.Data;
                    }
                    uVar30 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar28;
                    *(undefined4 *)((longlong)pvVar8 + 4) =
                         *(undefined4 *)((longlong)FVar20.Data + uVar30 * 4);
                    *(int *)((longlong)FVar20.Data + uVar30 * 4) = local_564;
                  }
                  else {
                    local_90 = uVar23;
                    if ((ForElementType<FSetElementId>)local_98.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_98,0,0,4);
                    }
                    if (uVar23 != 0) {
                      uVar28 = uVar23;
                      if (uVar23 < 2) {
                        if ((ForElementType<FSetElementId>)local_98.Data !=
                            (ForElementType<FSetElementId>)0x0) {
                          uVar28 = 0;
                          goto LAB_14ea7bd0c;
                        }
                      }
                      else {
LAB_14ea7bd0c:
                        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_98,0,uVar28,4);
                      }
                      if (0 < (int)uVar23) {
                        uVar31 = (ulonglong)uVar23;
                        uVar30 = 0;
                        do {
                          FVar20.Data = (FScriptContainerElement *)local_a0;
                          if ((ForElementType<FSetElementId>)local_98.Data !=
                              (ForElementType<FSetElementId>)0x0) {
                            FVar20.Data = local_98.Data;
                          }
                          uVar15 = uVar30 & (longlong)(int)uVar23 - 1U;
                          uVar30 = uVar30 + 1;
                          *(undefined4 *)((longlong)FVar20.Data + uVar15 * 4) = 0xffffffff;
                          uVar31 = uVar31 - 1;
                        } while (uVar31 != 0);
                      }
                    }
                    if (local_90 == 0) goto LAB_14ea7bf82;
                    pTStack_500 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
                    uStack_504 = 1;
                    local_508 = 0;
                    iStack_4f4 = 0;
                    iStack_4f0 = 0;
                    if (local_b0 != 0) {
                      FVar29 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
                      if (local_b8 != (ForElementType<unsigned_int>)0x0) {
                        FVar29 = local_b8;
                      }
                      uVar28 = *(uint *)FVar29;
                      iStack_4f0 = 0;
                      local_508 = 0;
                      while (uVar28 == 0) {
                        iStack_4f0 = iStack_4f0 + 0x20;
                        lVar19 = (longlong)local_508;
                        local_508 = local_508 + 1;
                        if ((int)(local_b0 + -1 + (local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_508)
                        goto LAB_14ea7be2d;
                        uVar28 = ((uint *)((longlong)FVar29 + 4))[lVar19];
                      }
                      uStack_504 = -uVar28 & uVar28;
                      uVar30 = (ulonglong)uStack_504 * 2 + 1;
                      lVar19 = 0x3f;
                      if (uVar30 != 0) {
                        for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                        }
                      }
                      local_494 = (int)lVar19;
                      iStack_4f4 = local_494 + -1 + iStack_4f0;
                      if (iStack_4f4 <= local_b0) goto LAB_14ea7be34;
LAB_14ea7be2d:
                      iStack_4f4 = local_b0;
                    }
LAB_14ea7be34:
                    local_4f8 = 0xffffffff;
                    local_480 = (longlong *)local_d8;
                    local_478._padding_ = CONCAT44(uStack_504,local_508);
                    local_478.CurrentBitIndex = iStack_4f4;
                    local_478.UnvisitedBitMask = 0xffffffff;
                    local_478._28_4_ = uStack_4ec;
                    local_478.BaseBitIndex = iStack_4f0;
                    local_478.Array = pTStack_500;
                    iVar34 = iStack_4f4;
                    if (iStack_4f4 < local_b0) {
                      do {
                        lVar19 = *local_480;
                        lVar16 = (longlong)iVar34;
                        uVar28 = local_90 - 1 & *(uint *)(lVar19 + lVar16 * 0xc);
                        *(uint *)(lVar19 + 8 + lVar16 * 0xc) = uVar28;
                        FVar20.Data = (FScriptContainerElement *)local_a0;
                        if ((ForElementType<FSetElementId>)local_98.Data !=
                            (ForElementType<FSetElementId>)0x0) {
                          FVar20.Data = local_98.Data;
                        }
                        uVar30 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar28;
                        *(undefined4 *)(lVar19 + 4 + lVar16 * 0xc) =
                             *(undefined4 *)((longlong)FVar20.Data + uVar30 * 4);
                        *(int *)((longlong)FVar20.Data + uVar30 * 4) = iVar34;
                        local_478.UnvisitedBitMask =
                             local_478.UnvisitedBitMask & ~local_478._padding_._4_4_;
                        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_478)
                        ;
                        iVar34 = local_478.CurrentBitIndex;
                      } while (local_478.CurrentBitIndex < (local_478.Array)->NumBits);
                    }
                  }
                }
              }
            }
LAB_14ea7bf82:
            UEStrongObjectPtr_Private::ReleaseUObject(pUVar17);
          }
          TStack_450.UnvisitedBitMask = TStack_450.UnvisitedBitMask & ~TStack_450._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_450);
        }
        if (local_d8._8_4_ == local_a4) {
          local_90 = 0;
          param_1 = local_510;
          if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free(local_98.Data);
            this = local_518;
            param_1 = local_510;
          }
        }
        else {
          if ((local_518->BuiltInRenderPassOptions).bIsSet == false) {
            cVar26 = '\0';
            cVar24 = '\x01';
            local_4c4 = 0;
            local_4c0 = 1;
            bVar9 = IsInParallelGameThread();
            if (((!bVar9) && (bVar9 = IsInGameThread(), !bVar9)) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6409875433831007945>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                   ,0x6c9,"GetShadowIndex() == 0"), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar11 = pTVar5->ShadowedValue[0];
            uVar33 = 1;
            local_4b8 = 1;
            iVar34 = local_4c8;
            local_4bc = iVar11;
          }
          else {
            local_4b0 = (local_518->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.
                        bIsSet;
            if ((bool)local_4b0 != false) {
              local_4b4 = (local_518->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.
                          TypedValue;
            }
            cVar24 = (local_518->BuiltInRenderPassOptions).TypedValue.bEnableUnlitViewmode;
            uVar33 = (local_518->BuiltInRenderPassOptions).TypedValue.bOpacifyOutput;
            iVar11 = (local_518->BuiltInRenderPassOptions).TypedValue.DilationSize;
            iVar34 = local_4b4;
            local_4ac = cVar24;
            local_4a8 = iVar11;
            local_4a4 = uVar33;
            cVar26 = local_4b0;
          }
          if (cVar26 != '\0') {
            local_560 = iVar34;
          }
          this_01 = ::operator_new(0xc0);
          if (this_01 == (FCustomRenderPassBase *)0x0) {
            this_01 = (FCustomRenderPassBase *)0x0;
          }
          else {
            local_4e0._s_0.X =
                 *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 8) -
                 *(int *)&(this_00->UnscaledViewRect).field0_0x0;
            local_4e0._s_0.Y =
                 *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 0xc) -
                 *(int *)((longlong)&(this_00->UnscaledViewRect).field0_0x0 + 4);
            ::FString::FString(&local_418,L"CompositeCoreCustomRenderPass");
            FCustomRenderPassBase::FCustomRenderPassBase
                      (this_01,&local_418,DepthAndBasePass,SceneColorAndAlpha,
                       (TIntPoint<int> *)&local_4e0._s_0);
            if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_418.Data.AllocatorInstance.Data);
            }
            this_01[1]._padding_ = (longlong)this;
            this_01->_padding_ = (longlong)&___7FCompositeCoreCustomRenderPass__6B_;
            uVar28 = FSceneView::GetViewKey(this_00);
            *(uint *)&this_01[1].DebugName.Data.AllocatorInstance.Data = uVar28;
            uStack_4d4 = CONCAT31(uStack_4d4._1_3_,uVar33);
            *(Type *)((longlong)&this_01[1].DebugName.Data.AllocatorInstance.Data + 4) =
                 this_00->FeatureLevel;
            this_01[1].DebugName.Data.ArrayNum = iVar11;
            this_01[1].DebugName.Data.ArrayMax = uStack_4d4;
            this_01->bSceneColorWithTranslucent = true;
            local_4d8 = iVar11;
          }
          FSceneInterface::FCustomRenderPassRendererInput::FCustomRenderPassRendererInput
                    ((FCustomRenderPassRendererInput *)&local_308._s_0);
          param_1 = local_510;
          FEngineShowFlags::operator=(&local_148,&local_510->EngineShowFlags);
          local_148.PostProcessing = 0;
          local_148.Refraction = 0;
          local_148.Translucency = 1;
          local_148.DynamicShadows = 0;
          local_148.LightFunctions = 0;
          local_148.Atmosphere = 0;
          local_148.AllowPrimitiveAlphaHoldout = 0;
          local_148.UnlitViewmode = -(uint)(cVar24 != '\0') >> 0xe;
          local_148.UnlitRichView = 0;
          local_148.Lighting = 0;
          if (cVar26 != '\0') {
            local_f0 = local_560;
            local_ea = 1;
          }
          local_308._s_0.X = (this_00->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
          local_308._s_0.Y = (this_00->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
          local_308._s_0.Z = (this_00->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
          dStack_330 = (this_00->ViewMatrices).ViewMatrix.M[3][3];
          local_3a8 = (this_00->ViewMatrices).ViewMatrix.M[0][0];
          dStack_3a0 = (this_00->ViewMatrices).ViewMatrix.M[0][1];
          local_398 = (this_00->ViewMatrices).ViewMatrix.M[0][2];
          dStack_390 = (this_00->ViewMatrices).ViewMatrix.M[0][3];
          local_388 = (this_00->ViewMatrices).ViewMatrix.M[1][0];
          dStack_380 = (this_00->ViewMatrices).ViewMatrix.M[1][1];
          local_378 = (this_00->ViewMatrices).ViewMatrix.M[1][2];
          dStack_370 = (this_00->ViewMatrices).ViewMatrix.M[1][3];
          local_368 = (this_00->ViewMatrices).ViewMatrix.M[2][0];
          dStack_360 = (this_00->ViewMatrices).ViewMatrix.M[2][1];
          local_358 = (this_00->ViewMatrices).ViewMatrix.M[2][2];
          dStack_350 = (this_00->ViewMatrices).ViewMatrix.M[2][3];
          local_348 = 0;
          uStack_340 = 0;
          local_2e8.M[3][0] = 0.0;
          local_2e8.M[3][1] = 0.0;
          local_338 = 0;
          local_2e8.M[3][2] = 0.0;
          local_2e8.M[0][0] = local_3a8;
          local_2e8.M[0][1] = dStack_3a0;
          local_2e8.M[0][2] = local_398;
          local_2e8.M[0][3] = dStack_390;
          local_2e8.M[1][0] = local_388;
          local_2e8.M[1][1] = dStack_380;
          local_2e8.M[1][2] = local_378;
          local_2e8.M[1][3] = dStack_370;
          local_2e8.M[2][0] = local_368;
          local_2e8.M[2][1] = dStack_360;
          local_2e8.M[2][2] = local_358;
          local_2e8.M[2][3] = dStack_350;
          local_2e8.M[3][3] = dStack_330;
          UE::Math::TMatrix<double>::RemoveScaling(&local_2e8,dVar4);
          local_268 = (this_00->ViewMatrices).ProjectionMatrix.M[0][0];
          dStack_260 = (this_00->ViewMatrices).ProjectionMatrix.M[0][1];
          local_258 = (this_00->ViewMatrices).ProjectionMatrix.M[0][2];
          dStack_250 = (this_00->ViewMatrices).ProjectionMatrix.M[0][3];
          local_248 = (this_00->ViewMatrices).ProjectionMatrix.M[1][0];
          dStack_240 = (this_00->ViewMatrices).ProjectionMatrix.M[1][1];
          local_238 = (this_00->ViewMatrices).ProjectionMatrix.M[1][2];
          dStack_230 = (this_00->ViewMatrices).ProjectionMatrix.M[1][3];
          local_228 = (this_00->ViewMatrices).ProjectionMatrix.M[2][0];
          dStack_220 = (this_00->ViewMatrices).ProjectionMatrix.M[2][1];
          local_218 = (this_00->ViewMatrices).ProjectionMatrix.M[2][2];
          dStack_210 = (this_00->ViewMatrices).ProjectionMatrix.M[2][3];
          local_208 = (this_00->ViewMatrices).ProjectionMatrix.M[3][0];
          dStack_200 = (this_00->ViewMatrices).ProjectionMatrix.M[3][1];
          local_1f8 = (this_00->ViewMatrices).ProjectionMatrix.M[3][2];
          dStack_1f0 = (this_00->ViewMatrices).ProjectionMatrix.M[3][3];
          local_108 = *(undefined8 *)&this_00->ViewActor;
          pAStack_100 = (this_00->ViewActor).Actor;
          local_198.TypedValue.HashSize = 0;
          if (local_198.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_198.TypedValue.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_198.TypedValue.Elements);
          local_198._0_8_ = 0;
          local_198._8_8_ = 0;
          local_198._32_8_ = 0;
          local_198._40_4_ = 0;
          local_198._44_4_ = 0x80;
          local_198._48_4_ = 0xffffffff;
          local_198._52_4_ = 0;
          local_198.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_198.TypedValue.HashSize = 0;
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          ::operator=(&local_198.TypedValue,
                      (TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                       *)local_d8);
          if ((local_198._12_4_ == -1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x171,
                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                ), bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_ec = 1;
          local_e8 = this_01;
          pUVar17 = FWeakObjectPtr::Get(&local_558);
          (**(code **)(**(longlong **)(pUVar17 + 0xf) + 0x530))
                    (*(longlong **)(pUVar17 + 0xf),param_1,&local_308);
          if (local_148.CustomShowFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_148.CustomShowFlags.AllocatorInstance.SecondaryData);
          }
          if (local_198._12_4_ != -1) {
            local_198.TypedValue.HashSize = 0;
            if (local_198.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_198.TypedValue.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_198.TypedValue.Elements);
          }
          local_1a0 = 0;
          if (local_1a8 != (void *)0x0) {
            FMemory::Free(local_1a8);
          }
          TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1e8);
          local_90 = 0;
          if ((ForElementType<FSetElementId>)local_98.Data != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free(local_98.Data);
          }
        }
        TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_d8);
        local_55c = local_55c + 1;
        local_4d0 = local_4d0 + 8;
      } while ((int)local_55c < (param_1->Views).ArrayNum);
    }
  }
  return;
code_r0x00014ea7bb5b:
  iVar34 = *(int *)(lVar19 + 4 + (longlong)iVar34 * 0xc);
  if (iVar34 == -1) goto LAB_14ea7bf82;
  goto LAB_14ea7bb50;
}

// CollectCustomRenderTarget @ 14ea7ca60

void __thiscall
FCompositeCoreSceneViewExtension::CollectCustomRenderTarget
          (FCompositeCoreSceneViewExtension *this,uint param_1,
          TRefCountPtr<IPooledRenderTarget> *param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = param_1;
  TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
  ::Emplace<unsigned_int_const_&,TRefCountPtr<IPooledRenderTarget>_const_&>
            (&this->CustomRenderTargetPerView_RenderThread,local_res10,param_2);
  return;
}

// GetPriority @ 14ea7ed80

int __thiscall FCompositeCoreSceneViewExtension::GetPriority(FCompositeCoreSceneViewExtension *this)

{
  UClass *this_00;
  
  this_00 = UCompositeCorePluginSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x10;
  }
  return *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x10;
}

// GetRenderWork @ 14ea7f010

FRenderWork * __thiscall
FCompositeCoreSceneViewExtension::GetRenderWork(FCompositeCoreSceneViewExtension *this)

{
  undefined1 local_res8 [32];
  
  if ((this->RenderWork_RenderThread).bIsSet != false) {
    return &(this->RenderWork_RenderThread).TypedValue;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `UE::CompositeCore::FRenderWork::GetDefault'::__l2::<lambda_1>::operator()
                (local_res8,&DefaultRenderWork);
      atexit(`UE::CompositeCore::FRenderWork::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__DefaultRenderWork__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DefaultRenderWork;
}

// IsActiveForView @ 14ea80610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FCompositeCoreSceneViewExtension::IsActiveForView
          (FCompositeCoreSceneViewExtension *this,FSceneView *param_1)

{
  bool bVar1;
  uint uVar2;
  TRefCountPtr<IPooledRenderTarget> *pTVar3;
  
  bVar1 = IsActiveForViewFamily(this,param_1->Family);
  uVar2 = FSceneView::GetViewKey(param_1);
  pTVar3 = TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           ::Find(&this->CustomRenderTargetPerView_RenderThread,uVar2);
  if ((pTVar3 == (TRefCountPtr<IPooledRenderTarget> *)0x0) &&
     ((this->ExternalInputs_RenderThread).Pairs.ArrayNum == 0)) {
    return false;
  }
  return bVar1;
}

// IsActiveForViewFamily @ 14ea80680

bool __thiscall
FCompositeCoreSceneViewExtension::IsActiveForViewFamily
          (FCompositeCoreSceneViewExtension *this,FSceneViewFamily *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  bool bVar5;
  
  bVar5 = (param_1->EngineShowFlags).AllowPrimitiveAlphaHoldout;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    if ((this->RenderWork_RenderThread).bIsSet == false) {
      return bVar5;
    }
    if (*(int *)&(this->RenderWork_RenderThread).TypedValue.AllowedViewModes.Elements.field_0x8 ==
        *(int *)&(this->RenderWork_RenderThread).TypedValue.AllowedViewModes.Elements.field_0x34) {
      return bVar5;
    }
    FVar4 = (this->RenderWork_RenderThread).TypedValue.AllowedViewModes.Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)
              &(this->RenderWork_RenderThread).TypedValue.AllowedViewModes.Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->RenderWork_RenderThread).TypedValue.AllowedViewModes.HashSize -
                     VMI_Wireframe & param_1->ViewMode) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->RenderWork_RenderThread).TypedValue.AllowedViewModes.Elements;
      while (*(EViewModeIndex *)(lVar1 + (longlong)iVar3 * 0xc) != param_1->ViewMode) {
        iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0xc);
        if (iVar3 == -1) {
          return false;
        }
      }
      goto LAB_14ea807bc;
    }
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return bVar5;
    }
    if (*(int *)&(this->AllowedViewModes).Elements.field_0x8 ==
        *(int *)&(this->AllowedViewModes).Elements.field_0x34) {
      return bVar5;
    }
    FVar4 = (this->AllowedViewModes).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->AllowedViewModes).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->AllowedViewModes).HashSize - VMI_Wireframe & param_1->ViewMode) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&(this->AllowedViewModes).Elements;
      do {
        if (*(EViewModeIndex *)(lVar1 + (longlong)iVar3 * 0xc) == param_1->ViewMode)
        goto LAB_14ea807bc;
        iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14ea807bc:
  return (bool)(iVar3 != -1 & bVar5);
}

// IsActiveThisFrame_Internal @ 14ea807f0

bool __thiscall
FCompositeCoreSceneViewExtension::IsActiveThisFrame_Internal
          (FCompositeCoreSceneViewExtension *this,FSceneViewExtensionContext *param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = FWorldSceneViewExtension::IsActiveThisFrame_Internal
                    ((FWorldSceneViewExtension *)this,param_1);
  if ((this->bHasCustomRenderWork == false) &&
     (*(int *)&(this->CompositePrimitives).Elements.field_0x8 ==
      *(int *)&(this->CompositePrimitives).Elements.field_0x34)) {
    bVar1 = false;
  }
  bVar2 = IsHDREnabled();
  return (bool)(!bVar2 & bVar1);
}

// PostProcessWork_RenderThread @ 14ea81220

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FScreenPassTexture * __thiscall
FCompositeCoreSceneViewExtension::PostProcessWork_RenderThread
          (FCompositeCoreSceneViewExtension *this,FScreenPassTexture *__return_storage_ptr__,
          FRDGBuilder *param_1,FSceneView *param_2,FPostProcessMaterialInputs *param_3,
          EPostProcessingPass param_4)

{
  FRDGViewableResource **ppFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  FPostProcessMaterialInputs *this_00;
  EPostProcessingPass EVar3;
  bool bVar4;
  FRenderWork *pFVar5;
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *this_01;
  FScreenPassTexture *pFVar6;
  int iVar7;
  longlong lVar8;
  ForElementType<FRDGViewableResource_*> FVar9;
  undefined1 local_f8 [8];
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> local_f0;
  FScopedExternalTextureMap local_e0;
  FPassTexture local_b8;
  FPassContext local_98;
  FPassInputArray local_58;
  
  this_00 = param_3;
  UE::CompositeCore::FScopedExternalTextureMap::FScopedExternalTextureMap
            (&local_e0,this,param_1,param_2);
  pFVar5 = GetRenderWork(this);
  EVar3 = param_4;
  this_01 = TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
            ::Find(&pFVar5->FramePasses,param_4);
  if (this_01 == (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x148,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FScreenPassTexture *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_98.SceneTextures.SceneTextures._0_8_ =
       *(undefined8 *)&(this_00->SceneTextures).SceneTextures;
  local_98.SceneTextures.SceneTextures._8_8_ =
       *(undefined8 *)&(this_00->SceneTextures).SceneTextures.field_0x8;
  local_98.SceneTextures.MobileSceneTextures._0_8_ =
       *(undefined8 *)&(this_00->SceneTextures).MobileSceneTextures;
  local_98.SceneTextures.MobileSceneTextures._8_8_ =
       *(undefined8 *)&(this_00->SceneTextures).MobileSceneTextures.field_0x8;
  lVar8 = 0xa0;
  if ((this_00->bUserSceneTexturesSet).Elements[0] == false) {
    lVar8 = 0x28;
  }
  local_98.Location = EVar3;
  local_98.OutputViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)(this_00->Textures).Elements + lVar8 + -0x20);
  local_98.OutputViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)
       *(TIntPoint<int>_u_0 *)((longlong)((this_00->Textures).Elements + -1) + lVar8);
  local_98.bOutputSceneColor = false;
  UE::CompositeCore::FPassInputArray::FPassInputArray(&local_58,param_1,param_2,this_00,&param_4);
  local_b8.Texture.Texture = (FRDGTexture *)0x0;
  local_b8.Texture.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0
  ;
  local_b8.Texture.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0
  ;
  local_b8.Metadata.bInvertedAlpha = false;
  local_b8.Metadata.bDistorted = false;
  local_b8.Metadata.bPreExposed = false;
  local_b8.Metadata.Encoding = Linear;
  param_4 = TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>::
            FindLastByPredicate<_FCompositeCoreSceneViewExtension::PostProcessWork_RenderThread_::__l2::<lambda_1>_>
                      (this_01,(<lambda_1>)(undefined1)param_4,this_01->ArrayNum);
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = this_01->ArrayNum;
  lVar8 = (longlong)local_f0.ArrayNum;
  _Src = (this_01->AllocatorInstance).Data;
  if (local_f0.ArrayNum == 0) {
    local_f0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_f0.ArrayNum,0,&local_f0.AllocatorInstance,local_f0.ArrayNum,
               &local_f0.ArrayMax);
    memcpy(local_f0.AllocatorInstance.Data,_Src,lVar8 << 3);
  }
  bVar4 = ApplyPasses_Recursive
                    (this,param_1,param_2,&local_58,&local_58,&local_98,&local_f0,&local_e0,param_4,
                     0,&local_b8);
  if (bVar4) {
    __return_storage_ptr__->Texture = local_b8.Texture.Texture;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>_u_0)local_b8.Texture.ViewRect.field0_0x0._s_0.Min.field0_0x0;
    (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>_u_0)local_b8.Texture.ViewRect.field0_0x0._s_0.Max.field0_0x0;
    if (local_58.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Inputs.AllocatorInstance.Data);
    }
    iVar7 = local_e0.RestoreToExternal.ArrayNum;
    ppFVar1 = local_e0.RestoreToExternal.AllocatorInstance.Data + iVar7;
    FVar9.Data = local_e0.RestoreToExternal.AllocatorInstance.Data;
    while( true ) {
      if (local_e0.RestoreToExternal.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FRDGViewableResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&param_3);
      }
      if (FVar9.Data == ppFVar1) break;
      FRDGBuilder::UseExternalAccessMode(local_e0.GraphBuilder,*FVar9.Data,SRVMask,Graphics);
      FVar9.Data = FVar9.Data + 1;
    }
  }
  else {
    FPostProcessMaterialInputs::ReturnUntouchedSceneColorForPostProcessing
              (this_00,__return_storage_ptr__,param_1);
    if (local_58.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Inputs.AllocatorInstance.Data);
    }
    iVar7 = local_e0.RestoreToExternal.ArrayNum;
    ppFVar1 = local_e0.RestoreToExternal.AllocatorInstance.Data + iVar7;
    FVar9.Data = local_e0.RestoreToExternal.AllocatorInstance.Data;
    while( true ) {
      if (local_e0.RestoreToExternal.ArrayNum != iVar7) {
        `TCheckedPointerIterator<FRDGViewableResource_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_f8);
      }
      if (FVar9.Data == ppFVar1) break;
      FRDGBuilder::UseExternalAccessMode(local_e0.GraphBuilder,*FVar9.Data,SRVMask,Graphics);
      FVar9.Data = FVar9.Data + 1;
    }
  }
  if (local_e0.RestoreToExternal.AllocatorInstance.Data != (FRDGViewableResource **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (local_e0.RestoreToExternal.AllocatorInstance.Data);
  }
  if (local_e0.Textures.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Textures.Pairs.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PostRenderViewFamily_RenderThread @ 14ea81510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::PostRenderViewFamily_RenderThread
          (FCompositeCoreSceneViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  return;
}

// PostRenderView_RenderThread @ 14ea81520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::PostRenderView_RenderThread
          (FCompositeCoreSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  int *piVar1;
  TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
  *pTVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  pTVar2 = &this->CustomRenderTargetPerView_RenderThread;
  uVar6 = FSceneView::GetViewKey(param_2);
  uVar10 = (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum;
  uVar8 = 0;
  pFVar9 = (pTVar2->Pairs).AllocatorInstance.Data;
  if (0 < (int)uVar10) {
    do {
      iVar7 = (uVar10 >> 1) + uVar8;
      if (*(uint *)(pFVar9 + (longlong)iVar7 * 0x10) < uVar6) {
        uVar8 = iVar7 + (uVar10 & 1);
      }
      uVar4 = uVar10 >> 1;
      uVar10 = uVar10 >> 1;
    } while (uVar4 != 0);
  }
  if ((((int)uVar8 < (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum) &&
      (*(uint *)(pFVar9 + (longlong)(int)uVar8 * 0x10) <= uVar6)) && (uVar8 != 0xffffffff)) {
    if (((int)uVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = (pTVar2->Pairs).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
    if (*(longlong **)(pFVar9 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(pFVar9 + 8) + 0x38))();
    }
    iVar7 = (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum + ~uVar8;
    if (iVar7 != 0) {
      memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar7 << 4);
    }
    piVar1 = &(this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(ForAnyElementType *)pTVar2,
               (this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayNum,
               &(this->CustomRenderTargetPerView_RenderThread).Pairs.ArrayMax);
  }
  return;
}

// PrePostProcessPass_RenderThread @ 14ea81640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::PrePostProcessPass_RenderThread
          (FCompositeCoreSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2,
          FPostProcessingInputs *param_3)

{
  IPooledRenderTarget *pIVar1;
  IPooledRenderTarget *pIVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  uint uVar6;
  TRefCountPtr<IPooledRenderTarget> *pTVar7;
  FPassTexture *pFVar8;
  FRDGTexture *pFVar9;
  TRefCountPtr<IPooledRenderTarget> *pTVar10;
  TIntPoint<int>_u_0 TVar11;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_108;
  undefined4 local_100;
  int local_fc [3];
  FPassInputArray local_f0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FPassTexture local_a8;
  FPassContext local_88;
  TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>
  local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar6 = FSceneView::GetViewKey(param_2);
  pTVar7 = TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           ::Find(&this->CustomRenderTargetPerView_RenderThread,uVar6);
  pTVar4 = CVarCompositeCoreApplyFXAA.Ref;
  if (pTVar7 != (TRefCountPtr<IPooledRenderTarget> *)0x0) {
    bVar5 = IsInParallelRenderingThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pTVar4->ShadowedValue[1] != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          local_fc[1] = 0;
          local_fc[2] = local_fc[2] & 0xffffff00;
          local_48._padding_ = (ulonglong)(uint)local_fc[2] << 0x20;
          local_48.TypeIndex = '\0';
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100 = 1;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,1,0,&local_108,1,local_fc);
          ConstructItems<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,int>
                    (local_108.Data,&local_48,1);
          FXAAPassProxy._padding_ = (longlong)local_108.Data;
          FXAAPassProxy._padding_ = (longlong)&___7FFXAAPassProxy_CompositeCore_UE__6B_;
          FXAAPassProxy._padding_._0_4_ = local_100;
          FXAAPassProxy._padding_._4_4_ = local_fc[0];
          FXAAPassProxy._padding_._4_1_ = 0;
          FXAAPassProxy.QualityOverride.bIsSet = false;
          atexit(`FCompositeCoreSceneViewExtension::PrePostProcessPass_RenderThread'::__l5::
                 _dynamic_atexit_destructor_for__FXAAPassProxy__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_f0.OverrideOutput._padding_ = 0;
      local_f0.OverrideOutput.LoadAction = ENoAction;
      local_f0.OverrideOutput._padding_ = 0;
      local_f0.OverrideOutput._padding_ = 0;
      local_f0.Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.Inputs.ArrayNum = 0;
      local_f0.Inputs.ArrayMax = 0;
      pFVar8 = TArray<UE::CompositeCore::FPassTexture,TSizedDefaultAllocator<32>_>::
               AddDefaulted_GetRef(&local_f0.Inputs);
      pFVar9 = FRDGBuilder::RegisterExternalTexture(param_1,pTVar7,None);
      local_b8 = 0;
      uStack_b0 = 0;
      if (pFVar9 == (FRDGTexture *)0x0) {
        TVar11 = (TIntPoint<int>_u_0)0x0;
      }
      else {
        TVar11 = *(TIntPoint<int>_u_0 *)&(pFVar9->Desc).field_0x24;
      }
      (pFVar8->Texture).Texture = pFVar9;
      (pFVar8->Texture).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
      (pFVar8->Texture).ViewRect.field0_0x0._s_0.Max.field0_0x0 = TVar11;
      UE::CompositeCore::FFXAAPassProxy::Add
                (&FXAAPassProxy,&local_a8,param_1,param_2,&local_f0,&local_88);
      pTVar10 = FRDGBuilder::ConvertToExternalTexture(param_1,local_a8.Texture.Texture);
      pIVar1 = pTVar7->Reference;
      pIVar2 = pTVar10->Reference;
      if (pIVar1 != pIVar2) {
        pTVar7->Reference = pIVar2;
        if (pIVar2 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar2->_padding_ + 0x30))();
        }
        if (pIVar1 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
        }
      }
      if (local_f0.Inputs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Inputs.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PreRenderViewFamily_RenderThread @ 14ea818d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::PreRenderViewFamily_RenderThread
          (FCompositeCoreSceneViewExtension *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  int *piVar1;
  TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
  *pTVar2;
  int iVar3;
  TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
  *pTVar4;
  undefined4 *puVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->CachedOutputsPerView_RenderThread).Pairs.ArrayNum;
  pTVar4 = (TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>
            *)(this->CachedOutputsPerView_RenderThread).Pairs.AllocatorInstance.Data;
  if (iVar3 < 0x11) {
    puVar5 = (undefined4 *)&pTVar4->field_0x10;
    pTVar2 = pTVar4 + iVar3;
    while( true ) {
      if ((this->CachedOutputsPerView_RenderThread).Pairs.ArrayNum != iVar3) {
        `TCheckedPointerIterator<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar4 == pTVar2) break;
      *puVar5 = 0;
      if ((int)puVar5[1] < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)(puVar5 + -2),0,puVar5 + 1);
      }
      pTVar4 = pTVar4 + 1;
      puVar5 = puVar5 + 6;
    }
  }
  else {
    piVar1 = &(this->CachedOutputsPerView_RenderThread).Pairs.ArrayMax;
    if ((this->CachedOutputsPerView_RenderThread).Pairs.ArrayMax < 0) {
      DestructItems<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int>
                (pTVar4,iVar3);
      (this->CachedOutputsPerView_RenderThread).Pairs.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)&this->CachedOutputsPerView_RenderThread,0,piVar1);
      }
    }
    else {
      DestructItems<TTuple<unsigned_int,TSortedMap<FCompositeCorePassProxy_const_*,UE::CompositeCore::FPassTexture_const_,TSizedDefaultAllocator<32>,TLess<FCompositeCorePassProxy_const_*>_>_>,int>
                (pTVar4,iVar3);
      (this->CachedOutputsPerView_RenderThread).Pairs.ArrayNum = 0;
    }
  }
  return;
}

// PreRenderView_RenderThread @ 14ea819d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::PreRenderView_RenderThread
          (FCompositeCoreSceneViewExtension *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  if (LastFrameCounter != GFrameCounterRenderThread) {
    ApplyPreprocessing(this,param_1,param_2);
    LastFrameCounter = GFrameCounterRenderThread;
  }
  return;
}

// RegisterPrimitives_GameThread @ 14ea81e60

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
FCompositeCoreSceneViewExtension::RegisterPrimitives_GameThread
          (FCompositeCoreSceneViewExtension *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPrimitiveComponent *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  UPrimitiveComponent *local_50;
  FWeakObjectPtr local_48;
  UPrimitiveComponent *local_40;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\CompositeCoreSceneViewExtension.cpp"
                       ,0x58,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    this_00 = *(UPrimitiveComponent **)pFVar6;
    if ((this_00 != (UPrimitiveComponent *)0x0) && ((*(uint *)&this_00->field_0x8 >> 0x1e & 1) == 0)
       ) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_50 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_50);
      local_48 = local_res20;
      iVar5 = TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>_>
                        (&this->CompositePrimitives,
                         local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                         (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)&local_48);
      if (iVar5 == -1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        local_58.ObjectIndex = 0;
        local_58.ObjectSerialNumber = 0;
        local_40 = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_40);
        TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::Emplace<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>
                  (&this->CompositePrimitives,&local_res18,(bool *)&local_58);
      }
      if (!(bool)this_00->bHoldout) {
        UPrimitiveComponent::SetHoldout(this_00,true);
      }
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// ResetBuiltInRenderPassOptions_GameThread @ 14ea822d0

void __thiscall
FCompositeCoreSceneViewExtension::ResetBuiltInRenderPassOptions_GameThread
          (FCompositeCoreSceneViewExtension *this)

{
  if ((this->BuiltInRenderPassOptions).bIsSet != false) {
    (this->BuiltInRenderPassOptions).bIsSet = false;
  }
  return;
}

// ResetRenderWork_GameThread @ 14ea82310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread(FCompositeCoreSceneViewExtension *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TWeakPtr<FSceneViewExtensionBase,1> *pTVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStackY_d8 [32];
  TWeakPtr<FSceneViewExtensionBase,1> local_a8;
  code *local_98 [2];
  undefined **local_88;
  FSceneViewExtensionBase *pFStack_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  FSceneViewExtensionBase *pFStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  this->bHasCustomRenderWork = false;
  if ((this->MainRenderMode).bIsSet != false) {
    (this->MainRenderMode).bIsSet = false;
  }
  if (*(int *)&(this->AllowedViewModes).Elements.field_0x8 !=
      *(int *)&(this->AllowedViewModes).Elements.field_0x34) {
    TSet<enum_EViewModeIndex,DefaultKeyFuncs<enum_EViewModeIndex,0>,FDefaultSetAllocator>::
    UnhashElements(&this->AllowedViewModes);
    iVar3 = *(int *)&(this->AllowedViewModes).Elements.field_0xc;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x8 = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&this->AllowedViewModes,0,
                 (int *)&(this->AllowedViewModes).Elements.field_0xc);
    }
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x28 = 0;
  }
  (this->SceneCapturesUpdateQueue).ArrayNum = 0;
  if ((this->SceneCapturesUpdateQueue).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>_>_>
              (8,4,0,&(this->SceneCapturesUpdateQueue).AllocatorInstance,0,
               &(this->SceneCapturesUpdateQueue).ArrayMax);
  }
  pTVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsWeak
                     ((TSharedFromThis<FSceneViewExtensionBase,1> *)&this->_padding_,&local_a8);
  pFStack_80 = pTVar6->Object;
  local_78 = (pTVar6->WeakReferenceCount).ReferenceController;
  (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6->Object = (FSceneViewExtensionBase *)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread_::__l2::TSTR_CopyCompositeCoreRenderWork180>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    pFStack_50 = pFStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar7 = (FRenderCommandTag *)
             TRenderCommandTag<`FCompositeCoreSceneViewExtension::ResetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork180>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar7);
    uVar9 = (ulonglong)local_38;
    if (2 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar8 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar8 = local_40;
        }
        (*(code *)(*pppuVar8)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar8 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar8 = local_70;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_a8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_a8.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// SetBuiltInRenderPassOptions_GameThread @ 14ea82640

void __thiscall
FCompositeCoreSceneViewExtension::SetBuiltInRenderPassOptions_GameThread
          (FCompositeCoreSceneViewExtension *this,FBuiltInRenderPassOptions *param_1)

{
  bool bVar1;
  
  if ((TOptional<UE::CompositeCore::FBuiltInRenderPassOptions> *)param_1 !=
      &this->BuiltInRenderPassOptions) {
    (this->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.bIsSet = false;
    bVar1 = (param_1->ViewUserFlagsOverride).bIsSet;
    (this->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.bIsSet = bVar1;
    if (bVar1 != false) {
      (this->BuiltInRenderPassOptions).TypedValue.ViewUserFlagsOverride.TypedValue =
           (param_1->ViewUserFlagsOverride).TypedValue;
    }
    (this->BuiltInRenderPassOptions).TypedValue.bEnableUnlitViewmode = param_1->bEnableUnlitViewmode
    ;
    (this->BuiltInRenderPassOptions).TypedValue.DilationSize = param_1->DilationSize;
    (this->BuiltInRenderPassOptions).TypedValue.bOpacifyOutput = param_1->bOpacifyOutput;
    (this->BuiltInRenderPassOptions).bIsSet = true;
  }
  return;
}

// SetRenderWork_GameThread @ 14ea826d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCompositeCoreSceneViewExtension::SetRenderWork_GameThread
          (FCompositeCoreSceneViewExtension *this,FRenderWork *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int *piVar2;
  atomic<int> *paVar3;
  TSet<EViewModeIndex,DefaultKeyFuncs<EViewModeIndex,0>,FDefaultSetAllocator> *this_01;
  TArray<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  TArray<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  atomic<int> aVar7;
  int iVar8;
  TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *pTVar9;
  code *pcVar10;
  bool bVar11;
  TWeakPtr<FSceneViewExtensionBase,1> *pTVar12;
  code **ppcVar13;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar14;
  byte bVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188;
  undefined1 local_187 [7];
  TWeakPtr<FSceneViewExtensionBase,1> local_180;
  code *local_168 [2];
  code *local_158 [3];
  code **local_140;
  undefined1 local_138 [40];
  code **local_110;
  byte local_108;
  FRenderWork local_f8;
  FSceneViewExtensionBase *local_58;
  TReferenceControllerBase<1> *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar8 = (param_1->PreprocessingPasses).Pairs.ArrayNum;
  pFVar16 = (param_1->PreprocessingPasses).Pairs.AllocatorInstance.Data;
  pFVar6 = pFVar16 + (longlong)iVar8 * 0x18;
  bVar18 = 1;
  while( true ) {
    if ((param_1->PreprocessingPasses).Pairs.ArrayNum != iVar8) {
      local_188 = 0;
      `TCheckedPointerIterator<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_188);
    }
    if (pFVar16 == pFVar6) break;
    bVar15 = 0;
    if (*(int *)(pFVar16 + 0x10) == 0) {
      bVar15 = bVar18;
    }
    pFVar16 = pFVar16 + 0x18;
    bVar18 = bVar15;
  }
  iVar8 = (param_1->FramePasses).Pairs.ArrayNum;
  pFVar16 = (param_1->FramePasses).Pairs.AllocatorInstance.Data;
  pFVar6 = pFVar16 + (longlong)iVar8 * 0x18;
  while( true ) {
    if ((param_1->FramePasses).Pairs.ArrayNum != iVar8) {
      local_187[0] = 0;
      `TCheckedPointerIterator<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_187);
    }
    if (pFVar16 == pFVar6) break;
    bVar18 = bVar18 & *(int *)(pFVar16 + 0x10) == 0;
    pFVar16 = pFVar16 + 0x18;
  }
  this->bHasCustomRenderWork =
       (bool)(((param_1->SceneCapturesUpdateQueue).ArrayNum == 0 &&
              (param_1->MainRenderMode).bIsSet == false) & bVar18 ^ 1);
  if (&param_1->MainRenderMode != &this->MainRenderMode) {
    if ((param_1->MainRenderMode).bIsSet == false) {
      if ((this->MainRenderMode).bIsSet != false) {
        (this->MainRenderMode).bIsSet = false;
      }
    }
    else {
      (this->MainRenderMode).TypedValue = (param_1->MainRenderMode).TypedValue;
      (this->MainRenderMode).bIsSet = true;
    }
  }
  this_01 = &this->AllowedViewModes;
  if (this_01 != &param_1->AllowedViewModes) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&(this->AllowedViewModes).Hash,&(this->AllowedViewModes).HashSize,
               &(param_1->AllowedViewModes).Hash,(param_1->AllowedViewModes).HashSize);
    iVar8 = *(int *)&(param_1->AllowedViewModes).Elements.field_0x8;
    TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(this_01,iVar8);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar8,(ForAnyElementType *)this_01,
               (int *)&(this->AllowedViewModes).Elements.field_0x8,
               (int *)&(this->AllowedViewModes).Elements.field_0xc);
    puVar1 = &(param_1->AllowedViewModes).Elements.field_0x10;
    this_00 = &(this->AllowedViewModes).Elements.field_0x10;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x30 =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x30;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x34 =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar8 != 0) {
      memcpy(*(void **)&this_01->Elements,*(void **)&(param_1->AllowedViewModes).Elements,
             (longlong)iVar8 * 0xc);
    }
  }
  pTVar4 = &param_1->SceneCapturesUpdateQueue;
  pTVar5 = &this->SceneCapturesUpdateQueue;
  if (pTVar5 != pTVar4) {
    pTVar9 = (pTVar5->AllocatorInstance).Data;
    if (pTVar9 != (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar9);
    }
    (pTVar5->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data =
         (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
    (this->SceneCapturesUpdateQueue).ArrayNum = (param_1->SceneCapturesUpdateQueue).ArrayNum;
    (this->SceneCapturesUpdateQueue).ArrayMax = (param_1->SceneCapturesUpdateQueue).ArrayMax;
    (param_1->SceneCapturesUpdateQueue).ArrayNum = 0;
    (param_1->SceneCapturesUpdateQueue).ArrayMax = 0;
  }
  pTVar12 = TSharedFromThis<FSceneViewExtensionBase,1>::AsWeak
                      ((TSharedFromThis<FSceneViewExtensionBase,1> *)&this->_padding_,&local_180);
  UE::CompositeCore::FRenderWork::FRenderWork(&local_f8,param_1);
  local_58 = pTVar12->Object;
  local_50 = (pTVar12->WeakReferenceCount).ReferenceController;
  (pTVar12->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar12->Object = (FSceneViewExtensionBase *)0x0;
  local_168[0] = (code *)0x0;
  ppcVar13 = FMemory::Malloc(0xb8,8);
  *ppcVar13 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_140 = ppcVar13;
  UE::CompositeCore::FRenderWork::FRenderWork((FRenderWork *)(ppcVar13 + 1),&local_f8);
  ppcVar13[0x15] = (code *)local_58;
  ppcVar13[0x16] = (code *)local_50;
  if ((FRenderWork *)(ppcVar13 + 1) != (FRenderWork *)0x0) {
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  local_50 = (TReferenceControllerBase<1> *)0x0;
  local_58 = (FSceneViewExtensionBase *)0x0;
  this_02 = FRenderCommandList::GetInstanceTLS();
  if (this_02 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCompositeCoreSceneViewExtension::SetRenderWork_GameThread_::__l2::TSTR_CopyCompositeCoreRenderWork142>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_168);
  }
  else {
    this_03 = FRenderCommandList::GetRenderThread(this_02);
    local_138._0_8_ = local_168[0];
    local_110 = local_140;
    local_140 = (code **)0x0;
    local_138._16_8_ = local_158[0];
    local_138._24_8_ = local_158[1];
    local_138._32_8_ = local_158[2];
    local_168[0] = (code *)0x0;
    local_108 = 2;
    pFVar14 = (FRenderCommandTag *)
              TRenderCommandTag<`FCompositeCoreSceneViewExtension::SetRenderWork_GameThread'::__l2::TSTR_CopyCompositeCoreRenderWork142>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_138,pFVar14);
    uVar17 = (ulonglong)local_108;
    if (2 < uVar17) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_138._0_8_ != (code *)0x0) {
        ppcVar13 = (code **)(local_138 + 0x10);
        if (local_110 != (code **)0x0) {
          ppcVar13 = local_110;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(local_138);
    }
  }
  if (local_168[0] != (code *)0x0) {
    ppcVar13 = local_168 + 2;
    if (local_140 != (code **)0x0) {
      ppcVar13 = local_140;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_50 + 0xc);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(local_50->_padding_ + 8))(local_50,1);
    }
  }
  UE::CompositeCore::FRenderWork::~FRenderWork(&local_f8);
  if (local_180.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &(local_180.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar7 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar7 == (atomic<int>)0x1) {
      (**(code **)((local_180.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_180.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// SetupView @ 14ea82ab0

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
FCompositeCoreSceneViewExtension::SetupView
          (FCompositeCoreSceneViewExtension *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UObject *pUVar7;
  USceneCaptureComponent2D *this_00;
  ForElementType<FSetElementId> FVar8;
  FWeakObjectPtr *this_01;
  undefined1 local_res10 [8];
  
  if ((param_1->Views).ArrayNum < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_2 == *(FSceneView **)(param_1->Views).AllocatorInstance.Data) {
    if (*(int *)&(this->AllowedViewModes).Elements.field_0x8 !=
        *(int *)&(this->AllowedViewModes).Elements.field_0x34) {
      FVar8 = (this->AllowedViewModes).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(this->AllowedViewModes).Hash;
      }
      iVar6 = *(int *)((longlong)FVar8 +
                      (ulonglong)
                      ((this->AllowedViewModes).HashSize - VMI_Wireframe & param_1->ViewMode) * 4);
      if (iVar6 != -1) {
        lVar3 = *(longlong *)&(this->AllowedViewModes).Elements;
        do {
          if (*(EViewModeIndex *)(lVar3 + (longlong)iVar6 * 0xc) == param_1->ViewMode)
          goto LAB_14ea82b7e;
          iVar6 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0xc);
        } while (iVar6 != -1);
      }
      (param_1->EngineShowFlags).AllowPrimitiveAlphaHoldout = 0;
      return;
    }
LAB_14ea82b7e:
    if (param_2->bIsSceneCapture == false) {
      this_01 = &((this->SceneCapturesUpdateQueue).AllocatorInstance.Data)->WeakPtr;
      iVar6 = (this->SceneCapturesUpdateQueue).ArrayNum;
      pFVar2 = this_01 + iVar6;
      while( true ) {
        if ((this->SceneCapturesUpdateQueue).ArrayNum != iVar6) {
          `TCheckedPointerIterator<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (this_01 == pFVar2) break;
        bVar5 = FWeakObjectPtr::IsValid(this_01);
        if (bVar5) {
          pUVar7 = FWeakObjectPtr::Get(this_01);
          if ((pUVar7[0xe].field_0x22 & 1) == 0) {
            this_00 = (USceneCaptureComponent2D *)FWeakObjectPtr::Get(this_01);
            USceneCaptureComponent2D::CaptureSceneDeferred(this_00);
          }
        }
        this_01 = this_01 + 1;
      }
      (this->SceneCapturesUpdateQueue).ArrayNum = 0;
      if ((this->SceneCapturesUpdateQueue).ArrayMax < 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr>_>_>
                  (8,4,0,&(this->SceneCapturesUpdateQueue).AllocatorInstance,0,
                   &(this->SceneCapturesUpdateQueue).ArrayMax);
      }
    }
  }
  return;
}

// SetupViewFamily @ 14ea82c40

void __thiscall
FCompositeCoreSceneViewExtension::SetupViewFamily
          (FCompositeCoreSceneViewExtension *this,FSceneViewFamily *param_1)

{
  int iVar1;
  bool bVar2;
  undefined1 local_38 [12];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_10;
  
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator((TIterator *)local_38,&this->CompositePrimitives);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      iVar1 = local_1c;
      bVar2 = FWeakObjectPtr::IsValid
                        ((FWeakObjectPtr *)((longlong)local_1c * 0x10 + *(longlong *)local_38._0_8_)
                        );
      if (!bVar2) {
        TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(local_10,iVar1);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_38 + 8));
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  return;
}

// SubscribeToPostProcessingPass @ 14ea831b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCompositeCoreSceneViewExtension::SubscribeToPostProcessingPass
          (FCompositeCoreSceneViewExtension *this,EPostProcessingPass param_1,FSceneView *param_2,
          TArray<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_3,bool param_4)

{
  TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TRefCountPtr<IPooledRenderTarget> *pTVar6;
  FRenderWork *pFVar7;
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar3 = IsActiveForViewFamily(this,param_2->Family);
  uVar4 = FSceneView::GetViewKey(param_2);
  pTVar6 = TSortedMap<unsigned_int,TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>,TLess<unsigned_int_const_>_>
           ::Find(&this->CustomRenderTargetPerView_RenderThread,uVar4);
  if (((pTVar6 != (TRefCountPtr<IPooledRenderTarget> *)0x0) ||
      ((this->ExternalInputs_RenderThread).Pairs.ArrayNum != 0)) && (bVar3)) {
    pFVar7 = GetRenderWork(this);
    pTVar8 = TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
             ::Find(&pFVar7->FramePasses,param_1);
    if (pTVar8 != (TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      local_88 = PostProcessWork_RenderThread;
      uStack_80 = 0;
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_38);
      local_20 = &local_60;
      puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
        ;
        *(EPostProcessingPass *)(puVar9 + 1) = param_1;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFCompositeCoreSceneViewExtension____A6A_AUFScreenPassTexture__AEAVFRDGBuilder__AEBVFSceneView__AEBUFPostProcessMaterialInputs___ZUFDefaultDelegateUserPolicy__W4EPostProcessingPass_ISceneViewExtension____6B_
        ;
        puVar9[3] = this;
        puVar9[4] = local_88;
        puVar9[5] = CONCAT44(uStack_7c,uStack_80);
        if ((this == (FCompositeCoreSceneViewExtension *)0x0) || (puVar9[4] == 0)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      pTVar1 = (param_3->AllocatorInstance).Data;
      if ((pTVar1 <= (TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
                      *)local_68) &&
         ((TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>
           *)local_68 < pTVar1 + param_3->ArrayMax)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = param_3->ArrayNum;
      if (iVar5 == param_3->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TDelegate<FScreenPassTexture___cdecl(FRDGBuilder_&,FSceneView_const_&,FPostProcessMaterialInputs_const_&),FDefaultDelegateUserPolicy>_>_>
                          (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar5 + 1;
      pTVar1 = (param_3->AllocatorInstance).Data;
      *(undefined8 *)(pTVar1 + iVar5) = 0;
      *(undefined8 *)&pTVar1[iVar5].field_0x8 = 0;
      *(undefined4 *)&pTVar1[iVar5].field_0x10 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_88);
      if (*(void **)&pTVar1[iVar5].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar1[iVar5].field_0x8);
      }
      *(ForElementType<TAlignedBytes<16,16>_> *)&pTVar1[iVar5].field_0x8 =
           local_60.DelegateAllocator;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      *(int *)&pTVar1[iVar5].field_0x10 = local_60.DelegateSize;
      local_60.DelegateSize = 0;
      if (local_78 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                   (FDestructionSentinel *)&local_88);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      if ((local_60.DelegateSize != 0) &&
         (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_60,0,0,0x10);
        local_60.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
  }
  return;
}

// UnregisterPrimitives_GameThread @ 14ea83b50

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
FCompositeCoreSceneViewExtension::UnregisterPrimitives_GameThread
          (FCompositeCoreSceneViewExtension *this,
          TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *this_00;
  int iVar1;
  UPrimitiveComponent *this_01;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FWeakObjectPtr *pFVar10;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FScriptContainerElement *local_res20;
  FWeakObjectPtr local_78;
  UPrimitiveComponent *local_70;
  FWeakObjectPtr local_68;
  UPrimitiveComponent *local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50 [2];
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\CompositeCore\\Source\\CompositeCore\\Private\\CompositeCoreSceneViewExtension.cpp"
                         ,0x70,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = param_1->ArrayNum;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar9 + (longlong)iVar1 * 8;
  local_res20 = pFVar8;
  do {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UPrimitiveComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar9 == pFVar8) {
      return;
    }
    this_01 = *(UPrimitiveComponent **)pFVar9;
    if ((this_01 != (UPrimitiveComponent *)0x0) && ((*(uint *)&this_01->field_0x8 >> 0x1e & 1) == 0)
       ) {
      this_00 = &this->CompositePrimitives;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_70 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_70);
      local_68 = local_res18;
      iVar6 = TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>_>
                        (this_00,local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex,
                         (TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)&local_68);
      if (iVar6 != -1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        local_78.ObjectIndex = 0;
        local_78.ObjectSerialNumber = 0;
        local_60 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_60);
        FVar4 = local_78;
        pFVar8 = local_res20;
        if (*(int *)&(this->CompositePrimitives).Elements.field_0x8 !=
            *(int *)&(this->CompositePrimitives).Elements.field_0x34) {
          FVar2 = (this->CompositePrimitives).Hash.SecondaryData;
          FVar7 = (ForElementType<FSetElementId>)&(this->CompositePrimitives).Hash;
          if (FVar2 != (ForElementType<FSetElementId>)0x0) {
            FVar7 = FVar2;
          }
          iVar6 = *(int *)((longlong)FVar7 +
                          ((longlong)(this->CompositePrimitives).HashSize - 1U &
                          (longlong)(local_78.ObjectSerialNumber ^ local_78.ObjectIndex)) * 4);
          while (pFVar8 = local_res20, iVar6 != -1) {
            pFVar10 = (FWeakObjectPtr *)((longlong)iVar6 * 0x10 + *(longlong *)&this_00->Elements);
            local_58 = FVar4;
            local_50[0] = *pFVar10;
            bVar5 = TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr>::
                    UEOpEquals<UPrimitiveComponent_const_,bool>
                              ((TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)local_50
                               ,(TWeakObjectPtr<UPrimitiveComponent_const_,FWeakObjectPtr> *)
                                &local_58);
            if (bVar5) {
              TSet<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::RemoveByIndex(this_00,iVar6);
              pFVar8 = local_res20;
              break;
            }
            iVar6 = pFVar10[1].ObjectIndex;
          }
        }
      }
      if ((bool)this_01->bHoldout) {
        UPrimitiveComponent::SetHoldout(this_01,false);
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// operator() @ 15059c420

bool __thiscall
`FCompositeCoreSceneViewExtension::ApplyPreprocessing'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1949042419324420582>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1949042419324420582>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059c460

bool __thiscall
`FCompositeCoreSceneViewExtension::ApplyPasses_Recursive'::__l27::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1949042419324420758>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1949042419324420758>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059c4b0

bool __thiscall
`FCompositeCoreSceneViewExtension::ApplyPreprocessing'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1949042419324420601>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1949042419324420601>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059c4f0

bool __thiscall
`FCompositeCoreSceneViewExtension::ApplyPasses_Recursive'::__l39::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1949042419324420778>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1949042419324420778>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059c540

bool __thiscall
`FCompositeCoreSceneViewExtension::ApplyPasses_Recursive'::__l44::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1949042419324420785>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1949042419324420785>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

