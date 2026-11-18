// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetV1 @ 147bec670

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FUniqueNetIdWrapper::GetV1
          (FUniqueNetIdWrapper *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar6;
  ulonglong uVar7;
  
  __return_storage_ptr__->Object = (FUniqueNetId *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar7 = (ulonglong)(this->Variant).TypeIndex;
  if (1 < uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8098327459864248868>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x224,"IsV1()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  else {
    if ((this->Variant).TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pTVar1 = (TReferenceControllerBase<1> *)(this->Variant)._padding_;
    pFVar2 = (FUniqueNetId *)(this->Variant)._padding_;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return __return_storage_ptr__;
}

// GetV1Unsafe @ 147bec780

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FUniqueNetIdWrapper::GetV1Unsafe(FUniqueNetIdWrapper *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
  
  if ((this->Variant).TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TSharedPtr<FUniqueNetId_const_,1> *)&this->Variant;
}

// IsV1 @ 147bf16d0

bool __thiscall FUniqueNetIdWrapper::IsV1(FUniqueNetIdWrapper *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Variant).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4 + 4);
}

// FUniqueNetIdWrapper @ 147c2d630

FUniqueNetIdWrapper * __thiscall
FUniqueNetIdWrapper::FUniqueNetIdWrapper(FUniqueNetIdWrapper *this,FUniqueNetIdWrapper *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FUniqueNetIdWrapper *pFVar4;
  
  this->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  bVar1 = (param_1->Variant).TypeIndex;
  (this->Variant).TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUniqueNetIdWrapper *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(&this->Variant,&param_1->Variant);
  return this;
}

// operator-> @ 148090ad0

FUniqueNetId * __thiscall FUniqueNetIdWrapper::operator->(FUniqueNetIdWrapper *this)

{
  FUniqueNetId *pFVar1;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar2;
  TSharedPtr<FUniqueNetId_const_,1> local_18;
  
  pTVar2 = GetV1(this,&local_18);
  pFVar1 = pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar1;
}

// operator* @ 148090b00

FUniqueNetId * __thiscall FUniqueNetIdWrapper::operator*(FUniqueNetIdWrapper *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
  FUniqueNetId *pFVar4;
  TSharedPtr<FUniqueNetId_const_,1> local_18;
  
  pTVar3 = GetV1(this,&local_18);
  if (pTVar3->Object == (FUniqueNetId *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUniqueNetId *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = pTVar3->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar4;
}

// GetType @ 1480aaca0

FName __thiscall FUniqueNetIdWrapper::GetType(FUniqueNetIdWrapper *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  undefined8 *puVar5;
  FName in_RDX;
  ulonglong uVar6;
  undefined1 local_res10 [8];
  
  *(undefined8 *)in_RDX = 0;
  bVar3 = IsValid(this);
  if (bVar3) {
    uVar6 = (ulonglong)(this->Variant).TypeIndex;
    if (1 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6 + 4) == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8098327459864248905>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                         ,0x249,"IsV1()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FName)(*pcVar2)();
        return FVar4;
      }
    }
    else {
      if ((this->Variant).TypeIndex != '\0') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          FVar4 = (FName)(*pcVar2)();
          return FVar4;
        }
      }
      if ((this->Variant)._padding_ == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          FVar4 = (FName)(*pcVar2)();
          return FVar4;
        }
      }
      plVar1 = (longlong *)(this->Variant)._padding_;
      puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,local_res10);
      *(undefined8 *)in_RDX = *puVar5;
    }
  }
  return in_RDX;
}

// GetUniqueNetId @ 14838af00

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FUniqueNetIdWrapper::GetUniqueNetId
          (FUniqueNetIdWrapper *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FUniqueNetId *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar6;
  ulonglong uVar7;
  
  __return_storage_ptr__->Object = (FUniqueNetId *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar7 = (ulonglong)(this->Variant).TypeIndex;
  if (1 < uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) == '\0') {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8098327459864248868>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x224,"IsV1()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  else {
    if ((this->Variant).TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FUniqueNetId_const_,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pTVar1 = (TReferenceControllerBase<1> *)(this->Variant)._padding_;
    pFVar2 = (FUniqueNetId *)(this->Variant)._padding_;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return __return_storage_ptr__;
}

// operator= @ 1489bba10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUniqueNetIdWrapper * __thiscall
FUniqueNetIdWrapper::operator=(FUniqueNetIdWrapper *this,FUniqueNetIdWrapper *param_1)

{
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  *pTVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  FUniqueNetIdWrapper *pFVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  pTVar1 = &this->Variant;
  if (&param_1->Variant != pTVar1) {
    bVar3 = (param_1->Variant).TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar3);
    if (1 < (ulonglong)bVar3) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FUniqueNetIdWrapper *)(*pcVar4)();
        return pFVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[bVar3])(&local_38,&param_1->Variant);
    uVar2 = *(ulonglong *)&(this->Variant).TypeIndex;
    lVar5 = pTVar1->_padding_;
    lVar6 = (this->Variant)._padding_;
    pTVar1->_padding_ = local_38;
    (this->Variant)._padding_ = lStack_30;
    *(ulonglong *)&(this->Variant).TypeIndex = local_28;
    local_38 = lVar5;
    lStack_30 = lVar6;
    local_28 = uVar2;
    if (1 < (uVar2 & 0xff)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FUniqueNetIdWrapper *)(*pcVar4)();
        return pFVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar2 & 0xff])(&local_38);
  }
  return this;
}

