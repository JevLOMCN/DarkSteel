// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FAnimBankDataRenderProxy @ 1473d4a30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimBankDataRenderProxy * __thiscall
FAnimBankDataRenderProxy::FAnimBankDataRenderProxy
          (FAnimBankDataRenderProxy *this,UAnimBankData *param_1,
          FSkinningSceneExtensionProxy *param_2,FSceneInterface *param_3)

{
  TArray<FAnimBankItem,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  USkinnedAsset *pUVar4;
  FAnimBankItem *pFVar5;
  code *pcVar6;
  bool bVar7;
  FAnimBankDataRenderProxy *pFVar8;
  
  this->SceneProxy = param_2;
  this->UniqueAnimationCount = 0;
  pTVar1 = &this->AnimBankItems;
  (this->AnimBankItems).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FAnimBankDataRenderProxy__6B_;
  piVar2 = &(this->AnimBankItems).ArrayMax;
  (this->SkinnedAsset).field0_0x0.DebugPtr = (USkinnedAsset *)0x0;
  this->Scene = param_3;
  (this->AnimBankIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBankIds).ArrayNum = 0;
  (this->AnimBankIds).ArrayMax = 0;
  (this->AnimBankHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimBankHandles).ArrayNum = 0;
  (this->AnimBankHandles).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AnimBankItems).ArrayNum = 0;
  this->UniqueAnimationCount = (uint)param_2->UniqueAnimationCount;
  pUVar4 = param_2->SkinnedAsset;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USkinnedAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SkinnedAsset).field0_0x0.DebugPtr = pUVar4;
  if (pTVar1 != &param_1->AnimBankItems) {
    iVar3 = (param_1->AnimBankItems).ArrayNum;
    pFVar5 = (FAnimBankItem *)(param_1->AnimBankItems).AllocatorInstance.Data;
    (this->AnimBankItems).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FAnimBankItem,FAnimBankItem,int>((pTVar1->AllocatorInstance).Data,pFVar5,iVar3)
      ;
    }
  }
  if ((this->SkinnedAsset).field0_0x0.DebugPtr == (USkinnedAsset *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkinnedAsset != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimBank.cpp"
                       ,0x540,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FAnimBankDataRenderProxy *)(*pcVar6)();
      return pFVar8;
    }
  }
  return this;
}

// ~FAnimBankDataRenderProxy @ 1473d9d00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimBankDataRenderProxy::~FAnimBankDataRenderProxy(FAnimBankDataRenderProxy *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAnimBankDataRenderProxy__6B_;
  pFVar1 = (this->AnimBankItems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimBankHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimBankIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTransformProviderRenderProxy__6B_;
  return;
}

// CreateRenderThreadResources @ 1473f5650

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FAnimBankDataRenderProxy::CreateRenderThreadResources
          (FAnimBankDataRenderProxy *this,FRHICommandListBase *param_1)

