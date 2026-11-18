// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 5

// FMetaDataEntryView<bool> @ 142c89420

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView<bool>
          (FMetaDataEntryView *this,bool *param_1)

{
  *(bool *)&(this->DataView)._padding_ = *param_1;
  (this->DataView).TypeIndex = '\x01';
  return this;
}

// FMetaDataEntryView @ 142c97300

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView
          (FMetaDataEntryView *this,TVariant<bool,unsigned___int64,__int64,double,FString> *param_1)

{
  FMetaDataEntryView *local_18;
  FMetaDataEntryView *local_10;
  
  (this->DataView).TypeIndex = '\0';
  local_18 = this;
  local_10 = this;
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>_1509ca9f8
            )[param_1->TypeIndex])(&local_18);
  return this;
}

// FMetaDataEntryView @ 142c97340

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView
          (FMetaDataEntryView *this,FString *param_1)

{
  (this->DataView)._padding_ = (longlong)param_1;
  (this->DataView).TypeIndex = '\x05';
  return this;
}

// FMetaDataEntryView @ 142c97360

FMetaDataEntryView * __thiscall
UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(FMetaDataEntryView *this)

{
  (this->DataView).TypeIndex = '\0';
  return this;
}

// IsSet @ 142cafd90

bool __thiscall UE::Editor::DataStorage::FMetaDataEntryView::IsSet(FMetaDataEntryView *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->DataView).TypeIndex;
  if (5 < uVar4) {
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
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar4) == '\0';
}

