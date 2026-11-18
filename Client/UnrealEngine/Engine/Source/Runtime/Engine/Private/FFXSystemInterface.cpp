// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// ~FFXSystemInterface @ 1480f6780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemInterface::~FFXSystemInterface(FFXSystemInterface *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FFXSystemInterface__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001480f67aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Create @ 1481045a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FFXSystemInterface * __cdecl FFXSystemInterface::Create(Type param_1,FSceneInterface *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  EShaderPlatform EVar4;
  int iVar5;
  uint uVar6;
  FFXSystemInterface *pFVar7;
  FGPUSortManager *pFVar8;
  FFXSystem *pFVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  FFXSystem *local_res20;
  TMap<FName,TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  TMap<FName,TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  TRawPtrProxyWithDeleter<FFXSystem,FFXSystemInterface::FFXInterfaceDeletor> local_80;
  TRawPtrProxyWithDeleter<FFXSystemInterface,FFXSystemInterface::FFXInterfaceDeletor> local_70 [2];
  undefined4 local_44;
  
  if ((param_2 == (FSceneInterface *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Scene",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
                         ,0x3b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FFXSystemInterface *)(*pcVar2)();
    return pFVar7;
  }
  EVar4 = FSceneInterface::GetShaderPlatform(param_2);
  pFVar8 = ::operator_new(0x180);
  local_res20 = (FFXSystem *)0x0;
  if (pFVar8 == (FGPUSortManager *)0x0) {
    pFVar8 = (FGPUSortManager *)0x0;
  }
  else {
    pFVar8 = FGPUSortManager::FGPUSortManager(pFVar8,param_1);
    if (pFVar8 != (FGPUSortManager *)0x0) {
      *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
    }
  }
  if (CreateCustomFXDelegates._8_4_ == CreateCustomFXDelegates._52_4_) {
    pFVar9 = ::operator_new(0x100);
    if (pFVar9 != (FFXSystem *)0x0) {
      local_res20 = FFXSystem::FFXSystem(pFVar9,param_1,EVar4,pFVar8);
    }
    (**(code **)(param_2->_padding_ + 0x470))(param_2,local_res20);
    local_res20->_padding_ = (longlong)param_2;
    local_res20->_padding_ = (longlong)param_2;
  }
  else {
    local_res20 = ::operator_new(0x48);
    if (local_res20 == (FFXSystem *)0x0) {
      local_res20 = (FFXSystem *)0x0;
    }
    else {
      local_res20->_padding_ = 0;
      local_res20->_padding_ = 0;
      *(undefined1 *)&local_res20->_padding_ = 0;
      local_res20->_padding_ = 0;
      local_res20->_padding_ = 0;
      local_res20->_padding_ = (longlong)&___7FFXSystemSet__6B_;
      *(undefined8 *)&local_res20->VectorFields = 0;
      *(undefined8 *)&(local_res20->VectorFields).field_0x8 = 0;
      *(FGPUSortManager **)&(local_res20->VectorFields).field_0x10 = pFVar8;
      if (pFVar8 != (FGPUSortManager *)0x0) {
        *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
      }
    }
    (**(code **)(param_2->_padding_ + 0x470))(param_2,local_res20);
    local_res20->_padding_ = (longlong)param_2;
    local_res20->_padding_ = (longlong)param_2;
    pFVar9 = ::operator_new(0x100);
    if (pFVar9 == (FFXSystem *)0x0) {
      local_80.Object = (FFXSystem *)0x0;
    }
    else {
      local_80.Object = FFXSystem::FFXSystem(pFVar9,param_1,EVar4,pFVar8);
      if ((((local_80.Object != (FFXSystem *)0x0) && ((local_80.Object)->_padding_ != 0)) &&
          ((local_80.Object)->_padding_ != 0)) &&
         ((0 < *(int *)((local_80.Object)->_padding_ + 8) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7bd,L"Trying to share an already-shared object"), bVar3)))) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FFXSystemInterface *)(*pcVar2)();
        return pFVar7;
      }
    }
    iVar5 = *(int *)&(local_res20->VectorFields).field_0x8;
    puVar1 = &(local_res20->VectorFields).field_0xc;
    if (iVar5 == *(int *)puVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&local_res20->VectorFields,(int *)puVar1);
    }
    *(int *)&(local_res20->VectorFields).field_0x8 = iVar5 + 1;
    TSharedRef<FFXSystemInterface,1>::
    TSharedRef<FFXSystemInterface,1><FFXSystem,FFXSystemInterface::FFXInterfaceDeletor>
              ((TSharedRef<FFXSystemInterface,1> *)
               ((longlong)iVar5 * 0x10 + *(longlong *)&local_res20->VectorFields),&local_80);
    iStack_d0 = 0;
    uVar13 = 0;
    local_b8 = 0;
    uStack_cc = 1;
    uVar12 = CreateCustomFXDelegates._40_4_;
    if (uVar12 != 0) {
      uVar13 = CreateCustomFXDelegates._40_8_ & 0xffffffff;
      puVar14 = (uint *)&CreateCustomFXDelegates.field_0x10;
      if (CreateCustomFXDelegates._32_8_ != 0) {
        puVar14 = (uint *)CreateCustomFXDelegates._32_8_;
      }
      uVar6 = *puVar14;
      while (uVar6 == 0) {
        lVar10 = (longlong)iStack_d0;
        local_b8 = local_b8 + 0x20;
        iStack_d0 = iStack_d0 + 1;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_d0)
        goto LAB_1481047ed;
        uVar6 = puVar14[lVar10 + 1];
      }
      uStack_cc = -uVar6 & uVar6;
      uVar13 = (ulonglong)uStack_cc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar6 = local_b8 + -1 + (int)lVar10;
      if ((int)uVar12 < (int)uVar6) {
        uVar6 = uVar12;
      }
      uVar13 = (ulonglong)uVar6;
    }
