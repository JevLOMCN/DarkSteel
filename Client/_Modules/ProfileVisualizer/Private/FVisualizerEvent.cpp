// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 5

// FVisualizerEvent @ 148d56d10

FVisualizerEvent * __thiscall
FVisualizerEvent::FVisualizerEvent(FVisualizerEvent *this,FVisualizerEvent *param_1)

{
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FVisualizerEvent,1> *pTVar5;
  
  this->Start = param_1->Start;
  this->Duration = param_1->Duration;
  this->DurationMs = param_1->DurationMs;
  this->Category = param_1->Category;
  ::FString::FString(&this->EventName,&param_1->EventName);
  this->IsSelected = param_1->IsSelected;
  this->ColorIndex = param_1->ColorIndex;
  (this->ParentEvent).Object = (param_1->ParentEvent).Object;
  pTVar4 = (param_1->ParentEvent).SharedReferenceCount.ReferenceController;
  (this->ParentEvent).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->Children;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Children).ArrayMax;
  iVar3 = (param_1->Children).ArrayNum;
  pTVar5 = (TSharedPtr<FVisualizerEvent,1> *)(param_1->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int>
              ((pTVar1->AllocatorInstance).Data,pTVar5,iVar3);
  }
  return this;
}

// FVisualizerEvent @ 148d56df0

FVisualizerEvent * __thiscall
FVisualizerEvent::FVisualizerEvent
          (FVisualizerEvent *this,double param_1,double param_2,double param_3,int param_4,
          FString *param_5)

{
  int iVar1;
  uint uVar2;
  wchar_t *pwVar3;
  int iVar4;
  
  this->Category = param_4;
  this->Start = param_1;
  this->Duration = param_2;
  this->DurationMs = param_3;
  ::FString::FString(&this->EventName,param_5);
  this->IsSelected = false;
  iVar4 = 0;
  this->ColorIndex = 0;
  (this->ParentEvent).Object = (FVisualizerEvent *)0x0;
  (this->ParentEvent).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  iVar1 = (param_5->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
    iVar4 = iVar1 + -1;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar3);
  this->ColorIndex = uVar2;
  return this;
}

// LoadVisualizerEvent @ 148d802c0

TSharedPtr<FVisualizerEvent,1> * __cdecl
FVisualizerEvent::LoadVisualizerEvent
          (TSharedPtr<FVisualizerEvent,1> *__return_storage_ptr__,FArchive *param_1)

