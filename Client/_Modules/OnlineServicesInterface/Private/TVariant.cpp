// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 6

// Get<double> @ 14ec20f50

double * __thiscall
TVariant<FString,__int64,double,bool>::Get<double>(TVariant<FString,__int64,double,bool> *this)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pdVar3 = (double *)(*pcVar1)();
      return pdVar3;
    }
  }
  return (double *)this;
}

// Get<FString> @ 14ec20fa0

FString * __thiscall
TVariant<FString,__int64,double,bool>::Get<FString>(TVariant<FString,__int64,double,bool> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FString *)this;
}

// Get<__int64> @ 14ec20ff0

long64 * __thiscall
TVariant<FString,__int64,double,bool>::Get<__int64>(TVariant<FString,__int64,double,bool> *this)

{
  code *pcVar1;
  bool bVar2;
  long64 *plVar3;
  
  if (this->TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      plVar3 = (long64 *)(*pcVar1)();
      return plVar3;
    }
  }
  return &this->_padding_;
}

// Get<bool> @ 14ec21040

bool * __thiscall
TVariant<FString,__int64,double,bool>::Get<bool>(TVariant<FString,__int64,double,bool> *this)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (this->TypeIndex != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pbVar3 = (bool *)(*pcVar1)();
      return pbVar3;
    }
  }
  return (bool *)this;
}

// TVariant<FString,__int64,double,bool> @ 14ec22780

TVariant<FString,__int64,double,bool> * __thiscall
TVariant<FString,__int64,double,bool>::TVariant<FString,__int64,double,bool>
          (TVariant<FString,__int64,double,bool> *this,
          TVariant<FString,__int64,double,bool> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<FString,__int64,double,bool> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<FString,__int64,double,bool> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FString,__int64,double,bool>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

// operator= @ 14ec243a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FString,__int64,double,bool> * __thiscall
TVariant<FString,__int64,double,bool>::operator=
          (TVariant<FString,__int64,double,bool> *this,
          TVariant<FString,__int64,double,bool> *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  TVariant<FString,__int64,double,bool> *pTVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != this) {
    bVar2 = param_1->TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar2);
    if (3 < (ulonglong)bVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVariant<FString,__int64,double,bool> *)(*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FString,__int64,double,bool>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar2])(&local_38,param_1);
    uVar1 = *(ulonglong *)&this->TypeIndex;
    lVar4 = this->_padding_;
    lVar5 = this->_padding_;
    this->_padding_ = local_38;
    this->_padding_ = lStack_30;
    *(ulonglong *)&this->TypeIndex = local_28;
    local_38 = lVar4;
    lStack_30 = lVar5;
    local_28 = uVar1;
    if (3 < (uVar1 & 0xff)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVariant<FString,__int64,double,bool> *)(*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_38);
  }
  return this;
}

