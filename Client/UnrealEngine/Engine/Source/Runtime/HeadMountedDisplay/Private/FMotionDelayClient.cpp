// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 10

// FMotionDelayClient @ 14594e220

FMotionDelayClient * __thiscall
FMotionDelayClient::FMotionDelayClient(FMotionDelayClient *this,FAutoRegister *param_1)

{
  FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this,param_1);
  this->_padding_ = (longlong)&___7FMotionDelayClient__6B_;
  (this->TargetTransforms_RenderThread).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetTransforms_RenderThread).ArrayNum = 0;
  (this->TargetTransforms_RenderThread).ArrayMax = 0;
  return this;
}

// operator() @ 14594f1b0

void __thiscall
`FMotionDelayClient::BeginRenderViewFamily'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FTargetTransform *pFVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(longlong *)this == 0) {
    return;
  }
  if (*(longlong *)((longlong)this + 8) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)this + 8) + 8) < 1) {
    return;
  }
  pTVar8 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  lVar9 = 0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar8->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14594f210;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar10 = aVar6 == aVar7;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar7 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar7;
    } while (!bVar10);
    lVar9 = *(longlong *)this;
    if (lVar9 != 0) goto LAB_14594f236;
  }
LAB_14594f210:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar10) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14594f236:
  pFVar1 = (ForAnyElementType *)(lVar9 + 0x28);
  if (pFVar1 != (ForAnyElementType *)((longlong)this + 0x10)) {
    DestructItems<FMotionDelayClient::FTargetTransform,int>
              ((FTargetTransform *)pFVar1->Data,*(int *)(lVar9 + 0x30));
    iVar3 = *(int *)((longlong)this + 0x18);
    piVar2 = (int *)(lVar9 + 0x34);
    pFVar4 = (FTargetTransform *)((ForAnyElementType *)((longlong)this + 0x10))->Data;
    *(int *)(lVar9 + 0x30) = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,0x10,iVar3,*piVar2,pFVar1,iVar3,piVar2);
      ConstructItems<FMotionDelayClient::FTargetTransform,FMotionDelayClient::FTargetTransform,int>
                (pFVar1->Data,pFVar4,iVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Apply_RenderThread @ 145950190

void __thiscall
FMotionDelayClient::Apply_RenderThread(FMotionDelayClient *this,FSceneInterface *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TargetTransforms_RenderThread).ArrayNum;
  pFVar4 = (this->TargetTransforms_RenderThread).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0xd0;
  while( true ) {
    if ((this->TargetTransforms_RenderThread).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMotionDelayClient::FTargetTransform,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FLateUpdateManager::Apply_RenderThread
              ((FLateUpdateManager *)(*(longlong *)pFVar4 + 0x10),param_1,
               (TTransform<double> *)(pFVar4 + 0x70),(TTransform<double> *)(pFVar4 + 0x10));
    pFVar4 = pFVar4 + 0xd0;
  }
  return;
}

// BeginRenderViewFamily @ 145950410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FMotionDelayClient::BeginRenderViewFamily(FMotionDelayClient *this,FSceneViewFamily *param_1)

{
  __m128d *p_Var1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  FWeakObjectPtr FVar5;
  void *_Src;
  TReferenceControllerBase<1> *pTVar6;
  FSceneViewExtensionBase *pFVar7;
  code *pcVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *pTVar11;
  bool bVar12;
  uint uVar13;
  UObject *pUVar14;
  USceneComponent *this_00;
  TTransform<double> *pTVar15;
  TSharedRef<FSceneViewExtensionBase,1> *pTVar16;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *pTVar22;
  ulonglong uVar23;
  uint uVar24;
  FWeakObjectPtr *this_03;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8 [8];
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  FSceneViewExtensionBase *local_2b0;
  TReferenceControllerBase<1> *local_2a8;
  ForAnyElementType local_2a0;
  undefined8 local_298;
  longlong *local_290;
  undefined8 local_288;
  TCircularHistoryBuffer<UE::Math::TVector<double>_> local_280;
  int local_268;
  int local_264;
  FMotionDelayClient *local_260;
  undefined8 local_258;
  FWeakObjectPtr local_250;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_240;
  int iStack_220;
  TSharedRef<FSceneViewExtensionBase,1> local_218 [3];
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  longlong local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  longlong *plStack_1c0;
  FTargetTransform local_1b8;
  undefined1 local_e8 [48];
  byte local_b8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_260 = this;
  MotionDelayService_Impl::SyncDelayBuffers(param_1->FrameNumber);
  uVar25 = MotionDelayService_Impl::DelayTargets._8_4_ -
           MotionDelayService_Impl::DelayTargets._52_4_;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8 = 0;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  uVar26 = 0;
  if (0 < (int)uVar25) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,uVar25,&local_2c0,0,(int *)((longlong)&local_2b8 + 4));
  }
  local_290 = (longlong *)0x0;
  local_288 = 0;
  (**(code **)(this->_padding_ + 200))(this,&local_290);
  uVar13 = (**(code **)(this->_padding_ + 0xc0))(this);
  uVar25 = MotionDelayService_Impl::DelayTargets._40_4_;
  local_1c8 = 0;
  uStack_1dc = 1;
  uStack_1cc = local_1c8;
  if (uVar25 != 0) {
    puVar27 = (uint *)&MotionDelayService_Impl::DelayTargets.field_0x10;
    if (MotionDelayService_Impl::DelayTargets._32_8_ != 0) {
      puVar27 = (uint *)MotionDelayService_Impl::DelayTargets._32_8_;
    }
    uVar24 = *puVar27;
    local_1c8 = 0;
    uVar26 = 0;
    while (uVar24 == 0) {
      lVar18 = (longlong)(int)uVar26;
      local_1c8 = local_1c8 + 0x20;
      uVar26 = uVar26 + 1;
      uStack_1cc = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_14595056f;
      uVar24 = puVar27[lVar18 + 1];
    }
    uStack_1dc = -uVar24 & uVar24;
    uVar23 = (ulonglong)uStack_1dc * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_268 = (int)lVar18;
    uStack_1cc = local_268 + -1 + local_1c8;
    if ((int)uVar25 < (int)uStack_1cc) {
      uStack_1cc = uVar25;
    }
  }
LAB_14595056f:
  local_1e8 = &MotionDelayService_Impl::DelayTargets;
  uStack_1c4 = local_218[2].SharedReferenceCount.ReferenceController._4_4_;
  uVar24 = uVar25 & 0xffffffe0;
  local_1d8 = 0x154bdb7b0;
  bVar9 = MotionDelayService_Impl::DelayTargets._40_1_;
  uStack_1d0 = 0xffffffff;
  TStack_240.CurrentBitIndex = uStack_1cc;
  TStack_240.UnvisitedBitMask = 0xffffffff;
  TStack_240._padding_ = CONCAT44(uStack_1dc,uVar26);
  plStack_1c0 = (longlong *)
                CONCAT44(plStack_1c0._4_4_,
                         MotionDelayService_Impl::DelayTargets._8_4_ -
                         MotionDelayService_Impl::DelayTargets._52_4_);
  local_248 = &MotionDelayService_Impl::DelayTargets;
  iVar21 = (int)uVar25 >> 5;
  TStack_240._28_4_ = local_218[2].SharedReferenceCount.ReferenceController._4_4_;
  TStack_240.BaseBitIndex = local_1c8;
  TStack_240.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&MotionDelayService_Impl::DelayTargets.field_0x10;
  _iStack_220 = plStack_1c0;
  uStack_1e0 = uVar26;
  uVar26 = uVar25;
  if ((int)uVar25 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar26 = MotionDelayService_Impl::DelayTargets._40_4_;
  }
  if (uVar25 != uVar26) {
    lVar18 = 0x154bdb7b0;
    if (MotionDelayService_Impl::DelayTargets._32_8_ != 0) {
      lVar18 = MotionDelayService_Impl::DelayTargets._32_8_;
    }
    uVar25 = -1 << (bVar9 & 0x1f) & *(uint *)(lVar18 + (longlong)iVar21 * 4);
    while (uVar25 == 0) {
      lVar19 = (longlong)iVar21;
      uVar24 = uVar24 + 0x20;
      iVar21 = iVar21 + 1;
      uVar25 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_145950680;
      uVar25 = *(uint *)(lVar18 + 4 + lVar19 * 4);
    }
    uVar23 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_264 = (int)lVar18;
    uVar25 = (uVar24 - 1) + local_264;
    if ((int)uVar26 < (int)uVar25) {
      uVar25 = uVar26;
    }
  }
LAB_145950680:
  do {
    pTVar11 = local_248;
    if (*(int *)&local_248->field_0x8 - *(int *)&local_248->field_0x34 != iStack_220) {
      local_2c8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2c8);
    }
    if (((TStack_240.CurrentBitIndex == uVar25) &&
        (TStack_240.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&MotionDelayService_Impl::DelayTargets.field_0x10))
       && (pTVar11 == &MotionDelayService_Impl::DelayTargets)) {
      pTVar16 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared
                          ((TSharedFromThis<FSceneViewExtensionBase,1> *)&local_260->_padding_,
                           local_218);
      pTVar6 = (pTVar16->SharedReferenceCount).ReferenceController;
      pFVar7 = pTVar16->Object;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_218[0].SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_218[0].SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      FVar10.Data = local_2c0.Data;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      iVar21 = (int)local_2b8;
      local_2a0.Data = (FScriptContainerElement *)0x0;
      local_298 = CONCAT44(local_298._4_4_,(int)local_2b8);
      if ((int)local_2b8 == 0) {
        local_298 = local_2b8 & 0xffffffff;
        local_2b0 = pFVar7;
        local_2a8 = pTVar6;
      }
      else {
        local_2b0 = pFVar7;
        local_2a8 = pTVar6;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,0x10,(int)local_2b8,0,&local_2a0,(int)local_2b8,
                   (int *)((longlong)&local_298 + 4));
        ConstructItems<FMotionDelayClient::FTargetTransform,FMotionDelayClient::FTargetTransform,int>
                  (local_2a0.Data,(FTargetTransform *)FVar10.Data,iVar21);
      }
      local_1e8 = (TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
                   *)0x0;
      plStack_1c0 = FMemory::Malloc(0x28,8);
      *plStack_1c0 = (longlong)
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FMotionDelayClient::BeginRenderViewFamily'::`2'::<lambda_2>,1,1>
                      ::_vftable_;
      plStack_1c0[1] = (longlong)local_2b0;
      plStack_1c0[2] = (longlong)local_2a8;
      local_2a8 = (TReferenceControllerBase<1> *)0x0;
      local_2b0 = (FSceneViewExtensionBase *)0x0;
      plStack_1c0[3] = 0;
      plStack_1c0[3] = (longlong)local_2a0.Data;
      local_2a0.Data = (FScriptContainerElement *)0x0;
      *(int *)(plStack_1c0 + 4) = (int)local_298;
      *(undefined4 *)((longlong)plStack_1c0 + 0x24) = local_298._4_4_;
      if (plStack_1c0 + 1 != (longlong *)0x0) {
        local_1e8 = (TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
                     *)UE::Core::Private::Function::
                       TFunctionRefCaller<`FMotionDelayClient::BeginRenderViewFamily'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      local_298 = 0;
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FMotionDelayClient::BeginRenderViewFamily_::__l2::TSTR_MotionDelayClientSetup482>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_1e8);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_e8._28_4_ = uStack_1cc;
        local_e8._24_4_ = uStack_1d0;
        local_e8._36_4_ = uStack_1c4;
        local_e8._32_4_ = local_1c8;
        local_e8._0_8_ = local_1e8;
        local_e8._40_8_ = plStack_1c0;
        plStack_1c0 = (longlong *)0x0;
        local_e8._16_8_ = local_1d8;
        local_1e8 = (TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
                     *)0x0;
        local_b8 = 2;
        pFVar17 = (FRenderCommandTag *)
                  TRenderCommandTag<`FMotionDelayClient::BeginRenderViewFamily'::__l2::TSTR_MotionDelayClientSetup482>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_e8,pFVar17);
        uVar23 = (ulonglong)local_b8;
        if ((2 < uVar23) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar23] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_e8._0_8_ != (code *)0x0) {
            plVar20 = (longlong *)(local_e8 + 0x10);
            if ((longlong *)local_e8._40_8_ != (longlong *)0x0) {
              plVar20 = (longlong *)local_e8._40_8_;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar23])(local_e8);
        }
      }
      if (local_1e8 !=
          (TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
           *)0x0) {
        plVar20 = &local_1d8;
        if (plStack_1c0 != (longlong *)0x0) {
          plVar20 = plStack_1c0;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      DestructItems<FMotionDelayClient::FTargetTransform,int>
                ((FTargetTransform *)local_2a0.Data,(int)local_298);
      if ((FTargetTransform *)local_2a0.Data != (FTargetTransform *)0x0) {
        FMemory::Free(local_2a0.Data);
      }
      if (local_2a8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_2a8 + 0xc);
        iVar21 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(local_2a8->_padding_ + 8))(local_2a8,1);
        }
      }
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar3 = &pTVar6->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
        }
      }
      if (local_290 != (longlong *)0x0) {
        FMemory::Free(local_290);
      }
      DestructItems<FMotionDelayClient::FTargetTransform,int>
                ((FTargetTransform *)local_2c0.Data,(int)local_2b8);
      if ((FTargetTransform *)local_2c0.Data != (FTargetTransform *)0x0) {
        FMemory::Free(local_2c0.Data);
      }
      return;
    }
    this_03 = (FWeakObjectPtr *)((longlong)TStack_240.CurrentBitIndex * 0x20 + *(longlong *)pTVar11)
    ;
    bVar12 = FWeakObjectPtr::IsValid(this_03);
    bVar12 = !bVar12;
    if (!bVar12) {
      pUVar14 = FWeakObjectPtr::Get(this_03);
      for (plVar20 = local_290; plVar20 != local_290 + (int)local_288; plVar20 = plVar20 + 1) {
        if ((UObject *)*plVar20 == pUVar14) {
          bVar12 = true;
          goto LAB_145950727;
        }
      }
      bVar12 = false;
    }
