// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 4

// IsType<TValueOrError<FString,FString>::FWrapErrorType> @ 14a73e8e0

bool __thiscall
TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
::IsType<TValueOrError<FString,FString>::FWrapErrorType>
          (TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
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
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1 + 4);
}

// IsType<FString> @ 14a73e930

bool __thiscall
TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
::IsType<FString>(TVariant<FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<FString,FString>::FEmptyType>
                  *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
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
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FString,FString,TValueOrError<FString,FString>::FWrapErrorType,TValueOrError<class_FString,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

// TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*> @ 14a73f2e0

TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*> *
__thiscall
TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>::
TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
          (TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
           *this,TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// operator= @ 14a740aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*> *
__thiscall
TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>::
operator=(TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
          *this,TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                *param_1)

{
  code *pcVar1;
  bool bVar2;
  TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
  *pTVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong lStack_20;
  byte local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1 != this) {
    local_18 = param_1->TypeIndex;
    uVar4 = (ulonglong)local_18;
    if (2 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVariant<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject_*>
                  *)(*pcVar1)();
        return pTVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,UE::MVVM::TObjectVariant<0>::FScriptStructStackedContainer,UObject*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[uVar4])(&local_28,param_1);
    this->_padding_ = local_28;
    this->_padding_ = lStack_20;
    *(ulonglong *)&this->TypeIndex = CONCAT71(uStack_17,local_18);
  }
  return this;
}

