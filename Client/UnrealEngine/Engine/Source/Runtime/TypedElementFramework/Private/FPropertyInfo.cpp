// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// FPropertyInfo @ 142c974a0

FPropertyInfo * __thiscall
UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo::FPropertyInfo
          (FPropertyInfo *this,FPropertyInfo *param_1)

{
  TOptional<FText> *this_00;
  TOptional<FText> *pTVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FPropertyInfo *pFVar5;
  
  bVar2 = (param_1->Property).InternalProperty.TypeIndex;
  (this->Property).InternalProperty.TypeIndex = bVar2;
  if (2 < bVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FPropertyInfo *)(*pcVar3)();
      return pFVar5;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar2])(this,param_1);
  this_00 = &(this->Default).TextValue;
  (this->Property).ObjectTypeInfo.WeakPtr = (param_1->Property).ObjectTypeInfo.WeakPtr;
  pTVar1 = &(param_1->Default).TextValue;
  (this->Default).Type = (param_1->Default).Type;
  (this->Default).field1_0x8 = (param_1->Default).field1_0x8;
  (this->Default).field1_0x8 = (param_1->Default).field1_0x8;
  (this->Default).field1_0x8.FloatValue = (param_1->Default).field1_0x8.FloatValue;
  (this->Default).field1_0x8 = (param_1->Default).field1_0x8;
  (this_00->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->Default).TextValue.field0_0x0.TypedValue.Flags = 0;
  if ((pTVar1->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText((FText *)this_00,(FText *)pTVar1);
  }
  this->DynamicColumnIdentifier = param_1->DynamicColumnIdentifier;
  return this;
}

// ~FPropertyInfo @ 142c9a350

void __thiscall
UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo::~FPropertyInfo(FPropertyInfo *this)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  plVar2 = *(longlong **)&(this->Default).TextValue.field0_0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  bVar1 = (this->Property).InternalProperty.TypeIndex;
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
  }
  plVar2 = *(longlong **)&(this->Property).InternalProperty.field_0x30;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&(this->Property).InternalProperty != 0) {
    plVar2 = *(longlong **)&(this->Property).InternalProperty.field_0x28;
    plVar5 = (longlong *)&(this->Property).InternalProperty.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000142caad15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))();
    return;
  }
  return;
}

