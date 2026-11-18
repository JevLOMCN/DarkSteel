// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 23

// FBackChannelOSCConnection @ 14e7f2e50

FBackChannelOSCConnection * __thiscall
FBackChannelOSCConnection::FBackChannelOSCConnection
          (FBackChannelOSCConnection *this,TSharedRef<IBackChannelSocketConnection,1> *param_1)

{
  int *piVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IBackChannelConnection__;
  (this->Connection).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Connection).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->DispatchMap)._padding_ = (longlong)&___7FBackChannelDispatchMap__6B_;
  *(undefined8 *)&(this->DispatchMap).DispatchMap = 0;
  *(undefined8 *)&(this->DispatchMap).DispatchMap.field_0x8 = 0;
  *(undefined8 *)&(this->DispatchMap).DispatchMap.field_0x20 = 0;
  *(undefined4 *)&(this->DispatchMap).DispatchMap.field_0x28 = 0;
  *(undefined4 *)&(this->DispatchMap).DispatchMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->DispatchMap).DispatchMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DispatchMap).DispatchMap.field_0x34 = 0;
  *(undefined8 *)&(this->DispatchMap).DispatchMap.field_0x40 = 0;
  *(undefined4 *)&(this->DispatchMap).DispatchMap.field_0x48 = 0;
  (this->ReceivedPackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReceivedPackets).ArrayNum = 0;
  (this->ReceivedPackets).ArrayMax = 0;
  *(undefined8 *)&this->MessageLimits = 0;
  *(undefined8 *)&(this->MessageLimits).field_0x8 = 0;
  *(undefined8 *)&(this->MessageLimits).field_0x20 = 0;
  *(undefined4 *)&(this->MessageLimits).field_0x28 = 0;
  *(undefined4 *)&(this->MessageLimits).field_0x2c = 0x80;
  *(undefined4 *)&(this->MessageLimits).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MessageLimits).field_0x34 = 0;
  *(undefined8 *)&(this->MessageLimits).field_0x40 = 0;
  *(undefined4 *)&(this->MessageLimits).field_0x48 = 0;
  this->ExitRequested = (FThreadSafeBool)0x0;
  this->IsRunning = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ReceiveMutex,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SendMutex,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PacketMutex,4000);
  this->HasErrorState = false;
  piVar1 = &(this->ReceiveBuffer).ArrayNum;
  piVar2 = &(this->ReceiveBuffer).ArrayMax;
  *piVar1 = 0;
  this->PingTime = 2.0;
  (this->ReceiveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  this->ReceivedDataSize = 0;
  this->ExpectedSizeOfNextPacket = 4;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x1000,&(this->ReceiveBuffer).AllocatorInstance,piVar1,piVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FBackChannelOSCConnection @ 14e7f3550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBackChannelOSCConnection::~FBackChannelOSCConnection(FBackChannelOSCConnection *this)

{
  FThreadSafeBool FVar1;
  IBackChannelSocketConnection *pIVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  FString local_48;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  void *local_28 [4];
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IBackChannelConnection__;
  if (5 < (byte)LogBackChannel._0_1_) {
    if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar2 = (this->Connection).Object;
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,local_28);
    ::FString::PrintfImpl(&local_48,L"OSCConnection to %s");
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (this->IsRunning != (FThreadSafeBool)0x0) {
    if (this->IsRunning != (FThreadSafeBool)0x0) {
      if (5 < (byte)LogBackChannel._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
      }
      LOCK();
      this->ExitRequested = (FThreadSafeBool)0x1;
      fVar6 = __real_3c23d70a;
      UNLOCK();
      FVar1 = this->IsRunning;
      while (FVar1 != (FThreadSafeBool)0x0) {
        FWindowsPlatformProcess::SleepNoStats(fVar6);
        FVar1 = this->IsRunning;
      }
    }
    if (5 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->Connection != (TSharedPtr<IBackChannelSocketConnection,1> *)&local_38) {
      (this->Connection).Object = (IBackChannelSocketConnection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Connection).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  pFVar3 = (this->ReceiveBuffer).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PacketMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SendMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ReceiveMutex);
  *(undefined4 *)&(this->MessageLimits).field_0x48 = 0;
  pvVar4 = *(void **)&(this->MessageLimits).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MessageLimits);
  DestructItems<TSharedPtr<FBackChannelOSCPacket,1>,int>
            ((TSharedPtr<FBackChannelOSCPacket,1> *)(this->ReceivedPackets).AllocatorInstance.Data,
             (this->ReceivedPackets).ArrayNum);
  pFVar3 = (this->ReceivedPackets).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->DispatchMap).DispatchMap.field_0x48 = 0;
  (this->DispatchMap)._padding_ = (longlong)&___7FBackChannelDispatchMap__6B_;
  pvVar4 = *(void **)&(this->DispatchMap).DispatchMap.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DispatchMap).DispatchMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Connection).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IBackChannelConnection__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// AddRouteDelegate @ 14e7f4640