{
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  local_18.Object = (FVisualizerEvent *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  LoadVisualizerEventRecursively(__return_storage_ptr__,param_1,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// LoadVisualizerEventRecursively @ 148d80300

TSharedPtr<FVisualizerEvent,1> * __cdecl
FVisualizerEvent::LoadVisualizerEventRecursively
          (TSharedPtr<FVisualizerEvent,1> *__return_storage_ptr__,FArchive *param_1,
          TSharedPtr<FVisualizerEvent,1> *param_2)

{
  FString *pFVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FVisualizerEvent *pFVar12;
  FVisualizerEvent *pFVar13;
  TSharedPtr<FVisualizerEvent,1> *pTVar14;
  FVisualizerEvent *pFVar15;
  FVisualizerEvent *pFVar16;
  longlong lVar17;
  atomic<int> local_res8 [2];
  uint local_res10 [2];
  TSharedPtr<FVisualizerEvent,1> *local_res18;
  uint local_res20 [2];
  double local_a8;
  double local_a0;
  double local_98;
  FString local_90;
  TSharedPtr<FVisualizerEvent,1> local_80;
  TSharedPtr<FVisualizerEvent,1> local_70;
  FVisualizerEvent *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  pFVar15 = (FVisualizerEvent *)0x0;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  plVar3 = *(longlong **)&param_1->field_0x8;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_res18 = param_2;
  if ((double *)plVar3[1] < (double *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_98,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_98);
    }
  }
  else {
    local_98 = *(double *)*plVar3;
    *plVar3 = *plVar3 + 8;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((double *)plVar3[1] < (double *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a0,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_a0);
    }
  }
  else {
    local_a0 = *(double *)*plVar3;
    *plVar3 = *plVar3 + 8;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((double *)plVar3[1] < (double *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&local_a8);
    }
  }
  else {
    local_a8 = *(double *)*plVar3;
    *plVar3 = *plVar3 + 8;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((atomic<int> *)plVar3[1] < (atomic<int> *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *(atomic<int> *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  ::operator<<(param_1,&local_90);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  if (puVar4[1] < *puVar4 + 4) {
    local_res20[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    if (1 < local_res20[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar4 = *puVar4 + 4;
  }
  pFVar12 = ::operator_new(0x58);
  FVar8.Data = local_90.Data.AllocatorInstance.Data;
  pFVar16 = pFVar15;
  if (pFVar12 != (FVisualizerEvent *)0x0) {
    pFVar1 = &pFVar12->EventName;
    pFVar12->Category = (int)local_res8[0];
    piVar2 = &(pFVar12->EventName).Data.ArrayMax;
    pFVar12->Start = local_98;
    pFVar12->Duration = local_a0;
    pFVar12->DurationMs = local_a8;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar17 = (longlong)local_90.Data.ArrayNum;
    (pFVar12->EventName).Data.ArrayNum = local_90.Data.ArrayNum;
    if (local_90.Data.ArrayNum == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_90.Data.ArrayNum,
                 piVar2);
      memcpy((pFVar1->Data).AllocatorInstance.Data,FVar8.Data,lVar17 * 2);
    }
    pFVar12->ColorIndex = 0;
    (pFVar12->ParentEvent).Object = (FVisualizerEvent *)0x0;
    (pFVar12->ParentEvent).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (pFVar12->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar12->Children).ArrayNum = 0;
    (pFVar12->Children).ArrayMax = 0;
    pFVar12->IsSelected = false;
    iVar11 = local_90.Data.ArrayNum + -1;
    FVar8.Data = local_90.Data.AllocatorInstance.Data;
    if (local_90.Data.ArrayNum == 0) {
      iVar11 = 0;
      FVar8.Data = (FScriptContainerElement *)L"";
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)FVar8.Data);
    pFVar12->ColorIndex = uVar10;
    pFVar16 = pFVar12;
    param_2 = local_res18;
  }
  __return_storage_ptr__->Object = pFVar16;
  pFVar13 = ::operator_new(0x18);
  pFVar12 = pFVar15;
  if (pFVar13 != (FVisualizerEvent *)0x0) {
    *(undefined4 *)&pFVar13->Duration = 1;
    pFVar13->Start =
         (double)&
                 ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar13->Duration + 4) = 1;
    pFVar13->DurationMs = (double)pFVar16;
    pFVar12 = pFVar13;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar12;
  if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar7)();
    return pTVar14;
  }
  pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar16 = __return_storage_ptr__->Object;
  pFVar12 = param_2->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = (pFVar16->ParentEvent).Object;
  pTStack_58 = (pFVar16->ParentEvent).SharedReferenceCount.ReferenceController;
  (pFVar16->ParentEvent).Object = pFVar12;
  (pFVar16->ParentEvent).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res10,0xffffffff);
  if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar14 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar7)();
    return pTVar14;
  }
  pFVar16 = __return_storage_ptr__->Object;
  if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
  }
  if ((pFVar16->Children).ArrayMax < (int)local_res10[0]) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_res10[0],&(pFVar16->Children).AllocatorInstance,
               (pFVar16->Children).ArrayNum,&(pFVar16->Children).ArrayMax);
  }
  if (local_res10[0] != 0) {
    do {
      local_70.Object = __return_storage_ptr__->Object;
      local_70.SharedReferenceCount.ReferenceController =
           (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      LoadVisualizerEventRecursively(&local_80,param_1,&local_70);
      if ((__return_storage_ptr__->Object == (FVisualizerEvent *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar7)();
        return pTVar14;
      }
      pFVar16 = __return_storage_ptr__->Object;
      pTVar14 = (TSharedPtr<FVisualizerEvent,1> *)(pFVar16->Children).AllocatorInstance.Data;
      if (((pTVar14 <= &local_80) && (&local_80 < pTVar14 + (pFVar16->Children).ArrayMax)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar14 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar7)();
        return pTVar14;
      }
      iVar11 = (pFVar16->Children).ArrayNum;
      piVar2 = &(pFVar16->Children).ArrayMax;
      if (iVar11 == *piVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar16->Children).AllocatorInstance,piVar2);
      }
      (pFVar16->Children).ArrayNum = iVar11 + 1;
      pFVar6 = (pFVar16->Children).AllocatorInstance.Data;
      *(FVisualizerEvent **)(pFVar6 + (longlong)iVar11 * 0x10) = local_80.Object;
      *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar11 * 0x10 + 8) =
           local_80.SharedReferenceCount.ReferenceController;
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
      uVar10 = (int)pFVar15 + 1;
      pFVar15 = (FVisualizerEvent *)(ulonglong)uVar10;
    } while (uVar10 < local_res10[0]);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// SaveVisualizerEventRecursively @ 148d8f840

