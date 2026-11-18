// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 29

// TAttribute<UE::Slate::Private::FConstructionCounter><UE::Slate::Private::FConstructionCounter> @ 142535430

TAttribute<UE::Slate::Private::FConstructionCounter> * __thiscall
TAttribute<UE::Slate::Private::FConstructionCounter>::
TAttribute<UE::Slate::Private::FConstructionCounter><UE::Slate::Private::FConstructionCounter>
          (TAttribute<UE::Slate::Private::FConstructionCounter> *this,FConstructionCounter *param_1)

{
  (this->Value).Value = param_1->Value;
  UE::Slate::Private::FConstructionCounter::CopyConstructionCounter =
       UE::Slate::Private::FConstructionCounter::CopyConstructionCounter + 1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<int> @ 142540260

TAttribute<int> * __thiscall TAttribute<int>::TAttribute<int>(TAttribute<int> *this,int *param_1)

{
  this->Value = *param_1;
  this->bIsSet = true;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// TAttribute<UE::Slate::Private::FConstructionCounter> @ 142540280

TAttribute<UE::Slate::Private::FConstructionCounter> * __thiscall
TAttribute<UE::Slate::Private::FConstructionCounter>::
TAttribute<UE::Slate::Private::FConstructionCounter>
          (TAttribute<UE::Slate::Private::FConstructionCounter> *this)

{
  (this->Value).Value = 0;
  UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter =
       UE::Slate::Private::FConstructionCounter::DefaultConstructionCounter + 1;
  this->bIsSet = false;
  *(undefined8 *)&(this->Getter).field_0x10 = 0;
  *(undefined8 *)&this->Getter = 0;
  *(undefined8 *)&(this->Getter).field_0x8 = 0;
  return this;
}

// ~TAttribute<int> @ 14254a140

void __thiscall TAttribute<int>::~TAttribute<int>(TAttribute<int> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// ~TAttribute<UE::Slate::Private::FConstructionCounter> @ 14254a180

void __thiscall
TAttribute<UE::Slate::Private::FConstructionCounter>::
~TAttribute<UE::Slate::Private::FConstructionCounter>
          (TAttribute<UE::Slate::Private::FConstructionCounter> *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  pvVar1 = *(void **)&(this->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Getter);
  return;
}

// Get @ 14257e3e0

int * __thiscall TAttribute<int>::Get(TAttribute<int> *this)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar3 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->Getter).field_0x8;
      }
      iVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this->Value = iVar2;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// Get @ 14257e480

FConstructionCounter * __thiscall
TAttribute<UE::Slate::Private::FConstructionCounter>::Get
          (TAttribute<UE::Slate::Private::FConstructionCounter> *this)

{
  char cVar1;
  longlong *plVar2;
  FConstructionCounter local_res8 [2];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->Value).Value = local_res8[0].Value;
      UE::Slate::Private::FConstructionCounter::MoveOperatorCounter =
           UE::Slate::Private::FConstructionCounter::MoveOperatorCounter + 1;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return &this->Value;
}

// IsBound @ 14258bb40

