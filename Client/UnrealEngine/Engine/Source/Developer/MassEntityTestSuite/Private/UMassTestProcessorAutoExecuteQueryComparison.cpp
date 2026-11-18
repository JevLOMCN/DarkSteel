// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 10

// StaticClass @ 14705d3a0

UClass * __cdecl UMassTestProcessorAutoExecuteQueryComparison::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQueryComparison.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessorAutoExecuteQueryComparison",
               &Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQueryComparison.
                InnerSingleton,StaticRegisterNativesUMassTestProcessorAutoExecuteQueryComparison,
               0x7e0,0x10,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessorAutoExecuteQueryComparison>,
               InternalVTableHelperCtorCaller<UMassTestProcessorAutoExecuteQueryComparison>,
               local_res8,UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQueryComparison.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 1470cef90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
`UMassTestProcessorAutoExecuteQueryComparison::Execute'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FMassExecutionContext *param_1)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  operator()(local_18,param_1);
  return;
}

// UMassTestProcessorAutoExecuteQueryComparison @ 1470f5ef0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessorAutoExecuteQueryComparison * __thiscall
UMassTestProcessorAutoExecuteQueryComparison::UMassTestProcessorAutoExecuteQueryComparison
          (UMassTestProcessorAutoExecuteQueryComparison *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UMassTestProcessorBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->_padding_);
  this->_padding_ = (longlong)&___7UMassTestProcessorAutoExecuteQueryComparison__6B_;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery,(UMassProcessor *)this);
  return this;
}

// UMassTestProcessorAutoExecuteQueryComparison @ 1470f5f60

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessorAutoExecuteQueryComparison * __thiscall
UMassTestProcessorAutoExecuteQueryComparison::UMassTestProcessorAutoExecuteQueryComparison
          (UMassTestProcessorAutoExecuteQueryComparison *this)

{
  UMassTestProcessorBase::UMassTestProcessorBase((UMassTestProcessorBase *)this);
  this->_padding_ = (longlong)&___7UMassTestProcessorAutoExecuteQueryComparison__6B_;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery,(UMassProcessor *)this);
  return this;
}

// ~UMassTestProcessorAutoExecuteQueryComparison @ 1470f8d40

void __thiscall
UMassTestProcessorAutoExecuteQueryComparison::~UMassTestProcessorAutoExecuteQueryComparison
          (UMassTestProcessorAutoExecuteQueryComparison *this)

{
  this->_padding_ = (longlong)&___7UMassTestProcessorAutoExecuteQueryComparison__6B_;
  FMassEntityQuery::~FMassEntityQuery(&this->EntityQuery);
  UMassTestProcessorBase::~UMassTestProcessorBase((UMassTestProcessorBase *)this);
  return;
}

// operator() @ 1470fb160

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassTestProcessorAutoExecuteQueryComparison::Execute'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  bool bVar1;
  int iVar2;
  FEntityIterator *pFVar3;
  FTestFragment_Int *pFVar4;
  FTestFragment_Float *pFVar5;
  FTestFragment_Bool *pFVar6;
  FTestFragment_Large *pFVar7;
  longlong lVar8;
  FEntityIterator *pFVar9;
  int local_ec;
  int local_e8;
  FEntityIterator *local_e0;
  undefined4 local_d8;
  FTestFragment_Array *local_d0;
  TArrayView<FTestFragment_Int,int> local_c8;
  TArrayView<FTestFragment_Float_const_,int> local_b8;
  TArrayView<FTestFragment_Bool_const_,int> local_a8;
  TArrayView<FTestFragment_Large_const_,int> local_98;
  TArrayView<FTestFragment_Array_const_,int> local_88;
  FEntityIterator local_78;
  FEntityIterator local_58;
  FEntityIterator local_38;
  
  local_d8 = 0;
  FMassExecutionContext::GetFragmentView<FTestFragment_Float>(param_1,&local_b8);
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_1,&local_c8);
  FMassExecutionContext::GetFragmentView<FTestFragment_Bool>(param_1,&local_a8);
  FMassExecutionContext::GetFragmentView<FTestFragment_Large>(param_1,&local_98);
  FMassExecutionContext::GetFragmentView<FTestFragment_Array>(param_1,&local_88);
  FMassExecutionContext::CreateEntityIterator(param_1,&local_58);
  local_e0 = &local_58;
  pFVar3 = FMassExecutionContext::FEntityIterator::begin(local_e0);
  pFVar9 = &local_78;
  for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar9->ExecutionContext = *(undefined1 *)&pFVar3->ExecutionContext;
    pFVar3 = (FEntityIterator *)((longlong)&pFVar3->ExecutionContext + 1);
    pFVar9 = (FEntityIterator *)((longlong)&pFVar9->ExecutionContext + 1);
  }
  FMassExecutionContext::FEntityIterator::end(local_e0,&local_38);
  while( true ) {
    local_ec = FMassExecutionContext::FEntityIterator::operator_int(&local_38);
    bVar1 = FMassExecutionContext::FEntityIterator::operator!=(&local_78,&local_ec);
    if (!bVar1) break;
    iVar2 = FMassExecutionContext::FEntityIterator::operator*(&local_78);
    pFVar4 = TArrayView<FTestFragment_Int,int>::operator[](&local_c8,iVar2);
    pFVar5 = TArrayView<FTestFragment_Float_const_,int>::operator[](&local_b8,iVar2);
    if (pFVar5->Value <= 0.0) {
      pFVar4->Value = pFVar4->Value + -1;
    }
    else {
      pFVar4->Value = pFVar4->Value + 1;
    }
    pFVar6 = TArrayView<FTestFragment_Bool_const_,int>::operator[](&local_a8,iVar2);
    if (pFVar6->bValue == false) {
      pFVar4->Value = pFVar4->Value + -1;
    }
    else {
      pFVar4->Value = pFVar4->Value + 1;
    }
    pFVar7 = TArrayView<FTestFragment_Large_const_,int>::operator[](&local_98,iVar2);
    if (pFVar7->Value[0] == '\0') {
      pFVar4->Value = pFVar4->Value + -1;
    }
    else {
      pFVar4->Value = pFVar4->Value + 1;
    }
    local_d0 = TArrayView<FTestFragment_Array_const_,int>::operator[](&local_88,iVar2);
    local_e8 = (local_d0->Value).ArrayNum;
    if (local_e8 < 1) {
      pFVar4->Value = pFVar4->Value + -1;
    }
    else {
      pFVar4->Value = pFVar4->Value + 1;
    }
    FMassExecutionContext::FEntityIterator::operator++(&local_78);
  }
  return;
}

// ConfigureQueries @ 14711b3f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestProcessorAutoExecuteQueryComparison::ConfigureQueries
          (UMassTestProcessorAutoExecuteQueryComparison *this,
          TSharedRef<FMassEntityManager,1> *param_1)

{
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&this->EntityQuery,ReadOnly,All);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&this->EntityQuery,ReadWrite,All);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Bool>
            ((FMassFragmentRequirements *)&this->EntityQuery,ReadOnly,All);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Large>
            ((FMassFragmentRequirements *)&this->EntityQuery,ReadOnly,All);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Array>
            ((FMassFragmentRequirements *)&this->EntityQuery,ReadOnly,All);
  return;
}

// Execute @ 14711e090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestProcessorAutoExecuteQueryComparison::Execute
          (UMassTestProcessorAutoExecuteQueryComparison *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  undefined1 auStack_78 [32];
  <lambda_1> local_58 [8];
  FMassEntityQuery *local_50;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_50 = &this->EntityQuery;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UMassTestProcessorAutoExecuteQueryComparison::Execute_::__l2::<lambda_1>_>
            (&local_48,local_58);
  FMassEntityQuery::ForEachEntityChunk(local_50,param_2,&local_48);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  return;
}

// GetPrivateStaticClass @ 147120cc0

UClass * __cdecl UMassTestProcessorAutoExecuteQueryComparison::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQueryComparison.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessorAutoExecuteQueryComparison",
               &Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQueryComparison.
                InnerSingleton,StaticRegisterNativesUMassTestProcessorAutoExecuteQueryComparison,
               0x7e0,0x10,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessorAutoExecuteQueryComparison>,
               InternalVTableHelperCtorCaller<UMassTestProcessorAutoExecuteQueryComparison>,
               local_res8,UMassTestProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessorAutoExecuteQueryComparison.InnerSingleton;
}

// StaticRegisterNativesUMassTestProcessorAutoExecuteQueryComparison @ 1471abb10

void __cdecl
UMassTestProcessorAutoExecuteQueryComparison::
StaticRegisterNativesUMassTestProcessorAutoExecuteQueryComparison(void)

{
  return;
}

