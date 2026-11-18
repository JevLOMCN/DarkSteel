// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 1

// operator= @ 1443460b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResolveResult * __thiscall
UE::UniversalObjectLocator::FResolveResult::operator=(FResolveResult *this,FResolveResult *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  FResolveResult *pFVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != this) {
    bVar2 = (param_1->Value).TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar2);
    if (1 < (ulonglong)bVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FResolveResult *)(*pcVar3)();
        return pFVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar2])(&local_38,param_1);
    uVar1 = *(ulonglong *)&(this->Value).TypeIndex;
    lVar4 = (this->Value)._padding_;
    lVar5 = (this->Value)._padding_;
    (this->Value)._padding_ = local_38;
    (this->Value)._padding_ = lStack_30;
    *(ulonglong *)&(this->Value).TypeIndex = local_28;
    local_38 = lVar4;
    lStack_30 = lVar5;
    local_28 = uVar1;
    if (1 < (uVar1 & 0xff)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FResolveResult *)(*pcVar3)();
        return pFVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_38);
  }
  return this;
}

