// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// AddNewPatch @ 1444f60f0

/* WARNING: Removing unreachable block (ram,0x0001444f62cf) */
/* WARNING: Removing unreachable block (ram,0x0001444f62e0) */
/* WARNING: Removing unreachable block (ram,0x0001444f62e7) */
/* WARNING: Removing unreachable block (ram,0x0001444f630c) */
/* WARNING: Removing unreachable block (ram,0x0001444f630d) */
/* WARNING: Removing unreachable block (ram,0x0001444f631c) */
/* WARNING: Removing unreachable block (ram,0x0001444f6322) */
/* WARNING: Removing unreachable block (ram,0x0001444f6331) */
/* WARNING: Removing unreachable block (ram,0x0001444f6342) */
/* WARNING: Removing unreachable block (ram,0x0001444f6354) */
/* WARNING: Removing unreachable block (ram,0x0001444f635f) */

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
Audio::FPatchSplitter::AddNewPatch
          (FPatchSplitter *this,TSharedPtr<Audio::FPatchOutput,1> *__return_storage_ptr__,
          int param_1,float param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  FPatchOutput *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined4 local_38;
  
  pTVar6 = ::operator_new(0x60);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPatchOutput *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFPatchOutput_Audio___00_SharedPointerInternals__6B_;
    FPatchOutput::FPatchOutput((FPatchOutput *)(pTVar6 + 1),param_1 * 2,param_2);
    if (((FPatchOutput *)(pTVar6 + 1) == (FPatchOutput *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar3)();
      return pTVar7;
    }
    __return_storage_ptr__->Object = (FPatchOutput *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  lpCriticalSection = &this->PendingOutputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_48 = __return_storage_ptr__->Object;
  local_40 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = 0;
  if (local_48 != (FPatchOutput *)0x0) {
    LOCK();
    local_48->NumAliveInputs = (atomic<int>)((int)local_48->NumAliveInputs + 1);
    UNLOCK();
  }
  pFVar2 = (this->PendingOutputs).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar2 + (longlong)(this->PendingOutputs).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSharedPtr<Audio::FPatchOutput,1> *)(*pcVar3)();
    return pTVar7;
  }
  iVar5 = (this->PendingOutputs).ArrayNum;
  piVar1 = &(this->PendingOutputs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  lVar8 = (longlong)iVar5;
  (this->PendingOutputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->PendingOutputs).AllocatorInstance.Data;
  *(FPatchOutput **)(pFVar2 + lVar8 * 0x18) = local_48;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar8 * 0x18 + 8) = local_40;
  *(undefined4 *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_38;
  local_38 = 0;
  local_40 = (TReferenceControllerBase<1> *)0x0;
  local_48 = (FPatchOutput *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// AddNewPatch @ 1444f63b0

/* WARNING: Removing unreachable block (ram,0x0001444f64e0) */
/* WARNING: Removing unreachable block (ram,0x0001444f64f1) */
/* WARNING: Removing unreachable block (ram,0x0001444f64f8) */
/* WARNING: Removing unreachable block (ram,0x0001444f651d) */
/* WARNING: Removing unreachable block (ram,0x0001444f651e) */
/* WARNING: Removing unreachable block (ram,0x0001444f652d) */
/* WARNING: Removing unreachable block (ram,0x0001444f6533) */
/* WARNING: Removing unreachable block (ram,0x0001444f6542) */
/* WARNING: Removing unreachable block (ram,0x0001444f6553) */
/* WARNING: Removing unreachable block (ram,0x0001444f6565) */
/* WARNING: Removing unreachable block (ram,0x0001444f6570) */

void __thiscall
Audio::FPatchSplitter::AddNewPatch(FPatchSplitter *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPatchOutput *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined4 local_18;
  
  lpCriticalSection = &this->PendingOutputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = 0;
  if (local_28 != (FPatchOutput *)0x0) {
    LOCK();
    local_28->NumAliveInputs = (atomic<int>)((int)local_28->NumAliveInputs + 1);
    UNLOCK();
  }
  pFVar2 = (this->PendingOutputs).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar2 + (longlong)(this->PendingOutputs).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->PendingOutputs).ArrayNum;
  piVar1 = &(this->PendingOutputs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->PendingOutputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->PendingOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(FPatchOutput **)pFVar2 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_20;
  *(undefined4 *)(pFVar2 + 0x10) = local_18;
  local_18 = 0;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FPatchOutput *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001444f659d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddNewPatch @ 1444f65b0

/* WARNING: Removing unreachable block (ram,0x0001444f66e0) */
/* WARNING: Removing unreachable block (ram,0x0001444f66f1) */
/* WARNING: Removing unreachable block (ram,0x0001444f66f8) */
/* WARNING: Removing unreachable block (ram,0x0001444f671d) */
/* WARNING: Removing unreachable block (ram,0x0001444f671e) */
/* WARNING: Removing unreachable block (ram,0x0001444f672d) */
/* WARNING: Removing unreachable block (ram,0x0001444f6733) */
/* WARNING: Removing unreachable block (ram,0x0001444f6742) */
/* WARNING: Removing unreachable block (ram,0x0001444f6753) */
/* WARNING: Removing unreachable block (ram,0x0001444f6765) */
/* WARNING: Removing unreachable block (ram,0x0001444f6770) */

void __thiscall
Audio::FPatchSplitter::AddNewPatch(FPatchSplitter *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPatchOutput *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined4 local_18;
  
  lpCriticalSection = &this->PendingOutputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_28 = param_1->Object;
  local_20 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = 0;
  if (local_28 != (FPatchOutput *)0x0) {
    LOCK();
    local_28->NumAliveInputs = (atomic<int>)((int)local_28->NumAliveInputs + 1);
    UNLOCK();
  }
  pFVar2 = (this->PendingOutputs).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar2 + (longlong)(this->PendingOutputs).ArrayMax * 0x18)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->PendingOutputs).ArrayNum;
  piVar1 = &(this->PendingOutputs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->PendingOutputs).ArrayNum = iVar5 + 1;
  pFVar2 = (this->PendingOutputs).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(FPatchOutput **)pFVar2 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar2 + 8) = local_20;
  *(undefined4 *)(pFVar2 + 0x10) = local_18;
  local_18 = 0;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FPatchOutput *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001444f679d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddPendingPatches @ 1444f6910

void __thiscall Audio::FPatchSplitter::AddPendingPatches(FPatchSplitter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<Audio::FPatchInput,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  lpCriticalSection = &this->PendingOutputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->ConnectedOutputs;
  if ((FPatchSplitter *)pTVar1 == this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->PendingOutputs).ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar2,&pTVar1->AllocatorInstance,&(this->ConnectedOutputs).ArrayNum,
                       &(this->ConnectedOutputs).ArrayMax);
    memmove((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x18,
            (this->PendingOutputs).AllocatorInstance.Data,(longlong)iVar2 * 0x18);
    (this->PendingOutputs).ArrayNum = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001444f69dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// MaxNumberOfSamplesThatCanBePushed @ 144509b40

int __thiscall Audio::FPatchSplitter::MaxNumberOfSamplesThatCanBePushed(FPatchSplitter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->ConnectedOutputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  AddPendingPatches(this);
  iVar6 = (this->ConnectedOutputs).ArrayNum;
  if (iVar6 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    pFVar10 = (this->ConnectedOutputs).AllocatorInstance.Data;
    uVar9 = 0xffffffff;
    pFVar1 = pFVar10 + (longlong)iVar6 * 0x18;
    while( true ) {
      if ((this->ConnectedOutputs).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Audio::FPatchInput,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      if ((*(longlong *)pFVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      lVar2 = *(longlong *)pFVar10;
      iVar7 = *(int *)(lVar2 + 0x1c);
      if (*(int *)(lVar2 + 0x20) < iVar7) {
        iVar7 = *(int *)(lVar2 + 0x18) - iVar7;
      }
      else {
        iVar7 = -iVar7;
      }
      uVar8 = *(int *)(lVar2 + 0x18) + ~(*(int *)(lVar2 + 0x20) + iVar7);
      uVar4 = uVar9;
      if (((uVar8 != 0) ||
          ((*(longlong *)pFVar10 != 0 &&
           ((*(longlong *)(pFVar10 + 8) == 0 || (*(int *)(*(longlong *)(pFVar10 + 8) + 8) != 1))))))
         && (uVar4 = uVar8, uVar9 < uVar8)) {
        uVar4 = uVar9;
      }
      uVar9 = uVar4;
      pFVar10 = pFVar10 + 0x18;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar9;
}

// Num @ 14450b2b0

int __thiscall Audio::FPatchSplitter::Num(FPatchSplitter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = &this->ConnectedOutputsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    AddPendingPatches(this);
    iVar1 = (this->ConnectedOutputs).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PushAudio @ 1445142b0

int __thiscall Audio::FPatchSplitter::PushAudio(FPatchSplitter *this,float *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  lpCriticalSection = &this->ConnectedOutputsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  AddPendingPatches(this);
  iVar4 = (this->ConnectedOutputs).ArrayNum;
  if (iVar4 == 0) {
    iVar4 = -1;
  }
  else {
    uVar6 = iVar4 - 1;
    iVar4 = 0x7fffffff;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 * 0x18;
      do {
        uVar3 = 0;
        if ((int)uVar6 < (this->ConnectedOutputs).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        iVar5 = FPatchInput::PushAudio
                          ((FPatchInput *)((this->ConnectedOutputs).AllocatorInstance.Data + lVar7),
                           param_1,param_2);
        if (iVar5 == -1) {
          uVar3 = 0;
          if ((int)uVar6 < (this->ConnectedOutputs).ArrayNum) {
            uVar3 = ~uVar6 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          TArray<Audio::FPatchInput,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&this->ConnectedOutputs,uVar6);
          iVar5 = iVar4;
        }
        else if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        iVar4 = iVar5;
        lVar7 = lVar7 + -0x18;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return iVar4;
}