FDelegateHandle __thiscall
FBackChannelOSCConnection::AddRouteDelegate
          (FBackChannelOSCConnection *this,TStringView<wchar_t> *param_1,
          TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy> *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy> *this_00;
  FString *this_01;
  FDelegateHandle FVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FBackChannelDispatchMap *this_02;
  TDelegateBase<FNotThreadSafeDelegateMode> *in_R9;
  TKeyInitializer<FString_const_&> local_res8;
  FString *local_78;
  FString local_70;
  FString local_60;
  wchar_t *local_48;
  undefined8 uStack_40;
  TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy> local_38;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((this->SendMutex).CriticalSection.Opaque3 + 2);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  this_02 = &this->DispatchMap;
  this_00 = TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>
                      (&local_38,
                       (TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy> *)
                       in_R9);
  local_48 = *(wchar_t **)param_2;
  uStack_40 = *(undefined8 *)&param_2->field_0x8;
  this_01 = ::FString::ConstructFromPtrSize
                      (&local_60,local_48,(int)*(undefined8 *)&param_2->field_0x8);
  ::FString::ToLower(this_01,&local_70);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar6.Data = local_70.Data.AllocatorInstance.Data;
  }
  lVar7 = 0;
  iVar4 = local_70.Data.ArrayNum + -1;
  if (local_70.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar6.Data);
  iVar4 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)this_02,uVar3,&local_70);
  if (iVar4 == -1) {
    local_78 = &local_70;
    TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)this_02,&local_res8,(bool *)&local_78);
  }
  iVar4 = local_70.Data.ArrayNum + -1;
  FVar6.Data = local_70.Data.AllocatorInstance.Data;
  if (local_70.Data.ArrayNum == 0) {
    iVar4 = 0;
    FVar6.Data = (FScriptContainerElement *)L"";
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar6.Data);
  iVar4 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)this_02,uVar3,&local_70);
  if (((iVar4 == -1) || (lVar7 = (longlong)iVar4 * 0x38 + this_02->_padding_, lVar7 == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar5.ID = (*pcVar1)();
    return (FDelegateHandle)FVar5.ID;
  }
  TMulticastDelegateRegistration<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>
              *)(lVar7 + 0x10),
             (TDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy> *)param_1);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  LeaveCriticalSection(lpCriticalSection);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(in_R9);
  return (FDelegateHandle)(ulong64)param_1;
}

// CreatePacket @ 14e7f5670