void __cdecl
FVisualizerEvent::SaveVisualizerEventRecursively
          (FArchive *param_1,TSharedPtr<FVisualizerEvent,1> *param_2)

{
  undefined1 *puVar1;
  FVisualizerEvent *pFVar2;
  double *pdVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  double *pdVar10;
  int *piVar11;
  uint uVar12;
  uint local_res8 [2];
  TSharedPtr<FVisualizerEvent,1> local_28;
  
  if ((param_2->Object == (FVisualizerEvent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar2 = param_2->Object;
  pdVar3 = (double *)**(undefined8 **)&param_1->field_0x8;
  if ((double *)(*(undefined8 **)&param_1->field_0x8)[1] < pdVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar2);
    }
  }
  else {
    pFVar2->Start = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  puVar1 = &param_1->field_0x2a;
  if ((param_2->Object == (FVisualizerEvent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pdVar10 = &param_2->Object->Duration;
  pdVar3 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar10);
    }
  }
  else {
    *pdVar10 = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if ((param_2->Object == (FVisualizerEvent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pdVar10 = &param_2->Object->DurationMs;
  pdVar3 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar10);
    }
  }
  else {
    *pdVar10 = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  if ((param_2->Object == (FVisualizerEvent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  piVar11 = &param_2->Object->Category;
  piVar4 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar4 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar11,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar11);
    }
  }
  else {
    *piVar11 = *piVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_2->Object == (FVisualizerEvent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::operator<<(param_1,&param_2->Object->EventName);
  if ((param_2->Object == (FVisualizerEvent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ::operator<<(param_1,&param_2->Object->IsSelected);
  if ((param_2->Object == (FVisualizerEvent *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_res8[0] = (param_2->Object->Children).ArrayNum;
  (**(code **)(*(longlong *)param_1 + 0x198))(param_1,local_res8,0xffffffff);
  uVar12 = 0;
  if (local_res8[0] != 0) {
    do {
      if ((param_2->Object == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = param_2->Object;
      uVar9 = 0;
      if ((int)uVar12 < (pFVar2->Children).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar2->Children).AllocatorInstance.Data;
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)(int)uVar12 * 0x10 + 8);
      pFVar2 = *(FVisualizerEvent **)(pFVar5 + (longlong)(int)uVar12 * 0x10);
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = pFVar2;
      local_28.SharedReferenceCount.ReferenceController = pTVar6;
      SaveVisualizerEventRecursively(param_1,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      uVar12 = uVar12 + 1;
    } while (uVar12 < local_res8[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

