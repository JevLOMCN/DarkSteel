// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 27

// FVulkanViewport @ 145bc9070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanViewport * __thiscall
FVulkanViewport::FVulkanViewport
          (FVulkanViewport *this,FVulkanDevice *param_1,void *param_2,uint param_3,uint param_4,
          bool param_5,EPixelFormat param_6)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanViewport *pFVar6;
  longlong lVar7;
  FVulkanDynamicRHI *this_00;
  wchar_t *pwVar8;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar9;
  IConsoleManager *pIVar10;
  ForElementType<TRefCountPtr<FVulkanTexture>_> *pFVar11;
  ulonglong uVar12;
  undefined1 auStack_108 [32];
  FVulkanViewport **local_e8;
  FScriptContainerElement *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  FVulkanViewport *local_b8;
  void *local_b0;
  undefined1 local_a8 [32];
  ForElementType<TRefCountPtr<FVulkanTexture>_> local_88;
  void **ppvStack_80;
  FVulkanViewport *local_78;
  ForElementType<TRefCountPtr<FVulkanTexture>_> *local_70;
  undefined1 local_68 [16];
  ForElementType<TRefCountPtr<FVulkanTexture>_> local_58;
  void **ppvStack_50;
  FVulkanViewport *local_48;
  ForElementType<TRefCountPtr<FVulkanTexture>_> *local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_Viewport);
  this->Device = param_1;
  this->_padding_ = (longlong)&___7FVulkanViewport__6B_;
  (this->BackBufferImages).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0;
  (this->BackBufferImages).ArrayNum = 0;
  (this->BackBufferImages).ArrayMax = 6;
  (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData =
       (ForElementType<FVulkanSemaphore_*>)0x0;
  (this->RenderingDoneSemaphores).ArrayNum = 0;
  (this->RenderingDoneSemaphores).ArrayMax = 6;
  (this->TextureViews).Array.AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  (this->TextureViews).Array.ArrayNum = 0;
  (this->TextureViews).Array.ArrayMax = 6;
  (this->RHIBackBuffer).Reference = (FVulkanBackBuffer *)0x0;
  (this->RenderingBackBuffer).Reference = (FVulkanTexture *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RecreatingSwapchain,4000);
  this->SizeY = param_4;
  this->bRenderOffscreen = false;
  this->bIsFullscreen = param_5;
  this->PixelFormat = param_6;
  this->SizeX = param_3;
  this->AcquiredImageIndex = -1;
  this->SwapChain = (FVulkanSwapChain *)0x0;
  this->WindowHandle = param_2;
  this->PresentCount = 0;
  this->AcquiredSemaphore = (FVulkanSemaphore *)0x0;
  (this->CustomPresent).Reference = (FRHICustomPresent *)0x0;
  (this->LastFrameSyncPoint).Reference = (FVulkanSyncPoint *)0x0;
  this->CachedOrientation = Unknown;
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x73,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FVulkanViewport *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar10 = IConsoleManager::Get();
      CVarVsync = (IConsoleVariable *)(**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10,L"r.VSync",1)
      ;
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar5 = (**(code **)(*(longlong *)CVarVsync + 200))();
  this->LockToVsync = iVar5 != 0;
  lVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  pFVar1 = (ForAnyElementType *)(lVar7 + 0x170);
  pFVar2 = pFVar1->Data;
  local_b8 = this;
  if ((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
     ((FScriptContainerElement *)&local_b8 < pFVar2 + (longlong)*(int *)(lVar7 + 0x17c) * 8)) {
    local_d0 = (longlong)*(int *)(lVar7 + 0x178);
    local_c8 = 8;
    local_e8 = &local_b8;
    local_e0 = pFVar2;
    local_d8 = (longlong)*(int *)(lVar7 + 0x17c);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FVulkanViewport *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = *(int *)(lVar7 + 0x178);
  if (iVar5 == *(int *)(lVar7 + 0x17c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar1,(int *)(lVar7 + 0x17c));
  }
  pFVar2 = pFVar1->Data;
  *(int *)(lVar7 + 0x178) = iVar5 + 1;
  *(FVulkanViewport **)(pFVar2 + (longlong)iVar5 * 8) = local_b8;
  this_00 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  FVulkanDynamicRHI::InitInstance(this_00);
  pwVar8 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar8,L"RenderOffScreen");
  this->bRenderOffscreen = bVar4;
  local_88 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`FVulkanViewport::FVulkanViewport'::`2'::<lambda_1>,1,0>::
              _vftable_;
  ppvStack_80 = &local_b0;
  local_a8._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FVulkanViewport::FVulkanViewport'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
       ::Call;
  local_70 = (ForElementType<TRefCountPtr<FVulkanTexture>_> *)0x0;
  local_b0 = param_2;
  local_78 = this;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FVulkanViewport::FVulkanViewport_::__l2::TSTR_CreateSwapchain129>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)(local_a8 + 0x10));
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_a8._16_8_;
    local_40 = local_70;
    local_58 = local_88;
    ppvStack_50 = ppvStack_80;
    local_48 = local_78;
    local_a8._16_8_ = (code *)0x0;
    local_38 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`FVulkanViewport::FVulkanViewport'::__l2::TSTR_CreateSwapchain129>::
             Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar9);
    uVar12 = (ulonglong)local_38;
    if (2 < uVar12) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FVulkanViewport *)(*pcVar3)();
        return pFVar6;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pFVar11 = &local_58;
        if (local_40 != (ForElementType<TRefCountPtr<FVulkanTexture>_> *)0x0) {
          pFVar11 = local_40;
        }
        (**(code **)((longlong)*pFVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])(local_68);
    }
  }
  if ((code *)local_a8._16_8_ != (code *)0x0) {
    pFVar11 = &local_88;
    if (local_70 != (ForElementType<TRefCountPtr<FVulkanTexture>_> *)0x0) {
      pFVar11 = local_70;
    }
    (**(code **)((longlong)*pFVar11 + 0x10))();
  }
  FlushRenderingCommands();
  if (this->bRenderOffscreen == false) {
    lVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if (*(char *)(lVar7 + 0x1c0) == '\0') {
      TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
      ::AddRaw<FVulkanViewport>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                  *)&FCoreDelegates::OnSystemResolutionChanged,(FVulkanViewport *)local_a8,
                 (pmf_42862469)this);
    }
  }
  return this;
}

// ~FVulkanViewport @ 145bc9670

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanViewport::~FVulkanViewport(FVulkanViewport *this)

{
  int *piVar1;
  int iVar2;
  FVulkanTexture *pFVar3;
  FVulkanBackBuffer *pFVar4;
  ForElementType<FVulkanSemaphore_*> FVar5;
  FVulkanDevice *this_00;
  FRHIResource *pFVar6;
  FVulkanSwapChain *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FVulkanSyncPoint *pFVar10;
  ForElementType<void_*> FVar11;
  code *pcVar12;
  bool bVar13;
  longlong lVar14;
  ForElementType<FVulkanSemaphore_*> FVar15;
  undefined8 *puVar16;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar17;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  FVulkanViewport *pFVar25;
  FVulkanViewport *local_38 [2];
  
  uVar21 = 0;
  this->_padding_ = (longlong)&___7FVulkanViewport__6B_;
  pFVar3 = (this->RenderingBackBuffer).Reference;
  if (pFVar3 != (FVulkanTexture *)0x0) {
    (this->RenderingBackBuffer).Reference = (FVulkanTexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->RHIBackBuffer).Reference;
  if (pFVar4 != (FVulkanBackBuffer *)0x0) {
    pFVar4->Viewport = (FVulkanViewport *)0x0;
    if (pFVar4->_padding_ != 0) {
      pFVar4->_padding_ = 0;
      pFVar4->_padding_ = 0;
    }
    pFVar4->_padding_ = 0;
    pFVar4 = (this->RHIBackBuffer).Reference;
    if (pFVar4 != (FVulkanBackBuffer *)0x0) {
      (this->RHIBackBuffer).Reference = (FVulkanBackBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if ((this->bRenderOffscreen == false) &&
     (lVar14 = (**(code **)(GDynamicRHI->_padding_ + 0x30))(), *(char *)(lVar14 + 0x1c0) == '\0')) {
    TIndirectArray<FVulkanView,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::Empty
              (&this->TextureViews,0);
    lVar14 = (longlong)(this->RenderingDoneSemaphores).ArrayNum;
    uVar20 = uVar21;
    uVar22 = uVar21;
    if (0 < lVar14) {
      do {
        uVar19 = (uint)uVar20;
        uVar23 = ~uVar19 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar19 < (this->RenderingDoneSemaphores).ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar5 = (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData;
        FVar15 = (ForElementType<FVulkanSemaphore_*>)&this->RenderingDoneSemaphores;
        if (FVar5 != (ForElementType<FVulkanSemaphore_*>)0x0) {
          FVar15 = FVar5;
        }
        puVar16 = *(undefined8 **)((longlong)FVar15 + uVar22 * 8);
        piVar1 = (int *)(puVar16 + 1);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if (piVar1 == (int *)0x0) {
            puVar16 = (undefined8 *)0x0;
          }
          if (puVar16 != (undefined8 *)0x0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
        this_00 = this->Device;
        uVar24 = 0;
        if ((int)uVar19 < (this->BackBufferImages).ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar18 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
        if (FVar18 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
          FVar17 = FVar18;
        }
        FVulkanDevice::NotifyDeletedImage
                  (this_00,*(VkImage_T **)(*(longlong *)((longlong)FVar17 + uVar22 * 8) + 0x170),
                   true);
        uVar24 = 0;
        if ((int)uVar19 < (this->BackBufferImages).ArrayNum) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar18 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
        FVar17 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
        if (FVar18 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
          FVar17 = FVar18;
        }
        pFVar6 = *(FRHIResource **)((longlong)FVar17 + uVar22 * 8);
        if (pFVar6 != (FRHIResource *)0x0) {
          *(undefined8 *)((longlong)FVar17 + uVar22 * 8) = 0;
          FRHIResource::Release(pFVar6);
        }
        uVar22 = uVar22 + 1;
        uVar20 = (ulonglong)(uVar19 + 1);
      } while ((longlong)uVar22 < lVar14);
    }
    if (this->SwapChain != (FVulkanSwapChain *)0x0) {
      FVulkanSwapChain::Destroy(this->SwapChain,(FVulkanSwapChainRecreateInfo *)0x0);
      pFVar7 = this->SwapChain;
      if (pFVar7 != (FVulkanSwapChain *)0x0) {
        pFVar8 = (pFVar7->ImageAcquiredFences).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        pFVar8 = (pFVar7->ImageAcquiredSemaphore).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        ::operator_delete(pFVar7,0x90);
      }
      this->SwapChain = (FVulkanSwapChain *)0x0;
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnSystemResolutionChanged,this);
  }
  lVar14 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  local_38[0] = this;
  if (((*(FVulkanViewport ***)(lVar14 + 0x170) <= local_38) &&
      (local_38 < *(FVulkanViewport ***)(lVar14 + 0x170) + *(int *)(lVar14 + 0x17c))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar2 = *(int *)(lVar14 + 0x178);
  if (iVar2 != 0) {
    plVar9 = *(longlong **)(lVar14 + 0x170);
    bVar13 = (FVulkanViewport *)*plVar9 != local_38[0];
    uVar20 = uVar21;
    pFVar25 = local_38[0];
    uVar22 = uVar21;
    do {
      uVar19 = (uint)uVar20;
      uVar24 = uVar19;
      do {
        uVar21 = uVar21 + 1;
        uVar24 = uVar24 + 1;
        uVar20 = (ulonglong)uVar24;
        if ((longlong)iVar2 <= (longlong)uVar21) break;
      } while (bVar13 == ((FVulkanViewport *)plVar9[uVar21] != pFVar25));
      if (bVar13 != false) {
        uVar23 = (uint)uVar22;
        if (uVar23 != uVar19) {
          memmove(plVar9 + (int)uVar23,plVar9 + (int)uVar19,(longlong)(int)(uVar24 - uVar19) << 3);
          pFVar25 = local_38[0];
        }
        uVar22 = (ulonglong)(uVar23 + (uVar24 - uVar19));
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar21 < (longlong)iVar2);
    *(int *)(lVar14 + 0x178) = (int)uVar22;
  }
  pFVar10 = (this->LastFrameSyncPoint).Reference;
  if (pFVar10 != (FVulkanSyncPoint *)0x0) {
    plVar9 = &pFVar10->_padding_;
    LOCK();
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if (((int)lVar14 == 1) && (plVar9 != (longlong *)0x0)) {
      (**(code **)pFVar10->_padding_)();
    }
  }
  pFVar6 = (FRHIResource *)(this->CustomPresent).Reference;
  if (pFVar6 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar6);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RecreatingSwapchain);
  pFVar3 = (this->RenderingBackBuffer).Reference;
  if (pFVar3 != (FVulkanTexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->RHIBackBuffer).Reference;
  if (pFVar4 != (FVulkanBackBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  TIndirectArray<FVulkanView,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::Empty
            (&this->TextureViews,0);
  FVar11 = (this->TextureViews).Array.AllocatorInstance.SecondaryData;
  if (FVar11 != (ForElementType<void_*>)0x0) {
    FMemory::Free((void *)FVar11);
  }
  FVar5 = (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FVulkanSemaphore_*>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar18 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
  if (FVar18 == (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
    FVar18 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
  }
  DestructItems<TRefCountPtr<FVulkanTexture>,int>
            ((TRefCountPtr<FVulkanTexture> *)FVar18,(this->BackBufferImages).ArrayNum);
  FVar18 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
  if (FVar18 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
    FMemory::Free((void *)FVar18);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145bc9c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FVulkanViewport::FVulkanViewport'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FVulkanGenericPlatformWindowContext *pFVar1;
  FVulkanViewport *this_00;
  IRHICommandContext *pIVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FVulkanCommandListContext *pFVar5;
  
  pFVar1 = *(FVulkanGenericPlatformWindowContext **)this;
  this_00 = *(FVulkanViewport **)((longlong)this + 8);
  if (((GRHICommandList.bLatchedBypass) && ((param_1->field_0x29b & 0x20) != 0)) ||
     (param_1->field_0x64 != '\0')) {
    pIVar2 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    lVar3 = (**(code **)(pIVar2->_padding_ + 0x148))(pIVar2);
    pFVar5 = (FVulkanCommandListContext *)(lVar3 + -0x50);
    if (lVar3 == 0) {
      pFVar5 = (FVulkanCommandListContext *)0x0;
    }
    FVulkanViewport::CreateSwapchain(this_00,pFVar5,(FVulkanSwapChainRecreateInfo *)0x0,pFVar1);
  }
  else {
    puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar4;
    *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,``FVulkanViewport::FVulkanViewport'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[2] = pFVar1;
    puVar4[3] = this_00;
    puVar4[4] = L"TRHILambdaCommand";
  }
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  return;
}

// operator() @ 145bc9cf0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

int __thiscall `FVulkanViewport::DoCheckedSwapChainJob'::__l2::<lambda_1>::operator()(void *this)

