// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 56

// `dynamic_initializer_for_'FAnalyticsPropertyStoreAutomationTestAutomationTestInstance'' @ 140f4c170

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAnalyticsPropertyStoreAutomationTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAnalyticsPropertyStoreAutomationTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAnalyticsPropertyStoreAutomationTestAutomationTestInstance,
             &local_18,false);
  FAnalyticsPropertyStoreAutomationTestAutomationTestInstance._0_8_ =
       &___7FAnalyticsPropertyStoreAutomationTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FAnalyticsPropertyStoreAutomationTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'LogAnalytics'' @ 140f4c1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAnalytics__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAnalytics,L"LogAnalytics",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAnalytics__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAnalytics'' @ 140f4c210

void __cdecl _dynamic_initializer_for__ModuleRegistrantAnalytics__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Analytics";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Analytics",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAnalytics>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1431318f0

void * __thiscall
FAnalyticsPropertyStoreAutomationTest::_scalar_deleting_destructor_
          (FAnalyticsPropertyStoreAutomationTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int> @ 1431321f0

void __cdecl
ConstructItems<FAnalyticsEventAttribute,FAnalyticsEventAttribute,int>
          (void *param_1,FAnalyticsEventAttribute *param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  
  if (param_3 != 0) {
    pdVar1 = (double *)((longlong)param_1 + 0x20);
    pdVar2 = &param_2->AttrValueNumber;
    do {
      FString::FString((FString *)(pdVar1 + -4),
                       (FString *)
                       ((longlong)param_2 + (-0x20 - (longlong)param_1) + (longlong)pdVar1));
      FString::FString((FString *)(pdVar1 + -2),(FString *)(pdVar2 + -2));
      *pdVar1 = *pdVar2;
      *(bool *)(pdVar1 + 1) = *(bool *)(pdVar2 + 1);
      *(AttrTypeEnum *)((longlong)pdVar1 + 0xc) = *(AttrTypeEnum *)((longlong)pdVar2 + 0xc);
      param_3 = param_3 + -1;
      pdVar1 = pdVar1 + 6;
      pdVar2 = pdVar2 + 6;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TWeakPtr<IAnalyticsSpan,1>,TWeakPtr<IAnalyticsSpan,1>,int> @ 143132280

void __cdecl
ConstructItems<TWeakPtr<IAnalyticsSpan,1>,TWeakPtr<IAnalyticsSpan,1>,int>
          (void *param_1,TWeakPtr<IAnalyticsSpan,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(IAnalyticsSpan **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->WeakReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FAnalyticsEventAttribute,int> @ 143132360

void __cdecl
DestructItems<FAnalyticsEventAttribute,int>(FAnalyticsEventAttribute *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AttrValueString).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->AttrName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<IAnalyticsSpan,1>,int> @ 1431323b0

void __cdecl
DestructItems<TSharedPtr<IAnalyticsSpan,1>,int>(TSharedPtr<IAnalyticsSpan,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<IAnalyticsSpan,1>,int> @ 1431323f0

void __cdecl
DestructItems<TWeakPtr<IAnalyticsSpan,1>,int>(TWeakPtr<IAnalyticsSpan,1> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TWeakPtr<IAnalyticsSpan,1>::~TWeakPtr<IAnalyticsSpan,1>(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// MakeShared<FAnalyticsSpan,1,FName_const_&> @ 143132dc0

TSharedRef<FAnalyticsSpan,1> * __cdecl
MakeShared<FAnalyticsSpan,1,FName_const_&>
          (TSharedRef<FAnalyticsSpan,1> *__return_storage_ptr__,FName *param_1)

{
  code *pcVar1;
  FNameEntryId FVar2;
  uint uVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FAnalyticsSpan,1> *pTVar6;
  
  pTVar5 = operator_new(0x78);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FAnalyticsSpan *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFAnalyticsSpan___00_SharedPointerInternals__6B_;
    FVar2.Value = (param_1->ComparisonIndex).Value;
    uVar3 = param_1->Number;
    pTVar5[1]._padding_ = (longlong)&___7FAnalyticsSpan__6B_;
    pTVar5[1].SharedReferenceCount = (atomic<int>)FVar2.Value;
    pTVar5[1].WeakReferenceCount = (atomic<int>)uVar3;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar5[5]._padding_ = 0;
    pTVar5[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = 0;
    __return_storage_ptr__->Object = (FAnalyticsSpan *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    if ((FAnalyticsSpan *)(pTVar5 + 1) == (FAnalyticsSpan *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<FAnalyticsSpan,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// initializer_list<TWeakPtr<IAnalyticsSpan,1>_> @ 143133280

initializer_list<TWeakPtr<IAnalyticsSpan,1>_> * __thiscall
std::initializer_list<TWeakPtr<IAnalyticsSpan,1>_>::initializer_list<TWeakPtr<IAnalyticsSpan,1>_>
          (initializer_list<TWeakPtr<IAnalyticsSpan,1>_> *this,TWeakPtr<IAnalyticsSpan,1> *param_1,
          TWeakPtr<IAnalyticsSpan,1> *param_2)

{
  this->_First = param_1;
  this->_Last = param_2;
  return this;
}

// ~TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>,0,0> @ 143133770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>,0,0>::
~TFunction_OwnedObject<_FAnalyticsPropertyStoreAutomationTest::RunTest_::__l413::<lambda_4>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`413'::<lambda_4>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>,0,0> @ 143133790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>,0,0>::
~TFunction_OwnedObject<_FAnalyticsPropertyStoreAutomationTest::RunTest_::__l462::<lambda_8>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`462'::<lambda_8>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l61::<lambda_9>,0,1> @ 1431337b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l61::<lambda_9>,0,1>::
~TFunction_OwnedObject<_FAnalyticsPropertyStoreAutomationTest::RunTest_::__l61::<lambda_9>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`61'::<lambda_9>,0,1>
        ::_vftable_;
  return;
}

// operator== @ 143133dd0

bool __cdecl operator==(FGuid *param_1,FGuid *param_2)

{
  return ((param_1->D == param_2->D && param_1->C == param_2->C) && param_1->B == param_2->B) &&
         param_1->A == param_2->A;
}

// `scalar_deleting_destructor' @ 143134be0

void * __thiscall
FAsyncTask<FAnalyticsPropertyStore::FFlushWorker>::_scalar_deleting_destructor_
          (FAsyncTask<FAnalyticsPropertyStore::FFlushWorker> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Task).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134c30

void * __thiscall
IBaseDelegateInstance<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134c60

void * __thiscall
TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<1,FAnalytics::ConfigFromIni_const_,FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134c90

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(FString_const_&,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134cc0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(unsigned_int_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NAEAI_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134d00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(FDateTime_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FDateTime_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NAEAUFDateTime___Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134d40

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(__int64_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(__int64_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NAEA_J_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134d80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(int_const_*,int_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(int_const_*,int_const_&),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NPEBHAEBH_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134dc0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<bool_(__cdecl*)(float_const_*,float_const_&),0,0>
::_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(float_const_*,float_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NPEBMAEBM_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(double_const_*,double_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(double_const_*,double_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_NPEBNAEBN_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(__int64_const_*,__int64_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(__int64_const_*,__int64_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEB_JAEB_J_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l413::<lambda_4>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`413'::<lambda_4>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l462::<lambda_8>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`462'::<lambda_8>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l61::<lambda_9>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FAnalyticsPropertyStoreAutomationTest::RunTest'::`61'::<lambda_9>,0,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134f40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsSpan,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FAnalyticsSpan,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134f80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsTracer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FAnalyticsTracer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143134fc0

void * __thiscall FAnalytics::_scalar_deleting_destructor_(FAnalytics *this,uint param_1)

{
  *this = (FAnalytics)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143135000

void * __thiscall
FAnalyticsPropertyStore::_scalar_deleting_destructor_(FAnalyticsPropertyStore *this,uint param_1)

{
  ~FAnalyticsPropertyStore(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x208);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143135040

void * __thiscall FAnalyticsSpan::_scalar_deleting_destructor_(FAnalyticsSpan *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FAnalyticsSpan__6B_;
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)(this->Attributes).AllocatorInstance.Data,
             (this->Attributes).ArrayNum);
  pFVar1 = (this->Attributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyticsProvider).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IAnalyticsSpan__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431350b0

void * __thiscall
FAnalyticsTracer::_scalar_deleting_destructor_(FAnalyticsTracer *this,uint param_1)

{
  ~FAnalyticsTracer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1431350f0

void * __thiscall
IAnalyticsPropertyStore::_scalar_deleting_destructor_(IAnalyticsPropertyStore *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143135120

void * __thiscall IAnalyticsSpan::_scalar_deleting_destructor_(IAnalyticsSpan *this,uint param_1)

{
  *this = (IAnalyticsSpan)&___7IAnalyticsSpan__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143135160

void * __thiscall
IAnalyticsTracer::_scalar_deleting_destructor_(IAnalyticsTracer *this,uint param_1)

{
  *this = (IAnalyticsTracer)&___7IAnalyticsTracer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AggregateAttributes @ 1431351d0

void __cdecl
AggregateAttributes(TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,
                   TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 local_1a7 [7];
  FAnalyticsEventAttribute *local_1a0;
  uint local_198;
  uint local_194;
  int local_190;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_188;
  TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *local_180;
  int local_178;
  int local_174;
  FAnalyticsEventAttribute *local_170;
  TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0> local_168;
  TCheckedPointerIterator<FAnalyticsEventAttribute,int,0> local_150;
  FAnalyticsEventAttribute *local_138;
  FAnalyticsEventAttribute *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FAnalyticsEventAttribute *local_110;
  FAnalyticsEventAttribute *local_108;
  FAnalyticsEventAttribute *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FAnalyticsEventAttribute *local_e8;
  FString *local_e0;
  FString *local_d8;
  FAnalyticsEventAttribute *local_d0;
  FAnalyticsEventAttribute *local_c8;
  FAnalyticsEventAttribute *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  longlong local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FAnalyticsEventAttribute *local_58;
  int local_50;
  FAnalyticsEventAttribute *local_48;
  TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0> local_40;
  TCheckedPointerIterator<FAnalyticsEventAttribute,int,0> local_28;
  
  local_138 = (FAnalyticsEventAttribute *)(param_2->AllocatorInstance).Data;
  local_188 = param_2;
  local_130 = local_138;
  local_48 = local_138;
  TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::
  TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>
            (&local_168,&param_2->ArrayNum,local_138);
  local_128 = (local_188->AllocatorInstance).Data;
  local_178 = local_188->ArrayNum;
  local_120 = local_128;
  local_118 = local_128;
  TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::
  TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>
            (&local_40,&local_188->ArrayNum,
             (FAnalyticsEventAttribute *)(local_128 + (longlong)local_178 * 0x30));
  do {
    if (*local_168.CurrentNum != local_168.InitialNum) {
      puVar5 = local_1a7;
      for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      `TCheckedPointerIterator<FAnalyticsEventAttribute_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_1a7);
    }
    local_1a7[1] = local_168.Ptr != local_40.Ptr;
    local_198 = (uint)(byte)local_1a7[1];
    if (!(bool)local_1a7[1]) {
      return;
    }
    local_110 = local_168.Ptr;
    local_1a0 = local_168.Ptr;
    bVar2 = false;
    local_108 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
    local_180 = param_1;
    local_100 = local_108;
    TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::
    TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>(&local_150,&param_1->ArrayNum,local_108)
    ;
    local_f8 = (local_180->AllocatorInstance).Data;
    local_174 = local_180->ArrayNum;
    local_f0 = local_f8;
    TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::
    TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>
              (&local_28,&local_180->ArrayNum,
               (FAnalyticsEventAttribute *)(local_f8 + (longlong)local_174 * 0x30));
    while( true ) {
      if (*local_150.CurrentNum != local_150.InitialNum) {
        puVar5 = local_1a7 + 2;
        for (lVar4 = 1; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        `TCheckedPointerIterator<FAnalyticsEventAttribute,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a7 + 2);
      }
      local_1a7[3] = local_150.Ptr != local_28.Ptr;
      local_194 = (uint)(byte)local_1a7[3];
      if (!(bool)local_1a7[3]) goto LAB_143135537;
      local_e8 = local_150.Ptr;
      local_170 = local_150.Ptr;
      local_e0 = FAnalyticsEventAttribute::GetName(local_150.Ptr);
      local_d8 = FAnalyticsEventAttribute::GetName(local_1a0);
      local_1a7[4] = FString::Equals(local_d8,local_e0,IgnoreCase);
      local_1a7[5] = local_1a7[4];
      if ((bool)local_1a7[4]) break;
      local_150.Ptr = local_150.Ptr + 1;
    }
    FAnalyticsEventAttribute::operator+=(local_170,local_1a0);
    bVar2 = true;
LAB_143135537:
    if (!bVar2) {
      local_d0 = (FAnalyticsEventAttribute *)(param_1->AllocatorInstance).Data;
      local_c8 = local_d0;
      local_c0 = local_d0;
      if ((local_d0 <= local_1a0) &&
         (local_b8 = (param_1->AllocatorInstance).Data, local_b0 = local_b8, local_a8 = local_b8,
         local_1a0 < (FAnalyticsEventAttribute *)(local_b8 + (longlong)param_1->ArrayMax * 0x30))) {
        local_a0 = 0;
        local_9c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_80 = (longlong)param_1->ArrayNum;
        local_78 = (longlong)param_1->ArrayMax;
        local_98 = (param_1->AllocatorInstance).Data;
        local_90 = local_98;
        local_88 = local_98;
        local_70 = local_98;
        bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (param_1->ArrayNum == param_1->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar3;
      }
      local_190 = param_1->ArrayNum;
      param_1->ArrayNum = param_1->ArrayNum + 1;
      local_68 = (param_1->AllocatorInstance).Data;
      local_60 = local_68 + (longlong)local_190 * 0x30;
      local_58 = operator_new(0x30,local_60);
      FAnalyticsEventAttribute::FAnalyticsEventAttribute(local_58,local_1a0);
      local_50 = local_190;
    }
    local_168.Ptr = local_168.Ptr + 1;
  } while( true );
}

// AnalyticsBuildTypeToString @ 1431357c0

wchar_t * __cdecl AnalyticsBuildTypeToString(EAnalyticsBuildType param_1)

{
  if (param_1 == Development) {
    return L"Development";
  }
  if (param_1 == Test) {
    return L"Test";
  }
  if (param_1 == Debug) {
    return L"Debug";
  }
  if (param_1 != Release) {
    return L"Undefined";
  }
  return L"Release";
}

// AnalyticsConversionToString @ 143135810

FString * __cdecl AnalyticsConversionToString(FString *__return_storage_ptr__,double param_1)

{
  int iVar1;
  
  iVar1 = _finite(param_1);
  if (iVar1 == 0) {
    FString::FString(__return_storage_ptr__,"null");
    return __return_storage_ptr__;
  }
  if ((param_1 <= __real_430c6bf520000000) && (__real_c30c6bf520000000 <= param_1)) {
    FString::SanitizeFloat(__return_storage_ptr__,param_1,1);
    return __return_storage_ptr__;
  }
  FString::PrintfImpl(__return_storage_ptr__,L"%.9e");
  return __return_storage_ptr__;
}

// GetAnalyticsBuildType @ 143139b30

EAnalyticsBuildType __cdecl GetAnalyticsBuildType(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"DEBUGANALYTICS");
  if (bVar1) {
    return Debug;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"TESTANALYTICS");
  if (bVar1) {
    return Test;
  }
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"RELEASEANALYTICS");
  return -bVar1 & Release;
}

// LexToString @ 14313aa50

wchar_t * __cdecl LexToString(EAnalyticsRecordEventMode param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Cached) {
    return L"Cached";
  }
  if (param_1 != Immediate) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Private\\Interfaces\\IAnalyticsProvider.cpp"
                       ,0xd,L"Please, implement new modes here");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"Unknown";
  }
  return L"Immediate";
}

// IMPLEMENT_MODULE_Analytics @ 143140080

void __cdecl IMPLEMENT_MODULE_Analytics(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'BoolKey'' @ 150360300

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__BoolKey__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BoolKey.Data.AllocatorInstance.Data;
  if (BoolKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BoolKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DateKey'' @ 150360320

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__DateKey__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DateKey.Data.AllocatorInstance.Data;
  if (DateKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DateKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DblKey'' @ 150360340

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__DblKey__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DblKey.Data.AllocatorInstance.Data;
  if (DblKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DblKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FAnalyticsPropertyStoreAutomationTestAutomationTestInstance'' @ 150360360

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAnalyticsPropertyStoreAutomationTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAnalyticsPropertyStoreAutomationTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FltKey'' @ 150360380

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__FltKey__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FltKey.Data.AllocatorInstance.Data;
  if (FltKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FltKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'I32Key'' @ 1503603a0

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__I32Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = I32Key.Data.AllocatorInstance.Data;
  if (I32Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (I32Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'I64Key'' @ 1503603c0

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__I64Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = I64Key.Data.AllocatorInstance.Data;
  if (I64Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (I64Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogAnalytics'' @ 1503603e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAnalytics__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAnalytics);
  return;
}

// `dynamic_atexit_destructor_for_'Str1Key'' @ 150360400

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__Str1Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Str1Key.Data.AllocatorInstance.Data;
  if (Str1Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Str1Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Str2Key'' @ 150360420

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__Str2Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Str2Key.Data.AllocatorInstance.Data;
  if (Str2Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Str2Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'U32Key'' @ 150360440

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__U32Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = U32Key.Data.AllocatorInstance.Data;
  if (U32Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (U32Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'U64Key'' @ 150360460

void __cdecl
`FAnalyticsPropertyStoreAutomationTest::RunTest'::__l2::_dynamic_atexit_destructor_for__U64Key__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = U64Key.Data.AllocatorInstance.Data;
  if (U64Key.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (U64Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