LAB_145950727:
    if (!bVar12) {
      FVar5 = this_03[1];
      uVar26 = ::GetTypeHash((FMotionSource *)((longlong)FVar5 + 0x1a0));
      iVar21 = TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FMotionDelayTarget::FMotionSource>
                         ((TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
                           *)&MotionDelayService_Impl::SourceSamples,uVar26,
                          (FMotionSource *)((longlong)FVar5 + 0x1a0));
      if (iVar21 != -1) {
        lVar18 = (longlong)iVar21 * 0x30 + MotionDelayService_Impl::SourceSamples._0_8_;
        pTVar22 = (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)(lVar18 + 0x10);
        if (lVar18 == 0) {
          pTVar22 = (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)0x0;
        }
        if (pTVar22 != (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)0x0) {
          local_250 = this_03[2];
          local_1b8.DelayTarget.Object = *(FMotionDelayTarget **)(this_03 + 1);
          local_1b8.DelayTarget.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          uVar28 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          uVar29 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1b8.DelayTransform.Translation.XY.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.DelayTransform.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1b8.DelayTransform.Translation.XY.m128d_f64[1]._4_4_ = uVar29;
          local_1b8.RestoreTransform.Translation.XY.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.RestoreTransform.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1b8.RestoreTransform.Translation.XY.m128d_f64[1]._4_4_ = uVar29;
          uVar28 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          uVar29 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1b8.DelayTransform.Translation.ZW.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.DelayTransform.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1b8.DelayTransform.Translation.ZW.m128d_f64[1]._4_4_ = uVar29;
          local_1b8.RestoreTransform.Translation.ZW.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.RestoreTransform.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1b8.RestoreTransform.Translation.ZW.m128d_f64[1]._4_4_ = uVar29;
          uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          uVar29 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1b8.DelayTransform.Rotation.XY.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.DelayTransform.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1b8.DelayTransform.Rotation.XY.m128d_f64[1]._4_4_ = uVar29;
          local_1b8.RestoreTransform.Rotation.XY.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.RestoreTransform.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1b8.RestoreTransform.Rotation.XY.m128d_f64[1]._4_4_ = uVar29;
          uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          uVar29 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1b8.DelayTransform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.DelayTransform.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1b8.DelayTransform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar29;
          local_1b8.RestoreTransform.Scale3D.XY.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.RestoreTransform.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1b8.RestoreTransform.Scale3D.XY.m128d_f64[1]._4_4_ = uVar29;
          uVar30 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          uVar31 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          uVar28 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          uVar29 = (undefined4)
                   ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          local_1b8.DelayTransform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar30;
          local_1b8.DelayTransform.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1b8.DelayTransform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar31;
          local_1b8.DelayTransform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.DelayTransform.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1b8.DelayTransform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
          local_1b8.RestoreTransform.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar28;
          local_1b8.RestoreTransform.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1b8.RestoreTransform.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar29;
          local_1b8.RestoreTransform.Rotation.ZW.m128d_f64[1]._0_4_ = uVar30;
          local_1b8.RestoreTransform.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1b8.RestoreTransform.Rotation.ZW.m128d_f64[1]._4_4_ = uVar31;
          if (local_250 != (FWeakObjectPtr)0x0) {
            LOCK();
            *(int *)((longlong)local_250 + 8) = *(int *)((longlong)local_250 + 8) + 1;
            UNLOCK();
          }
          local_258 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1b8.DelayTarget.SharedReferenceCount,(FSharedReferencer<1> *)&local_250)
          ;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_250);
          this_00 = (USceneComponent *)FWeakObjectPtr::Get(this_03);
          pTVar15 = USceneComponent::GetRelativeTransform(this_00,&local_a8);
          FVar5 = this_03[1];
          local_280.Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1b8.DelayTransform.Rotation.XY.m128d_f64 = *&(pTVar15->Rotation).XY.m128d_f64;
          local_1b8.RestoreTransform.Rotation.XY.m128d_f64 = *&(pTVar15->Rotation).XY.m128d_f64;
          p_Var1 = &(pTVar15->Rotation).ZW;
          local_1b8.DelayTransform.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
          local_1b8.RestoreTransform.Rotation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
          local_1b8.DelayTransform.Translation.XY.m128d_f64 = *&(pTVar15->Translation).XY.m128d_f64;
          local_1b8.RestoreTransform.Translation.XY.m128d_f64 =
               *&(pTVar15->Translation).XY.m128d_f64;
          p_Var1 = &(pTVar15->Translation).ZW;
          local_1b8.DelayTransform.Translation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
          local_1b8.RestoreTransform.Translation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
          local_1b8.DelayTransform.Scale3D.XY.m128d_f64 = *&(pTVar15->Scale3D).XY.m128d_f64;
          local_1b8.RestoreTransform.Scale3D.XY.m128d_f64 = *&(pTVar15->Scale3D).XY.m128d_f64;
          p_Var1 = &(pTVar15->Scale3D).ZW;
          local_1b8.DelayTransform.Scale3D.ZW.m128d_f64 = *&p_Var1->m128d_f64;
          local_1b8.RestoreTransform.Scale3D.ZW.m128d_f64 = *&p_Var1->m128d_f64;
          local_280.Elements.ArrayNum = *(int *)((longlong)FVar5 + 0x1b8);
          lVar18 = (longlong)local_280.Elements.ArrayNum;
          _Src = *(void **)((longlong)FVar5 + 0x1b0);
          if (local_280.Elements.ArrayNum == 0) {
            local_280.Elements.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_280.Elements.ArrayNum,0,(ForAnyElementType *)&local_280,
                       local_280.Elements.ArrayNum,&local_280.Elements.ArrayMax);
            memcpy(local_280.Elements.AllocatorInstance.Data,_Src,lVar18 * 0x18);
          }
          local_280.Head = *(uint *)((longlong)FVar5 + 0x1c0);
          local_280.bIsFull = *(bool *)((longlong)FVar5 + 0x1c4);
          MotionDelayClient_Impl::CalulateDelayTransform
                    (uVar13,pTVar22,&local_280,&local_1b8.DelayTransform);
          if (((local_2c0.Data <= &local_1b8) &&
              (&local_1b8 < (FTargetTransform *)(local_2c0.Data + (longlong)local_2b8._4_4_ * 0xd0))
              ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar21 = (int)local_2b8;
          if ((int)local_2b8 == local_2b8._4_4_) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10d0,&local_2c0,(int *)((longlong)&local_2b8 + 4));
          }
          local_2b8 = CONCAT44(local_2b8._4_4_,iVar21 + 1);
          lVar18 = (longlong)iVar21 * 0xd0;
          *(FMotionDelayTarget **)&local_2c0.Data[lVar18].field_0x0 = local_1b8.DelayTarget.Object;
          *(TReferenceControllerBase<1> **)(local_2c0.Data + lVar18 + 8) =
               local_1b8.DelayTarget.SharedReferenceCount.ReferenceController;
          if (local_1b8.DelayTarget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1b8.DelayTarget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.DelayTarget.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          *(double *)(local_2c0.Data + lVar18 + 0x10) =
               local_1b8.DelayTransform.Rotation.XY.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x10 + 8) =
               local_1b8.DelayTransform.Rotation.XY.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x20) =
               local_1b8.DelayTransform.Rotation.ZW.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x20 + 8) =
               local_1b8.DelayTransform.Rotation.ZW.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x30) =
               local_1b8.DelayTransform.Translation.XY.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x30 + 8) =
               local_1b8.DelayTransform.Translation.XY.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x40) =
               local_1b8.DelayTransform.Translation.ZW.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x40 + 8) =
               local_1b8.DelayTransform.Translation.ZW.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x50) =
               local_1b8.DelayTransform.Scale3D.XY.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x50 + 8) =
               local_1b8.DelayTransform.Scale3D.XY.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x60) =
               local_1b8.DelayTransform.Scale3D.ZW.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x60 + 8) =
               local_1b8.DelayTransform.Scale3D.ZW.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x70) =
               local_1b8.RestoreTransform.Rotation.XY.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x70 + 8) =
               local_1b8.RestoreTransform.Rotation.XY.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x80) =
               local_1b8.RestoreTransform.Rotation.ZW.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x80 + 8) =
               local_1b8.RestoreTransform.Rotation.ZW.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0x90) =
               local_1b8.RestoreTransform.Translation.XY.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0x90 + 8) =
               local_1b8.RestoreTransform.Translation.XY.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0xa0) =
               local_1b8.RestoreTransform.Translation.ZW.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0xa0 + 8) =
               local_1b8.RestoreTransform.Translation.ZW.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0xb0) =
               local_1b8.RestoreTransform.Scale3D.XY.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0xb0 + 8) =
               local_1b8.RestoreTransform.Scale3D.XY.m128d_f64[1];
          *(double *)(local_2c0.Data + lVar18 + 0xc0) =
               local_1b8.RestoreTransform.Scale3D.ZW.m128d_f64[0];
          *(double *)(local_2c0.Data + lVar18 + 0xc0 + 8) =
               local_1b8.RestoreTransform.Scale3D.ZW.m128d_f64[1];
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.DelayTarget.SharedReferenceCount.ReferenceController);
          goto LAB_145950af1;
        }
      }
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<692108519184269781>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\MotionDelayBuffer.cpp"
                          ,0x1d5,"SampleBuffer");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
