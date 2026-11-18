// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 74

// ColorThemes'' @ 140f4b500

void __cdecl `dynamic_initializer_for_'SColorThemesViewer::ColorThemes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SColorThemesViewer::ColorThemes__);
  return;
}

// CurrentlySelectedThemePtr'' @ 140f4b520

void __cdecl `dynamic_initializer_for_'SColorThemesViewer::CurrentlySelectedThemePtr__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SColorThemesViewer::CurrentlySelectedThemePtr__);
  return;
}

// Recents'' @ 140f4b540

void __cdecl `dynamic_initializer_for_'SColorThemesViewer::Recents__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SColorThemesViewer::Recents__);
  return;
}

// ConstructItems<TSharedPtr<FColorInfo,1>,TSharedPtr<FColorInfo,1>,int> @ 143018140

void __cdecl
ConstructItems<TSharedPtr<FColorInfo,1>,TSharedPtr<FColorInfo,1>,int>
          (void *param_1,TSharedPtr<FColorInfo,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FColorInfo **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FColorInfo,1>,int> @ 1430187a0

void __cdecl
DestructItems<TSharedPtr<FColorInfo,1>,int>(TSharedPtr<FColorInfo,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FColorTheme,1>,int> @ 1430187e0

void __cdecl
DestructItems<TSharedPtr<FColorTheme,1>,int>(TSharedPtr<FColorTheme,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// MakeShared<FColorTheme,1> @ 143018be0

TSharedRef<FColorTheme,1> * __cdecl
MakeShared<FColorTheme,1>(TSharedRef<FColorTheme,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FColorTheme,1> *pTVar5;
  FString local_28;
  
  pTVar4 = operator_new(0x50);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FColorTheme *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1 = pTVar4 + 1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFColorTheme___00_SharedPointerInternals__6B_;
    FString::FString(&local_28,L"");
    _Src.Data = local_28.Data.AllocatorInstance.Data;
    pTVar1->_padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)local_28.Data.ArrayNum;
    if ((atomic<int>)local_28.Data.ArrayNum == (atomic<int>)0x0) {
      pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)pTVar1,local_28.Data.ArrayNum,
                 (int *)&pTVar4[1].WeakReferenceCount);
      memcpy((FScriptContainerElement *)pTVar1->_padding_,_Src.Data,
             (longlong)local_28.Data.ArrayNum * 2);
    }
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x2;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<FColorInfo,1>,int>((TSharedPtr<FColorInfo,1> *)0x0,0);
    __return_storage_ptr__->Object = (FColorTheme *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((FColorTheme *)(pTVar4 + 1) == (FColorTheme *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FColorTheme,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeTDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> @ 143018d40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> @ 143018df0

TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextEntryPopup,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> @ 143018ea0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// Reverse<FLinearColor> @ 143019410

void __cdecl AlgoImpl::Reverse<FLinearColor>(FLinearColor *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FLinearColor *pFVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pFVar4 = param_1 + (param_2 + -1);
    do {
      uVar1 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
      uVar2 = *(undefined8 *)&param_1->field0_0x0;
      uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      *(undefined8 *)&param_1->field0_0x0 = *(undefined8 *)&pFVar4->field0_0x0;
      *(undefined8 *)((longlong)&param_1->field0_0x0 + 8) = uVar1;
      param_1 = param_1 + 1;
      *(undefined8 *)&pFVar4->field0_0x0 = uVar2;
      *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8) = uVar3;
      lVar5 = lVar5 + -1;
      pFVar4 = pFVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// operator() @ 14301b5b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`RestoreStarshipSuite'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  T0RequiredArgs local_res10 [16];
  FLLMScope local_res20 [2];
  FName local_468;
  FMemScope local_460;
  TSharedRef<SWidget,1> local_458;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_448;
  FArguments local_430;
  
  pFVar4 = SDockTab::FArguments::FArguments(&local_430);
  pFVar4->_TabRole = NomadTab;
  pTVar5 = MakeStarshipGallery(&local_458);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_460,&local_468,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_448,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\SStarshipSuite.cpp"
             ,0x1e,local_res10);
  FMemScope::~FMemScope(&local_460);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_448,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.SharedReferenceCount.ReferenceController);
  SDockTab::FArguments::~FArguments(&local_430);
  return __return_storage_ptr__;
}

