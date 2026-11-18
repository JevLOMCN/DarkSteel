// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 118

// `dynamic_initializer_for_'CVarAddUserNumToNullId'' @ 14144f430

void __cdecl _dynamic_initializer_for__CVarAddUserNumToNullId__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAddUserNumToNullId,L"OSSNull.AddUserNumToNullId",
             &FOnlineSubsystemNull::bAddUserNumToNullId,
             L"True if login name should include the local user number, which allows different stable Ids per user num"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarAddUserNumToNullId__);
  return;
}

// `dynamic_initializer_for_'CVarAutoLoginAtStartup'' @ 14144f480

void __cdecl _dynamic_initializer_for__CVarAutoLoginAtStartup__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAutoLoginAtStartup,L"OSSNull.AutoLoginAtStartup",
             &FOnlineSubsystemNull::bAutoLoginAtStartup,
             L"True if it should login the first user at startup like single-user platforms, false to only login when requested"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarAutoLoginAtStartup__);
  return;
}

// `dynamic_initializer_for_'CVarForceOfflineMode'' @ 14144f4d0

void __cdecl _dynamic_initializer_for__CVarForceOfflineMode__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceOfflineMode,L"OSSNull.ForceOfflineMode",
             &FOnlineSubsystemNull::bForceOfflineMode,
             L"True if it should fail faked network queries and act like an offline system",1);
  atexit(_dynamic_atexit_destructor_for__CVarForceOfflineMode__);
  return;
}

// `dynamic_initializer_for_'CVarForceShowLoginUIUserChange'' @ 14144f520

void __cdecl _dynamic_initializer_for__CVarForceShowLoginUIUserChange__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceShowLoginUIUserChange,L"OSSNull.ForceShowLoginUIUserChange",
             &FOnlineSubsystemNull::bForceShowLoginUIUserChange,
             L"True if the user index should change during login UI to emulate a platform user change"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarForceShowLoginUIUserChange__);
  return;
}

// `dynamic_initializer_for_'CVarForceStableNullId'' @ 14144f570

void __cdecl _dynamic_initializer_for__CVarForceStableNullId__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarForceStableNullId,L"OSSNull.ForceStableNullId",
             &FOnlineSubsystemNull::bForceStableNullId,
             L"True if it should use a system-stable null Id for login, same as -StableNullID on command line"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarForceStableNullId__);
  return;
}

// `dynamic_initializer_for_'CVarOnlineRequiresSecondLogin'' @ 14144f5c0

void __cdecl _dynamic_initializer_for__CVarOnlineRequiresSecondLogin__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOnlineRequiresSecondLogin,L"OSSNull.OnlineRequiresSecondLogin",
             &FOnlineSubsystemNull::bOnlineRequiresSecondLogin,
             L"True if the first login only counts as local login, a second is required for online access"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarOnlineRequiresSecondLogin__);
  return;
}

// `dynamic_initializer_for_'CVarRequireLoginCredentials'' @ 14144f610

void __cdecl _dynamic_initializer_for__CVarRequireLoginCredentials__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRequireLoginCredentials,L"OSSNull.RequireLoginCredentials",
             &FOnlineSubsystemNull::bRequireLoginCredentials,
             L"True if login should require a user/pass to act like an external service, false to match most platforms and use the default"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarRequireLoginCredentials__);
  return;
}

// `dynamic_initializer_for_'CVarRequireShowLoginUI'' @ 14144f660

void __cdecl _dynamic_initializer_for__CVarRequireShowLoginUI__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarRequireShowLoginUI,L"OSSNull.RequireShowLoginUI",
             &FOnlineSubsystemNull::bRequireShowLoginUI,
             L"True if login requires calling ShowLoginUI on the externalUI, depends on SupportExternalUI"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarRequireShowLoginUI__);
  return;
}

// `dynamic_initializer_for_'CVarSupportExternalUI'' @ 14144f6b0

void __cdecl _dynamic_initializer_for__CVarSupportExternalUI__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSupportExternalUI,L"OSSNull.SupportExternalUI",
             &FOnlineSubsystemNull::bSupportExternalUI,
             L"True if it should support an external UI interface",1);
  atexit(_dynamic_atexit_destructor_for__CVarSupportExternalUI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOnlineSubsystemNull'' @ 14144f700

void __cdecl _dynamic_initializer_for__ModuleRegistrantOnlineSubsystemNull__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OnlineSubsystemNull";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OnlineSubsystemNull",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOnlineSubsystemNullModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_Unset'' @ 14144f750

void __cdecl _dynamic_initializer_for__NAME_Unset__(void)

{
  FName::FName(&NAME_Unset,L"UNSET");
  return;
}

// `scalar_deleting_destructor' @ 14ed0a8e0

void * __thiscall
FOnlineSubsystemNullModule::_scalar_deleting_destructor_
          (FOnlineSubsystemNullModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// ConstructItems<FColumnMetaData,FColumnMetaData,int> @ 14ed0b4f0

void __cdecl
ConstructItems<FColumnMetaData,FColumnMetaData,int>
          (void *param_1,FColumnMetaData *param_2,int param_3)

{
  Type *pTVar1;
  FString *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FString *)(lVar2 + (longlong)param_2);
      FString::FString(this,(FString *)param_2);
      pTVar1 = &param_2->DataType;
      param_2 = param_2 + 1;
      *(Type *)&this[1].Data.AllocatorInstance.Data = *pTVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPurchaseReceipt::FLineItemInfo,FPurchaseReceipt::FLineItemInfo,int> @ 14ed0b560

void __cdecl
ConstructItems<FPurchaseReceipt::FLineItemInfo,FPurchaseReceipt::FLineItemInfo,int>
          (void *param_1,FLineItemInfo *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->UniqueId;
    this = (int *)((longlong)param_1 + 0x18);
    do {
      *(undefined ***)((longlong)pFVar1 + (longlong)param_1 + (-0x18 - (longlong)param_2)) =
           &___7FLineItemInfo_FPurchaseReceipt__6B_;
      FString::FString((FString *)(this + -4),pFVar1 + -1);
      FString::FString((FString *)this,pFVar1);
      FString::FString((FString *)(this + 4),pFVar1 + 1);
      this = this + 0xe;
      pFVar1 = (FString *)((longlong)(pFVar1 + 3) + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FOnlineStatsRow,FOnlineStatsRow,int> @ 14ed0b600

void __cdecl
ConstructItems<FOnlineStatsRow,FOnlineStatsRow,int>
          (void *param_1,FOnlineStatsRow *param_2,int param_3)

{
  undefined4 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  FSharedReferencer<1> *pFVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)((longlong)param_1 + 0x18);
    pFVar4 = &(param_2->PlayerId).SharedReferenceCount;
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)pFVar4),
                       (FString *)(pFVar4 + -3));
      plVar3[-1] = (longlong)((TSharedPtr<FUniqueNetId_const_,1> *)(pFVar4 + -1))->Object;
      pTVar2 = pFVar4->ReferenceController;
      *plVar3 = (longlong)pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar1 = *(undefined4 *)(pFVar4 + 1);
      *(undefined8 *)
       &((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          *)(plVar3 + 2))->Elements = 0;
      *(undefined4 *)(plVar3 + 1) = uVar1;
      plVar3[3] = 0;
      plVar3[6] = 0;
      *(undefined4 *)(plVar3 + 7) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x80;
      *(undefined4 *)(plVar3 + 8) = 0xffffffff;
      *(undefined4 *)((longlong)plVar3 + 0x44) = 0;
      plVar3[10] = 0;
      *(undefined4 *)(plVar3 + 0xb) = 0;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                   *)(plVar3 + 2),
                  (TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                   *)(pFVar4 + 2));
      plVar3 = plVar3 + 0xf;
      pFVar4 = pFVar4 + 0xf;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPurchaseReceipt::FReceiptOfferEntry,FPurchaseReceipt::FReceiptOfferEntry,int> @ 14ed0b6d0

