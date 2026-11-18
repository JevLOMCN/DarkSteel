// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ACLPlugin
// Functions: 3

// NotifyActionAborted @ 14deb7180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSetDatabaseVisualFidelityAction::NotifyActionAborted(FSetDatabaseVisualFidelityAction *this)

{
  uint uVar1;
  UAnimationCompressionLibraryDatabase *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((this->bIsDispatched != false) && (this->RequestID != 0xffffffff)) {
    *this->OutResult = Failed;
    pUVar2 = this->DatabaseAsset;
    uVar1 = this->RequestID;
    bVar5 = IsInGameThread();
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                           ,0x31d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uVar1 != 0xffffffff) &&
       (uVar7 = (pUVar2->FidelityChangeRequests).ArrayNum - 1, -1 < (int)uVar7)) {
      lVar8 = (longlong)(int)uVar7 << 4;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (pUVar2->FidelityChangeRequests).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (pUVar2->FidelityChangeRequests).AllocatorInstance.Data;
        if (*(uint *)(pFVar3 + lVar8 + 8) == uVar1) {
          if (pFVar3[lVar8 + 0xd] == (FScriptContainerElement)0x0) {
            TArray<FFidelityChangeRequest,TSizedDefaultAllocator<32>_>::RemoveAt
                      (&pUVar2->FidelityChangeRequests,uVar7,Default);
          }
          else {
            *(undefined8 *)(pFVar3 + lVar8) = 0;
          }
        }
        lVar8 = lVar8 + -0x10;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
  }
  return;
}

// NotifyObjectDestroyed @ 14deb72d0

void __thiscall
FSetDatabaseVisualFidelityAction::NotifyObjectDestroyed(FSetDatabaseVisualFidelityAction *this)

{
  return;
}

// UpdateOperation @ 14deb8720

void __thiscall
FSetDatabaseVisualFidelityAction::UpdateOperation
          (FSetDatabaseVisualFidelityAction *this,FLatentResponse *param_1)

{
  int *piVar1;
  FName *pFVar2;
  ACLVisualFidelityChangeResult AVar3;
  UObject *pUVar4;
  ForElementType<FLatentResponse::FExecutionInfo> FVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FLatentResponse::FExecutionInfo> FVar11;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_58;
  UObject *local_50;
  UObject *local_48;
  FName local_40;
  FNameEntryId FStack_38;
  uint uStack_34;
  int iStack_30;
  
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ACLPlugin\\Source\\ACLPlugin\\Private\\AnimationCompressionLibraryDatabase.cpp"
                         ,0x438,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->DatabaseAsset == (UAnimationCompressionLibraryDatabase *)0x0) {
    *this->OutResult = Failed;
    pUVar4 = (this->LatentInfo).CallbackTarget.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    local_res8[0].ObjectIndex = 0;
    local_res8[0].ObjectSerialNumber = 0;
    local_58 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_58);
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,(this->LatentInfo).ExecutionFunction,(this->LatentInfo).Linkage,
               local_res8[0]);
  }
  else {
    bVar8 = this->bIsDispatched == false;
    if (bVar8) {
      this->bIsDispatched = true;
      *this->OutResult = Dispatched;
      uVar9 = UAnimationCompressionLibraryDatabase::SetVisualFidelityImpl
                        (this->DatabaseAsset,this->VisualFidelity,this->OutResult);
      this->RequestID = uVar9;
    }
    AVar3 = *this->OutResult;
    if (AVar3 == Dispatched) {
      if (bVar8) {
        pUVar4 = (this->LatentInfo).CallbackTarget.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_48 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_48);
        local_40 = (this->LatentInfo).ExecutionFunction;
        FVar5 = (param_1->LinksToExecute).AllocatorInstance.SecondaryData;
        FStack_38.Value = (this->LatentInfo).Linkage;
        uStack_34 = local_res20.ObjectIndex;
        iStack_30 = local_res20.ObjectSerialNumber;
        FVar11 = (ForElementType<FLatentResponse::FExecutionInfo>)param_1;
        if (FVar5 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
          FVar11 = FVar5;
        }
        if ((ulonglong)FVar11 <= &local_40) {
          FVar11 = (ForElementType<FLatentResponse::FExecutionInfo>)param_1;
          if (FVar5 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
            FVar11 = FVar5;
          }
          if ((&local_40 <
               (FName *)((longlong)FVar11 + (longlong)(param_1->LinksToExecute).ArrayMax * 0x14)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar10 = (param_1->LinksToExecute).ArrayNum;
        piVar1 = &(param_1->LinksToExecute).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLatentResponse::FExecutionInfo>_>
                             (0x414,(ForElementType<FLatentResponse::FExecutionInfo> *)param_1,
                              piVar1);
        }
        FVar7.Number = uStack_34;
        FVar7.ComparisonIndex.Value = FStack_38.Value;
        (param_1->LinksToExecute).ArrayNum = iVar10 + 1;
        FVar5 = (param_1->LinksToExecute).AllocatorInstance.SecondaryData;
        if (FVar5 != (ForElementType<FLatentResponse::FExecutionInfo>)0x0) {
          param_1 = (FLatentResponse *)FVar5;
        }
        pFVar2 = (FName *)((longlong)param_1 + (longlong)iVar10 * 0x14);
        *pFVar2 = local_40;
        pFVar2[1] = FVar7;
        *(int *)((uchar *)((longlong)param_1 + 0x10) + (longlong)iVar10 * 0x14) = iStack_30;
      }
    }
    else {
      pUVar4 = (this->LatentInfo).CallbackTarget.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_50 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_50);
      FLatentResponse::FinishAndTriggerIf
                (param_1,AVar3 != Dispatched,(this->LatentInfo).ExecutionFunction,
                 (this->LatentInfo).Linkage,local_res18);
    }
  }
  return;
}