// operator() @ 14301b6e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
`SummonPerfTestSuite'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  T0RequiredArgs local_res10 [16];
  FLLMScope local_res20 [2];
  FName local_468;
  FMemScope local_460;
  TSharedRef<SWidget,1> local_458;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_448;
  FArguments local_430;
  
  pFVar4 = SDockTab::FArguments::FArguments(&local_430);
  pFVar4->_TabRole = NomadTab;
  pTVar5 = MakeTableViewTesting(&local_458);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar5->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_468 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_460,&local_468,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_448,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\SPerfSuite.cpp"
             ,0x16,local_res10);
  FMemScope::~FMemScope(&local_460);
  FLLMScope::~FLLMScope(local_res20);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_448,__return_storage_ptr__,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_448._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.SharedReferenceCount.ReferenceController);
  SDockTab::FArguments::~FArguments(&local_430);
  return __return_storage_ptr__;
}

// `scalar_deleting_destructor' @ 14301b980

void * __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::
FSlateAttributeGetterWrapper<SlateAttributePrivate::TSlateAttributeBase<SWidget,enum_EOrientation,TSlateAttributeInvalidationReason<2>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301b9c0

void * __thiscall
IBaseDelegateInstance<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301b9f0

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301ba20

void * __thiscall
TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301ba50

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l8::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301ba90

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bac0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301baf0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`SColorThemesViewer::BuildMenu'::__l13::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bb20

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorThemeBar_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorThemeBar_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bb80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorThemesViewer_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorThemesViewer_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bbe0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorThemesViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorThemesViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bc40

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorTrash_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorTrash_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bca0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEyeDropperButton_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEyeDropperButton_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bd00

void * __thiscall
TBaseSPMethodDelegateInstance<1,SEyeDropperButton_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SEyeDropperButton_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bd60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bdc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301be20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301be80

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,enum_EColorBlockAlphaDisplayMode___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bee0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThemeColorBlock_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bf40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SThemeColorBlocksBar_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SThemeColorBlocksBar_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301bfa0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWizard_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWizard_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c000

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWizard_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWizard_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c060

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWizard_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c0c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWizard_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWizard_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c120

void * __thiscall
TBaseSPMethodDelegateInstance<1,SWizard_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SWizard_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c180

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorSlider,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c1e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorThemesViewer,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c240

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorThemesViewer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorThemesViewer,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c2a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorThemesViewer,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FColorTheme,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorThemesViewer,1,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FColorTheme,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c310

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorThemesViewer,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorThemesViewer,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c370

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEyeDropperButton,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SEyeDropperButton,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c3d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SEyeDropperButton,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SEyeDropperButton,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c430

void * __thiscall
TBaseSPMethodDelegateInstance<0,SThemeColorBlock,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c490

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SThemeColorBlocksBar,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SThemeColorBlocksBar,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c4f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SThemeColorBlocksBar,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SThemeColorBlocksBar,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c550

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWizard,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWizard,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c5b0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWizard,1,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SWizard,1,void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c610

void * __thiscall
TBaseSPMethodDelegateInstance<0,SWizard,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c670

void * __thiscall
TCommonDelegateInstanceState<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c6a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(int_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c6d0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FColorTheme,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedPtr<FColorTheme,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c710

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c740

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FColorTheme,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FColorTheme,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c780

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorThemesViewer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SColorThemesViewer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x318);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c7c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextEntryPopup,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<STextEntryPopup,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c800

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SThemeColorBlock,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SThemeColorBlock,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c840

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FColorInfo,SharedPointerInternals::DefaultDeleter<FColorInfo>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FColorInfo,SharedPointerInternals::DefaultDeleter<FColorInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c880

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FColorDragDrop,SharedPointerInternals::DefaultDeleter<FColorDragDrop>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FColorDragDrop,SharedPointerInternals::DefaultDeleter<FColorDragDrop>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c8c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FColorTheme,SharedPointerInternals::DefaultDeleter<FColorTheme>,1>::
_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FColorTheme,SharedPointerInternals::DefaultDeleter<FColorTheme>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c900

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FColorDragDrop::_scalar_deleting_destructor_(FColorDragDrop *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->HideTrash);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShowTrash);
  pTVar3 = (this->OriginBar).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  FDragDropOperation::~FDragDropOperation((FDragDropOperation *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301c980

void * __thiscall SColorSlider::_scalar_deleting_destructor_(SColorSlider *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Slider).SharedReferenceCount.ReferenceController);
  if (*(void **)&this->GradientColors != (void *)0x0) {
    FMemory::Free(*(void **)&this->GradientColors);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301ca00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SColorThemesViewer::_scalar_deleting_destructor_(SColorThemesViewer *this,uint param_1)

{
  ~SColorThemesViewer(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x308);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301ca60

void * __thiscall STextEntryPopup::_scalar_deleting_destructor_(STextEntryPopup *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetWithDefaultFocus).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ErrorReporting).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301cae0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SThemeColorBlock::_scalar_deleting_destructor_(SThemeColorBlock *this,uint param_1)

{
  ~SThemeColorBlock(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14301cb40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SThemeColorBlocksBar::_scalar_deleting_destructor_(SThemeColorBlocksBar *this,uint param_1)

{
  ~SThemeColorBlocksBar(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// RestoreStarshipSuite @ 14303da70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RestoreStarshipSuite(void)

{
  FName FVar1;
  FGlobalTabmanager *this;
  FArea *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FLayoutNode *pFVar3;
  FName *pFVar4;
  FModuleManager *this_01;
  TSharedRef<FGlobalTabmanager,1> *pTVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FStack *pFVar8;
  TSharedRef<FTabManager::FArea,1> *pTVar9;
  TSharedRef<FTabManager::FStack,1> *pTVar10;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar11;
  FStack *pFVar12;
  TRawPtrProxy<FTabManager::FLayout> local_res10;
  TRawPtrProxy<FTabManager::FStack> local_res18;
  FName local_res20;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [8];
  ForAnyElementType local_178;
  ulonglong local_170;
  FName local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  TSharedRef<FTabManager::FLayoutNode,1> local_158;
  TSharedRef<FTabManager::FLayoutNode,1> local_148;
  TSharedRef<FTabManager::FStack,1> local_138;
  TSharedRef<FTabManager::FLayout,1> local_128;
  TSharedPtr<SWindow,1> local_118;
  TSharedRef<FTabManager::FLayout,1> local_108;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  TSharedRef<FTabManager::FArea,1> local_88;
  TSharedRef<FTabManager::FStack,1> local_78;
  TSharedRef<FTabManager::FStack,1> local_68;
  TSharedRef<FTabManager::FArea,1> local_58;
  TSharedPtr<SWidget,1> local_48;
  
  pFVar4 = FName::FName(&local_res20,"SlateReflector");
  FVar1 = *pFVar4;
  this_01 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_01,FVar1);
  pTVar5 = FGlobalTabmanager::Get();
  pFVar12 = (FStack *)0x0;
  this = pTVar5->Object;
  local_170 = 0;
  local_180 = (undefined1  [8])0x0;
  local_178.Data = (FScriptContainerElement *)0x0;
  local_198 = (undefined1  [8])0x0;
  local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_190.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_c8);
  local_b0 = &local_190;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_190);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`RestoreStarshipSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  pFVar4 = FName::FName(&local_168,"STARSHIP GALLERY");
  FGlobalTabmanager::RegisterNomadTabSpawner
            (this,*pFVar4,
             (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              *)local_198,
             (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)local_180)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_f8);
  if ((local_190.DelegateSize != 0) &&
     (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_190,0,0,0x10);
    local_190.DelegateSize = 0;
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_190.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_198);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
             (FWriteAccessScope *)&local_e0);
  if (((int)local_170 != 0) && (local_178.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_178.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,0x10);
    local_170 = local_170 & 0xffffffff00000000;
  }
  if (local_e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_180);
  pFVar4 = FName::FName(&local_a8,"StarshipSuite_Layout");
  FVar1 = *pFVar4;
  pFVar8 = operator_new(0x38);
  local_res10.Object = (FLayout *)pFVar12;
  if (pFVar8 != (FStack *)0x0) {
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar8->_padding_)->Object = (FArea *)0x0;
    ((FWeakReferencer<1> *)&pFVar8->_padding_)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar8->Tabs)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar8->Tabs).ArrayNum = 0;
    (pFVar8->Tabs).ArrayMax = 0;
    *(FName *)&pFVar8->bHideTabWell = FVar1;
    local_res10.Object = (FLayout *)pFVar8;
  }
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (&local_128,&local_res10);
  pTVar9 = FTabManager::NewArea(&local_58,__real_4499c000,__real_44610000);
  this_00 = pTVar9->Object;
  pFVar8 = operator_new(0x50);
  if (pFVar8 != (FStack *)0x0) {
    pFVar8->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar8->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar8->_padding_)->ReferenceController = 0x3f800000;
    pFVar8->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar8->Tabs)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar8->Tabs).ArrayNum = 0;
    (pFVar8->Tabs).ArrayMax = 0;
    *(undefined1 *)&(((FName *)&pFVar8->bHideTabWell)->ComparisonIndex).Value = 0;
    (pFVar8->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar8->ForegroundTabId).TabType.Number = 0;
    (pFVar8->ForegroundTabId).InstanceId = -1;
    (pFVar8->ForegroundTabId).Flags = SaveLayout;
    (pFVar8->ExtensionId).ComparisonIndex = 0;
    (pFVar8->ExtensionId).Number = 0;
    pFVar12 = pFVar8;
  }
  local_res18.Object = pFVar12;
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_138,&local_res18);
  pFVar4 = FName::FName(&local_a0,"STARSHIP GALLERY");
  pTVar10 = FTabManager::FStack::AddTab(local_138.Object,&local_68,*pFVar4,OpenedTab);
  pFVar12 = pTVar10->Object;
  pFVar4 = FName::FName(&local_98,"WidgetReflector");
  pTVar10 = FTabManager::FStack::AddTab(pFVar12,&local_78,*pFVar4,OpenedTab);
  pFVar12 = pTVar10->Object;
  pFVar4 = FName::FName(&local_90,"STARSHIP GALLERY");
  uStack_160 = 0xffffffff;
  uStack_15c = CONCAT31(uStack_15c._1_3_,1);
  local_168 = *pFVar4;
  (pFVar12->ForegroundTabId).TabType = local_168;
  (pFVar12->ForegroundTabId).InstanceId = 0xffffffff;
  (pFVar12->ForegroundTabId).Flags = 1;
  *(undefined3 *)&(pFVar12->ForegroundTabId).field_0xd = uStack_15c._1_3_;
  pTVar11 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar12->_padding_,&local_148
                      );
  pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar11->Object;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158.Object = pFVar3;
  local_158.SharedReferenceCount.ReferenceController = pTVar2;
  pTVar9 = FTabManager::FArea::Split(this_00,&local_88,&local_158);
  FTabManager::FLayout::AddArea(local_128.Object,&local_108,pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.SharedReferenceCount.ReferenceController);
  pTVar5 = FGlobalTabmanager::Get();
  local_118.Object = (SWindow *)0x0;
  local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FTabManager::RestoreFrom
            ((FTabManager *)pTVar5->Object,&local_48,&local_108,&local_118,false,Never);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  return;
}

