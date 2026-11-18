// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 16

// StaticClass @ 1470b5f70

UClass * __cdecl UMassTestProcessorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessorBase",
               &Z_Registration_Info_UClass_UMassTestProcessorBase.InnerSingleton,
               StaticRegisterNativesUMassTestProcessorBase,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessorBase>,
               InternalVTableHelperCtorCaller<UMassTestProcessorBase>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessorBase.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 1470cef80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
`UMassTestProcessorBase::UMassTestProcessorBase'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FMassExecutionContext *param_1)

{
  return;
}

// UMassTestProcessorBase @ 1470f6050

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessorBase * __thiscall
UMassTestProcessorBase::UMassTestProcessorBase(UMassTestProcessorBase *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UMassTestProcessorBase__6B_;
  *(undefined8 *)&this->ExecutionFunction = 0;
  *(undefined8 *)&(this->ExecutionFunction).field_0x28 = 0;
  *(undefined8 *)&this->ForEachEntityChunkExecutionFunction = 0;
  *(undefined8 *)&(this->ForEachEntityChunkExecutionFunction).field_0x28 = 0;
  FMassEntityQuery::FMassEntityQuery(&this->EntityQuery);
  return this;
}

// UMassTestProcessorBase @ 1470f60b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassTestProcessorBase * __thiscall
UMassTestProcessorBase::UMassTestProcessorBase(UMassTestProcessorBase *this)

{
  undefined1 auStack_88 [32];
  <lambda_1> local_68 [8];
  TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> *local_60;
  TFunction<void___cdecl(FMassExecutionContext_&)> *local_58;
  FMassEntityQuery *local_50;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  this->_padding_ = (longlong)&___7UMassTestProcessorBase__6B_;
  local_60 = &this->ExecutionFunction;
  TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>(local_60,(void *)0x0);
  local_58 = &this->ForEachEntityChunkExecutionFunction;
  TFunction<void___cdecl(FMassExecutionContext_&)>::TFunction<void___cdecl(FMassExecutionContext_&)>
            (local_58,(void *)0x0);
  local_50 = &this->EntityQuery;
  FMassEntityQuery::FMassEntityQuery(local_50,(UMassProcessor *)this);
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xfe;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0x1f;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UMassTestProcessorBase::UMassTestProcessorBase_::__l2::<lambda_1>_>
            (&local_48,local_68);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&this->ForEachEntityChunkExecutionFunction,&local_48);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  SetUseParallelForEachEntityChunk(this,false);
  return this;
}

// ~UMassTestProcessorBase @ 1470f8dc0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassTestProcessorBase::~UMassTestProcessorBase(UMassTestProcessorBase *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UMassTestProcessorBase__6B_;
  FMassEntityQuery::~FMassEntityQuery(&this->EntityQuery);
  if (*(longlong *)&this->ForEachEntityChunkExecutionFunction != 0) {
    plVar1 = *(longlong **)&(this->ForEachEntityChunkExecutionFunction).field_0x28;
    plVar2 = (longlong *)&(this->ForEachEntityChunkExecutionFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->ExecutionFunction != 0) {
    plVar1 = *(longlong **)&(this->ExecutionFunction).field_0x28;
    plVar2 = (longlong *)&(this->ExecutionFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// operator() @ 1471001c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassTestProcessorBase::SetUseParallelForEachEntityChunk'::__l5::<lambda_1>::operator()
          (void *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  FMassEntityQuery::ParallelForEachEntityChunk
            ((FMassEntityQuery *)(*(longlong *)this + 0x140),param_2,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)(*(longlong *)this + 0x110),Force);
  return;
}

// operator() @ 147103360

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UMassTestProcessorBase::SetUseParallelForEachEntityChunk'::__l7::<lambda_2>::operator()
          (void *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  FMassEntityQuery::ForEachEntityChunk
            ((FMassEntityQuery *)(*(longlong *)this + 0x140),param_2,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)(*(longlong *)this + 0x110));
  return;
}

// ConfigureQueries @ 14711b570

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestProcessorBase::ConfigureQueries
          (UMassTestProcessorBase *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  return;
}

// Execute @ 14711e1a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassTestProcessorBase::Execute
          (UMassTestProcessorBase *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>
                *)&this->ExecutionFunction,param_1,param_2);
  return;
}

// GetMutableExecutionOrder @ 1471202e0

FMassProcessorExecutionOrder * __thiscall
UMassTestProcessorBase::GetMutableExecutionOrder(UMassTestProcessorBase *this)

{
  return (FMassProcessorExecutionOrder *)&this->_padding_;
}

// GetPrivateStaticClass @ 147120e40

UClass * __cdecl UMassTestProcessorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestProcessorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestProcessorBase",
               &Z_Registration_Info_UClass_UMassTestProcessorBase.InnerSingleton,
               StaticRegisterNativesUMassTestProcessorBase,0x490,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassTestProcessorBase>,
               InternalVTableHelperCtorCaller<UMassTestProcessorBase>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestProcessorBase.InnerSingleton;
}

// SetShouldAllowMultipleInstances @ 14719d3c0

void __thiscall
UMassTestProcessorBase::SetShouldAllowMultipleInstances(UMassTestProcessorBase *this,bool param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | param_1 * '\x02';
  return;
}

// SetUseParallelForEachEntityChunk @ 1471ab5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMassTestProcessorBase::SetUseParallelForEachEntityChunk(UMassTestProcessorBase *this,bool param_1)

{
  undefined1 auStack_b8 [32];
  <lambda_1> local_98;
  <lambda_1> *local_90;
  <lambda_2> local_88;
  <lambda_2> *local_80;
  TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> local_78;
  TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_1) {
    local_90 = &local_98;
    local_98.__this = this;
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)><_UMassTestProcessorBase::SetUseParallelForEachEntityChunk_::__l5::<lambda_1>_>
              (&local_78,local_90);
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::operator=
              (&this->ExecutionFunction,&local_78);
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>(&local_78);
  }
  else {
    local_80 = &local_88;
    local_88.__this = this;
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)><_UMassTestProcessorBase::SetUseParallelForEachEntityChunk_::__l7::<lambda_2>_>
              (&local_48,local_80);
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::operator=
              (&this->ExecutionFunction,&local_48);
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>(&local_48);
  }
  return;
}

// ShouldAllowQueryBasedPruning @ 1471ab6e0

bool __thiscall
UMassTestProcessorBase::ShouldAllowQueryBasedPruning(UMassTestProcessorBase *this,bool param_1)

{
  return false;
}

// StaticRegisterNativesUMassTestProcessorBase @ 1471abb30

void __cdecl UMassTestProcessorBase::StaticRegisterNativesUMassTestProcessorBase(void)

{
  return;
}

// TestExecute @ 1471ad150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassTestProcessorBase::TestExecute
          (UMassTestProcessorBase *this,TSharedPtr<FMassEntityManager,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<UMassProcessor_*,int> *pTVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  longlong lVar5;
  TArrayView<UMassProcessor_*_const,int> *pTVar6;
  undefined1 *puVar7;
  undefined1 auStack_6b8 [32];
  undefined1 local_698;
  uint local_694;
  UMassTestProcessorBase *local_690;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_688;
  TArrayView<UMassProcessor_*_const,int> local_680;
  undefined1 local_670 [16];
  undefined1 local_660 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_648;
  TArrayView<UMassProcessor_*_const,int> local_638;
  TArrayView<UMassProcessor_*,int> local_628;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_618;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_6b8;
  local_698 = param_1->Object != (FMassEntityManager *)0x0;
  local_694 = (uint)(byte)local_698;
  if ((!(bool)local_698) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassTestTypes.cpp"
                         ,0x5c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_690 = this;
  pTVar3 = MakeArrayView<UMassProcessor_*>(&local_628,(UMassProcessor **)&local_690,1);
  TArrayView<UMassProcessor_*_const,int>::
  TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
            (&local_680,pTVar3);
  UE::Mass::FProcessingContext::FProcessingContext(&local_608,param_1,0.0,true);
  local_688 = &local_618;
  pTVar4 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int>(local_688);
  puVar7 = local_670;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  pTVar6 = &local_680;
  puVar7 = local_660;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_670;
  pTVar4 = &local_648;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
  }
  puVar7 = local_660;
  pTVar6 = &local_638;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar6 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  UE::Mass::Executor::RunProcessorsView(&local_638,&local_608,&local_648);
  UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
  return;
}

