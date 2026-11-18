// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// Broadcast<IBaseDelegateInstance<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>,TSharedRef<UE::Online::IOnlineServices,1>_> @ 14ec1d5b0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>,TSharedRef<UE::Online::IOnlineServices,1>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TSharedRef<UE::Online::IOnlineServices,1> *param_1)

{
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar10;
  ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> FVar11;
  uint uVar12;
  longlong lVar13;
  FDestructionSentinel *local_48;
  IOnlineServices *local_40;
  TReferenceControllerBase<1> *local_38;
  FDestructionSentinel local_30;
  
  local_30.AccessType = Writer;
  local_30.bDestroyed = false;
  local_30.Accessor = (FMRSWRecursiveAccessDetector *)this;
  FVar10 = (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)
           FMRSWRecursiveAccessDetector::GetDestructionSentinelStackTls();
  local_48 = &local_30;
  FVar1 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
           ((longlong)FVar10 + 0x20);
  FVar11 = FVar10;
  if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar11 = FVar1;
  }
  if ((ulonglong)FVar11 <= &local_48) {
    FVar11 = FVar10;
    if (FVar1 != (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
      FVar11 = FVar1;
    }
    if ((&local_48 <
         (FDestructionSentinel **)
         ((longlong)FVar11 + (longlong)*(int *)((longlong)FVar10 + 0x2c) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = *(int *)((longlong)FVar10 + 0x28);
  if (iVar8 == *(int *)((longlong)FVar10 + 0x2c)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>_>
                      (0x808,(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *
                             )FVar10,(int *)((longlong)FVar10 + 0x2c));
  }
  *(int *)((longlong)FVar10 + 0x28) = iVar8 + 1;
  if (*(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
       ((longlong)FVar10 + 0x20) !=
      (ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*>)0x0) {
    FVar10 = *(ForElementType<FMRSWRecursiveAccessDetector::FDestructionSentinel_*> *)
              ((longlong)FVar10 + 0x20);
  }
  *(FDestructionSentinel **)((longlong)FVar10 + (longlong)iVar8 * 8) = local_48;
  FMRSWRecursiveAccessDetector::AcquireWriteAccess((FMRSWRecursiveAccessDetector *)this);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar5 = false;
  uVar12 = (this->InvocationList).ArrayNum - 1;
  if ((int)uVar12 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar13 = (longlong)(int)uVar12 << 4;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->InvocationList).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + lVar13 + 8) == 0) ||
         (plVar3 = *(longlong **)(pFVar2 + lVar13), plVar3 == (longlong *)0x0)) {
LAB_14ec1d76a:
        bVar5 = true;
      }
      else {
        pcVar4 = *(code **)(*plVar3 + 0x68);
        local_40 = param_1->Object;
        local_38 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_38 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_38->SharedReferenceCount = (atomic<int>)((int)local_38->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar7 = (*pcVar4)();
        if (cVar7 == '\0') goto LAB_14ec1d76a;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar5) {
      CompactInvocationList(this,false);
    }
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

