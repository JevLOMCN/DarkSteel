// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 5

// FRenderPipeline @ 14d78ab80

FRenderPipeline * __thiscall
UE::MediaCapture::FRenderPipeline::FRenderPipeline(FRenderPipeline *this,UMediaCapture *param_1)

{
  TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::MediaCapture::FRenderPass,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = &this->RenderPasses;
  this->MediaCapture = param_1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RenderPasses).ArrayNum = 0;
  (this->RenderPasses).ArrayMax = 0;
  pTVar3 = FRenderPass::CreateRenderPasses(&local_18,param_1);
  if (pTVar1 != pTVar3) {
    DestructItems<UE::MediaCapture::FRenderPass,int>
              ((FRenderPass *)(pTVar1->AllocatorInstance).Data,(this->RenderPasses).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->RenderPasses).ArrayNum = pTVar3->ArrayNum;
    (this->RenderPasses).ArrayMax = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  DestructItems<UE::MediaCapture::FRenderPass,int>
            ((FRenderPass *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FRenderPass *)local_18.AllocatorInstance.Data != (FRenderPass *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return this;
}

// ExecutePasses_RenderThread @ 14d7a6a40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGViewableResource * __thiscall
UE::MediaCapture::FRenderPipeline::ExecutePasses_RenderThread
          (FRenderPipeline *this,FCaptureFrameArgs *param_1,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2,FRDGBuilder *param_3,
          FRDGTexture *param_4)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCaptureFrame *pFVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FRDGViewableResource *pFVar7;
  ulonglong uVar8;
  FRDGTexture *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  FRenderPass *pFVar12;
  undefined8 *puVar13;
  FRenderPass *pFVar14;
  undefined1 local_res18 [8];
  FRDGBuilder *local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FCaptureFrame *local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  
  local_res20 = param_3;
  if ((param_2->Object == (FCaptureFrame *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRDGViewableResource *)(*pcVar4)();
    return pFVar7;
  }
  if (param_2->Object->bMediaCaptureActive != (atomic<bool>)0x0) {
    uVar1 = (this->RenderPasses).ArrayNum;
    uVar8 = (ulonglong)(int)uVar1;
    pFVar12 = (FRenderPass *)(this->RenderPasses).AllocatorInstance.Data;
    pFVar14 = pFVar12 + uVar8;
    puVar13 = (undefined8 *)&(pFVar12->ExecutePassDelegate).field_0x8;
    while( true ) {
      if ((this->RenderPasses).ArrayNum != (int)uVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::MediaCapture::FRenderPass_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar14) {
        return (FRDGViewableResource *)param_4;
      }
      if ((param_2->Object == (FCaptureFrame *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGViewableResource *)(*pcVar4)();
        return pFVar7;
      }
      cVar6 = (**(code **)(param_2->Object->_padding_ + 0x18))();
      if (cVar6 == '\0') break;
      if ((param_2->Object == (FCaptureFrame *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FRDGViewableResource *)(*pcVar4)();
        return pFVar7;
      }
      pFVar9 = (FRDGTexture *)
               RegisterPassOutputResource(&param_2->Object->RenderPassResources,local_res20,pFVar12)
      ;
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(puVar13 + -1),&local_68)
      ;
      plVar10 = (longlong *)0x0;
      if (*(int *)(puVar13 + 1) != 0) {
        plVar10 = (longlong *)*puVar13;
      }
      local_78 = pFVar3;
      local_70 = pTVar2;
      (**(code **)(*plVar10 + 0x60))(plVar10,param_1,&local_78,param_4,pFVar9);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar12 = pFVar12 + 1;
      uVar8 = (ulonglong)uVar1;
      puVar13 = puVar13 + 8;
      param_4 = pFVar9;
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      local_88.Data = (FScriptContainerElement *)0x0;
      local_80 = (this->MediaCapture->MediaOutputName).Data.ArrayNum;
      lVar11 = (longlong)local_80;
      _Src = (this->MediaCapture->MediaOutputName).Data.AllocatorInstance.Data;
      if (local_80 == 0) {
        local_7c = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_80,0,&local_88,local_80,&local_7c);
        memcpy(local_88.Data,_Src,lVar11 * 2);
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      if (local_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data);
      }
    }
  }
  return (FRDGViewableResource *)param_4;
}

// InitializePassOutputResource @ 14d7b0470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MediaCapture::FRenderPipeline::InitializePassOutputResource
          (FRenderPassFrameResources *param_1,int param_2,FInitializePassOutputArgs *param_3,
          FRenderPass *param_4)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [8];
  FName *local_e0;
  longlong **local_d8;
  FName *local_d0;
  undefined8 **local_c8;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  longlong *local_78;
  byte local_70;
  undefined8 *local_68;
  byte local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_c0);
  if (((*(int *)&(param_4->InitializePassOutputDelegate).field_0x10 == 0) ||
      (plVar8 = *(longlong **)&(param_4->InitializePassOutputDelegate).field_0x8,
      plVar8 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar8 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_c0);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_c0);
    if (param_4->OutputType == Texture) {
      FVar2 = param_4->Name;
      uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(param_1->PassTextureOutputs).field_0x8 !=
          *(int *)&(param_1->PassTextureOutputs).field_0x34) {
        puVar9 = *(undefined1 **)&(param_1->PassTextureOutputs).field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(param_1->PassTextureOutputs).field_0x38;
        }
        iVar7 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(param_1->PassTextureOutputs).field_0x48 - 1U &
                                  FVar2.Number + uVar6) * 4);
        if (iVar7 != -1) {
          do {
            if (*(FName *)(*(longlong *)&param_1->PassTextureOutputs + (longlong)iVar7 * 0x18) ==
                FVar2) goto LAB_14d7b0684;
            iVar7 = *(int *)(*(longlong *)&param_1->PassTextureOutputs + 0x10 +
                            (longlong)iVar7 * 0x18);
          } while (iVar7 != -1);
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_a8);
      if (*(int *)&(param_4->InitializePassOutputDelegate).field_0x10 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)&(param_4->InitializePassOutputDelegate).field_0x8;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,&local_78,param_3,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      if ((local_70 != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_f8 = local_78;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x30))();
      }
      if ((1 < (ulonglong)local_70) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_70])(&local_78);
      local_d8 = &local_f8;
      local_e0 = &param_4->Name;
      TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TRefCountPtr<IPooledRenderTarget>_&&>_>
                ((TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
                  *)&param_1->PassTextureOutputs,
                 (TPairInitializer<FName_const_&,TRefCountPtr<IPooledRenderTarget>_&&> *)local_e8,
                 (bool *)&local_e0);
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x38))();
      }
    }
    else {
LAB_14d7b0684:
      if (param_4->OutputType == Buffer) {
        FVar2 = param_4->Name;
        uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        if (*(int *)&(param_1->PassBufferOutputs).field_0x8 !=
            *(int *)&(param_1->PassBufferOutputs).field_0x34) {
          puVar9 = *(undefined1 **)&(param_1->PassBufferOutputs).field_0x40;
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = &(param_1->PassBufferOutputs).field_0x38;
          }
          iVar7 = *(int *)(puVar9 + (ulonglong)
                                    (*(int *)&(param_1->PassBufferOutputs).field_0x48 - 1U &
                                    FVar2.Number + uVar6) * 4);
          if (iVar7 != -1) {
            do {
              if (*(FName *)(*(longlong *)&param_1->PassBufferOutputs + (longlong)iVar7 * 0x18) ==
                  FVar2) {
                return;
              }
              iVar7 = *(int *)(*(longlong *)&param_1->PassBufferOutputs + 0x10 +
                              (longlong)iVar7 * 0x18);
            } while (iVar7 != -1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,&local_90);
        if (*(int *)&(param_4->InitializePassOutputDelegate).field_0x10 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = *(longlong **)&(param_4->InitializePassOutputDelegate).field_0x8;
        }
        (**(code **)(*plVar8 + 0x60))(plVar8,&local_68,param_3,param_2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_90);
        if ((local_60 != 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_f0 = local_68;
        if (local_68 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
          UNLOCK();
        }
        if ((1 < (ulonglong)local_60) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_60])(&local_68);
        local_d0 = &param_4->Name;
        local_c8 = &local_f0;
        TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TRefCountPtr<FRDGPooledBuffer>_&&>_>
                  ((TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
                    *)&param_1->PassBufferOutputs,
                   (TPairInitializer<FName_const_&,TRefCountPtr<FRDGPooledBuffer>_&&> *)
                   (local_e8 + 4),(bool *)&local_d0);
        if (local_f0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_f0 + 1);
          LOCK();
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (((iVar7 == 1) && (piVar1 != (int *)0x0)) && (local_f0 != (undefined8 *)0x0)) {
            (**(code **)*local_f0)(local_f0,1);
          }
        }
      }
    }
  }
  return;
}

