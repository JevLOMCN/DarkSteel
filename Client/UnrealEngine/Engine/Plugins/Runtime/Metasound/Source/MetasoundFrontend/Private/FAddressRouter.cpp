// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 8

// FAddressRouter @ 14af39250

FAddressRouter * __thiscall
Metasound::FAddressRouter::FAddressRouter(FAddressRouter *this,FAddressRouter *param_1)

{
  *(undefined8 *)&this->DataChannelMap = 0;
  *(undefined8 *)&(this->DataChannelMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataChannelMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataChannelMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataChannelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataChannelMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DataChannelMap).field_0x34 = 0;
  *(undefined8 *)&(this->DataChannelMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataChannelMap).field_0x48 = 0;
  TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
                       *)param_1);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DataChannelMapMutationLock,4000);
  return this;
}

// FindDataChannel @ 14af91360

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
Metasound::FAddressRouter::FindDataChannel
          (FAddressRouter *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FTransmissionAddress *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined **local_38;
  FTransmissionAddress *local_30;
  TSharedPtr<Metasound::IDataChannel,1> local_28;
  
  puVar7 = (undefined8 *)0x0;
  lpCriticalSection = &this->DataChannelMapMutationLock;
  __return_storage_ptr__->Object = (IDataChannel *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_38 = &___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_30);
  if ((code *)local_38[5] == FTransmissionAddressKey::GetHash) {
    uVar3 = Metasound::GetTypeHash(local_30);
  }
  else {
    uVar3 = (*(code *)local_38[5])(&local_38);
  }
  puVar6 = puVar7;
  if (*(int *)&(this->DataChannelMap).field_0x8 != *(int *)&(this->DataChannelMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->DataChannelMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->DataChannelMap).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->DataChannelMap).field_0x48 - 1U & uVar3) *
                              4);
    while (puVar6 = puVar7, iVar1 != -1) {
      plVar4 = (longlong *)(*(longlong *)&this->DataChannelMap + (longlong)iVar1 * 0x28);
      cVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
      puVar6 = (undefined8 *)(*(longlong *)&this->DataChannelMap + (longlong)iVar1 * 0x28);
      if (cVar2 != '\0') break;
      iVar1 = *(int *)(puVar6 + 4);
    }
  }
  puVar8 = puVar6 + 2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar8 = puVar7;
  }
  if (local_30 != (FTransmissionAddress *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  if (puVar8 != (undefined8 *)0x0) {
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
    local_28.Object = (IDataChannel *)*puVar8;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = local_28.Object;
      local_28.Object = (IDataChannel *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// GetDataChannel @ 14af94fb0

TSharedPtr<Metasound::IDataChannel,1> * __thiscall
Metasound::FAddressRouter::GetDataChannel
          (FAddressRouter *this,TSharedPtr<Metasound::IDataChannel,1> *__return_storage_ptr__,
          FTransmissionAddress *param_1,FOperatorSettings *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  IDataChannel *pIVar2;
  bool bVar3;
  IDataTypeRegistry *pIVar4;
  undefined8 uVar5;
  TSharedPtr<Metasound::IDataChannel,1> *pTVar6;
  FLLMScope local_res10 [2];
  TPairInitializer<Metasound::FAddressRouter::FTransmissionAddressKey_&&,TSharedRef<Metasound::IDataChannel,1>_&&>
  local_88;
  FMemScope local_78;
  undefined1 local_70 [8];
  IDataChannel *local_68;
  TReferenceControllerBase<1> *local_60;
  undefined **local_58;
  undefined8 *local_50;
  undefined ***local_48;
  IDataChannel **local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_88._4_8_ = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_78,(FName *)((longlong)&local_88.Key + 4),true);
  FindDataChannel(this,__return_storage_ptr__,param_1);
  if (__return_storage_ptr__->Object == (IDataChannel *)0x0) {
    lpCriticalSection = &this->DataChannelMapMutationLock;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar4 = Frontend::IDataTypeRegistry::Get();
    pcVar1 = *(code **)((longlong)*pIVar4 + 0xa0);
    uVar5 = (**(code **)((longlong)*param_1 + 0x10))(param_1,local_70);
    pTVar6 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)(pIVar4,local_38,uVar5,param_2);
    if (__return_storage_ptr__ != pTVar6) {
      __return_storage_ptr__->Object = pTVar6->Object;
      pTVar6->Object = (IDataChannel *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&pTVar6->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    pIVar2 = __return_storage_ptr__->Object;
    if (pIVar2 != (IDataChannel *)0x0) {
      local_60 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      if (local_60 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68 = pIVar2;
      if (pIVar2 == (IDataChannel *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TSharedPtr<Metasound::IDataChannel,1> *)(*pcVar1)();
          return pTVar6;
        }
      }
      local_58 = &___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
      (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_50);
      local_48 = &local_58;
      local_40 = &local_68;
      TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<Metasound::FAddressRouter::FTransmissionAddressKey_&&,TSharedRef<Metasound::IDataChannel,1>_&&>_>
                ((TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
                  *)this,&local_88,(bool *)&local_48);
      if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// PushLiteral @ 14afb3590

bool __thiscall
Metasound::FAddressRouter::PushLiteral
          (FAddressRouter *this,FName *param_1,FName *param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  undefined8 local_10;
  
  local_10 = 0xffffffffffffffff;
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_20 = *param_2;
  local_18 = *param_1;
  FindDataChannel(this,&local_38,&local_28);
  uVar3 = 0;
  if (local_38.Object != (IDataChannel *)0x0) {
    if (local_38.Object == (IDataChannel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    uVar3 = (**(code **)((local_38.Object)->_padding_ + 0x38))(local_38.Object,param_3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// RegisterNewReceiver @ 14afb4820

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::FAddressRouter::RegisterNewReceiver
          (FAddressRouter *this,FTransmissionAddress *param_1,FReceiverInitParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> TVar3;
  FOperatorSettings *in_R9;
  FLLMScope local_res20 [2];
  FMemScope local_28;
  FName local_20;
  TSharedPtr<Metasound::IDataChannel,1> local_18;
  
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_28,&local_20,true);
  GetDataChannel(this,&local_18,(FTransmissionAddress *)param_2,in_R9);
  if (local_18.Object == (IDataChannel *)0x0) {
    *param_1 = (FTransmissionAddress)0x0;
  }
  else {
    if ((local_18.Object == (IDataChannel *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (IReceiver *)(*pcVar1)();
      return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)TVar3.Ptr;
    }
    LOCK();
    ((local_18.Object)->NumAliveReceivers).Counter =
         ((local_18.Object)->NumAliveReceivers).Counter + 1;
    UNLOCK();
    (**(code **)((local_18.Object)->_padding_ + 0x40))(local_18.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res20);
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// RegisterNewSender @ 14afb4a30

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::FAddressRouter::RegisterNewSender
          (FAddressRouter *this,FTransmissionAddress *param_1,FSenderInitParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> TVar3;
  FOperatorSettings *in_R9;
  FLLMScope local_res20 [2];
  FMemScope local_28;
  FName local_20;
  TSharedPtr<Metasound::IDataChannel,1> local_18;
  
  FLLMScope::FLLMScope
            (local_res20,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_20 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_28,&local_20,true);
  GetDataChannel(this,&local_18,(FTransmissionAddress *)param_2,in_R9);
  if (local_18.Object == (IDataChannel *)0x0) {
    *param_1 = (FTransmissionAddress)0x0;
  }
  else {
    if ((local_18.Object == (IDataChannel *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (ISender *)(*pcVar1)();
      return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)TVar3.Ptr;
    }
    LOCK();
    ((local_18.Object)->NumAliveSenders).Counter = ((local_18.Object)->NumAliveSenders).Counter + 1;
    UNLOCK();
    (**(code **)((local_18.Object)->_padding_ + 0x48))(local_18.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res20);
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// UnregisterDataChannel @ 14afc0460

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::FAddressRouter::UnregisterDataChannel(FAddressRouter *this,FTransmissionAddress *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  FTransmissionAddressKey local_58;
  void *local_48 [2];
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  lpCriticalSection = &this->DataChannelMapMutationLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_58._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_58.PImpl);
  if (*(code **)(local_58._padding_ + 0x28) == FTransmissionAddressKey::GetHash) {
    uVar3 = Metasound::GetTypeHash(local_58.PImpl.Ptr);
  }
  else {
    uVar3 = (**(code **)(local_58._padding_ + 0x28))(&local_58);
  }
  plVar8 = (longlong *)0x0;
  iVar4 = 0;
  plVar5 = plVar8;
  if (*(int *)&(this->DataChannelMap).field_0x8 != *(int *)&(this->DataChannelMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DataChannelMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DataChannelMap).field_0x38;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->DataChannelMap).field_0x48 - 1U & uVar3) *
                              4);
    while (plVar5 = plVar8, iVar1 != -1) {
      plVar5 = (longlong *)(*(longlong *)&this->DataChannelMap + (longlong)iVar1 * 0x28);
      cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_58);
      plVar5 = (longlong *)(*(longlong *)&this->DataChannelMap + (longlong)iVar1 * 0x28);
      if (cVar2 != '\0') break;
      iVar1 = (int)plVar5[4];
    }
  }
  plVar7 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (local_58.PImpl.Ptr != (FTransmissionAddress *)0x0) {
    (**(code **)*local_58.PImpl.Ptr)(local_58.PImpl.Ptr,1);
  }
  if (plVar7 != (longlong *)0x0) {
    if ((*(int *)(*plVar7 + 0x20) != 0) && (5 < (byte)LogMetaSound._0_1_)) {
      (**(code **)((longlong)*param_1 + 0x20))(param_1,local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    if ((*(int *)(*plVar7 + 0x24) != 0) && (5 < (byte)LogMetaSound._0_1_)) {
      (**(code **)((longlong)*param_1 + 0x20))(param_1,local_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
  }
  local_58._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_58.PImpl);
  if (*(int *)&(this->DataChannelMap).field_0x8 != *(int *)&(this->DataChannelMap).field_0x34) {
    if (*(code **)(local_58._padding_ + 0x28) == FTransmissionAddressKey::GetHash) {
      uVar3 = Metasound::GetTypeHash(local_58.PImpl.Ptr);
    }
    else {
      uVar3 = (**(code **)(local_58._padding_ + 0x28))(&local_58);
    }
    iVar4 = TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<Metasound::FAddressRouter::FTransmissionAddressKey>
                      ((TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
                        *)this,uVar3,&local_58);
  }
  if (local_58.PImpl.Ptr != (FTransmissionAddress *)0x0) {
    (**(code **)*local_58.PImpl.Ptr)(local_58.PImpl.Ptr,1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return 0 < iVar4;
}

// UnregisterDataChannelIfUnconnected @ 14afc0720

bool __thiscall
Metasound::FAddressRouter::UnregisterDataChannelIfUnconnected
          (FAddressRouter *this,FTransmissionAddress *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *plVar9;
  FLLMScope local_res8 [5];
  FName local_res18;
  FMemScope local_res20;
  FTransmissionAddressKey local_48;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  lpCriticalSection = &this->DataChannelMapMutationLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_48._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_48.PImpl);
  if (*(code **)(local_48._padding_ + 0x28) == FTransmissionAddressKey::GetHash) {
    uVar3 = Metasound::GetTypeHash(local_48.PImpl.Ptr);
  }
  else {
    uVar3 = (**(code **)(local_48._padding_ + 0x28))(&local_48);
  }
  plVar7 = (longlong *)0x0;
  iVar4 = 0;
  plVar5 = plVar7;
  if (*(int *)&(this->DataChannelMap).field_0x8 != *(int *)&(this->DataChannelMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DataChannelMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DataChannelMap).field_0x38;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->DataChannelMap).field_0x48 - 1U & uVar3) *
                              4);
    while (plVar5 = plVar7, iVar1 != -1) {
      plVar5 = (longlong *)(*(longlong *)&this->DataChannelMap + (longlong)iVar1 * 0x28);
      cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_48);
      plVar5 = (longlong *)(*(longlong *)&this->DataChannelMap + (longlong)iVar1 * 0x28);
      if (cVar2 != '\0') break;
      iVar1 = (int)plVar5[4];
    }
  }
  plVar9 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar9 = plVar7;
  }
  if (local_48.PImpl.Ptr != (FTransmissionAddress *)0x0) {
    (**(code **)*local_48.PImpl.Ptr)(local_48.PImpl.Ptr,1);
  }
  if (((plVar9 == (longlong *)0x0) || (*(int *)(*plVar9 + 0x20) != 0)) ||
     (*(int *)(*plVar9 + 0x24) != 0)) {
    bVar8 = false;
  }
  else {
    local_48._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
    (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_48.PImpl);
    if (*(int *)&(this->DataChannelMap).field_0x8 != *(int *)&(this->DataChannelMap).field_0x34) {
      if (*(code **)(local_48._padding_ + 0x28) == FTransmissionAddressKey::GetHash) {
        uVar3 = Metasound::GetTypeHash(local_48.PImpl.Ptr);
      }
      else {
        uVar3 = (**(code **)(local_48._padding_ + 0x28))(&local_48);
      }
      iVar4 = TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<Metasound::FAddressRouter::FTransmissionAddressKey>
                        ((TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
                          *)this,uVar3,&local_48);
    }
    bVar8 = 0 < iVar4;
    if (local_48.PImpl.Ptr != (FTransmissionAddress *)0x0) {
      (**(code **)*local_48.PImpl.Ptr)(local_48.PImpl.Ptr,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return bVar8;
}

