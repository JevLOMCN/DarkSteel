// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 3

// Call @ 144346f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Then<`UE::UniversalObjectLocator::FResolveResult::AsyncGet'::__l10::<lambda_1>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  code *pcVar1;
  FFutureState *this;
  bool bVar2;
  FResolveResultData *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  TFutureBase<UE::UniversalObjectLocator::FResolveResultData> TStack_18;
  
  TStack_18.State.Object =
       *(TFutureState<UE::UniversalObjectLocator::FResolveResultData> **)((longlong)param_1 + 0x50);
  TStack_18.State.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x58);
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  pFVar3 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get(&TStack_18);
  CheckCallable(*(void **)((longlong)param_1 + 0x20));
  pcVar1 = *(code **)((longlong)param_1 + 0x20);
  plVar5 = (longlong *)((longlong)param_1 + 0x30);
  if (*(longlong **)((longlong)param_1 + 0x48) != (longlong *)0x0) {
    plVar5 = *(longlong **)((longlong)param_1 + 0x48);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,pFVar3);
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(longlong *)param_1 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this = *(FFutureState **)param_1;
  if (this->bComplete != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FFutureState::MarkComplete(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.State.SharedReferenceCount.ReferenceController);
  return;
}

// Call @ 144346f50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext'::__l2::<lambda_1>,void,UE::UniversalObjectLocator::FResolveResultData_const_&>
::Call(void *param_1,FResolveResultData *param_2)

{
  FResolveResultData local_18;
  
  local_18.Object = param_2->Object;
  local_18.Flags = param_2->Flags;
  local_18._9_7_ = *(undefined7 *)&param_2->field_0x9;
  `FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext
            (*(void **)param_1,&local_18);
  return;
}

// Call @ 144346f80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::UniversalObjectLocator::FUniversalObjectLocatorModule::StartupModule'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  ITextData *pIVar1;
  FName FVar2;
  TFragmentTypeHandle<FSubObjectLocator> TVar3;
  TFragmentTypeHandle<FDirectPathObjectLocator> TVar4;
  FText *pFVar5;
  FName *pFVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FName FStackX_8;
  FName FStackX_10;
  FText FStack_58;
  ITextData *pIStack_48;
  uint uStack_40;
  FName FStack_38;
  FName FStack_30;
  undefined1 uStack_28;
  
  pFVar5 = FText::AsLocalizable_Advanced_LocText(&FStack_58,L"SubObjectLocator",L"Object",L"Object")
  ;
  pFVar6 = ::FName::FName(&FStackX_10,"subobj");
  pIStack_48 = (pFVar5->TextData).Reference;
  FStack_38 = *pFVar6;
  if (pIStack_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIStack_48 + 8))(pIStack_48,&FStackX_8);
  }
  uStack_40 = pFVar5->Flags;
  uStack_28 = 0;
  pIVar1 = (pFVar5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  ::FName::FName(&FStackX_8,"SubObject");
  FStack_30 = FStackX_8;
  TVar3 = UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FSubObjectLocator>
                    (*(IUniversalObjectLocatorModule **)param_1,
                     (FFragmentTypeParameters *)&FStackX_8);
  FSubObjectLocator::FragmentType =
       *(TFragmentTypeHandle<FSubObjectLocator> *)CONCAT71(extraout_var,TVar3);
  if (pIStack_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIStack_48 + 0x10))();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&FStack_58,L"DirectPathObjectLocator",L"Object",L"Object");
  pFVar6 = ::FName::FName(&FStackX_10,"uobj");
  pIStack_48 = (pFVar5->TextData).Reference;
  FVar2 = *pFVar6;
  if (pIStack_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIStack_48 + 8))(pIStack_48,&FStackX_8);
  }
  uStack_40 = pFVar5->Flags;
  FStack_30.ComparisonIndex.Value = 0;
  FStack_30.Number = 0;
  uStack_28 = 0;
  pIVar1 = (pFVar5->TextData).Reference;
  FStack_38 = FVar2;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TVar4 = UniversalObjectLocator::IUniversalObjectLocatorModule::
          RegisterFragmentType<FDirectPathObjectLocator>
                    (*(IUniversalObjectLocatorModule **)param_1,
                     (FFragmentTypeParameters *)&FStackX_8);
  FDirectPathObjectLocator::FragmentType =
       *(TFragmentTypeHandle<FDirectPathObjectLocator> *)CONCAT71(extraout_var_00,TVar4);
  if (pIStack_48 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIStack_48 + 0x10))();
  }
  return;
}

