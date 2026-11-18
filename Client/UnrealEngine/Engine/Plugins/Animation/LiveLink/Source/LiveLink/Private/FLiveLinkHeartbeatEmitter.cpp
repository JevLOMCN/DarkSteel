// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 6

// FLiveLinkHeartbeatEmitter @ 14d011500

FLiveLinkHeartbeatEmitter * __thiscall
FLiveLinkHeartbeatEmitter::FLiveLinkHeartbeatEmitter(FLiveLinkHeartbeatEmitter *this)

{
  double dVar1;
  UObject *pUVar2;
  UClass *this_00;
  
  this->_padding_ = (longlong)&___7FLiveLinkHeartbeatEmitter__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->HeartbeatRecipients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeartbeatRecipients).ArrayNum = 0;
  (this->HeartbeatRecipients).ArrayMax = 0;
  this->bIsRunning = (FThreadSafeBool)0x0;
  this_00 = ULiveLinkSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  (this->Thread).Ptr = (FRunnableThread *)0x0;
  dVar1 = *(double *)&pUVar2[3].field_0x20;
  this->HeartbeatEvent = (FEvent *)0x0;
  this->HeartbeatFrequencyInMs = (float)dVar1 * __real_447a0000;
  return this;
}

// ~FLiveLinkHeartbeatEmitter @ 14d015fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkHeartbeatEmitter::~FLiveLinkHeartbeatEmitter(FLiveLinkHeartbeatEmitter *this)

{
  FRunnableThread *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FLiveLinkHeartbeatEmitter__6B_;
  pFVar1 = (this->Thread).Ptr;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  DestructItems<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,int>
            ((FHeartbeatRecipient *)(this->HeartbeatRecipients).AllocatorInstance.Data,
             (this->HeartbeatRecipients).ArrayNum);
  pFVar2 = (this->HeartbeatRecipients).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Exit @ 14d03f830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkHeartbeatEmitter::Exit(FLiveLinkHeartbeatEmitter *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (this->bIsRunning != (FThreadSafeBool)0x0) {
    LOCK();
    this->bIsRunning = (FThreadSafeBool)0x0;
    UNLOCK();
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,int>
              ((FHeartbeatRecipient *)(this->HeartbeatRecipients).AllocatorInstance.Data,
               (this->HeartbeatRecipients).ArrayNum);
    (this->HeartbeatRecipients).ArrayNum = 0;
    if ((this->HeartbeatRecipients).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->HeartbeatRecipients).AllocatorInstance,0,
                 &(this->HeartbeatRecipients).ArrayMax);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->HeartbeatEvent != (FEvent *)0x0) {
      (**(code **)(this->HeartbeatEvent->_padding_ + 0x10))();
    }
    (**(code **)(((this->Thread).Ptr)->_padding_ + 0x20))();
    if (this->HeartbeatEvent != (FEvent *)0x0) {
      FGenericPlatformProcess::ReturnSynchEventToPool(this->HeartbeatEvent);
      this->HeartbeatEvent = (FEvent *)0x0;
    }
  }
  return;
}

// Run @ 14d07aa40

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FLiveLinkHeartbeatEmitter::Run(FLiveLinkHeartbeatEmitter *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FMessageEndpoint *this_00;
  code *pcVar2;
  undefined8 uVar3;
  atomic<int> aVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType _Src;
  bool bVar6;
  uint uVar7;
  atomic<int> aVar8;
  int iVar9;
  void *pvVar10;
  UScriptStruct *pUVar11;
  ulonglong uVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  FDateTime local_98;
  FTimespan local_90;
  FScriptContainerElement *local_88;
  LPCRITICAL_SECTION local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<IMessageAttachment,1> local_58;
  
  if (this->bIsRunning != (FThreadSafeBool)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
    local_80 = lpCriticalSection;
    do {
      if ((this->HeartbeatEvent == (FEvent *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("HeartbeatEvent",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkHeartbeatEmitter.cpp"
                             ,0x34,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      (**(code **)(this->HeartbeatEvent->_padding_ + 0x20))
                (this->HeartbeatEvent,(longlong)this->HeartbeatFrequencyInMs,0);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if (this->bIsRunning != (FThreadSafeBool)0x0) {
        local_res18 = (this->HeartbeatRecipients).ArrayNum;
        uVar12 = (ulonglong)(int)local_res18;
        pFVar15 = (this->HeartbeatRecipients).AllocatorInstance.Data;
        local_88 = pFVar15 + uVar12 * 0x20;
        local_res20 = pFVar15 + 0x10;
        while( true ) {
          pFVar5 = local_88;
          if ((this->HeartbeatRecipients).ArrayNum != (int)uVar12) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          lpCriticalSection = local_80;
          if (pFVar15 == pFVar5) break;
          pTVar1 = *(TReferenceControllerBase<1> **)(local_res20 + -8);
          pTVar13 = pTVar1;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            aVar4 = pTVar1->SharedReferenceCount;
            do {
              pTVar13 = (TReferenceControllerBase<1> *)0x0;
              if (aVar4 == (atomic<int>)0x0) goto LAB_14d07ac83;
              LOCK();
              aVar8 = pTVar1->SharedReferenceCount;
              bVar6 = aVar4 == aVar8;
              if (bVar6) {
                pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar8 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar8;
            } while (!bVar6);
            this_00 = *(FMessageEndpoint **)pFVar15;
            pTVar13 = pTVar1;
            if (this_00 != (FMessageEndpoint *)0x0) {
              pvVar10 = FMemory::Malloc(1,0);
              local_98.Ticks = 0x2bca2875f4373fff;
              local_90.Ticks = 0;
              local_78.Data = (FScriptContainerElement *)0x0;
              local_70 = 0;
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&local_78,(int *)((longlong)&local_70 + 4));
              _Src.Data = local_78.Data;
              local_68.ArrayNum = iVar9 + 1;
              uVar3 = *(undefined8 *)(local_res20 + 8);
              local_70 = CONCAT44(local_70._4_4_,local_68.ArrayNum);
              *(undefined8 *)(local_78.Data + (longlong)iVar9 * 0x10) = *(undefined8 *)local_res20;
              *(undefined8 *)(local_78.Data + (longlong)iVar9 * 0x10 + 8) = uVar3;
              local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              lVar14 = (longlong)local_68.ArrayNum;
              if (local_68.ArrayNum == 0) {
                local_68.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                           &local_68.ArrayMax);
                memcpy(local_68.AllocatorInstance.Data,_Src.Data,lVar14 << 4);
              }
              local_58.Object = (IMessageAttachment *)0x0;
              local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
              pUVar11 = FLiveLinkHeartbeatMessage::StaticStruct();
              FMessageEndpoint::Send
                        (this_00,pvVar10,pUVar11,None,&local_58,&local_68,&local_90,&local_98);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_58.SharedReferenceCount.ReferenceController);
              if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.AllocatorInstance.Data);
              }
              if (local_78.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data);
              }
            }
          }
LAB_14d07ac83:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          pFVar15 = pFVar15 + 0x20;
          local_res20 = local_res20 + 0x20;
          uVar12 = (ulonglong)local_res18;
        }
      }
      LeaveCriticalSection(lpCriticalSection);
    } while (this->bIsRunning != (FThreadSafeBool)0x0);
  }
  return 0;
}