{
  uint uVar1;
  longlong lVar2;
  FVulkanSwapChain *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  EStatus EVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  EVar7 = Healthy;
  uVar1 = *(uint *)(lVar2 + 0x124);
  if (uVar1 != 0xffffffff) {
    this_00 = *(FVulkanSwapChain **)(lVar2 + 0x128);
    uVar5 = 0;
    if ((int)uVar1 < *(int *)(lVar2 + 0x98)) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    lVar8 = *(longlong *)(lVar2 + 0x90);
    if (*(longlong *)(lVar2 + 0x90) == 0) {
      lVar8 = lVar2 + 0x60;
    }
    EVar7 = FVulkanSwapChain::Present
                      (this_00,*(FVulkanQueue **)this,
                       *(FVulkanSemaphore **)(lVar8 + (longlong)(int)uVar1 * 8));
  }
  return EVar7;
}

// operator() @ 145bc9dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FVulkanViewport::RecreateSwapchainFromRT'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  FVulkanViewport *this_00;
  FVulkanGenericPlatformWindowContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  longlong lVar5;
  FVulkanCommandListContext *pFVar6;
  FVulkanSwapChainRecreateInfo local_18;
  
  local_18.SwapChain = (VkSwapchainKHR_T *)0x0;
  local_18.Surface = (VkSurfaceKHR_T *)0x0;
  FVulkanViewport::DestroySwapchain(*(FVulkanViewport **)this,&local_18);
  *(undefined1 *)(*(longlong *)this + 0x121) = *(undefined1 *)((longlong)this + 8);
  this_00 = *(FVulkanViewport **)this;
  pFVar1 = *(FVulkanGenericPlatformWindowContext **)((longlong)this + 0x10);
  pIVar4 = FRHICommandListBase::GetContext(param_1);
  lVar5 = (**(code **)(pIVar4->_padding_ + 0x148))();
  pFVar6 = (FVulkanCommandListContext *)(lVar5 + -0x50);
  if (lVar5 == 0) {
    pFVar6 = (FVulkanCommandListContext *)0x0;
  }
  FVulkanViewport::CreateSwapchain(this_00,pFVar6,&local_18,pFVar1);
  if (local_18.Surface != (VkSurfaceKHR_T *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecreateInfo.Surface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x170,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_18.SwapChain != (VkSwapchainKHR_T *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecreateInfo.SwapChain == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x171,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// operator() @ 145bc9eb0

void __thiscall
`FVulkanViewport::AdvanceBackBufferFrame'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(*(longlong *)this + 0xe0);
  if (*(longlong *)(lVar1 + 600) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined8 *)(lVar1 + 0x170) = 0;
  if (*(longlong *)(lVar1 + 0x150) != 0) {
    *(undefined8 *)(lVar1 + 0x150) = 0;
    *(undefined8 *)(lVar1 + 0x158) = 0;
  }
  return;
}

// operator() @ 145bc9f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
`FVulkanViewport::GetBackBuffer'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FVulkanBackBuffer *this_00;
  code *pcVar1;
  bool bVar2;
  IRHICommandContext *pIVar3;
  longlong lVar4;
  FVulkanCommandListContext *pFVar5;
  
  this_00 = *(FVulkanBackBuffer **)(*(longlong *)this + 0xe0);
  if (this_00->Viewport == (FVulkanViewport *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Viewport",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (GVulkanDelayAcquireImage == None) {
    pIVar3 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    lVar4 = (**(code **)(pIVar3->_padding_ + 0x148))();
    pFVar5 = (FVulkanCommandListContext *)(lVar4 + -0x50);
    if (lVar4 == 0) {
      pFVar5 = (FVulkanCommandListContext *)0x0;
    }
    FVulkanBackBuffer::AcquireBackBufferImage(this_00,pFVar5);
  }
  return;
}

// AdvanceBackBufferFrame @ 145bca4c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanViewport::AdvanceBackBufferFrame(FVulkanViewport *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  FVulkanViewport *local_res8;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x10f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bRenderOffscreen == false) {
    lVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if ((*(char *)(lVar3 + 0x1c0) == '\0') && (GVulkanDelayAcquireImage != DelayAcquire)) {
      if ((this->RHIBackBuffer).Reference == (FVulkanBackBuffer *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RHIBackBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                           ,0x113,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_res8 = this;
      if (((GRHICommandList.bLatchedBypass != false) && ((param_1->field_0x29b & 0x20) != 0)) ||
         (param_1->field_0x64 != '\0')) {
        `FVulkanViewport::AdvanceBackBufferFrame'::__l12::<lambda_1>::operator()
                  (&local_res8,param_1);
        return;
      }
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar4;
      *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::AdvanceBackBufferFrame'::`12'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = L"TRHILambdaCommand";
      puVar4[2] = this;
    }
  }
  return;
}

// CreateSwapchain @ 145bcb810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanViewport::CreateSwapchain
          (FVulkanViewport *this,FVulkanCommandListContext *param_1,
          FVulkanSwapChainRecreateInfo *param_2,FVulkanGenericPlatformWindowContext *param_3)

{
  TArray<TRefCountPtr<FVulkanTexture>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int *piVar1;
  schar sVar2;
  int iVar3;
  FVulkanTexture *pFVar4;
  FVulkanDevice *pFVar5;
  ForElementType<FVulkanSemaphore_*> FVar6;
  VkSurfaceKHR_T *pVVar7;
  _func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *p_Var8;
  VkImage_T *pVVar9;
  code *pcVar10;
  bool bVar11;
  _func___cdecl_void_VkInstance_T_ptr_VkSurfaceKHR_T_ptr_VkAllocationCallbacks_ptr *p_Var12;
  bool bVar13;
  EPixelFormat EVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  FVulkanSwapChain *pFVar18;
  FVulkanSemaphore *this_01;
  FVulkanSemaphore *pFVar19;
  FVulkanBackBuffer *pFVar20;
  FRHITextureCreateDesc *pFVar21;
  FVulkanDynamicRHI *this_02;
  FVulkanTexture *this_03;
  VkImageSubresourceRange *pVVar22;
  FVulkanCommandBuffer *pFVar23;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar24;
  ForElementType<FVulkanSemaphore_*> FVar25;
  int iVar26;
  uint uVar27;
  FVulkanBackBuffer *pFVar28;
  longlong lVar29;
  undefined1 auStackY_548 [32];
  FStereoShaderAspects local_4e8 [4];
  uint local_4e4;
  TArray<VkImage_T_*,TSizedDefaultAllocator<32>_> local_4e0;
  FVulkanCommandListContext *local_4d0;
  uint local_4c8;
  uint uStack_4c4;
  FVulkanGenericPlatformWindowContext *local_4c0;
  VkDebugUtilsObjectNameInfoEXT local_4b8;
  FScriptContainerElement *local_488;
  int iStack_480;
  undefined4 uStack_47c;
  FVulkanRHIExternalImageDeleteCallbackInfo local_478;
  FRHITransientHeapAllocation local_468;
  TArrayView<VkImage_T_*_const,int> local_448;
  VkImageSubresourceRange local_438;
  FRHITextureDesc local_418;
  wchar_t *local_3c8;
  undefined8 local_3c0;
  FResourceBulkDataInterface *local_3b8;
  FName local_3b0;
  FName local_3a8;
  VkImageSubresourceRange local_398;
  FRHITextureCreateDesc local_378;
  FRHITextureCreateDesc local_2f8;
  FVulkanPipelineBarrier local_278;
  FRHITextureCreateDesc local_158;
  FRHITextureCreateDesc local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_548;
  local_4e4 = 0;
  pFVar4 = (this->RenderingBackBuffer).Reference;
  local_4d0 = param_1;
  local_4c0 = param_3;
  if (pFVar4 != (FVulkanTexture *)0x0) {
    (this->RenderingBackBuffer).Reference = (FVulkanTexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar28 = (this->RHIBackBuffer).Reference;
  if (pFVar28 != (FVulkanBackBuffer *)0x0) {
    (this->RHIBackBuffer).Reference = (FVulkanBackBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar28);
  }
  if (this->bRenderOffscreen == false) {
    lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if (*(char *)(lVar17 + 0x1c0) == '\0') {
      if ((this->SwapChain != (FVulkanSwapChain *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("SwapChain == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                              ,0x1b1,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      sVar2 = this->LockToVsync;
      uVar27 = this->SizeY;
      uVar16 = this->SizeX;
      pFVar5 = this->Device;
      local_4e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4e0.ArrayNum = 0;
      local_4e0.ArrayMax = 0;
      bVar13 = this->bIsFullscreen;
      local_4e4 = 3;
      lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
      pFVar18 = FVulkanSwapChain::Create
                          (*(VkInstance_T **)(lVar17 + 0x140),pFVar5,&this->PixelFormat,uVar16,
                           uVar27,bVar13,&local_4e4,&local_4e0,sVar2,local_4c0,param_2);
      this->SwapChain = pFVar18;
      if (pFVar18 != (FVulkanSwapChain *)0x0) {
        if ((local_4e0.ArrayNum < 3) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Images.Num() >= NUM_BUFFERS",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                                ,0x1c3,L"We wanted at least %i images, actual Num: %i"), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar3 = (this->RenderingDoneSemaphores).ArrayNum;
        if (((iVar3 != 0) && (iVar3 != local_4e0.ArrayNum)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("bCreateSemaphores || RenderingDoneSemaphores.Num() == Images.Num()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                                ,0x1c8,
                                L"CreateSwapchain, image count is not expected to change:  Requested=%d  Actual=%d  Previous=%d"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar15 = local_4e0.ArrayNum;
        this_00 = &this->BackBufferImages;
        iVar26 = (this->BackBufferImages).ArrayNum;
        piVar1 = &(this->BackBufferImages).ArrayNum;
        if (iVar26 < local_4e0.ArrayNum) {
          iVar26 = local_4e0.ArrayNum - iVar26;
          iVar15 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FVulkanTexture>_>_>
                             (8,8,iVar26,&this_00->AllocatorInstance,piVar1,
                              &(this->BackBufferImages).ArrayMax);
          FVar24 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
          if (FVar24 == (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
            FVar24 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)this_00;
          }
          DefaultConstructItems<TRefCountPtr<FVulkanTexture>,int>
                    ((void *)((longlong)FVar24 + (longlong)iVar15 * 8),iVar26);
        }
        else {
          if (local_4e0.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(local_4e0._8_8_ & 0xffffffff);
          }
          if (local_4e0.ArrayNum < iVar26) {
            uVar27 = iVar26 - local_4e0.ArrayNum;
            if (((int)(uVar27 | local_4e0.ArrayNum) < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (uVar27 != 0) {
              TArray<TRefCountPtr<FVulkanTexture>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
              ::RemoveAtImpl(this_00,iVar15,uVar27);
              UE::Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FVulkanTexture>_>_>
                        (8,8,&this_00->AllocatorInstance,*piVar1,&(this->BackBufferImages).ArrayMax)
              ;
            }
          }
        }
        TArray<FVulkanSemaphore_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::SetNum
                  (&this->RenderingDoneSemaphores,local_4e0.ArrayNum,Default);
        iStack_480 = local_4e0.ArrayNum;
        local_488 = local_4e0.AllocatorInstance.Data;
        if ((local_4e0.ArrayNum < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_448._12_4_ = uStack_47c;
        local_448.ArrayNum = iStack_480;
        local_448.DataPtr = (VkImage_T **)local_488;
        InitImages(this,(FVulkanContextCommon *)local_4d0,&local_448);
        if (iVar3 == 0) {
          lVar17 = (longlong)(this->RenderingDoneSemaphores).ArrayNum;
          uVar27 = 0;
          if (0 < lVar17) {
            lVar29 = 0;
            do {
              pFVar19 = (FVulkanSemaphore *)0x0;
              this_01 = ::operator_new(0x28);
              if (this_01 != (FVulkanSemaphore *)0x0) {
                pFVar19 = FVulkanSemaphore::FVulkanSemaphore(this_01,this->Device,None,0);
              }
              uVar16 = 0;
              if ((int)uVar27 < (this->RenderingDoneSemaphores).ArrayNum) {
                uVar16 = ~uVar27 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar6 = (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData;
              FVar25 = (ForElementType<FVulkanSemaphore_*>)&this->RenderingDoneSemaphores;
              if (FVar6 != (ForElementType<FVulkanSemaphore_*>)0x0) {
                FVar25 = FVar6;
              }
              *(FVulkanSemaphore **)((longlong)FVar25 + lVar29 * 8) = pFVar19;
              uVar16 = 0;
              if ((int)uVar27 < (this->RenderingDoneSemaphores).ArrayNum) {
                uVar16 = ~uVar27 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              FVar6 = (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData;
              FVar25 = (ForElementType<FVulkanSemaphore_*>)&this->RenderingDoneSemaphores;
              if (FVar6 != (ForElementType<FVulkanSemaphore_*>)0x0) {
                FVar25 = FVar6;
              }
              LOCK();
              piVar1 = (int *)(*(longlong *)((longlong)FVar25 + lVar29 * 8) + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              uVar27 = uVar27 + 1;
              lVar29 = lVar29 + 1;
            } while (lVar29 < lVar17);
          }
        }
      }
      pFVar28 = (FVulkanBackBuffer *)0x0;
      if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e0.AllocatorInstance.Data);
      }
      pFVar20 = ::operator_new(0x260);
      if (pFVar20 != (FVulkanBackBuffer *)0x0) {
        pFVar5 = this->Device;
        local_478.UserData = (void *)0x0;
        local_478.Function = (_func___cdecl_void_void_ptr *)0x0;
        pFVar21 = FRHITextureCreateDesc::Create2D
                            (&local_158,L"FVulkanBackBuffer",this->SizeX,this->SizeY,
                             this->PixelFormat);
        pFVar21->_padding_ = 0xb;
        pFVar21->InitialState = Present;
        FVulkanTexture::FVulkanTexture
                  ((FVulkanTexture *)pFVar20,pFVar5,pFVar21,(VkImage_T *)0x0,&local_478);
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
        pFVar20->Viewport = this;
        pFVar20->_padding_ = (longlong)&FVulkanBackBuffer::_vftable__for__FRHIViewableResource__;
        pFVar20->_padding_ =
             (longlong)&FVulkanBackBuffer::_vftable__for__RHIValidation__FTextureResource__;
        pFVar20->_padding_ = (longlong)&FVulkanBackBuffer::_vftable__for__FVulkanEvictable__;
        pFVar20->_padding_ = (longlong)&FVulkanBackBuffer::_vftable__for__FVulkanViewableResource__;
        pFVar28 = pFVar20;
      }
      pFVar20 = (this->RHIBackBuffer).Reference;
      param_1 = local_4d0;
      if (pFVar20 != pFVar28) {
        (this->RHIBackBuffer).Reference = pFVar28;
        if (pFVar28 != (FVulkanBackBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar28);
        }
        param_1 = local_4d0;
        if (pFVar20 != (FVulkanBackBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar20);
          param_1 = local_4d0;
        }
      }
      goto LAB_145bcbe3a;
    }
    if ((this->bRenderOffscreen != false) ||
       (lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x30))(), *(char *)(lVar17 + 0x1c0) != '\0'))
    goto LAB_145bcbdcf;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                        ,0x339,L"Platform Requires Standard Swapchain!");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    EVar14 = PF_Unknown;
  }
  else {
LAB_145bcbdcf:
    EVar14 = PF_R8G8B8A8;
  }
  this->PixelFormat = EVar14;
  if (param_2 != (FVulkanSwapChainRecreateInfo *)0x0) {
    if (param_2->SwapChain != (VkSwapchainKHR_T *)0x0) {
      FVulkanGenericPlatform::DestroySwapchainKHR
                (this->Device->Device,param_2->SwapChain,&VulkanRHI::GAllocationCallbacks);
      param_2->SwapChain = (VkSwapchainKHR_T *)0x0;
    }
    p_Var12 = VulkanDynamicAPI::vkDestroySurfaceKHR;
    pVVar7 = param_2->Surface;
    if (pVVar7 != (VkSurfaceKHR_T *)0x0) {
      lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
      (*p_Var12)(*(VkInstance_T **)(lVar17 + 0x140),pVVar7,&VulkanRHI::GAllocationCallbacks);
      param_2->Surface = (VkSurfaceKHR_T *)0x0;
    }
  }
LAB_145bcbe3a:
  lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  uVar27 = 1;
  uVar16 = uVar27;
  if (*(char *)(lVar17 + 0x1c0) == '\0') {
    uVar16 = this->SizeX;
  }
  lVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  if (*(char *)(lVar17 + 0x1c0) == '\0') {
    uVar27 = this->SizeY;
  }
  UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects(local_4e8,GMaxRHIShaderPlatform)
  ;
  if (ZPULL(local_4e8[0],1,1)) {
    local_418.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_3c8 = L"RenderingBackBufferArr";
    local_418.Extent.field0_0x0._s_0.Y = uVar27;
    local_418.Extent.field0_0x0._s_0.X = uVar16;
    local_418.Format = this->PixelFormat;
    local_418.Flags = None;
    local_418.ClearValue._0_8_ = 1;
    local_418.ClearValue.Value._4_8_ = 0;
    local_418.ClearValue.Value.Color[3] = 0.0;
    local_418.ExtData = 0;
    local_418.Depth = 1;
    local_418.ArraySize = 2;
    local_418.NumMips = '\x01';
    local_418.NumSamples = '\x01';
    local_418.Dimension = Texture2DArray;
    local_418.UAVFormat = PF_Unknown;
    local_418.FastVRAMPercentage = 0xff;
    local_418.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
    local_418.AliasableFormats.ArrayNum = 0;
    local_418.AliasableFormats.ArrayMax = 1;
    local_3c0 = 0;
    local_3b8 = (FResourceBulkDataInterface *)0x0;
    local_3b0.ComparisonIndex.Value = 0;
    local_3b0.Number = 0;
    local_3a8.ComparisonIndex.Value = 0;
    local_3a8.Number = 0;
    local_4c8 = uVar16;
    uStack_4c4 = uVar27;
    FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_378,&local_418);
    local_378.DebugName = local_3c8;
    local_378.InitialState = (ERHIAccess)local_3c0;
    local_378.InitAction = local_3c0._4_4_;
    local_378.BulkData = local_3b8;
    local_378.ClassName = local_3b0;
    local_378.OwnerName = local_3a8;
    if (local_418.AliasableFormats.AllocatorInstance.SecondaryData !=
        (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)local_418.AliasableFormats.AllocatorInstance.SecondaryData);
    }
    pFVar21 = &local_378;
    bVar11 = true;
    bVar13 = false;
  }
  else {
    pFVar21 = FRHITextureCreateDesc::Create2D
                        (&local_d8,L"RenderingBackBuffer",uVar16,uVar27,this->PixelFormat);
    bVar11 = false;
    bVar13 = true;
  }
  pFVar21->_padding_ = FClearValueBinding::None._0_8_;
  pFVar21->_padding_ = FClearValueBinding::None.Value._4_8_;
  *(float *)&pFVar21->_padding_ = FClearValueBinding::None.Value.Color[3];
  pFVar21->_padding_ = 0xb;
  pFVar21->InitialState = Present;
  FRHITextureDesc::FRHITextureDesc((FRHITextureDesc *)&local_2f8,(FRHITextureDesc *)pFVar21);
  local_2f8.DebugName = pFVar21->DebugName;
  local_2f8.InitialState = pFVar21->InitialState;
  local_2f8.InitAction = pFVar21->InitAction;
  local_2f8.BulkData = pFVar21->BulkData;
  local_2f8.ClassName = pFVar21->ClassName;
  local_2f8.OwnerName = pFVar21->OwnerName;
  if ((bVar13) && ((void *)local_d8._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_d8._padding_);
  }
  if ((bVar11) && ((void *)local_378._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_378._padding_);
  }
  this_02 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  local_468.Heap = (FRHITransientHeap *)0x0;
  local_468.Size = 0;
  local_468.Offset = 0;
  local_468.AlignmentPad = 0;
  this_03 = FVulkanDynamicRHI::CreateTextureInternal(this_02,&local_2f8,&local_468);
  pFVar4 = (this->RenderingBackBuffer).Reference;
  if (pFVar4 != this_03) {
    (this->RenderingBackBuffer).Reference = this_03;
    if (this_03 != (FVulkanTexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_03);
    }
    if (pFVar4 != (FVulkanTexture *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  local_278.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0;
  local_278.MemoryBarriers.ArrayNum = 0;
  local_278.MemoryBarriers.ArrayMax = 1;
  local_278.ImageBarriers.AllocatorInstance.SecondaryData =
       (ForElementType<VkImageMemoryBarrier2>)0x0;
  local_278.ImageBarriers.ArrayNum = 0;
  local_278.ImageBarriers.ArrayMax = 2;
  local_278.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.BufferBarriers.ArrayNum = 0;
  local_278.BufferBarriers.ArrayMax = 0;
  pVVar22 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_438,1,0,1,0,0xffffffff);
  local_398.aspectMask = pVVar22->aspectMask;
  local_398.baseMipLevel = pVVar22->baseMipLevel;
  local_398.levelCount = pVVar22->levelCount;
  local_398.baseArrayLayer = pVVar22->baseArrayLayer;
  local_398.layerCount = pVVar22->layerCount;
  FVulkanPipelineBarrier::AddImageLayoutTransition
            (&local_278,((this->RenderingBackBuffer).Reference)->Image,VK_IMAGE_LAYOUT_UNDEFINED,
             VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,&local_398);
  pFVar23 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  FVulkanPipelineBarrier::Execute(&local_278,pFVar23);
  p_Var8 = (this->Device->DebugMarkers).SetDebugName;
  if (p_Var8 != (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *)0x0) {
    local_4b8._20_4_ = 0;
    local_4b8.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
    pVVar9 = ((this->RenderingBackBuffer).Reference)->Image;
    local_4b8.objectHandle._0_4_ = SUB84(pVVar9,0);
    local_4b8.objectHandle._4_4_ = (undefined4)((ulonglong)pVVar9 >> 0x20);
    local_4b8._4_8_ = 0;
    local_4b8._12_8_ = &DAT_a00000000;
    local_4b8.pObjectName._0_4_ = 0x510dc8b0;
    local_4b8.pObjectName._4_4_ = 1;
    (*p_Var8)(this->Device->Device,&local_4b8);
  }
  if (local_278.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.BufferBarriers.AllocatorInstance.Data);
  }
  if (local_278.ImageBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkImageMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_278.ImageBarriers.AllocatorInstance.SecondaryData);
  }
  if (local_278.MemoryBarriers.AllocatorInstance.SecondaryData !=
      (ForElementType<VkMemoryBarrier2>)0x0) {
    FMemory::Free((void *)local_278.MemoryBarriers.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_2f8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_2f8._padding_);
  }
  this->AcquiredImageIndex = -1;
  return;
}

// DestroySwapchain @ 145bcc340

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanViewport::DestroySwapchain(FVulkanViewport *this,FVulkanSwapChainRecreateInfo *param_1)

{
  FVulkanBackBuffer *pFVar1;
  FVulkanDevice *this_00;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar2;
  FRHIResource *this_01;
  FVulkanSwapChain *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FVulkanDynamicRHI *this_02;
  longlong lVar8;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  this_02 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  FVulkanDynamicRHI::RHIBlockUntilGPUIdle(this_02);
  pFVar1 = (this->RHIBackBuffer).Reference;
  uVar10 = 0;
  if (pFVar1 != (FVulkanBackBuffer *)0x0) {
    if (pFVar1->_padding_ != 0) {
      pFVar1->_padding_ = 0;
      pFVar1->_padding_ = 0;
    }
    pFVar1->_padding_ = 0;
  }
  if (((this->bRenderOffscreen == false) &&
      (lVar8 = (**(code **)(GDynamicRHI->_padding_ + 0x30))(), *(char *)(lVar8 + 0x1c0) == '\0')) &&
     (this->SwapChain != (FVulkanSwapChain *)0x0)) {
    TIndirectArray<FVulkanView,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::Empty
              (&this->TextureViews,0);
    lVar8 = (longlong)(this->BackBufferImages).ArrayNum;
    uVar12 = uVar10;
    if (0 < lVar8) {
      do {
        this_00 = this->Device;
        uVar11 = (uint)uVar12;
        uVar7 = 0;
        if ((int)uVar11 < (this->BackBufferImages).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
        if (FVar2 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
          FVar9 = FVar2;
        }
        FVulkanDevice::NotifyDeletedImage
                  (this_00,*(VkImage_T **)(*(longlong *)((longlong)FVar9 + uVar10 * 8) + 0x170),true
                  );
        uVar7 = 0;
        if ((int)uVar11 < (this->BackBufferImages).ArrayNum) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
        if (FVar2 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
          FVar9 = FVar2;
        }
        this_01 = *(FRHIResource **)((longlong)FVar9 + uVar10 * 8);
        if (this_01 != (FRHIResource *)0x0) {
          *(undefined8 *)((longlong)FVar9 + uVar10 * 8) = 0;
          FRHIResource::Release(this_01);
        }
        uVar10 = uVar10 + 1;
        uVar12 = (ulonglong)(uVar11 + 1);
      } while ((longlong)uVar10 < lVar8);
    }
    VulkanRHI::FDeferredDeletionQueue2::ReleaseResources(&this->Device->DeferredDeletionQueue,true);
    FVulkanSwapChain::Destroy(this->SwapChain,param_1);
    pFVar3 = this->SwapChain;
    if (pFVar3 != (FVulkanSwapChain *)0x0) {
      pFVar4 = (pFVar3->ImageAcquiredFences).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (pFVar3->ImageAcquiredSemaphore).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar3,0x90);
    }
    this->SwapChain = (FVulkanSwapChain *)0x0;
    VulkanRHI::FDeferredDeletionQueue2::ReleaseResources(&this->Device->DeferredDeletionQueue,true);
  }
  this->AcquiredImageIndex = -1;
  return;
}

// DoCheckedSwapChainJob @ 145bcc5f0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVulkanViewport::DoCheckedSwapChainJob(FVulkanViewport *this,FVulkanCommandListContext *param_1)

{
  uint uVar1;
  FVulkanSwapChain *this_00;
  ForElementType<FVulkanSemaphore_*> FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EStatus EVar6;
  uint uVar7;
  int iVar8;
  ForElementType<FVulkanSemaphore_*> FVar9;
  FVulkanGenericPlatformWindowContext local_res8;
  FVulkanQueue *local_38;
  FVulkanViewport *local_30;
  
  local_38 = this->Device->PresentQueue;
  local_30 = this;
  EVar6 = `FVulkanViewport::DoCheckedSwapChainJob'::__l2::<lambda_1>::operator()(&local_38);
  for (iVar8 = 4; ((int)EVar6 < 0 && (0 < iVar8)); iVar8 = iVar8 + -1) {
    if (EVar6 == OutOfDate) {
      if (5 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else if (EVar6 == SurfaceLost) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                         ,0xd7,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_res8.WindowHandle = this->WindowHandle;
    RecreateSwapchain(this,param_1,&local_res8);
    FVulkanContextCommon::FlushCommands((FVulkanContextCommon *)param_1,WaitForCompletion);
    uVar1 = this->AcquiredImageIndex;
    EVar6 = Healthy;
    if (uVar1 != 0xffffffff) {
      this_00 = this->SwapChain;
      uVar7 = 0;
      if ((int)uVar1 < (this->RenderingDoneSemaphores).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      FVar2 = (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FVulkanSemaphore_*>)&this->RenderingDoneSemaphores;
      if (FVar2 != (ForElementType<FVulkanSemaphore_*>)0x0) {
        FVar9 = FVar2;
      }
      EVar6 = FVulkanSwapChain::Present
                        (this_00,local_38,
                         *(FVulkanSemaphore **)((longlong)FVar9 + (longlong)(int)uVar1 * 8));
    }
  }
  return (bool)((byte)(EVar6 >> 0x1f) ^ 1);
}

// GetBackBuffer @ 145bcd5c0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FRHITexture> __thiscall
FVulkanViewport::GetBackBuffer(FVulkanViewport *this,FRHICommandListImmediate *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHITexture> TVar3;
  longlong lVar4;
  undefined8 *puVar5;
  FVulkanBackBuffer *this_00;
  FRHICommandListImmediate *in_R8;
  FVulkanViewport *local_res8;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0xf8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHITexture *)(*pcVar1)();
      return (TRefCountPtr<FRHITexture>)TVar3.Reference;
    }
  }
  lpCriticalSection = &this->RecreatingSwapchain;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bRenderOffscreen == false) {
    lVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if ((*(char *)(lVar4 + 0x1c0) == '\0') && (GVulkanDelayAcquireImage != DelayAcquire)) {
      if ((in_R8->field_0x29b & 0x20) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RHICmdList.IsImmediate()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                           ,0xff,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHITexture *)(*pcVar1)();
          return (TRefCountPtr<FRHITexture>)TVar3.Reference;
        }
      }
      if ((this->RHIBackBuffer).Reference == (FVulkanBackBuffer *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RHIBackBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                           ,0x100,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.Reference = (FRHITexture *)(*pcVar1)();
          return (TRefCountPtr<FRHITexture>)TVar3.Reference;
        }
      }
      local_res8 = this;
      if (((GRHICommandList.bLatchedBypass == false) || ((in_R8->field_0x29b & 0x20) == 0)) &&
         (in_R8->field_0x64 == '\0')) {
        puVar5 = FMemStackBase::Alloc((FMemStackBase *)in_R8,0x20,8);
        *(int *)&in_R8->field_0x60 = *(int *)&in_R8->field_0x60 + 1;
        **(undefined8 **)&in_R8->field_0x30 = puVar5;
        *(undefined8 **)&in_R8->field_0x30 = puVar5 + 1;
        puVar5[1] = 0;
        *puVar5 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::GetBackBuffer'::`12'::<lambda_1>_>
                   ::_vftable_;
        puVar5[3] = L"TRHILambdaCommand";
        puVar5[2] = this;
        this_00 = (this->RHIBackBuffer).Reference;
      }
      else {
        `FVulkanViewport::GetBackBuffer'::__l12::<lambda_1>::operator()(&local_res8,in_R8);
        this_00 = (this->RHIBackBuffer).Reference;
      }
      goto LAB_145bcd741;
    }
  }
  this_00 = (FVulkanBackBuffer *)(this->RenderingBackBuffer).Reference;
LAB_145bcd741:
  *(FVulkanBackBuffer **)param_1 = this_00;
  if (this_00 != (FVulkanBackBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return (TRefCountPtr<FRHITexture>)(FRHITexture *)param_1;
}

// GetCustomPresent @ 145bcd790

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHICustomPresent * __thiscall FVulkanViewport::GetCustomPresent(FVulkanViewport *this)

{
  return (this->CustomPresent).Reference;
}

// GetPixelFormatForNonDefaultSwapchain @ 145bcde60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

EPixelFormat __thiscall FVulkanViewport::GetPixelFormatForNonDefaultSwapchain(FVulkanViewport *this)

{
  code *pcVar1;
  bool bVar2;
  EPixelFormat EVar3;
  longlong lVar4;
  
  if (this->bRenderOffscreen == false) {
    lVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if (*(char *)(lVar4 + 0x1c0) == '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                         ,0x339,L"Platform Requires Standard Swapchain!");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      return PF_Unknown;
    }
  }
  return PF_R8G8B8A8;
}

// InitImages @ 145bcf070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanViewport::InitImages
          (FVulkanViewport *this,FVulkanContextCommon *param_1,
          TArrayView<VkImage_T_*_const,int> *param_2)

{
  VkSurfaceTransformFlagBitsKHR VVar1;
  FRHIResource *this_00;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar2;
  FRHIResource *this_01;
  FVulkanDevice *pFVar3;
  ForElementType<void_*> FVar4;
  undefined8 uVar5;
  code *pcVar6;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkImage_T_ptr_VkImageLayout_VkClearColorValue_ptr_uint_VkImageSubresourceRange_ptr
  *p_Var7;
  longlong lVar8;
  FVulkanCommandBuffer *pFVar9;
  bool bVar10;
  int iVar11;
  VkImageSubresourceRange *pVVar12;
  FVulkanDynamicRHI *this_02;
  TRefCountPtr<FRHITexture> TVar13;
  FVulkanView *pFVar14;
  FRHIDescriptorHandle FVar15;
  VkImage_T **ppVVar16;
  ForElementType<void_*> FVar17;
  uint uVar18;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar19;
  ForElementType<void_*> FVar20;
  FVulkanView *this_03;
  uint uVar21;
  uint uVar22;
  VkImage_T *pVVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_198 [32];
  VkImage_T *in_stack_fffffffffffffe98;
  undefined4 uVar26;
  FVulkanView *local_138;
  longlong local_130;
  longlong local_128;
  FVulkanViewport *local_120;
  FRHIResource *local_118;
  FVulkanCommandBuffer *local_110;
  FVulkanTextureViewDesc local_108;
  VkDebugUtilsObjectNameInfoEXT local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  FVulkanContextArray local_90;
  VkImageSubresourceRange local_80;
  VkImageSubresourceRange local_68;
  VkClearColorValue local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_120 = this;
  local_110 = FVulkanContextCommon::GetCommandBuffer(param_1);
  uVar25 = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  pVVar12 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_80,1,0,0xffffffff,0,0xffffffff);
  iVar11 = param_2->ArrayNum;
  local_68.aspectMask = pVVar12->aspectMask;
  local_68.baseMipLevel = pVVar12->baseMipLevel;
  local_68.levelCount = pVVar12->levelCount;
  local_68.baseArrayLayer = pVVar12->baseArrayLayer;
  local_68.layerCount = pVVar12->layerCount;
  if (0 < iVar11) {
    local_130 = 0;
    local_128 = 0;
    do {
      uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
      VVar1 = local_120->SwapChain->PreTransform;
      if ((VVar1 == VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR) ||
         (uVar22 = this->SizeX, uVar21 = this->SizeY,
         VVar1 == VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR)) {
        uVar22 = this->SizeY;
        uVar21 = this->SizeX;
      }
      this_02 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
      local_a8 = 0;
      local_a0 = 0;
      uVar24 = ~uVar25 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar25 < iVar11) {
        uVar18 = uVar24;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = local_120;
      in_stack_fffffffffffffe98 = (VkImage_T *)CONCAT44(uVar26,1);
      TVar13 = FVulkanDynamicRHI::RHICreateTexture2DFromResource
                         (this_02,(EPixelFormat)&local_118,(uint)local_120->PixelFormat,uVar22,
                          uVar21,1,in_stack_fffffffffffffe98,
                          *(ETextureCreateFlags *)(local_128 + (longlong)param_2->DataPtr),
                          (FClearValueBinding *)0x40001,
                          (FVulkanRHIExternalImageDeleteCallbackInfo *)
                          &FClearValueBinding::Transparent);
      this_00 = (FRHIResource *)(TVar13.Reference)->_padding_;
      uVar22 = 0;
      if ((int)uVar25 < (this->BackBufferImages).ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
      if (FVar2 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
        FVar19 = FVar2;
      }
      this_01 = *(FRHIResource **)((longlong)FVar19 + local_130 * 8);
      if (this_01 != this_00) {
        *(FRHIResource **)((longlong)FVar19 + local_130 * 8) = this_00;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_00);
        }
        if (this_01 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_01);
        }
      }
      if (local_118 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_118);
      }
      local_108.UEFormat = this->PixelFormat;
      this_03 = (FVulkanView *)0x0;
      local_108.NumArraySlices = 1;
      local_108.ImageUsageFlags = 0;
      local_108.SamplerYcbcrConversion = (VkSamplerYcbcrConversion_T *)0x0;
      local_108.bUseIdentitySwizzle = false;
      local_108.ViewType = VK_IMAGE_VIEW_TYPE_2D;
      local_108.AspectFlags = 1;
      local_108.FirstMip = 0;
      local_108.NumMips = 1;
      local_108.ArraySliceIndex = 0;
      local_108.Format = GPixelFormats[local_108.UEFormat].PlatformFormat;
      pFVar14 = ::operator_new(0x38);
      if (pFVar14 != (FVulkanView *)0x0) {
        pFVar3 = this->Device;
        pFVar14->Device = pFVar3;
        (pFVar14->BindlessHandle).Index = 0xffffffff;
        (pFVar14->BindlessHandle).Type = Invalid;
        pFVar14->DescriptorType = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
        *(undefined1 *)&(pFVar14->Storage)._padding_ = 0;
        (pFVar14->Storage).TypeIndex = '\0';
        FVar15 = FVulkanBindlessDescriptorManager::AllocateDescriptor
                           (pFVar3->BindlessDescriptorManager,(VkDescriptorType)local_98);
        pFVar14->BindlessHandle = *(FRHIDescriptorHandle *)FVar15;
        this_03 = pFVar14;
      }
      ppVVar16 = TArrayView<VkImage_T_*_const,int>::operator[](param_2,uVar25);
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      FVulkanView::InitAsTextureView(this_03,&local_90,*ppVVar16,&local_108);
      FVar20 = (ForElementType<void_*>)&this->TextureViews;
      FVar4 = (this->TextureViews).Array.AllocatorInstance.SecondaryData;
      FVar17 = FVar20;
      if (FVar4 != (ForElementType<void_*>)0x0) {
        FVar17 = FVar4;
      }
      local_138 = this_03;
      if ((ulonglong)FVar17 <= &local_138) {
        pVVar23 = (VkImage_T *)(longlong)(this->TextureViews).Array.ArrayMax;
        FVar17 = FVar20;
        if (FVar4 != (ForElementType<void_*>)0x0) {
          FVar17 = FVar4;
        }
        if ((&local_138 < (FVulkanView **)((longlong)FVar17 + (longlong)pVVar23 * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), in_stack_fffffffffffffe98 = pVVar23, bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar11 = (this->TextureViews).Array.ArrayNum;
      if (iVar11 == (this->TextureViews).Array.ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                           (0x808,(ForElementType<void_*> *)FVar20,
                            &(this->TextureViews).Array.ArrayMax);
      }
      lVar8 = local_130;
      (this->TextureViews).Array.ArrayNum = iVar11 + 1;
      FVar4 = (this->TextureViews).Array.AllocatorInstance.SecondaryData;
      if (FVar4 != (ForElementType<void_*>)0x0) {
        FVar20 = FVar4;
      }
      *(FVulkanView **)((longlong)FVar20 + (longlong)iVar11 * 8) = local_138;
      uVar22 = 0;
      if ((int)uVar25 < param_2->ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = local_110;
      VulkanSetImageLayout
                (local_110,param_2->DataPtr[lVar8],VK_IMAGE_LAYOUT_UNDEFINED,
                 VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_68);
      p_Var7 = VulkanDynamicAPI::vkCmdClearColorImage;
      uVar22 = 0;
      if ((int)uVar25 < param_2->ArrayNum) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (*p_Var7)(pFVar9->CommandBufferHandle,param_2->DataPtr[lVar8],
                VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,&local_50,1,&local_68);
      iVar11 = param_2->ArrayNum;
      uVar22 = 0;
      if ((int)uVar25 < iVar11) {
        uVar22 = uVar24;
      }
      if ((uVar22 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      VulkanSetImageLayout
                (pFVar9,param_2->DataPtr[lVar8],VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
                 VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,&local_68);
      if ((this->Device->DebugMarkers).SetDebugName !=
          (_func___cdecl_VkResult_VkDevice_T_ptr_VkDebugUtilsObjectNameInfoEXT_ptr *)0x0) {
        uVar22 = 0;
        if ((int)uVar25 < (this->BackBufferImages).ArrayNum) {
          uVar22 = uVar24;
        }
        if ((uVar22 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
        local_d0.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
        FVar19 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
        if (FVar2 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
          FVar19 = FVar2;
        }
        local_d0._20_4_ = 0;
        local_d0._4_8_ = 0;
        local_d0._12_8_ = &DAT_a00000000;
        uVar5 = *(undefined8 *)(*(longlong *)((longlong)FVar19 + lVar8 * 8) + 0x170);
        local_d0.objectHandle._0_4_ = (undefined4)uVar5;
        local_d0.objectHandle._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_d0.pObjectName._0_4_ = 0x510dc698;
        local_d0.pObjectName._4_4_ = 1;
        (*(this->Device->DebugMarkers).SetDebugName)(this->Device->Device,&local_d0);
      }
      local_128 = local_128 + 8;
      local_130 = lVar8 + 1;
      uVar25 = uVar25 + 1;
    } while ((int)uVar25 < iVar11);
  }
  return;
}

// IssueFrameEvent @ 145bcfb00

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanViewport::IssueFrameEvent(FVulkanViewport *this)

{
  TRefCountPtr<FVulkanSyncPoint> *pTVar1;
  longlong *plVar2;
  FVulkanCommandListContextImmediate *this_00;
  FVulkanSyncPoint *pFVar3;
  longlong lVar4;
  TRefCountPtr<FVulkanSyncPoint> TVar5;
  undefined8 *puVar6;
  FVulkanSyncPoint *pFVar7;
  FVulkanSyncPoint *pFVar8;
  FVulkanSyncPoint *local_res10;
  undefined8 local_28 [2];
  
  pFVar8 = (FVulkanSyncPoint *)0x0;
  this_00 = this->Device->ImmediateContext;
  pTVar1 = (TRefCountPtr<FVulkanSyncPoint> *)&this_00->field_0x48;
  if (((TRefCountPtr<FVulkanSyncPoint> *)&this_00->field_0x48)->Reference == (FVulkanSyncPoint *)0x0
     ) {
    TVar5 = FVulkanSyncPoint::Create((EVulkanSyncPointType)&local_res10,(wchar_t *)&DAT_00000001);
    if ((FVulkanSyncPoint *)pTVar1 != TVar5.Reference) {
      pFVar7 = pTVar1->Reference;
      pTVar1->Reference = (FVulkanSyncPoint *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (pFVar7 != (FVulkanSyncPoint *)0x0) {
        plVar2 = &pFVar7->_padding_;
        LOCK();
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          if (plVar2 == (longlong *)0x0) {
            pFVar7 = pFVar8;
          }
          if (pFVar7 != (FVulkanSyncPoint *)0x0) {
            (**(code **)pFVar7->_padding_)(pFVar7,1);
          }
        }
      }
    }
    if (local_res10 != (FVulkanSyncPoint *)0x0) {
      plVar2 = &local_res10->_padding_;
      LOCK();
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        if (plVar2 == (longlong *)0x0) {
          local_res10 = pFVar8;
        }
        if (local_res10 != (FVulkanSyncPoint *)0x0) {
          (**(code **)local_res10->_padding_)(local_res10,1);
        }
      }
    }
  }
  pFVar7 = pTVar1->Reference;
  if (pFVar7 != (FVulkanSyncPoint *)0x0) {
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  pTVar1 = &this->LastFrameSyncPoint;
  if (pTVar1 == (TRefCountPtr<FVulkanSyncPoint> *)local_28) {
    if (pFVar7 == (FVulkanSyncPoint *)0x0) goto LAB_145bcfc2e;
    plVar2 = &pFVar7->_padding_;
    LOCK();
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) goto LAB_145bcfc2e;
    if (plVar2 == (longlong *)0x0) {
      pFVar7 = pFVar8;
    }
    if (pFVar7 == (FVulkanSyncPoint *)0x0) goto LAB_145bcfc2e;
    puVar6 = (undefined8 *)pFVar7->_padding_;
  }
  else {
    pFVar3 = pTVar1->Reference;
    pTVar1->Reference = pFVar7;
    if (pFVar3 == (FVulkanSyncPoint *)0x0) goto LAB_145bcfc2e;
    plVar2 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) goto LAB_145bcfc2e;
    pFVar7 = pFVar3;
    if (plVar2 == (longlong *)0x0) {
      pFVar7 = pFVar8;
    }
    if (pFVar7 == (FVulkanSyncPoint *)0x0) goto LAB_145bcfc2e;
    puVar6 = (undefined8 *)pFVar7->_padding_;
  }
  (*(code *)*puVar6)(pFVar7);
LAB_145bcfc2e:
  FVulkanContextCommon::FlushCommands((FVulkanContextCommon *)this_00,None);
  return;
}

// OnSystemResolutionChanged @ 145bd3740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanViewport::OnSystemResolutionChanged(FVulkanViewport *this,uint param_1,uint param_2)

{
  EDeviceScreenOrientation EVar1;
  code *pcVar2;
  EDeviceScreenOrientation EVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_b8 [32];
  void *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  FVulkanViewport *pFStack_70;
  void **local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVulkanViewport *pFStack_40;
  void **local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  EVar3 = FGenericPlatformMisc::GetDeviceOrientation();
  EVar1 = this->CachedOrientation;
  if (EVar1 == Portrait) {
    if (EVar3 != PortraitUpsideDown) goto LAB_145bd391c;
  }
  else if (EVar1 == PortraitUpsideDown) {
    if (EVar3 != Portrait) goto LAB_145bd391c;
  }
  else if (EVar1 == LandscapeRight) {
    if (EVar3 != LandscapeLeft) goto LAB_145bd391c;
  }
  else if ((EVar1 != LandscapeLeft) || (EVar3 != LandscapeRight)) goto LAB_145bd391c;
  bVar4 = IsInGameThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                         ,0x349,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98[0] = this->WindowHandle;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FVulkanViewport::OnSystemResolutionChanged'::`5'::<lambda_1>,1,0>
              ::_vftable_;
  local_68 = local_98;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FVulkanViewport::OnSystemResolutionChanged'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FVulkanViewport::OnSystemResolutionChanged_::__l5::TSTR_RecreateSwapchain844>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FVulkanViewport::OnSystemResolutionChanged'::__l5::TSTR_RecreateSwapchain844>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar7 = (ulonglong)local_28;
    if ((2 < uVar7) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar6 = local_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  FlushRenderingCommands();
LAB_145bd391c:
  this->CachedOrientation = EVar3;
  return;
}

// Present @ 145bd3950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FVulkanViewport::Present(FVulkanViewport *this,FVulkanCommandListContext *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  FVulkanSwapChain *pFVar3;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar4;
  FVulkanBackBuffer *pFVar5;
  ForElementType<FVulkanSemaphore_*> FVar6;
  FRHICustomPresent *pFVar7;
  FRHICustomPresent *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  EStatus EVar20;
  longlong lVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_VulkanAcquireBackBuffer> FVar23;
  FVulkanCommandBuffer *pFVar24;
  VkImageSubresourceRange *pVVar25;
  FVulkanPayload *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_VulkanCustomPresentTime> FVar27;
  FName FVar28;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar29;
  ForElementType<FVulkanSemaphore_*> FVar30;
  undefined1 auStackY_188 [32];
  undefined4 uStack_11c;
  FColor_u_0 local_110;
  VkSurfaceTransformFlagBitsKHR local_10c;
  uint local_108;
  uint local_104;
  FColor_u_0 local_100;
  undefined4 local_fc;
  FName local_f8;
  FName local_f0;
  FVulkanQueue *local_e8;
  FVulkanViewport *local_e0;
  FName local_d8;
  FName local_c8;
  FVulkanSemaphore *local_b8;
  FVulkanGenericPlatformWindowContext local_b0;
  undefined8 local_a8;
  FVulkanGenericPlatformWindowContext local_a0;
  FName local_98;
  FName local_90;
  TArrayView<FVulkanSemaphore_*,int> local_88;
  VkImageSubresourceRange local_78;
  VkImageSubresourceRange local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((param_1->Immediate != (FVulkanCommandListContext *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.IsImmediate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                          ,0x2a5,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  LOCK();
  this->LockToVsync = param_2;
  UNLOCK();
  if ((this->bRenderOffscreen == false) &&
     (lVar21 = (**(code **)(GDynamicRHI->_padding_ + 0x30))(), *(char *)(lVar21 + 0x1c0) == '\0')) {
    bVar13 = false;
    if ((GVulkanDelayAcquireImage == DelayAcquire) &&
       ((this->RenderingBackBuffer).Reference != (FVulkanTexture *)0x0)) {
      FVar23 = StatPtr_STAT_VulkanAcquireBackBuffer;
      if (StatPtr_STAT_VulkanAcquireBackBuffer ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanAcquireBackBuffer>)0x0) {
        pFVar22 = ::FName::FName(&local_98,"STAT_VulkanAcquireBackBuffer");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_VulkanAcquireBackBuffer>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAcquireBackBuffer,
                            *pFVar22,L"Acquire Backbuffer","STATGROUP_VulkanRHI","STATCAT_Advanced",
                            L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar28 = *(FName *)FVar23;
      bVar12 = false;
      bVar11 = false;
      local_d8.ComparisonIndex.Value = 0;
      local_d8.Number = 0;
      if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_145bd3b28:
        bVar10 = false;
        FVar28 = local_d8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_110.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_110._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          bVar12 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_f8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
            local_f8.Number = FVar28.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_f8,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x2b0);
            bVar12 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_145bd3b28;
        FThreadStats::AddMessage(FVar28,CycleScopeStart);
        bVar10 = true;
      }
      bVar15 = TryAcquireImageIndex(this);
      if (bVar15) {
        local_b8 = this->AcquiredSemaphore;
        local_88.DataPtr = &local_b8;
        local_88._12_4_ = uStack_11c;
        local_88.ArrayNum = 1;
        FVulkanContextCommon::AddWaitSemaphores((FVulkanContextCommon *)param_1,0x2000,&local_88);
        uVar1 = this->SizeX;
        pFVar3 = this->SwapChain;
        uVar18 = this->AcquiredImageIndex;
        local_104 = pFVar3->InternalWidth;
        if (uVar1 < pFVar3->InternalWidth) {
          local_104 = uVar1;
        }
        uVar2 = this->SizeY;
        local_10c = pFVar3->PreTransform;
        local_108 = pFVar3->InternalHeight;
        if (uVar2 < pFVar3->InternalHeight) {
          local_108 = uVar2;
        }
        uVar17 = 0;
        if ((int)uVar18 < (this->BackBufferImages).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        FVar4 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
        FVar29 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
        if (FVar4 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
          FVar29 = FVar4;
        }
        CopyImageToBackBuffer
                  (param_1,(this->RenderingBackBuffer).Reference,
                   *(FVulkanTexture **)((longlong)FVar29 + (longlong)(int)uVar18 * 8),uVar1,uVar2,
                   local_104,local_108,local_10c);
      }
      else {
        bVar13 = true;
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar10) {
        FThreadStats::AddMessage(FVar28,CycleScopeEnd);
      }
      if (bVar13) {
        if ((GVulkanDelayAcquireImage != DelayAcquire) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("GVulkanDelayAcquireImage == EDelayAcquireImageType::DelayAcquire",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                                ,0x2dd,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        if (4 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        local_b0.WindowHandle = this->WindowHandle;
        RecreateSwapchain(this,param_1,&local_b0);
        FVulkanContextCommon::FlushCommands((FVulkanContextCommon *)param_1,WaitForCompletion);
        return false;
      }
    }
    else if (this->AcquiredImageIndex == -1) {
      pFVar5 = (this->RHIBackBuffer).Reference;
      if (((pFVar5 == (FVulkanBackBuffer *)0x0) ||
          ((VkImage_T *)pFVar5->_padding_ != ((this->RenderingBackBuffer).Reference)->Image)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("RHIBackBuffer != nullptr && RHIBackBuffer->Image == RenderingBackBuffer->Image"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                              ,0x2cd,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
    }
    else {
      pFVar24 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
      if ((pFVar24->State != IsInsideBegin) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CommandBuffer.IsOutsideRenderPass()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                              ,0x2c6,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      pFVar5 = (this->RHIBackBuffer).Reference;
      if (pFVar5 == (FVulkanBackBuffer *)0x0) {
LAB_145bd3daf:
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("RHIBackBuffer != nullptr && RHIBackBuffer->Image == BackBufferImages[AcquiredImageIndex]->Image"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                            ,0x2c7,L"");
        if (bVar13) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
      }
      else {
        uVar1 = this->AcquiredImageIndex;
        uVar18 = 0;
        if ((int)uVar1 < (this->BackBufferImages).ArrayNum) {
          uVar18 = ~uVar1 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          uVar14 = (*pcVar9)();
          return (bool)uVar14;
        }
        FVar4 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
        FVar29 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
        if (FVar4 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
          FVar29 = FVar4;
        }
        if (pFVar5->_padding_ !=
            *(longlong *)(*(longlong *)((longlong)FVar29 + (longlong)(int)uVar1 * 8) + 0x170))
        goto LAB_145bd3daf;
      }
      pVVar25 = FVulkanPipelineBarrier::MakeSubresourceRange(&local_78,1,0,0xffffffff,0,0xffffffff);
      uVar1 = this->AcquiredImageIndex;
      local_60.aspectMask = pVVar25->aspectMask;
      local_60.baseMipLevel = pVVar25->baseMipLevel;
      local_60.levelCount = pVVar25->levelCount;
      local_60.baseArrayLayer = pVVar25->baseArrayLayer;
      local_60.layerCount = pVVar25->layerCount;
      uVar18 = 0;
      if ((int)uVar1 < (this->BackBufferImages).ArrayNum) {
        uVar18 = ~uVar1 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      FVar4 = (this->BackBufferImages).AllocatorInstance.SecondaryData;
      FVar29 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)&this->BackBufferImages;
      if (FVar4 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
        FVar29 = FVar4;
      }
      VulkanSetImageLayout
                (pFVar24,*(VkImage_T **)
                          (*(longlong *)((longlong)FVar29 + (longlong)(int)uVar1 * 8) + 0x170),
                 VK_IMAGE_LAYOUT_UNDEFINED,VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,&local_60);
    }
    uVar1 = this->AcquiredImageIndex;
    if (-1 < (int)uVar1) {
      uVar18 = 0;
      if ((int)uVar1 < (this->RenderingDoneSemaphores).ArrayNum) {
        uVar18 = ~uVar1 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      FVar6 = (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData;
      FVar30 = (ForElementType<FVulkanSemaphore_*>)&this->RenderingDoneSemaphores;
      if (FVar6 != (ForElementType<FVulkanSemaphore_*>)0x0) {
        FVar30 = FVar6;
      }
      local_a8 = *(undefined8 *)((longlong)FVar30 + (longlong)(int)uVar1 * 8);
      pFVar26 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)param_1,Signal);
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,1,&(pFVar26->SignalSemaphores).AllocatorInstance,
                          &(pFVar26->SignalSemaphores).ArrayNum,
                          &(pFVar26->SignalSemaphores).ArrayMax);
      *(undefined8 *)((pFVar26->SignalSemaphores).AllocatorInstance.Data + (longlong)iVar19 * 8) =
           local_a8;
    }
  }
  FVulkanContextCommon::FlushCommands((FVulkanContextCommon *)param_1,WaitForSubmission);
  pFVar7 = (this->CustomPresent).Reference;
  cVar16 = '\x01';
  local_fc = 0;
  if (pFVar7 != (FRHICustomPresent *)0x0) {
    FVar27 = StatPtr_STAT_VulkanCustomPresentTime;
    if (StatPtr_STAT_VulkanCustomPresentTime ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanCustomPresentTime>)0x0) {
      pFVar22 = ::FName::FName(&local_90,"STAT_VulkanCustomPresentTime");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_VulkanCustomPresentTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanCustomPresentTime,
                          *pFVar22,L"CustomPresent time","STATGROUP_VulkanRHI","STATCAT_Advanced",
                          L"Vulkan RHI",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar27;
    bVar13 = false;
    bVar12 = false;
    local_c8.ComparisonIndex.Value = 0;
    local_c8.Number = 0;
    if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_145bd40d1:
      bVar11 = false;
      FVar28 = local_c8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_100.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_100._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
        bVar13 = false;
        bVar12 = true;
        if (-1 < CpuChannel->Enabled) {
          local_f0.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
          local_f0.Number = FVar28.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_f0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                     ,0x2f7);
          bVar13 = true;
          bVar12 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145bd40d1;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar11 = true;
    }
    pFVar8 = (this->CustomPresent).Reference;
    cVar16 = (**(code **)(*(longlong *)pFVar8 + 0x30))(pFVar8,&param_1->_padding_,&local_fc);
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar11) {
      FThreadStats::AddMessage(FVar28,CycleScopeEnd);
    }
  }
  bVar13 = false;
  if (cVar16 == '\0') {
LAB_145bd4323:
    bVar12 = false;
    if (pFVar7 != (FRHICustomPresent *)0x0) goto LAB_145bd433d;
  }
  else {
    if (this->bRenderOffscreen != false) goto LAB_145bd430d;
    lVar21 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if (((*(char *)(lVar21 + 0x1c0) == '\0') && (GVulkanDelayAcquireImage != DelayAcquire)) &&
       ((this->RHIBackBuffer).Reference == (FVulkanBackBuffer *)0x0)) goto LAB_145bd4323;
    if ((this->bRenderOffscreen == false) &&
       (lVar21 = (**(code **)(GDynamicRHI->_padding_ + 0x30))(), *(char *)(lVar21 + 0x1c0) == '\0'))
    {
      local_e8 = this->Device->PresentQueue;
      local_e0 = this;
      EVar20 = `FVulkanViewport::DoCheckedSwapChainJob'::__l2::<lambda_1>::operator()(&local_e8);
      for (iVar19 = 4; ((int)EVar20 < 0 && (0 < iVar19)); iVar19 = iVar19 + -1) {
        if (EVar20 == OutOfDate) {
          if (5 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
        }
        else if (EVar20 == SurfaceLost) {
          if (2 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
        }
        else {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                              ,0xd7,L"");
          if (bVar13) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
        }
        local_a0.WindowHandle = this->WindowHandle;
        RecreateSwapchain(this,param_1,&local_a0);
        FVulkanContextCommon::FlushCommands((FVulkanContextCommon *)param_1,WaitForCompletion);
        uVar1 = this->AcquiredImageIndex;
        EVar20 = Healthy;
        if (uVar1 != 0xffffffff) {
          pFVar3 = this->SwapChain;
          uVar18 = 0;
          if ((int)uVar1 < (this->RenderingDoneSemaphores).ArrayNum) {
            uVar18 = ~uVar1 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          FVar6 = (this->RenderingDoneSemaphores).AllocatorInstance.SecondaryData;
          FVar30 = (ForElementType<FVulkanSemaphore_*>)&this->RenderingDoneSemaphores;
          if (FVar6 != (ForElementType<FVulkanSemaphore_*>)0x0) {
            FVar30 = FVar6;
          }
          EVar20 = FVulkanSwapChain::Present
                             (pFVar3,local_e8,
                              *(FVulkanSemaphore **)((longlong)FVar30 + (longlong)(int)uVar1 * 8));
        }
      }
      if (-1 < (int)EVar20) goto LAB_145bd430d;
      if (1 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      bVar13 = false;
    }
    else {
LAB_145bd430d:
      bVar13 = true;
    }
    bVar12 = bVar13;
    if (pFVar7 != (FRHICustomPresent *)0x0) {
      (**(code **)(*(longlong *)(this->CustomPresent).Reference + 0x38))();
      goto LAB_145bd433d;
    }
  }
  bVar13 = bVar12;
  (**(code **)(this->_padding_ + 0x50))(this);
  (**(code **)(this->_padding_ + 0x58))(this);
LAB_145bd433d:
  this->PresentCount = this->PresentCount + 1;
  this->AcquiredImageIndex = -1;
  GVulkanRHI->TotalPresentCount = GVulkanRHI->TotalPresentCount + 1;
  return bVar13;
}

// RecreateSwapchain @ 145bd4f90

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanViewport::RecreateSwapchain
          (FVulkanViewport *this,FVulkanCommandListContext *param_1,
          FVulkanGenericPlatformWindowContext *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  FVulkanSwapChainRecreateInfo local_18;
  
  FVulkanContextCommon::FlushCommands((FVulkanContextCommon *)param_1,WaitForCompletion);
  lpCriticalSection = &this->RecreatingSwapchain;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18.SwapChain = (VkSwapchainKHR_T *)0x0;
  local_18.Surface = (VkSurfaceKHR_T *)0x0;
  DestroySwapchain(this,&local_18);
  CreateSwapchain(this,param_1,&local_18,param_2);
  if (local_18.Surface != (VkSurfaceKHR_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecreateInfo.Surface == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x143,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_18.SwapChain != (VkSwapchainKHR_T *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecreateInfo.SwapChain == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x144,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RecreateSwapchainFromRT @ 145bd5090

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanViewport::RecreateSwapchainFromRT
          (FVulkanViewport *this,FRHICommandListImmediate *param_1,EPixelFormat param_2,
          FVulkanGenericPlatformWindowContext *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  FVulkanViewport *local_28;
  EPixelFormat EStack_20;
  undefined7 uStack_1f;
  FVulkanGenericPlatformWindowContext *local_18;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x168,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_28 = this;
  EStack_20 = param_2;
  local_18 = param_3;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::RecreateSwapchainFromRT'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[2] = local_28;
    puVar3[3] = CONCAT71(uStack_1f,EStack_20);
    puVar3[5] = L"TRHILambdaCommand";
    puVar3[4] = local_18;
  }
  else {
    `FVulkanViewport::RecreateSwapchainFromRT'::__l2::<lambda_1>::operator()
              (&local_28,(FRHICommandListBase *)param_1);
  }
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThread,None);
  return;
}

// RequiresRenderingBackBuffer @ 145bd5280

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall FVulkanViewport::RequiresRenderingBackBuffer(FVulkanViewport *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  return *(char *)(lVar1 + 0x1c0) == '\0';
}

// Resize @ 145bd52b0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanViewport::Resize
          (FVulkanViewport *this,FRHICommandListImmediate *param_1,uint param_2,uint param_3,
          bool param_4,EPixelFormat param_5,FVulkanGenericPlatformWindowContext *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined6 uStack_16;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x15a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar3;
    *(undefined8 **)&param_1->field_0x30 = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanViewport::Resize'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[2] = this;
    puVar3[3] = CONCAT44(param_3,param_2);
    puVar3[5] = L"TRHILambdaCommand";
    puVar3[4] = CONCAT62(uStack_16,CONCAT11(param_5,param_4));
  }
  else {
    this->SizeX = param_2;
    this->SizeY = param_3;
    this->bIsFullscreen = param_4;
    this->PixelFormat = param_5;
  }
  RecreateSwapchainFromRT(this,param_1,param_5,param_6);
  return;
}

// SetCustomPresent @ 145bd55a0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanViewport::SetCustomPresent(FVulkanViewport *this,FRHICustomPresent *param_1)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->CustomPresent).Reference;
  if (this_00 != (FRHIResource *)param_1) {
    (this->CustomPresent).Reference = param_1;
    if (param_1 != (FRHICustomPresent *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_1);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      return;
    }
  }
  return;
}

// SupportsStandardSwapchain @ 145bd5e60

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall FVulkanViewport::SupportsStandardSwapchain(FVulkanViewport *this)

{
  longlong lVar1;
  
  if (this->bRenderOffscreen == false) {
    lVar1 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
    if (*(char *)(lVar1 + 0x1c0) == '\0') {
      return true;
    }
  }
  return false;
}

// Tick @ 145bd5ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanViewport::Tick(FVulkanViewport *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [32];
  void *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  FVulkanViewport *pFStack_70;
  void **local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVulkanViewport *pFStack_40;
  void **local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                       ,0x149,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SwapChain != (FVulkanSwapChain *)0x0) &&
     (this->LockToVsync != this->SwapChain->LockToVsync)) {
    local_98[0] = this->WindowHandle;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FVulkanViewport::Tick'::`12'::<lambda_1>,1,0>::_vftable_;
    local_68 = local_98;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVulkanViewport::Tick'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FVulkanViewport::Tick_::__l12::TSTR_UpdateVsync335>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FVulkanViewport::Tick'::__l12::TSTR_UpdateVsync335>::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    FlushRenderingCommands();
  }
  return;
}

// TryAcquireImageIndex @ 145bd6070

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

bool __thiscall FVulkanViewport::TryAcquireImageIndex(FVulkanViewport *this)

{
  int iVar1;
  
  if (this->SwapChain != (FVulkanSwapChain *)0x0) {
    iVar1 = FVulkanSwapChain::AcquireImageIndex(this->SwapChain,&this->AcquiredSemaphore);
    if (-1 < iVar1) {
      this->AcquiredImageIndex = iVar1;
      return true;
    }
  }
  return false;
}

// WaitForFrameEventCompletion @ 145bd6130

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FVulkanViewport::WaitForFrameEventCompletion(FVulkanViewport *this)

{
  FVulkanSyncPoint *pFVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanDynamicRHI *this_00;
  FVulkanSyncPoint *local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CS,4000);
      atexit(`FVulkanViewport::WaitForFrameEventCompletion'::__l5::
             _dynamic_atexit_destructor_for__CS__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&CS);
  pFVar1 = (this->LastFrameSyncPoint).Reference;
  if (pFVar1 != (FVulkanSyncPoint *)0x0) {
    if ((pFVar1->GraphEvent).Reference == (FBaseGraphTask *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEvent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                         ,0x55,
                         L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (((pFVar1->GraphEvent).Reference)->field_0xd0 == '\0') {
      this_00 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
      local_res10[0] = (this->LastFrameSyncPoint).Reference;
      if (local_res10[0] != (FVulkanSyncPoint *)0x0) {
        LOCK();
        *(int *)&local_res10[0]->_padding_ = (int)local_res10[0]->_padding_ + 1;
        UNLOCK();
      }
      FVulkanDynamicRHI::ProcessInterruptQueueUntil(this_00,(FVulkanSyncPoint *)local_res10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145bd61fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&CS);
  return;
}

