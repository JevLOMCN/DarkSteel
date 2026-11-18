// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 7

// Get<TVariant<int,unsigned_int,__int64,float,double>_> @ 141da7ef0

TVariant<int,unsigned_int,__int64,float,double> * __thiscall
TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
Get<TVariant<int,unsigned_int,__int64,float,double>_>
          (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *this)

{
  code *pcVar1;
  bool bVar2;
  TVariant<int,unsigned_int,__int64,float,double> *pTVar3;
  
  if (this->TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVariant<int,unsigned_int,__int64,float,double> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TVariant<int,unsigned_int,__int64,float,double> *)this;
}

// Get<FString> @ 141da7f40

FString * __thiscall
TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Get<FString>
          (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *this)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (this->TypeIndex != '\x02') {
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

// Get<bool> @ 141da7f90

bool * __thiscall
TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Get<bool>
          (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *this)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (this->TypeIndex != '\0') {
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

// IsType<bool> @ 141da8080

bool __thiscall
TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsType<bool>
          (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *this)

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
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

// TVariant<int,unsigned_int,__int64,float,double> @ 141dc3d10

TVariant<int,unsigned_int,__int64,float,double> * __thiscall
TVariant<int,unsigned_int,__int64,float,double>::TVariant<int,unsigned_int,__int64,float,double>
          (TVariant<int,unsigned_int,__int64,float,double> *this,
          TVariant<int,unsigned_int,__int64,float,double> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<int,unsigned_int,__int64,float,double> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (4 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<int,unsigned_int,__int64,float,double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<int,unsigned_int,__int64,float,double>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> @ 141dc3d90

TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> * __thiscall
TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>
          (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *this,
          TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *)(*pcVar2)()
      ;
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

// ~TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> @ 141dc62f0

void __thiscall
TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::
~TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>
          (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> *this)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  
  bVar1 = this->TypeIndex;
  if (2 < bVar1) {
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
  case 3:
    if (this[1]._padding_ != 0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)this);
      this->_padding_ = 0;
      this->_padding_ = 0;
    }
    ::operator_delete((void *)this[1]._padding_,1);
    free((void *)this[2]._padding_);
    ::operator_delete(*(void **)&this[1].TypeIndex,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)this);
    return;
  case 4:
    return;
  case 5:
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

