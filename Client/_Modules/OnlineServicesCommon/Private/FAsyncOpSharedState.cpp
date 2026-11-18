// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 42

// FAsyncOpSharedState @ 14ee0c260

FAsyncOpSharedState * __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedState::
FAsyncOpSharedState(FAsyncOpSharedState *this,Params *param_1)

{
  bool bVar1;
  FOnlineError *pFVar2;
  FOnlineError *pFVar3;
  FOnlineError local_68;
  TOptional<UE::Online::FOnlineError> local_40;
  
  (this->Params).LocalAccountId.Value = (param_1->LocalAccountId).Value;
  (this->Params).Mutations.Status.bIsSet = false;
  bVar1 = (param_1->Mutations).Status.bIsSet;
  (this->Params).Mutations.Status.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Params).Mutations.Status.TypedValue = (param_1->Mutations).Status.TypedValue;
  }
  (this->Params).Mutations.Joinability.bIsSet = false;
  bVar1 = (param_1->Mutations).Joinability.bIsSet;
  (this->Params).Mutations.Joinability.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Params).Mutations.Joinability.TypedValue = (param_1->Mutations).Joinability.TypedValue;
  }
  (this->Params).Mutations.GameStatus.bIsSet = false;
  bVar1 = (param_1->Mutations).GameStatus.bIsSet;
  (this->Params).Mutations.GameStatus.bIsSet = bVar1;
  if (bVar1 != false) {
    (this->Params).Mutations.GameStatus.TypedValue = (param_1->Mutations).GameStatus.TypedValue;
  }
  *(undefined4 *)((longlong)&(this->Params).Mutations.StatusString.field0_0x0 + 0xc) = 0xffffffff;
  (this->Params).Mutations.StatusString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Params).Mutations.StatusString.field0_0x0 + 8) = 0;
  if (*(int *)((longlong)&(param_1->Mutations).StatusString.field0_0x0 + 0xc) != -1) {
    (this->Params).Mutations.StatusString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (param_1->Mutations).StatusString.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_1->Mutations).StatusString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->Params).Mutations.StatusString.field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(param_1->Mutations).StatusString.field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->Params).Mutations.StatusString.field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(param_1->Mutations).StatusString.field0_0x0 + 0xc);
    *(int *)((longlong)&(param_1->Mutations).StatusString.field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_1->Mutations).StatusString.field0_0x0 + 0xc) = 0;
  }
  (this->Params).Mutations.RichPresenceString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)&(this->Params).Mutations.RichPresenceString.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Params).Mutations.RichPresenceString.field0_0x0 + 0xc) =
       0xffffffff;
  if (*(int *)((longlong)&(param_1->Mutations).RichPresenceString.field0_0x0 + 0xc) != -1) {
    (this->Params).Mutations.RichPresenceString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (param_1->Mutations).RichPresenceString.field0_0x0.TypedValue.Data.AllocatorInstance.Data;
    (param_1->Mutations).RichPresenceString.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&(this->Params).Mutations.RichPresenceString.field0_0x0 + 8) =
         *(undefined4 *)((longlong)&(param_1->Mutations).RichPresenceString.field0_0x0 + 8);
    *(undefined4 *)((longlong)&(this->Params).Mutations.RichPresenceString.field0_0x0 + 0xc) =
         *(undefined4 *)((longlong)&(param_1->Mutations).RichPresenceString.field0_0x0 + 0xc);
    *(int *)((longlong)&(param_1->Mutations).RichPresenceString.field0_0x0 + 8) = 0;
    *(int *)((longlong)&(param_1->Mutations).RichPresenceString.field0_0x0 + 0xc) = 0;
  }
  TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
              *)&(this->Params).Mutations.UpdatedProperties,
             (TSet<TTuple<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,__int64,double,FString,TSharedRef<TNestedVariantArray<FString,bool,__int64,double,FString>,1>,TSharedRef<TNestedVariantMap<FString,bool,__int64,double,FString>,1>_>,0>,FDefaultSetAllocator>
              *)&(param_1->Mutations).UpdatedProperties);
  *(undefined8 *)&(this->Params).Mutations.UpdatedProperties.field_0x50 = 0;
  *(undefined8 *)&(this->Params).Mutations.UpdatedProperties.field_0x58 = 0;
  (this->Params).Mutations.RemovedProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Params).Mutations.RemovedProperties.AllocatorInstance.Data =
       (param_1->Mutations).RemovedProperties.AllocatorInstance.Data;
  (param_1->Mutations).RemovedProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Params).Mutations.RemovedProperties.ArrayNum =
       (param_1->Mutations).RemovedProperties.ArrayNum;
  (this->Params).Mutations.RemovedProperties.ArrayMax =
       (param_1->Mutations).RemovedProperties.ArrayMax;
  (param_1->Mutations).RemovedProperties.ArrayNum = 0;
  (param_1->Mutations).RemovedProperties.ArrayMax = 0;
  local_40.bIsSet = false;
  pFVar3 = Errors::Unknown(&local_68,&local_40);
  *(undefined ***)&this->Result =
       &___7__TResult_UResult_FPartialUpdatePresence_Online_UE__VFOnlineError_34__Online_UE__6B_;
  *(IOnlineErrorDetails **)&(this->Result).field_0x8 = (pFVar3->Details).Object;
  *(TReferenceControllerBase<1> **)&(this->Result).field_0x10 =
       (pFVar3->Details).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar3->Inner).Object;
  (pFVar3->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)&(this->Result).field_0x18 = pFVar2;
  *(TReferenceControllerBase<1> **)&(this->Result).field_0x20 =
       (pFVar3->Inner).SharedReferenceCount.ReferenceController;
  (pFVar3->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pFVar3->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)&(this->Result).field_0x28 = pFVar3->ErrorCode;
  *(undefined ***)&this->Result =
       &___7__TOnlineResult_UFPartialUpdatePresence_Online_UE___Online_UE__6B_;
  (this->Result).field_0x30 = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Details.SharedReferenceCount.ReferenceController);
  if (local_40.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_40.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  this->State = Invalid;
  return this;
}