void __cdecl
ConstructItems<FPurchaseReceipt::FReceiptOfferEntry,FPurchaseReceipt::FReceiptOfferEntry,int>
          (void *param_1,FReceiptOfferEntry *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FLineItemInfo *pFVar4;
  FString *pFVar5;
  FString *this;
  
  if (param_3 != 0) {
    pFVar5 = &param_2->Namespace;
    this = (FString *)((longlong)param_1 + 8);
    do {
      *(undefined ***)((longlong)pFVar5 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           &___7FReceiptOfferEntry_FPurchaseReceipt__6B_;
      FString::FString(this,pFVar5);
      FString::FString(this + 1,pFVar5 + 1);
      piVar1 = &this[2].Data.ArrayNum;
      *(int *)&this[2].Data.AllocatorInstance.Data = *(int *)(pFVar5 + 2);
      piVar2 = (int *)((longlong)&this[3].Data.AllocatorInstance.Data + 4);
      this[2].Data.ArrayNum = 0;
      this[2].Data.ArrayMax = 0;
      iVar3 = *(int *)(pFVar5 + 3);
      pFVar4 = (FLineItemInfo *)
               (((TArray<FPurchaseReceipt::FLineItemInfo,TSizedDefaultAllocator<32>_> *)
                ((longlong)(pFVar5 + 2) + 8))->AllocatorInstance).Data;
      *(int *)&this[3].Data.AllocatorInstance.Data = iVar3;
      if (iVar3 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar3,0,(ForAnyElementType *)piVar1,iVar3,piVar2);
        ConstructItems<FPurchaseReceipt::FLineItemInfo,FPurchaseReceipt::FLineItemInfo,int>
                  (*(void **)piVar1,pFVar4,iVar3);
      }
      this = this + 4;
      pFVar5 = pFVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPurchaseReceipt,FPurchaseReceipt,int> @ 14ed0b7e0

void __cdecl
ConstructItems<FPurchaseReceipt,FPurchaseReceipt,int>
          (void *param_1,FPurchaseReceipt *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FReceiptOfferEntry *pFVar4;
  FString *pFVar5;
  FString *this;
  
  if (param_3 != 0) {
    pFVar5 = &param_2->TransactionId;
    this = (FString *)((longlong)param_1 + 8);
    do {
      *(undefined ***)((longlong)pFVar5 + (longlong)param_1 + (-8 - (longlong)param_2)) =
           &___7FPurchaseReceipt__6B_;
      FString::FString(this,pFVar5);
      piVar1 = &this[1].Data.ArrayNum;
      *(EPurchaseTransactionState *)&this[1].Data.AllocatorInstance.Data =
           *(EPurchaseTransactionState *)(pFVar5 + 1);
      piVar2 = (int *)((longlong)&this[2].Data.AllocatorInstance.Data + 4);
      this[1].Data.ArrayNum = 0;
      this[1].Data.ArrayMax = 0;
      iVar3 = *(int *)(pFVar5 + 2);
      pFVar4 = (FReceiptOfferEntry *)
               (((TArray<FPurchaseReceipt::FReceiptOfferEntry,TSizedDefaultAllocator<32>_> *)
                ((longlong)(pFVar5 + 1) + 8))->AllocatorInstance).Data;
      *(int *)&this[2].Data.AllocatorInstance.Data = iVar3;
      if (iVar3 == 0) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar3,0,(ForAnyElementType *)piVar1,iVar3,piVar2);
        ConstructItems<FPurchaseReceipt::FReceiptOfferEntry,FPurchaseReceipt::FReceiptOfferEntry,int>
                  (*(void **)piVar1,pFVar4,iVar3);
      }
      this = this + 3;
      pFVar5 = pFVar5 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FOnlineAchievementsNull::FOnlineAchievementNull,int> @ 14ed0bbc0

void __cdecl
DestructItems<FOnlineAchievementsNull::FOnlineAchievementNull,int>
          (FOnlineAchievementNull *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)&param_1->field_0x28;
    do {
      if ((longlong *)plVar1[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[2] + 0x10))();
      }
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      if ((void *)plVar1[-5] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-5]);
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FNamedOnlineSession,int> @ 14ed0bc30

void __cdecl DestructItems<FNamedOnlineSession,int>(FNamedOnlineSession *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RegisteredPlayers;
    do {
      *(undefined ***)((longlong)(pTVar2 + -0x14) + 8) = &___7FNamedOnlineSession__6B_;
      DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
                ((TSharedRef<FUniqueNetId_const_,1> *)(pTVar2->AllocatorInstance).Data,
                 pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((((TSharedPtr<FUniqueNetId_const_,1> *)(pTVar2 + -1))->SharedReferenceCount).
                 ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pTVar2 + -3));
      FOnlineSessionSettings::~FOnlineSessionSettings((FOnlineSessionSettings *)(pTVar2 + -0x11));
      if (*(void **)(pTVar2 + -0x12) != (void *)0x0) {
        FMemory::Free(*(void **)(pTVar2 + -0x12));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)(pTVar2 + -0x13) + 8));
      pTVar2 = pTVar2 + 0x15;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// MakeShared<FPurchaseReceipt,1> @ 14ed0d750

TSharedRef<FPurchaseReceipt,1> * __cdecl
MakeShared<FPurchaseReceipt,1>(TSharedRef<FPurchaseReceipt,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FPurchaseReceipt,1> *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPurchaseReceipt *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPurchaseReceipt___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPurchaseReceipt__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    *(undefined1 *)&pTVar3[2].SharedReferenceCount = 0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    __return_storage_ptr__->Object = (FPurchaseReceipt *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FPurchaseReceipt *)(pTVar3 + 1) == (FPurchaseReceipt *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FPurchaseReceipt,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<FPurchaseReceipt,1,FPurchaseReceipt_&> @ 14ed0d800

TSharedRef<FPurchaseReceipt,1> * __cdecl
MakeShared<FPurchaseReceipt,1,FPurchaseReceipt_&>
          (TSharedRef<FPurchaseReceipt,1> *__return_storage_ptr__,FPurchaseReceipt *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FPurchaseReceipt,1> *pTVar4;
  
  pTVar3 = operator_new(0x40);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FPurchaseReceipt *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPurchaseReceipt___00_SharedPointerInternals__6B_;
    FPurchaseReceipt::FPurchaseReceipt((FPurchaseReceipt *)(pTVar3 + 1),param_1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FPurchaseReceipt *)(pTVar3 + 1);
    if ((FPurchaseReceipt *)(pTVar3 + 1) == (FPurchaseReceipt *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FPurchaseReceipt,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_> @ 14ed0ddf0

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_FOnlineExternalUINull::OnIdentityLoginComplete(int,bool,FUniqueNetId_const_&,FString_const_&,TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlineExternalUINull::OnIdentityLoginComplete_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_private:_void___cdecl_FOnlineExternalUINull::OnIdentityLoginComplete(int,bool,FUniqueNetId_const_&,FString_const_&,TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>)_::_2_::<lambda_1>_>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::`2'::<lambda_1>_>
        ::_vftable_;
  *(FUniqueNetId **)((longlong)this + 0x18) = (param_1->Functor).StrongUserId.Object;
  pTVar1 = (param_1->Functor).StrongUserId.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(int *)((longlong)this + 0x28) = (param_1->Functor).LocalUserNum;
  *(bool *)((longlong)this + 0x2c) = (param_1->Functor).bWasSuccessful;
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              *)((longlong)this + 0x30),&(param_1->Functor).Delegate);
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_> @ 14ed0de60

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FOnlinePurchaseNull::RedeemCode(FUniqueNetId_const_&,FRedeemCodeRequest_const_&,TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::RedeemCode_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FOnlinePurchaseNull::RedeemCode(FUniqueNetId_const_&,FRedeemCodeRequest_const_&,TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>_>
          *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::`2'::<lambda_1>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x18) = &___7FUniqueNetIdString__6B_;
  ::FString::FString((FString *)((longlong)this + 0x30),
                     (FString *)&(param_1->Functor).NullUserId.field_0x18);
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)&(param_1->Functor).NullUserId.field_0x28;
  *(undefined ***)((longlong)this + 0x18) = &___7FUniqueNetIdNull__6B_;
  *(FOnlinePurchaseNull **)((longlong)this + 0x48) = (param_1->Functor).WeakMe.Object;
  pTVar1 = (param_1->Functor).WeakMe.WeakReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x50) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString((FString *)((longlong)this + 0x58),&(param_1->Functor).RedeemCodeRequest.Code);
  ::FString::FString((FString *)((longlong)this + 0x68),
                     &(param_1->Functor).RedeemCodeRequest.CodeUseId);
  ::FString::FString((FString *)((longlong)this + 0x78),
                     &(param_1->Functor).RedeemCodeRequest.FulfillmentSource);
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>
              *)((longlong)this + 0x88),&(param_1->Functor).Delegate);
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_> @ 14ed0df40

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FOnlinePurchaseNull::Checkout(FUniqueNetId_const_&,FPurchaseCheckoutRequest_const_&,TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FOnlinePurchaseNull::Checkout(FUniqueNetId_const_&,FPurchaseCheckoutRequest_const_&,TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_2>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::`2'::<lambda_2>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x18) = &___7FUniqueNetIdString__6B_;
  ::FString::FString((FString *)((longlong)this + 0x30),(FString *)(param_1 + 0x30));
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined ***)((longlong)this + 0x18) = &___7FUniqueNetIdNull__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x58),
             (TDelegate<void___cdecl(FOnlineError_const_&),FDefaultDelegateUserPolicy> *)
             (param_1 + 0x58));
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_> @ 14ed0dfe0

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FOnlinePurchaseNull::Checkout(FUniqueNetId_const_&,FPurchaseCheckoutRequest_const_&,TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_2>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FOnlinePurchaseNull::Checkout_::__l2::<lambda_2>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FOnlinePurchaseNull::Checkout(FUniqueNetId_const_&,FPurchaseCheckoutRequest_const_&,TDelegate<void___cdecl(FOnlineError_const_&,TSharedRef<FPurchaseReceipt,1>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_2>_>
          *param_1)

{
  longlong lVar1;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(undefined8 *)((longlong)this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::`2'::<lambda_2>_>
        ::_vftable_;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x18) = &___7FUniqueNetIdString__6B_;
  ::FString::FString((FString *)((longlong)this + 0x30),(FString *)(param_1 + 0x30));
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined ***)((longlong)this + 0x18) = &___7FUniqueNetIdNull__6B_;
  *(undefined8 *)((longlong)this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  lVar1 = *(longlong *)(param_1 + 0x50);
  *(longlong *)((longlong)this + 0x50) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(longlong *)((longlong)this + 0x60) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return this;
}

// TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_> @ 14ed0e090

TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayName(FString_const_&,TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayName_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayName(FString_const_&,TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>_>
          *param_1)

{
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::`2'::<lambda_1>_>
        ::_vftable_;
  *(FMessageSanitizerNull **)((longlong)this + 0x18) = (param_1->Functor).__this;
  ::FString::FString((FString *)((longlong)this + 0x20),&(param_1->Functor).DisplayName);
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy> *)
             ((longlong)this + 0x30),&(param_1->Functor).CompletionDelegate);
  *(int *)((longlong)this + 0x48) = (param_1->Functor).ThisRequest;
  return this;
}

// TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_> @ 14ed0e100

TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayNames(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_FMessageSanitizerNull::SanitizeDisplayNames_::__l2::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FMessageSanitizerNull::SanitizeDisplayNames(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&)_::_2_::<lambda_1>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x20);
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::`2'::<lambda_1>_>
        ::_vftable_;
  *(FMessageSanitizerNull **)((longlong)this + 0x18) = (param_1->Functor).__this;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).DisplayNames.ArrayNum;
  pFVar3 = (param_1->Functor).DisplayNames.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x28) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x2c));
    ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar3,iVar2);
  }
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool,TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)((longlong)this + 0x30),&(param_1->Functor).CompletionDelegate);
  *(int *)((longlong)this + 0x48) = (param_1->Functor).ThisRequest;
  return this;
}