// StartHeartbeat @ 14d0800a0

/* WARNING: Removing unreachable block (ram,0x00014d080252) */
/* WARNING: Removing unreachable block (ram,0x00014d08025c) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkHeartbeatEmitter::StartHeartbeat
          (FLiveLinkHeartbeatEmitter *this,FMessageAddress *param_1,
          TSharedPtr<FMessageEndpoint,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FRunnableThread *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FEvent *pFVar6;
  FRunnableThread *pFVar7;
  FScriptContainerElement *pFVar8;
  FMessageEndpoint *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (this->bIsRunning == (FThreadSafeBool)0x0) {
    LOCK();
    this->bIsRunning = (FThreadSafeBool)0x1;
    UNLOCK();
    pFVar6 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    this->HeartbeatEvent = pFVar6;
    if ((pFVar6 == (FEvent *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeartbeatEvent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkHeartbeatEmitter.cpp"
                           ,0x22,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FRunnableThread::Create
                       ((FRunnable *)this,L"LiveLinkHeartbeatEmitter",0,TPri_Normal,
                        0xffffffffffffffff,None);
    pFVar2 = (this->Thread).Ptr;
    if ((pFVar2 != pFVar7) && ((this->Thread).Ptr = pFVar7, pFVar2 != (FRunnableThread *)0x0)) {
      (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_28 = param_2->Object;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18._0_4_ = (param_1->UniqueId).A;
  local_18._4_4_ = (param_1->UniqueId).B;
  uStack_10._0_4_ = (param_1->UniqueId).C;
  uStack_10._4_4_ = (param_1->UniqueId).D;
  pFVar8 = (this->HeartbeatRecipients).AllocatorInstance.Data;
  if (((pFVar8 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar8 + (longlong)(this->HeartbeatRecipients).ArrayMax * 0x20)) &&
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
  iVar5 = (this->HeartbeatRecipients).ArrayNum;
  piVar1 = &(this->HeartbeatRecipients).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->HeartbeatRecipients).AllocatorInstance,piVar1);
  }
  (this->HeartbeatRecipients).ArrayNum = iVar5 + 1;
  pFVar8 = (this->HeartbeatRecipients).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(FMessageEndpoint **)pFVar8 = local_28;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
  *(undefined4 *)(pFVar8 + 0x10) = (undefined4)local_18;
  *(undefined4 *)(pFVar8 + 0x14) = local_18._4_4_;
  *(undefined4 *)(pFVar8 + 0x18) = (undefined4)uStack_10;
  *(undefined4 *)(pFVar8 + 0x1c) = uStack_10._4_4_;
  local_20 = (TReferenceControllerBase<1> *)0x0;
  local_28 = (FMessageEndpoint *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014d080281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// StopHeartbeat @ 14d080960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkHeartbeatEmitter::StopHeartbeat
          (FLiveLinkHeartbeatEmitter *this,FMessageAddress *param_1,
          TSharedPtr<FMessageEndpoint,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FMessageEndpoint **local_res8;
  FMessageEndpoint *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_28 = param_2->Object;
  local_20 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18._0_4_ = (param_1->UniqueId).A;
  local_18._4_4_ = (param_1->UniqueId).B;
  uStack_10._0_4_ = (param_1->UniqueId).C;
  uStack_10._4_4_ = (param_1->UniqueId).D;
  pFVar3 = (this->HeartbeatRecipients).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(this->HeartbeatRecipients).ArrayMax * 0x20)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_res8 = &local_28;
  TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&this->HeartbeatRecipients,(<lambda_1> *)&local_res8);
  if (local_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_20->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_20->_padding_ + 8))(local_20,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d080a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