// SummonPerfTestSuite @ 14303ef20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SummonPerfTestSuite(void)

{
  FName FVar1;
  FGlobalTabmanager *this;
  FArea *pFVar2;
  FLayout *this_00;
  FName *pFVar3;
  FModuleManager *this_01;
  TSharedRef<FGlobalTabmanager,1> *pTVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FStack *pFVar7;
  TSharedRef<FTabManager::FArea,1> *pTVar8;
  TSharedRef<FTabManager::FStack,1> *pTVar9;
  TSharedRef<FTabManager::FLayout,1> *pTVar10;
  FStack *pFVar11;
  TRawPtrProxy<FTabManager::FLayout> local_res18;
  TRawPtrProxy<FTabManager::FStack> local_res20;
  undefined1 local_1d8 [8];
  FDelegateAllocation local_1d0;
  undefined1 local_1c0 [8];
  ForAnyElementType local_1b8;
  ulonglong local_1b0;
  TRawPtrProxy<FTabManager::FStack> local_1a8;
  TSharedRef<FTabManager::FLayoutNode,1> local_1a0;
  TSharedRef<FTabManager::FLayoutNode,1> local_190;
  TSharedRef<FTabManager::FStack,1> local_180;
  TSharedRef<FTabManager::FStack,1> local_170;
  TSharedRef<FTabManager::FLayout,1> local_160;
  TSharedPtr<SWindow,1> local_150;
  TSharedRef<FTabManager::FLayout,1> local_140;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDelegateAllocation *local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  TSharedRef<FTabManager::FArea,1> local_b8;
  TSharedRef<FTabManager::FStack,1> local_a8;
  TSharedRef<FTabManager::FArea,1> local_98;
  TSharedRef<FTabManager::FLayout,1> local_88;
  TSharedRef<FTabManager::FArea,1> local_78;
  TSharedRef<FTabManager::FStack,1> local_68;
  TSharedRef<FTabManager::FArea,1> local_58;
  TSharedPtr<SWidget,1> local_48;
  
  pFVar3 = FName::FName(&local_e0,"SlateReflector");
  FVar1 = *pFVar3;
  this_01 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_01,FVar1);
  pTVar4 = FGlobalTabmanager::Get();
  pFVar11 = (FStack *)0x0;
  this = pTVar4->Object;
  local_1b0 = 0;
  local_1c0 = (undefined1  [8])0x0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1d8 = (undefined1  [8])0x0;
  local_1d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
             (FWriteAccessScope *)&local_100);
  local_e8 = &local_1d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_1d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,`SummonPerfTestSuite'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  pFVar3 = FName::FName(&local_d8,"TableViewTesting");
  FGlobalTabmanager::RegisterNomadTabSpawner
            (this,*pFVar3,
             (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              *)local_1d8,
             (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)local_1c0)
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
             (FWriteAccessScope *)&local_130);
  if ((local_1d0.DelegateSize != 0) &&
     (local_1d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1d0,0,0,0x10);
    local_1d0.DelegateSize = 0;
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  if (local_1d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c0,
             (FWriteAccessScope *)&local_118);
  if (((int)local_1b0 != 0) && (local_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c0);
  pFVar3 = FName::FName(&local_d0,"PerfTestSuite_Layout");
  FVar1 = *pFVar3;
  pFVar7 = operator_new(0x38);
  local_res18.Object = (FLayout *)pFVar11;
  if (pFVar7 != (FStack *)0x0) {
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar7->_padding_)->Object = (FArea *)0x0;
    ((FWeakReferencer<1> *)&pFVar7->_padding_)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar7->Tabs)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar7->Tabs).ArrayNum = 0;
    (pFVar7->Tabs).ArrayMax = 0;
    *(FName *)&pFVar7->bHideTabWell = FVar1;
    local_res18.Object = (FLayout *)pFVar7;
  }
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (&local_160,&local_res18);
  pTVar8 = FTabManager::NewArea(&local_58,__real_44f00000,__real_44960000);
  pFVar2 = pTVar8->Object;
  pFVar7 = operator_new(0x50);
  local_res20.Object = pFVar11;
  if (pFVar7 != (FStack *)0x0) {
    pFVar7->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar7->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar7->_padding_)->ReferenceController = 0x3f800000;
    pFVar7->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar7->Tabs)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar7->Tabs).ArrayNum = 0;
    (pFVar7->Tabs).ArrayMax = 0;
    *(undefined1 *)&(((FName *)&pFVar7->bHideTabWell)->ComparisonIndex).Value = 0;
    (pFVar7->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar7->ForegroundTabId).TabType.Number = 0;
    (pFVar7->ForegroundTabId).InstanceId = -1;
    (pFVar7->ForegroundTabId).Flags = SaveLayout;
    (pFVar7->ExtensionId).ComparisonIndex = 0;
    (pFVar7->ExtensionId).Number = 0;
    local_res20.Object = pFVar7;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_170,&local_res20);
  pFVar3 = FName::FName(&local_c8,"TableViewTesting");
  pTVar9 = FTabManager::FStack::AddTab(local_170.Object,&local_68,*pFVar3,OpenedTab);
  local_1a0.Object = (FLayoutNode *)pTVar9->Object;
  local_1a0.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = FTabManager::FArea::Split(pFVar2,&local_78,&local_1a0);
  pTVar10 = FTabManager::FLayout::AddArea(local_160.Object,&local_88,pTVar8);
  this_00 = pTVar10->Object;
  pTVar8 = FTabManager::NewArea(&local_98,__real_44200000,__real_44480000);
  pFVar2 = pTVar8->Object;
  pFVar7 = operator_new(0x50);
  if (pFVar7 != (FStack *)0x0) {
    pFVar7->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar7->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar7->_padding_)->ReferenceController = 0x3f800000;
    pFVar7->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar7->Tabs)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar7->Tabs).ArrayNum = 0;
    (pFVar7->Tabs).ArrayMax = 0;
    *(undefined1 *)&(((FName *)&pFVar7->bHideTabWell)->ComparisonIndex).Value = 0;
    (pFVar7->ForegroundTabId).TabType.ComparisonIndex = 0;
    (pFVar7->ForegroundTabId).TabType.Number = 0;
    (pFVar7->ForegroundTabId).InstanceId = -1;
    (pFVar7->ForegroundTabId).Flags = SaveLayout;
    (pFVar7->ExtensionId).ComparisonIndex = 0;
    (pFVar7->ExtensionId).Number = 0;
    pFVar11 = pFVar7;
  }
  local_1a8.Object = pFVar11;
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_180,&local_1a8);
  pFVar3 = FName::FName(&local_c0,"WidgetReflector");
  pTVar9 = FTabManager::FStack::AddTab(local_180.Object,&local_a8,*pFVar3,OpenedTab);
  local_190.Object = (FLayoutNode *)pTVar9->Object;
  local_190.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = FTabManager::FArea::Split(pFVar2,&local_b8,&local_190);
  FTabManager::FLayout::AddArea(this_00,&local_140,pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_170.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_160.SharedReferenceCount.ReferenceController);
  pTVar4 = FGlobalTabmanager::Get();
  local_150.Object = (SWindow *)0x0;
  local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FTabManager::RestoreFrom
            ((FTabManager *)pTVar4->Object,&local_48,&local_140,&local_150,false,Never);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.SharedReferenceCount.ReferenceController);
  return;
}

// ColorThemes'' @ 15035fe60

void __cdecl `dynamic_atexit_destructor_for_'SColorThemesViewer::ColorThemes__(void)

{
  DestructItems<TSharedPtr<FColorTheme,1>,int>
            ((TSharedPtr<FColorTheme,1> *)SColorThemesViewer::ColorThemes.AllocatorInstance.Data,
             SColorThemesViewer::ColorThemes.ArrayNum);
  if (SColorThemesViewer::ColorThemes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(SColorThemesViewer::ColorThemes.AllocatorInstance.Data);
    return;
  }
  return;
}

// CurrentlySelectedThemePtr'' @ 15035fea0

void __cdecl `dynamic_atexit_destructor_for_'SColorThemesViewer::CurrentlySelectedThemePtr__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)
              ->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00015035fec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// Recents'' @ 15035fed0

void __cdecl `dynamic_atexit_destructor_for_'SColorThemesViewer::Recents__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController);
  return;
}

// `dynamic_atexit_destructor_for_'Type'' @ 15035fef0

void __cdecl `FColorDragDrop::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'
               ::__l2::Type.Data.AllocatorInstance.Data;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'::__l2::
      Type.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_static_class_FString_const&___ptr64___cdecl_FColorDragDrop::GetTypeId(void)'::__l2::
      Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

