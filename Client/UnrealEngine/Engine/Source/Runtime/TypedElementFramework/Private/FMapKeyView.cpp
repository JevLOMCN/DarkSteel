// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 19

// FMapKeyView @ 142c96dd0

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,FSoftObjectPath *param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\t';
  return this;
}

// FMapKeyView @ 142c96df0

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,FMapKey *param_1)

{
  FKeyToKeyViewConverter local_res8 [32];
  
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyToKeyViewConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyToKeyViewConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&this->Key,local_res8,&param_1->Key);
  return this;
}

// FMapKeyView @ 142c96e30

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,FName *param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\b';
  return this;
}

// FMapKeyView @ 142c96e50

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  (this->Key)._padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *(int *)&(this->Key)._padding_ = iVar2;
  (this->Key).TypeIndex = '\a';
  return this;
}

// FMapKeyView @ 142c96e80

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,float param_1)

{
  *(float *)&(this->Key)._padding_ = param_1;
  (this->Key).TypeIndex = '\x05';
  return this;
}

// FMapKeyView @ 142c96ea0

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,double param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\x06';
  return this;
}

// FMapKeyView @ 142c96ec0

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,UObject *param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\x02';
  return this;
}

// FMapKeyView @ 142c96ee0

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,void *param_1)

{
  (this->Key)._padding_ = (longlong)param_1;
  (this->Key).TypeIndex = '\x01';
  return this;
}

// FMapKeyView @ 142c96f00

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,TStringView<wchar_t> *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&param_1->Size;
  (this->Key)._padding_ = (longlong)param_1->DataPtr;
  (this->Key)._padding_ = lVar1;
  (this->Key).TypeIndex = '\a';
  return this;
}

// FMapKeyView @ 142c96f20

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,long64 param_1)

{
  (this->Key)._padding_ = param_1;
  (this->Key).TypeIndex = '\x03';
  return this;
}

// FMapKeyView @ 142c96f40

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::FMapKeyView(FMapKeyView *this,ulong64 param_1)

{
  (this->Key)._padding_ = param_1;
  (this->Key).TypeIndex = '\x04';
  return this;
}

// operator= @ 142c9b860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMapKeyView * __thiscall
UE::Editor::DataStorage::FMapKeyView::operator=(FMapKeyView *this,FMapKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMapKeyView *pFVar3;
  undefined1 auStack_68 [32];
  FKeyToKeyViewConverter local_48 [8];
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_40;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyToKeyViewConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyToKeyViewConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&local_40,local_48,&param_1->Key);
  if (&local_40 != &this->Key) {
    local_18 = local_40.TypeIndex;
    if (9 < (local_40._16_8_ & 0xff)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMapKeyView *)(*pcVar1)();
        return pFVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[local_40._16_8_ & 0xff])(&local_28,&local_40);
    (this->Key)._padding_ = local_28;
    (this->Key)._padding_ = lStack_20;
    *(ulonglong *)&(this->Key).TypeIndex = CONCAT71(uStack_17,local_18);
  }
  return this;
}

// operator== @ 142c9c360

bool __thiscall
UE::Editor::DataStorage::FMapKeyView::operator==(FMapKeyView *this,FMapKeyView *param_1)

{
  bool bVar1;
  FKeyViewComparer local_res8 [4];
  
  local_res8[0].Key = &this->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])(local_res8,&param_1->Key);
  return bVar1;
}

// operator== @ 142c9c390

bool __thiscall UE::Editor::DataStorage::FMapKeyView::operator==(FMapKeyView *this,FMapKey *param_1)

{
  bool bVar1;
  FKeyViewComparer local_res8 [4];
  
  local_res8[0].Key = &this->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])(local_res8,&param_1->Key);
  return bVar1;
}

// operator!= @ 142c9c430

bool __thiscall
UE::Editor::DataStorage::FMapKeyView::operator!=(FMapKeyView *this,FMapKeyView *param_1)

{
  bool bVar1;
  FKeyViewComparer local_res8 [4];
  
  local_res8[0].Key = &this->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])(local_res8,&param_1->Key);
  return !bVar1;
}

// operator!= @ 142c9c460

bool __thiscall UE::Editor::DataStorage::FMapKeyView::operator!=(FMapKeyView *this,FMapKey *param_1)

{
  bool bVar1;
  FKeyViewComparer local_res8 [4];
  
  local_res8[0].Key = &this->Key;
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])(local_res8,&param_1->Key);
  return !bVar1;
}

// CalculateHash @ 142ca7200

ulong64 __thiscall UE::Editor::DataStorage::FMapKeyView::CalculateHash(FMapKeyView *this)

{
  ulong64 uVar1;
  FHasher local_res8 [32];
  
  uVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
            ::__l2::Invokers[(this->Key).TypeIndex])(local_res8,&this->Key);
  return uVar1;
}

// CreateKey @ 142caa490

FMapKey * __thiscall
UE::Editor::DataStorage::FMapKeyView::CreateKey(FMapKeyView *this,FMapKey *__return_storage_ptr__)

{
  FKeyViewToKeyConverter local_res8 [32];
  
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewToKeyConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewToKeyConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
    ::__l2::Invokers[(this->Key).TypeIndex])(__return_storage_ptr__,local_res8,&this->Key);
  return __return_storage_ptr__;
}

// ToString @ 142cc08d0

FString * __thiscall
UE::Editor::DataStorage::FMapKeyView::ToString(FMapKeyView *this,FString *__return_storage_ptr__)

{
  FToString local_res8 [32];
  
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
    ::__l2::Invokers[(this->Key).TypeIndex])(__return_storage_ptr__,local_res8,&this->Key);
  return __return_storage_ptr__;
}

