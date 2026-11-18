// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 2

// ~FOnlineFactoryNull @ 14ed12bb0

void __thiscall FOnlineFactoryNull::~FOnlineFactoryNull(FOnlineFactoryNull *this)

{
  *this = (FOnlineFactoryNull)&___7IOnlineFactory__6B_;
  return;
}

// CreateSubsystem @ 14ed21360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IOnlineSubsystem,1> * __thiscall
FOnlineFactoryNull::CreateSubsystem
          (FOnlineFactoryNull *this,TSharedPtr<IOnlineSubsystem,1> *__return_storage_ptr__,
          FName param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IOnlineSubsystem,1> *pTVar5;
  FSharedReferencer<1> FVar6;
  IOnlineSubsystem *pIVar7;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  FString local_48;
  undefined8 local_38;
  FSharedReferencer<1> local_30 [3];
  
  pTVar4 = ::operator_new(0x1a0);
  FVar6.ReferenceController = _UNK_150651568;
  pIVar7 = ___xmm_00000000000000000000000000000010;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FStack_70.ReferenceController = _UNK_150651568;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFOnlineSubsystemNull___00_SharedPointerInternals__6B_
    ;
    FOnlineSubsystemImpl::FOnlineSubsystemImpl
              ((FOnlineSubsystemImpl *)(pTVar4 + 1),NULL_SUBSYSTEM,param_1);
    pTVar4[1]._padding_ = (longlong)&FOnlineSubsystemNull::_vftable__for__IOnlineSubsystem__;
    pIVar7 = (IOnlineSubsystem *)(pTVar4 + 1);
    pTVar4[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xf].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined ***)&pTVar4[9].SharedReferenceCount =
         &FOnlineSubsystemNull::_vftable__for__FTSTickerObjectBase__;
    pTVar4[0x10]._padding_ = 0;
    pTVar4[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x11]._padding_ = 0;
    *(undefined1 *)&pTVar4[0x11].SharedReferenceCount = 0;
    pTVar4[0x12]._padding_ = 0;
    pTVar4[0x12].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x12].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x13]._padding_ = 0;
    pTVar4[0x13].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x13].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x14]._padding_ = 0;
    pTVar4[0x14].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x14].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x15]._padding_ = 0;
    pTVar4[0x15].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x15].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x16]._padding_ = 0;
    pTVar4[0x16].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x16].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x17]._padding_ = 0;
    pTVar4[0x17].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x17].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x18]._padding_ = 0;
    pTVar4[0x18].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x18].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x19]._padding_ = 0;
    pTVar4[0x19].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x19].WeakReferenceCount = (atomic<int>)0x0;
    if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IOnlineSubsystem,1> *)(*pcVar1)();
      return pTVar5;
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_70.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FVar6.ReferenceController = pTVar4;
    if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IOnlineSubsystem,1> *)(*pcVar1)();
      return pTVar5;
    }
  }
  cVar3 = (**(code **)(pIVar7->_padding_ + 8))(pIVar7);
  if (cVar3 == '\0') {
    if (2 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_48,L"Null API disabled!");
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_class_TSharedPtr<IOnlineSubsystem,1>___cdecl_FOnlineFactoryNull::CreateSubsystem(FName)___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IOnlineSubsystem,1> *)(*pcVar1)();
      return pTVar5;
    }
    (**(code **)(pIVar7->_padding_ + 0x150))(pIVar7);
    local_30[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,local_30);
    FVar6.ReferenceController = local_30[0].ReferenceController;
  }
  else {
    if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IOnlineSubsystem,1> *)(*pcVar1)();
      return pTVar5;
    }
    cVar3 = (**(code **)(pIVar7->_padding_ + 0x140))(pIVar7);
    if (cVar3 != '\0') goto LAB_14ed216e4;
    if (2 < (byte)LogOnline._0_1_) {
      ::FString::PrintfImpl(&local_68,L"Null API failed to initialize!");
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_class_TSharedPtr<IOnlineSubsystem,1>___cdecl_FOnlineFactoryNull::CreateSubsystem(FName)___ptr64'
                  ::__l10::LOG_Static,(FLogCategoryBase *)&LogOnline);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedPtr<IOnlineSubsystem,1> *)(*pcVar1)();
      return pTVar5;
    }
    (**(code **)(pIVar7->_padding_ + 0x150))(pIVar7);
    local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_50);
    FVar6.ReferenceController = local_50.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  pIVar7 = (IOnlineSubsystem *)0x0;
  FVar6.ReferenceController = FStack_70.ReferenceController;
LAB_14ed216e4:
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar6.ReferenceController;
  if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar6.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return __return_storage_ptr__;
}

