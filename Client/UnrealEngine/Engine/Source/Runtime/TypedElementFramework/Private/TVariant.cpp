// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// IsType<FEmptyVariantState> @ 142c900e0

bool __thiscall
TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
::IsType<FEmptyVariantState>
          (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (9 < (ulonglong)bVar1) {
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
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

// ~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_> @ 142c99f40

void __thiscall
TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
::
~TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
           *this)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  
  bVar1 = this->TypeIndex;
  if (9 < bVar1) {
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    return;
  case 5:
    return;
  case 6:
    return;
  case 8:
    return;
  case 9:
    pvVar2 = (void *)this->_padding_;
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((longlong)pvVar2 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 0x10));
      }
      ::operator_delete(pvVar2,0x20);
      return;
    }
    return;
  }
  pvVar2 = (void *)this->_padding_;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (pvVar2 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar2,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  }
  return;
}

// operator= @ 142c9b2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __thiscall
TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
::operator=(TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *this,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                  *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 != this) {
    bVar2 = param_1->TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar2);
    if (9 < (ulonglong)bVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
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
    if (9 < (uVar1 & 0xff)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_38);
  }
  return this;
}

