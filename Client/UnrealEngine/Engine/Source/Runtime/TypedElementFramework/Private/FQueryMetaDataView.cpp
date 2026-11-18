// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// FQueryMetaDataView @ 142c98390

FQueryMetaDataView * __thiscall
UE::Editor::DataStorage::FQueryMetaDataView::FQueryMetaDataView
          (FQueryMetaDataView *this,FQueryDescription *param_1)

{
  this->Query = param_1;
  this->_padding_ = (longlong)&___7FQueryMetaDataView_DataStorage_Editor_UE__6B_;
  return this;
}

// ~FQueryMetaDataView @ 142c9a590

void __thiscall
UE::Editor::DataStorage::FQueryMetaDataView::~FQueryMetaDataView(FQueryMetaDataView *this)

{
  return;
}

// FindForColumn @ 142cac060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FQueryMetaDataView::FindForColumn
          (FQueryMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,
          TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> param_1,FName param_2)

{
  int iVar1;
  FQueryDescription *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  FMetaDataEntryView *pFVar7;
  TVariant<bool,unsigned___int64,__int64,double,FString> *pTVar8;
  ulonglong uVar9;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar10;
  longlong lVar11;
  uint uVar12;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> this_00;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar13;
  FWeakObjectPtr local_res18 [2];
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [8];
  byte local_60;
  byte local_58 [8];
  byte local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar2 = this->Query;
  FVar13 = (pFVar2->SelectionTypes).AllocatorInstance.SecondaryData;
  iVar1 = (pFVar2->SelectionTypes).ArrayNum;
  if (FVar13 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar13 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
             &pFVar2->SelectionTypes;
  }
  local_res18[0] = param_1.WeakPtr;
  this_00 = FVar13;
  do {
    if (this_00 ==
        (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
        ((longlong)FVar13 + (longlong)iVar1 * 8)) {
LAB_142cac0d9:
      (__return_storage_ptr__->DataView).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    bVar5 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
            UEOpEquals<UScriptStruct_const_,bool>
                      ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)this_00,
                       (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_res18);
    if (bVar5) {
      uVar12 = (uint)((longlong)this_00 - (longlong)FVar13 >> 3);
      if (uVar12 != 0xffffffff) {
        pFVar2 = this->Query;
        iVar1 = (pFVar2->SelectionMetaData).ArrayNum;
        uVar6 = 0;
        if ((int)uVar12 < iVar1) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_98 = (longlong)(int)uVar12;
          local_90 = (longlong)iVar1;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FMetaDataEntryView *)(*pcVar3)();
            return pFVar7;
          }
        }
        FVar10 = (pFVar2->SelectionMetaData).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
          FVar10 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)
                   &pFVar2->SelectionMetaData;
        }
        lVar11 = (longlong)FVar10 + (longlong)(int)uVar12 * 0xb8;
        if (param_2 == IsEditableName) {
          local_58[0] = *(byte *)(lVar11 + 0xb0) & 1;
          local_50 = 1;
        }
        else if (param_2 == IsConstName) {
          local_50 = 1;
          local_58[0] = ~*(byte *)(lVar11 + 0xb0) & 1;
        }
        else {
          pTVar8 = TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                   ::Find((TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                           *)(lVar11 + 8),param_2);
          if (pTVar8 == (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0) {
            pTVar8 = TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                     ::Find((TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                             *)(lVar11 + 0x58),param_2);
            if (pTVar8 == (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0) {
              local_60 = 0;
            }
            else {
              local_78 = local_68;
              local_60 = 0;
              local_70 = local_68;
              (*(code *)(&
                        PTR_VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>_1509ca9f8
                        )[pTVar8->TypeIndex])(&local_78,pTVar8);
            }
          }
          else {
            local_88 = local_68;
            local_60 = 0;
            local_80 = local_68;
            (*(code *)(&
                      PTR_VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>_1509ca9f8
                      )[pTVar8->TypeIndex])(&local_88,pTVar8);
          }
          bVar4 = local_60;
          local_50 = local_60;
          if ((5 < local_60) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FMetaDataEntryView *)(*pcVar3)();
            return pFVar7;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                        ::__l2::MoveConstructors)[bVar4] !=
              Core::Private::TMoveConstructorCaller<FEmptyVariantState>::Construct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                        ::__l2::MoveConstructors)[bVar4])(local_58,local_68);
          }
        }
        uVar9 = (ulonglong)local_50;
        if ((5 < uVar9) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0x12f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FMetaDataEntryView *)(*pcVar3)();
          return pFVar7;
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar9) == '\0') {
          uVar9 = (ulonglong)local_50;
          (__return_storage_ptr__->DataView).TypeIndex = local_50;
          if ((5 < local_50) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FMetaDataEntryView *)(*pcVar3)();
            return pFVar7;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                        ::__l2::MoveConstructors)[uVar9] ==
              Core::Private::TMoveConstructorCaller<FEmptyVariantState>::Construct) {
            return __return_storage_ptr__;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar9])(__return_storage_ptr__,local_58);
          return __return_storage_ptr__;
        }
      }
      goto LAB_142cac0d9;
    }
    this_00 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
              ((longlong)this_00 + 8);
  } while( true );
}

// FindGeneric @ 142cac3a0

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FQueryMetaDataView::FindGeneric
          (FQueryMetaDataView *this,FMetaDataEntryView *__return_storage_ptr__,FName param_1)

{
  FMetaDataBase::Find((FMetaDataBase *)&this->Query->MetaData,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

