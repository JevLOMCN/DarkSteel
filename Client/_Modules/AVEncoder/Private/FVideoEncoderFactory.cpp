// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 9

// Create @ 148d057f0

TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_> __thiscall
AVEncoder::FVideoEncoderFactory::Create
          (FVideoEncoderFactory *this,uint param_1,FLayerConfig *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_> TVar8;
  undefined8 uVar9;
  VkInstance_T *pVVar10;
  VkPhysicalDevice_T *pVVar11;
  VkDevice_T *pVVar12;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> *pTVar13;
  void *pvVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  FSharedReferencer<1> FVar17;
  undefined4 in_register_00000014;
  FVideoEncoder *pFVar18;
  FVideoEncoderInputImpl **ppFVar19;
  FScriptContainerElement *pFVar20;
  FVideoEncoderInputImpl *pFVar21;
  uint uVar22;
  undefined8 in_R9;
  longlong lVar23;
  undefined1 local_108 [24];
  FVideoEncoderInputImpl *local_f0;
  FSharedReferencer<1> local_e8;
  undefined8 local_e0;
  FSharedReferencer<1> local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  undefined8 local_c0;
  FSharedReferencer<1> local_b8;
  undefined8 local_b0;
  FSharedReferencer<1> local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  FVideoEncoderInputImpl *local_88;
  TReferenceControllerBase<1> *local_80;
  FVideoEncoderInputImpl *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_48;
  TSharedRef<AVEncoder::FVideoEncoderInputImpl,1> local_38;
  
  pFVar18 = (FVideoEncoder *)CONCAT44(in_register_00000014,param_1);
  uVar22 = 0;
  pFVar18->_padding_ = 0;
  if ((this->AvailableEncoders).ArrayNum < 1) {
    return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)pFVar18;
  }
  lVar23 = 0;
  while( true ) {
    uVar6 = 0;
    if ((int)uVar22 < (this->AvailableEncoders).ArrayNum) {
      uVar6 = ~uVar22 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
      return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
             TVar8.Ptr;
    }
    if (*(int *)((this->AvailableEncoders).AllocatorInstance.Data + lVar23) == (int)param_2) break;
LAB_148d05976:
    uVar22 = uVar22 + 1;
    lVar23 = lVar23 + 0x30;
    if ((this->AvailableEncoders).ArrayNum <= (int)uVar22) {
      return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)pFVar18
      ;
    }
  }
  uVar6 = 0;
  if ((int)uVar22 < (this->CreateEncoders).ArrayNum) {
    uVar6 = ~uVar22 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
    return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)TVar8.Ptr
    ;
  }
  pFVar20 = (this->CreateEncoders).AllocatorInstance.Data + lVar23;
  UE::Core::Private::Function::CheckCallable(*(void **)pFVar20);
  pcVar2 = *(code **)pFVar20;
  pFVar15 = *(FScriptContainerElement **)(pFVar20 + 0x28);
  if (*(FScriptContainerElement **)(pFVar20 + 0x28) == (FScriptContainerElement *)0x0) {
    pFVar15 = pFVar20 + 0x10;
  }
  uVar9 = (**(code **)(*(longlong *)pFVar15 + 8))();
  (*pcVar2)(local_108,uVar9);
  if (pFVar18 != (FVideoEncoder *)local_108) {
    puVar1 = (undefined8 *)pFVar18->_padding_;
    pFVar18->_padding_ = local_108._0_8_;
    local_108._0_8_ = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((undefined8 *)local_108._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_108._0_8_)(local_108._0_8_,1);
  }
  iVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar7 == 2) {
    bVar3 = IsRHIDeviceAMD();
    pvVar14 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
    pTVar13 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_38);
    local_e8.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar21 = pTVar13->Object;
    if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f0 = pFVar21;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if ((pFVar21 == (FVideoEncoderInputImpl *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
      return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
             TVar8.Ptr;
    }
    *(undefined1 *)((longlong)&pFVar21->_padding_ + 4) = 1;
    if (bVar3) {
      bVar3 = FVideoEncoderInputImpl::SetupForD3D11Shared(pFVar21,pvVar14);
      if (!bVar3) {
        local_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_f0 = (FVideoEncoderInputImpl *)0x0;
        local_c0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e8,&local_b8);
        FVar17.ReferenceController = local_b8.ReferenceController;
LAB_148d05d08:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar17.ReferenceController);
        pFVar21 = local_f0;
      }
    }
    else {
      bVar3 = FVideoEncoderInputImpl::SetupForD3D11(pFVar21,pvVar14);
      if (!bVar3) {
        local_a8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_f0 = (FVideoEncoderInputImpl *)0x0;
        local_b0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e8,local_a8);
        FVar17.ReferenceController = local_a8[0].ReferenceController;
        goto LAB_148d05d08;
      }
    }
    FVar17.ReferenceController = local_e8.ReferenceController;
    if (local_e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.ReferenceController);
    if (pFVar21 == (FVideoEncoderInputImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
        return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
               TVar8.Ptr;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
        return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
               TVar8.Ptr;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    plVar16 = (longlong *)pFVar18->_padding_;
    if (plVar16 == (longlong *)0x0) goto LAB_148d05dcc;
    lVar23 = *plVar16;
    local_70 = FVar17.ReferenceController;
    if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar17.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    ppFVar19 = &local_78;
    local_78 = pFVar21;
  }
  else {
    if (iVar7 != 3) {
      if (iVar7 == 4) {
        pVVar10 = (VkInstance_T *)(**(code **)(GDynamicRHI->_padding_ + 0x3a8))();
        pVVar11 = (VkPhysicalDevice_T *)(**(code **)(GDynamicRHI->_padding_ + 0x390))();
        pVVar12 = (VkDevice_T *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
        pTVar13 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_68);
        FVar17.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
        pFVar21 = pTVar13->Object;
        if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar17.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98 = pFVar21;
        uStack_90 = FVar17.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        if ((pFVar21 == (FVideoEncoderInputImpl *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
          return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
                 TVar8.Ptr;
        }
        *(undefined1 *)((longlong)&pFVar21->_padding_ + 4) = 1;
        (pFVar21->FrameInfoVulkan).VulkanInstance = pVVar10;
        (pFVar21->FrameInfoVulkan).VulkanPhysicalDevice = pVVar11;
        (pFVar21->FrameInfoVulkan).VulkanDevice = pVVar12;
        *(undefined4 *)&pFVar21->_padding_ = 5;
        FVideoEncoderInputImpl::CollectAvailableEncoders(pFVar21);
        if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar17.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar17.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        plVar16 = (longlong *)pFVar18->_padding_;
        if (plVar16 != (longlong *)0x0) {
          lVar23 = *plVar16;
          local_58 = (undefined4)local_98;
          uStack_54 = local_98._4_4_;
          uStack_50 = (undefined4)uStack_90;
          uStack_4c = uStack_90._4_4_;
          if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar17.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          cVar4 = (**(code **)(lVar23 + 8))(plVar16,&local_58,in_R9);
          if ((cVar4 == '\0') &&
             (puVar1 = (undefined8 *)pFVar18->_padding_, puVar1 != (undefined8 *)0x0)) {
            pFVar18->_padding_ = 0;
            (**(code **)*puVar1)(puVar1,1);
          }
        }
        goto LAB_148d05dcc;
      }
      goto LAB_148d05976;
    }
    bVar3 = IsRHIDeviceNVIDIA();
    pvVar14 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x388))();
    pTVar13 = MakeShared<AVEncoder::FVideoEncoderInputImpl,1>(&local_48);
    local_108._16_8_ = (pTVar13->SharedReferenceCount).ReferenceController;
    pFVar21 = pTVar13->Object;
    if ((TReferenceControllerBase<1> *)local_108._16_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_108._16_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_108._16_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_108._8_8_ = pFVar21;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if ((pFVar21 == (FVideoEncoderInputImpl *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
      return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
             TVar8.Ptr;
    }
    *(undefined1 *)((longlong)&pFVar21->_padding_ + 4) = 1;
    if (bVar3) {
      bVar3 = FVideoEncoderInputImpl::SetupForD3D12Shared(pFVar21,pvVar14);
      if (!bVar3) {
        local_d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_108._8_8_ = (FVideoEncoderInputImpl *)0x0;
        local_e0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(local_108 + 0x10),&local_d8);
        FVar17.ReferenceController = local_d8.ReferenceController;
LAB_148d05b81:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar17.ReferenceController);
        pFVar21 = (FVideoEncoderInputImpl *)local_108._8_8_;
      }
    }
    else {
      bVar3 = FVideoEncoderInputImpl::SetupForD3D12(pFVar21,pvVar14);
      if (!bVar3) {
        local_c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_108._8_8_ = (FVideoEncoderInputImpl *)0x0;
        local_d0 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(local_108 + 0x10),&local_c8);
        FVar17.ReferenceController = local_c8.ReferenceController;
        goto LAB_148d05b81;
      }
    }
    FVar17.ReferenceController = (TReferenceControllerBase<1> *)local_108._16_8_;
    if ((TReferenceControllerBase<1> *)local_108._16_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_108._16_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_108._16_8_ + 8) + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_108._16_8_);
    if (pFVar21 == (FVideoEncoderInputImpl *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
        return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
               TVar8.Ptr;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar8.Ptr = (FVideoEncoder *)(*pcVar2)();
        return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
               TVar8.Ptr;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    plVar16 = (longlong *)pFVar18->_padding_;
    if (plVar16 == (longlong *)0x0) goto LAB_148d05dcc;
    lVar23 = *plVar16;
    local_80 = FVar17.ReferenceController;
    if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar17.ReferenceController + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar17.ReferenceController + 8) + 1);
      UNLOCK();
    }
    ppFVar19 = &local_88;
    local_88 = pFVar21;
  }
  cVar4 = (**(code **)(lVar23 + 8))(plVar16,ppFVar19,in_R9);
  if ((cVar4 == '\0') && (puVar1 = (undefined8 *)pFVar18->_padding_, puVar1 != (undefined8 *)0x0)) {
    pFVar18->_padding_ = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
LAB_148d05dcc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)pFVar18;
}

