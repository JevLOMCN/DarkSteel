// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 5

// FPurposeInfo @ 142c97570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPurposeInfo * __thiscall
UE::Editor::DataStorage::IUiProvider::FPurposeInfo::FPurposeInfo
          (FPurposeInfo *this,FWidgetPurposeNameColumn *param_1)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FPurposeInfo *pFVar5;
  byte bVar6;
  undefined1 auStack_58 [32];
  FKeyCopy local_38 [4];
  undefined1 local_34 [4];
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_30._padding_ = 0;
  local_30._padding_ = 0;
  local_30._16_8_ = 0;
  pFVar4 = FText::GetEmpty();
  this->Namespace = param_1->Namespace;
  this->Name = param_1->Name;
  this->Frame = param_1->Frame;
  this->Type = UniqueByNameAndColumn;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (this->Description).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_34);
  }
  bVar6 = local_30.TypeIndex;
  (this->Description).Flags = pFVar4->Flags;
  if (`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_30._16_8_ & 0xff] ==
      Core::Private::
      VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
     ) {
    (this->ParentPurposeID).Key.TypeIndex = '\0';
  }
  else {
    (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
      ::__l2::Invokers[local_30._16_8_ & 0xff])(&(this->ParentPurposeID).Key,local_38,&local_30);
    bVar6 = local_30.TypeIndex;
  }
  if (9 < bVar6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPurposeInfo *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar6] !=
      Core::Private::TDestructorCaller<FEmptyVariantState>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar6])(&local_30);
  }
  return this;
}

// FPurposeInfo @ 142c976a0

FPurposeInfo * __thiscall
UE::Editor::DataStorage::IUiProvider::FPurposeInfo::FPurposeInfo
          (FPurposeInfo *this,FName *param_1,FName *param_2,FName *param_3,EPurposeType param_4,
          FText *param_5,FMapKey *param_6)

{
  ITextData *pIVar1;
  FText *pFVar2;
  
  pFVar2 = param_5;
  this->Namespace = *param_1;
  this->Name = *param_2;
  this->Frame = *param_3;
  this->Type = param_4;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_5->TextData).Reference;
  (this->Description).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&param_4);
  }
  (this->Description).Flags = pFVar2->Flags;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(param_6->Key).TypeIndex])
            (&(this->ParentPurposeID).Key,(FKeyCopy *)&param_4,&param_6->Key);
  return this;
}

// FPurposeInfo @ 142c97730

FPurposeInfo * __thiscall
UE::Editor::DataStorage::IUiProvider::FPurposeInfo::FPurposeInfo
          (FPurposeInfo *this,FName *param_1,EPurposeType param_2,FText *param_3,FMapKey *param_4)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FString *this_00;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  FName local_res8;
  undefined1 local_res18 [16];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (this->Namespace).ComparisonIndex = 0;
  (this->Namespace).Number = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Frame).ComparisonIndex = 0;
  (this->Frame).Number = 0;
  FText::FText(&this->Description);
  (this->ParentPurposeID).Key.TypeIndex = '\0';
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  this_00 = ::FName::ToString(param_1,&local_48);
  ::FString::FString(&local_58,".");
  ::FString::Split(this_00,&local_58,&local_68,&local_88);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_58,".");
  ::FString::Split(&local_88,&local_58,&local_88,&local_78);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar5 = 0;
  iVar4 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar4 = iVar5;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                          FNAME_Add);
  this->Namespace = *pFVar3;
  iVar4 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar4 = iVar5;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_88.Data.AllocatorInstance.Data,
                          FNAME_Add);
  this->Name = *pFVar3;
  iVar4 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar4 = iVar5;
  }
  pFVar3 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                          FNAME_Add);
  this->Frame = *pFVar3;
  this->Type = param_2;
  pIVar1 = (param_3->TextData).Reference;
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Description).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Description).Flags = param_3->Flags;
  FMapKey::operator=(&this->ParentPurposeID,param_4);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return this;
}

// GeneratePurposeID @ 142caca60

FMapKey * __thiscall
UE::Editor::DataStorage::IUiProvider::FPurposeInfo::GeneratePurposeID
          (FPurposeInfo *this,FMapKey *__return_storage_ptr__)

{
  FName FVar1;
  void *pvVar2;
  FName *pFVar3;
  FName local_res8;
  TStringBuilderBase<wchar_t> local_28;
  
  local_28.Base = (wchar_t *)0x0;
  local_28.CurPos = (wchar_t *)0x0;
  local_28.End = (wchar_t *)0x0;
  local_28.bIsDynamic = false;
  local_28.bIsExternal = false;
  if (this->Namespace != (FName)0x0) {
    ::FName::AppendString(&this->Namespace,&local_28);
  }
  if (local_28.End < local_28.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_28,1);
  }
  pvVar2 = FGenericPlatformString::Memcpy(local_28.CurPos,L".",2);
  local_28.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
  ::FName::AppendString(&this->Name,&local_28);
  if (local_28.End < local_28.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_28,1);
  }
  pvVar2 = FGenericPlatformString::Memcpy(local_28.CurPos,L".",2);
  local_28.CurPos = (wchar_t *)((longlong)pvVar2 + 2);
  if (this->Frame != (FName)0x0) {
    ::FName::AppendString(&this->Frame,&local_28);
  }
  pFVar3 = ::FName::FName(&local_res8,
                          (int)((longlong)local_28.CurPos - (longlong)local_28.Base >> 1),
                          local_28.Base,FNAME_Add);
  FVar1 = *pFVar3;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_28);
  (__return_storage_ptr__->Key)._padding_ = (longlong)FVar1;
  (__return_storage_ptr__->Key).TypeIndex = '\b';
  return __return_storage_ptr__;
}

// ToString @ 142cc0910

FName __thiscall UE::Editor::DataStorage::IUiProvider::FPurposeInfo::ToString(FPurposeInfo *this)

{
  void *pvVar1;
  FName *pFVar2;
  FName in_RDX;
  FName local_res8;
  TStringBuilderBase<wchar_t> local_28;
  
  local_28.Base = (wchar_t *)0x0;
  local_28.CurPos = (wchar_t *)0x0;
  local_28.End = (wchar_t *)0x0;
  local_28.bIsDynamic = false;
  local_28.bIsExternal = false;
  if (this->Namespace != (FName)0x0) {
    ::FName::AppendString(&this->Namespace,&local_28);
  }
  if (local_28.End < local_28.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_28,1);
  }
  pvVar1 = FGenericPlatformString::Memcpy(local_28.CurPos,L".",2);
  local_28.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
  ::FName::AppendString(&this->Name,&local_28);
  if (local_28.End < local_28.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_28,1);
  }
  pvVar1 = FGenericPlatformString::Memcpy(local_28.CurPos,L".",2);
  local_28.CurPos = (wchar_t *)((longlong)pvVar1 + 2);
  if (this->Frame != (FName)0x0) {
    ::FName::AppendString(&this->Frame,&local_28);
  }
  pFVar2 = ::FName::FName(&local_res8,
                          (int)((longlong)local_28.CurPos - (longlong)local_28.Base >> 1),
                          local_28.Base,FNAME_Add);
  *(FName *)in_RDX = *pFVar2;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_28);
  return in_RDX;
}

