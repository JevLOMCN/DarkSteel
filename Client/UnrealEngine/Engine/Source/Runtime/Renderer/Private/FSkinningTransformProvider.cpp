// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// Broadcast @ 1456734b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FSkinningTransformProvider::Broadcast
          (FSkinningTransformProvider *this,
          TArrayView<FSkinningTransformProvider::FProviderRange_const_,int> *param_1,
          FProviderContext *param_2)

{
  FProviderRange *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FProviderIndirection *pFVar7;
  bool bVar8;
  FProviderRange *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined8 uStack_60;
  FReadAccessScope local_58;
  
  pFVar11 = (this->Providers).AllocatorInstance.Data;
  iVar2 = (this->Providers).ArrayNum;
  pFVar7 = (param_2->Indirections).DataPtr;
  uStack_60 = *(undefined8 *)&(param_2->Indirections).ArrayNum;
  pFVar10 = pFVar11 + 0x18;
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x30;
  do {
    while( true ) {
      if ((this->Providers).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FSkinningTransformProvider::FTransformProvider,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar12) {
        return;
      }
      pFVar9 = param_1->DataPtr;
      pFVar1 = pFVar9 + param_1->ArrayNum;
      if (pFVar9 != pFVar1) break;
LAB_145673607:
      pFVar11 = pFVar11 + 0x30;
      pFVar10 = pFVar10 + 0x30;
    }
    do {
      if (((*(uint *)(pFVar10 + -0xc) == (pFVar9->Id).D &&
           *(uint *)(pFVar10 + -0x10) == (pFVar9->Id).C) &&
          *(uint *)(pFVar10 + -0x14) == (pFVar9->Id).B) && *(uint *)pFVar11 == (pFVar9->Id).A) {
        uVar3 = pFVar9->Count;
        if (uVar3 != 0) {
          uVar4 = pFVar9->Offset;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
          if ((int)uVar3 < 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L"");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          (param_2->Indirections).DataPtr = pFVar7 + uVar4;
          *(undefined8 *)&(param_2->Indirections).ArrayNum = uStack_60;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar10 + -8),
                     &local_58);
          if ((*(int *)(pFVar10 + 8) != 0) &&
             (plVar5 = *(longlong **)pFVar10, plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_58);
        }
        goto LAB_145673607;
      }
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != pFVar1);
    pFVar11 = pFVar11 + 0x30;
    pFVar10 = pFVar10 + 0x30;
  } while( true );
}

// RegisterProvider @ 1456915f0

void __thiscall
FSkinningTransformProvider::RegisterProvider
          (FSkinningTransformProvider *this,FGuid *param_1,
          TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
          *param_2,bool param_3)

{
  TArray<FSkinningTransformProvider::FTransformProvider,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
  *this_00;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res20 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FReadAccessScope local_58;
  FReadAccessScope local_40;
  
  iVar9 = (this->Providers).ArrayNum;
  pTVar1 = &this->Providers;
  pFVar10 = (pTVar1->AllocatorInstance).Data;
  pFVar11 = pFVar10 + (longlong)iVar9 * 0x30;
  while( true ) {
    if ((this->Providers).ArrayNum != iVar9) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FSkinningTransformProvider::FTransformProvider,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar10 == pFVar11) break;
    if ((((*(uint *)(pFVar10 + 0xc) == param_1->D && *(uint *)(pFVar10 + 8) == param_1->C) &&
         *(uint *)(pFVar10 + 4) == param_1->B) && *(uint *)pFVar10 == param_1->A) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProviderCheck.Id != Id",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningTransformProvider.cpp"
                           ,0x19,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar10 = pFVar10 + 0x30;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_58);
  if (((*(int *)&param_2->field_0x10 == 0) || (*(longlong **)&param_2->field_0x8 == (longlong *)0x0)
      ) || (cVar8 = (**(code **)(**(longlong **)&param_2->field_0x8 + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Delegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningTransformProvider.cpp"
                       ,0x1d,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
  }
  iVar9 = (this->Providers).ArrayNum;
  piVar2 = &(this->Providers).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Providers).ArrayNum = iVar9 + 1;
  pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
  this_00 = (TDelegate<void___cdecl(FSkinningTransformProvider::FProviderContext_&),FDefaultDelegateUserPolicy>
             *)(pFVar10 + 0x10);
  *(undefined8 *)(pFVar10 + 0x24) = 0;
  *(undefined4 *)(pFVar10 + 0x2c) = 0;
  pFVar10[0x28] = (FScriptContainerElement)((byte)pFVar10[0x28] & 0xfe);
  *(undefined8 *)pFVar10 = 0;
  *(undefined8 *)(pFVar10 + 8) = 0;
  *(FMRSWRecursiveAccessDetector *)this_00 = (FMRSWRecursiveAccessDetector)0x0;
  *(undefined8 *)(pFVar10 + 0x18) = 0;
  *(undefined4 *)(pFVar10 + 0x20) = 0;
  uVar5 = *(undefined8 *)&param_1->C;
  *(undefined8 *)pFVar10 = *(undefined8 *)param_1;
  *(undefined8 *)(pFVar10 + 8) = uVar5;
  if (param_2 != this_00) {
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_40);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_a0);
    iVar9 = local_a8;
    FVar6.Data = local_b0.Data;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_88);
    if ((*(int *)(pFVar10 + 0x20) != 0) && (*(undefined8 **)(pFVar10 + 0x18) != (undefined8 *)0x0))
    {
      (**(code **)**(undefined8 **)(pFVar10 + 0x18))();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(pFVar10 + 0x18),0,0,0x10);
      *(undefined4 *)(pFVar10 + 0x20) = 0;
    }
    if (*(void **)(pFVar10 + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar10 + 0x18));
    }
    *(FScriptContainerElement **)(pFVar10 + 0x18) = FVar6.Data;
    *(int *)(pFVar10 + 0x20) = iVar9;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_70);
    if ((local_a8 != 0) && (local_b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  }
  pFVar10[0x28] = (FScriptContainerElement)((byte)pFVar10[0x28] & 0xfe | param_3);
  return;
}

// ShouldCreateExtension @ 1456a11d0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FSkinningTransformProvider::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  
  bVar1 = NaniteSkinnedMeshesSupported();
  if (bVar1) {
    if (*(int *)&param_1->field_0x8 == 5) {
      EVar2 = SP_NumPlatforms;
    }
    else {
      EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8];
    }
    bVar1 = DoesRuntimeSupportNanite(EVar2,true,true);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// UnregisterProvider @ 1456a5610

void __thiscall
FSkinningTransformProvider::UnregisterProvider(FSkinningTransformProvider *this,FGuid *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Providers).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Providers).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = (this->Providers).AllocatorInstance.Data + lVar6;
      if (((*(uint *)(pFVar4 + 0xc) == param_1->D && *(uint *)(pFVar4 + 8) == param_1->C) &&
          *(uint *)(pFVar4 + 4) == param_1->B) && param_1->A == *(uint *)pFVar4) {
        uVar3 = 0;
        if ((int)uVar5 < (this->Providers).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TArray<FSkinningTransformProvider::FTransformProvider,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(&this->Providers,uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&(this->Providers).AllocatorInstance,(this->Providers).ArrayNum,
                   &(this->Providers).ArrayMax);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x30;
    } while ((int)uVar5 < (this->Providers).ArrayNum);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningTransformProvider.cpp"
                     ,0x30,L"");
  if (!bVar2) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