// Create @ 148d05e20

TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_> __thiscall
AVEncoder::FVideoEncoderFactory::Create
          (FVideoEncoderFactory *this,uint param_1,
          TSharedPtr<AVEncoder::FVideoEncoderInput,1> *param_2,FLayerConfig *param_3)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_> TVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  undefined4 in_register_00000014;
  FVideoEncoder *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined8 in_stack_00000028;
  undefined8 *local_48;
  longlong local_40;
  ForAnyElementType local_38;
  
  pFVar12 = (FVideoEncoder *)CONCAT44(in_register_00000014,param_1);
  pFVar12->_padding_ = 0;
  lVar1._0_4_ = param_3->Width;
  lVar1._4_4_ = param_3->Height;
  if (lVar1 != 0) {
    pTVar2 = *(TReferenceControllerBase<1> **)&param_3->MaxFramerate;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar13 = 0;
    if (0 < (this->AvailableEncoders).ArrayNum) {
      lVar15 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar13 < (this->AvailableEncoders).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          TVar9.Ptr = (FVideoEncoder *)(*pcVar5)();
          return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
                 TVar9.Ptr;
        }
        if (*(int *)((this->AvailableEncoders).AllocatorInstance.Data + lVar15) == (int)param_2) {
          uVar8 = 0;
          if ((int)uVar13 < (this->CreateEncoders).ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            TVar9.Ptr = (FVideoEncoder *)(*pcVar5)();
            return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)
                   TVar9.Ptr;
          }
          pFVar14 = (this->CreateEncoders).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30;
          UE::Core::Private::Function::CheckCallable(*(void **)pFVar14);
          pcVar5 = *(code **)pFVar14;
          pFVar11 = pFVar14 + 0x10;
          if (*(FScriptContainerElement **)(pFVar14 + 0x28) != (FScriptContainerElement *)0x0) {
            pFVar11 = *(FScriptContainerElement **)(pFVar14 + 0x28);
          }
          uVar10 = (**(code **)(*(longlong *)pFVar11 + 8))();
          (*pcVar5)(&stack0xffffffffffffffb8,uVar10);
          if (pFVar12 != (FVideoEncoder *)&stack0xffffffffffffffb8) {
            puVar3 = (undefined8 *)pFVar12->_padding_;
            pFVar12->_padding_ = (longlong)local_48;
            local_48 = (undefined8 *)0x0;
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          if (local_48 != (undefined8 *)0x0) {
            (**(code **)*local_48)(local_48,1);
          }
          plVar4 = (longlong *)pFVar12->_padding_;
          if (plVar4 != (longlong *)0x0) {
            lVar15 = *plVar4;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_40 = lVar1;
            local_38.Data = (FScriptContainerElement *)pTVar2;
            cVar7 = (**(code **)(lVar15 + 8))(plVar4,&stack0xffffffffffffffc0,in_stack_00000028);
            if ((cVar7 == '\0') &&
               (puVar3 = (undefined8 *)pFVar12->_padding_, puVar3 != (undefined8 *)0x0)) {
              pFVar12->_padding_ = 0;
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          break;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x30;
      } while ((int)uVar13 < (this->AvailableEncoders).ArrayNum);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_3->MaxFramerate);
  return (TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>)pFVar12;
}

// Debug_SetDontRegisterDefaultCodecs @ 148d08110

void __cdecl AVEncoder::FVideoEncoderFactory::Debug_SetDontRegisterDefaultCodecs(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (Singleton.bWasSetup != (FThreadSafeBool)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Singleton.bWasSetup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVEncoder\\Private\\VideoEncoderFactory.cpp"
                       ,0x39,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Singleton.bDebugDontRegisterDefaultCodecs = true;
  return;
}

// Get @ 148d0ac70

FVideoEncoderFactory * __cdecl AVEncoder::FVideoEncoderFactory::Get(void)

{
  if (Singleton.bWasSetup == (FThreadSafeBool)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&ProtectSingleton);
    if (Singleton.bWasSetup == (FThreadSafeBool)0x0) {
      LOCK();
      Singleton.bWasSetup = (FThreadSafeBool)0x1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&ProtectSingleton);
  }
  return &Singleton;
}

// GetInfo @ 148d0b570

bool __thiscall
AVEncoder::FVideoEncoderFactory::GetInfo
          (FVideoEncoderFactory *this,uint param_1,FVideoEncoderInfo *param_2)

{
  TArray<AVEncoder::EVideoFrameFormat,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  void *_Src;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  
  uVar9 = 0;
  if (0 < (this->AvailableEncoders).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->AvailableEncoders).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (*(uint *)((this->AvailableEncoders).AllocatorInstance.Data + lVar10) == param_1) {
        uVar8 = 0;
        if ((int)uVar9 < (this->AvailableEncoders).ArrayNum) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pTVar1 = &param_2->SupportedInputFormats;
        pFVar11 = (this->AvailableEncoders).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
        param_2->ID = *(uint *)pFVar11;
        param_2->MaxWidth = *(uint *)(pFVar11 + 4);
        param_2->MaxHeight = *(uint *)(pFVar11 + 8);
        param_2->CodecType = *(ECodecType *)(pFVar11 + 0xc);
        if (pTVar1 != (TArray<AVEncoder::EVideoFrameFormat,TSizedDefaultAllocator<32>_> *)
                      (pFVar11 + 0x10)) {
          iVar4 = *(int *)(pFVar11 + 0x18);
          piVar2 = &(param_2->SupportedInputFormats).ArrayMax;
          _Src = *(void **)&pFVar11[0x10].field_0x0;
          (param_2->SupportedInputFormats).ArrayNum = iVar4;
          if ((iVar4 == 0) && (*piVar2 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
            if (iVar4 != 0) {
              memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 2);
            }
          }
        }
        uVar3 = *(undefined8 *)(pFVar11 + 0x20);
        (param_2->H264).SupportedProfiles = (int)uVar3;
        (param_2->H264).MinLevel = (int)((ulonglong)uVar3 >> 0x20);
        (param_2->H264).MaxLevel = *(uint *)(pFVar11 + 0x28);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x30;
    } while ((int)uVar9 < (this->AvailableEncoders).ArrayNum);
  }
  return false;
}

