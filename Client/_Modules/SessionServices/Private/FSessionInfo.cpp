// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 14

// FSessionInfo @ 148cec3f0

FSessionInfo * __thiscall
FSessionInfo::FSessionInfo(FSessionInfo *this,FGuid *param_1,TSharedRef<IMessageBus,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSessionInfo__6B_;
  *(undefined8 *)&this->Instances = 0;
  *(undefined8 *)&(this->Instances).field_0x8 = 0;
  *(undefined8 *)&(this->Instances).field_0x20 = 0;
  *(undefined4 *)&(this->Instances).field_0x28 = 0;
  *(undefined4 *)&(this->Instances).field_0x2c = 0x80;
  *(undefined4 *)&(this->Instances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Instances).field_0x34 = 0;
  *(undefined8 *)&(this->Instances).field_0x40 = 0;
  *(undefined4 *)&(this->Instances).field_0x48 = 0;
  (this->LastUpdateTime).Ticks = 0;
  (this->MessageBusPtr).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->MessageBusPtr).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = param_1->B;
  uVar3 = param_1->C;
  uVar4 = param_1->D;
  (this->SessionId).A = param_1->A;
  (this->SessionId).B = uVar2;
  (this->SessionId).C = uVar3;
  (this->SessionId).D = uVar4;
  (this->SessionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionName).Data.ArrayNum = 0;
  (this->SessionName).Data.ArrayMax = 0;
  (this->SessionOwner).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionOwner).Data.ArrayNum = 0;
  (this->SessionOwner).Data.ArrayMax = 0;
  *(undefined8 *)&this->InstanceDiscoveredEvent = 0;
  *(undefined8 *)&(this->InstanceDiscoveredEvent).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceDiscoveredEvent).field_0x10 = 0;
  *(undefined8 *)&(this->InstanceDiscoveredEvent).field_0x18 = 2;
  *(undefined8 *)&this->LogReceivedEvent = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x18 = 2;
  return this;
}

// GetInstances @ 148cf24e0

