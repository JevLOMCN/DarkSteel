// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// FColumnMetaData @ 142c95c70

FColumnMetaData * __thiscall
UE::Editor::DataStorage::FColumnMetaData::FColumnMetaData
          (FColumnMetaData *this,UScriptStruct *param_1,EFlags param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FColumnMetaData_DataStorage_Editor_UE__6B_;
  this->ColumnType = param_1;
  this->Flags = param_2;
  return this;
}

// Find @ 142cabd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FColumnMetaData::Find
          (FColumnMetaData *this,FMetaDataEntryView *__return_storage_ptr__,FName param_1)

{
  code *pcVar1;
  EFlags EVar2;
  byte bVar3;
  bool bVar4;
  TVariant<bool,unsigned___int64,__int64,double,FString> *pTVar5;
  FMetaDataEntryView *pFVar6;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_1 == IsEditableName) {
    EVar2 = this->Flags;
    (__return_storage_ptr__->DataView).TypeIndex = '\x01';
    *(undefined1 *)&(__return_storage_ptr__->DataView)._padding_ = (char)EVar2 & IsMutable;
  }
  else if (param_1 == IsConstName) {
    EVar2 = this->Flags;
    (__return_storage_ptr__->DataView).TypeIndex = '\x01';
    *(byte *)&(__return_storage_ptr__->DataView)._padding_ = ~(char)EVar2 & 1;
  }
  else {
    pTVar5 = TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
             ::Find((TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                     *)&this->_padding_,param_1);
    if (pTVar5 == (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0) {
      pTVar5 = TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
               ::Find((TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                       *)&this->_padding_,param_1);
      if (pTVar5 == (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0) {
        local_30 = 0;
      }
      else {
        local_48 = local_38;
        local_30 = 0;
        local_40 = local_38;
        (*(code *)(&
                  PTR_VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>_1509ca9f8
                  )[pTVar5->TypeIndex])(&local_48,pTVar5);
      }
    }
    else {
      local_58 = local_38;
      local_30 = 0;
      local_50 = local_38;
      (*(code *)(&
                PTR_VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>_1509ca9f8
                )[pTVar5->TypeIndex])(&local_58,pTVar5);
    }
    bVar3 = local_30;
    (__return_storage_ptr__->DataView).TypeIndex = local_30;
    if (5 < local_30) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FMetaDataEntryView *)(*pcVar1)();
        return pFVar6;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[bVar3] !=
        Core::Private::TMoveConstructorCaller<FEmptyVariantState>::Construct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[bVar3])(__return_storage_ptr__,local_38);
    }
  }
  return __return_storage_ptr__;
}

// IsEmpty @ 142cafa60

bool __thiscall UE::Editor::DataStorage::FColumnMetaData::IsEmpty(FColumnMetaData *this)

{
  if ((((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) &&
      ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4))) &&
     (this->ColumnType == (UScriptStruct *)0x0)) {
    return true;
  }
  return false;
}