// HasEncoderForCodec @ 148d0bf00

bool __thiscall
AVEncoder::FVideoEncoderFactory::HasEncoderForCodec(FVideoEncoderFactory *this,ECodecType param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AvailableEncoders).ArrayNum;
  pFVar2 = (this->AvailableEncoders).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AvailableEncoders).ArrayNum != iVar1) {
      `TCheckedPointerIterator<AVEncoder::FVideoEncoderInfo_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(ECodecType *)(pFVar2 + 0xc) == param_1) {
      return true;
    }
    pFVar2 = pFVar2 + 0x30;
  }
  return false;
}

// Register @ 148d10fc0

void __thiscall
AVEncoder::FVideoEncoderFactory::Register
          (FVideoEncoderFactory *this,FVideoEncoderInfo *param_1,
          TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>
          *param_2)

{
  int *piVar1;
  FVideoEncoderInfo *pFVar2;
  TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>
  *pTVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  
  pFVar2 = (FVideoEncoderInfo *)(this->AvailableEncoders).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->AvailableEncoders).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->AvailableEncoders).ArrayNum;
  piVar1 = &(this->AvailableEncoders).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->AvailableEncoders).AllocatorInstance,piVar1);
  }
  (this->AvailableEncoders).ArrayNum = iVar7 + 1;
  FVideoEncoderInfo::FVideoEncoderInfo
            ((FVideoEncoderInfo *)
             ((this->AvailableEncoders).AllocatorInstance.Data + (longlong)iVar7 * 0x30),param_1);
  LOCK();
  iVar5 = NextID.Counter + 1;
  UNLOCK();
  iVar7 = (this->AvailableEncoders).ArrayNum;
  iVar11 = NextID.Counter + 1;
  uVar10 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar7) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  NextID.Counter = iVar5;
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(int *)((this->AvailableEncoders).AllocatorInstance.Data +
          (longlong)(this->AvailableEncoders).ArrayNum * 0x30 + -0x30) = iVar11;
  pTVar3 = (TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>
            *)(this->CreateEncoders).AllocatorInstance.Data;
  if ((pTVar3 <= param_2) && (param_2 < pTVar3 + (this->CreateEncoders).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->CreateEncoders).ArrayNum;
  piVar1 = &(this->CreateEncoders).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->CreateEncoders).AllocatorInstance,piVar1);
  }
  (this->CreateEncoders).ArrayNum = iVar7 + 1;
  pFVar12 = (this->CreateEncoders).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
  *(longlong *)pFVar12 = *(longlong *)param_2;
  *(longlong *)(pFVar12 + 0x28) = 0;
  if (*(longlong *)pFVar12 != 0) {
    puVar9 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar9 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar9)();
  }
  return;
}

// RegisterDefaultCodecs @ 148d11340

void __thiscall AVEncoder::FVideoEncoderFactory::RegisterDefaultCodecs(FVideoEncoderFactory *this)

{
  return;
}

// Shutdown @ 148d14a10

void __cdecl AVEncoder::FVideoEncoderFactory::Shutdown(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&ProtectSingleton);
  if (Singleton.bWasSetup != (FThreadSafeBool)0x0) {
    LOCK();
    Singleton.bWasSetup = (FThreadSafeBool)0x0;
    UNLOCK();
    Singleton.bDebugDontRegisterDefaultCodecs = false;
    DestructItems<AVEncoder::FVideoEncoderInfo,int>
              ((FVideoEncoderInfo *)Singleton.AvailableEncoders.AllocatorInstance.Data,
               Singleton.AvailableEncoders.ArrayNum);
    Singleton.AvailableEncoders.ArrayNum = 0;
    if (Singleton.AvailableEncoders.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&Singleton.AvailableEncoders.AllocatorInstance,0,
                 &Singleton.AvailableEncoders.ArrayMax);
    }
    DestructItems<TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>,int>
              ((TFunction<TUniquePtr<AVEncoder::FVideoEncoder,TDefaultDelete<AVEncoder::FVideoEncoder>_>___cdecl(void)>
                *)Singleton.CreateEncoders.AllocatorInstance.Data,Singleton.CreateEncoders.ArrayNum)
    ;
    Singleton.CreateEncoders.ArrayNum = 0;
    if (Singleton.CreateEncoders.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,&Singleton.CreateEncoders.AllocatorInstance,0,
                 &Singleton.CreateEncoders.ArrayMax);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d14ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&ProtectSingleton);
  return;
}