// ~FAsyncOpSharedState @ 14ee23630

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).Ticket.Data.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee236b0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).Tags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23730

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&(this->Result).field_0x8);
  FAuthLogin::Params::~Params(&this->Params);
  return;
}

// ~FAsyncOpSharedState @ 14ee237b0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&(this->Result).field_0x8);
  (this->Params).ClearedAttributes.HashSize = 0;
  FVar1 = (this->Params).ClearedAttributes.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Params).ClearedAttributes.Elements);
  *(undefined4 *)&(this->Params).MutatedAttributes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Params).MutatedAttributes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).MutatedAttributes);
  return;
}

// ~FAsyncOpSharedState @ 14ee23860

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).RelyingParty.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee238e0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).TargetAccountIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23960

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<UE::Online::FPurchaseOffer,int>
            ((FPurchaseOffer *)(this->Params).Offers.AllocatorInstance.Data,
             (this->Params).Offers.ArrayNum);
  pFVar1 = (this->Params).Offers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee239f0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).OverrideCatalogNamespace.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23a70

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<FString,int>
            ((FString *)(this->Params).OfferIds.AllocatorInstance.Data,
             (this->Params).OfferIds.ArrayNum);
  pFVar1 = (this->Params).OfferIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23b00

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).TransactionId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23b80

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).EntitlementId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23c00

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).TokenType.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23c80

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  *(undefined4 *)&(this->Params).UserAttributes.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Params).UserAttributes.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).UserAttributes);
  *(undefined4 *)&(this->Params).Attributes.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Params).Attributes.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).Attributes);
  return;
}

// ~FAsyncOpSharedState @ 14ee23d30

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&(this->Result).field_0x8);
  *(undefined4 *)&(this->Params).SessionSettings.CustomSettings.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Params).SessionSettings.CustomSettings.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).SessionSettings.CustomSettings);
  pFVar2 = (this->Params).SessionIdOverride.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23dd0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<FString,int>
            ((FString *)(this->Params).Scopes.AllocatorInstance.Data,(this->Params).Scopes.ArrayNum)
  ;
  pFVar1 = (this->Params).Scopes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23e60

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<UE::Online::FFindLobbySearchFilter,int>
            ((FFindLobbySearchFilter *)(this->Params).Filters.AllocatorInstance.Data,
             (this->Params).Filters.ArrayNum);
  pFVar1 = (this->Params).Filters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23ef0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<UE::Online::FFindSessionsSearchFilter,int>
            ((FFindSessionsSearchFilter *)(this->Params).Filters.AllocatorInstance.Data,
             (this->Params).Filters.ArrayNum);
  pFVar1 = (this->Params).Filters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee23f80

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  *(undefined4 *)&(this->Params).UserAttributes.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Params).UserAttributes.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).UserAttributes);
  return;
}