void __thiscall
FSessionInfo::GetInstances
          (FSessionInfo *this,
          TArray<TSharedPtr<ISessionInstanceInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint *puVar9;
  undefined8 local_98;
  longlong local_90;
  TMap<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int>
            ((TSharedPtr<ISessionInstanceInfo,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  iStack_80 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_88 = &this->Instances;
  iVar6 = *(int *)&(this->Instances).field_0x28;
  local_78 = &(this->Instances).field_0x10;
  uStack_7c = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar6 != 0) {
    puVar9 = *(uint **)&(this->Instances).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_78;
    }
    uVar3 = *puVar9;
    local_68 = 0;
    iStack_80 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_148cf25d0;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_7c = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_7c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_6c = (int)lVar7 + -1 + local_68;
    if (iVar6 < iStack_6c) {
      iStack_6c = iVar6;
    }
  }
LAB_148cf25d0:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar6) {
    do {
      local_98 = *(undefined8 *)
                  (*(longlong *)local_58 + 0x10 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      local_90 = *(longlong *)
                  (*(longlong *)local_58 + 0x18 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
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
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar6 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar8 = local_98;
      *(longlong *)(pFVar8 + 8) = local_90;
      local_90 = 0;
      local_98 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// GetLastUpdateTime @ 148cf2750

FDateTime * __thiscall FSessionInfo::GetLastUpdateTime(FSessionInfo *this)

{
  return &this->LastUpdateTime;
}

// GetNumInstances @ 148cf2780

int __thiscall FSessionInfo::GetNumInstances(FSessionInfo *this)

{
  return *(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34;
}

// GetSessionId @ 148cf28f0

FGuid * __thiscall FSessionInfo::GetSessionId(FSessionInfo *this)

{
  return &this->SessionId;
}

// GetSessionName @ 148cf2900

FString * __thiscall FSessionInfo::GetSessionName(FSessionInfo *this)

{
  return &this->SessionName;
}

// GetSessionOwner @ 148cf2910

FString * __thiscall FSessionInfo::GetSessionOwner(FSessionInfo *this)

{
  return &this->SessionOwner;
}

// HandleLogReceived @ 148cf2cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionInfo::HandleLogReceived
          (FSessionInfo *this,TSharedRef<ISessionInstanceInfo,1> *param_1,
          TSharedRef<FSessionLogMessage,1> *param_2)

{
  TSharedRef<FSessionInfo,1> *pTVar1;
  TSharedRef<ISessionInfo,1> local_28;
  TSharedRef<FSessionInfo,1> local_18;
  
  pTVar1 = TSharedFromThis<FSessionInfo,1>::AsShared
                     ((TSharedFromThis<FSessionInfo,1> *)&this->_padding_,&local_18);
  local_28.Object = (ISessionInfo *)pTVar1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TMulticastDelegate<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->LogReceivedEvent,&local_28,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// IsStandalone @ 148cf4790

bool __thiscall FSessionInfo::IsStandalone(FSessionInfo *this)

{
  return this->Standalone;
}

// OnInstanceDiscovered @ 148cf5640

FInstanceDiscoveredEvent * __thiscall FSessionInfo::OnInstanceDiscovered(FSessionInfo *this)

{
  return &this->InstanceDiscoveredEvent;
}

// OnLogReceived @ 148cf5660

FLogReceivedEvent * __thiscall FSessionInfo::OnLogReceived(FSessionInfo *this)

{
  return &this->LogReceivedEvent;
}

// Terminate @ 148cfa360

void __thiscall FSessionInfo::Terminate(FSessionInfo *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Instances);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
              *)&this->Instances;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar1 = *local_48;
      if ((*(longlong *)(lVar1 + 0x10 + (longlong)(int)uVar5 * 0x28) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(**(longlong **)(lVar1 + (longlong)(int)uVar5 * 0x28 + 0x10) + 0x78))();
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar4)) || (iVar4 < local_18->HashSize)) {
        local_18->HashSize = iVar4;
        TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// UpdateFromMessage @ 148cfad90

void __thiscall
FSessionInfo::UpdateFromMessage
          (FSessionInfo *this,FEngineServicePong *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  if ((((param_1->SessionId).D == (this->SessionId).D &&
       (param_1->SessionId).C == (this->SessionId).C) &&
      (param_1->SessionId).B == (this->SessionId).B) &&
      (param_1->SessionId).A == (this->SessionId).A) {
    TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
                *)&this->Instances);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar9 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
                *)&this->Instances;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        lVar1 = *local_48;
        if ((*(longlong *)(lVar1 + 0x10 + (longlong)(int)uVar9 * 0x28) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar6 = (uint *)(**(code **)(**(longlong **)(lVar1 + 0x10 + (longlong)(int)uVar9 * 0x28) +
                                     0x28))();
        if (((puVar6[3] == (param_1->InstanceId).D && puVar6[2] == (param_1->InstanceId).C) &&
            puVar6[1] == (param_1->InstanceId).B) && (param_1->InstanceId).A == *puVar6) {
          lVar7 = (longlong)(int)uStack_2c;
          lVar1 = *local_48;
          if ((*(longlong *)(lVar1 + 0x10 + lVar7 * 0x28) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar1 = *(longlong *)(lVar1 + 0x10 + lVar7 * 0x28);
          if (((*(uint *)(lVar1 + 0x84) == (param_1->InstanceId).D &&
               *(uint *)(lVar1 + 0x80) == (param_1->InstanceId).C) &&
              *(uint *)(lVar1 + 0x7c) == (param_1->InstanceId).B) &&
              (param_1->InstanceId).A == *(uint *)(lVar1 + 0x78)) {
            ::FString::operator=((FString *)(lVar1 + 0x40),&param_1->CurrentLevel);
            puVar8 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
            uVar3 = puVar8[1];
            *(undefined8 *)(lVar1 + 0x60) = *puVar8;
            *(undefined8 *)(lVar1 + 0x68) = uVar3;
            *(int *)(lVar1 + 0x70) = param_1->EngineVersion;
            *(bool *)(lVar1 + 0x74) = param_1->HasBegunPlay;
            *(float *)(lVar1 + 0xf0) = param_1->WorldTimeSeconds;
            ::FString::operator=((FString *)(lVar1 + 0x98),&param_1->InstanceType);
          }
          break;
        }
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar9 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar5 = 1;
        }
        else {
          uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
          local_18->HashSize = iVar5;
          TSet<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

// UpdateFromMessage @ 148cfb030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionInfo::UpdateFromMessage
          (FSessionInfo *this,FSessionServicePong *param_1,TSharedRef<IMessageContext,1> *param_2)

{
  undefined1 *puVar1;
  IMessageBus *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  atomic<int> aVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  atomic<int> aVar13;
  uint uVar14;
  FMessageAddress *pFVar15;
  TSharedPtr<FSessionInstanceInfo,1> *this_00;
  FDateTime FVar16;
  FSessionInstanceInfo *pFVar17;
  TSharedRef<FSessionInfo,1> *pTVar18;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  longlong lVar19;
  TReferenceControllerBase<1> *pTVar20;
  bool bVar21;
  TRawPtrProxy<FSessionInstanceInfo> local_res10;
  TSharedRef<IMessageContext,1> *local_res18;
  TSharedRef<ISessionInfo,1> local_c8;
  TSharedRef<IMessageBus,1> local_b8;
  FSessionInfo *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FSessionInstanceInfo *local_98;
  TReferenceControllerBase<1> *local_90;
  FDestructionSentinel local_88;
  TSharedRef<FSessionInfo,1> local_68;
  TSharedRef<FSessionInfo,1> local_58;
  
  bVar7 = false;
  bVar10 = false;
  bVar9 = false;
  if ((((param_1->SessionId).D == (this->SessionId).D &&
       (param_1->SessionId).C == (this->SessionId).C) &&
      (param_1->SessionId).B == (this->SessionId).B) &&
      (param_1->SessionId).A == (this->SessionId).A) {
    this->Standalone = param_1->Standalone;
    local_res18 = param_2;
    ::FString::operator=(&this->SessionOwner,&param_1->SessionOwner);
    ::FString::operator=(&this->SessionName,&param_1->SessionName);
    pFVar15 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    uVar12 = FCrc::MemCrc_DEPRECATED(pFVar15,0x10,0);
    this_00 = TMapBase<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>_>
              ::FindOrAddImpl<FMessageAddress_const_&>
                        ((TMapBase<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>,0>_>
                          *)&this->Instances,uVar12,pFVar15);
    if (this_00->Object == (FSessionInstanceInfo *)0x0) {
      pTVar20 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
      if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = pTVar20->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            pTVar20 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_148cfb132;
          }
          LOCK();
          aVar13 = pTVar20->SharedReferenceCount;
          bVar21 = aVar8 == aVar13;
          if (bVar21) {
            pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar13 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar13;
        } while (!bVar21);
        pIVar2 = (this->MessageBusPtr).Object;
        if (pIVar2 != (IMessageBus *)0x0) {
          pFVar17 = ::operator_new(0x118);
          if (pFVar17 == (FSessionInstanceInfo *)0x0) {
            local_res10.Object = (FSessionInstanceInfo *)0x0;
          }
          else {
            LOCK();
            pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
            UNLOCK();
            local_b8.Object = pIVar2;
            local_b8.SharedReferenceCount.ReferenceController = pTVar20;
            pTVar18 = TSharedFromThis<FSessionInfo,1>::AsShared
                                ((TSharedFromThis<FSessionInfo,1> *)&this->_padding_,&local_68);
            local_c8.Object = (ISessionInfo *)pTVar18->Object;
            local_c8.SharedReferenceCount.ReferenceController =
                 (pTVar18->SharedReferenceCount).ReferenceController;
            if (local_c8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_res10.Object =
                 FSessionInstanceInfo::FSessionInstanceInfo
                           (pFVar17,&param_1->InstanceId,&local_c8,&local_b8);
            bVar7 = true;
            bVar10 = true;
            bVar9 = true;
            if ((((local_res10.Object != (FSessionInstanceInfo *)0x0) &&
                 ((local_res10.Object)->_padding_ != 0)) && ((local_res10.Object)->_padding_ != 0))
               && ((0 < *(int *)((local_res10.Object)->_padding_ + 8) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!InObject || !InObject->DoesSharedInstanceExist()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x7a5,L"Trying to share an already-shared object"), bVar21)
                   ))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          TSharedPtr<FSessionInstanceInfo,1>::operator=<FSessionInstanceInfo>(this_00,&local_res10);
          if (bVar9) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c8.SharedReferenceCount.ReferenceController);
          }
          if (bVar10) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_68.SharedReferenceCount.ReferenceController);
          }
          if (bVar7) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b8.SharedReferenceCount.ReferenceController);
          }
          pFVar17 = TSharedPtr<FSessionInstanceInfo,1>::operator->(this_00);
          this_01 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
                     *)(**(code **)(pFVar17->_padding_ + 0x80))(pFVar17);
          TMulticastDelegateRegistration<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
          ::AddSP<FSessionInfo>(this_01,(FSessionInfo *)&stack0x00000020,(pmf_c0779e31 *)this);
          pFVar17 = TSharedPtr<FSessionInstanceInfo,1>::operator->(this_00);
          FSessionInstanceInfo::UpdateFromMessage(pFVar17,param_1,local_res18);
          if ((this_00->Object == (FSessionInstanceInfo *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = this_00->Object;
          pTVar3 = (this_00->SharedReferenceCount).ReferenceController;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar17 == (FSessionInstanceInfo *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_98 = pFVar17;
          local_90 = pTVar3;
          pTVar18 = TSharedFromThis<FSessionInfo,1>::AsShared
                              ((TSharedFromThis<FSessionInfo,1> *)&this->_padding_,&local_58);
          local_a8 = pTVar18->Object;
          local_a0 = (pTVar18->SharedReferenceCount).ReferenceController;
          if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
            UNLOCK();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->InstanceDiscoveredEvent,(FWriteAccessScope *)&local_88);
          puVar1 = &(this->InstanceDiscoveredEvent).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          bVar9 = false;
          uVar12 = *(int *)&(this->InstanceDiscoveredEvent).field_0x10 - 1;
          if (-1 < (int)uVar12) {
            lVar19 = (longlong)(int)uVar12 << 4;
            bVar9 = false;
            do {
              uVar14 = 0;
              if ((int)uVar12 < *(int *)&(this->InstanceDiscoveredEvent).field_0x10) {
                uVar14 = ~uVar12 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar4 = *(longlong *)&(this->InstanceDiscoveredEvent).field_0x8;
              if (((*(int *)(lVar19 + 8 + lVar4) == 0) ||
                  (plVar5 = *(longlong **)(lVar19 + lVar4), plVar5 == (longlong *)0x0)) ||
                 (cVar11 = (**(code **)(*plVar5 + 0x68))(plVar5,&local_a8,&local_98), cVar11 == '\0'
                 )) {
                bVar9 = true;
              }
              lVar19 = lVar19 + -0x10;
              uVar12 = uVar12 - 1;
            } while (-1 < (int)uVar12);
          }
          puVar1 = &(this->InstanceDiscoveredEvent).field_0x1c;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          if (bVar9) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->InstanceDiscoveredEvent,false);
          }
          if (local_88.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
      }
LAB_148cfb132:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    }
    else {
      FSessionInstanceInfo::UpdateFromMessage(this_00->Object,param_1,param_2);
    }
    FVar16 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    (this->LastUpdateTime).Ticks = *FVar16.Ticks;
  }
  return;
}

