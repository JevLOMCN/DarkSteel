// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FNetIDVariant @ 148014370

FNetIDVariant * __thiscall
UE::Net::FNetIDVariant::FNetIDVariant(FNetIDVariant *this,FNetRefHandle param_1)

{
  (this->Variant)._padding_ = (longlong)param_1.field0_0x0;
  (this->Variant).TypeIndex = '\x02';
  return this;
}

// FNetIDVariant @ 148014390

FNetIDVariant * __thiscall
UE::Net::FNetIDVariant::FNetIDVariant(FNetIDVariant *this,FNetworkGUID param_1)

{
  (this->Variant)._padding_ = (longlong)param_1.field0_0x0;
  (this->Variant).TypeIndex = '\x01';
  return this;
}

// operator== @ 148019140

bool __thiscall UE::Net::FNetIDVariant::operator==(FNetIDVariant *this,FNetIDVariant *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FNetRefHandle_u_0 *pFVar4;
  FNetRefHandle_u_0 *pFVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(this->Variant).TypeIndex;
  if (uVar6 != (param_1->Variant).TypeIndex) {
    return false;
  }
  if (2 < uVar6) {
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
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Net::FNetRefHandle,UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6 + 4) == '\0') {
    uVar6 = (ulonglong)(this->Variant).TypeIndex;
    if (2 < uVar6) {
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
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Net::FNetRefHandle,UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar6) == '\0') {
      bVar2 = true;
    }
    else {
      pFVar4 = &TVariant<UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::
                Get<UE::Net::FNetRefHandle>(&this->Variant)->field0_0x0;
      pFVar5 = &TVariant<UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::
                Get<UE::Net::FNetRefHandle>(&param_1->Variant)->field0_0x0;
      bVar2 = ((pFVar5->Value ^ pFVar4->Value) & 0x3fffffffffffff) == 0;
    }
  }
  else {
    if ((param_1->Variant).TypeIndex != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((this->Variant).TypeIndex != '\x01') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = (this->Variant)._padding_ == (param_1->Variant)._padding_;
  }
  return bVar2;
}

// IsValid @ 148041d20

bool __thiscall UE::Net::FNetIDVariant::IsValid(FNetIDVariant *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(this->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar1 = (this->Variant).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Net::FNetRefHandle,UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) != '\0') {
    if (bVar1 != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (this->Variant)._padding_ != 0;
  }
  if (2 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Net::FNetRefHandle,UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) != '\0') {
    if ((this->Variant).TypeIndex != '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (this->Variant)._padding_ != 0;
  }
  return false;
}

// ToString @ 148067530

FString * __thiscall
UE::Net::FNetIDVariant::ToString(FNetIDVariant *this,FString *__return_storage_ptr__)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(this->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  bVar1 = (this->Variant).TypeIndex;
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Net::FNetRefHandle,UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    if (2 < (ulonglong)bVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Net::FNetRefHandle,UE::Net::FNetIDVariant::FEmptyID,FNetworkGUID,UE::Net::FNetRefHandle>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
      ::FString::FString(__return_storage_ptr__,L"Invalid");
    }
    else {
      if ((this->Variant).TypeIndex != '\x02') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
      }
      FNetRefHandle::ToString((FNetRefHandle *)this,__return_storage_ptr__);
    }
  }
  else {
    if (bVar1 != 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  }
  return __return_storage_ptr__;
}

