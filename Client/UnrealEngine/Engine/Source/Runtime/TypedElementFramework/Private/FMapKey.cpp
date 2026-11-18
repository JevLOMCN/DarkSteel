// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 21

// FMapKey @ 142c96b40

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,FMapKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMapKey *pFVar3;
  ulonglong uVar4;
  FKeyMove local_res8 [8];
  
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyMove,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>(unsigned___int64,UE::Editor::DataStorage::FKeyMove&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>&&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&this->Key,local_res8,&param_1->Key);
  uVar4 = (ulonglong)(param_1->Key).TypeIndex;
  if (9 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMapKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_1);
  (param_1->Key).TypeIndex = '\0';
  return this;
}

// FMapKey @ 142c96be0

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,FMapKey *param_1)

{
  FKeyCopy local_res8 [32];
  
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&this->Key,local_res8,&param_1->Key);
  return this;
}

// FMapKey @ 142c96c20

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,float param_1)

{
  *(float *)&(this->Key)._padding_ = param_1;
  (this->Key).TypeIndex = '\x05';
  return this;
}

// FMapKey @ 142c96c40

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,double param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\x06';
  return this;
}

// FMapKey @ 142c96c60

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,UObject *param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\x02';
  return this;
}

// FMapKey @ 142c96c80

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,void *param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\x01';
  return this;
}

// FMapKey @ 142c96ca0

FMapKey * __thiscall
UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,FSoftObjectPath *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FName *pFVar3;
  FName *pFVar4;
  
  pFVar3 = ::operator_new(0x20);
  pFVar4 = (FName *)0x0;
  if (pFVar3 != (FName *)0x0) {
    FVar2 = (param_1->AssetPath).AssetName;
    *pFVar3 = (param_1->AssetPath).PackageName;
    pFVar3[1] = FVar2;
    pFVar3[2].ComparisonIndex = 0;
    pFVar3[2].Number = 0;
    pFVar3[2] = (FName)(param_1->SubPathString).Data.AllocatorInstance.Data;
    (param_1->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3[3].ComparisonIndex.Value = (param_1->SubPathString).Data.ArrayNum;
    pFVar3[3].Number = (param_1->SubPathString).Data.ArrayMax;
    (param_1->SubPathString).Data.ArrayNum = 0;
    (param_1->SubPathString).Data.ArrayMax = 0;
    pFVar4 = pFVar3;
  }
  (this->Key)._padding_ = (longlong)pFVar4;
  (this->Key).TypeIndex = '\t';
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FMapKey @ 142c96d20

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,FName param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\b';
  return this;
}

// FMapKey @ 142c96d40

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->Key)._padding_ = 0;
  (this->Key)._padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&(this->Key)._padding_ = (param_1->Data).ArrayNum;
  *(int *)((longlong)&(this->Key)._padding_ + 4) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->Key).TypeIndex = '\a';
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FMapKey @ 142c96d90

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,long64 param_1)

{
  (this->Key)._padding_ = param_1;
  (this->Key).TypeIndex = '\x03';
  return this;
}

// FMapKey @ 142c96db0

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::FMapKey(FMapKey *this,ulong64 param_1)

{
  (this->Key)._padding_ = param_1;
  (this->Key).TypeIndex = '\x04';
  return this;
}

// operator= @ 142c9b6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::operator=(FMapKey *this,FMapKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMapKey *pFVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  FKeyMove local_48 [8];
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyMove,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>(unsigned___int64,UE::Editor::DataStorage::FKeyMove&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>&&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&local_40,local_48,&param_1->Key);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::operator=(&this->Key,&local_40);
  if (9 < (ulonglong)local_40.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMapKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])(&local_40);
  uVar4 = (ulonglong)(param_1->Key).TypeIndex;
  if (9 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMapKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(param_1);
  (param_1->Key).TypeIndex = '\0';
  return this;
}

// operator= @ 142c9b7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMapKey * __thiscall UE::Editor::DataStorage::FMapKey::operator=(FMapKey *this,FMapKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMapKey *pFVar3;
  undefined1 auStack_58 [32];
  FKeyCopy local_38 [8];
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&local_30,local_38,&param_1->Key);
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  ::operator=(&this->Key,&local_30);
  if (9 < (ulonglong)local_30.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMapKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_30.TypeIndex])(&local_30);
  return this;
}

// operator== @ 142c9c300

bool __thiscall UE::Editor::DataStorage::FMapKey::operator==(FMapKey *this,FMapKey *param_1)

{
  bool bVar1;
  FKeyComparer local_res8 [4];
  
  local_res8[0].Key = &this->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])(local_res8,&param_1->Key);
  return bVar1;
}

// operator== @ 142c9c330

bool __thiscall UE::Editor::DataStorage::FMapKey::operator==(FMapKey *this,FMapKeyView *param_1)

{
  bool bVar1;
  FKeyViewComparer local_res8 [4];
  
  local_res8[0].Key = &param_1->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(this->Key).TypeIndex])(local_res8,&this->Key);
  return bVar1;
}

// operator!= @ 142c9c3c0

bool __thiscall UE::Editor::DataStorage::FMapKey::operator!=(FMapKey *this,FMapKey *param_1)

{
  bool bVar1;
  FKeyComparer local_res8 [4];
  
  local_res8[0].Key = &this->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])(local_res8,&param_1->Key);
  return !bVar1;
}

// operator!= @ 142c9c3f0

bool __thiscall UE::Editor::DataStorage::FMapKey::operator!=(FMapKey *this,FMapKeyView *param_1)

{
  bool bVar1;
  FKeyViewComparer local_res8 [4];
  
  local_res8[0].Key = &param_1->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(this->Key).TypeIndex])(local_res8,&this->Key);
  return !bVar1;
}

// CalculateHash @ 142ca71d0

ulong64 __thiscall UE::Editor::DataStorage::FMapKey::CalculateHash(FMapKey *this)

{
  ulong64 uVar1;
  FHasher local_res8 [32];
  
  uVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(this->Key).TypeIndex])(local_res8,&this->Key);
  return uVar1;
}

// Clear @ 142ca7670

void __thiscall UE::Editor::DataStorage::FMapKey::Clear(FMapKey *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)(this->Key).TypeIndex;
  if (9 < uVar3) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar3])(this);
  (this->Key).TypeIndex = '\0';
  return;
}

// IsSet @ 142cafd40

bool __thiscall UE::Editor::DataStorage::FMapKey::IsSet(FMapKey *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Key).TypeIndex;
  if (9 < uVar4) {
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
  return *(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar4) == '\0';
}

// ToString @ 142cc0890

FString * __thiscall
UE::Editor::DataStorage::FMapKey::ToString(FMapKey *this,FString *__return_storage_ptr__)

{
  FToString local_res8 [32];
  
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(this->Key).TypeIndex])(__return_storage_ptr__,local_res8,&this->Key);
  return __return_storage_ptr__;
}