// InitializeResources_RenderThread @ 14d7b09d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::MediaCapture::FRenderPipeline::InitializeResources_RenderThread
          (FRenderPipeline *this,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_1,
          FRDGBuilder *param_2,FRDGTexture *param_3)

{
  int iVar1;
  UMediaCapture *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FRenderPass *pFVar7;
  FRenderPass *pFVar8;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined1 local_138 [8];
  FRDGBuilder *local_130;
  UMediaCapture *local_128;
  FRDGTexture *pFStack_120;
  FInitializePassOutputArgs local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [64];
  void *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [64];
  void *local_70;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_130 = param_2;
  if (param_1->Object == (FCaptureFrame *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_1->Object->bMediaCaptureActive != (atomic<bool>)0x0) {
    pFVar7 = (FRenderPass *)(this->RenderPasses).AllocatorInstance.Data;
    iVar1 = (this->RenderPasses).ArrayNum;
    pUVar2 = this->MediaCapture;
    pFVar8 = pFVar7 + iVar1;
    local_108._0_4_ = 0;
    local_108._4_4_ = 0;
    local_100._0_8_ = 0;
    local_100._8_8_ = 0;
    local_100._32_8_ = 0;
    local_100._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_100._48_8_ = _UNK_150631d98;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    local_b0._0_8_ = 0;
    local_b0._8_8_ = 0;
    local_b0._32_8_ = 0;
    local_b0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_b0._48_8_ = _UNK_150631d98;
    local_70 = (void *)0x0;
    local_68 = 0;
    while( true ) {
      if ((this->RenderPasses).ArrayNum != iVar1) {
        local_138[0] = 0;
        `TCheckedPointerIterator<UE::MediaCapture::FRenderPass_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_138);
      }
      if (pFVar7 == pFVar8) break;
      local_128 = pUVar2;
      pFStack_120 = param_3;
      if (param_1->Object == (FCaptureFrame *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_118.MediaCapture = local_128;
      local_118.InputResource = (FRDGViewableResource *)pFStack_120;
      InitializePassOutputResource
                ((FRenderPassFrameResources *)local_108,param_1->Object->FrameId,&local_118,pFVar7);
      param_3 = (FRDGTexture *)
                RegisterPassOutputResource((FRenderPassFrameResources *)local_108,local_130,pFVar7);
      if (param_3 == (FRDGTexture *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("OutputResource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                           ,0x206,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar7 = pFVar7 + 1;
    }
    iVar1 = (this->RenderPasses).ArrayNum;
    uVar6 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar6 < iVar1) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_148 = (longlong)(int)uVar6;
      local_140 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_108 = *(undefined1 (*) [8])
                 ((this->RenderPasses).AllocatorInstance.Data +
                 (longlong)(this->RenderPasses).ArrayNum * 0x40 + -0x10);
    if (param_1->Object == (FCaptureFrame *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FRenderPassFrameResources::operator=
              (&param_1->Object->RenderPassResources,(FRenderPassFrameResources *)local_108);
    local_68 = 0;
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b0);
    local_b8 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_100);
  }
  return;
}

// RegisterPassOutputResource @ 14d7b9bd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGViewableResource * __cdecl
UE::MediaCapture::FRenderPipeline::RegisterPassOutputResource
          (FRenderPassFrameResources *param_1,FRDGBuilder *param_2,FRenderPass *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,TRefCountPtr<IPooledRenderTarget>_> *pTVar3;
  FRDGViewableResource *pFVar4;
  undefined8 *puVar5;
  FRDGTexture *pFVar6;
  TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_> *pTVar7;
  FRDGBuffer *pFVar8;
  
  if (param_3->OutputType != Texture) {
    pTVar7 = TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
                     *)&param_1->PassBufferOutputs,param_3->Name);
    if (pTVar7 == (TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FRDGViewableResource *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar8 = FRDGBuilder::RegisterExternalBuffer
                       (param_2,(TRefCountPtr<FRDGPooledBuffer> *)&pTVar7->field_0x8,
                        *(wchar_t **)(*(longlong *)&pTVar7->field_0x8 + 0x88),None);
    return (FRDGViewableResource *)pFVar8;
  }
  pTVar3 = TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
                   *)&param_1->PassTextureOutputs,param_3->Name);
  if (pTVar3 == (TTuple<FName,TRefCountPtr<IPooledRenderTarget>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRDGViewableResource *)(*pcVar1)();
      return pFVar4;
    }
  }
  puVar5 = (undefined8 *)(**(code **)(**(longlong **)&pTVar3->field_0x8 + 0x10))();
  pFVar6 = FRDGBuilder::RegisterExternalTexture
                     (param_2,(TRefCountPtr<IPooledRenderTarget> *)&pTVar3->field_0x8,
                      (wchar_t *)*puVar5,None);
  return (FRDGViewableResource *)pFVar6;
}

