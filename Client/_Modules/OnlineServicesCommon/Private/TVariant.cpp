// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 78

// TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> @ 14ee0a340

TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError> @ 14ee0a3c0

TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError>
           *this,TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthBeginVerifiedAuthSession::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError> @ 14ee0a440

TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError>
           *this,TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthCancelVerifiedAuthTicket::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError> @ 14ee0a4c0

TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthCreateAccount::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError> @ 14ee0a540

TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError>
          *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError> *
               )(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthEndVerifiedAuthSession::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError> @ 14ee0a5c0

TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthLinkAccount::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError> @ 14ee0a640

TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthLogin::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError> @ 14ee0a6c0

TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthLogout::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError> @ 14ee0a740

TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError> *this
          ,TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError>
           *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthModifyAccountAttributes::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError> @ 14ee0a7c0

TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError>
          *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError> *
               )(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthQueryExternalAuthToken::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError> @ 14ee0a840

TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError> *
__thiscall
TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError>
           *this,TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthQueryExternalServerAuthTicket::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError> @ 14ee0a8c0

TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError> *this
          ,TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError>
           *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAuthQueryVerifiedAuthTicket::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError> @ 14ee0a940

TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FBatchQueryPresence::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError> @ 14ee0a9c0

TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceCheckout::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError> @ 14ee0aa40

TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError> *param_1
          )

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceQueryEntitlements::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError> @ 14ee0aac0

TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceQueryOffers::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError> @ 14ee0ab40

TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceQueryOffersById::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError> @ 14ee0abc0

TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError> *
__thiscall
TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>
           *this,TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceQueryTransactionEntitlements::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError> @ 14ee0ac40

TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError> *param_1
          )

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceRedeemEntitlement::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError> @ 14ee0acc0

TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceRetrieveS2SToken::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError> @ 14ee0ad40

TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCommerceShowStoreUI::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> @ 14ee0adc0

TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCreateLobby::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> @ 14ee0ae40

TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError> @ 14ee0aec0

TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FDeclineLobbyInvitation::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError> @ 14ee0af40

TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FExternalUIShowFriendsUI::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError> @ 14ee0afc0

TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FExternalUIShowLoginUI::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> @ 14ee0b040

TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FFindLobbies::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> @ 14ee0b0c0

TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError> @ 14ee0b140

TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FFunctionalTestLobbies::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError> @ 14ee0b1c0

TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FInviteLobbyMember::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> @ 14ee0b240

TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FJoinLobby::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> @ 14ee0b2c0

TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError> @ 14ee0b340

TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FKickLobbyMember::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> @ 14ee0b3c0

TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FLeaveLobby::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> @ 14ee0b440

TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError> @ 14ee0b4c0

TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FModifyLobbyAttributes::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError> @ 14ee0b540

TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FModifyLobbyJoinPolicy::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError> @ 14ee0b5c0

TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError> *this
          ,TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>
           *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FModifyLobbyMemberAttributes::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError> @ 14ee0b640

TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FModifyLobbySchema::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError> @ 14ee0b6c0

TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FPartialUpdatePresence::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError> @ 14ee0b740

TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FPromoteLobbyMember::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError> @ 14ee0b7c0

TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError> *this
          ,TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError>
           *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryAchievementDefinitions::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError> @ 14ee0b840

TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryAchievementStates::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> @ 14ee0b8c0

TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError> @ 14ee0b940

TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryUserPrivilege::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError> @ 14ee0b9c0

TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FReadEntriesAroundRank::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError> @ 14ee0ba40

TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FReadEntriesAroundUser::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError> @ 14ee0bac0

TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FReadEntriesForUsers::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> @ 14ee0bb40

TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> @ 14ee0bbc0

TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError> @ 14ee0bc40

TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError> *)(*pcVar2)()
      ;
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FRestoreLobbies::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> @ 14ee0bcc0

TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> @ 14ee0bd40

TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError> @ 14ee0bdc0

TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUnlockAchievements::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError> @ 14ee0be40

TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError> *)(*pcVar2)()
      ;
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUpdatePresence::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> @ 14ee0bec0

TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError> @ 14ee0bf40

TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FWriteLeaderboardScores::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError> @ 14ef6f3d0

TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FAcceptFriendInvite::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError> @ 14ef6f450

TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FBatchQueryStats::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError> @ 14ef6f4d0

TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FBlockUser::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FBlockUser::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError> @ 14ef6f550

TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryBlockedUsers::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError> @ 14ef6f5d0

TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryFriends::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError> @ 14ef6f650

TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryStats::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryStats::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError> @ 14ef6f6d0

TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryUserAvatar::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError> @ 14ef6f750

TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FQueryUserInfo::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError> @ 14ef6f7d0

TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FRejectFriendInvite::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError> @ 14ef6f850

TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FResetStats::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FResetStats::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError> @ 14ef6f8d0

TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FSendFriendInvite::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError> @ 14ef6f950

TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FShowUserProfile::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError> @ 14ef6f9d0

TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FTitleFileEnumerateFiles::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError> @ 14ef6fa50

TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FTitleFileReadFile::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError> @ 14ef6fad0

TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FTriggerEvent::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError> @ 14ef6fb50

TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUpdateStats::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError> @ 14ef6fbd0

TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUserFileCopyFile::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError> @ 14ef6fc50

TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUserFileDeleteFile::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError> @ 14ef6fcd0

TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUserFileEnumerateFiles::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError> @ 14ef6fd50

TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUserFileReadFile::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError> @ 14ef6fdd0

TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError> * __thiscall
TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError>::
TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError>
          (TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError> *this,
          TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::FUserFileWriteFile::Result,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