bool __thiscall TAttribute<int>::IsBound(TAttribute<int> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14258bba0

bool __thiscall TAttribute<FSlateBrush_const_*>::IsBound(TAttribute<FSlateBrush_const_*> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsBound @ 14258bc00

bool __thiscall
TAttribute<UE::Slate::Private::FConstructionCounter>::IsBound
          (TAttribute<UE::Slate::Private::FConstructionCounter> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Set @ 142590040

void __thiscall
TAttribute<UE::Slate::Private::FConstructionCounter>::Set
          (TAttribute<UE::Slate::Private::FConstructionCounter> *this,FConstructionCounter *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
  (this->Value).Value = param_1->Value;
  UE::Slate::Private::FConstructionCounter::MoveOperatorCounter =
       UE::Slate::Private::FConstructionCounter::MoveOperatorCounter + 1;
  this->bIsSet = true;
  return;
}

// Steal @ 1425a87a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TAttribute<int>::Steal
          (TAttribute<int> *this,
          TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  int local_48 [6];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *)(*pcVar3)()
      ;
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      piVar10 = (int *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1425a8874;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar4 = false;
  bVar5 = true;
  local_48[0] = this->Value;
  piVar10 = local_48;
  local_30 = 0;
LAB_1425a8874:
  bVar1 = *(byte *)(piVar10 + 6);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *)(*pcVar3)()
      ;
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,piVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] != UE::Core::Private::TDestructorCaller<int>::Destruct
       ) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1425a89c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<UE::Slate::Private::FConstructionCounter>::Steal
          (TAttribute<UE::Slate::Private::FConstructionCounter> *this,
          TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  int local_48 [6];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      piVar10 = (int *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1425a8a9a;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar4 = false;
  bVar5 = true;
  UE::Slate::Private::FConstructionCounter::MoveConstructionCounter =
       UE::Slate::Private::FConstructionCounter::MoveConstructionCounter + 1;
  piVar10 = local_48;
  local_48[0] = (this->Value).Value;
  local_30 = 0;
LAB_1425a8a9a:
  bVar1 = *(byte *)(piVar10 + 6);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,piVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<UE::Slate::Private::FConstructionCounter>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<UE::Slate::Private::FConstructionCounter,TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Slate::Private::FConstructionCounter,TDelegate<struct_UE::Slate::Private::FConstructionCounter___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1425a8be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TAttribute<FMargin>::Steal
          (TAttribute<FMargin> *this,
          TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      puVar10 = (undefined8 *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1425a8cb6;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  local_30 = 0;
  puVar10 = &local_48;
  bVar4 = false;
  bVar5 = true;
  local_48._0_4_ = (this->Value).Left;
  local_48._4_4_ = (this->Value).Top;
  uStack_40._0_4_ = (this->Value).Right;
  uStack_40._4_4_ = (this->Value).Bottom;
LAB_1425a8cb6:
  bVar1 = *(byte *)(puVar10 + 3);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<FMargin>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FMargin,TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMargin,TDelegate<struct_FMargin___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// operator= @ 1425c2830

TAttribute<FText> * __thiscall
TAttribute<FText>::operator=(TAttribute<FText> *this,TAttribute<FText> *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->Value).TextData.Reference;
  pIVar2 = (this->Value).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Value).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Value).Flags = (param_1->Value).Flags;
  this->bIsSet = param_1->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Getter,&param_1->Getter);
  return this;
}

// Get @ 1425dcec0

float * __thiscall TAttribute<float>::Get(TAttribute<float> *this)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  FReadAccessScope local_38 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,local_38);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      fVar3 = (float)(**(code **)(*plVar2 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_38);
      this->Value = fVar3;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_38);
  return &this->Value;
}

// Get @ 1425dcf70

TOptional<EMouseCursor::Type> * __thiscall
TAttribute<TOptional<enum_EMouseCursor::Type>_>::Get(void *this)

{
  char cVar1;
  longlong *plVar2;
  undefined4 local_28;
  char local_24;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
             &local_20);
  if (((*(int *)((longlong)this + 0x20) == 0) ||
      (*(longlong **)((longlong)this + 0x18) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
               &local_20);
    if (*(int *)((longlong)this + 0x20) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)((longlong)this + 0x18);
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    if (&local_28 != this) {
      if (local_24 != '\0') {
        *(undefined4 *)this = local_28;
        *(undefined1 *)((longlong)this + 4) = 1;
        return this;
      }
      if (*(char *)((longlong)this + 4) != '\0') {
        *(undefined1 *)((longlong)this + 4) = 0;
        return this;
      }
    }
  }
  return this;
}

// Get @ 1425dd050

TVector2<double> * __thiscall
TAttribute<UE::Math::TVector2<double>_>::Get(TAttribute<UE::Math::TVector2<double>_> *this)

{
  char cVar1;
  longlong *plVar2;
  double local_38;
  FMRSWRecursiveAccessDetector *pFStack_30;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      (this->Value).field0_0x0._s_0.X = local_38;
      (this->Value).field0_0x0._s_0.Y = (double)pFStack_30;
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  return &this->Value;
}

// Get @ 1425dd100

FSlateColor * __thiscall TAttribute<FSlateColor>::Get(TAttribute<FSlateColor> *this)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)&local_38);
  if (((*(int *)&(this->Getter).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->Getter).field_0x8, plVar3 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar3 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  if (bVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_20);
    if (*(int *)&(this->Getter).field_0x10 == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)&(this->Getter).field_0x8;
    }
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0 = local_38._0_8_;
    *(FMRSWRecursiveAccessDetector **)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8) =
         local_38.Accessor;
    (this->Value).ColorUseRule = local_38.bDestroyed;
    (this->Value).ColorTableId = local_38._17_1_;
    *(undefined2 *)&(this->Value).field_0x12 = local_38._18_2_;
  }
  return &this->Value;
}

// Get @ 1425dd1d0