LAB_1481047ed:
    local_d8 = &CreateCustomFXDelegates;
    local_c8._0_1_ = true;
    local_c8._1_7_ = 0x154c5e5;
    uStack_c0 = 0xffffffff;
    iStack_bc = (int)uVar13;
    uStack_b4 = local_44;
    TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
    TStack_a0.CurrentBitIndex = iStack_bc;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    local_a8 = &CreateCustomFXDelegates;
    TStack_a0._28_4_ = local_44;
    TStack_a0.BaseBitIndex = local_b8;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&CreateCustomFXDelegates.field_0x10;
    if (iStack_bc < (int)uVar12) {
      do {
        lVar10 = *(longlong *)local_a8 + (longlong)(int)uVar13 * 0x28;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar10 + 8),
                   (FReadAccessScope *)&local_d8);
        if (*(int *)(lVar10 + 0x18) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar10 + 0x10);
        }
        pFVar7 = (FFXSystemInterface *)(**(code **)(*plVar11 + 0x60))(plVar11,param_1,EVar4,pFVar8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)&local_d8);
        if (pFVar7 != (FFXSystemInterface *)0x0) {
          pFVar7->SceneInterface = param_2;
          pFVar7->Scene = (FScene *)param_2;
          if (((pFVar7->_padding_ != 0) && (pFVar7->_padding_ != 0)) &&
             ((0 < *(int *)(pFVar7->_padding_ + 8) &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InObject || !InObject->DoesSharedInstanceExist()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x7bd,L"Trying to share an already-shared object"), bVar3)))) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FFXSystemInterface *)(*pcVar2)();
            return pFVar7;
          }
          iVar5 = *(int *)&(local_res20->VectorFields).field_0x8;
          local_70[0].Object = pFVar7;
          if (iVar5 == *(int *)&(local_res20->VectorFields).field_0xc) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,(ForAnyElementType *)&local_res20->VectorFields,(int *)puVar1);
          }
          *(int *)&(local_res20->VectorFields).field_0x8 = iVar5 + 1;
          TSharedRef<FFXSystemInterface,1>::
          TSharedRef<FFXSystemInterface,1><FFXSystemInterface,FFXSystemInterface::FFXInterfaceDeletor>
                    ((TSharedRef<FFXSystemInterface,1> *)
                     (*(longlong *)&local_res20->VectorFields + (longlong)iVar5 * 0x10),local_70);
        }
        TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
        uVar13 = (ulonglong)(uint)TStack_a0.CurrentBitIndex;
      } while (TStack_a0.CurrentBitIndex < (TStack_a0.Array)->NumBits);
    }
  }
  if (pFVar8 != (FGPUSortManager *)0x0) {
    plVar11 = &pFVar8->_padding_;
    *(int *)plVar11 = (int)*plVar11 + -1;
    if ((int)*plVar11 == 0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
  }
  return (FFXSystemInterface *)local_res20;
}

