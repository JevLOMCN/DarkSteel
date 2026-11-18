// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// operator= @ 142a57b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> * __thiscall
TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::operator=
          (TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *this,
          TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *pTVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != this) {
    bVar2 = (param_1->Variant).TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar2);
    if (2 < (ulonglong)bVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *)
                 (*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar2])(&local_38,param_1);
    uVar1 = *(ulonglong *)&(this->Variant).TypeIndex;
    lVar4 = (this->Variant)._padding_;
    lVar5 = (this->Variant)._padding_;
    (this->Variant)._padding_ = local_38;
    (this->Variant)._padding_ = lStack_30;
    *(ulonglong *)&(this->Variant).TypeIndex = local_28;
    local_38 = lVar4;
    lStack_30 = lVar5;
    local_28 = uVar1;
    if (2 < (uVar1 & 0xff)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError> *)
                 (*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::FMountPaksExArgs::FMountResult,TValueOrError<UE::FMountPaksExArgs::FMountResult,UE::UnifiedError::FError>::FWrapErrorType,TValueOrError<struct_UE::FMountPaksExArgs::FMountResult,class_UE::UnifiedError::FError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_38);
  }
  return this;
}