// operator>> @ 14ed13b20

FNboSerializeFromBuffer * __cdecl
operator>>(FNboSerializeFromBuffer *param_1,FInternetAddr *param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  FNboSerializeFromBuffer *pFVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uchar *puVar10;
  int iVar11;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  uVar8 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_2c = 0;
  if (param_1->bHasOverflowed == false) {
    iVar11 = param_1->CurrentOffset + 4;
    if (param_1->NumBytes < iVar11) goto LAB_14ed13be5;
    puVar10 = param_1->Data + param_1->CurrentOffset;
    uVar1 = *puVar10;
    uVar8 = CONCAT31(CONCAT21(CONCAT11(uVar1,puVar10[1]),puVar10[2]),puVar10[3]);
    param_1->CurrentOffset = iVar11;
    if ((char)uVar1 < '\0') {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if (0 < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar8,&local_38,0,&local_2c);
    }
  }
  else {
LAB_14ed13be5:
    param_1->bHasOverflowed = true;
  }
  if ((param_1->bHasOverflowed == false) &&
     ((int)(param_1->CurrentOffset + uVar8) <= param_1->NumBytes)) {
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        pFVar6 = (FScriptContainerElement *)(param_1->Data + (param_1->CurrentOffset + uVar7));
        if (((local_38.Data <= pFVar6) && (pFVar6 < local_38.Data + local_2c)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FNboSerializeFromBuffer *)(*pcVar2)();
          return pFVar4;
        }
        if (local_30 == local_2c) {
          local_30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&local_38,&local_2c);
        }
        iVar11 = local_30 + 1;
        uVar7 = uVar7 + 1;
        local_38.Data[local_30] = *pFVar6;
        local_30 = iVar11;
      } while (uVar7 < uVar8);
    }
    param_1->CurrentOffset = param_1->CurrentOffset + uVar8;
  }
  else {
    param_1->bHasOverflowed = true;
  }
  (**(code **)((longlong)*param_2 + 0x58))(param_2,&local_38);
  if (param_1->bHasOverflowed == false) {
    iVar11 = param_1->CurrentOffset;
    iVar9 = iVar11 + 4;
    if (iVar9 <= param_1->NumBytes) {
      puVar10 = param_1->Data + iVar11;
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      param_1->CurrentOffset = iVar9;
      goto LAB_14ed13d48;
    }
  }
  param_1->bHasOverflowed = true;
  uVar5 = 0;