{
  TArray<FAnimBankRecordHandle,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement FVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  USkinnedAsset *pUVar9;
  FSceneInterface *pFVar10;
  code *pcVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  byte bVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  FWeakObjectPtr local_d8;
  FWeakObjectPtr local_d0;
  UObject *local_c8;
  USkinnedAsset *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58 [4];
  
  uVar6 = (this->AnimBankItems).ArrayNum;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_dc = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  if (0 < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,uVar6,&local_e8,0,&local_dc);
  }
  local_res20 = (this->AnimBankItems).ArrayNum;
  uVar16 = (ulonglong)(int)local_res20;
  pFVar22 = (this->AnimBankItems).AllocatorInstance.Data;
  pFVar20 = pFVar22 + uVar16 * 0x10;
  do {
    while( true ) {
      if ((this->AnimBankItems).ArrayNum != (int)uVar16) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FAnimBankItem,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      iVar14 = local_e0;
      if (pFVar22 == pFVar20) {
        pFVar10 = this->Scene;
        pcVar11 = *(code **)(pFVar10->_padding_ + 0x300);
        local_78 = local_e8.Data;
        if ((local_e0 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_68 = (undefined4)local_78;
        uStack_64 = local_78._4_4_;
        uStack_5c = uStack_6c;
        iStack_70 = iVar14;
        iStack_60 = iVar14;
        puVar17 = (undefined8 *)(*pcVar11)(pFVar10,local_58,&local_68);
        pTVar1 = &this->AnimBankHandles;
        if (pTVar1 != (TArray<FAnimBankRecordHandle,TSizedDefaultAllocator<32>_> *)puVar17) {
          pFVar22 = (pTVar1->AllocatorInstance).Data;
          if (pFVar22 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar22);
          }
          (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar17;
          *puVar17 = 0;
          (this->AnimBankHandles).ArrayNum = *(int *)(puVar17 + 1);
          (this->AnimBankHandles).ArrayMax = *(int *)((longlong)puVar17 + 0xc);
          puVar17[1] = 0;
        }
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
        uVar6 = (this->AnimBankHandles).ArrayNum;
        pTVar2 = &this->AnimBankIds;
        if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
        }
        piVar3 = &(this->AnimBankIds).ArrayMax;
        (this->AnimBankIds).ArrayNum = 0;
        if ((this->AnimBankIds).ArrayMax < (int)uVar6) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar6,&pTVar2->AllocatorInstance,0,piVar3);
        }
        pFVar20 = (pTVar1->AllocatorInstance).Data;
        iVar14 = (this->AnimBankHandles).ArrayNum;
        pFVar22 = pFVar20 + (longlong)iVar14 * 8;
        while( true ) {
          if ((this->AnimBankHandles).ArrayNum != iVar14) {
            `TCheckedPointerIterator<FAnimBankRecordHandle,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar20 == pFVar22) break;
          iVar15 = (this->AnimBankIds).ArrayNum;
          iVar7 = *(int *)pFVar20;
          if (iVar15 == *piVar3) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar3);
          }
          pFVar20 = pFVar20 + 8;
          (this->AnimBankIds).ArrayNum = iVar15 + 1;
          *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 8) = (longlong)iVar7;
        }
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data);
        }
        return;
      }
      lVar21 = *(longlong *)pFVar22;
      if ((lVar21 != 0) && ((this->SkinnedAsset).field0_0x0.DebugPtr != (USkinnedAsset *)0x0))
      break;
      local_88 = 0;
      uStack_80 = 0x33f800000;
      local_98 = 0;
      uStack_90 = 0;
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x420,&local_e8,&local_dc);
      }
      uVar23 = (undefined4)local_88;
      uVar24 = local_88._4_4_;
      uVar25 = (undefined4)uStack_80;
      uVar26 = uStack_80._4_4_;
LAB_1473f5994:
      pFVar22 = pFVar22 + 0x10;
      *(undefined8 *)(local_e8.Data + (longlong)local_e0 * 0x20) = 0;
      *(undefined8 *)(local_e8.Data + (longlong)local_e0 * 0x20 + 8) = 0;
      pFVar4 = local_e8.Data + (longlong)local_e0 * 0x20 + 0x10;
      *(undefined4 *)pFVar4 = uVar23;
      *(undefined4 *)(pFVar4 + 4) = uVar24;
      *(undefined4 *)(pFVar4 + 8) = uVar25;
      *(undefined4 *)(pFVar4 + 0xc) = uVar26;
      uVar16 = (ulonglong)local_res20;
      local_e0 = local_e0 + 1;
    }
    iVar14 = *(int *)(pFVar22 + 8);
    if (*(int *)(lVar21 + 0x100) <= iVar14) {
      local_a8 = 0;
      uStack_a0 = 0x33f800000;
      local_b8 = 0;
      uStack_b0 = 0;
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x420,&local_e8,&local_dc);
      }
      uVar23 = (undefined4)local_a8;
      uVar24 = local_a8._4_4_;
      uVar25 = (undefined4)uStack_a0;
      uVar26 = uStack_a0._4_4_;
      goto LAB_1473f5994;
    }
    if ((iVar14 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar21 = (longlong)iVar14 * 0x80 + *(longlong *)(lVar21 + 0xf8);
    if (local_e0 == local_dc) {
      local_e0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x420,&local_e8,&local_dc);
    }
    FVar12.Data = local_e8.Data;
    iVar14 = local_e0 + 1;
    lVar19 = (longlong)local_e0 * 0x20;
    *(undefined8 *)(local_e8.Data + lVar19 + 0x18) = 0x3f800000;
    local_e8.Data[lVar19 + 0x1c] = (FScriptContainerElement)((byte)local_e8.Data[lVar19 + 0x1c] | 3)
    ;
    *(undefined8 *)(local_e8.Data + lVar19) = 0;
    *(undefined8 *)(local_e8.Data + lVar19 + 8) = 0;
    *(undefined8 *)(local_e8.Data + lVar19 + 0x10) = 0;
    pUVar8 = *(UObject **)pFVar22;
    local_e0 = iVar14;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar8 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar8 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
      }
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_c8 = pUVar8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar8);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_c8);
    *(FWeakObjectPtr *)(FVar12.Data + lVar19) = local_d8;
    *(undefined4 *)(FVar12.Data + lVar19 + 0x10) = *(undefined4 *)(pFVar22 + 8);
    pUVar9 = (this->SkinnedAsset).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (USkinnedAsset *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar9 != (USkinnedAsset *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (USkinnedAsset *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
      }
    }
    local_d0.ObjectIndex = 0;
    local_d0.ObjectSerialNumber = 0;
    local_c0 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (USkinnedAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FWeakObjectPtr::operator=(&local_d0,(FObjectPtr)&local_c0);
    *(FWeakObjectPtr *)(FVar12.Data + lVar19 + 8) = local_d0;
    *(undefined4 *)(FVar12.Data + lVar19 + 0x14) = *(undefined4 *)(lVar21 + 0x68);
    *(undefined4 *)(FVar12.Data + lVar19 + 0x18) = *(undefined4 *)(lVar21 + 0x6c);
    FVar5 = FVar12.Data[lVar19 + 0x1c];
    bVar18 = *(byte *)(lVar21 + 0x78) & 1;
    FVar12.Data[lVar19 + 0x1c] = (FScriptContainerElement)(bVar18 | (byte)FVar5 & 0xfe);
    FVar12.Data[lVar19 + 0x1c] =
         (FScriptContainerElement)(*(byte *)(lVar21 + 0x78) & 2 | bVar18 | (byte)FVar5 & 0xfc);
    pFVar22 = pFVar22 + 0x10;
    uVar16 = (ulonglong)local_res20;
  } while( true );
}

// DestroyRenderThreadResources @ 1473f9510

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
FAnimBankDataRenderProxy::DestroyRenderThreadResources(FAnimBankDataRenderProxy *this)

{
  int iVar1;
  FSceneInterface *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  
  pFVar2 = this->Scene;
  iVar1 = (this->AnimBankHandles).ArrayNum;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x308);
  pFVar4 = (this->AnimBankHandles).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28 = SUB84(pFVar4,0);
  uStack_24 = (undefined4)((ulonglong)pFVar4 >> 0x20);
  local_18 = local_28;
  uStack_14 = uStack_24;
  iStack_10 = iVar1;
  (*pcVar3)(pFVar2,&local_18);
  (this->AnimBankHandles).ArrayNum = 0;
  if ((this->AnimBankHandles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->AnimBankHandles).AllocatorInstance,0,&(this->AnimBankHandles).ArrayMax)
    ;
  }
  (this->AnimBankIds).ArrayNum = 0;
  if ((this->AnimBankIds).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AnimBankIds).AllocatorInstance,0,&(this->AnimBankIds).ArrayMax);
  }
  return;
}

// GetProviderData @ 147404180

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<unsigned___int64_const_,int> * __thiscall
FAnimBankDataRenderProxy::GetProviderData
          (FAnimBankDataRenderProxy *this,
          TArrayView<unsigned___int64_const_,int> *__return_storage_ptr__,bool *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned___int64_const_,int> *pTVar4;
  
  *param_1 = (this->AnimBankIds).ArrayNum == this->UniqueAnimationCount;
  iVar1 = (this->AnimBankIds).ArrayNum;
  __return_storage_ptr__->DataPtr = (ulong64 *)(this->AnimBankIds).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<unsigned___int64_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