TSharedPtr<IToolTip,1> * __thiscall
TAttribute<TSharedPtr<IToolTip,1>_>::Get(TAttribute<TSharedPtr<IToolTip,1>_> *this)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [48];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
             (FReadAccessScope *)(local_38 + 0x10));
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,
                 (FReadAccessScope *)(local_38 + 0x10));
      if (*(int *)&(this->Getter).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->Getter).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_38 + 0x10));
      if (this != (TAttribute<TSharedPtr<IToolTip,1>_> *)local_38) {
        (this->Value).Object = (IToolTip *)local_38._0_8_;
        local_38._0_8_ = (IToolTip *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Value).SharedReferenceCount,(FSharedReferencer<1> *)(local_38 + 8));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_38._8_8_);
      return &this->Value;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_38 + 0x10));
  return &this->Value;
}

// IsBound @ 1425e9080

bool __thiscall TAttribute<FSlateColor>::IsBound(TAttribute<FSlateColor> *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_28);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->Getter).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Steal @ 1425ff910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TAttribute<float>::Steal
          (TAttribute<float> *this,
          TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  float *pfVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  float local_48 [6];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      pfVar10 = (float *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1425ff9e8;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar4 = false;
  bVar5 = true;
  local_48[0] = this->Value;
  pfVar10 = local_48;
  local_30 = 0;
LAB_1425ff9e8:
  bVar1 = *(byte *)(pfVar10 + 6);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pfVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<float>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1425ffb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<FSlateBrush_const_*>::Steal
          (TAttribute<FSlateBrush_const_*> *this,
          TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  FSlateBrush **ppFVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  FSlateBrush *local_48 [3];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      ppFVar10 = (FSlateBrush **)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1425ffc06;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar4 = false;
  bVar5 = true;
  local_48[0] = this->Value;
  ppFVar10 = local_48;
  local_30 = 0;
LAB_1425ffc06:
  bVar1 = *(byte *)(ppFVar10 + 3);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,ppFVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<FSlateBrush_const_*>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FSlateBrush_const_*,TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateBrush_const*___ptr64,TDelegate<struct_FSlateBrush_const*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1425ffd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<TOptional<UE::Math::TVector2<double>_>_>::Steal
          (TAttribute<TOptional<UE::Math::TVector2<double>_>_> *this,
          TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  double *pdVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  double local_48;
  double dStack_40;
  char local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      pdVar10 = (double *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1425ffe32;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  local_38 = (this->Value).bIsSet;
  if ((bool)local_38 != false) {
    local_48 = (this->Value).TypedValue.field0_0x0._s_0.X;
    dStack_40 = (this->Value).TypedValue.field0_0x0._s_0.Y;
  }
  local_30 = 0;
  pdVar10 = &local_48;
  bVar4 = false;
  bVar5 = true;
LAB_1425ffe32:
  bVar1 = *(byte *)(pdVar10 + 3);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TOptional<UE::Math::TVector2<double>_>,TDelegate<struct_TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pdVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<UE::Math::TVector2<double>_>,TDelegate<struct_TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<TOptional<UE::Math::TVector2<double>_>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<UE::Math::TVector2<double>_>,TDelegate<struct_TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<TOptional<UE::Math::TVector2<double>_>,TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<UE::Math::TVector2<double>_>,TDelegate<struct_TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<UE::Math::TVector2<double>_>,TDelegate<struct_TOptional<UE::Math::TVector2<double>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1425fff80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<TOptional<TTransform2<float>_>_>::Steal
          (TAttribute<TOptional<TTransform2<float>_>_> *this,
          TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  float *pfVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  FReadAccessScope local_90;
  undefined1 local_78 [32];
  byte local_58 [8];
  float local_50 [2];
  float afStack_48 [2];
  TVector2<float>_u_0 local_40;
  char local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_90);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_58[0] = 1;
      pfVar10 = (float *)local_78;
      bVar4 = true;
      bVar5 = false;
      goto LAB_142600073;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_90);
  local_38 = (this->Value).bIsSet;
  if ((bool)local_38 != false) {
    local_50 = (this->Value).TypedValue.M.M[0];
    afStack_48 = (this->Value).TypedValue.M.M[1];
    local_40 = (this->Value).TypedValue.Trans.field0_0x0;
  }
  local_30 = 0;
  pfVar10 = local_50;
  bVar4 = false;
  bVar5 = true;
LAB_142600073:
  bVar1 = *(byte *)(pfVar10 + 8);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<TOptional<TTransform2<float>_>,TDelegate<struct_TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pfVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<TTransform2<float>_>,TDelegate<struct_TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<TOptional<TTransform2<float>_>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<TTransform2<float>_>,TDelegate<struct_TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_50);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_58[0];
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<TOptional<TTransform2<float>_>,TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<TTransform2<float>_>,TDelegate<struct_TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
      if ((void *)local_78._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_78._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_78);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TOptional<TTransform2<float>_>,TDelegate<struct_TOptional<TTransform2<float>_>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1426001c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
* __thiscall
TAttribute<UE::Math::TVector2<double>_>::Steal
          (TAttribute<UE::Math::TVector2<double>_> *this,
          TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
  *pTVar8;
  ulonglong uVar9;
  double *pdVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  double local_48;
  double dStack_40;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      pdVar10 = (double *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_142600296;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  local_30 = 0;
  pdVar10 = &local_48;
  bVar4 = false;
  bVar5 = true;
  local_48 = (this->Value).field0_0x0._s_0.X;
  dStack_40 = (this->Value).field0_0x0._s_0.Y;
LAB_142600296:
  bVar1 = *(byte *)(pdVar10 + 3);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pdVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<UE::Math::TVector2<double>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<UE::Math::TVector2<double>,TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>
        ::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Math::TVector2<double>,TDelegate<struct_UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 1426003e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TAttribute<EVisibility>::Steal
          (TAttribute<EVisibility> *this,
          TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  TEnumAsByte<EVisibility::Private> *pTVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  TEnumAsByte<EVisibility::Private> local_48 [24];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      pTVar10 = (TEnumAsByte<EVisibility::Private> *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1426004b5;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar4 = false;
  bVar5 = true;
  local_48[0].Value = (this->Value).Value.Value;
  pTVar10 = local_48;
  local_30 = 0;
LAB_1426004b5:
  bVar1 = pTVar10[0x18].Value;
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<EVisibility,TDelegate<struct_EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,pTVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EVisibility,TDelegate<struct_EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<EVisibility>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EVisibility,TDelegate<struct_EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<EVisibility,TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EVisibility,TDelegate<struct_EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::
        Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<EVisibility,TDelegate<struct_EVisibility___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 142600600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TAttribute<FSlateColor>::Steal
          (TAttribute<FSlateColor> *this,
          TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      puVar10 = (undefined8 *)local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1426006dd;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  puVar10 = &local_48;
  local_38._0_1_ = (this->Value).ColorUseRule;
  local_38._1_1_ = (this->Value).ColorTableId;
  local_38._2_2_ = *(undefined2 *)&(this->Value).field_0x12;
  bVar4 = false;
  bVar5 = true;
  local_48 = *(undefined8 *)&(this->Value).SpecifiedColor.field0_0x0;
  uStack_40 = *(undefined8 *)((longlong)&(this->Value).SpecifiedColor.field0_0x0 + 8);
  local_30 = 0;
LAB_1426006dd:
  bVar1 = *(byte *)(puVar10 + 3);
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<FSlateColor>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(&local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<FSlateColor,TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::
        Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FSlateColor,TDelegate<struct_FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

// Steal @ 142600820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TAttribute<bool>::Steal
          (TAttribute<bool> *this,
          TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *pTVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  FReadAccessScope local_80;
  undefined1 local_68 [24];
  byte local_50;
  undefined1 local_48 [24];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (this->bIsSet == false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Attribute.h"
                       ,0x1c1,
                       L"It is an error to call Steal() on an unset TAttribute. Check IsSet() before calling Steal()."
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  this->bIsSet = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Getter,&local_80);
  if ((*(int *)&(this->Getter).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->Getter).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar2 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Getter);
      local_50 = 1;
      puVar10 = local_68;
      bVar4 = true;
      bVar5 = false;
      goto LAB_1426008f5;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  bVar4 = false;
  bVar5 = true;
  local_48[0] = this->Value;
  puVar10 = local_48;
  local_30 = 0;
LAB_1426008f5:
  bVar1 = puVar10[0x18];
  __return_storage_ptr__->TypeIndex = bVar1;
  if (1 < bVar1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *)
               (*pcVar3)();
      return pTVar8;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(__return_storage_ptr__,puVar10);
  if (bVar5) {
    uVar9 = (ulonglong)local_30;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] !=
        UE::Core::Private::TDestructorCaller<bool>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])(local_48);
    }
  }
  if (bVar4) {
    uVar9 = (ulonglong)local_50;
    if (1 < uVar9) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TVariant<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_> *)
                 (*pcVar3)();
        return pTVar8;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9] ==
        UE::Core::Private::
        TDestructorCaller<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
      if ((void *)local_68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_68);
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar9])();
    }
  }
  return __return_storage_ptr__;
}