// ~FAsyncOpSharedState @ 14ee24010

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&(this->Result).field_0x8);
  (this->Params).RemovedAttributes.HashSize = 0;
  FVar1 = (this->Params).RemovedAttributes.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Params).RemovedAttributes.Elements);
  *(undefined4 *)&(this->Params).UpdatedAttributes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Params).UpdatedAttributes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).UpdatedAttributes);
  return;
}

// ~FAsyncOpSharedState @ 14ee240c0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&(this->Result).field_0x8);
  (this->Params).RemovedAttributes.HashSize = 0;
  FVar1 = (this->Params).RemovedAttributes.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Params).RemovedAttributes.Elements);
  *(undefined4 *)&(this->Params).UpdatedAttributes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Params).UpdatedAttributes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).UpdatedAttributes);
  return;
}

// ~FAsyncOpSharedState @ 14ee24170

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&(this->Result).field_0x8);
  FPartialUpdatePresence::Params::FMutations::~FMutations(&(this->Params).Mutations);
  return;
}

// ~FAsyncOpSharedState @ 14ee241f0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).BoardName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee24270

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).BoardName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee242f0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).BoardName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).AccountIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee24380

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).TargetUsers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee24400

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&(this->Result).field_0x8);
  FStartMatchmaking::Params::~Params(&this->Params);
  return;
}

// ~FAsyncOpSharedState @ 14ee24480

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<FString,int>
            ((FString *)(this->Params).AchievementIds.AllocatorInstance.Data,
             (this->Params).AchievementIds.ArrayNum);
  pFVar1 = (this->Params).AchievementIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ee24510

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(&(this->Result).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Params).Presence.SharedReferenceCount.ReferenceController);
  return;
}

// ~FAsyncOpSharedState @ 14ee24590

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).Mutations.RemovedCustomSettings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->Params).Mutations.UpdatedCustomSettings.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Params).Mutations.UpdatedCustomSettings.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).Mutations.UpdatedCustomSettings);
  return;
}

// ~FAsyncOpSharedState @ 14ee24630

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).BoardName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76900

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<FString,int>
            ((FString *)(this->Params).StatNames.AllocatorInstance.Data,
             (this->Params).StatNames.ArrayNum);
  pFVar1 = (this->Params).StatNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).TargetAccountIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef769a0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x58;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FQueryStats::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<FString,int>
            ((FString *)(this->Params).StatNames.AllocatorInstance.Data,
             (this->Params).StatNames.ArrayNum);
  pFVar1 = (this->Params).StatNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76a30

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).AccountIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76ab0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).AccountIds.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76b30

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).Filename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76bb0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&(this->Result).field_0x8);
  *(undefined4 *)&(this->Params).EventParams.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Params).EventParams.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Params).EventParams);
  pFVar2 = (this->Params).EventName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76c50

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  DestructItems<UE::Online::FUserStats,int>
            ((FUserStats *)(this->Params).UpdateUsersStats.AllocatorInstance.Data,
             (this->Params).UpdateUsersStats.ArrayNum);
  pFVar1 = (this->Params).UpdateUsersStats.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76ce0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).TargetFilename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).SourceFilename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76d70

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).Filename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76df0

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>::FAsyncOpSharedState::~FAsyncOpSharedState
          (FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).Filename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// ~FAsyncOpSharedState @ 14ef76e70

void __thiscall
UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>::FAsyncOpSharedState::
~FAsyncOpSharedState(FAsyncOpSharedState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(byte)(this->Result).field_0x30;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&(this->Result).field_0x8);
  pFVar1 = (this->Params).FileContents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Params).Filename.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