// Destroy @ 148106bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FFXSystemInterface::Destroy(FFXSystemInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FFXSystemInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FXSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148106c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 8))(param_1);
  return;
}

// DestroyGPUSimulation @ 148107170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemInterface::DestroyGPUSimulation(FFXSystemInterface *this)

{
  return;
}

// DrawDebug_RenderThread @ 1481079f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
FFXSystemInterface::DrawDebug_RenderThread
          (FFXSystemInterface *this,FRDGBuilder *param_1,FSceneView *param_2,
          FScreenPassRenderTarget *param_3)

{
  return;
}

// DrawSceneDebug_RenderThread @ 148107a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
FFXSystemInterface::DrawSceneDebug_RenderThread
          (FFXSystemInterface *this,FRDGBuilder *param_1,FSceneView *param_2,FRDGTexture *param_3,
          FRDGTexture *param_4)

{
  return;
}

// GetInterface @ 1481160c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFXSystemInterface * __thiscall
FFXSystemInterface::GetInterface(FFXSystemInterface *this,FName *param_1)

{
  return (FFXSystemInterface *)0x0;
}

// MarkPendingKill @ 148124380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FFXSystemInterface::MarkPendingKill(FFXSystemInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FFXSystemInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FXSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001481243bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 8))(param_1);
  return;
}

// OnDestroy @ 1481244f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemInterface::OnDestroy(FFXSystemInterface *this)

{
  return;
}

// OnMarkPendingKill @ 1481248c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFXSystemInterface::OnMarkPendingKill(FFXSystemInterface *this)

{
  this->bIsPendingKill = true;
  return;
}

// QueueDestroyGPUSimulation @ 148128440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FFXSystemInterface::QueueDestroyGPUSimulation(FFXSystemInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FFXSystemInterface *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FFXSystemInterface *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1 == (FFXSystemInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FXSystem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\FXSystem.cpp"
                       ,99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FFXSystemInterface::QueueDestroyGPUSimulation'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FFXSystemInterface::QueueDestroyGPUSimulation'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = param_1;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FFXSystemInterface::QueueDestroyGPUSimulation_::__l2::TSTR_FDestroyGPUSimulationCommand100>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FFXSystemInterface::QueueDestroyGPUSimulation'::__l2::TSTR_FDestroyGPUSimulationCommand100>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
  return;
}

// RegisterCustomFXSystem @ 1481285f0

void __cdecl
FFXSystemInterface::RegisterCustomFXSystem
          (FName *param_1,
          TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>
          *param_2)

{
  TPairInitializer<FName_const_&,TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>_const_&>
  local_res8 [2];
  FName *local_18;
  TDelegate<FFXSystemInterface_*___cdecl(ERHIFeatureLevel::Type,EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>
  *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,TDelegate<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TDelegate<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>_const_&>_>
            (&CreateCustomFXDelegates,local_res8,(bool *)&local_18);
  return;
}

// SetSceneTexturesUniformBuffer @ 148131080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FFXSystemInterface::SetSceneTexturesUniformBuffer
          (FFXSystemInterface *this,TUniformBufferRef<FSceneTextureUniformParameters> *param_1)

{
  return;
}

// ShouldDebugDraw_RenderThread @ 148132470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FFXSystemInterface::ShouldDebugDraw_RenderThread(FFXSystemInterface *this)

{
  return false;
}

// UnregisterCustomFXSystem @ 14813c7c0

void __cdecl FFXSystemInterface::UnregisterCustomFXSystem(FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName local_res8 [4];
  
  FVar1 = *param_1;
  if (CreateCustomFXDelegates._8_4_ != CreateCustomFXDelegates._52_4_) {
    local_res8[0] = FVar1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FName,TDelegate<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<FFXSystemInterface_*___cdecl(enum_ERHIFeatureLevel::Type,enum_EShaderPlatform,FGPUSortManager_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>(&CreateCustomFXDelegates,FVar1.Number + uVar2,local_res8);
  }
  return;
}