LAB_14ed13d48:
  (**(code **)((longlong)*param_2 + 0x28))(param_2,uVar5);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return param_1;
}

// operator>> @ 14ed13da0

FNboSerializeFromBufferOSS * __cdecl
operator>>(FNboSerializeFromBufferOSS *param_1,FVariantData *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  double local_res8;
  FString local_18;
  
  if (param_1->field_0x10 == '\0') {
    iVar16 = *(int *)&param_1->field_0xc;
    iVar9 = *(int *)&param_1->field_0x8;
    iVar15 = iVar16 + 1;
    bVar11 = iVar9 < iVar15;
    cVar13 = local_res8._0_1_;
    if (bVar11) {
      param_1->field_0x10 = 1;
      cVar17 = local_res8._0_1_;
    }
    else {
      cVar17 = *(char *)((longlong)iVar16 + *(longlong *)param_1);
      *(int *)&param_1->field_0xc = iVar15;
      iVar16 = iVar15;
    }
    switch(cVar17) {
    case '\x01':
      if ((!bVar11) && (iVar16 + 4 <= iVar9)) {
        lVar10 = *(longlong *)param_1;
        lVar14 = (longlong)iVar16;
        uVar1 = *(undefined1 *)(lVar14 + lVar10);
        uVar2 = *(undefined1 *)(lVar14 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar14 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar14 + 3 + lVar10);
        *(int *)&param_1->field_0xc = iVar16 + 4;
        FVariantData::SetValue(param_2,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
        return param_1;
      }
      param_1->field_0x10 = 1;
      FVariantData::SetValue(param_2,(int)local_res8._0_4_);
      return param_1;
    case '\x03':
      if ((!bVar11) && (iVar16 + 8 <= iVar9)) {
        lVar10 = *(longlong *)param_1;
        lVar14 = (longlong)iVar16;
        uVar1 = *(undefined1 *)(lVar14 + lVar10);
        uVar2 = *(undefined1 *)(lVar14 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar14 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar14 + 3 + lVar10);
        uVar5 = *(undefined1 *)(lVar14 + 4 + lVar10);
        uVar6 = *(undefined1 *)(lVar14 + 5 + lVar10);
        uVar7 = *(undefined1 *)(lVar14 + 6 + lVar10);
        uVar8 = *(undefined1 *)(lVar14 + 7 + lVar10);
        *(int *)&param_1->field_0xc = iVar16 + 8;
        FVariantData::SetValue
                  (param_2,CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(uVar1,
                                                  uVar2),uVar3),uVar4),uVar5),uVar6),uVar7),uVar8));
        return param_1;
      }
      param_1->field_0x10 = 1;
      FVariantData::SetValue(param_2,(ulong64)local_res8);
      return param_1;
    case '\x05':
      if ((!bVar11) && (iVar16 + 8 <= iVar9)) {
        lVar10 = *(longlong *)param_1;
        lVar14 = (longlong)iVar16;
        uVar1 = *(undefined1 *)(lVar14 + lVar10);
        uVar2 = *(undefined1 *)(lVar14 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar14 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar14 + 3 + lVar10);
        uVar5 = *(undefined1 *)(lVar14 + 4 + lVar10);
        uVar6 = *(undefined1 *)(lVar14 + 5 + lVar10);
        uVar7 = *(undefined1 *)(lVar14 + 6 + lVar10);
        uVar8 = *(undefined1 *)(lVar14 + 7 + lVar10);
        *(int *)&param_1->field_0xc = iVar16 + 8;
        FVariantData::SetValue
                  (param_2,(double)CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(
                                                  uVar1,uVar2),uVar3),uVar4),uVar5),uVar6),uVar7),
                                            uVar8));
        return param_1;
      }
      param_1->field_0x10 = 1;
      FVariantData::SetValue(param_2,local_res8);
      return param_1;
    case '\x06':
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      operator>>((FNboSerializeFromBuffer *)param_1,&local_18);
      FVariantData::SetValue(param_2,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
        return param_1;
      }
      break;
    case '\a':
      if ((!bVar11) && (iVar16 + 4 <= iVar9)) {
        lVar10 = *(longlong *)param_1;
        lVar14 = (longlong)iVar16;
        uVar1 = *(undefined1 *)(lVar14 + lVar10);
        uVar2 = *(undefined1 *)(lVar14 + 1 + lVar10);
        uVar3 = *(undefined1 *)(lVar14 + 2 + lVar10);
        uVar4 = *(undefined1 *)(lVar14 + 3 + lVar10);
        *(int *)&param_1->field_0xc = iVar16 + 4;
        FVariantData::SetValue(param_2,(float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4))
        ;
        return param_1;
      }
      param_1->field_0x10 = 1;
      FVariantData::SetValue(param_2,local_res8._0_4_);
      return param_1;
    case '\b':
      if ((bVar11) || (iVar15 = iVar16 + 4, iVar9 < iVar15)) {
        bVar11 = true;
        param_1->field_0x10 = 1;
      }
      else {
        lVar10 = *(longlong *)param_1;
        lVar14 = (longlong)iVar16;
        local_res8._0_4_ =
             (float)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar14 + lVar10),
                                               *(undefined1 *)(lVar14 + 1 + lVar10)),
                                      *(undefined1 *)(lVar14 + 2 + lVar10)),
                             *(undefined1 *)(lVar14 + 3 + lVar10));
        *(int *)&param_1->field_0xc = iVar15;
        bVar11 = false;
        iVar16 = iVar15;
      }
      if (((int)local_res8._0_4_ < 0) || (iVar9 - iVar16 < (int)local_res8._0_4_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((!bVar11) && (bVar12)) {
        FVariantData::SetValue
                  (param_2,(uint)local_res8._0_4_,(uchar *)((longlong)iVar16 + *(longlong *)param_1)
                  );
        *(int *)&param_1->field_0xc = *(int *)&param_1->field_0xc + (int)local_res8._0_4_;
        return param_1;
      }
      param_1->field_0x10 = 1;
      return param_1;
    case '\t':
      if ((bVar11) || (iVar9 < iVar16 + 1)) {
        param_1->field_0x10 = 1;
      }
      else {
        cVar13 = *(char *)((longlong)iVar16 + *(longlong *)param_1);
        *(int *)&param_1->field_0xc = iVar16 + 1;
      }
      FVariantData::SetValue(param_2,cVar13 != '\0');
    }
  }
  return param_1;
}