TSharedPtr<IBackChannelPacket,1> * __thiscall
FBackChannelOSCConnection::CreatePacket
          (FBackChannelOSCConnection *this,TSharedPtr<IBackChannelPacket,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IBackChannelPacket,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pTVar3 = ::operator_new(0x60);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IBackChannelPacket *)0x18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBackChannelOSCMessage___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&FBackChannelOSCMessage::_vftable__for__FBackChannelOSCPacket__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &FBackChannelOSCMessage::_vftable__for__IBackChannelPacket__;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[2]._padding_ = 1;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar3 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IBackChannelPacket,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    pTVar5 = (TReferenceControllerBase<1> *)&pTVar3[1].SharedReferenceCount;
    if (pTVar3 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      pTVar5 = pTVar6;
    }
    __return_storage_ptr__->Object = (IBackChannelPacket *)pTVar5;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// DispatchMessages @ 14e7f5cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBackChannelOSCConnection::DispatchMessages(FBackChannelOSCConnection *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  LPCRITICAL_SECTION local_res10;
  void *local_58 [2];
  void *local_48 [2];
  
  local_res10 = (LPCRITICAL_SECTION)&this->PacketMutex;
  if (local_res10 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res10);
  iVar2 = (this->ReceivedPackets).ArrayNum;
  pFVar9 = (this->ReceivedPackets).AllocatorInstance.Data;
  pFVar8 = pFVar9 + (longlong)iVar2 * 0x10;
  do {
    if ((this->ReceivedPackets).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FBackChannelOSCPacket,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) {
      DestructItems<TSharedPtr<FBackChannelOSCPacket,1>,int>
                ((TSharedPtr<FBackChannelOSCPacket,1> *)
                 (this->ReceivedPackets).AllocatorInstance.Data,(this->ReceivedPackets).ArrayNum);
      lpCriticalSection = local_res10;
      piVar1 = &(this->ReceivedPackets).ArrayMax;
      (this->ReceivedPackets).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->ReceivedPackets).AllocatorInstance,0,piVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00014e7f5f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
    if ((*(longlong *)pFVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (**(code **)(**(longlong **)pFVar9 + 0x10))();
    if (iVar7 == 1) {
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      lVar4 = *(longlong *)pFVar9;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (6 < (byte)LogBackChannel._0_1_) {
        if ((lVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)(lVar4 + 8) + 0x68))(lVar4 + 8,local_58);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
      }
      bVar6 = FBackChannelDispatchMap::DispatchMessage
                        (&this->DispatchMap,(IBackChannelPacket *)(lVar4 + 8));
      if ((!bVar6) && (4 < (byte)LogBackChannel._0_1_)) {
        if ((lVar4 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)(lVar4 + 8) + 0x68))(lVar4 + 8,local_48);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
        }
      }
      if ((lVar4 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)(lVar4 + 0x10) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsReading()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCMessage.cpp"
                             ,0x35,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(lVar4 + 0x38) = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GetDescription @ 14e7f61d0

FString * __thiscall
FBackChannelOSCConnection::GetDescription
          (FBackChannelOSCConnection *this,FString *__return_storage_ptr__)

{
  IBackChannelSocketConnection *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  void *local_18 [2];
  
  if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  pIVar1 = (this->Connection).Object;
  (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"OSCConnection to %s");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetMessageCountForPath @ 14e7f6380

int __thiscall
FBackChannelOSCConnection::GetMessageCountForPath(FBackChannelOSCConnection *this,wchar_t *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 local_res8 [8];
  wchar_t *local_res10;
  LPCRITICAL_SECTION local_res18;
  void *local_48 [2];
  
  local_res18 = (LPCRITICAL_SECTION)&this->PacketMutex;
  local_res10 = param_1;
  if (local_res18 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_res18);
  pwVar4 = local_res10;
  iVar7 = (this->ReceivedPackets).ArrayNum;
  iVar13 = 0;
  pFVar11 = (this->ReceivedPackets).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar7 * 0x10;
  do {
    if ((this->ReceivedPackets).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FBackChannelOSCPacket,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      LeaveCriticalSection(local_res18);
      return iVar13;
    }
    if ((*(longlong *)pFVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
    iVar8 = (**(code **)(**(longlong **)pFVar11 + 0x10))();
    iVar5 = iVar13;
    if (iVar8 == 1) {
      pTVar1 = *(TReferenceControllerBase<1> **)(pFVar11 + 8);
      lVar2 = *(longlong *)pFVar11;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((lVar2 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      puVar9 = (undefined8 *)(**(code **)(*(longlong *)(lVar2 + 8) + 0x68))(lVar2 + 8,local_48);
      if (*(int *)(puVar9 + 1) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*puVar9;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar4);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      iVar5 = iVar13 + 1;
      if (iVar8 != 0) {
        iVar5 = iVar13;
      }
    }
    iVar13 = iVar5;
    pFVar11 = pFVar11 + 0x10;
  } while( true );
}

// GetMessageLimitForPath @ 14e7f6530

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FBackChannelOSCConnection::GetMessageLimitForPath(FBackChannelOSCConnection *this,wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  FString *pFVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FString local_c8;
  FString local_b8;
  int local_a8;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  lpCriticalSection = &this->PacketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ::FString::FString(&local_c8,param_1);
  bVar8 = ::FString::EndsWith(&local_c8,L"*",1,IgnoreCase);
  if (bVar8) {
    iVar9 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    if (iVar9 + -1 < iVar9) {
      iVar9 = iVar9 + -1;
    }
    iVar12 = 0;
    if (0 < iVar9) {
      iVar12 = iVar9;
    }
    ::FString::RemoveAt(&local_c8,iVar12,1,Default);
  }
  puVar1 = &(this->MessageLimits).field_0x10;
  iStack_98 = 0;
  iVar9 = *(int *)&(this->MessageLimits).field_0x28;
  pTVar2 = &this->MessageLimits;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->MessageLimits).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iStack_98 = 0;
    local_80 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14e7f665e;
      uVar11 = puVar15[lVar10 + 1];
    }
    uStack_94 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_84 = local_80 + -1 + (int)lVar10;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_14e7f665e:
  iStack_78 = *(int *)&(this->MessageLimits).field_0x8 - *(int *)&(this->MessageLimits).field_0x34;
  uVar11 = *(uint *)&(this->MessageLimits).field_0x28;
  uStack_88 = 0xffffffff;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar9 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    iVar9 = (*pcVar5)();
    return iVar9;
  }
  uVar4 = *(uint *)&(this->MessageLimits).field_0x28;
  if (uVar11 != uVar4) {
    puVar14 = *(undefined1 **)&(this->MessageLimits).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e7f6770;
      uVar11 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14e7f6770:
  do {
    pTVar7 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar11) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      iVar9 = -1;
      goto LAB_14e7f681f;
    }
    pFVar13 = (FString *)(*(longlong *)pTVar7 + (longlong)TStack_68.CurrentBitIndex * 0x20);
    ::FString::FString(&local_b8,pFVar13);
    local_a8 = *(int *)&pFVar13[1].Data.AllocatorInstance.Data;
    iVar9 = local_b8.Data.ArrayNum + -1;
    FVar6.Data = local_b8.Data.AllocatorInstance.Data;
    if (local_b8.Data.ArrayNum == 0) {
      iVar9 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    bVar8 = ::FString::StartsWith(&local_c8,(wchar_t *)FVar6.Data,iVar9,IgnoreCase);
    iVar9 = local_a8;
    if (bVar8) {
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
LAB_14e7f681f:
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return iVar9;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetProtocolName @ 14e7f68c0

FString * __thiscall
FBackChannelOSCConnection::GetProtocolName
          (FBackChannelOSCConnection *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BOSC");
  return __return_storage_ptr__;
}

// IsConnected @ 14e7f6ba0

bool __thiscall FBackChannelOSCConnection::IsConnected(FBackChannelOSCConnection *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if ((this->Connection).Object == (IBackChannelSocketConnection *)0x0) {
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
  cVar4 = (**(code **)((longlong)*(this->Connection).Object + 0x28))();
  if ((cVar4 != '\0') && (this->HasErrorState == false)) {
    return true;
  }
  return false;
}

// IsThreaded @ 14e7f6c40

bool __thiscall FBackChannelOSCConnection::IsThreaded(FBackChannelOSCConnection *this)

{
  return this->IsRunning != (FThreadSafeBool)0x0;
}

// ReceiveAndDispatchMessages @ 14e7f7800

void __thiscall
FBackChannelOSCConnection::ReceiveAndDispatchMessages(FBackChannelOSCConnection *this,float param_1)

{
  ReceiveMessages(this,param_1);
  DispatchMessages(this);
  return;
}

// ReceiveMessages @ 14e7f7930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBackChannelOSCConnection::ReceiveMessages(FBackChannelOSCConnection *this,float param_1)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  FBackChannelOSCMessage *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  FBackChannelOSCBundle *pFVar12;
  size_t sVar13;
  TSharedPtr<FBackChannelOSCMessage,1> *pTVar14;
  undefined8 *puVar15;
  uint uVar16;
  wchar_t *pwVar17;
  wchar_t *pwVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  FScriptContainerElement *pFVar21;
  FBackChannelOSCBundle *pFVar22;
  undefined1 local_res18 [8];
  int local_res20;
  FBackChannelOSCMessage *local_f8;
  TReferenceControllerBase<1> *pTStack_f0;
  wchar_t *local_e8;
  int local_e0;
  TSharedPtr<FBackChannelOSCBundle,1> local_d8;
  LARGE_INTEGER local_c8;
  FTimespan local_c0;
  TRawPtrProxy<FBackChannelOSCBundle> local_b8;
  wchar_t *local_b0;
  LPCRITICAL_SECTION local_a8;
  TReferenceControllerBase<1> *local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  TSharedPtr<FBackChannelOSCMessage,1> local_80;
  void *local_70 [7];
  
  QueryPerformanceCounter(&local_c8);
  iVar10 = 0;
  local_res20 = 0;
  dVar5 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (this == (FBackChannelOSCConnection *)0xffffffffffffff20) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  do {
    pFVar22 = (FBackChannelOSCBundle *)0x0;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->ReceiveMutex);
    if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar11 = (longlong *)(**(code **)((longlong)*(this->Connection).Object + 0x48))();
    pcVar4 = *(code **)(*plVar11 + 0x80);
    FTimespan::Assign(&local_c0,0,0,0,(int)param_1,0);
    (*pcVar4)(plVar11,0,local_c0.Ticks);
    if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (**(code **)((longlong)*(this->Connection).Object + 0x38))();
    if (0 < iVar8) {
      this->ReceivedDataSize = this->ReceivedDataSize + iVar8;
      iVar8 = this->ExpectedSizeOfNextPacket;
      if (this->ReceivedDataSize == iVar8) {
        pFVar21 = (this->ReceiveBuffer).AllocatorInstance.Data;
        this->ReceivedDataSize = 0;
        if (iVar8 == 4) {
          uVar19 = *(uint *)pFVar21;
          if (uVar19 < 0x8000001) {
            piVar1 = &(this->ReceiveBuffer).ArrayNum;
            iVar8 = *piVar1;
            if (iVar8 < (int)uVar19) {
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar19 - iVar8,&(this->ReceiveBuffer).AllocatorInstance,piVar1,
                         &(this->ReceiveBuffer).ArrayMax);
              this->ExpectedSizeOfNextPacket = uVar19;
              goto LAB_14e7f8198;
            }
          }
          else {
            if (1 < (byte)LogBackChannel._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
            }
            this->HasErrorState = true;
            uVar19 = 4;
          }
          this->ExpectedSizeOfNextPacket = uVar19;
        }
        else {
          if (pFVar21 == (FScriptContainerElement *)0x0) {
LAB_14e7f8173:
            local_f8 = (FBackChannelOSCMessage *)0x0;
            pTStack_f0 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            if (iVar8 < 7) {
              if (-1 < iVar8) goto LAB_14e7f7cd9;
              goto LAB_14e7f8173;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp((char *)pFVar21,"#bundle");
            if (iVar9 == 0) {
              pFVar12 = ::operator_new(0x28);
              local_b8.Object = pFVar22;
              if (pFVar12 != (FBackChannelOSCBundle *)0x0) {
                (pFVar12->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                pFVar12->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
                (pFVar12->Elements).ArrayNum = 0;
                (pFVar12->Elements).ArrayMax = 0;
                pFVar12->Mode = Read;
                local_b8.Object = pFVar12;
              }
              TSharedPtr<FBackChannelOSCBundle,1>::
              TSharedPtr<FBackChannelOSCBundle,1><FBackChannelOSCBundle>(&local_d8,&local_b8);
              iVar9 = strcmp((char *)pFVar21,FBackChannelOSCBundle::BundleHeader);
              if ((iVar9 != 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FCStringAnsi::Strcmp(Header, BundleHeader) == 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCBundle.cpp"
                                     ,0x7a,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              sVar13 = strlen(FBackChannelOSCBundle::BundleHeader);
              if (((FBackChannelOSCMessage *)local_d8.Object == (FBackChannelOSCMessage *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar20 = pFVar21 + (longlong)((int)sVar13 + 1) + 8;
              (local_d8.Object)->TimeTag = 0;
              do {
                if (pFVar21 + iVar8 <= pFVar20) goto LAB_14e7f7ca7;
                iVar9 = *(int *)pFVar20;
                if (((FBackChannelOSCMessage *)local_d8.Object == (FBackChannelOSCMessage *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                FBackChannelOSCBundle::AddElement(local_d8.Object,pFVar20 + 4,iVar9);
                pFVar20 = pFVar20 + 4 + iVar9;
              } while (pFVar20 <= pFVar21 + iVar8);
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("pData <= pDataEnd",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCBundle.cpp"
                                 ,0x8d,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
LAB_14e7f7ca7:
              local_f8 = (FBackChannelOSCMessage *)local_d8.Object;
              pTStack_f0 = local_d8.SharedReferenceCount.ReferenceController;
              if (local_d8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                     + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_d8.SharedReferenceCount.ReferenceController);
            }
            else {
LAB_14e7f7cd9:
              iVar9 = FGenericPlatformStricmp::Strnicmp((char *)pFVar21,"",0);
              if (iVar9 != 0) goto LAB_14e7f8173;
              pTVar14 = FBackChannelOSCMessage::CreateFromBuffer(&local_80,pFVar21,iVar8);
              local_f8 = pTVar14->Object;
              pTStack_f0 = (pTVar14->SharedReferenceCount).ReferenceController;
              if (pTStack_f0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_f0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_80.SharedReferenceCount.ReferenceController);
              local_res20 = iVar10;
            }
            if (local_f8 != (FBackChannelOSCMessage *)0x0) {
              lpCriticalSection = (LPCRITICAL_SECTION)&this->PacketMutex;
              local_a8 = lpCriticalSection;
              if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              EnterCriticalSection(lpCriticalSection);
              if ((local_f8 == (FBackChannelOSCMessage *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = (**(code **)(local_f8->_padding_ + 0x10))();
              pFVar6 = local_f8;
              if (iVar8 == 1) {
                local_a0 = pTStack_f0;
                if (pTStack_f0 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTStack_f0->SharedReferenceCount =
                       (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((local_f8 == (FBackChannelOSCMessage *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (**(code **)(pFVar6->_padding_ + 0x68))(&pFVar6->_padding_,&local_e8);
                if (6 < (byte)LogBackChannel._0_1_) {
                  if ((pFVar6 == (FBackChannelOSCMessage *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  UE::Logging::Private::BasicLog<7>
                            (&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
                }
                local_b0 = L"";
                if (local_e0 != 0) {
                  local_b0 = local_e8;
                }
                EnterCriticalSection(lpCriticalSection);
                pwVar18 = local_b0;
                pFVar21 = (this->ReceivedPackets).AllocatorInstance.Data;
                iVar10 = (this->ReceivedPackets).ArrayNum;
                pFVar20 = pFVar21 + (longlong)iVar10 * 0x10;
                while( true ) {
                  if ((this->ReceivedPackets).ArrayNum != iVar10) {
                    local_res18[0] = 0;
                    `TCheckedPointerIterator<TSharedPtr<FBackChannelOSCPacket,1>,int,0>::operator!='
                    ::__l2::<lambda_1>::operator()(local_res18);
                  }
                  lpCriticalSection = local_a8;
                  uVar19 = (uint)pFVar22;
                  if (pFVar21 == pFVar20) break;
                  if ((*(longlong *)pFVar21 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar8 = (**(code **)(**(longlong **)pFVar21 + 0x10))();
                  if (iVar8 == 1) {
                    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar21 + 8);
                    lVar3 = *(longlong *)pFVar21;
                    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar2->SharedReferenceCount =
                           (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    if ((lVar3 == 0) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    puVar15 = (undefined8 *)
                              (**(code **)(*(longlong *)(lVar3 + 8) + 0x68))(lVar3 + 8,local_70);
                    if (*(int *)(puVar15 + 1) == 0) {
                      pwVar17 = L"";
                    }
                    else {
                      pwVar17 = (wchar_t *)*puVar15;
                    }
                    iVar8 = FGenericPlatformStricmp::Stricmp(pwVar17,pwVar18);
                    if (local_70[0] != (void *)0x0) {
                      FMemory::Free(local_70[0]);
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar2);
                    uVar16 = uVar19 + 1;
                    if (iVar8 != 0) {
                      uVar16 = uVar19;
                    }
                    pFVar22 = (FBackChannelOSCBundle *)(ulonglong)uVar16;
                  }
                  pFVar21 = pFVar21 + 0x10;
                }
                LeaveCriticalSection(local_a8);
                pwVar18 = L"";
                if (local_e0 != 0) {
                  pwVar18 = local_e8;
                }
                iVar10 = GetMessageLimitForPath(this,pwVar18);
                if (0 < (int)uVar19) {
                  if ((4 < (byte)LogBackChannel._0_1_) && (GBackChannelLogPackets != 0)) {
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
                  }
                  if ((0 < iVar10) && (iVar10 <= (int)uVar19)) {
                    if (6 < (byte)LogBackChannel._0_1_) {
                      UE::Logging::Private::BasicLog<7>
                                (&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
                    }
                    pwVar18 = L"";
                    if (local_e0 != 0) {
                      pwVar18 = local_e8;
                    }
                    RemoveMessagesWithPath(this,pwVar18,1);
                  }
                }
                if (local_e8 != (wchar_t *)0x0) {
                  FMemory::Free(local_e8);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_a0);
                iVar10 = local_res20;
              }
              else if (6 < (byte)LogBackChannel._0_1_) {
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel)
                ;
              }
              pFVar21 = (this->ReceivedPackets).AllocatorInstance.Data;
              if (((pFVar21 <= (FScriptContainerElement *)&local_f8) &&
                  ((FScriptContainerElement *)&local_f8 <
                   pFVar21 + (longlong)(this->ReceivedPackets).ArrayMax * 0x10)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar8 = (this->ReceivedPackets).ArrayNum;
              piVar1 = &(this->ReceivedPackets).ArrayMax;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&(this->ReceivedPackets).AllocatorInstance,piVar1);
              }
              (this->ReceivedPackets).ArrayNum = iVar8 + 1;
              pFVar21 = (this->ReceivedPackets).AllocatorInstance.Data;
              *(FBackChannelOSCMessage **)(pFVar21 + (longlong)iVar8 * 0x10) = local_f8;
              *(TReferenceControllerBase<1> **)(pFVar21 + (longlong)iVar8 * 0x10 + 8) = pTStack_f0;
              if (pTStack_f0 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_f0->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_f0->SharedReferenceCount + 1);
                UNLOCK();
              }
              LeaveCriticalSection(lpCriticalSection);
            }
          }
          iVar10 = iVar10 + 1;
          this->ExpectedSizeOfNextPacket = 4;
          local_res20 = iVar10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_f0);
        }
      }
    }
LAB_14e7f8198:
    QueryPerformanceCounter(&local_98);
    if ((((double)param_1 <=
          (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) ||
        (iVar10 != 0)) || (this->HasErrorState != false)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReceiveMutex);
      QueryPerformanceCounter(&local_90);
      if (6 < (byte)LogBackChannel._0_1_) {
        QueryPerformanceCounter(&local_88);
        UE::Logging::Private::BasicLog<7>
                  ((FStaticBasicLogRecord *)&PTR_u_Received__d_pac_152f5fe48,
                   (FLogCategoryBase *)&LogBackChannel);
      }
      return;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->ReceiveMutex);
  } while( true );
}

// RemoveMessagesWithPath @ 14e7f8460

void __thiscall
FBackChannelOSCConnection::RemoveMessagesWithPath
          (FBackChannelOSCConnection *this,wchar_t *param_1,int param_2)

{
  TArray<TSharedPtr<FBackChannelOSCPacket,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  void *local_38 [2];
  
  lpCriticalSection = &this->PacketMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->ReceivedPackets;
  uVar11 = 0;
  iVar12 = 0;
  do {
    if (((int)uVar11 < 0) || ((this->ReceivedPackets).ArrayNum <= (int)uVar11)) goto LAB_14e7f8694;
    if ((int)uVar11 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar10 + (longlong)(int)uVar11 * 0x10 + 8);
    plVar3 = *(longlong **)(pFVar10 + (longlong)(int)uVar11 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (iVar6 == 1) {
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar3 == (longlong *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar8 = (undefined8 *)(**(code **)(plVar3[1] + 0x68))(plVar3 + 1,local_38);
      if (*(int *)(puVar8 + 1) == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)*puVar8;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar9,param_1);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (iVar6 != 0) goto LAB_14e7f86c1;
      uVar7 = 0;
      if ((int)uVar11 < (this->ReceivedPackets).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar10 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar10 + 8));
      iVar6 = (this->ReceivedPackets).ArrayNum + ~uVar11;
      if (iVar6 != 0) {
        memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar6 << 4);
      }
      iVar6 = (this->ReceivedPackets).ArrayNum + -1;
      (this->ReceivedPackets).ArrayNum = iVar6;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar1->AllocatorInstance,iVar6,&(this->ReceivedPackets).ArrayMax);
      uVar11 = uVar11 - 1;
      iVar12 = iVar12 + 1;
      if ((0 < param_2) && (iVar12 == param_2)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14e7f8694:
                    /* WARNING: Could not recover jumptable at 0x00014e7f86ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
    }
    else {
LAB_14e7f86c1:
      uVar11 = uVar11 + 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  } while( true );
}

// RemoveRouteDelegate @ 14e7f88f0

void __thiscall
FBackChannelOSCConnection::RemoveRouteDelegate
          (FBackChannelOSCConnection *this,TStringView<wchar_t> *param_1,FDelegateHandle *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  TStringView<wchar_t> local_18;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((this->SendMutex).CriticalSection.Opaque3 + 2);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    local_18.DataPtr = param_1->DataPtr;
    local_18.Size = param_1->Size;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FBackChannelDispatchMap::RemoveRoute
              ((FBackChannelDispatchMap *)&(this->Connection).SharedReferenceCount,&local_18,
               (FDelegateHandle)param_2->ID);
                    /* WARNING: Could not recover jumptable at 0x00014e7f8953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Run @ 14e7f8e60

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FBackChannelOSCConnection::Run(FBackChannelOSCConnection *this)

{
  FThreadSafeBool FVar1;
  IBackChannelSocketConnection *pIVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  ForAnyElementType local_48;
  undefined8 local_40;
  void *local_38 [2];
  void *local_28 [4];
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x1000,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
  if (5 < (byte)LogBackChannel._0_1_) {
    if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    pIVar2 = (this->Connection).Object;
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,local_38);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  fVar4 = __real_3f800000;
  FVar1 = this->ExitRequested;
  while (FVar1 == (FThreadSafeBool)0x0) {
    ReceiveMessages(this,fVar4);
    DispatchMessages(this);
    FVar1 = this->ExitRequested;
  }
  if (5 < (byte)LogBackChannel._0_1_) {
    if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    pIVar2 = (this->Connection).Object;
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  LOCK();
  this->IsRunning = (FThreadSafeBool)0x0;
  UNLOCK();
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return 0;
}

// SendPacket @ 14e7f92d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FBackChannelOSCConnection::SendPacket
          (FBackChannelOSCConnection *this,FBackChannelOSCPacket *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IBackChannelSocketConnection *pIVar1;
  code *pcVar2;
  ForAnyElementType _Str;
  int iVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  ForAnyElementType local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  iVar8 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,&local_28,(int *)&local_20,(int *)((longlong)&local_20 + 4));
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_28);
  *(int *)local_28.Data = (int)local_20 + -4;
  if (6 < (byte)LogBackChannel._0_1_) {
    (**(code **)((longlong)param_1[1] + 0x68))(param_1 + 1,local_18);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  uVar4 = local_20;
  _Str.Data = local_28.Data;
  iVar3 = (int)local_20;
  lpCriticalSection = &this->SendMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  cVar7 = (**(code **)((longlong)*(this->Connection).Object + 0x28))();
  if ((cVar7 == '\0') || (this->HasErrorState != false)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar5 = false;
  }
  else {
    if (0 < iVar3) {
      sVar9 = strlen((char *)_Str.Data);
      if ((0x3f < (int)sVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("FCStringAnsi::Strlen(RawData) < 64",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCConnection.cpp"
                             ,0x153,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pIVar1 = (this->Connection).Object;
      iVar8 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,_Str.Data,uVar4 & 0xffffffff);
    }
    bVar5 = 0 < iVar8;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return bVar5;
}

// SendPacket @ 14e7f94e0

int __thiscall
FBackChannelOSCConnection::SendPacket
          (FBackChannelOSCConnection *this,TSharedPtr<IBackChannelPacket,1> *param_1)

{
  bool bVar1;
  IBackChannelPacket *pIVar2;
  
  pIVar2 = param_1->Object + -1;
  if (param_1->Object == (IBackChannelPacket *)0x0) {
    pIVar2 = (IBackChannelPacket *)(FBackChannelOSCPacket *)0x0;
  }
  bVar1 = SendPacket((FBackChannelOSCConnection *)&this[-1].ExpectedSizeOfNextPacket,
                     (FBackChannelOSCPacket *)pIVar2);
  return bVar1 - 1;
}

// SendPacketData @ 14e7f9520

bool __thiscall
FBackChannelOSCConnection::SendPacketData(FBackChannelOSCConnection *this,void *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IBackChannelSocketConnection *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  
  lpCriticalSection = &this->SendMutex;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->Connection).Object == (IBackChannelSocketConnection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  cVar5 = (**(code **)((longlong)*(this->Connection).Object + 0x28))();
  if ((cVar5 == '\0') || (this->HasErrorState != false)) {
    bVar3 = false;
  }
  else {
    iVar6 = 0;
    if (0 < param_2) {
      sVar7 = strlen(param_1);
      if (0x3f < (int)sVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FCStringAnsi::Strlen(RawData) < 64",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCConnection.cpp"
                           ,0x153,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if ((this->Connection).Object == (IBackChannelSocketConnection *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pIVar1 = (this->Connection).Object;
      iVar6 = (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,param_2);
    }
    bVar3 = 0 < iVar6;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// SetBufferSizes @ 14e7f9710

void __thiscall
FBackChannelOSCConnection::SetBufferSizes(FBackChannelOSCConnection *this,int param_1,int param_2)

{
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e7f971c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x58))();
    return;
  }
  return;
}

// SetMessageOptions @ 14e7f9730

void __thiscall
FBackChannelOSCConnection::SetMessageOptions
          (FBackChannelOSCConnection *this,wchar_t *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int local_res8 [2];
  FString *local_res20;
  FString local_28;
  
  lpCriticalSection = &this->PacketMutex;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(&local_28,param_1);
    iVar3 = local_28.Data.ArrayNum + -1;
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    iVar3 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)&this->MessageLimits,uVar2,&local_28);
    if ((iVar3 == -1) ||
       (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&this->MessageLimits, lVar4 == 0)) {
      local_res20 = &local_28;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      EmplaceByHash<TKeyInitializer<FString_&&>_>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)&this->MessageLimits,(uint)local_res8,
                 (TKeyInitializer<FString_&&> *)(ulonglong)uVar2,(bool *)&local_res20);
      lVar4 = (longlong)local_res8[0] * 0x20 + *(longlong *)&this->MessageLimits;
    }
    *(int *)(lVar4 + 0x10) = param_2;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
                    /* WARNING: Could not recover jumptable at 0x00014e7f981d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StartReceiveThread @ 14e7f9d30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FBackChannelOSCConnection::StartReceiveThread(FBackChannelOSCConnection *this)

{
  IBackChannelSocketConnection *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FRunnableThread *pFVar5;
  FString local_28;
  void *local_18 [2];
  
  if ((this->IsRunning != (FThreadSafeBool)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsRunning == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\BackChannel\\Source\\BackChannel\\Private\\Protocol\\BackChannelOSCConnection.cpp"
                         ,0xe7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  LOCK();
  this->ExitRequested = (FThreadSafeBool)0x0;
  UNLOCK();
  pFVar5 = FRunnableThread::Create
                     ((FRunnable *)this,L"OSCHostConnection",0x100000,TPri_AboveNormal,
                      0xffffffffffffffff,None);
  if (pFVar5 != (FRunnableThread *)0x0) {
    LOCK();
    this->IsRunning = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  if (5 < (byte)LogBackChannel._0_1_) {
    if (((this->Connection).Object == (IBackChannelSocketConnection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pIVar1 = (this->Connection).Object;
    (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,local_18);
    ::FString::PrintfImpl(&local_28,L"OSCConnection to %s");
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return pFVar5 != (FRunnableThread *)0x0;
}

// Stop @ 14e7f9e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBackChannelOSCConnection::Stop(FBackChannelOSCConnection *this)

{
  FThreadSafeBool FVar1;
  float fVar2;
  undefined8 local_28;
  FSharedReferencer<1> aFStack_20 [3];
  
  if (this->IsRunning != (FThreadSafeBool)0x0) {
    if (5 < (byte)LogBackChannel._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
    }
    LOCK();
    this->ExitRequested = (FThreadSafeBool)0x1;
    fVar2 = __real_3c23d70a;
    UNLOCK();
    FVar1 = this->IsRunning;
    while (FVar1 != (FThreadSafeBool)0x0) {
      FWindowsPlatformProcess::SleepNoStats(fVar2);
      FVar1 = this->IsRunning;
    }
  }
  if (5 < (byte)LogBackChannel._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
  }
  local_28 = 0;
  aFStack_20[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Connection != (TSharedPtr<IBackChannelSocketConnection,1> *)&local_28) {
    (this->Connection).Object = (IBackChannelSocketConnection *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Connection).SharedReferenceCount,aFStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_20[0].ReferenceController);
  return;
}