LAB_145950af1:
    TStack_240.UnvisitedBitMask = TStack_240.UnvisitedBitMask & ~TStack_240._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_240);
  } while( true );
}

// FindDelayTransform @ 1459520d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FMotionDelayClient::FindDelayTransform
          (FMotionDelayClient *this,USceneComponent *param_1,uint param_2,
          TTransform<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  TCircularHistoryBuffer<UE::Math::TVector<double>_> *pTVar7;
  TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *pTVar8;
  longlong lVar9;
  TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *pTVar10;
  FWeakObjectPtr local_res10;
  USceneComponent *local_48;
  FWeakObjectPtr local_40;
  TCircularHistoryBuffer<UE::Math::TVector<double>_> local_38;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_48 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
  local_40 = local_res10;
  iVar5 = TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                      *)&MotionDelayService_Impl::DelayTargets,
                     local_res10.ObjectSerialNumber ^ local_res10.ObjectIndex,
                     (TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr> *)&local_40);
  if (iVar5 != -1) {
    lVar9 = (longlong)iVar5 * 0x20 + MotionDelayService_Impl::DelayTargets._0_8_;
    pTVar10 = (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)(lVar9 + 8);
    if (lVar9 == 0) {
      pTVar10 = (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)0x0;
    }
    if (pTVar10 != (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)0x0) {
      pFVar1 = (pTVar10->Elements).AllocatorInstance.Data;
      uVar6 = ::GetTypeHash((FMotionSource *)(pFVar1 + 0x1a0));
      iVar5 = TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMotionDelayTarget::FMotionSource>
                        ((TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
                          *)&MotionDelayService_Impl::SourceSamples,uVar6,
                         (FMotionSource *)(pFVar1 + 0x1a0));
      if (iVar5 != -1) {
        lVar9 = (longlong)iVar5 * 0x30 + MotionDelayService_Impl::SourceSamples._0_8_;
        pTVar8 = (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          pTVar8 = (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)0x0;
        }
        if (pTVar8 != (TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)0x0) {
          pTVar7 = TCircularHistoryBuffer<UE::Math::TVector<double>_>::
                   TCircularHistoryBuffer<UE::Math::TVector<double>_>
                             (&local_38,
                              (TCircularHistoryBuffer<UE::Math::TVector<double>_> *)
                              ((pTVar10->Elements).AllocatorInstance.Data + 0x1b0));
          MotionDelayClient_Impl::CalulateDelayTransform(param_2,pTVar8,pTVar7,param_3);
          return true;
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<692108519184269856>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\HeadMountedDisplay\\Private\\MotionDelayBuffer.cpp"
                         ,0x220,"SampleBuffer");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return false;
  }
  return false;
}

// GetExemptTargets @ 145952e60

void __thiscall
FMotionDelayClient::GetExemptTargets
          (FMotionDelayClient *this,TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetPriority @ 145953cb0

int __thiscall FMotionDelayClient::GetPriority(FMotionDelayClient *this)

{
  return -5;
}

// IsActiveThisFrame_Internal @ 1459540c0

bool __thiscall
FMotionDelayClient::IsActiveThisFrame_Internal
          (FMotionDelayClient *this,FSceneViewExtensionContext *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0xc0))();
  if ((iVar1 != 0) &&
     (0 < (int)(MotionDelayService_Impl::DelayTargets._8_4_ -
               MotionDelayService_Impl::DelayTargets._52_4_))) {
    return true;
  }
  return false;
}

// PostRenderViewFamily_RenderThread @ 145954840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMotionDelayClient::PostRenderViewFamily_RenderThread
          (FMotionDelayClient *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  if (MotionDelayService_Impl::PostRenderCleanupId_RenderThread != param_2->FrameNumber) {
    MotionDelayService_Impl::PostRenderCleanupId_RenderThread = param_2->FrameNumber;
  }
  return;
}

// Restore_RenderThread @ 145957290

void __thiscall
FMotionDelayClient::Restore_RenderThread(FMotionDelayClient *this,FSceneInterface *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TargetTransforms_RenderThread).ArrayNum;
  pFVar4 = (this->TargetTransforms_RenderThread).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0xd0;
  while( true ) {
    if ((this->TargetTransforms_RenderThread).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMotionDelayClient::FTargetTransform,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(longlong *)pFVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FLateUpdateManager::Apply_RenderThread
              ((FLateUpdateManager *)(*(longlong *)pFVar4 + 0x10),param_1,
               (TTransform<double> *)(pFVar4 + 0x10),(TTransform<double> *)(pFVar4 + 0x70));
    pFVar4 = pFVar4 + 0xd0;
  }
  return;
}