// operator<< @ 14ed14200

FNboSerializeToBuffer * __cdecl operator<<(FNboSerializeToBuffer *param_1,FInternetAddr *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  FNboSerializeToBuffer *pFVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint local_res10 [2];
  void *local_res18;
  void *local_48;
  uint local_40;
  
  (**(code **)((longlong)*param_2 + 0x60))(param_2,&local_48);
  local_res10[0] = local_40;
  operator<<(param_1,local_res10);
  local_res18 = local_48;
  if (param_1->bHasOverflowed == false) {
    uVar5 = param_1->NumBytes;
    uVar7 = (param_1->Data).ArrayNum;
    if (uVar7 < local_40 + uVar5) goto LAB_14ed142fe;
    uVar3 = 0;
    if ((int)uVar5 < (int)uVar7) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FNboSerializeToBuffer *)(*pcVar1)();
        return pFVar6;
      }
    }
    memcpy((param_1->Data).AllocatorInstance.Data + (int)uVar5,local_res18,(ulonglong)local_40);
    param_1->NumBytes = param_1->NumBytes + local_40;
  }
  else {
LAB_14ed142fe:
    param_1->bHasOverflowed = true;
  }
  uVar4 = (**(code **)((longlong)*param_2 + 0x38))(param_2);
  if (param_1->bHasOverflowed == false) {
    uVar5 = param_1->NumBytes;
    uVar7 = (param_1->Data).ArrayNum;
    if (uVar5 + 4 <= uVar7) {
      uVar3 = 0;
      if ((int)uVar5 < (int)uVar7) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FNboSerializeToBuffer *)(*pcVar1)();
          return pFVar6;
        }
      }
      piVar9 = &(param_1->Data).ArrayNum;
      puVar8 = &param_1->NumBytes;
      (param_1->Data).AllocatorInstance.Data[(int)uVar5] = SUB41((uint)uVar4 >> 0x18,0);
      uVar7 = param_1->NumBytes + 1;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->Data).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FNboSerializeToBuffer *)(*pcVar1)();
          return pFVar6;
        }
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar7] = SUB41((uint)uVar4 >> 0x10,0);
      uVar7 = *puVar8 + 2;
      uVar5 = 0;
      if ((int)uVar7 < *piVar9) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FNboSerializeToBuffer *)(*pcVar1)();
          return pFVar6;
        }
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar7] = SUB41((uint)uVar4 >> 8,0);
      uVar7 = *puVar8 + 3;
      uVar5 = 0;
      if ((int)uVar7 < *piVar9) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FNboSerializeToBuffer *)(*pcVar1)();
          return pFVar6;
        }
      }
      (param_1->Data).AllocatorInstance.Data[(int)uVar7] = SUB41(uVar4,0);
      *puVar8 = *puVar8 + 4;
      goto LAB_14ed144cd;
    }
  }
  param_1->bHasOverflowed = true;
LAB_14ed144cd:
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}

