// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// Get @ 14af948d0

FDataTransmissionCenter * __cdecl Metasound::FDataTransmissionCenter::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Singleton.GlobalRouter.DataChannelMapMutationLock,4000);
      atexit(`Metasound::FDataTransmissionCenter::Get'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// PushLiteral @ 14afb3640

bool __thiscall
Metasound::FDataTransmissionCenter::PushLiteral
          (FDataTransmissionCenter *this,FName param_1,FName param_2,FLiteral *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<Metasound::IDataChannel,1> local_38;
  FTransmissionAddress local_28;
  FName local_20;
  FName local_18;
  undefined8 local_10;
  
  local_28 = (FTransmissionAddress)&___7FSendAddress_Metasound__6B_;
  local_10 = 0xffffffffffffffff;
  local_20 = param_2;
  local_18 = param_1;
  FAddressRouter::FindDataChannel(&this->GlobalRouter,&local_38,&local_28);
  if (local_38.Object == (IDataChannel *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return false;
  }
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// RegisterNewReceiver @ 14afb4930

TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> __thiscall
Metasound::FDataTransmissionCenter::RegisterNewReceiver
          (FDataTransmissionCenter *this,FTransmissionAddress *param_1,FReceiverInitParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> TVar3;
  FOperatorSettings *in_R9;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res20;
  TSharedPtr<Metasound::IDataChannel,1> local_28;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  FAddressRouter::GetDataChannel
            (&this->GlobalRouter,&local_28,(FTransmissionAddress *)param_2,in_R9);
  if (local_28.Object == (IDataChannel *)0x0) {
    *param_1 = (FTransmissionAddress)0x0;
  }
  else {
    if ((local_28.Object == (IDataChannel *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (IReceiver *)(*pcVar1)();
      return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)TVar3.Ptr;
    }
    LOCK();
    ((local_28.Object)->NumAliveReceivers).Counter =
         ((local_28.Object)->NumAliveReceivers).Counter + 1;
    UNLOCK();
    (**(code **)((local_28.Object)->_padding_ + 0x40))(local_28.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return (TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_>)
         (IReceiver *)param_1;
}

// RegisterNewSender @ 14afb4b40

TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> __thiscall
Metasound::FDataTransmissionCenter::RegisterNewSender
          (FDataTransmissionCenter *this,FTransmissionAddress *param_1,FSenderInitParams *param_2)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_> TVar3;
  FOperatorSettings *in_R9;
  FLLMScope local_res8 [2];
  FName local_res10;
  FMemScope local_res20;
  TSharedPtr<Metasound::IDataChannel,1> local_28;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  FAddressRouter::GetDataChannel
            (&this->GlobalRouter,&local_28,(FTransmissionAddress *)param_2,in_R9);
  if (local_28.Object == (IDataChannel *)0x0) {
    *param_1 = (FTransmissionAddress)0x0;
  }
  else {
    if ((local_28.Object == (IDataChannel *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (ISender *)(*pcVar1)();
      return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)TVar3.Ptr;
    }
    LOCK();
    ((local_28.Object)->NumAliveSenders).Counter = ((local_28.Object)->NumAliveSenders).Counter + 1;
    UNLOCK();
    (**(code **)((local_28.Object)->_padding_ + 0x48))(local_28.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return (TUniquePtr<Metasound::ISender,TDefaultDelete<Metasound::ISender>_>)(ISender *)param_1;
}

// UnregisterDataChannel @ 14afc0710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::FDataTransmissionCenter::UnregisterDataChannel
          (FDataTransmissionCenter *this,FTransmissionAddress *param_1)

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
  FLLMScope aFStackX_8 [2];
  FName FStackX_18;
  FMemScope FStackX_20;
  FTransmissionAddressKey FStack_58;
  void *apvStack_48 [2];
  
  FLLMScope::FLLMScope
            (aFStackX_8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  FStackX_18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&FStackX_20,&FStackX_18,true);
  lpCriticalSection = &(this->GlobalRouter).DataChannelMapMutationLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FStack_58._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_58.PImpl);
  if (*(code **)(FStack_58._padding_ + 0x28) == FAddressRouter::FTransmissionAddressKey::GetHash) {
    uVar3 = Metasound::GetTypeHash(FStack_58.PImpl.Ptr);
  }
  else {
    uVar3 = (**(code **)(FStack_58._padding_ + 0x28))(&FStack_58);
  }
  plVar8 = (longlong *)0x0;
  iVar4 = 0;
  plVar5 = plVar8;
  if (*(int *)&(this->GlobalRouter).DataChannelMap.field_0x8 !=
      *(int *)&(this->GlobalRouter).DataChannelMap.field_0x34) {
    puVar6 = *(undefined1 **)&(this->GlobalRouter).DataChannelMap.field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GlobalRouter).DataChannelMap.field_0x38;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GlobalRouter).DataChannelMap.field_0x48 - 1U & uVar3)
                              * 4);
    while (plVar5 = plVar8, iVar1 != -1) {
      plVar5 = (longlong *)
               (*(longlong *)&(this->GlobalRouter).DataChannelMap + (longlong)iVar1 * 0x28);
      cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,&FStack_58);
      plVar5 = (longlong *)
               (*(longlong *)&(this->GlobalRouter).DataChannelMap + (longlong)iVar1 * 0x28);
      if (cVar2 != '\0') break;
      iVar1 = (int)plVar5[4];
    }
  }
  plVar7 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (FStack_58.PImpl.Ptr != (FTransmissionAddress *)0x0) {
    (**(code **)*FStack_58.PImpl.Ptr)(FStack_58.PImpl.Ptr,1);
  }
  if (plVar7 != (longlong *)0x0) {
    if ((*(int *)(*plVar7 + 0x20) != 0) && (5 < (byte)LogMetaSound._0_1_)) {
      (**(code **)((longlong)*param_1 + 0x20))(param_1,apvStack_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (apvStack_48[0] != (void *)0x0) {
        FMemory::Free(apvStack_48[0]);
      }
    }
    if ((*(int *)(*plVar7 + 0x24) != 0) && (5 < (byte)LogMetaSound._0_1_)) {
      (**(code **)((longlong)*param_1 + 0x20))(param_1,apvStack_48);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
      if (apvStack_48[0] != (void *)0x0) {
        FMemory::Free(apvStack_48[0]);
      }
    }
  }
  FStack_58._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_58.PImpl);
  if (*(int *)&(this->GlobalRouter).DataChannelMap.field_0x8 !=
      *(int *)&(this->GlobalRouter).DataChannelMap.field_0x34) {
    if (*(code **)(FStack_58._padding_ + 0x28) == FAddressRouter::FTransmissionAddressKey::GetHash)
    {
      uVar3 = Metasound::GetTypeHash(FStack_58.PImpl.Ptr);
    }
    else {
      uVar3 = (**(code **)(FStack_58._padding_ + 0x28))(&FStack_58);
    }
    iVar4 = TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<Metasound::FAddressRouter::FTransmissionAddressKey>
                      ((TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
                        *)this,uVar3,&FStack_58);
  }
  if (FStack_58.PImpl.Ptr != (FTransmissionAddress *)0x0) {
    (**(code **)*FStack_58.PImpl.Ptr)(FStack_58.PImpl.Ptr,1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&FStackX_20);
  FLLMScope::~FLLMScope(aFStackX_8);
  return 0 < iVar4;
}

// UnregisterDataChannelIfUnconnected @ 14afc0940

bool __thiscall
Metasound::FDataTransmissionCenter::UnregisterDataChannelIfUnconnected
          (FDataTransmissionCenter *this,FTransmissionAddress *param_1)

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
  FLLMScope aFStackX_8 [5];
  FName FStackX_18;
  FMemScope FStackX_20;
  FTransmissionAddressKey FStack_48;
  
  FLLMScope::FLLMScope
            (aFStackX_8,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  FStackX_18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&FStackX_20,&FStackX_18,true);
  lpCriticalSection = &(this->GlobalRouter).DataChannelMapMutationLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FStack_48._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_48.PImpl);
  if (*(code **)(FStack_48._padding_ + 0x28) == FAddressRouter::FTransmissionAddressKey::GetHash) {
    uVar3 = Metasound::GetTypeHash(FStack_48.PImpl.Ptr);
  }
  else {
    uVar3 = (**(code **)(FStack_48._padding_ + 0x28))(&FStack_48);
  }
  plVar7 = (longlong *)0x0;
  iVar4 = 0;
  plVar5 = plVar7;
  if (*(int *)&(this->GlobalRouter).DataChannelMap.field_0x8 !=
      *(int *)&(this->GlobalRouter).DataChannelMap.field_0x34) {
    puVar6 = *(undefined1 **)&(this->GlobalRouter).DataChannelMap.field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GlobalRouter).DataChannelMap.field_0x38;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GlobalRouter).DataChannelMap.field_0x48 - 1U & uVar3)
                              * 4);
    while (plVar5 = plVar7, iVar1 != -1) {
      plVar5 = (longlong *)
               (*(longlong *)&(this->GlobalRouter).DataChannelMap + (longlong)iVar1 * 0x28);
      cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5,&FStack_48);
      plVar5 = (longlong *)
               (*(longlong *)&(this->GlobalRouter).DataChannelMap + (longlong)iVar1 * 0x28);
      if (cVar2 != '\0') break;
      iVar1 = (int)plVar5[4];
    }
  }
  plVar9 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar9 = plVar7;
  }
  if (FStack_48.PImpl.Ptr != (FTransmissionAddress *)0x0) {
    (**(code **)*FStack_48.PImpl.Ptr)(FStack_48.PImpl.Ptr,1);
  }
  if (((plVar9 == (longlong *)0x0) || (*(int *)(*plVar9 + 0x20) != 0)) ||
     (*(int *)(*plVar9 + 0x24) != 0)) {
    bVar8 = false;
  }
  else {
    FStack_48._padding_ = (longlong)&___7FTransmissionAddressKey_FAddressRouter_Metasound__6B_;
    (**(code **)((longlong)*param_1 + 0x18))(param_1,&FStack_48.PImpl);
    if (*(int *)&(this->GlobalRouter).DataChannelMap.field_0x8 !=
        *(int *)&(this->GlobalRouter).DataChannelMap.field_0x34) {
      if (*(code **)(FStack_48._padding_ + 0x28) == FAddressRouter::FTransmissionAddressKey::GetHash
         ) {
        uVar3 = Metasound::GetTypeHash(FStack_48.PImpl.Ptr);
      }
      else {
        uVar3 = (**(code **)(FStack_48._padding_ + 0x28))(&FStack_48);
      }
      iVar4 = TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<Metasound::FAddressRouter::FTransmissionAddressKey>
                        ((TSet<TTuple<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>_>,TDefaultMapHashableKeyFuncs<Metasound::FAddressRouter::FTransmissionAddressKey,TSharedRef<Metasound::IDataChannel,1>,0>,FDefaultSetAllocator>
                          *)this,uVar3,&FStack_48);
    }
    bVar8 = 0 < iVar4;
    if (FStack_48.PImpl.Ptr != (FTransmissionAddress *)0x0) {
      (**(code **)*FStack_48.PImpl.Ptr)(FStack_48.PImpl.Ptr,1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FMemScope::~FMemScope(&FStackX_20);
  FLLMScope::~FLLMScope(aFStackX_8);
  return bVar8;
}

