// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 1

// Call @ 14d758330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGPUTextureTransferModule::InitializeTextureTransfer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  IVulkanDynamicRHI *pIVar7;
  undefined8 *puVar8;
  FSharedReferencer<1> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  byte bVar11;
  undefined1 auStackY_e8 [32];
  TReferenceControllerBase<1> *pTStack_b8;
  FSharedReferencer<1> FStack_b0;
  undefined8 uStack_a8;
  FSharedReferencer<1> FStack_a0;
  undefined8 uStack_98;
  FSharedReferencer<1> FStack_90;
  undefined8 uStack_88;
  FSharedReferencer<1> FStack_80;
  undefined8 uStack_78;
  TReferenceControllerBase<1> *pTStack_70;
  byte abStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTStack_b8 = (TReferenceControllerBase<1> *)0x0;
  FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar5 == 2) {
    bVar11 = 1;
  }
  else if (iVar5 == 3) {
    bVar11 = 2;
  }
  else if (iVar5 == 4) {
    bVar11 = 3;
  }
  else {
    bVar11 = 0;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (bVar11 == 1) {
    pTVar6 = ::operator_new(0x108);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTStack_b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFD3D11TextureTransfer_Private_GPUTextureTransfer_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar6 + 1,0,0xf8);
      GPUTextureTransfer::Private::FTextureTransferBase::FTextureTransferBase
                ((FTextureTransferBase *)(pTVar6 + 1));
      pTVar6[0x10]._padding_ = 0;
      pTStack_b8 = pTVar6 + 1;
      pTVar6[1]._padding_ = (longlong)&___7FD3D11TextureTransfer_Private_GPUTextureTransfer_UE__6B_;
      if (pTStack_b8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar6;
    }
    uStack_88 = 0;
    FStack_80.ReferenceController = pTVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&FStack_80);
    FVar9.ReferenceController = FStack_80.ReferenceController;
  }
  else if (bVar11 == 2) {
    pTVar6 = ::operator_new(0x110);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTStack_b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFD3D12TextureTransfer_Private_GPUTextureTransfer_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar6 + 1,0,0x100);
      GPUTextureTransfer::Private::FTextureTransferBase::FTextureTransferBase
                ((FTextureTransferBase *)(pTVar6 + 1));
      pTVar6[0x10]._padding_ = 0;
      pTVar6[0x10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[0x10].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_b8 = pTVar6 + 1;
      pTVar6[1]._padding_ = (longlong)&___7FD3D12TextureTransfer_Private_GPUTextureTransfer_UE__6B_;
      if (pTStack_b8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar6;
    }
    uStack_98 = 0;
    FStack_90.ReferenceController = pTVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&FStack_90);
    FVar9.ReferenceController = FStack_90.ReferenceController;
  }
  else {
    if (bVar11 != 3) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1755494648752635653>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\GPUTextureTransferModule.cpp"
                         ,0xfb,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14d757c58;
    }
    pTVar6 = ::operator_new(0x118);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTStack_b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFVulkanTextureTransfer_Private_GPUTextureTransfer_UE___00_SharedPointerInternals__6B_
      ;
      memset(pTVar6 + 1,0,0x108);
      GPUTextureTransfer::Private::FTextureTransferBase::FTextureTransferBase
                ((FTextureTransferBase *)(pTVar6 + 1));
      pTVar6[0x10]._padding_ = 0;
      pTVar6[0x10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar6[0x10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar6[0x11]._padding_ = 0;
      pTStack_b8 = pTVar6 + 1;
      pTVar6[1]._padding_ = (longlong)&___7FVulkanTextureTransfer_Private_GPUTextureTransfer_UE__6B_
      ;
      if (pTStack_b8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      pTVar10 = pTVar6;
    }
    uStack_a8 = 0;
    FStack_a0.ReferenceController = pTVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_b0,&FStack_a0);
    FVar9.ReferenceController = FStack_a0.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14d757c58:
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  abStack_68[0] = bVar11;
  uStack_60 = (**(code **)(GDynamicRHI->_padding_ + 0x388))();
  uStack_58 = (**(code **)(GDynamicRHI->_padding_ + 0x398))();
  if (bVar11 == 3) {
    pIVar7 = GetIVulkanDynamicRHI();
    uStack_50 = (**(code **)(*(longlong *)pIVar7 + 0x4d0))(pIVar7);
    puVar8 = (undefined8 *)(**(code **)(*(longlong *)pIVar7 + 0x4e0))(pIVar7);
    uStack_48 = *puVar8;
    uStack_40 = puVar8[1];
  }
  if (3 < (byte)LogGPUTextureTransfer._0_1_) {
    Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogGPUTextureTransfer);
  }
  if (pTStack_b8 == (TReferenceControllerBase<1> *)0x0) {
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
  cVar4 = (**(code **)(pTStack_b8->_padding_ + 0x78))(pTStack_b8,abStack_68);
  if (cVar4 != '\0') {
    lVar1 = *(longlong *)param_1;
    if (*(int *)(lVar1 + 0x20) <= (int)(uint)bVar11) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar8 = (undefined8 *)((ulonglong)bVar11 * 0x10 + *(longlong *)(lVar1 + 0x18));
    if (FStack_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_78 = *puVar8;
    pTStack_70 = (TReferenceControllerBase<1> *)puVar8[1];
    *puVar8 = pTStack_b8;
    puVar8[1] = FStack_b0.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  }
  LOCK();
  *(undefined1 *)(*(longlong *)param_1 + 0x10) = 1;
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b0.ReferenceController);
  return;
}