// operator() @ 14ed14570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  FOnlineError *pFVar2;
  FReadAccessScope local_68;
  FOnlineError local_50;
  
  if (1 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl((FString *)&local_68,L"%s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if ((void *)local_68.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68.DestructionSentinel._0_8_);
    }
  }
  pFVar2 = FOnlineError::FOnlineError(&local_50,(FString *)((longlong)this + 0x18));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_68);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,pFVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (local_50.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_50.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_50.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorRaw.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ed14670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  FOnlineError *pFVar2;
  FReadAccessScope local_78;
  TSharedRef<FPurchaseReceipt,1> local_60;
  FOnlineError local_50;
  
  if (1 < (byte)LogOnline._0_1_) {
    ::FString::PrintfImpl((FString *)&local_78,L"%s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnline);
    if ((void *)local_78.DestructionSentinel._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78.DestructionSentinel._0_8_);
    }
  }
  MakeShared<FPurchaseReceipt,1>(&local_60);
  (local_60.Object)->TransactionState = Failed;
  pFVar2 = FOnlineError::FOnlineError(&local_50,(FString *)((longlong)this + 0x18));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_78);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (plVar1 = *(longlong **)((longlong)this + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,pFVar2,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  if (local_50.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_50.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_50.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorRaw.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14ed16278

/* [thunk]:public: virtual void * __ptr64 __cdecl FOnlineAsyncTaskManagerNull::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FOnlineAsyncTaskManagerNull::_vector_deleting_destructor__adjustor_8__
          (FOnlineAsyncTaskManagerNull *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FOnlineAsyncTaskManagerNull *)&this[-1].NullSubsystem,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{136}' @ 14ed16288

/* [thunk]:public: virtual void * __ptr64 __cdecl FOnlineSubsystemNull::`vector deleting
   destructor'`adjustor{136}' (unsigned int) __ptr64 */

void * __thiscall
FOnlineSubsystemNull::_vector_deleting_destructor__adjustor_136__
          (FOnlineSubsystemNull *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FOnlineSubsystemNull *)&this[-1].bVoiceInterfaceInitialized,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14ed162a0

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy> *this
          ,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed162d0

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16300

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16330

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16390

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,``FOnlinePurchaseNull::Checkout'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed163f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16440

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryCategories'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16480

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffers'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x28));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed164f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FOnlinePurchaseNull::RedeemCode'::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16530

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16580

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x28));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed165c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersByFilter'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16600

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16640

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16680

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::~<lambda_2>((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed166c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  `FOnlinePurchaseNull::Checkout'::__l2::<lambda_2>::~<lambda_2>((void *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16700

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlinePurchaseNull::QueryReceipts'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16740

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineStoreV2Null::QueryOffersById'::__l8::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16780

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayName'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x30));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed167d0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FMessageSanitizerNull::SanitizeDisplayNames'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x30));
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16830

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOnlineExternalUINull,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOnlineExternalUINull,void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16870

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOnlineSessionNull,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOnlineSessionNull,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed168a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOnlineSessionNull,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOnlineSessionNull,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed168d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FOnlineSessionNull,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FOnlineSessionNull,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16900

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>_>
           *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16940

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16970

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed169a0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOnlineStoreOffer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FOnlineStoreOffer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed169e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOnlineSubsystemNull,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FOnlineSubsystemNull,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16a20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageSanitizerNull,SharedPointerInternals::DefaultDeleter<FMessageSanitizerNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageSanitizerNull,SharedPointerInternals::DefaultDeleter<FMessageSanitizerNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16a60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineAchievementsNull,SharedPointerInternals::DefaultDeleter<FOnlineAchievementsNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineAchievementsNull,SharedPointerInternals::DefaultDeleter<FOnlineAchievementsNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16aa0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineExternalUINull,SharedPointerInternals::DefaultDeleter<FOnlineExternalUINull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineExternalUINull,SharedPointerInternals::DefaultDeleter<FOnlineExternalUINull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16ae0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineIdentityNull,SharedPointerInternals::DefaultDeleter<FOnlineIdentityNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineIdentityNull,SharedPointerInternals::DefaultDeleter<FOnlineIdentityNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16b20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineLeaderboardsNull,SharedPointerInternals::DefaultDeleter<FOnlineLeaderboardsNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineLeaderboardsNull,SharedPointerInternals::DefaultDeleter<FOnlineLeaderboardsNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16b60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlinePurchaseNull,SharedPointerInternals::DefaultDeleter<FOnlinePurchaseNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlinePurchaseNull,SharedPointerInternals::DefaultDeleter<FOnlinePurchaseNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16ba0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineSessionInfoNull,SharedPointerInternals::DefaultDeleter<FOnlineSessionInfoNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineSessionInfoNull,SharedPointerInternals::DefaultDeleter<FOnlineSessionInfoNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16be0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineSessionNull,SharedPointerInternals::DefaultDeleter<FOnlineSessionNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineSessionNull,SharedPointerInternals::DefaultDeleter<FOnlineSessionNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16c20

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineStoreV2Null,SharedPointerInternals::DefaultDeleter<FOnlineStoreV2Null>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineStoreV2Null,SharedPointerInternals::DefaultDeleter<FOnlineStoreV2Null>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16c60

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOnlineVoiceImpl,SharedPointerInternals::DefaultDeleter<FOnlineVoiceImpl>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FOnlineVoiceImpl,SharedPointerInternals::DefaultDeleter<FOnlineVoiceImpl>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16ca0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUniqueNetIdNull,SharedPointerInternals::DefaultDeleter<FUniqueNetIdNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUniqueNetIdNull,SharedPointerInternals::DefaultDeleter<FUniqueNetIdNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16ce0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUserOnlineAccountNull,SharedPointerInternals::DefaultDeleter<FUserOnlineAccountNull>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FUserOnlineAccountNull,SharedPointerInternals::DefaultDeleter<FUserOnlineAccountNull>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16d20

void * __thiscall FLANSession::_scalar_deleting_destructor_(FLANSession *this,uint param_1)

{
  ~FLANSession(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16d60

void * __thiscall
FMessageSanitizerNull::_scalar_deleting_destructor_(FMessageSanitizerNull *this,uint param_1)

{
  ~FMessageSanitizerNull(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16da0

void * __thiscall
FNamedOnlineSession::_scalar_deleting_destructor_(FNamedOnlineSession *this,uint param_1)

{
  ~FNamedOnlineSession(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16de0

void * __thiscall
FOnlineAchievementsNull::_scalar_deleting_destructor_(FOnlineAchievementsNull *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FOnlineAchievementsNull__6B_;
  DestructItems<FOnlineAchievementsNull::FOnlineAchievementNull,int>
            ((FOnlineAchievementNull *)(this->Achievements).AllocatorInstance.Data,
             (this->Achievements).ArrayNum);
  pFVar1 = (this->Achievements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->AchievementDescriptions).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AchievementDescriptions).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FOnlineAchievementDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AchievementDescriptions);
  *(undefined4 *)&(this->PlayerAchievements).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PlayerAchievements).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlayerAchievements);
  this->_padding_ = (longlong)&___7IOnlineAchievements__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16ec0

void * __thiscall
FOnlineAsyncTaskManagerNull::_scalar_deleting_destructor_
          (FOnlineAsyncTaskManagerNull *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FOnlineAsyncTaskManager::~FOnlineAsyncTaskManager((FOnlineAsyncTaskManager *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16f10

void * __thiscall
FOnlineExternalUINull::_scalar_deleting_destructor_(FOnlineExternalUINull *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOnlineExternalUINull__6B_;
  IOnlineExternalUI::~IOnlineExternalUI((IOnlineExternalUI *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16f60

void * __thiscall
FOnlineFactoryNull::_scalar_deleting_destructor_(FOnlineFactoryNull *this,uint param_1)

{
  *this = (FOnlineFactoryNull)&___7IOnlineFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed16fa0

void * __thiscall
FOnlineIdentityNull::_scalar_deleting_destructor_(FOnlineIdentityNull *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FOnlineIdentityNull__6B_;
  *(undefined4 *)&(this->UserAccounts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserAccounts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserAccounts);
  *(undefined4 *)&(this->UserIds).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserIds).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserIds);
  IOnlineIdentity::~IOnlineIdentity((IOnlineIdentity *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17040

void * __thiscall
FOnlineLeaderboardsNull::_scalar_deleting_destructor_(FOnlineLeaderboardsNull *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FOnlineLeaderboardsNull__6B_;
  *(undefined4 *)&(this->Leaderboards).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Leaderboards).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Leaderboards);
  IOnlineLeaderboards::~IOnlineLeaderboards((IOnlineLeaderboards *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed170c0

void * __thiscall
FOnlinePurchaseNull::_scalar_deleting_destructor_(FOnlinePurchaseNull *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FOnlinePurchaseNull__6B_;
  if ((this->PendingPurchaseDelegate).bIsSet != false) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PendingPurchaseDelegate);
  }
  *(undefined4 *)&(this->UserFakeReceipts).field_0x48 = 0;
  pvVar3 = *(void **)&(this->UserFakeReceipts).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserFakeReceipts);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlinePurchase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17190

void * __thiscall
FOnlineSessionInfo::_scalar_deleting_destructor_(FOnlineSessionInfo *this,uint param_1)

{
  *this = (FOnlineSessionInfo)&___7IOnlinePlatformData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed171d0

void * __thiscall
FOnlineSessionInfoNull::_scalar_deleting_destructor_(FOnlineSessionInfoNull *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FOnlineSessionInfoNull__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionId).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostAddr).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IOnlinePlatformData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17230

void * __thiscall
FOnlineSessionNull::_scalar_deleting_destructor_(FOnlineSessionNull *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FOnlineSessionNull__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentSessionSearch).SharedReferenceCount.ReferenceController);
  DestructItems<FNamedOnlineSession,int>
            ((FNamedOnlineSession *)(this->Sessions).AllocatorInstance.Data,
             (this->Sessions).ArrayNum);
  pFVar1 = (this->Sessions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SessionLock);
  FLANSession::~FLANSession(&this->LANSessionManager);
  IOnlineSession::~IOnlineSession((IOnlineSession *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed172c0

void * __thiscall
FOnlineStoreOffer::_scalar_deleting_destructor_(FOnlineStoreOffer *this,uint param_1)

{
  ~FOnlineStoreOffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17300

void * __thiscall
FOnlineStoreV2Null::_scalar_deleting_destructor_(FOnlineStoreV2Null *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->AvailableOffers).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AvailableOffers).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AvailableOffers);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IOnlineStoreV2__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed173c0

void * __thiscall
FOnlineSubsystemNull::_scalar_deleting_destructor_(FOnlineSubsystemNull *this,uint param_1)

{
  ~FOnlineSubsystemNull(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17400

void * __thiscall FOnlineUser::_scalar_deleting_destructor_(FOnlineUser *this,uint param_1)

{
  *this = (FOnlineUser)&___7FOnlineUser__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17440

void * __thiscall
FUniqueNetIdNull::_scalar_deleting_destructor_(FUniqueNetIdNull *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed174b0

void * __thiscall
FUserOnlineAccount::_scalar_deleting_destructor_(FUserOnlineAccount *this,uint param_1)

{
  *this = (FUserOnlineAccount)&___7FOnlineUser__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed174f0

void * __thiscall
FUserOnlineAccountNull::_scalar_deleting_destructor_(FUserOnlineAccountNull *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FUserOnlineAccountNull__6B_;
  *(undefined4 *)&(this->UserAttributes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserAttributes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserAttributes);
  *(undefined4 *)&(this->AdditionalAuthData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalAuthData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalAuthData);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserIdPtr).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FOnlineUser__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17590

void * __thiscall
IMessageSanitizer::_scalar_deleting_destructor_(IMessageSanitizer *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7IMessageSanitizer__6B_;
  pFVar3 = (this->MessageArraySeparator).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17610

void * __thiscall
IOnlineAchievements::_scalar_deleting_destructor_(IOnlineAchievements *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineAchievements__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAchievementUnlockedDelegates).field_0x8,
             *(int *)&(this->OnAchievementUnlockedDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnAchievementUnlockedDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAchievementUnlockedDelegates);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17680

void * __thiscall
IOnlineExternalUI::_scalar_deleting_destructor_(IOnlineExternalUI *this,uint param_1)

{
  ~IOnlineExternalUI(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed176c0

void * __thiscall IOnlineFactory::_scalar_deleting_destructor_(IOnlineFactory *this,uint param_1)

{
  *this = (IOnlineFactory)&___7IOnlineFactory__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17700

void * __thiscall IOnlineIdentity::_scalar_deleting_destructor_(IOnlineIdentity *this,uint param_1)

{
  ~IOnlineIdentity(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17740

void * __thiscall
IOnlineLeaderboards::_scalar_deleting_destructor_(IOnlineLeaderboards *this,uint param_1)

{
  ~IOnlineLeaderboards(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17780

void * __thiscall
IOnlinePlatformData::_scalar_deleting_destructor_(IOnlinePlatformData *this,uint param_1)

{
  *this = (IOnlinePlatformData)&___7IOnlinePlatformData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed177c0

void * __thiscall IOnlinePurchase::_scalar_deleting_destructor_(IOnlinePurchase *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlinePurchase__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUnexpectedPurchaseReceiptDelegates).field_0x8,
             *(int *)&(this->OnUnexpectedPurchaseReceiptDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnUnexpectedPurchaseReceiptDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUnexpectedPurchaseReceiptDelegates);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17830

void * __thiscall IOnlineSession::_scalar_deleting_destructor_(IOnlineSession *this,uint param_1)

{
  ~IOnlineSession(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x348);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ed17870

void * __thiscall IOnlineStoreV2::_scalar_deleting_destructor_(IOnlineStoreV2 *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IOnlineStoreV2__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQueryForAvailablePurchasesCompleteDelegates).field_0x8,
             *(int *)&(this->OnQueryForAvailablePurchasesCompleteDelegates).field_0x10);
  pvVar1 = *(void **)&(this->OnQueryForAvailablePurchasesCompleteDelegates).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryForAvailablePurchasesCompleteDelegates);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// GetConnectStringFromSessionInfo @ 14ed250b0

bool __cdecl
GetConnectStringFromSessionInfo
          (TSharedPtr<FOnlineSessionInfoNull,1> *param_1,FString *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  FOnlineSessionInfoNull *pFVar6;
  FInternetAddr *pFVar7;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  void *local_18 [2];
  
  pFVar6 = param_1->Object;
  if (((pFVar6 != (FOnlineSessionInfoNull *)0x0) &&
      ((pFVar6->HostAddr).Object != (FInternetAddr *)0x0)) &&
     (cVar3 = (**(code **)((longlong)*(pFVar6->HostAddr).Object + 0x98))(), cVar3 != '\0')) {
    if (param_3 == 0) {
      pFVar6 = TSharedPtr<FOnlineSessionInfoNull,1>::operator->(param_1);
      pFVar7 = TSharedPtr<FInternetAddr,1>::operator->(&pFVar6->HostAddr);
      (**(code **)((longlong)*pFVar7 + 0x80))(pFVar7,local_18,1);
      FString::PrintfImpl(&local_38,L"%s");
      if (param_2 != &local_38) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_38.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar6 = TSharedPtr<FOnlineSessionInfoNull,1>::operator->(param_1);
      if (((pFVar6->HostAddr).Object == (FInternetAddr *)0x0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar7 = (pFVar6->HostAddr).Object;
      (**(code **)((longlong)*pFVar7 + 0x80))(pFVar7,local_28,0);
      FString::PrintfImpl(&local_48,L"%s:%d");
      if (param_2 != &local_48) {
        pFVar1 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_48.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      local_18[0] = local_28[0];
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        local_18[0] = local_28[0];
      }
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    return true;
  }
  return false;
}

// MakeReceiptOfferEntry @ 14ed28dc0

/* WARNING: Removing unreachable block (ram,0x00014ed28fc8) */
/* WARNING: Removing unreachable block (ram,0x00014ed28fd6) */
/* WARNING: Removing unreachable block (ram,0x00014ed28fe4) */

FReceiptOfferEntry * __cdecl
`anonymous_namespace'::MakeReceiptOfferEntry
          (FReceiptOfferEntry *__return_storage_ptr__,FUniqueNetIdNull *param_1,FString *param_2,
          FString *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FJsonSerializable local_68;
  FString local_60;
  FString local_50;
  undefined8 local_40;
  undefined8 local_38;
  
  (__return_storage_ptr__->Namespace).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FReceiptOfferEntry_FPurchaseReceipt__6B_;
  (__return_storage_ptr__->Namespace).Data.ArrayNum = 0;
  (__return_storage_ptr__->Namespace).Data.ArrayMax = 0;
  ::FString::FString(&__return_storage_ptr__->OfferId,param_2);
  __return_storage_ptr__->Quantity = 1;
  local_68 = (FJsonSerializable)&___7FLineItemInfo_FPurchaseReceipt__6B_;
  (__return_storage_ptr__->LineItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->LineItems).ArrayNum = 0;
  (__return_storage_ptr__->LineItems).ArrayMax = 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_40 = 0;
  local_38 = 0;
  iVar3 = 0;
  if (&local_60 != param_3) {
    uVar1 = (param_3->Data).ArrayNum;
    pFVar4 = (param_3->Data).AllocatorInstance.Data;
    local_60.Data.ArrayMax = 0;
    local_60.Data.ArrayNum = uVar1;
    iVar3 = 0;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_60,uVar1,&local_60.Data.ArrayMax);
      memcpy(local_60.Data.AllocatorInstance.Data,pFVar4,(longlong)(int)uVar1 * 2);
      iVar3 = local_50.Data.ArrayMax;
    }
  }
  if (&local_50 != param_2) {
    iVar2 = (param_2->Data).ArrayNum;
    pFVar4 = (param_2->Data).AllocatorInstance.Data;
    local_50.Data.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      local_50.Data.ArrayNum = 0;
      local_50.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,iVar3,(ForAnyElementType *)&local_50,iVar2,&local_50.Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_50.Data.AllocatorInstance.Data,pFVar4,(longlong)iVar2 * 2);
      }
    }
  }
  iVar3 = (__return_storage_ptr__->LineItems).ArrayNum;
  if (iVar3 == (__return_storage_ptr__->LineItems).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(__return_storage_ptr__->LineItems).AllocatorInstance,
                       &(__return_storage_ptr__->LineItems).ArrayMax);
  }
  (__return_storage_ptr__->LineItems).ArrayNum = iVar3 + 1;
  pFVar4 = (__return_storage_ptr__->LineItems).AllocatorInstance.Data + (longlong)iVar3 * 0x38;
  *(undefined ***)pFVar4 = &___7FLineItemInfo_FPurchaseReceipt__6B_;
  *(undefined8 *)(pFVar4 + 8) = 0;
  *(FScriptContainerElement **)(pFVar4 + 8) = local_60.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 0x10) = local_60.Data.ArrayNum;
  *(int *)(pFVar4 + 0x14) = local_60.Data.ArrayMax;
  *(undefined8 *)(pFVar4 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar4 + 0x18) = local_50.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 0x20) = local_50.Data.ArrayNum;
  *(int *)(pFVar4 + 0x24) = local_50.Data.ArrayMax;
  *(undefined8 *)(pFVar4 + 0x28) = 0;
  *(undefined8 *)(pFVar4 + 0x28) = local_40;
  *(undefined4 *)(pFVar4 + 0x30) = (undefined4)local_38;
  *(undefined4 *)(pFVar4 + 0x34) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FJsonSerializable::~FJsonSerializable(&local_68);
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_OnlineSubsystemNull @ 14ed33910

void __cdecl IMPLEMENT_MODULE_OnlineSubsystemNull(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarAddUserNumToNullId'' @ 150470de0

void __cdecl _dynamic_atexit_destructor_for__CVarAddUserNumToNullId__(void)

{
  CVarAddUserNumToNullId._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAddUserNumToNullId);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAutoLoginAtStartup'' @ 150470e00

void __cdecl _dynamic_atexit_destructor_for__CVarAutoLoginAtStartup__(void)

{
  CVarAutoLoginAtStartup._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAutoLoginAtStartup);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceOfflineMode'' @ 150470e20

void __cdecl _dynamic_atexit_destructor_for__CVarForceOfflineMode__(void)

{
  CVarForceOfflineMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceOfflineMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceShowLoginUIUserChange'' @ 150470e40

void __cdecl _dynamic_atexit_destructor_for__CVarForceShowLoginUIUserChange__(void)

{
  CVarForceShowLoginUIUserChange._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceShowLoginUIUserChange);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceStableNullId'' @ 150470e60

void __cdecl _dynamic_atexit_destructor_for__CVarForceStableNullId__(void)

{
  CVarForceStableNullId._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceStableNullId);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOnlineRequiresSecondLogin'' @ 150470e80

void __cdecl _dynamic_atexit_destructor_for__CVarOnlineRequiresSecondLogin__(void)

{
  CVarOnlineRequiresSecondLogin._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOnlineRequiresSecondLogin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRequireLoginCredentials'' @ 150470ea0

void __cdecl _dynamic_atexit_destructor_for__CVarRequireLoginCredentials__(void)

{
  CVarRequireLoginCredentials._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRequireLoginCredentials);
  return;
}

// `dynamic_atexit_destructor_for_'CVarRequireShowLoginUI'' @ 150470ec0

void __cdecl _dynamic_atexit_destructor_for__CVarRequireShowLoginUI__(void)

{
  CVarRequireShowLoginUI._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarRequireShowLoginUI);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSupportExternalUI'' @ 150470ee0

void __cdecl _dynamic_atexit_destructor_for__CVarSupportExternalUI__(void)

{
  CVarSupportExternalUI._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSupportExternalUI);
  return;
}

// `dynamic_atexit_destructor_for_'EmptyId'' @ 150470f00

void __cdecl `FUniqueNetIdNull::EmptyId'::__l2::_dynamic_atexit_destructor_for__EmptyId__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(DAT_1553aebc8)
  ;
  return;
}

