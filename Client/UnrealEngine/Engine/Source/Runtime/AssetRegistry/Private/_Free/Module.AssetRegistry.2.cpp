// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 196

// `dynamic_initializer_for_'CoreUObjectPackageName'' @ 140f46ca0

void __cdecl _dynamic_initializer_for__CoreUObjectPackageName__(void)

{
  FName::FName(&CoreUObjectPackageName,L"/Script/CoreUObject");
  return;
}

// `dynamic_initializer_for_'FDependsNodeTestAutomationTestInstance'' @ 140f46cc0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FDependsNodeTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FDependsNodeTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FDependsNodeTestAutomationTestInstance,&local_18,false);
  FDependsNodeTestAutomationTestInstance._0_8_ = &___7FDependsNodeTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FDependsNodeTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FEnumerateAssetsPerformanceAutomationTestInstance'' @ 140f46d20

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FEnumerateAssetsPerformanceAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEnumerateAssetsPerformance");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FEnumerateAssetsPerformanceAutomationTestInstance,&local_18,
             false);
  FEnumerateAssetsPerformanceAutomationTestInstance._0_8_ = &___7FEnumerateAssetsPerformance__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEnumerateAssetsPerformanceAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FPropertyCombinationSetTestSubClassAutomationTestInstance'' @ 140f46d80

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FPropertyCombinationSetTestSubClassAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FPropertyCombinationSetTestSubClass");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FPropertyCombinationSetTestSubClassAutomationTestInstance,
             &local_18,false);
  FPropertyCombinationSetTestSubClassAutomationTestInstance._0_8_ =
       &___7FPropertyCombinationSetTestSubClass__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FPropertyCombinationSetTestSubClassAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FSetKeyFuncsTestInstance'' @ 140f46de0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FSetKeyFuncsTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FSetKeyFuncsTest");
  FSetKeyFuncsTest::FSetKeyFuncsTest(&FSetKeyFuncsTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FSetKeyFuncsTestInstance__);
  return;
}

// `dynamic_initializer_for_'GNameTableErrorArchive'' @ 140f46e30

void __cdecl _dynamic_initializer_for__GNameTableErrorArchive__(void)

{
  FArchiveState::FArchiveState((FArchiveState *)&GNameTableErrorArchive);
  GNameTableErrorArchive._0_8_ = &___7FNameTableErrorArchive__6B_;
  FArchiveState::SetError((FArchiveState *)&GNameTableErrorArchive);
  atexit(_dynamic_atexit_destructor_for__GNameTableErrorArchive__);
  return;
}

// `dynamic_initializer_for_'ScriptStructName'' @ 140f46e70

void __cdecl _dynamic_initializer_for__ScriptStructName__(void)

{
  FName::FName(&ScriptStructName,L"ScriptStruct");
  return;
}

// `scalar_deleting_destructor' @ 142b313a0

void * __thiscall
FSetKeyFuncsTest::_scalar_deleting_destructor_(FSetKeyFuncsTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b313f0

void * __thiscall
FPropertyCombinationSetTest::_scalar_deleting_destructor_
          (FPropertyCombinationSetTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b316f0

void * __thiscall
FPropertyCombinationSetTestSubClass::_scalar_deleting_destructor_
          (FPropertyCombinationSetTestSubClass *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b31730

void * __thiscall
FNameTableErrorArchive::_scalar_deleting_destructor_(FNameTableErrorArchive *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b32130

void * __thiscall
FEnumerateAssetsPerformance::_scalar_deleting_destructor_
          (FEnumerateAssetsPerformance *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b39c30

void * __thiscall
FDependsNodeTest::_scalar_deleting_destructor_(FDependsNodeTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l106::<lambda_19>_> @ 142b39d50

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l106::<lambda_19>_>
          (void *this,<lambda_19> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`106'::<lambda_19>,1,0>::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = param_1->IterationIndex;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l106::<lambda_19>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l107::<lambda_20>_> @ 142b39d90

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l107::<lambda_20>_>
          (void *this,<lambda_20> *param_1)

{
  int *piVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`107'::<lambda_20>,1,0>::_vftable_;
  piVar1 = param_1->DuplicateCount;
  *(undefined8 *)((longlong)this + 0x18) = param_1->IterationIndex;
  *(int **)((longlong)this + 0x20) = piVar1;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l107::<lambda_20>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l109::<lambda_21>_> @ 142b39dd0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l109::<lambda_21>_>
          (void *this,<lambda_21> *param_1)

{
  FDependsNode *pFVar1;
  bool *pbVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar3 = FMemory::Malloc(0x30,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar3;
  *puVar3 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`109'::<lambda_21>,1,1>::_vftable_;
  pFVar1 = param_1->B;
  puVar3[1] = param_1->__this;
  puVar3[2] = pFVar1;
  pbVar2 = param_1->bHasGame;
  puVar3[3] = param_1->IterationIndex;
  puVar3[4] = pbVar2;
  puVar3[5] = param_1->bHasHard;
  if (puVar3 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l109::<lambda_21>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l109::<lambda_22>_> @ 142b39e50

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l109::<lambda_22>_>
          (void *this,<lambda_22> *param_1)

{
  FDependsNode *pFVar1;
  bool *pbVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar3 = FMemory::Malloc(0x30,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar3;
  *puVar3 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`109'::<lambda_22>,1,1>::_vftable_;
  pFVar1 = param_1->B;
  puVar3[1] = param_1->__this;
  puVar3[2] = pFVar1;
  pbVar2 = param_1->bHasGame;
  puVar3[3] = param_1->IterationIndex;
  puVar3[4] = pbVar2;
  puVar3[5] = param_1->bHasHard;
  if (puVar3 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l109::<lambda_22>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l110::<lambda_23>_> @ 142b39ed0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l110::<lambda_23>_>
          (void *this,<lambda_23> *param_1)

{
  FDependsNode *pFVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar2 = FMemory::Malloc(0x20,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar2;
  *puVar2 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`110'::<lambda_23>,1,1>::_vftable_;
  pFVar1 = param_1->B;
  puVar2[1] = param_1->__this;
  puVar2[2] = pFVar1;
  puVar2[3] = param_1->IterationIndex;
  if (puVar2 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l110::<lambda_23>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l111::<lambda_24>_> @ 142b39f40

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l111::<lambda_24>_>
          (void *this,<lambda_24> *param_1)

{
  FDependsNode *pFVar1;
  bool *pbVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar3 = FMemory::Malloc(0x30,8);
  *(undefined8 **)((longlong)this + 0x28) = puVar3;
  *puVar3 = &UE::Core::Private::Function::
             TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`111'::<lambda_24>,1,1>::_vftable_;
  pFVar1 = param_1->B;
  puVar3[1] = param_1->__this;
  puVar3[2] = pFVar1;
  pbVar2 = param_1->bHasGame;
  puVar3[3] = param_1->IterationIndex;
  puVar3[4] = pbVar2;
  puVar3[5] = param_1->bHasHard;
  if (puVar3 + 1 != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l111::<lambda_24>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l112::<lambda_25>_> @ 142b39fc0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l112::<lambda_25>_>
          (void *this,<lambda_25> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_25>,1,0>::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = param_1->IterationIndex;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_25>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l112::<lambda_26>_> @ 142b3a000

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l112::<lambda_26>_>
          (void *this,<lambda_26> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_26>,1,0>::_vftable_;
  *(undefined8 *)((longlong)this + 0x18) = param_1->IterationIndex;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_26>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l112::<lambda_27>_> @ 142b3a040

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l112::<lambda_27>_>
          (void *this,<lambda_27> *param_1)

{
  int *piVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_27>,1,0>::_vftable_;
  piVar1 = param_1->IterationIndex;
  *(undefined8 *)((longlong)this + 0x18) = param_1->__this;
  *(int **)((longlong)this + 0x20) = piVar1;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_27>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l112::<lambda_28>_> @ 142b3a080

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l112::<lambda_28>_>
          (void *this,<lambda_28> *param_1)

{
  int *piVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_28>,1,0>::_vftable_;
  piVar1 = param_1->IterationIndex;
  *(undefined8 *)((longlong)this + 0x18) = param_1->__this;
  *(int **)((longlong)this + 0x20) = piVar1;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_28>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l112::<lambda_29>_> @ 142b3a0c0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l112::<lambda_29>_>
          (void *this,<lambda_29> *param_1)

{
  int *piVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_29>,1,0>::_vftable_;
  piVar1 = param_1->IterationIndex;
  *(undefined8 *)((longlong)this + 0x18) = param_1->__this;
  *(int **)((longlong)this + 0x20) = piVar1;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l112::<lambda_29>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l116::<lambda_30>_> @ 142b3a100

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l116::<lambda_30>_>
          (void *this,<lambda_30> *param_1)

{
  int *piVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`116'::<lambda_30>,1,0>::_vftable_;
  piVar1 = param_1->IterationIndex;
  *(undefined8 *)((longlong)this + 0x18) = param_1->__this;
  *(int **)((longlong)this + 0x20) = piVar1;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l116::<lambda_30>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><`FDependsNodeTest::RunTest'::__l116::<lambda_31>_> @ 142b3a140

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
* __thiscall
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>
::
TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)><_FDependsNodeTest::RunTest_::__l116::<lambda_31>_>
          (void *this,<lambda_31> *param_1)

{
  int *piVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined ***)((longlong)this + 0x10) =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`116'::<lambda_31>,1,0>::_vftable_;
  piVar1 = param_1->IterationIndex;
  *(undefined8 *)((longlong)this + 0x18) = param_1->__this;
  *(int **)((longlong)this + 0x20) = piVar1;
  if ((undefined8 *)((longlong)this + 0x18) != (undefined8 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FDependsNodeTest::RunTest'::__l116::<lambda_31>,void,FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool>
         ::Call;
  }
  return this;
}

// operator<<<int,TSizedDefaultAllocator<32>_> @ 142b3a180

FArchive * __cdecl
operator<<<int,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  else {
    auStackX_8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        param_2->ArrayNum = auStackX_8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,auStackX_8[0],*piVar1,&param_2->AllocatorInstance,auStackX_8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_> @ 142b3a190

FArchive * __cdecl
operator<<<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  TTuple<FName,unsigned_int> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<<FName,unsigned_int>
                        (param_1,(TTuple<FName,unsigned_int> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TTuple<FName,unsigned_int>,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pTVar2 = (TTuple<FName,unsigned_int> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<TTuple<FName,unsigned_int>,int>(pTVar2,1);
              operator<<<FName,unsigned_int>(param_1,pTVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> @ 142b3a1a0

FArchive * __cdecl
operator<<<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TTuple<FName,FString>,int>
                ((TTuple<FName,FString> *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18;
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              operator<<(param_1,(FString *)(pFVar2 + 8));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
              DefaultConstructItems<TTuple<FName,FString>,int>(pFVar2,1);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              operator<<(param_1,(FString *)(pFVar2 + 8));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FName,unsigned_int> @ 142b3a1b0

FArchive * __cdecl
operator<<<FName,unsigned_int>(FArchive *param_1,TTuple<FName,unsigned_int> *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)&param_2->field_0x8 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x8);
  return param_1;
}

// AddDependency<2> @ 142b3a360

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
AddDependency<2>(FDependsNode *param_1,EDependencyProperty param_2,EDependencyProperty param_3,
                TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_4,
                TBitArray<FDefaultBitArrayAllocator> *param_5,
                _func___cdecl_uchar_EDependencyProperty *param_6,bool param_7)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  ForElementType<unsigned_int> FVar10;
  uint **ppuVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ForElementType<unsigned_int> this;
  FDependsNode *local_res8;
  int local_res10 [2];
  undefined3 in_stack_00000039;
  
  this = (ForElementType<unsigned_int>)param_5;
  local_res8 = param_1;
  if (param_7) {
    uVar15 = param_4->ArrayNum;
    iVar14 = 0;
    uVar12 = uVar15;
    if (0 < (int)uVar15) {
      do {
        iVar13 = (uVar12 >> 1) + iVar14;
        if (*(FDependsNode **)((param_4->AllocatorInstance).Data + (longlong)iVar13 * 8) < param_1)
        {
          iVar14 = iVar13 + (uVar12 & 1);
        }
        uVar6 = uVar12 >> 1;
        uVar12 = uVar12 >> 1;
      } while (uVar6 != 0);
    }
    if (iVar14 < (int)uVar15) {
      if ((iVar14 < 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(FDependsNode **)((param_4->AllocatorInstance).Data + (longlong)iVar14 * 8) == local_res8
         ) {
        bVar8 = (*param_6)(param_2 & param_3);
        iVar13 = iVar14 * 3;
        _param_7 = 0;
        if (((iVar13 < 0) || (((TBitArray<FDefaultBitArrayAllocator> *)this)->NumBits < iVar13 + 3))
           && (bVar7 = FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x3df,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (((TBitArray<FDefaultBitArrayAllocator> *)this)->AllocatorInstance).SecondaryData;
        FVar10 = this;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar4;
        }
        FBitArrayMemory::MemmoveBitsWordOrder((uint *)&param_7,0,(uint *)FVar10,iVar13,3);
        goto LAB_142b3a5c9;
      }
    }
  }
  else {
    iVar14 = param_4->ArrayNum;
  }
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::Insert(param_4,&local_res8,iVar14);
  bVar8 = (*param_6)(param_3 & param_2);
  iVar13 = iVar14 * 3;
  _param_7 = 0;
  piVar1 = &((TBitArray<FDefaultBitArrayAllocator> *)this)->NumBits;
  if (((iVar13 < 0) || (*piVar1 < iVar13)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = *piVar1;
  if ((iVar3 == 0) ||
     ((int)((iVar3 + 2 >> 0x1f & 0x1fU) + iVar3 + 2) >> 5 !=
      (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5)) {
    TBitArray<FDefaultBitArrayAllocator>::Reserve
              ((TBitArray<FDefaultBitArrayAllocator> *)this,iVar3 + 3);
    iVar9 = *piVar1 + 3;
    *piVar1 = iVar9;
    uVar12 = iVar9 >> 0x1f & 0x1f;
    uVar15 = iVar9 + uVar12;
    iVar9 = (uVar15 & 0x1f) - uVar12;
    if (iVar9 != 0) {
      FVar4 = (((TBitArray<FDefaultBitArrayAllocator> *)this)->AllocatorInstance).SecondaryData;
      FVar10 = this;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar4;
      }
      puVar2 = (uint *)((longlong)FVar10 + (longlong)((int)uVar15 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
    }
  }
  else {
    *piVar1 = iVar3 + 3;
  }
  uVar15 = iVar3 + iVar14 * -3;
  if (uVar15 != 0) {
    FVar4 = (((TBitArray<FDefaultBitArrayAllocator> *)this)->AllocatorInstance).SecondaryData;
    FVar10 = this;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar4;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar10,iVar13 + 3,(uint *)FVar10,iVar13,uVar15);
  }
LAB_142b3a5c9:
  if ((3 < bVar8) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("PropertyCombination <= MaxValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x185,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (_param_7 < 4) {
    iVar13 = 1;
    ppuVar11 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)_param_7 * 4);
  }
  else {
    if ((_param_7 != 4) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ppuVar11 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                ::__l7::Values;
    iVar13 = 2;
  }
  bVar7 = TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddNonRedundant
                    ((uint *)ppuVar11,iVar13,(uint)bVar8,(uint *)&param_5,local_res10);
  if (bVar7) {
    _param_7 = FPropertyCombinationPack2::Pack((uint *)&param_5,local_res10[0]);
  }
  iVar14 = iVar14 * 3;
  if (((iVar14 < 0) || (((TBitArray<FDefaultBitArrayAllocator> *)this)->NumBits < iVar14 + 3)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar4 = (((TBitArray<FDefaultBitArrayAllocator> *)this)->AllocatorInstance).SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    this = FVar4;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)this,iVar14,(uint *)&param_7,0,3);
  return;
}

// AddDependency<3> @ 142b3a710

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
AddDependency<3>(FDependsNode *param_1,EDependencyProperty param_2,EDependencyProperty param_3,
                TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_4,
                TBitArray<FDefaultBitArrayAllocator> *param_5,
                _func___cdecl_uchar_EDependencyProperty *param_6,bool param_7)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FDependsNode *local_res8;
  undefined3 in_stack_00000039;
  
  local_res8 = param_1;
  if (param_7) {
    uVar13 = param_4->ArrayNum;
    iVar12 = 0;
    uVar11 = uVar13;
    if (0 < (int)uVar13) {
      do {
        uVar14 = uVar11 >> 1;
        if (*(FDependsNode **)
             ((param_4->AllocatorInstance).Data + (longlong)(int)(uVar14 + iVar12) * 8) < param_1) {
          iVar12 = uVar14 + iVar12 + (uVar11 & 1);
        }
        uVar11 = uVar14;
      } while (uVar14 != 0);
    }
    if (iVar12 < (int)uVar13) {
      if ((iVar12 < 0) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(FDependsNode **)((param_4->AllocatorInstance).Data + (longlong)iVar12 * 8) == local_res8
         ) {
        bVar8 = (*param_6)(param_2 & param_3);
        iVar6 = iVar12 * 5;
        _param_7 = 0;
        if (((iVar6 < 0) || (param_5->NumBits < iVar6 + 5)) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x3df,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (param_5->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<unsigned_int>)param_5;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar10 = FVar4;
        }
        FBitArrayMemory::MemmoveBitsWordOrder((uint *)&param_7,0,(uint *)FVar10,iVar6,5);
        goto LAB_142b3a981;
      }
    }
  }
  else {
    iVar12 = param_4->ArrayNum;
  }
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::Insert(param_4,&local_res8,iVar12);
  bVar8 = (*param_6)(param_2 & param_3);
  iVar6 = iVar12 * 5;
  _param_7 = 0;
  piVar1 = &param_5->NumBits;
  if (((iVar6 < 0) || (*piVar1 < iVar6)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("0 <= Index && Index <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x2f7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = *piVar1;
  if ((iVar3 == 0) ||
     ((int)((iVar3 + 4 >> 0x1f & 0x1fU) + iVar3 + 4) >> 5 !=
      (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5)) {
    TBitArray<FDefaultBitArrayAllocator>::Reserve(param_5,iVar3 + 5);
    iVar9 = *piVar1 + 5;
    *piVar1 = iVar9;
    uVar11 = iVar9 >> 0x1f & 0x1f;
    uVar13 = iVar9 + uVar11;
    iVar9 = (uVar13 & 0x1f) - uVar11;
    if (iVar9 != 0) {
      FVar4 = (param_5->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)param_5;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar4;
      }
      puVar2 = (uint *)((longlong)FVar10 + (longlong)((int)uVar13 >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
    }
  }
  else {
    *piVar1 = iVar3 + 5;
  }
  uVar13 = iVar3 + iVar12 * -5;
  if (uVar13 != 0) {
    FVar4 = (param_5->AllocatorInstance).SecondaryData;
    FVar10 = (ForElementType<unsigned_int>)param_5;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar4;
    }
    FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar10,iVar6 + 5,(uint *)FVar10,iVar6,uVar13);
  }
LAB_142b3a981:
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::Add
            ((TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> *)&param_7,(uint)bVar8);
  iVar12 = iVar12 * 5;
  if (((iVar12 < 0) || (param_5->NumBits < iVar12 + 5)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3bc,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar4 = (param_5->AllocatorInstance).SecondaryData;
  if (FVar4 != (ForElementType<unsigned_int>)0x0) {
    param_5 = (TBitArray<FDefaultBitArrayAllocator> *)FVar4;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)param_5,iVar12,(uint *)&param_7,0,5);
  return;
}

// AddDependency<0> @ 142b3aa20

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
AddDependency<0>(FDependsNode *param_1,EDependencyProperty param_2,EDependencyProperty param_3,
                TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_4,
                TBitArray<FDefaultBitArrayAllocator> *param_5,
                _func___cdecl_uchar_EDependencyProperty *param_6,bool param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FDependsNode *local_res8;
  
  local_res8 = param_1;
  if (param_7) {
    uVar2 = param_4->ArrayNum;
    iVar6 = 0;
    uVar7 = uVar2;
    if (0 < (int)uVar2) {
      do {
        iVar1 = (uVar7 >> 1) + iVar6;
        if (*(FDependsNode **)((param_4->AllocatorInstance).Data + (longlong)iVar1 * 8) < param_1) {
          iVar6 = iVar1 + (uVar7 & 1);
        }
        uVar4 = uVar7 >> 1;
        uVar7 = uVar7 >> 1;
      } while (uVar4 != 0);
    }
    if (iVar6 < (int)uVar2) {
      if ((iVar6 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(FDependsNode **)((param_4->AllocatorInstance).Data + (longlong)iVar6 * 8) == local_res8)
      {
        return;
      }
    }
  }
  else {
    iVar6 = param_4->ArrayNum;
  }
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::Insert(param_4,&local_res8,iVar6);
  return;
}

// BinarySearch<TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>,FDependsNode_*,TLess<void>_> @ 142b3ac40

int __cdecl
Algo::BinarySearch<TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>,FDependsNode_*,TLess<void>_>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,FDependsNode **param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(FDependsNode **)(pFVar2 + (longlong)iVar4 * 8) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) &&
     (iVar4 = -1, *(FDependsNode **)(pFVar2 + (longlong)iVar5 * 8) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearch<TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>,FDependsNode_const_*,TLess<void>_> @ 142b3acc0

int __cdecl
Algo::
BinarySearch<TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>,FDependsNode_const_*,TLess<void>_>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,FDependsNode **param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(FDependsNode **)(pFVar2 + (longlong)iVar4 * 8) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) &&
     (iVar4 = -1, *(FDependsNode **)(pFVar2 + (longlong)iVar5 * 8) <= *param_2)) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// CombinationEquals<FDependsNode_*> @ 142b3ad40

bool __cdecl
`anonymous_namespace'::CombinationEquals<FDependsNode_*>
          (TArrayView<FDependsNode_*_const,int> *param_1,
          TArrayView<FDependsNode_*_const,int> *param_2)

{
  FDependsNode **ppFVar1;
  FDependsNode **ppFVar2;
  FDependsNode **ppFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FDependsNode **ppFVar7;
  FDependsNode **ppFVar8;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  if (ppFVar2 != ppFVar1) {
    ppFVar3 = param_2->DataPtr;
    ppFVar8 = ppFVar2;
    do {
      ppFVar7 = ppFVar2;
      iVar6 = 0;
      do {
        iVar5 = iVar6 + 1;
        if (*ppFVar7 != *ppFVar8) {
          iVar5 = iVar6;
        }
        ppFVar7 = ppFVar7 + 1;
        iVar6 = iVar5;
      } while (ppFVar7 != ppFVar1);
      iVar6 = 0;
      if (ppFVar3 != ppFVar3 + param_2->ArrayNum) {
        ppFVar7 = ppFVar3;
        do {
          iVar4 = iVar6 + 1;
          if (*ppFVar7 != *ppFVar8) {
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          ppFVar7 = ppFVar7 + 1;
        } while (ppFVar7 != ppFVar3 + param_2->ArrayNum);
      }
      if (iVar5 != iVar6) {
        return false;
      }
      ppFVar8 = ppFVar8 + 1;
    } while (ppFVar8 != ppFVar1);
  }
  return true;
}

// CombinationEquals<FDependsNode_*> @ 142b3ae10

bool __cdecl
`anonymous_namespace'::CombinationEquals<FDependsNode_*>
          (TArrayView<FDependsNode_*_const,int> *param_1,FDependsNode **param_2)

{
  FDependsNode **ppFVar1;
  FDependsNode **ppFVar2;
  int iVar3;
  FDependsNode **ppFVar4;
  int iVar5;
  int iVar6;
  FDependsNode **ppFVar7;
  
  ppFVar2 = param_1->DataPtr;
  if ((int)*(undefined8 *)&param_1->ArrayNum != 1) {
    return false;
  }
  ppFVar1 = ppFVar2 + 1;
  if (ppFVar2 != ppFVar1) {
    ppFVar7 = ppFVar2;
    do {
      iVar6 = 0;
      if (ppFVar2 != ppFVar1) {
        ppFVar4 = ppFVar2;
        do {
          iVar5 = iVar6 + 1;
          if (*ppFVar4 != *ppFVar7) {
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          ppFVar4 = ppFVar4 + 1;
        } while (ppFVar4 != ppFVar1);
      }
      iVar5 = 0;
      if (param_2 != param_2 + 1) {
        ppFVar4 = param_2;
        iVar5 = 0;
        do {
          iVar3 = iVar5 + 1;
          if (*ppFVar4 != *ppFVar7) {
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          ppFVar4 = ppFVar4 + 1;
        } while (ppFVar4 != param_2 + 1);
      }
      if (iVar6 != iVar5) {
        return false;
      }
      ppFVar7 = ppFVar7 + 1;
    } while (ppFVar7 != ppFVar1);
  }
  return true;
}

// CombinationEquals<FDependsNode_*_const> @ 142b3aed0

bool __cdecl
`anonymous_namespace'::CombinationEquals<FDependsNode_*_const>
          (TArrayView<FDependsNode_*_const,int> *param_1,
          TArrayView<FDependsNode_*_const,int> *param_2)

{
  FDependsNode **ppFVar1;
  FDependsNode **ppFVar2;
  FDependsNode **ppFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FDependsNode **ppFVar7;
  FDependsNode **ppFVar8;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return false;
  }
  ppFVar2 = param_1->DataPtr;
  ppFVar1 = ppFVar2 + param_1->ArrayNum;
  if (ppFVar2 != ppFVar1) {
    ppFVar3 = param_2->DataPtr;
    ppFVar8 = ppFVar2;
    do {
      ppFVar7 = ppFVar2;
      iVar6 = 0;
      do {
        iVar5 = iVar6 + 1;
        if (*ppFVar7 != *ppFVar8) {
          iVar5 = iVar6;
        }
        ppFVar7 = ppFVar7 + 1;
        iVar6 = iVar5;
      } while (ppFVar7 != ppFVar1);
      iVar6 = 0;
      if (ppFVar3 != ppFVar3 + param_2->ArrayNum) {
        ppFVar7 = ppFVar3;
        do {
          iVar4 = iVar6 + 1;
          if (*ppFVar7 != *ppFVar8) {
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          ppFVar7 = ppFVar7 + 1;
        } while (ppFVar7 != ppFVar3 + param_2->ArrayNum);
      }
      if (iVar5 != iVar6) {
        return false;
      }
      ppFVar8 = ppFVar8 + 1;
    } while (ppFVar8 != ppFVar1);
  }
  return true;
}

// CombinationEquals<FAssetDependency> @ 142b3afa0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::CombinationEquals<FAssetDependency>
          (TArrayView<FAssetDependency_const_,int> *param_1,FAssetDependency *param_2)

{
  FAssetDependency *pFVar1;
  FAssetDependency *pFVar2;
  bool bVar3;
  FName *pFVar4;
  int iVar5;
  FName *pFVar6;
  FName *pFVar7;
  int iVar8;
  int iVar9;
  
  pFVar2 = param_1->DataPtr;
  if ((int)*(undefined8 *)&param_1->ArrayNum != 1) {
    return false;
  }
  pFVar1 = pFVar2 + 1;
  if (pFVar2 != pFVar1) {
    pFVar6 = &(pFVar2->AssetId).ObjectName;
    do {
      iVar9 = 0;
      if (pFVar2 != pFVar1) {
        pFVar7 = &(pFVar2->AssetId).ObjectName;
        do {
          if ((((pFVar7[-2] == pFVar6[-2]) && (pFVar7[-1] == pFVar6[-1])) && (*pFVar7 == *pFVar6))
             && (((pFVar7[1] == pFVar6[1] &&
                  ((char)pFVar7[2].ComparisonIndex.Value == (char)pFVar6[2].ComparisonIndex.Value))
                 && (*(char *)((longlong)&pFVar7[2].ComparisonIndex.Value + 1) ==
                     *(char *)((longlong)&pFVar6[2].ComparisonIndex.Value + 1))))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          iVar8 = iVar9 + 1;
          if (!bVar3) {
            iVar8 = iVar9;
          }
          iVar9 = iVar8;
          pFVar4 = pFVar7 + 2;
          pFVar7 = (FName *)&pFVar7[4].Number;
        } while ((FAssetDependency *)&pFVar4->Number != pFVar1);
      }
      iVar8 = 0;
      if (param_2 != param_2 + 1) {
        pFVar7 = &(param_2->AssetId).ObjectName;
        do {
          if (((*(FName *)&pFVar7[-2].ComparisonIndex == pFVar6[-2]) && (pFVar7[-1] == pFVar6[-1]))
             && ((*pFVar7 == *pFVar6 &&
                 (((pFVar7[1] == pFVar6[1] &&
                   ((char)pFVar7[2].ComparisonIndex.Value == (char)pFVar6[2].ComparisonIndex.Value))
                  && (*(char *)((longlong)&pFVar7[2].ComparisonIndex.Value + 1) ==
                      *(char *)((longlong)&pFVar6[2].ComparisonIndex.Value + 1))))))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          iVar5 = iVar8 + 1;
          if (!bVar3) {
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          pFVar4 = pFVar7 + 2;
          pFVar7 = (FName *)&pFVar7[4].Number;
        } while ((FAssetDependency *)&pFVar4->Number != param_2 + 1);
      }
      if (iVar9 != iVar8) {
        return false;
      }
      pFVar7 = pFVar6 + 2;
      pFVar6 = (FName *)&pFVar6[4].Number;
    } while ((FAssetDependency *)&pFVar7->Number != pFVar1);
  }
  return true;
}

// ConstructItems<FGatherableTextData,FGatherableTextData,int> @ 142b3b0f0

void __cdecl
ConstructItems<FGatherableTextData,FGatherableTextData,int>
          (void *param_1,FGatherableTextData *param_2,int param_3)

{
  int iVar1;
  FTextSourceSiteContext *pFVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    piVar3 = &(param_2->SourceSiteContexts).ArrayNum;
    piVar4 = (int *)((longlong)param_1 + 0x78);
    do {
      FString::FString((FString *)
                       ((longlong)param_1 + (-0x78 - (longlong)param_2) + (longlong)piVar3),
                       (FString *)(piVar3 + -0x1e));
      FString::FString((FString *)(piVar4 + -0x1a),(FString *)(piVar3 + -0x1a));
      FLocMetadataObject::FLocMetadataObject
                ((FLocMetadataObject *)(piVar4 + -0x16),(FLocMetadataObject *)(piVar3 + -0x16));
      piVar4[-2] = 0;
      piVar4[-1] = 0;
      iVar1 = *piVar3;
      pFVar2 = (FTextSourceSiteContext *)
               (((TArray<FTextSourceSiteContext,TSizedDefaultAllocator<32>_> *)(piVar3 + -2))->
               AllocatorInstance).Data;
      *piVar4 = iVar1;
      if (iVar1 == 0) {
        piVar4[1] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (200,8,iVar1,0,(ForAnyElementType *)(piVar4 + -2),iVar1,piVar4 + 1);
        ConstructItems<FTextSourceSiteContext,FTextSourceSiteContext,int>
                  (((ForAnyElementType *)(piVar4 + -2))->Data,pFVar2,iVar1);
      }
      piVar3 = piVar3 + 0x20;
      piVar4 = piVar4 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int> @ 142b3b1f0

void __cdecl
ConstructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<FName,FString>,int> @ 142b3b2a0

void __cdecl DefaultConstructItems<TTuple<FName,FString>,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// EnumerateMatchingDependencyFlags<2,``IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>_> @ 142b3bda0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<2,__IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *pTVar3;
  code *pcVar4;
  FDependencyQuery *pFVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar9;
  EDependencyProperty EVar10;
  uint **ppuVar11;
  longlong lVar12;
  EDependencyProperty EVar13;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar15;
  EDependencyProperty local_res8 [8];
  undefined1 local_res10;
  _func___cdecl_EDependencyProperty_uchar *local_res18;
  EDependencyProperty local_res20;
  EDependencyCategory local_68 [8];
  undefined1 local_60 [4];
  uint local_5c;
  uint local_58;
  FDependsNode *local_50 [2];
  uint uVar14;
  
  pFVar5 = param_5;
  iVar1 = param_4 * 3;
  local_5c = 0;
  EVar13 = param_5->Excluded & param_2;
  uVar14 = (uint)EVar13;
  EVar10 = param_5->Required & param_2;
  local_58 = (uint)EVar13;
  local_res18 = param_3;
  local_res20 = EVar10;
  if (((iVar1 < 0) || (param_1->NumBits < iVar1 + 3)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_5c,0,(uint *)param_1,iVar1,3);
  local_res10 = 0;
  if (local_5c < 4) {
    ppuVar11 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)local_5c * 4);
  }
  else {
    if ((local_5c != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppuVar11 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                ::__l7::Values;
  }
  if (local_5c < 4) {
    lVar12 = 1;
  }
  else {
    if ((local_5c != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = 2;
  }
  do {
    EVar13 = (*local_res18)(*(uchar *)ppuVar11);
    if (((EVar13 & EVar10) == EVar10) && ((EVar13 & (EDependencyProperty)uVar14) == None)) {
      FVar15 = (pFVar5->RequiredUnions).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar5->RequiredUnions;
      iVar1 = (pFVar5->RequiredUnions).ArrayNum;
      if (FVar15 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FVar9 = FVar15;
      }
      FVar15 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
               ((longlong)iVar1 + (longlong)FVar9);
      while( true ) {
        if ((pFVar5->RequiredUnions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_60);
        }
        if (FVar9 == FVar15) break;
        if (((param_2 & *(EDependencyProperty *)FVar9) != None) &&
           (EVar10 = local_res20, uVar14 = local_58,
           (param_2 & *(EDependencyProperty *)FVar9 & EVar13) == None)) goto LAB_142b3bfd6;
        FVar9 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar9 + 1);
      }
      param_5._0_1_ = local_res10;
      local_68[0] = param_6->ListCategory;
      pTVar3 = param_6->InCallback;
      local_50[0] = param_6->DependsNode;
      local_res8[0] = EVar13;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar3);
      pcVar4 = *(code **)pTVar3;
      plVar8 = *(longlong **)&pTVar3->field_0x28;
      if (*(longlong **)&pTVar3->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&pTVar3->field_0x10;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,local_50,local_68,local_res8,&param_5);
      local_res10 = 1;
      EVar10 = local_res20;
      uVar14 = local_58;
    }
LAB_142b3bfd6:
    ppuVar11 = (uint **)((longlong)ppuVar11 + 4);
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      return;
    }
  } while( true );
}

// EnumerateMatchingDependencyFlags<2,``IterateDependencyList<2,`FDependsNode::ContainsDependency'::__l17::<lambda_3>_>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>_> @ 142b3c000

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<2,__IterateDependencyList<2,_FDependsNode::ContainsDependency_::__l17::<lambda_3>_>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  EDependencyProperty EVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  FDependencyQuery *pFVar5;
  bool bVar6;
  EDependencyProperty EVar7;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar8;
  EDependencyProperty EVar9;
  longlong lVar10;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar11;
  uint **ppuVar12;
  undefined1 local_res20 [8];
  
  pFVar5 = param_5;
  iVar2 = param_4 * 3;
  param_5._0_4_ = 0;
  EVar1 = pFVar5->Excluded;
  EVar9 = pFVar5->Required & param_2;
  if (((iVar2 < 0) || (param_1->NumBits < iVar2 + 3)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)&param_5,0,(uint *)param_1,iVar2,3);
  if ((uint)param_5 < 4) {
    ppuVar12 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)(uint)param_5 * 4);
  }
  else {
    if (((uint)param_5 != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppuVar12 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                ::__l7::Values;
  }
  if ((uint)param_5 < 4) {
    lVar10 = 1;
  }
  else {
    if (((uint)param_5 != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar10 = 2;
  }
  do {
    EVar7 = (*param_3)(*(uchar *)ppuVar12);
    if (((EVar7 & EVar9) == EVar9) && ((EVar7 & EVar1 & param_2) == None)) {
      FVar11 = (pFVar5->RequiredUnions).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar5->RequiredUnions;
      iVar2 = (pFVar5->RequiredUnions).ArrayNum;
      if (FVar11 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FVar8 = FVar11;
      }
      FVar11 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
               ((longlong)iVar2 + (longlong)FVar8);
      while( true ) {
        if ((pFVar5->RequiredUnions).ArrayNum != iVar2) {
          `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (FVar8 == FVar11) break;
        if (((param_2 & *(EDependencyProperty *)FVar8) != None) &&
           ((param_2 & *(EDependencyProperty *)FVar8 & EVar7) == None)) goto LAB_142b3c1ca;
        FVar8 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar8 + 1);
      }
      *param_6->InCallback->bExists = true;
    }
LAB_142b3c1ca:
    ppuVar12 = (uint **)((longlong)ppuVar12 + 4);
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
}

// EnumerateMatchingDependencyFlags<2,`IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'::__l14::<lambda_1>_> @ 142b3c1f0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<2,_IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l14::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *pTVar3;
  code *pcVar4;
  FDependencyQuery *pFVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar9;
  EDependencyProperty EVar10;
  uint **ppuVar11;
  longlong lVar12;
  EDependencyProperty EVar13;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar15;
  EDependencyProperty local_res8 [8];
  undefined1 local_res10;
  _func___cdecl_EDependencyProperty_uchar *local_res18;
  EDependencyProperty local_res20;
  EDependencyCategory local_68 [8];
  undefined1 local_60 [4];
  uint local_5c;
  uint local_58;
  FDependsNode *local_50 [2];
  uint uVar14;
  
  pFVar5 = param_5;
  iVar1 = param_4 * 3;
  local_5c = 0;
  EVar13 = param_5->Excluded & param_2;
  uVar14 = (uint)EVar13;
  EVar10 = param_5->Required & param_2;
  local_58 = (uint)EVar13;
  local_res18 = param_3;
  local_res20 = EVar10;
  if (((iVar1 < 0) || (param_1->NumBits < iVar1 + 3)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_5c,0,(uint *)param_1,iVar1,3);
  local_res10 = 0;
  if (local_5c < 4) {
    ppuVar11 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)local_5c * 4);
  }
  else {
    if ((local_5c != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppuVar11 = &`public:_static_void___cdecl_FPropertyCombinationPack2::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                ::__l7::Values;
  }
  if (local_5c < 4) {
    lVar12 = 1;
  }
  else {
    if ((local_5c != 4) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Compressed == 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                           ,0x229,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = 2;
  }
  do {
    EVar13 = (*local_res18)(*(uchar *)ppuVar11);
    if (((EVar13 & EVar10) == EVar10) && ((EVar13 & (EDependencyProperty)uVar14) == None)) {
      FVar15 = (pFVar5->RequiredUnions).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar5->RequiredUnions;
      iVar1 = (pFVar5->RequiredUnions).ArrayNum;
      if (FVar15 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FVar9 = FVar15;
      }
      FVar15 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
               ((longlong)iVar1 + (longlong)FVar9);
      while( true ) {
        if ((pFVar5->RequiredUnions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_60);
        }
        if (FVar9 == FVar15) break;
        if (((param_2 & *(EDependencyProperty *)FVar9) != None) &&
           (EVar10 = local_res20, uVar14 = local_58,
           (param_2 & *(EDependencyProperty *)FVar9 & EVar13) == None)) goto LAB_142b3c426;
        FVar9 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar9 + 1);
      }
      param_5._0_1_ = local_res10;
      local_68[0] = param_6->ListCategory;
      pTVar3 = param_6->InCallback;
      local_50[0] = param_6->DependsNode;
      local_res8[0] = EVar13;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar3);
      pcVar4 = *(code **)pTVar3;
      plVar8 = *(longlong **)&pTVar3->field_0x28;
      if (*(longlong **)&pTVar3->field_0x28 == (longlong *)0x0) {
        plVar8 = (longlong *)&pTVar3->field_0x10;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      (*pcVar4)(uVar7,local_50,local_68,local_res8,&param_5);
      local_res10 = 1;
      EVar10 = local_res20;
      uVar14 = local_58;
    }
LAB_142b3c426:
    ppuVar11 = (uint **)((longlong)ppuVar11 + 4);
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      return;
    }
  } while( true );
}

// EnumerateMatchingDependencyFlags<3,``IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>_> @ 142b3c450

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<3,__IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *pTVar3;
  code *pcVar4;
  FDependencyQuery *pFVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar10;
  EDependencyProperty EVar11;
  ulonglong uVar12;
  uint **ppuVar13;
  EDependencyProperty EVar14;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar16;
  EDependencyProperty local_res8 [8];
  uint local_res10;
  _func___cdecl_EDependencyProperty_uchar *local_res18;
  EDependencyProperty local_res20;
  EDependencyCategory local_68 [8];
  undefined1 local_60 [4];
  uint local_5c;
  uint local_58;
  FDependsNode *local_50 [2];
  uint uVar15;
  
  pFVar5 = param_5;
  iVar1 = param_4 * 5;
  local_5c = 0;
  EVar14 = param_5->Excluded & param_2;
  uVar15 = (uint)EVar14;
  EVar11 = param_5->Required & param_2;
  local_58 = (uint)EVar14;
  local_res18 = param_3;
  local_res20 = EVar11;
  if (((iVar1 < 0) || (param_1->NumBits < iVar1 + 5)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_5c,0,(uint *)param_1,iVar1,5);
  local_res10 = local_res10 & 0xffffff00;
  if (local_5c < 8) {
    ppuVar13 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)local_5c * 4);
  }
  else {
    switch(local_5c) {
    case 8:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l10::Values;
      break;
    case 9:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l11::Values;
      break;
    case 10:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l12::Values;
      break;
    case 0xb:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l13::Values;
      break;
    case 0xc:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l14::Values;
      break;
    case 0xd:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l15::Values;
      break;
    case 0xe:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l16::Values;
      break;
    case 0xf:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l17::Values;
      break;
    case 0x10:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l18::Values;
      break;
    case 0x11:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l19::Values;
      break;
    case 0x12:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l20::Values;
      break;
    default:
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2ca,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ppuVar13 = (uint **)CONCAT71(param_5._1_7_,param_5._0_1_);
    }
  }
  if (local_5c < 8) {
    uVar7 = 1;
  }
  else {
    switch(local_5c) {
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      uVar7 = 2;
      break;
    case 0x11:
    case 0x12:
      uVar7 = 3;
      break;
    default:
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2ca,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = local_res10;
      if (local_res10 == 0) {
        return;
      }
    }
  }
  uVar12 = (ulonglong)uVar7;
  do {
    EVar14 = (*local_res18)(*(uchar *)ppuVar13);
    if (((EVar14 & EVar11) == EVar11) && ((EVar14 & (EDependencyProperty)uVar15) == None)) {
      FVar16 = (pFVar5->RequiredUnions).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar5->RequiredUnions;
      iVar1 = (pFVar5->RequiredUnions).ArrayNum;
      if (FVar16 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FVar10 = FVar16;
      }
      FVar16 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
               ((longlong)iVar1 + (longlong)FVar10);
      while( true ) {
        if ((pFVar5->RequiredUnions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_60);
        }
        if (FVar10 == FVar16) break;
        if (((param_2 & *(EDependencyProperty *)FVar10) != None) &&
           (EVar11 = local_res20, uVar15 = local_58,
           (param_2 & *(EDependencyProperty *)FVar10 & EVar14) == None)) goto LAB_142b3c736;
        FVar10 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar10 + 1);
      }
      param_5._0_1_ = (undefined1)local_res10;
      local_68[0] = param_6->ListCategory;
      pTVar3 = param_6->InCallback;
      local_50[0] = param_6->DependsNode;
      local_res8[0] = EVar14;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar3);
      pcVar4 = *(code **)pTVar3;
      plVar9 = *(longlong **)&pTVar3->field_0x28;
      if (*(longlong **)&pTVar3->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&pTVar3->field_0x10;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar4)(uVar8,local_50,local_68,local_res8,&param_5);
      local_res10 = CONCAT31(local_res10._1_3_,1);
      EVar11 = local_res20;
      uVar15 = local_58;
    }
LAB_142b3c736:
    ppuVar13 = (uint **)((longlong)ppuVar13 + 4);
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) {
      return;
    }
  } while( true );
}

// EnumerateMatchingDependencyFlags<3,``IterateDependencyList<3,`FDependsNode::ContainsDependency'::__l5::<lambda_1>_>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>_> @ 142b3c7c0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<3,__IterateDependencyList<3,_FDependsNode::ContainsDependency_::__l5::<lambda_1>_>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  EDependencyProperty EVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  FDependencyQuery *pFVar5;
  bool bVar6;
  EDependencyProperty EVar7;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar8;
  EDependencyProperty EVar9;
  uint **ppuVar10;
  ulonglong uVar11;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar12;
  uint local_res10;
  undefined1 local_res20 [8];
  
  pFVar5 = param_5;
  iVar2 = param_4 * 5;
  param_5._0_4_ = 0;
  EVar1 = pFVar5->Excluded;
  EVar9 = pFVar5->Required & param_2;
  local_res10 = CONCAT31(local_res10._1_3_,EVar9);
  if (((iVar2 < 0) || (param_1->NumBits < iVar2 + 5)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
  }
  FBitArrayMemory::MemmoveBitsWordOrder((uint *)&param_5,0,(uint *)param_1,iVar2,5);
  if ((uint)param_5 < 8) {
    ppuVar10 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)(uint)param_5 * 4);
  }
  else {
    switch((uint)param_5) {
    case 8:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l10::Values;
      break;
    case 9:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l11::Values;
      break;
    case 10:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l12::Values;
      break;
    case 0xb:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l13::Values;
      break;
    case 0xc:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l14::Values;
      break;
    case 0xd:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l15::Values;
      break;
    case 0xe:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l16::Values;
      break;
    case 0xf:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l17::Values;
      break;
    case 0x10:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l18::Values;
      break;
    case 0x11:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l19::Values;
      break;
    case 0x12:
      ppuVar10 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l20::Values;
      break;
    default:
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2ca,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ppuVar10 = (uint **)CONCAT44(param_5._4_4_,(uint)param_5);
    }
  }
  if ((uint)param_5 < 8) {
    local_res10 = 1;
  }
  else {
    switch((uint)param_5) {
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      local_res10 = 2;
      break;
    case 0x11:
    case 0x12:
      local_res10 = 3;
      break;
    default:
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2ca,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_res10 == 0) {
        return;
      }
    }
  }
  uVar11 = (ulonglong)local_res10;
  do {
    EVar7 = (*param_3)(*(uchar *)ppuVar10);
    if (((EVar7 & EVar9) == EVar9) && ((EVar7 & EVar1 & param_2) == None)) {
      FVar12 = (pFVar5->RequiredUnions).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar5->RequiredUnions;
      iVar2 = (pFVar5->RequiredUnions).ArrayNum;
      if (FVar12 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FVar8 = FVar12;
      }
      FVar12 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
               ((longlong)iVar2 + (longlong)FVar8);
      while( true ) {
        if ((pFVar5->RequiredUnions).ArrayNum != iVar2) {
          `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (FVar8 == FVar12) break;
        if (((param_2 & *(EDependencyProperty *)FVar8) != None) &&
           ((param_2 & *(EDependencyProperty *)FVar8 & EVar7) == None)) goto LAB_142b3ca3b;
        FVar8 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar8 + 1);
      }
      *param_6->InCallback->bExists = true;
    }
LAB_142b3ca3b:
    ppuVar10 = (uint **)((longlong)ppuVar10 + 4);
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) {
      return;
    }
  } while( true );
}

// EnumerateMatchingDependencyFlags<3,`IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'::__l14::<lambda_1>_> @ 142b3cad0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<3,_IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l14::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *pTVar3;
  code *pcVar4;
  FDependencyQuery *pFVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar10;
  EDependencyProperty EVar11;
  ulonglong uVar12;
  uint **ppuVar13;
  EDependencyProperty EVar14;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar16;
  EDependencyProperty local_res8 [8];
  uint local_res10;
  _func___cdecl_EDependencyProperty_uchar *local_res18;
  EDependencyProperty local_res20;
  EDependencyCategory local_68 [8];
  undefined1 local_60 [4];
  uint local_5c;
  uint local_58;
  FDependsNode *local_50 [2];
  uint uVar15;
  
  pFVar5 = param_5;
  iVar1 = param_4 * 5;
  local_5c = 0;
  EVar14 = param_5->Excluded & param_2;
  uVar15 = (uint)EVar14;
  EVar11 = param_5->Required & param_2;
  local_58 = (uint)EVar14;
  local_res18 = param_3;
  local_res20 = EVar11;
  if (((iVar1 < 0) || (param_1->NumBits < iVar1 + 5)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar2;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_5c,0,(uint *)param_1,iVar1,5);
  local_res10 = local_res10 & 0xffffff00;
  if (local_5c < 8) {
    ppuVar13 = (uint **)((longlong)
                         &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                          ::__l5::Values + (ulonglong)local_5c * 4);
  }
  else {
    switch(local_5c) {
    case 8:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l10::Values;
      break;
    case 9:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l11::Values;
      break;
    case 10:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l12::Values;
      break;
    case 0xb:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l13::Values;
      break;
    case 0xc:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l14::Values;
      break;
    case 0xd:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l15::Values;
      break;
    case 0xe:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l16::Values;
      break;
    case 0xf:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l17::Values;
      break;
    case 0x10:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l18::Values;
      break;
    case 0x11:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l19::Values;
      break;
    case 0x12:
      ppuVar13 = &`public:_static_void___cdecl_FPropertyCombinationPack3::Unpack(unsigned_int,unsigned_int_const*___ptr64&___ptr64,int&___ptr64)'
                  ::__l20::Values;
      break;
    default:
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2ca,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ppuVar13 = (uint **)CONCAT71(param_5._1_7_,param_5._0_1_);
    }
  }
  if (local_5c < 8) {
    uVar7 = 1;
  }
  else {
    switch(local_5c) {
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      uVar7 = 2;
      break;
    case 0x11:
    case 0x12:
      uVar7 = 3;
      break;
    default:
      bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PropertyCombinationSet.h"
                         ,0x2ca,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = local_res10;
      if (local_res10 == 0) {
        return;
      }
    }
  }
  uVar12 = (ulonglong)uVar7;
  do {
    EVar14 = (*local_res18)(*(uchar *)ppuVar13);
    if (((EVar14 & EVar11) == EVar11) && ((EVar14 & (EDependencyProperty)uVar15) == None)) {
      FVar16 = (pFVar5->RequiredUnions).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar5->RequiredUnions;
      iVar1 = (pFVar5->RequiredUnions).ArrayNum;
      if (FVar16 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FVar10 = FVar16;
      }
      FVar16 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
               ((longlong)iVar1 + (longlong)FVar10);
      while( true ) {
        if ((pFVar5->RequiredUnions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_60);
        }
        if (FVar10 == FVar16) break;
        if (((param_2 & *(EDependencyProperty *)FVar10) != None) &&
           (EVar11 = local_res20, uVar15 = local_58,
           (param_2 & *(EDependencyProperty *)FVar10 & EVar14) == None)) goto LAB_142b3cdb6;
        FVar10 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar10 + 1);
      }
      param_5._0_1_ = (undefined1)local_res10;
      local_68[0] = param_6->ListCategory;
      pTVar3 = param_6->InCallback;
      local_50[0] = param_6->DependsNode;
      local_res8[0] = EVar14;
      UE::Core::Private::Function::CheckCallable(*(void **)pTVar3);
      pcVar4 = *(code **)pTVar3;
      plVar9 = *(longlong **)&pTVar3->field_0x28;
      if (*(longlong **)&pTVar3->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&pTVar3->field_0x10;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar4)(uVar8,local_50,local_68,local_res8,&param_5);
      local_res10 = CONCAT31(local_res10._1_3_,1);
      EVar11 = local_res20;
      uVar15 = local_58;
    }
LAB_142b3cdb6:
    ppuVar13 = (uint **)((longlong)ppuVar13 + 4);
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) {
      return;
    }
  } while( true );
}

// EnumerateMatchingDependencyFlags<0,``IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'::__l2::<lambda_1>::operator()'::__l7::<lambda_1>_> @ 142b3ce40

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<0,__IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  EDependencyProperty EVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *pTVar4;
  code *pcVar5;
  FDependencyQuery *pFVar6;
  bool bVar7;
  EDependencyProperty EVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar13;
  EDependencyProperty EVar14;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  _func___cdecl_EDependencyProperty_uchar *local_res18;
  EDependencyProperty local_res20 [8];
  uint local_54;
  FDependsNode *local_50 [2];
  
  pFVar6 = param_5;
  EVar1 = param_5->Excluded;
  EVar14 = param_5->Required & param_2;
  local_res18 = param_3;
  if (((param_4 < 0) || (param_1->NumBits < param_4 + 1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_54,0,(uint *)param_1,param_4,1);
  uVar12 = 0;
  local_res10[0] = 0;
  do {
    if (((&local_54)[uVar12 >> 5] >> ((uint)uVar12 & 0x1f) & 1) != 0) break;
    uVar11 = (uint)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
  } while (uVar11 == 0);
  uVar11 = (uint)uVar12;
  do {
    do {
      if (uVar11 == 1) {
        return;
      }
      EVar8 = (*param_3)((uchar)uVar12);
      if (((EVar8 & EVar14) == EVar14) && ((EVar8 & EVar1 & param_2) == None)) {
        FVar15 = (pFVar6->RequiredUnions).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar6->RequiredUnions;
        iVar2 = (pFVar6->RequiredUnions).ArrayNum;
        if (FVar15 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
          FVar13 = FVar15;
        }
        FVar15 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
                 ((longlong)iVar2 + (longlong)FVar13);
        while( true ) {
          if ((pFVar6->RequiredUnions).ArrayNum != iVar2) {
            `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (FVar13 == FVar15) break;
          if (((param_2 & *(EDependencyProperty *)FVar13) != None) &&
             ((param_2 & *(EDependencyProperty *)FVar13 & EVar8) == None)) goto LAB_142b3d008;
          FVar13 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar13 + 1);
        }
        param_5._0_1_ = param_6->ListCategory;
        pTVar4 = param_6->InCallback;
        local_50[0] = param_6->DependsNode;
        local_res20[0] = EVar8;
        UE::Core::Private::Function::CheckCallable(*(void **)pTVar4);
        pcVar5 = *(code **)pTVar4;
        plVar10 = *(longlong **)&pTVar4->field_0x28;
        if (*(longlong **)&pTVar4->field_0x28 == (longlong *)0x0) {
          plVar10 = (longlong *)&pTVar4->field_0x10;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar5)(uVar9,local_50,&param_5,local_res20,local_res10);
        local_res10[0] = 1;
      }
LAB_142b3d008:
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      param_3 = local_res18;
    } while (uVar11 != 0);
    do {
      if (((&local_54)[uVar12 >> 5] >> ((uint)uVar12 & 0x1f) & 1) != 0) break;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 == 0);
    uVar11 = (uint)uVar12;
  } while( true );
}

// EnumerateMatchingDependencyFlags<0,`IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'::__l14::<lambda_1>_> @ 142b3d060

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
EnumerateMatchingDependencyFlags<0,_IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l14::<lambda_1>_>
          (TBitArray<FDefaultBitArrayAllocator> *param_1,EDependencyProperty param_2,
          _func___cdecl_EDependencyProperty_uchar *param_3,int param_4,FDependencyQuery *param_5,
          <lambda_1> *param_6)

{
  EDependencyProperty EVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *pTVar4;
  code *pcVar5;
  FDependencyQuery *pFVar6;
  bool bVar7;
  EDependencyProperty EVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar13;
  EDependencyProperty EVar14;
  ForElementType<UE::AssetRegistry::EDependencyProperty> FVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  _func___cdecl_EDependencyProperty_uchar *local_res18;
  EDependencyProperty local_res20 [8];
  uint local_54;
  FDependsNode *local_50 [2];
  
  pFVar6 = param_5;
  EVar1 = param_5->Excluded;
  EVar14 = param_5->Required & param_2;
  local_res18 = param_3;
  if (((param_4 < 0) || (param_1->NumBits < param_4 + 1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x3df,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar3;
  }
  FBitArrayMemory::MemmoveBitsWordOrder(&local_54,0,(uint *)param_1,param_4,1);
  uVar12 = 0;
  local_res10[0] = 0;
  do {
    if (((&local_54)[uVar12 >> 5] >> ((uint)uVar12 & 0x1f) & 1) != 0) break;
    uVar11 = (uint)uVar12 + 1;
    uVar12 = (ulonglong)uVar11;
  } while (uVar11 == 0);
  uVar11 = (uint)uVar12;
  do {
    do {
      if (uVar11 == 1) {
        return;
      }
      EVar8 = (*param_3)((uchar)uVar12);
      if (((EVar8 & EVar14) == EVar14) && ((EVar8 & EVar1 & param_2) == None)) {
        FVar15 = (pFVar6->RequiredUnions).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)&pFVar6->RequiredUnions;
        iVar2 = (pFVar6->RequiredUnions).ArrayNum;
        if (FVar15 != (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
          FVar13 = FVar15;
        }
        FVar15 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)
                 ((longlong)iVar2 + (longlong)FVar13);
        while( true ) {
          if ((pFVar6->RequiredUnions).ArrayNum != iVar2) {
            `TCheckedPointerIterator<enum_UE::AssetRegistry::EDependencyProperty_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (FVar13 == FVar15) break;
          if (((param_2 & *(EDependencyProperty *)FVar13) != None) &&
             ((param_2 & *(EDependencyProperty *)FVar13 & EVar8) == None)) goto LAB_142b3d228;
          FVar13 = (ForElementType<UE::AssetRegistry::EDependencyProperty>)((longlong)FVar13 + 1);
        }
        param_5._0_1_ = param_6->ListCategory;
        pTVar4 = param_6->InCallback;
        local_50[0] = param_6->DependsNode;
        local_res20[0] = EVar8;
        UE::Core::Private::Function::CheckCallable(*(void **)pTVar4);
        pcVar5 = *(code **)pTVar4;
        plVar10 = *(longlong **)&pTVar4->field_0x28;
        if (*(longlong **)&pTVar4->field_0x28 == (longlong *)0x0) {
          plVar10 = (longlong *)&pTVar4->field_0x10;
        }
        uVar9 = (**(code **)(*plVar10 + 8))();
        (*pcVar5)(uVar9,local_50,&param_5,local_res20,local_res10);
        local_res10[0] = 1;
      }
LAB_142b3d228:
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      param_3 = local_res18;
    } while (uVar11 != 0);
    do {
      if (((&local_54)[uVar12 >> 5] >> ((uint)uVar12 & 0x1f) & 1) != 0) break;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 == 0);
    uVar11 = (uint)uVar12;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_ManageDependencies<1>'::__l2::<lambda_1>_> @ 142b3d280

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<1>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_res20;
  
  local_res20 = param_4.PointerDependencies;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3d388:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<1>'::__l2::<lambda_1>::
                          operator()(&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<1>'::__l2::<lambda_1>::
                        operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<1>'::__l2::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<1>'::__l2::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_142b3d388;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_ManageDependencies<0>'::__l2::<lambda_1>_> @ 142b3d470

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<0>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_res20;
  
  local_res20 = param_4.PointerDependencies;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3d578:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<0>'::__l2::<lambda_1>::
                          operator()(&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<0>'::__l2::<lambda_1>::
                        operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<0>'::__l2::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FDependsNode::SerializeLoad_ManageDependencies<0>'::__l2::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_142b3d578;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_PackageDependencies<1>'::__l2::<lambda_1>_> @ 142b3d660

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<1>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_res20;
  
  local_res20 = param_4.PointerDependencies;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3d768:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<1>'::__l2::<lambda_1>::
                          operator()(&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<1>'::__l2::<lambda_1>::
                        operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<1>'::__l2::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<1>'::__l2::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_142b3d768;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_PackageDependencies<0>'::__l2::<lambda_1>_> @ 142b3d850

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<0>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_res20;
  
  local_res20 = param_4.PointerDependencies;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3d958:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<0>'::__l2::<lambda_1>::
                          operator()(&local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<0>'::__l2::<lambda_1>::
                        operator()(&local_res20,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<0>'::__l2::<lambda_1>::operator()
                        (&local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FDependsNode::SerializeLoad_PackageDependencies<0>'::__l2::<lambda_1>::operator()
                      (&local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_142b3d958;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`SortDependencyList<2>'::__l23::<lambda_1>_> @ 142b3da40

void __cdecl
AlgoImpl::HeapSortInternal<int,int,FIdentityFunctor,_SortDependencyList<2>_::__l23::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar8 = iVar4 * 2;
  iVar7 = iVar8;
  iVar5 = iVar4;
  do {
    while (param_2 <= iVar8 + 1) {
LAB_142b3db4a:
      if (iVar5 == 0) {
        iVar8 = param_2 + -1;
        lVar9 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar8) {
              iVar7 = 0;
              do {
                iVar5 = iVar7;
                if ((iVar7 + 2 < iVar8) &&
                   (iVar5 = iVar7 + 1,
                   (*param_4.DependencyData)[param_1[(longlong)iVar7 + 2]] <
                   (*param_4.DependencyData)[param_1[iVar7 + 1]])) {
                  iVar5 = iVar7;
                }
                iVar6 = param_1[iVar4];
                if ((*param_4.DependencyData)[param_1[(longlong)iVar5 + 1]] <=
                    (*param_4.DependencyData)[iVar6]) break;
                param_1[iVar4] = param_1[(longlong)iVar5 + 1];
                iVar4 = iVar5 + 1;
                iVar7 = iVar4 * 2;
                param_1[(longlong)iVar5 + 1] = iVar6;
              } while (iVar7 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar5 + -1;
      iVar8 = iVar7 + -2;
      iVar7 = iVar8;
      iVar5 = iVar4;
    }
    iVar6 = iVar8;
    if ((iVar8 + 2 < param_2) &&
       (iVar6 = iVar8 + 1,
       (*param_4.DependencyData)[param_1[(longlong)iVar8 + 2]] <
       (*param_4.DependencyData)[param_1[iVar8 + 1]])) {
      iVar6 = iVar8;
    }
    iVar1 = param_1[iVar4];
    if ((*param_4.DependencyData)[param_1[(longlong)iVar6 + 1]] <= (*param_4.DependencyData)[iVar1])
    goto LAB_142b3db4a;
    param_1[iVar4] = param_1[(longlong)iVar6 + 1];
    iVar4 = iVar6 + 1;
    iVar8 = iVar4 * 2;
    param_1[(longlong)iVar6 + 1] = iVar1;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`SortDependencyList<3>'::__l23::<lambda_1>_> @ 142b3dc30

void __cdecl
AlgoImpl::HeapSortInternal<int,int,FIdentityFunctor,_SortDependencyList<3>_::__l23::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar8 = iVar4 * 2;
  iVar7 = iVar8;
  iVar5 = iVar4;
  do {
    while (param_2 <= iVar8 + 1) {
LAB_142b3dd3a:
      if (iVar5 == 0) {
        iVar8 = param_2 + -1;
        lVar9 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar8) {
              iVar7 = 0;
              do {
                iVar5 = iVar7;
                if ((iVar7 + 2 < iVar8) &&
                   (iVar5 = iVar7 + 1,
                   (*param_4.DependencyData)[param_1[(longlong)iVar7 + 2]] <
                   (*param_4.DependencyData)[param_1[iVar7 + 1]])) {
                  iVar5 = iVar7;
                }
                iVar6 = param_1[iVar4];
                if ((*param_4.DependencyData)[param_1[(longlong)iVar5 + 1]] <=
                    (*param_4.DependencyData)[iVar6]) break;
                param_1[iVar4] = param_1[(longlong)iVar5 + 1];
                iVar4 = iVar5 + 1;
                iVar7 = iVar4 * 2;
                param_1[(longlong)iVar5 + 1] = iVar6;
              } while (iVar7 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar5 + -1;
      iVar8 = iVar7 + -2;
      iVar7 = iVar8;
      iVar5 = iVar4;
    }
    iVar6 = iVar8;
    if ((iVar8 + 2 < param_2) &&
       (iVar6 = iVar8 + 1,
       (*param_4.DependencyData)[param_1[(longlong)iVar8 + 2]] <
       (*param_4.DependencyData)[param_1[iVar8 + 1]])) {
      iVar6 = iVar8;
    }
    iVar1 = param_1[iVar4];
    if ((*param_4.DependencyData)[param_1[(longlong)iVar6 + 1]] <= (*param_4.DependencyData)[iVar1])
    goto LAB_142b3dd3a;
    param_1[iVar4] = param_1[(longlong)iVar6 + 1];
    iVar4 = iVar6 + 1;
    iVar8 = iVar4 * 2;
    param_1[(longlong)iVar6 + 1] = iVar1;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,`SortDependencyList<0>'::__l23::<lambda_1>_> @ 142b3de20

void __cdecl
AlgoImpl::HeapSortInternal<int,int,FIdentityFunctor,_SortDependencyList<0>_::__l23::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar8 = iVar4 * 2;
  iVar7 = iVar8;
  iVar5 = iVar4;
  do {
    while (param_2 <= iVar8 + 1) {
LAB_142b3df2a:
      if (iVar5 == 0) {
        iVar8 = param_2 + -1;
        lVar9 = (longlong)iVar8;
        if (0 < iVar8) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar8) {
              iVar7 = 0;
              do {
                iVar5 = iVar7;
                if ((iVar7 + 2 < iVar8) &&
                   (iVar5 = iVar7 + 1,
                   (*param_4.DependencyData)[param_1[(longlong)iVar7 + 2]] <
                   (*param_4.DependencyData)[param_1[iVar7 + 1]])) {
                  iVar5 = iVar7;
                }
                iVar6 = param_1[iVar4];
                if ((*param_4.DependencyData)[param_1[(longlong)iVar5 + 1]] <=
                    (*param_4.DependencyData)[iVar6]) break;
                param_1[iVar4] = param_1[(longlong)iVar5 + 1];
                iVar4 = iVar5 + 1;
                iVar7 = iVar4 * 2;
                param_1[(longlong)iVar5 + 1] = iVar6;
              } while (iVar7 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar5 + -1;
      iVar8 = iVar7 + -2;
      iVar7 = iVar8;
      iVar5 = iVar4;
    }
    iVar6 = iVar8;
    if ((iVar8 + 2 < param_2) &&
       (iVar6 = iVar8 + 1,
       (*param_4.DependencyData)[param_1[(longlong)iVar8 + 2]] <
       (*param_4.DependencyData)[param_1[iVar8 + 1]])) {
      iVar6 = iVar8;
    }
    iVar1 = param_1[iVar4];
    if ((*param_4.DependencyData)[param_1[(longlong)iVar6 + 1]] <= (*param_4.DependencyData)[iVar1])
    goto LAB_142b3df2a;
    param_1[iVar4] = param_1[(longlong)iVar6 + 1];
    iVar4 = iVar6 + 1;
    iVar8 = iVar4 * 2;
    param_1[(longlong)iVar6 + 1] = iVar1;
  } while( true );
}

// HeapSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_> @ 142b3e010

void __cdecl
AlgoImpl::HeapSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3e0ee:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            iVar8 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                uVar1 = param_1[iVar8];
                if (param_1[iVar6] <= uVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = uVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    uVar1 = param_1[iVar4];
    if (param_1[iVar7] <= uVar1) goto LAB_142b3e0ee;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = uVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_> @ 142b3e1a0

void __cdecl
AlgoImpl::HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FDependsNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3e280:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pFVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pFVar1) goto LAB_142b3e280;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pFVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_NameDependencies<1>'::__l2::<lambda_1>_> @ 142b3e330

void __cdecl
AlgoImpl::
HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<1>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3e410:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pFVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pFVar1) goto LAB_142b3e410;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pFVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_NameDependencies<0>'::__l2::<lambda_1>_> @ 142b3e4c0

void __cdecl
AlgoImpl::
HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<0>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3e5a0:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pFVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pFVar1) goto LAB_142b3e5a0;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pFVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_Referencers<1>'::__l2::<lambda_1>_> @ 142b3e650

void __cdecl
AlgoImpl::
HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<1>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3e730:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pFVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pFVar1) goto LAB_142b3e730;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pFVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_Referencers<0>'::__l2::<lambda_1>_> @ 142b3e7e0

void __cdecl
AlgoImpl::
HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<0>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar6 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_142b3e8c0:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar8 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1[iVar8];
                if (param_1[iVar6] <= pFVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = pFVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar6 + -2;
      iVar6 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    pFVar1 = param_1[iVar4];
    if (param_1[iVar7] <= pFVar1) goto LAB_142b3e8c0;
    param_1[iVar4] = param_1[iVar7];
    iVar5 = iVar7 * 2 + 1;
    param_1[iVar7] = pFVar1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<`FPathTree::RemovePath'::__l2::<lambda_1>_>_>_> @ 142b3e970

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FPathTree::RemovePath_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_bool___cdecl_FPathTree::RemovePath(FName,TFunctionRef<void___cdecl(FName)>)_::_2_::<lambda_1>_>_>
          param_4)

{
  code *pcVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar13;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar12 = iVar8;
  iVar9 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_142b3eabb:
      if (iVar9 == 0) {
        iVar8 = param_2 + -1;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          pTVar13 = param_1 + lVar11;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
            TVar2 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar13->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            pTVar13->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar4;
            iVar12 = 0;
            if (1 < iVar8) {
              do {
                iVar9 = iVar12 * 2;
                iVar6 = iVar9 + 1;
                if (iVar9 + 2 < iVar8) {
                  local_38.ComparisonIndex.Value = *(int *)(param_1 + iVar6);
                  local_38.Number = *(int *)((longlong)(param_1 + iVar6) + 4);
                  local_30.ComparisonIndex.Value = *(int *)(param_1 + (longlong)iVar9 + 2);
                  local_30.Number = *(int *)((longlong)(param_1 + (longlong)iVar9 + 2) + 4);
                  iVar10 = ::FName::Compare(&local_30,&local_38);
                  if (0 < iVar10) {
                    iVar6 = iVar9;
                  }
                  iVar6 = iVar6 + 1;
                }
                local_28.ComparisonIndex.Value = *(int *)(param_1 + iVar6);
                local_28.Number = *(int *)((longlong)(param_1 + iVar6) + 4);
                local_20.ComparisonIndex.Value = *(int *)(param_1 + iVar12);
                local_20.Number = *(int *)((longlong)(param_1 + iVar12) + 4);
                iVar9 = ::FName::Compare(&local_20,&local_28);
                if (iVar9 < 1) break;
                TVar2 = param_1[iVar12]._s_1;
                uVar3 = *(undefined8 *)(param_1[iVar12].ElementData.Pad + 8);
                uVar4 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
                param_1[iVar12]._s_1 = param_1[iVar6]._s_1;
                *(undefined8 *)((longlong)param_1[iVar12].ElementData.Pad + 8) = uVar4;
                param_1[iVar6]._s_1 = TVar2;
                *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar3;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar8);
            }
            iVar8 = iVar8 + -1;
            lVar11 = lVar11 + -1;
            pTVar13 = pTVar13 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar9 + -1;
      iVar8 = iVar12 + -2;
      iVar12 = iVar8;
      iVar9 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar10 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      local_58.ComparisonIndex.Value = *(int *)(param_1 + iVar10);
      local_58.Number = *(int *)((longlong)(param_1 + iVar10) + 4);
      local_50.ComparisonIndex.Value = *(int *)(param_1 + (longlong)iVar8 + 2);
      local_50.Number = *(int *)((longlong)(param_1 + (longlong)iVar8 + 2) + 4);
      iVar7 = ::FName::Compare(&local_50,&local_58);
      if (0 < iVar7) {
        iVar10 = iVar8;
      }
      iVar10 = iVar10 + 1;
    }
    local_48.ComparisonIndex.Value = *(int *)(param_1 + iVar10);
    local_48.Number = *(int *)((longlong)(param_1 + iVar10) + 4);
    local_40.ComparisonIndex.Value = *(int *)(param_1 + iVar6);
    local_40.Number = *(int *)((longlong)(param_1 + iVar6) + 4);
    iVar8 = ::FName::Compare(&local_40,&local_48);
    if (iVar8 < 1) goto LAB_142b3eabb;
    TVar2 = param_1[iVar6]._s_1;
    uVar3 = *(undefined8 *)(param_1[iVar6].ElementData.Pad + 8);
    iVar8 = iVar10 * 2 + 1;
    uVar4 = *(undefined8 *)(param_1[iVar10].ElementData.Pad + 8);
    param_1[iVar6]._s_1 = param_1[iVar10]._s_1;
    *(undefined8 *)((longlong)param_1[iVar6].ElementData.Pad + 8) = uVar4;
    param_1[iVar10]._s_1 = TVar2;
    *(undefined8 *)((longlong)param_1[iVar10].ElementData.Pad + 8) = uVar3;
    iVar6 = iVar10;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 142b3ebe0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *this;
  undefined4 uVar2;
  code *pcVar3;
  FNameEntryId FVar4;
  uint uVar5;
  undefined8 uVar6;
  FNameEntryId FVar7;
  uint uVar8;
  undefined8 uVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar10;
  FNameEntryId FVar11;
  uint uVar12;
  FNameEntryId FVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar22;
  int iVar23;
  
  if (param_2 < 0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar16 = (param_2 + -2) / 2;
  iVar18 = iVar16 * 2 + 1;
  iVar23 = iVar18;
  iVar20 = iVar16;
  do {
    while (param_2 <= iVar18) {
LAB_142b3ed17:
      if (iVar20 == 0) {
        iVar18 = param_2 + -1;
        lVar21 = (longlong)iVar18;
        if (0 < iVar18) {
          pTVar22 = param_1 + lVar21;
          do {
            uVar6 = *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8);
            uVar2 = *(undefined4 *)((param_1->ElementData).Pad + 0x10);
            iVar23 = 0;
            TVar10 = param_1->_s_1;
            uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar22->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar6;
            *(undefined4 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined4 *)((longlong)(pTVar22->ElementData).Pad + 0x10);
            pTVar22->_s_1 = TVar10;
            *(undefined8 *)((longlong)(pTVar22->ElementData).Pad + 8) = uVar9;
            *(undefined4 *)((longlong)(pTVar22->ElementData).Pad + 0x10) = uVar2;
            if (1 < iVar18) {
              do {
                iVar16 = iVar23 * 2;
                iVar20 = iVar16 + 1;
                if (iVar16 + 2 < iVar18) {
                  iVar19 = ::FName::Compare((FName *)&param_1[iVar16 + 2].ElementData,
                                            (FName *)&param_1[iVar20].ElementData);
                  if (iVar19 < 0) {
                    iVar20 = iVar16;
                  }
                  iVar20 = iVar20 + 1;
                }
                pTVar1 = param_1 + iVar20;
                this = param_1 + iVar23;
                iVar23 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar1->ElementData)
                ;
                if (-1 < iVar23) break;
                FVar11.Value = *(int *)pTVar1;
                uVar12 = *(int *)((longlong)pTVar1 + 4);
                uVar6 = *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2);
                uVar2 = ((FNameEntryId *)(this->ElementData).Pad)[4];
                FVar13.Value = *(int *)this;
                uVar14 = *(int *)((longlong)this + 4);
                uVar9 = *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2);
                *(int *)this = FVar11.Value;
                *(uint *)((longlong)this + 4) = uVar12;
                *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2) = uVar6;
                ((FNameEntryId *)(this->ElementData).Pad)[4] =
                     (uint)((FNameEntryId *)(pTVar1->ElementData).Pad)[4];
                *(int *)pTVar1 = FVar13.Value;
                *(uint *)((longlong)pTVar1 + 4) = uVar14;
                *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2) = uVar9;
                ((FNameEntryId *)(pTVar1->ElementData).Pad)[4] = (FNameEntryId)uVar2;
                iVar23 = iVar20;
              } while (iVar20 * 2 + 1 < iVar18);
            }
            iVar18 = iVar18 + -1;
            lVar21 = lVar21 + -1;
            pTVar22 = pTVar22 + -1;
          } while (0 < lVar21);
        }
        return;
      }
      iVar16 = iVar20 + -1;
      iVar18 = iVar23 + -2;
      iVar23 = iVar18;
      iVar20 = iVar16;
    }
    iVar18 = iVar16 * 2;
    iVar19 = iVar18 + 1;
    if (iVar18 + 2 < param_2) {
      iVar17 = ::FName::Compare((FName *)&param_1[iVar18 + 2].ElementData,
                                (FName *)&param_1[iVar19].ElementData);
      if (iVar17 < 0) {
        iVar19 = iVar18;
      }
      iVar19 = iVar19 + 1;
    }
    pTVar22 = param_1 + iVar19;
    pTVar1 = param_1 + iVar16;
    iVar18 = ::FName::Compare((FName *)&pTVar1->ElementData,(FName *)&pTVar22->ElementData);
    if (-1 < iVar18) goto LAB_142b3ed17;
    FVar4.Value = *(int *)pTVar22;
    uVar5 = *(int *)((longlong)pTVar22 + 4);
    uVar6 = *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 2);
    uVar2 = ((FNameEntryId *)(pTVar1->ElementData).Pad)[4];
    FVar7.Value = *(int *)pTVar1;
    uVar8 = *(int *)((longlong)pTVar1 + 4);
    uVar9 = *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2);
    *(int *)pTVar1 = FVar4.Value;
    *(uint *)((longlong)pTVar1 + 4) = uVar5;
    *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2) = uVar6;
    ((FNameEntryId *)(pTVar1->ElementData).Pad)[4] =
         (uint)((FNameEntryId *)(pTVar22->ElementData).Pad)[4];
    iVar18 = iVar19 * 2 + 1;
    *(int *)pTVar22 = FVar7.Value;
    *(uint *)((longlong)pTVar22 + 4) = uVar8;
    *(undefined8 *)((FNameEntryId *)(pTVar22->ElementData).Pad + 2) = uVar9;
    ((FNameEntryId *)(pTVar22->ElementData).Pad)[4] = (FNameEntryId)uVar2;
    iVar16 = iVar19;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<`FPackageReader::ReadLinkerObjects'::__l2::<lambda_2>_>_>_>_> @ 142b3ee40

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>_>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar22;
  int iVar23;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar24;
  FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>_>
  *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>_>_>_>
            (param_1,param_2,param_3,
             (FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>_>_>
              *)&local_res20);
  iVar23 = param_2 + -1;
  lVar17 = (longlong)iVar23;
  if (0 < iVar23) {
    pTVar24 = param_1 + lVar17;
    do {
      uVar3 = *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 8);
      iVar16 = 0;
      TVar4 = param_1->_s_1;
      uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 8);
      uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
      uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
      uVar8 = *(undefined8 *)((param_1->ElementData).Pad + 0x20);
      uVar9 = *(undefined8 *)((param_1->ElementData).Pad + 0x28);
      uVar10 = *(undefined8 *)((param_1->ElementData).Pad + 0x30);
      uVar11 = *(undefined8 *)((param_1->ElementData).Pad + 0x38);
      uVar12 = *(undefined8 *)((param_1->ElementData).Pad + 0x40);
      uVar13 = *(undefined8 *)((param_1->ElementData).Pad + 0x48);
      param_1->_s_1 = pTVar24->_s_1;
      *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
      uVar3 = *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x18);
      *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
           *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x10);
      *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar3;
      uVar3 = *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x28);
      *(undefined8 *)((param_1->ElementData).Pad + 0x20) =
           *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x20);
      *(undefined8 *)((param_1->ElementData).Pad + 0x28) = uVar3;
      uVar3 = *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x38);
      *(undefined8 *)((param_1->ElementData).Pad + 0x30) =
           *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x30);
      *(undefined8 *)((param_1->ElementData).Pad + 0x38) = uVar3;
      uVar3 = *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x48);
      *(undefined8 *)((param_1->ElementData).Pad + 0x40) =
           *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x40);
      *(undefined8 *)((param_1->ElementData).Pad + 0x48) = uVar3;
      pTVar24->_s_1 = TVar4;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 8) = uVar5;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x10) = uVar6;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x18) = uVar7;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x20) = uVar8;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x28) = uVar9;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x30) = uVar10;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x38) = uVar11;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x40) = uVar12;
      *(undefined8 *)((longlong)(pTVar24->ElementData).Pad + 0x48) = uVar13;
      if (1 < iVar23) {
        do {
          iVar2 = iVar16 * 2;
          iVar20 = iVar2 + 1;
          if (iVar2 + 2 < iVar23) {
            pTVar22 = param_1 + iVar20;
            pTVar21 = param_1 + (iVar2 + 2);
            iVar15 = ::FName::Compare((FName *)&pTVar21->ElementData,(FName *)&pTVar22->ElementData)
            ;
            if ((iVar15 == 0) &&
               (iVar15 = ::FName::Compare((FName *)((pTVar21->ElementData).Pad + 8),
                                          (FName *)((pTVar22->ElementData).Pad + 8)), iVar15 == 0))
            {
              if (*(int *)((pTVar22->ElementData).Pad + 0x18) == 0) {
                pcVar19 = "";
              }
              else {
                pcVar19 = *(char **)((pTVar22->ElementData).Pad + 0x10);
              }
              if (*(int *)((pTVar21->ElementData).Pad + 0x18) == 0) {
                pcVar18 = "";
              }
              else {
                pcVar18 = *(char **)((pTVar21->ElementData).Pad + 0x10);
              }
              iVar15 = strcmp(pcVar18,pcVar19);
            }
            if (iVar15 < 0) {
              iVar20 = iVar2;
            }
            iVar20 = iVar20 + 1;
          }
          pTVar21 = param_1 + iVar20;
          pTVar22 = param_1 + iVar16;
          iVar16 = ::FName::Compare((FName *)&pTVar22->ElementData,(FName *)&pTVar21->ElementData);
          if ((iVar16 == 0) &&
             (iVar16 = ::FName::Compare((FName *)((pTVar22->ElementData).Pad + 8),
                                        (FName *)((pTVar21->ElementData).Pad + 8)), iVar16 == 0)) {
            if (*(int *)((pTVar21->ElementData).Pad + 0x18) == 0) {
              pcVar19 = "";
            }
            else {
              pcVar19 = *(char **)((pTVar21->ElementData).Pad + 0x10);
            }
            if (*(int *)((pTVar22->ElementData).Pad + 0x18) == 0) {
              pcVar18 = "";
            }
            else {
              pcVar18 = *(char **)((pTVar22->ElementData).Pad + 0x10);
            }
            iVar16 = strcmp(pcVar18,pcVar19);
          }
          if (-1 < iVar16) break;
          uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
          TVar4 = pTVar22->_s_1;
          uVar5 = *(undefined8 *)((pTVar22->ElementData).Pad + 8);
          uVar6 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x10);
          uVar7 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x18);
          uVar8 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x20);
          uVar9 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x28);
          uVar10 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x30);
          uVar11 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x38);
          uVar12 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x40);
          uVar13 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x48);
          pTVar22->_s_1 = pTVar21->_s_1;
          *(undefined8 *)((pTVar22->ElementData).Pad + 8) = uVar3;
          uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x18) = uVar3;
          uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x28);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x20) =
               *(undefined8 *)((pTVar21->ElementData).Pad + 0x20);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x28) = uVar3;
          uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x38);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x30) =
               *(undefined8 *)((pTVar21->ElementData).Pad + 0x30);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x38) = uVar3;
          uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x48);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x40) =
               *(undefined8 *)((pTVar21->ElementData).Pad + 0x40);
          *(undefined8 *)((pTVar22->ElementData).Pad + 0x48) = uVar3;
          pTVar21->_s_1 = TVar4;
          *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) = uVar6;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar7;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x20) = uVar8;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x28) = uVar9;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x30) = uVar10;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x38) = uVar11;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x40) = uVar12;
          *(undefined8 *)((pTVar21->ElementData).Pad + 0x48) = uVar13;
          iVar16 = iVar20;
        } while (iVar20 * 2 + 1 < iVar23);
      }
      lVar17 = lVar17 + -1;
      iVar23 = iVar23 + -1;
      pTVar24 = pTVar24 + -1;
    } while (0 < lVar17);
  }
  return;
}

// HeapSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142b3f100

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,FString> *param_1,int param_2,FKeyForward param_3,FNameFastLess param_4)

{
  TTuple<FName,FString> *pTVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  TTuple<FName,FString> *pTVar13;
  longlong lVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar10 = iVar8 * 2 + 1;
  iVar15 = iVar10;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_142b3f233:
      if (iVar11 == 0) {
        iVar10 = param_2 + -1;
        lVar14 = (longlong)iVar10;
        if (0 < iVar10) {
          pTVar13 = param_1 + lVar14;
          do {
            uVar4 = *(undefined8 *)&pTVar13->field_0x8;
            uVar2 = *(undefined8 *)&param_1->field_0x10;
            uVar5 = *(undefined8 *)param_1;
            uVar6 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar13;
            *(undefined8 *)&param_1->field_0x8 = uVar4;
            *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar13->field_0x10;
            *(undefined8 *)pTVar13 = uVar5;
            *(undefined8 *)&pTVar13->field_0x8 = uVar6;
            *(undefined8 *)&pTVar13->field_0x10 = uVar2;
            iVar15 = 0;
            if (1 < iVar10) {
              do {
                iVar11 = iVar15 * 2;
                iVar8 = iVar11 + 1;
                if (iVar11 + 2 < iVar10) {
                  iVar12 = *(int *)(param_1 + (longlong)iVar11 + 2) -
                           *(int *)(param_1 + (longlong)iVar11 + 1);
                  if (iVar12 == 0) {
                    iVar12 = *(int *)&param_1[(longlong)iVar11 + 2].field_0x4 -
                             *(int *)&param_1[(longlong)iVar11 + 1].field_0x4;
                  }
                  if (iVar12 < 0) {
                    iVar8 = iVar11;
                  }
                  iVar8 = iVar8 + 1;
                }
                pTVar1 = param_1 + iVar8;
                iVar11 = *(int *)(param_1 + iVar15) - *(int *)pTVar1;
                if (iVar11 == 0) {
                  iVar11 = *(int *)&param_1[iVar15].field_0x4 - *(int *)&pTVar1->field_0x4;
                }
                if (-1 < iVar11) break;
                uVar4 = *(undefined8 *)&pTVar1->field_0x8;
                uVar2 = *(undefined8 *)&param_1[iVar15].field_0x10;
                uVar5 = *(undefined8 *)(param_1 + iVar15);
                uVar6 = *(undefined8 *)&param_1[iVar15].field_0x8;
                *(undefined8 *)(param_1 + iVar15) = *(undefined8 *)pTVar1;
                *(undefined8 *)&param_1[iVar15].field_0x8 = uVar4;
                *(undefined8 *)&param_1[iVar15].field_0x10 = *(undefined8 *)&pTVar1->field_0x10;
                *(undefined8 *)pTVar1 = uVar5;
                *(undefined8 *)&pTVar1->field_0x8 = uVar6;
                *(undefined8 *)&pTVar1->field_0x10 = uVar2;
                iVar15 = iVar8;
              } while (iVar8 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar14 = lVar14 + -1;
            pTVar13 = pTVar13 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar8 = iVar11 + -1;
      iVar10 = iVar15 + -2;
      iVar15 = iVar10;
      iVar11 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      iVar9 = *(int *)(param_1 + (longlong)iVar10 + 2) - *(int *)(param_1 + (longlong)iVar10 + 1);
      if (iVar9 == 0) {
        iVar9 = *(int *)&param_1[(longlong)iVar10 + 2].field_0x4 -
                *(int *)&param_1[(longlong)iVar10 + 1].field_0x4;
      }
      if (iVar9 < 0) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar13 = param_1 + iVar12;
    iVar10 = *(int *)(param_1 + iVar8) - *(int *)pTVar13;
    if (iVar10 == 0) {
      iVar10 = *(int *)&param_1[iVar8].field_0x4 - *(int *)&pTVar13->field_0x4;
    }
    if (-1 < iVar10) goto LAB_142b3f233;
    uVar4 = *(undefined8 *)&pTVar13->field_0x8;
    iVar10 = iVar12 * 2 + 1;
    uVar2 = *(undefined8 *)&param_1[iVar8].field_0x10;
    uVar5 = *(undefined8 *)(param_1 + iVar8);
    uVar6 = *(undefined8 *)&param_1[iVar8].field_0x8;
    *(undefined8 *)(param_1 + iVar8) = *(undefined8 *)pTVar13;
    *(undefined8 *)&param_1[iVar8].field_0x8 = uVar4;
    *(undefined8 *)&param_1[iVar8].field_0x10 = *(undefined8 *)&pTVar13->field_0x10;
    *(undefined8 *)pTVar13 = uVar5;
    *(undefined8 *)&pTVar13->field_0x8 = uVar6;
    *(undefined8 *)&pTVar13->field_0x10 = uVar2;
    iVar8 = iVar12;
  } while( true );
}

// HeapSortInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_> @ 142b3f360

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>
          (FPackageDependency *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>
          param_4)

{
  FPackageDependency *pFVar1;
  FPackageDependency *pFVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  undefined3 uVar6;
  EDependencyProperty EVar7;
  undefined3 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  FPackageDependency *pFVar14;
  int iVar15;
  FSortPackageDependency *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>
              *)&local_res20);
  iVar15 = param_2 + -1;
  lVar13 = (longlong)iVar15;
  if (0 < iVar15) {
    pFVar14 = param_1 + lVar13;
    do {
      FVar3 = param_1->PackageName;
      EVar7 = param_1->Property;
      uVar8 = *(undefined3 *)&param_1->field_0x9;
      param_1->PackageName = pFVar14->PackageName;
      uVar6 = *(undefined3 *)&pFVar14->field_0x9;
      param_1->Property = pFVar14->Property;
      *(undefined3 *)&param_1->field_0x9 = uVar6;
      pFVar14->PackageName = FVar3;
      pFVar14->Property = EVar7;
      *(undefined3 *)&pFVar14->field_0x9 = uVar8;
      iVar11 = 0;
      if (1 < iVar15) {
        do {
          iVar5 = iVar11 * 2;
          iVar12 = iVar5 + 1;
          if (iVar5 + 2 < iVar15) {
            pFVar1 = param_1 + (longlong)iVar5 + 2;
            pFVar2 = param_1 + (longlong)iVar5 + 1;
            uVar10 = (pFVar1->PackageName).ComparisonIndex.Value -
                     (pFVar2->PackageName).ComparisonIndex.Value;
            if ((uVar10 == 0) &&
               (uVar10 = (pFVar1->PackageName).Number - (pFVar2->PackageName).Number, uVar10 == 0))
            {
              uVar10 = (uint)(pFVar1->Property < pFVar2->Property);
            }
            else {
              uVar10 = uVar10 >> 0x1f;
            }
            if (uVar10 != 0) {
              iVar12 = iVar5;
            }
            iVar12 = iVar12 + 1;
          }
          pFVar1 = param_1 + iVar11;
          iVar11 = (pFVar1->PackageName).ComparisonIndex.Value -
                   param_1[iVar12].PackageName.ComparisonIndex.Value;
          pFVar2 = param_1 + iVar12;
          if ((iVar11 == 0) &&
             (iVar11 = (pFVar1->PackageName).Number - (pFVar2->PackageName).Number, iVar11 == 0)) {
            bVar9 = pFVar1->Property < pFVar2->Property;
          }
          else {
            bVar9 = SUB41((uint)iVar11 >> 0x1f,0);
          }
          if (bVar9 == false) break;
          FVar3 = pFVar1->PackageName;
          EVar7 = pFVar1->Property;
          uVar8 = *(undefined3 *)&pFVar1->field_0x9;
          pFVar1->PackageName = pFVar2->PackageName;
          uVar6 = *(undefined3 *)&pFVar2->field_0x9;
          pFVar1->Property = pFVar2->Property;
          *(undefined3 *)&pFVar1->field_0x9 = uVar6;
          pFVar2->PackageName = FVar3;
          pFVar2->Property = EVar7;
          *(undefined3 *)&pFVar2->field_0x9 = uVar8;
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < iVar15);
      }
      iVar15 = iVar15 + -1;
      lVar13 = lVar13 + -1;
      pFVar14 = pFVar14 + -1;
    } while (0 < lVar13);
  }
  return;
}

// HeapSortInternal<FDependsNode::FSaveScratch::FSortInfo,int,FIdentityFunctor,``FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 142b3f510

void __cdecl
AlgoImpl::
HeapSortInternal<FDependsNode::FSaveScratch::FSortInfo,int,FIdentityFunctor,__FDependsNode::SerializeSave_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FSortInfo *pFVar1;
  FSortInfo *pFVar2;
  FSortInfo FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar9 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_142b3f5f2:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          do {
            iVar9 = 0;
            FVar3 = *param_1;
            *param_1 = param_1[lVar11];
            param_1[lVar11] = FVar3;
            if (1 < iVar7) {
              do {
                iVar10 = iVar9 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  if (param_1[(longlong)iVar10 + 2].SerializeIndex < param_1[iVar6].SerializeIndex)
                  {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar1 = param_1 + iVar6;
                pFVar2 = param_1 + iVar9;
                if (pFVar1->SerializeIndex <= pFVar2->SerializeIndex) break;
                FVar3 = *pFVar2;
                *pFVar2 = *pFVar1;
                *pFVar1 = FVar3;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar9 + -2;
      iVar9 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      if (param_1[(longlong)iVar7 + 2].SerializeIndex < param_1[iVar8].SerializeIndex) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1 + iVar8;
    pFVar2 = param_1 + iVar6;
    if (pFVar1->SerializeIndex <= pFVar2->SerializeIndex) goto LAB_142b3f5f2;
    FVar3 = *pFVar2;
    *pFVar2 = *pFVar1;
    iVar7 = iVar8 * 2 + 1;
    *pFVar1 = FVar3;
    iVar6 = iVar8;
  } while( true );
}

// HeapifyInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<`FPackageReader::ReadLinkerObjects'::__l2::<lambda_2>_>_>_>_>_> @ 142b3f6a0

void __cdecl
AlgoImpl::
HeapifyInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          TReversePredicate<TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>_>_>_>
          param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>_s_1 TVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  int iVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar21;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar22;
  int iVar23;
  
  if (param_2 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar14) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar15 = (param_2 + -2) / 2;
  iVar17 = iVar15 * 2 + 1;
  iVar2 = iVar17;
  iVar23 = iVar15;
  do {
    while (param_2 <= iVar17) {
LAB_142b3f87f:
      if (iVar23 == 0) {
        return;
      }
      iVar15 = iVar23 + -1;
      iVar17 = iVar2 + -2;
      iVar2 = iVar17;
      iVar23 = iVar15;
    }
    iVar17 = iVar15 * 2;
    iVar20 = iVar17 + 1;
    if (iVar17 + 2 < param_2) {
      pTVar22 = param_1 + iVar20;
      pTVar21 = param_1 + (iVar17 + 2);
      iVar16 = ::FName::Compare((FName *)&pTVar21->ElementData,(FName *)&pTVar22->ElementData);
      if ((iVar16 == 0) &&
         (iVar16 = ::FName::Compare((FName *)((pTVar21->ElementData).Pad + 8),
                                    (FName *)((pTVar22->ElementData).Pad + 8)), iVar16 == 0)) {
        if (*(int *)((pTVar22->ElementData).Pad + 0x18) == 0) {
          pcVar19 = "";
        }
        else {
          pcVar19 = *(char **)((pTVar22->ElementData).Pad + 0x10);
        }
        if (*(int *)((pTVar21->ElementData).Pad + 0x18) == 0) {
          pcVar18 = "";
        }
        else {
          pcVar18 = *(char **)((pTVar21->ElementData).Pad + 0x10);
        }
        iVar16 = strcmp(pcVar18,pcVar19);
      }
      if (iVar16 < 0) {
        iVar20 = iVar17;
      }
      iVar20 = iVar20 + 1;
    }
    pTVar21 = param_1 + iVar20;
    pTVar22 = param_1 + iVar15;
    iVar17 = ::FName::Compare((FName *)&pTVar22->ElementData,(FName *)&pTVar21->ElementData);
    if ((iVar17 == 0) &&
       (iVar17 = ::FName::Compare((FName *)((pTVar22->ElementData).Pad + 8),
                                  (FName *)((pTVar21->ElementData).Pad + 8)), iVar17 == 0)) {
      if (*(int *)((pTVar21->ElementData).Pad + 0x18) == 0) {
        pcVar19 = "";
      }
      else {
        pcVar19 = *(char **)((pTVar21->ElementData).Pad + 0x10);
      }
      if (*(int *)((pTVar22->ElementData).Pad + 0x18) == 0) {
        pcVar18 = "";
      }
      else {
        pcVar18 = *(char **)((pTVar22->ElementData).Pad + 0x10);
      }
      iVar17 = strcmp(pcVar18,pcVar19);
    }
    if (-1 < iVar17) goto LAB_142b3f87f;
    uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 8);
    iVar17 = iVar20 * 2 + 1;
    TVar4 = pTVar22->_s_1;
    uVar5 = *(undefined8 *)((pTVar22->ElementData).Pad + 8);
    uVar6 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x10);
    uVar7 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x18);
    uVar8 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x20);
    uVar9 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x28);
    uVar10 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x30);
    uVar11 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x38);
    uVar12 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x40);
    uVar13 = *(undefined8 *)((pTVar22->ElementData).Pad + 0x48);
    pTVar22->_s_1 = pTVar21->_s_1;
    *(undefined8 *)((pTVar22->ElementData).Pad + 8) = uVar3;
    uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar21->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x18) = uVar3;
    uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x28);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x20) =
         *(undefined8 *)((pTVar21->ElementData).Pad + 0x20);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x28) = uVar3;
    uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x38);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x30) =
         *(undefined8 *)((pTVar21->ElementData).Pad + 0x30);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x38) = uVar3;
    uVar3 = *(undefined8 *)((pTVar21->ElementData).Pad + 0x48);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x40) =
         *(undefined8 *)((pTVar21->ElementData).Pad + 0x40);
    *(undefined8 *)((pTVar22->ElementData).Pad + 0x48) = uVar3;
    pTVar21->_s_1 = TVar4;
    *(undefined8 *)((pTVar21->ElementData).Pad + 8) = uVar5;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x10) = uVar6;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x18) = uVar7;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x20) = uVar8;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x28) = uVar9;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x30) = uVar10;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x38) = uVar11;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x40) = uVar12;
    *(undefined8 *)((pTVar21->ElementData).Pad + 0x48) = uVar13;
    iVar15 = iVar20;
  } while( true );
}

// HeapifyInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>_> @ 142b3f8d0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapifyInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>_>
          (FPackageDependency *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>
          param_4)

{
  FPackageDependency *pFVar1;
  FPackageDependency *pFVar2;
  FName FVar3;
  code *pcVar4;
  int iVar5;
  undefined3 uVar6;
  EDependencyProperty EVar7;
  undefined3 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar5 = iVar12;
  iVar14 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_142b3fa07:
      if (iVar14 == 0) {
        return;
      }
      iVar10 = iVar14 + -1;
      iVar12 = iVar5 + -2;
      iVar5 = iVar12;
      iVar14 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar13 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      pFVar1 = param_1 + (longlong)iVar12 + 2;
      pFVar2 = param_1 + (longlong)iVar12 + 1;
      uVar11 = (pFVar1->PackageName).ComparisonIndex.Value -
               (pFVar2->PackageName).ComparisonIndex.Value;
      if ((uVar11 == 0) &&
         (uVar11 = (pFVar1->PackageName).Number - (pFVar2->PackageName).Number, uVar11 == 0)) {
        uVar11 = (uint)(pFVar1->Property < pFVar2->Property);
      }
      else {
        uVar11 = uVar11 >> 0x1f;
      }
      if (uVar11 != 0) {
        iVar13 = iVar12;
      }
      iVar13 = iVar13 + 1;
    }
    pFVar1 = param_1 + iVar10;
    iVar12 = (pFVar1->PackageName).ComparisonIndex.Value -
             param_1[iVar13].PackageName.ComparisonIndex.Value;
    pFVar2 = param_1 + iVar13;
    if ((iVar12 == 0) &&
       (iVar12 = (pFVar1->PackageName).Number - (pFVar2->PackageName).Number, iVar12 == 0)) {
      bVar9 = pFVar1->Property < pFVar2->Property;
    }
    else {
      bVar9 = SUB41((uint)iVar12 >> 0x1f,0);
    }
    if (bVar9 == false) goto LAB_142b3fa07;
    FVar3 = pFVar1->PackageName;
    EVar7 = pFVar1->Property;
    uVar8 = *(undefined3 *)&pFVar1->field_0x9;
    pFVar1->PackageName = pFVar2->PackageName;
    uVar6 = *(undefined3 *)&pFVar2->field_0x9;
    pFVar1->Property = pFVar2->Property;
    *(undefined3 *)&pFVar1->field_0x9 = uVar6;
    iVar12 = iVar13 * 2 + 1;
    pFVar2->PackageName = FVar3;
    pFVar2->Property = EVar7;
    *(undefined3 *)&pFVar2->field_0x9 = uVar8;
    iVar10 = iVar13;
  } while( true );
}

// IntroSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_ManageDependencies<1>'::__l2::<lambda_1>_> @ 142b3fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<1>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int **ppiVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  uint *local_380;
  int local_378;
  int **local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppiVar13 = &local_348;
    do {
      local_380 = (uint *)ppiVar13[1];
      puVar10 = (uint *)*ppiVar13;
      local_358 = ppiVar13[2];
      iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
      local_378 = (int)local_358;
      puVar12 = puVar10;
      local_370 = ppiVar13;
      if ((int)local_358 != 0) {
LAB_142b3fb05:
        puVar11 = local_380;
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          puVar8 = local_380 + 1;
          uVar7 = puVar12[iVar5 >> 1];
          puVar12[iVar5 >> 1] = *puVar12;
          *puVar12 = uVar7;
          puVar10 = puVar12;
LAB_142b3fb40:
          puVar10 = puVar10 + 1;
          if (puVar10 <= puVar11) goto code_r0x000142b3fb4d;
          goto LAB_142b3fc00;
        }
        if (puVar12 < local_380) {
          do {
            puVar10 = puVar12;
            puVar11 = local_380;
            puVar8 = puVar12 + 1;
            if (puVar12 + 1 <= local_380) {
              do {
                uVar7 = *puVar10;
                uVar1 = *puVar8;
                uVar6 = 0;
                if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar6 = ~uVar7 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (local_398 = (longlong)(int)uVar7,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar2 = *(ulonglong *)
                         (((param_4.PointerDependencies)->AllocatorInstance).Data +
                         (longlong)(int)uVar7 * 8);
                uVar7 = 0;
                if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar7 = ~uVar1 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar1,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (uVar2 < *(ulonglong *)
                             (((param_4.PointerDependencies)->AllocatorInstance).Data +
                             (longlong)(int)uVar1 * 8)) {
                  puVar10 = puVar8;
                }
                puVar8 = puVar8 + 1;
              } while (puVar8 <= puVar11);
            }
            uVar7 = *puVar10;
            local_380 = puVar11 + -1;
            *puVar10 = *puVar11;
            *puVar11 = uVar7;
            ppiVar13 = local_370;
          } while (puVar12 < local_380);
        }
        goto LAB_142b3fd89;
      }
LAB_142b3fd78:
      HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<1>_::__l2::<lambda_1>_>
                ((int *)puVar10,iVar5,param_3,param_4);
LAB_142b3fd89:
      ppiVar13 = ppiVar13 + -3;
    } while (&local_348 <= ppiVar13);
  }
  return;
code_r0x000142b3fb4d:
  uVar7 = *puVar12;
  uVar1 = *puVar10;
  uVar6 = 0;
  if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_398 = (longlong)(int)uVar7,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(ulonglong *)
           (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
  uVar7 = 0;
  if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar1,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(ulonglong *)
       (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <= uVar2
     ) goto LAB_142b3fb40;
LAB_142b3fc00:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar12) break;
    uVar7 = *puVar8;
    uVar1 = *puVar12;
    uVar6 = 0;
    if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (local_398 = (longlong)(int)uVar7,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(ulonglong *)
             (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
    uVar7 = 0;
    if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar1,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  } while (*(ulonglong *)
            (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <=
           uVar2);
  if (puVar10 <= puVar8) {
    uVar7 = *puVar10;
    *puVar10 = *puVar8;
    *puVar8 = uVar7;
    goto LAB_142b3fb40;
  }
  uVar7 = *puVar12;
  *puVar12 = *puVar8;
  local_378 = local_378 + -1;
  *puVar8 = uVar7;
  param_3 = local_388;
  if ((longlong)((longlong)puVar8 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar10 & 0xfffffffffffffffcU)) {
    if (puVar10 < local_380) {
      *ppiVar13 = (int *)puVar10;
      ppiVar13[1] = (int *)local_380;
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (puVar8 <= puVar12 + 1) goto LAB_142b3fd89;
    local_380 = puVar9 + -2;
    puVar10 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar8) {
      *ppiVar13 = (int *)puVar12;
      ppiVar13[1] = (int *)(puVar9 + -2);
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (local_380 <= puVar10) goto LAB_142b3fd89;
  }
  iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
  puVar12 = puVar10;
  if (local_378 == 0) goto LAB_142b3fd78;
  goto LAB_142b3fb05;
}

// IntroSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_ManageDependencies<0>'::__l2::<lambda_1>_> @ 142b3ff00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<0>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int **ppiVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  uint *local_380;
  int local_378;
  int **local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppiVar13 = &local_348;
    do {
      local_380 = (uint *)ppiVar13[1];
      puVar10 = (uint *)*ppiVar13;
      local_358 = ppiVar13[2];
      iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
      local_378 = (int)local_358;
      puVar12 = puVar10;
      local_370 = ppiVar13;
      if ((int)local_358 != 0) {
LAB_142b3ffd5:
        puVar11 = local_380;
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          puVar8 = local_380 + 1;
          uVar7 = puVar12[iVar5 >> 1];
          puVar12[iVar5 >> 1] = *puVar12;
          *puVar12 = uVar7;
          puVar10 = puVar12;
LAB_142b40010:
          puVar10 = puVar10 + 1;
          if (puVar10 <= puVar11) goto code_r0x000142b4001d;
          goto LAB_142b400d0;
        }
        if (puVar12 < local_380) {
          do {
            puVar10 = puVar12;
            puVar11 = local_380;
            puVar8 = puVar12 + 1;
            if (puVar12 + 1 <= local_380) {
              do {
                uVar7 = *puVar10;
                uVar1 = *puVar8;
                uVar6 = 0;
                if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar6 = ~uVar7 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (local_398 = (longlong)(int)uVar7,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar2 = *(ulonglong *)
                         (((param_4.PointerDependencies)->AllocatorInstance).Data +
                         (longlong)(int)uVar7 * 8);
                uVar7 = 0;
                if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar7 = ~uVar1 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar1,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (uVar2 < *(ulonglong *)
                             (((param_4.PointerDependencies)->AllocatorInstance).Data +
                             (longlong)(int)uVar1 * 8)) {
                  puVar10 = puVar8;
                }
                puVar8 = puVar8 + 1;
              } while (puVar8 <= puVar11);
            }
            uVar7 = *puVar10;
            local_380 = puVar11 + -1;
            *puVar10 = *puVar11;
            *puVar11 = uVar7;
            ppiVar13 = local_370;
          } while (puVar12 < local_380);
        }
        goto LAB_142b40259;
      }
LAB_142b40248:
      HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_ManageDependencies<0>_::__l2::<lambda_1>_>
                ((int *)puVar10,iVar5,param_3,param_4);
LAB_142b40259:
      ppiVar13 = ppiVar13 + -3;
    } while (&local_348 <= ppiVar13);
  }
  return;
code_r0x000142b4001d:
  uVar7 = *puVar12;
  uVar1 = *puVar10;
  uVar6 = 0;
  if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_398 = (longlong)(int)uVar7,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(ulonglong *)
           (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
  uVar7 = 0;
  if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar1,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(ulonglong *)
       (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <= uVar2
     ) goto LAB_142b40010;
LAB_142b400d0:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar12) break;
    uVar7 = *puVar8;
    uVar1 = *puVar12;
    uVar6 = 0;
    if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (local_398 = (longlong)(int)uVar7,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(ulonglong *)
             (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
    uVar7 = 0;
    if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar1,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  } while (*(ulonglong *)
            (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <=
           uVar2);
  if (puVar10 <= puVar8) {
    uVar7 = *puVar10;
    *puVar10 = *puVar8;
    *puVar8 = uVar7;
    goto LAB_142b40010;
  }
  uVar7 = *puVar12;
  *puVar12 = *puVar8;
  local_378 = local_378 + -1;
  *puVar8 = uVar7;
  param_3 = local_388;
  if ((longlong)((longlong)puVar8 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar10 & 0xfffffffffffffffcU)) {
    if (puVar10 < local_380) {
      *ppiVar13 = (int *)puVar10;
      ppiVar13[1] = (int *)local_380;
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (puVar8 <= puVar12 + 1) goto LAB_142b40259;
    local_380 = puVar9 + -2;
    puVar10 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar8) {
      *ppiVar13 = (int *)puVar12;
      ppiVar13[1] = (int *)(puVar9 + -2);
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (local_380 <= puVar10) goto LAB_142b40259;
  }
  iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
  puVar12 = puVar10;
  if (local_378 == 0) goto LAB_142b40248;
  goto LAB_142b3ffd5;
}

// IntroSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_PackageDependencies<1>'::__l2::<lambda_1>_> @ 142b403d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<1>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int **ppiVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  uint *local_380;
  int local_378;
  int **local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppiVar13 = &local_348;
    do {
      local_380 = (uint *)ppiVar13[1];
      puVar10 = (uint *)*ppiVar13;
      local_358 = ppiVar13[2];
      iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
      local_378 = (int)local_358;
      puVar12 = puVar10;
      local_370 = ppiVar13;
      if ((int)local_358 != 0) {
LAB_142b404a5:
        puVar11 = local_380;
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          puVar8 = local_380 + 1;
          uVar7 = puVar12[iVar5 >> 1];
          puVar12[iVar5 >> 1] = *puVar12;
          *puVar12 = uVar7;
          puVar10 = puVar12;
LAB_142b404e0:
          puVar10 = puVar10 + 1;
          if (puVar10 <= puVar11) goto code_r0x000142b404ed;
          goto LAB_142b405a0;
        }
        if (puVar12 < local_380) {
          do {
            puVar10 = puVar12;
            puVar11 = local_380;
            puVar8 = puVar12 + 1;
            if (puVar12 + 1 <= local_380) {
              do {
                uVar7 = *puVar10;
                uVar1 = *puVar8;
                uVar6 = 0;
                if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar6 = ~uVar7 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (local_398 = (longlong)(int)uVar7,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar2 = *(ulonglong *)
                         (((param_4.PointerDependencies)->AllocatorInstance).Data +
                         (longlong)(int)uVar7 * 8);
                uVar7 = 0;
                if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar7 = ~uVar1 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar1,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (uVar2 < *(ulonglong *)
                             (((param_4.PointerDependencies)->AllocatorInstance).Data +
                             (longlong)(int)uVar1 * 8)) {
                  puVar10 = puVar8;
                }
                puVar8 = puVar8 + 1;
              } while (puVar8 <= puVar11);
            }
            uVar7 = *puVar10;
            local_380 = puVar11 + -1;
            *puVar10 = *puVar11;
            *puVar11 = uVar7;
            ppiVar13 = local_370;
          } while (puVar12 < local_380);
        }
        goto LAB_142b40729;
      }
LAB_142b40718:
      HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<1>_::__l2::<lambda_1>_>
                ((int *)puVar10,iVar5,param_3,param_4);
LAB_142b40729:
      ppiVar13 = ppiVar13 + -3;
    } while (&local_348 <= ppiVar13);
  }
  return;
code_r0x000142b404ed:
  uVar7 = *puVar12;
  uVar1 = *puVar10;
  uVar6 = 0;
  if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_398 = (longlong)(int)uVar7,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(ulonglong *)
           (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
  uVar7 = 0;
  if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar1,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(ulonglong *)
       (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <= uVar2
     ) goto LAB_142b404e0;
LAB_142b405a0:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar12) break;
    uVar7 = *puVar8;
    uVar1 = *puVar12;
    uVar6 = 0;
    if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (local_398 = (longlong)(int)uVar7,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(ulonglong *)
             (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
    uVar7 = 0;
    if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar1,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  } while (*(ulonglong *)
            (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <=
           uVar2);
  if (puVar10 <= puVar8) {
    uVar7 = *puVar10;
    *puVar10 = *puVar8;
    *puVar8 = uVar7;
    goto LAB_142b404e0;
  }
  uVar7 = *puVar12;
  *puVar12 = *puVar8;
  local_378 = local_378 + -1;
  *puVar8 = uVar7;
  param_3 = local_388;
  if ((longlong)((longlong)puVar8 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar10 & 0xfffffffffffffffcU)) {
    if (puVar10 < local_380) {
      *ppiVar13 = (int *)puVar10;
      ppiVar13[1] = (int *)local_380;
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (puVar8 <= puVar12 + 1) goto LAB_142b40729;
    local_380 = puVar9 + -2;
    puVar10 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar8) {
      *ppiVar13 = (int *)puVar12;
      ppiVar13[1] = (int *)(puVar9 + -2);
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (local_380 <= puVar10) goto LAB_142b40729;
  }
  iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
  puVar12 = puVar10;
  if (local_378 == 0) goto LAB_142b40718;
  goto LAB_142b404a5;
}

// IntroSortInternal<int,int,FIdentityFunctor,`FDependsNode::SerializeLoad_PackageDependencies<0>'::__l2::<lambda_1>_> @ 142b408a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<0>_::__l2::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int **ppiVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong local_398;
  longlong local_390;
  FIdentityFunctor local_388;
  uint *local_380;
  int local_378;
  int **local_370;
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_388 = param_3;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppiVar13 = &local_348;
    do {
      local_380 = (uint *)ppiVar13[1];
      puVar10 = (uint *)*ppiVar13;
      local_358 = ppiVar13[2];
      iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
      local_378 = (int)local_358;
      puVar12 = puVar10;
      local_370 = ppiVar13;
      if ((int)local_358 != 0) {
LAB_142b40975:
        puVar11 = local_380;
        if (8 < iVar5) {
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          puVar8 = local_380 + 1;
          uVar7 = puVar12[iVar5 >> 1];
          puVar12[iVar5 >> 1] = *puVar12;
          *puVar12 = uVar7;
          puVar10 = puVar12;
LAB_142b409b0:
          puVar10 = puVar10 + 1;
          if (puVar10 <= puVar11) goto code_r0x000142b409bd;
          goto LAB_142b40a70;
        }
        if (puVar12 < local_380) {
          do {
            puVar10 = puVar12;
            puVar11 = local_380;
            puVar8 = puVar12 + 1;
            if (puVar12 + 1 <= local_380) {
              do {
                uVar7 = *puVar10;
                uVar1 = *puVar8;
                uVar6 = 0;
                if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar6 = ~uVar7 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (local_398 = (longlong)(int)uVar7,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar2 = *(ulonglong *)
                         (((param_4.PointerDependencies)->AllocatorInstance).Data +
                         (longlong)(int)uVar7 * 8);
                uVar7 = 0;
                if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
                  uVar7 = ~uVar1 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (local_398 = (longlong)(int)uVar1,
                   local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
                   bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , puVar11 = local_380, bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if (uVar2 < *(ulonglong *)
                             (((param_4.PointerDependencies)->AllocatorInstance).Data +
                             (longlong)(int)uVar1 * 8)) {
                  puVar10 = puVar8;
                }
                puVar8 = puVar8 + 1;
              } while (puVar8 <= puVar11);
            }
            uVar7 = *puVar10;
            local_380 = puVar11 + -1;
            *puVar10 = *puVar11;
            *puVar11 = uVar7;
            ppiVar13 = local_370;
          } while (puVar12 < local_380);
        }
        goto LAB_142b40bf9;
      }
LAB_142b40be8:
      HeapSortInternal<int,int,FIdentityFunctor,_FDependsNode::SerializeLoad_PackageDependencies<0>_::__l2::<lambda_1>_>
                ((int *)puVar10,iVar5,param_3,param_4);
LAB_142b40bf9:
      ppiVar13 = ppiVar13 + -3;
    } while (&local_348 <= ppiVar13);
  }
  return;
code_r0x000142b409bd:
  uVar7 = *puVar12;
  uVar1 = *puVar10;
  uVar6 = 0;
  if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_398 = (longlong)(int)uVar7,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(ulonglong *)
           (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
  uVar7 = 0;
  if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_398 = (longlong)(int)uVar1,
     local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(ulonglong *)
       (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <= uVar2
     ) goto LAB_142b409b0;
LAB_142b40a70:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar12) break;
    uVar7 = *puVar8;
    uVar1 = *puVar12;
    uVar6 = 0;
    if ((int)uVar7 < (param_4.PointerDependencies)->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (local_398 = (longlong)(int)uVar7,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(ulonglong *)
             (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar7 * 8);
    uVar7 = 0;
    if ((int)uVar1 < (param_4.PointerDependencies)->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (local_398 = (longlong)(int)uVar1,
       local_390 = (longlong)(param_4.PointerDependencies)->ArrayNum,
       bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  } while (*(ulonglong *)
            (((param_4.PointerDependencies)->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) <=
           uVar2);
  if (puVar10 <= puVar8) {
    uVar7 = *puVar10;
    *puVar10 = *puVar8;
    *puVar8 = uVar7;
    goto LAB_142b409b0;
  }
  uVar7 = *puVar12;
  *puVar12 = *puVar8;
  local_378 = local_378 + -1;
  *puVar8 = uVar7;
  param_3 = local_388;
  if ((longlong)((longlong)puVar8 + (-4 - (longlong)puVar12) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar11 - (longlong)puVar10 & 0xfffffffffffffffcU)) {
    if (puVar10 < local_380) {
      *ppiVar13 = (int *)puVar10;
      ppiVar13[1] = (int *)local_380;
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (puVar8 <= puVar12 + 1) goto LAB_142b40bf9;
    local_380 = puVar9 + -2;
    puVar10 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar8) {
      *ppiVar13 = (int *)puVar12;
      ppiVar13[1] = (int *)(puVar9 + -2);
      *(int *)(ppiVar13 + 2) = local_378;
      ppiVar13 = ppiVar13 + 3;
      local_370 = ppiVar13;
    }
    if (local_380 <= puVar10) goto LAB_142b40bf9;
  }
  iVar5 = (int)((longlong)local_380 - (longlong)puVar10 >> 2) + 1;
  puVar12 = puVar10;
  if (local_378 == 0) goto LAB_142b40be8;
  goto LAB_142b40975;
}

// IntroSortInternal<int,int,FIdentityFunctor,`SortDependencyList<2>'::__l23::<lambda_1>_> @ 142b40d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,_SortDependencyList<2>_::__l23::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  int *local_348;
  int *local_338;
  int *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    ppiVar9 = &local_338;
    do {
      piVar4 = ppiVar9[1];
      piVar5 = *ppiVar9;
      piVar3 = ppiVar9[2];
      iVar2 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      local_348._0_4_ = (int)piVar3;
      piVar8 = piVar5;
      if ((int)local_348 != 0) {
LAB_142b40e20:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          piVar6 = piVar4 + 1;
          iVar1 = piVar8[iVar2 >> 1];
          piVar8[iVar2 >> 1] = *piVar8;
          *piVar8 = iVar1;
          piVar5 = piVar8;
LAB_142b40e50:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x000142b40e59;
          goto LAB_142b40e70;
        }
        if (piVar8 < piVar4) {
          do {
            piVar3 = piVar8;
            if (piVar8 + 1 <= piVar4) {
              piVar5 = piVar8 + 1;
              piVar6 = piVar8;
              do {
                piVar3 = piVar5;
                if ((*param_4.DependencyData)[*piVar5] <= (*param_4.DependencyData)[*piVar6]) {
                  piVar3 = piVar6;
                }
                piVar5 = piVar5 + 1;
                piVar6 = piVar3;
              } while (piVar5 <= piVar4);
            }
            iVar2 = *piVar3;
            piVar5 = piVar4 + -1;
            *piVar3 = *piVar4;
            *piVar4 = iVar2;
            piVar4 = piVar5;
          } while (piVar8 < piVar5);
        }
        goto LAB_142b40f33;
      }
LAB_142b40f22:
      local_348 = piVar3;
      HeapSortInternal<int,int,FIdentityFunctor,_SortDependencyList<2>_::__l23::<lambda_1>_>
                (piVar5,iVar2,param_3,param_4);
LAB_142b40f33:
      ppiVar9 = ppiVar9 + -3;
    } while (&local_338 <= ppiVar9);
  }
  return;
code_r0x000142b40e59:
  if ((*param_4.DependencyData)[*piVar5] <= (*param_4.DependencyData)[*piVar8]) goto LAB_142b40e50;
LAB_142b40e70:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar8) break;
  } while ((*param_4.DependencyData)[*piVar8] <= (*param_4.DependencyData)[*piVar6]);
  if (piVar5 <= piVar6) {
    iVar2 = *piVar5;
    *piVar5 = *piVar6;
    *piVar6 = iVar2;
    goto LAB_142b40e50;
  }
  iVar2 = *piVar8;
  local_348._0_4_ = (int)local_348 + -1;
  *piVar8 = *piVar6;
  *piVar6 = iVar2;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar9 = piVar5;
      ppiVar9[1] = piVar4;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar6 <= piVar8 + 1) goto LAB_142b40f33;
    piVar4 = piVar7 + -2;
    piVar5 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar6) {
      *ppiVar9 = piVar8;
      ppiVar9[1] = piVar7 + -2;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_142b40f33;
  }
  iVar2 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar8 = piVar5;
  if ((int)local_348 == 0) goto LAB_142b40f22;
  goto LAB_142b40e20;
}

// IntroSortInternal<int,int,FIdentityFunctor,`SortDependencyList<3>'::__l23::<lambda_1>_> @ 142b40fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,_SortDependencyList<3>_::__l23::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  int *local_348;
  int *local_338;
  int *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    ppiVar9 = &local_338;
    do {
      piVar4 = ppiVar9[1];
      piVar5 = *ppiVar9;
      piVar3 = ppiVar9[2];
      iVar2 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      local_348._0_4_ = (int)piVar3;
      piVar8 = piVar5;
      if ((int)local_348 != 0) {
LAB_142b41090:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          piVar6 = piVar4 + 1;
          iVar1 = piVar8[iVar2 >> 1];
          piVar8[iVar2 >> 1] = *piVar8;
          *piVar8 = iVar1;
          piVar5 = piVar8;
LAB_142b410c0:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x000142b410c9;
          goto LAB_142b410e0;
        }
        if (piVar8 < piVar4) {
          do {
            piVar3 = piVar8;
            if (piVar8 + 1 <= piVar4) {
              piVar5 = piVar8 + 1;
              piVar6 = piVar8;
              do {
                piVar3 = piVar5;
                if ((*param_4.DependencyData)[*piVar5] <= (*param_4.DependencyData)[*piVar6]) {
                  piVar3 = piVar6;
                }
                piVar5 = piVar5 + 1;
                piVar6 = piVar3;
              } while (piVar5 <= piVar4);
            }
            iVar2 = *piVar3;
            piVar5 = piVar4 + -1;
            *piVar3 = *piVar4;
            *piVar4 = iVar2;
            piVar4 = piVar5;
          } while (piVar8 < piVar5);
        }
        goto LAB_142b411a3;
      }
LAB_142b41192:
      local_348 = piVar3;
      HeapSortInternal<int,int,FIdentityFunctor,_SortDependencyList<3>_::__l23::<lambda_1>_>
                (piVar5,iVar2,param_3,param_4);
LAB_142b411a3:
      ppiVar9 = ppiVar9 + -3;
    } while (&local_338 <= ppiVar9);
  }
  return;
code_r0x000142b410c9:
  if ((*param_4.DependencyData)[*piVar5] <= (*param_4.DependencyData)[*piVar8]) goto LAB_142b410c0;
LAB_142b410e0:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar8) break;
  } while ((*param_4.DependencyData)[*piVar8] <= (*param_4.DependencyData)[*piVar6]);
  if (piVar5 <= piVar6) {
    iVar2 = *piVar5;
    *piVar5 = *piVar6;
    *piVar6 = iVar2;
    goto LAB_142b410c0;
  }
  iVar2 = *piVar8;
  local_348._0_4_ = (int)local_348 + -1;
  *piVar8 = *piVar6;
  *piVar6 = iVar2;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar9 = piVar5;
      ppiVar9[1] = piVar4;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar6 <= piVar8 + 1) goto LAB_142b411a3;
    piVar4 = piVar7 + -2;
    piVar5 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar6) {
      *ppiVar9 = piVar8;
      ppiVar9[1] = piVar7 + -2;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_142b411a3;
  }
  iVar2 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar8 = piVar5;
  if ((int)local_348 == 0) goto LAB_142b41192;
  goto LAB_142b41090;
}

// IntroSortInternal<int,int,FIdentityFunctor,`SortDependencyList<0>'::__l23::<lambda_1>_> @ 142b41250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,_SortDependencyList<0>_::__l23::<lambda_1>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int **ppiVar9;
  float fVar10;
  undefined1 auStack_378 [48];
  int *local_348;
  int *local_338;
  int *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar10;
    memset(local_320,0,0x2e8);
    ppiVar9 = &local_338;
    do {
      piVar4 = ppiVar9[1];
      piVar5 = *ppiVar9;
      piVar3 = ppiVar9[2];
      iVar2 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      local_348._0_4_ = (int)piVar3;
      piVar8 = piVar5;
      if ((int)local_348 != 0) {
LAB_142b41300:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          piVar6 = piVar4 + 1;
          iVar1 = piVar8[iVar2 >> 1];
          piVar8[iVar2 >> 1] = *piVar8;
          *piVar8 = iVar1;
          piVar5 = piVar8;
LAB_142b41330:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x000142b41339;
          goto LAB_142b41350;
        }
        if (piVar8 < piVar4) {
          do {
            piVar3 = piVar8;
            if (piVar8 + 1 <= piVar4) {
              piVar5 = piVar8 + 1;
              piVar6 = piVar8;
              do {
                piVar3 = piVar5;
                if ((*param_4.DependencyData)[*piVar5] <= (*param_4.DependencyData)[*piVar6]) {
                  piVar3 = piVar6;
                }
                piVar5 = piVar5 + 1;
                piVar6 = piVar3;
              } while (piVar5 <= piVar4);
            }
            iVar2 = *piVar3;
            piVar5 = piVar4 + -1;
            *piVar3 = *piVar4;
            *piVar4 = iVar2;
            piVar4 = piVar5;
          } while (piVar8 < piVar5);
        }
        goto LAB_142b41413;
      }
LAB_142b41402:
      local_348 = piVar3;
      HeapSortInternal<int,int,FIdentityFunctor,_SortDependencyList<0>_::__l23::<lambda_1>_>
                (piVar5,iVar2,param_3,param_4);
LAB_142b41413:
      ppiVar9 = ppiVar9 + -3;
    } while (&local_338 <= ppiVar9);
  }
  return;
code_r0x000142b41339:
  if ((*param_4.DependencyData)[*piVar5] <= (*param_4.DependencyData)[*piVar8]) goto LAB_142b41330;
LAB_142b41350:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar8) break;
  } while ((*param_4.DependencyData)[*piVar8] <= (*param_4.DependencyData)[*piVar6]);
  if (piVar5 <= piVar6) {
    iVar2 = *piVar5;
    *piVar5 = *piVar6;
    *piVar6 = iVar2;
    goto LAB_142b41330;
  }
  iVar2 = *piVar8;
  local_348._0_4_ = (int)local_348 + -1;
  *piVar8 = *piVar6;
  *piVar6 = iVar2;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar8) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar9 = piVar5;
      ppiVar9[1] = piVar4;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar6 <= piVar8 + 1) goto LAB_142b41413;
    piVar4 = piVar7 + -2;
    piVar5 = piVar8;
  }
  else {
    if (piVar8 + 1 < piVar6) {
      *ppiVar9 = piVar8;
      ppiVar9[1] = piVar7 + -2;
      *(int *)(ppiVar9 + 2) = (int)local_348;
      ppiVar9 = ppiVar9 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_142b41413;
  }
  iVar2 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar8 = piVar5;
  if ((int)local_348 == 0) goto LAB_142b41402;
  goto LAB_142b41300;
}

// IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_> @ 142b414c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  uint *local_338;
  uint *local_328;
  uint *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_142b41570:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_142b415a0:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x000142b415a9;
          goto LAB_142b415b0;
        }
        for (; puVar4 = puVar9, puVar1 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar1 = puVar1 + 1, puVar1 <= puVar8) {
            if (*puVar4 < *puVar1) {
              puVar4 = puVar1;
            }
          }
          uVar2 = *puVar4;
          *puVar4 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_142b41669;
      }
LAB_142b41657:
      local_338 = puVar1;
      HeapSortInternal<unsigned_int,int,FIdentityFunctor,TLess<void>_>(puVar4,iVar3,param_3,param_4)
      ;
LAB_142b41669:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x000142b415a9:
  if (*puVar4 <= *puVar9) goto LAB_142b415a0;
LAB_142b415b0:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar9 <= *puVar6);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_142b415a0;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-4 - (longlong)puVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffffcU)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_142b41669;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_142b41669;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 2) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_142b41657;
  goto LAB_142b41570;
}

// IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_> @ 142b41700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  FDependsNode **ppFVar1;
  FDependsNode *pFVar2;
  int iVar3;
  FDependsNode **ppFVar4;
  FDependsNode ***pppFVar5;
  FDependsNode **ppFVar6;
  FDependsNode **ppFVar7;
  FDependsNode **ppFVar8;
  FDependsNode **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDependsNode **local_338;
  FDependsNode **local_328;
  FDependsNode **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar5 = &local_328;
    do {
      ppFVar8 = pppFVar5[1];
      ppFVar4 = *pppFVar5;
      ppFVar1 = pppFVar5[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_142b417b0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar8 + 1;
          pFVar2 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar2;
          ppFVar4 = ppFVar9;
LAB_142b417e0:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x000142b417e9;
          goto LAB_142b417f1;
        }
        for (; ppFVar4 = ppFVar9, ppFVar1 = ppFVar9, ppFVar9 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            if (*ppFVar4 < *ppFVar1) {
              ppFVar4 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar4;
          *ppFVar4 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_142b418ac;
      }
LAB_142b4189a:
      local_338 = ppFVar1;
      HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_142b418ac:
      pppFVar5 = pppFVar5 + -3;
    } while (&local_328 <= pppFVar5);
  }
  return;
code_r0x000142b417e9:
  if (*ppFVar4 <= *ppFVar9) goto LAB_142b417e0;
LAB_142b417f1:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar9) break;
  } while (*ppFVar9 <= *ppFVar6);
  if (ppFVar4 <= ppFVar6) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_142b417e0;
  }
  pFVar2 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar5 = ppFVar4;
      pppFVar5[1] = ppFVar8;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar6 <= ppFVar9 + 1) goto LAB_142b418ac;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar6) {
      *pppFVar5 = ppFVar9;
      pppFVar5[1] = ppFVar7 + -2;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_142b418ac;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_142b4189a;
  goto LAB_142b417b0;
}

// IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_NameDependencies<1>'::__l2::<lambda_1>_> @ 142b41940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<1>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode **ppFVar1;
  FDependsNode *pFVar2;
  int iVar3;
  FDependsNode **ppFVar4;
  FDependsNode ***pppFVar5;
  FDependsNode **ppFVar6;
  FDependsNode **ppFVar7;
  FDependsNode **ppFVar8;
  FDependsNode **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDependsNode **local_338;
  FDependsNode **local_328;
  FDependsNode **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar5 = &local_328;
    do {
      ppFVar8 = pppFVar5[1];
      ppFVar4 = *pppFVar5;
      ppFVar1 = pppFVar5[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_142b419f0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar8 + 1;
          pFVar2 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar2;
          ppFVar4 = ppFVar9;
LAB_142b41a20:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x000142b41a29;
          goto LAB_142b41a31;
        }
        for (; ppFVar4 = ppFVar9, ppFVar1 = ppFVar9, ppFVar9 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            if (*ppFVar4 < *ppFVar1) {
              ppFVar4 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar4;
          *ppFVar4 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_142b41aec;
      }
LAB_142b41ada:
      local_338 = ppFVar1;
      HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<1>_::__l2::<lambda_1>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_142b41aec:
      pppFVar5 = pppFVar5 + -3;
    } while (&local_328 <= pppFVar5);
  }
  return;
code_r0x000142b41a29:
  if (*ppFVar4 <= *ppFVar9) goto LAB_142b41a20;
LAB_142b41a31:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar9) break;
  } while (*ppFVar9 <= *ppFVar6);
  if (ppFVar4 <= ppFVar6) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_142b41a20;
  }
  pFVar2 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar5 = ppFVar4;
      pppFVar5[1] = ppFVar8;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar6 <= ppFVar9 + 1) goto LAB_142b41aec;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar6) {
      *pppFVar5 = ppFVar9;
      pppFVar5[1] = ppFVar7 + -2;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_142b41aec;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_142b41ada;
  goto LAB_142b419f0;
}

// IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_NameDependencies<0>'::__l2::<lambda_1>_> @ 142b41b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<0>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode **ppFVar1;
  FDependsNode *pFVar2;
  int iVar3;
  FDependsNode **ppFVar4;
  FDependsNode ***pppFVar5;
  FDependsNode **ppFVar6;
  FDependsNode **ppFVar7;
  FDependsNode **ppFVar8;
  FDependsNode **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDependsNode **local_338;
  FDependsNode **local_328;
  FDependsNode **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar5 = &local_328;
    do {
      ppFVar8 = pppFVar5[1];
      ppFVar4 = *pppFVar5;
      ppFVar1 = pppFVar5[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_142b41c30:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar8 + 1;
          pFVar2 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar2;
          ppFVar4 = ppFVar9;
LAB_142b41c60:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x000142b41c69;
          goto LAB_142b41c71;
        }
        for (; ppFVar4 = ppFVar9, ppFVar1 = ppFVar9, ppFVar9 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            if (*ppFVar4 < *ppFVar1) {
              ppFVar4 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar4;
          *ppFVar4 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_142b41d2c;
      }
LAB_142b41d1a:
      local_338 = ppFVar1;
      HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_NameDependencies<0>_::__l2::<lambda_1>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_142b41d2c:
      pppFVar5 = pppFVar5 + -3;
    } while (&local_328 <= pppFVar5);
  }
  return;
code_r0x000142b41c69:
  if (*ppFVar4 <= *ppFVar9) goto LAB_142b41c60;
LAB_142b41c71:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar9) break;
  } while (*ppFVar9 <= *ppFVar6);
  if (ppFVar4 <= ppFVar6) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_142b41c60;
  }
  pFVar2 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar5 = ppFVar4;
      pppFVar5[1] = ppFVar8;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar6 <= ppFVar9 + 1) goto LAB_142b41d2c;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar6) {
      *pppFVar5 = ppFVar9;
      pppFVar5[1] = ppFVar7 + -2;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_142b41d2c;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_142b41d1a;
  goto LAB_142b41c30;
}

// IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_Referencers<1>'::__l2::<lambda_1>_> @ 142b41dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<1>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode **ppFVar1;
  FDependsNode *pFVar2;
  int iVar3;
  FDependsNode **ppFVar4;
  FDependsNode ***pppFVar5;
  FDependsNode **ppFVar6;
  FDependsNode **ppFVar7;
  FDependsNode **ppFVar8;
  FDependsNode **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDependsNode **local_338;
  FDependsNode **local_328;
  FDependsNode **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar5 = &local_328;
    do {
      ppFVar8 = pppFVar5[1];
      ppFVar4 = *pppFVar5;
      ppFVar1 = pppFVar5[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_142b41e70:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar8 + 1;
          pFVar2 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar2;
          ppFVar4 = ppFVar9;
LAB_142b41ea0:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x000142b41ea9;
          goto LAB_142b41eb1;
        }
        for (; ppFVar4 = ppFVar9, ppFVar1 = ppFVar9, ppFVar9 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            if (*ppFVar4 < *ppFVar1) {
              ppFVar4 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar4;
          *ppFVar4 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_142b41f6c;
      }
LAB_142b41f5a:
      local_338 = ppFVar1;
      HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<1>_::__l2::<lambda_1>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_142b41f6c:
      pppFVar5 = pppFVar5 + -3;
    } while (&local_328 <= pppFVar5);
  }
  return;
code_r0x000142b41ea9:
  if (*ppFVar4 <= *ppFVar9) goto LAB_142b41ea0;
LAB_142b41eb1:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar9) break;
  } while (*ppFVar9 <= *ppFVar6);
  if (ppFVar4 <= ppFVar6) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_142b41ea0;
  }
  pFVar2 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar5 = ppFVar4;
      pppFVar5[1] = ppFVar8;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar6 <= ppFVar9 + 1) goto LAB_142b41f6c;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar6) {
      *pppFVar5 = ppFVar9;
      pppFVar5[1] = ppFVar7 + -2;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_142b41f6c;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_142b41f5a;
  goto LAB_142b41e70;
}

// IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,`FDependsNode::SerializeLoad_Referencers<0>'::__l2::<lambda_1>_> @ 142b42000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<0>_::__l2::<lambda_1>_>
          (FDependsNode **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FDependsNode **ppFVar1;
  FDependsNode *pFVar2;
  int iVar3;
  FDependsNode **ppFVar4;
  FDependsNode ***pppFVar5;
  FDependsNode **ppFVar6;
  FDependsNode **ppFVar7;
  FDependsNode **ppFVar8;
  FDependsNode **ppFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FDependsNode **local_338;
  FDependsNode **local_328;
  FDependsNode **local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    pppFVar5 = &local_328;
    do {
      ppFVar8 = pppFVar5[1];
      ppFVar4 = *pppFVar5;
      ppFVar1 = pppFVar5[2];
      iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
      local_338._0_4_ = (int)ppFVar1;
      ppFVar9 = ppFVar4;
      if ((int)local_338 != 0) {
LAB_142b420b0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar6 = ppFVar8 + 1;
          pFVar2 = ppFVar9[iVar3 >> 1];
          ppFVar9[iVar3 >> 1] = *ppFVar9;
          *ppFVar9 = pFVar2;
          ppFVar4 = ppFVar9;
LAB_142b420e0:
          ppFVar4 = ppFVar4 + 1;
          if (ppFVar4 <= ppFVar8) goto code_r0x000142b420e9;
          goto LAB_142b420f1;
        }
        for (; ppFVar4 = ppFVar9, ppFVar1 = ppFVar9, ppFVar9 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar1 = ppFVar1 + 1, ppFVar1 <= ppFVar8) {
            if (*ppFVar4 < *ppFVar1) {
              ppFVar4 = ppFVar1;
            }
          }
          pFVar2 = *ppFVar4;
          *ppFVar4 = *ppFVar8;
          *ppFVar8 = pFVar2;
        }
        goto LAB_142b421ac;
      }
LAB_142b4219a:
      local_338 = ppFVar1;
      HeapSortInternal<FDependsNode_*,int,FIdentityFunctor,_FDependsNode::SerializeLoad_Referencers<0>_::__l2::<lambda_1>_>
                (ppFVar4,iVar3,param_3,param_4);
LAB_142b421ac:
      pppFVar5 = pppFVar5 + -3;
    } while (&local_328 <= pppFVar5);
  }
  return;
code_r0x000142b420e9:
  if (*ppFVar4 <= *ppFVar9) goto LAB_142b420e0;
LAB_142b420f1:
  do {
    ppFVar7 = ppFVar6;
    ppFVar6 = ppFVar7 + -1;
    if (ppFVar6 <= ppFVar9) break;
  } while (*ppFVar9 <= *ppFVar6);
  if (ppFVar4 <= ppFVar6) {
    pFVar2 = *ppFVar4;
    *ppFVar4 = *ppFVar6;
    *ppFVar6 = pFVar2;
    goto LAB_142b420e0;
  }
  pFVar2 = *ppFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *ppFVar9 = *ppFVar6;
  *ppFVar6 = pFVar2;
  if ((longlong)((longlong)ppFVar6 + (-8 - (longlong)ppFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar4 & 0xfffffffffffffff8U)) {
    if (ppFVar4 < ppFVar8) {
      *pppFVar5 = ppFVar4;
      pppFVar5[1] = ppFVar8;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar6 <= ppFVar9 + 1) goto LAB_142b421ac;
    ppFVar8 = ppFVar7 + -2;
    ppFVar4 = ppFVar9;
  }
  else {
    if (ppFVar9 + 1 < ppFVar6) {
      *pppFVar5 = ppFVar9;
      pppFVar5[1] = ppFVar7 + -2;
      *(int *)(pppFVar5 + 2) = (int)local_338;
      pppFVar5 = pppFVar5 + 3;
    }
    if (ppFVar8 <= ppFVar4) goto LAB_142b421ac;
  }
  iVar3 = (int)((longlong)ppFVar8 - (longlong)ppFVar4 >> 3) + 1;
  ppFVar9 = ppFVar4;
  if ((int)local_338 == 0) goto LAB_142b4219a;
  goto LAB_142b420b0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<`FPathTree::RemovePath'::__l2::<lambda_1>_>_>_> @ 142b42240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FPathTree::RemovePath_::__l2::<lambda_1>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_public:_bool___cdecl_FPathTree::RemovePath(FName,TFunctionRef<void___cdecl(FName)>)_::_2_::<lambda_1>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar4;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 TVar5;
  int iVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> **ppTVar9;
  int iVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *pTVar14;
  float fVar15;
  undefined1 auStack_398 [32];
  FName local_378;
  FName local_370 [3];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar15;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar7 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar6 = (int)((longlong)pTVar7 - (longlong)pTVar14 >> 4) + 1;
      pTVar13 = pTVar14;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142b42300:
        if (8 < iVar6) {
          uVar1 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          pTVar11 = pTVar7 + 1;
          TVar2 = pTVar13[iVar6 / 2]._s_1;
          uVar3 = *(undefined8 *)((longlong)pTVar13[iVar6 / 2].ElementData.Pad + 8);
          pTVar13[iVar6 / 2]._s_1 = pTVar13->_s_1;
          *(undefined8 *)((longlong)pTVar13[iVar6 / 2].ElementData.Pad + 8) = uVar1;
          pTVar13->_s_1 = TVar2;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar3;
          pTVar14 = pTVar13;
LAB_142b42330:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar7) goto code_r0x000142b42339;
          goto LAB_142b42360;
        }
        for (; pTVar11 = pTVar13, pTVar14 = pTVar13, pTVar13 < pTVar7; pTVar7 = pTVar7 + -1) {
          while (pTVar8 = pTVar11, pTVar14 = pTVar14 + 1, pTVar14 <= pTVar7) {
            local_370[0].ComparisonIndex.Value = *(int *)pTVar14;
            local_370[0].Number = *(int *)((longlong)pTVar14 + 4);
            local_378.ComparisonIndex.Value = *(int *)pTVar8;
            local_378.Number = *(int *)((longlong)pTVar8 + 4);
            iVar10 = ::FName::Compare(&local_378,local_370);
            pTVar11 = pTVar14;
            if (iVar10 < 1) {
              pTVar11 = pTVar8;
            }
          }
          TVar2 = pTVar8->_s_1;
          uVar1 = *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((longlong)(pTVar7->ElementData).Pad + 8);
          pTVar8->_s_1 = pTVar7->_s_1;
          *(undefined8 *)((longlong)(pTVar8->ElementData).Pad + 8) = uVar3;
          pTVar7->_s_1 = TVar2;
          *(undefined8 *)((longlong)(pTVar7->ElementData).Pad + 8) = uVar1;
        }
        goto LAB_142b42440;
      }
LAB_142b4242f:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::FElementCompareClass<_FPathTree::RemovePath_::__l2::<lambda_1>_>_>_>
                (pTVar14,iVar6,param_3,param_4);
LAB_142b42440:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x000142b42339:
  local_378.ComparisonIndex.Value = *(int *)pTVar14;
  local_378.Number = *(int *)((longlong)pTVar14 + 4);
  local_370[0].ComparisonIndex.Value = *(int *)pTVar13;
  local_370[0].Number = *(int *)((longlong)pTVar13 + 4);
  iVar6 = ::FName::Compare(local_370,&local_378);
  if (iVar6 < 1) goto LAB_142b42330;
LAB_142b42360:
  do {
    pTVar12 = pTVar11;
    pTVar11 = pTVar12 + -1;
    if (pTVar11 <= pTVar13) break;
    local_370[0].ComparisonIndex.Value = *(int *)pTVar13;
    local_370[0].Number = *(int *)((longlong)pTVar13 + 4);
    local_378.ComparisonIndex.Value = *(int *)pTVar11;
    local_378.Number = *(int *)((longlong)pTVar11 + 4);
    iVar6 = ::FName::Compare(&local_378,local_370);
  } while (iVar6 < 1);
  TVar2 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 *)((longlong)pTVar12 + -8);
  if (pTVar14 <= pTVar11) {
    TVar4 = pTVar14->_s_1;
    TVar5 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 *)
             ((longlong)pTVar8 + 0x18);
    pTVar14->_s_1 = pTVar11->_s_1;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 *)((longlong)pTVar8 + 0x18) =
         TVar2;
    pTVar11->_s_1 = TVar4;
    *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 *)((longlong)pTVar12 + -8) = TVar5
    ;
    goto LAB_142b42330;
  }
  TVar4 = pTVar13->_s_1;
  TVar5 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 *)
           ((pTVar13->ElementData).Pad + 8);
  iVar10 = iVar10 + -1;
  pTVar13->_s_1 = pTVar11->_s_1;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 *)((pTVar13->ElementData).Pad + 8) =
       TVar2;
  pTVar11->_s_1 = TVar4;
  *(TSparseArrayElementOrFreeListLink<TAlignedBytes<16,4>_>_s_1 *)((longlong)pTVar12 + -8) = TVar5;
  if ((longlong)((longlong)pTVar11 + (-0x10 - (longlong)pTVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar7 - (longlong)pTVar14 & 0xfffffffffffffff0U)) {
    if (pTVar14 < pTVar7) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar7;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar11 <= pTVar13 + 1) goto LAB_142b42440;
    pTVar7 = pTVar12 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar11) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar12 + -2;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar7 <= pTVar14) goto LAB_142b42440;
  }
  iVar6 = (int)((longlong)pTVar7 - (longlong)pTVar14 >> 4) + 1;
  pTVar13 = pTVar14;
  if (iVar10 == 0) goto LAB_142b4242f;
  goto LAB_142b42300;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 142b42510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_s_1 TVar4;
  undefined8 uVar5;
  FNameEntryId FVar6;
  uint uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> **ppTVar15;
  int iVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *pTVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppTVar15 = &local_348;
    do {
      pTVar18 = ppTVar15[1];
      pTVar17 = *ppTVar15;
      local_358 = ppTVar15[2];
      iVar11 = (int)(((longlong)pTVar18 - (longlong)pTVar17) / 0x14) + 1;
      this = pTVar17;
      iVar16 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142b425f0:
        if (8 < iVar11) {
          uVar3 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar12 = pTVar18 + 1;
          lVar10 = (longlong)(iVar11 / 2);
          TVar4 = this[lVar10]._s_1;
          uVar5 = *(undefined8 *)((longlong)this[lVar10].ElementData.Pad + 8);
          uVar1 = *(undefined4 *)((longlong)this + lVar10 * 0x14 + 0x10);
          this[lVar10]._s_1 = this->_s_1;
          *(undefined8 *)((longlong)this[lVar10].ElementData.Pad + 8) = uVar3;
          *(undefined4 *)((longlong)this + lVar10 * 0x14 + 0x10) =
               *(undefined4 *)((this->ElementData).Pad + 0x10);
          this->_s_1 = TVar4;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar5;
          *(undefined4 *)((this->ElementData).Pad + 0x10) = uVar1;
          pTVar17 = this;
LAB_142b42632:
          pTVar14 = pTVar17;
          pTVar17 = pTVar14 + 1;
          if (pTVar17 <= pTVar18) goto code_r0x000142b4263b;
          goto LAB_142b42650;
        }
        for (; pTVar12 = this, pTVar17 = this, this < pTVar18; pTVar18 = pTVar18 + -1) {
          while (pTVar14 = pTVar12, pTVar17 = pTVar17 + 1, pTVar17 <= pTVar18) {
            iVar16 = ::FName::Compare((FName *)&pTVar14->ElementData,(FName *)&pTVar17->ElementData)
            ;
            pTVar12 = pTVar17;
            if (-1 < iVar16) {
              pTVar12 = pTVar14;
            }
          }
          FVar6.Value = *(int *)pTVar14;
          uVar7 = *(int *)((longlong)pTVar14 + 4);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar14->ElementData).Pad + 2);
          uVar1 = ((FNameEntryId *)(pTVar14->ElementData).Pad)[4];
          FVar8.Value = *(int *)pTVar18;
          uVar9 = *(int *)((longlong)pTVar18 + 4);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar18->ElementData).Pad + 2);
          *(int *)pTVar14 = FVar8.Value;
          *(uint *)((longlong)pTVar14 + 4) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar14->ElementData).Pad + 2) = uVar5;
          ((FNameEntryId *)(pTVar14->ElementData).Pad)[4] =
               (uint)((FNameEntryId *)(pTVar18->ElementData).Pad)[4];
          *(int *)pTVar18 = FVar6.Value;
          *(uint *)((longlong)pTVar18 + 4) = uVar7;
          *(undefined8 *)((FNameEntryId *)(pTVar18->ElementData).Pad + 2) = uVar3;
          ((FNameEntryId *)(pTVar18->ElementData).Pad)[4] = (FNameEntryId)uVar1;
        }
        goto LAB_142b4277e;
      }
LAB_142b42765:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
                (pTVar17,iVar11,param_3,param_4);
LAB_142b4277e:
      ppTVar15 = ppTVar15 + -3;
    } while (&local_348 <= ppTVar15);
  }
  return;
code_r0x000142b4263b:
  iVar11 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar17->ElementData);
  if (-1 < iVar11) goto LAB_142b42632;
LAB_142b42650:
  do {
    pTVar13 = pTVar12;
    pTVar12 = pTVar13 + -1;
    if (pTVar12 <= this) break;
    iVar11 = ::FName::Compare((FName *)&pTVar12->ElementData,(FName *)&this->ElementData);
  } while (-1 < iVar11);
  uVar3 = *(undefined8 *)((longlong)pTVar13 + -0xc);
  if (pTVar17 <= pTVar12) {
    TVar4 = pTVar17->_s_1;
    uVar5 = *(undefined8 *)((longlong)pTVar14 + 0x1c);
    uVar2 = *(uint *)((longlong)pTVar14 + 0x24);
    pTVar17->_s_1 = pTVar12->_s_1;
    *(undefined8 *)((longlong)pTVar14 + 0x1c) = uVar3;
    *(uint *)((longlong)pTVar14 + 0x24) =
         (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value;
    pTVar12->_s_1 = TVar4;
    *(undefined8 *)((longlong)pTVar13 + -0xc) = uVar5;
    (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value = uVar2;
    goto LAB_142b42632;
  }
  uVar2 = *(uint *)((this->ElementData).Pad + 0x10);
  TVar4 = this->_s_1;
  uVar5 = *(undefined8 *)((this->ElementData).Pad + 8);
  iVar16 = iVar16 + -1;
  this->_s_1 = pTVar12->_s_1;
  *(undefined8 *)((this->ElementData).Pad + 8) = uVar3;
  *(uint *)((this->ElementData).Pad + 0x10) =
       (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value;
  pTVar12->_s_1 = TVar4;
  *(undefined8 *)((longlong)pTVar13 + -0xc) = uVar5;
  (((FName *)((longlong)pTVar13 + -4))->ComparisonIndex).Value = uVar2;
  if (((longlong)pTVar12 + (-0x14 - (longlong)this)) / 0x14 <
      ((longlong)pTVar18 - (longlong)pTVar17) / 0x14) {
    if (pTVar17 < pTVar18) {
      *ppTVar15 = pTVar17;
      ppTVar15[1] = pTVar18;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar12 <= this + 1) goto LAB_142b4277e;
    pTVar18 = pTVar13 + -2;
    pTVar17 = this;
  }
  else {
    if (this + 1 < pTVar12) {
      *ppTVar15 = this;
      ppTVar15[1] = pTVar13 + -2;
      *(int *)(ppTVar15 + 2) = iVar16;
      ppTVar15 = ppTVar15 + 3;
    }
    if (pTVar18 <= pTVar17) goto LAB_142b4277e;
  }
  iVar11 = (int)(((longlong)pTVar18 - (longlong)pTVar17) / 0x14) + 1;
  this = pTVar17;
  if (iVar16 == 0) goto LAB_142b42765;
  goto LAB_142b425f0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<`FPackageReader::ReadLinkerObjects'::__l2::<lambda_2>_>_>_>_> @ 142b42850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  FName FVar15;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  FNameEntryId FVar22;
  uint uVar23;
  FNameEntryId FVar24;
  uint uVar25;
  char *pcVar26;
  int iVar27;
  char *pcVar28;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar29;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar30;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar31;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> **ppTVar32;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar33;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar34;
  float fVar35;
  undefined1 auStack_398 [32];
  int local_378;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *local_360;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar35 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar35;
    memset(local_340,0,0x2e8);
    ppTVar32 = &local_358;
    do {
      pTVar33 = ppTVar32[1];
      pTVar31 = *ppTVar32;
      local_360 = ppTVar32[2];
      iVar27 = (int)(((longlong)pTVar33 - (longlong)pTVar31) / 0x50) + 1;
      local_378 = (int)local_360;
      this = pTVar31;
      if ((int)local_360 != 0) {
LAB_142b42942:
        if (8 < iVar27) {
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar29 = pTVar33 + 1;
          pTVar31 = this + iVar27 / 2;
          TVar2 = pTVar31->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x20);
          uVar7 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x28);
          uVar8 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x30);
          uVar9 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x38);
          uVar10 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x40);
          uVar11 = *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x48);
          pTVar31->_s_1 = this->_s_1;
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x10) =
               *(undefined8 *)((this->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x18) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x28);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x20) =
               *(undefined8 *)((this->ElementData).Pad + 0x20);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x28) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x38);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x30) =
               *(undefined8 *)((this->ElementData).Pad + 0x30);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x38) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x48);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x40) =
               *(undefined8 *)((this->ElementData).Pad + 0x40);
          *(undefined8 *)((longlong)(pTVar31->ElementData).Pad + 0x48) = uVar1;
          this->_s_1 = TVar2;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((this->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((this->ElementData).Pad + 0x18) = uVar5;
          *(undefined8 *)((this->ElementData).Pad + 0x20) = uVar6;
          *(undefined8 *)((this->ElementData).Pad + 0x28) = uVar7;
          *(undefined8 *)((this->ElementData).Pad + 0x30) = uVar8;
          *(undefined8 *)((this->ElementData).Pad + 0x38) = uVar9;
          *(undefined8 *)((this->ElementData).Pad + 0x40) = uVar10;
          *(undefined8 *)((this->ElementData).Pad + 0x48) = uVar11;
          pTVar31 = this;
LAB_142b429b3:
          pTVar34 = pTVar31;
          pTVar31 = pTVar34 + 1;
          if (pTVar31 <= pTVar33) goto code_r0x000142b429bf;
          goto LAB_142b42a11;
        }
        for (; pTVar29 = this, pTVar31 = this, this < pTVar33; pTVar33 = pTVar33 + -1) {
          while (pTVar34 = pTVar29, pTVar31 = pTVar31 + 1, pTVar31 <= pTVar33) {
            iVar27 = ::FName::Compare((FName *)&pTVar34->ElementData,(FName *)&pTVar31->ElementData)
            ;
            if ((iVar27 == 0) &&
               (iVar27 = ::FName::Compare((FName *)((FNameEntryId *)(pTVar34->ElementData).Pad + 2),
                                          (FName *)((FNameEntryId *)(pTVar31->ElementData).Pad + 2))
               , iVar27 == 0)) {
              if (*(int *)((FNameEntryId *)(pTVar31->ElementData).Pad + 6) == 0) {
                pcVar28 = "";
              }
              else {
                pcVar28 = *(char **)((FNameEntryId *)(pTVar31->ElementData).Pad + 4);
              }
              if (*(int *)((FNameEntryId *)(pTVar34->ElementData).Pad + 6) == 0) {
                pcVar26 = "";
              }
              else {
                pcVar26 = *(char **)((FNameEntryId *)(pTVar34->ElementData).Pad + 4);
              }
              iVar27 = strcmp(pcVar26,pcVar28);
            }
            pTVar29 = pTVar31;
            if (-1 < iVar27) {
              pTVar29 = pTVar34;
            }
          }
          FVar22.Value = *(int *)pTVar34;
          uVar23 = *(int *)((longlong)pTVar34 + 4);
          uVar1 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 2);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 4);
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 6);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 8);
          uVar6 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 10);
          FVar24.Value = *(int *)pTVar33;
          uVar25 = *(int *)((longlong)pTVar33 + 4);
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 2);
          uVar8 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0xc);
          uVar9 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0xe);
          uVar10 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0x10);
          uVar11 = *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0x12);
          *(int *)pTVar34 = FVar24.Value;
          *(uint *)((longlong)pTVar34 + 4) = uVar25;
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 2) = uVar7;
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 6);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 4);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 6) = uVar7;
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 10);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 8) =
               *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 8);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 10) = uVar7;
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0xe);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0xc) =
               *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0xc);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0xe) = uVar7;
          uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0x12);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0x10) =
               *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0x10);
          *(undefined8 *)((FNameEntryId *)(pTVar34->ElementData).Pad + 0x12) = uVar7;
          *(int *)pTVar33 = FVar22.Value;
          *(uint *)((longlong)pTVar33 + 4) = uVar23;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 2) = uVar1;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 4) = uVar3;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 6) = uVar4;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 10) = uVar6;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0xc) = uVar8;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0xe) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0x10) = uVar10;
          *(undefined8 *)((FNameEntryId *)(pTVar33->ElementData).Pad + 0x12) = uVar11;
        }
        goto LAB_142b42bfd;
      }
LAB_142b42be4:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>_>_>
                (pTVar31,iVar27,param_3,param_4);
LAB_142b42bfd:
      ppTVar32 = ppTVar32 + -3;
    } while (&local_358 <= ppTVar32);
  }
  return;
code_r0x000142b429bf:
  iVar27 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar31->ElementData);
  if ((iVar27 == 0) &&
     (iVar27 = ::FName::Compare((FName *)((this->ElementData).Pad + 8),
                                (FName *)((longlong)pTVar34 + 0x58)), iVar27 == 0)) {
    if (*(int *)((longlong)pTVar34 + 0x68) == 0) {
      pcVar28 = "";
    }
    else {
      pcVar28 = *(char **)((longlong)pTVar34 + 0x60);
    }
    if (*(int *)((this->ElementData).Pad + 0x18) == 0) {
      pcVar26 = "";
    }
    else {
      pcVar26 = *(char **)((this->ElementData).Pad + 0x10);
    }
    iVar27 = strcmp(pcVar26,pcVar28);
  }
  if (-1 < iVar27) goto LAB_142b429b3;
LAB_142b42a11:
  do {
    pTVar30 = pTVar29;
    pTVar29 = pTVar30 + -1;
    if (pTVar29 <= this) break;
    iVar27 = ::FName::Compare((FName *)&pTVar29->ElementData,(FName *)&this->ElementData);
    if ((iVar27 == 0) &&
       (iVar27 = ::FName::Compare((FName *)((longlong)pTVar30 + -0x48),
                                  (FName *)((this->ElementData).Pad + 8)), iVar27 == 0)) {
      if (*(int *)((this->ElementData).Pad + 0x18) == 0) {
        pcVar28 = "";
      }
      else {
        pcVar28 = *(char **)((this->ElementData).Pad + 0x10);
      }
      if ((((FName *)((longlong)pTVar30 + -0x38))->ComparisonIndex).Value == 0) {
        pcVar26 = "";
      }
      else {
        pcVar26 = *(char **)((longlong)pTVar30 + -0x40);
      }
      iVar27 = strcmp(pcVar26,pcVar28);
    }
  } while (-1 < iVar27);
  FVar12 = *(FName *)((longlong)pTVar30 + -0x48);
  if (pTVar31 <= pTVar29) {
    TVar2 = pTVar31->_s_1;
    FVar13 = *(FName *)((longlong)pTVar34 + 0x58);
    FVar14 = *(FName *)((longlong)pTVar34 + 0x60);
    FVar15 = *(FName *)((longlong)pTVar34 + 0x68);
    FVar16 = *(FName *)((longlong)pTVar34 + 0x70);
    FVar17 = *(FName *)((longlong)pTVar34 + 0x78);
    FVar18 = *(FName *)((longlong)pTVar34 + 0x80);
    FVar19 = *(FName *)((longlong)pTVar34 + 0x88);
    FVar20 = *(FName *)((longlong)pTVar34 + 0x90);
    FVar21 = *(FName *)((longlong)pTVar34 + 0x98);
    pTVar31->_s_1 = pTVar29->_s_1;
    *(FName *)((longlong)pTVar34 + 0x58) = FVar12;
    FVar12 = *(FName *)((longlong)pTVar30 + -0x38);
    *(FName *)((longlong)pTVar34 + 0x60) = *(FName *)((longlong)pTVar30 + -0x40);
    *(FName *)((longlong)pTVar34 + 0x68) = FVar12;
    FVar12 = *(FName *)((longlong)pTVar30 + -0x28);
    *(FName *)((longlong)pTVar34 + 0x70) = *(FName *)((longlong)pTVar30 + -0x30);
    *(FName *)((longlong)pTVar34 + 0x78) = FVar12;
    FVar12 = *(FName *)((longlong)pTVar30 + -0x18);
    *(FName *)((longlong)pTVar34 + 0x80) = *(FName *)((longlong)pTVar30 + -0x20);
    *(FName *)((longlong)pTVar34 + 0x88) = FVar12;
    FVar12 = *(FName *)((longlong)pTVar30 + -8);
    *(FName *)((longlong)pTVar34 + 0x90) = *(FName *)((longlong)pTVar30 + -0x10);
    *(FName *)((longlong)pTVar34 + 0x98) = FVar12;
    pTVar29->_s_1 = TVar2;
    *(FName *)((longlong)pTVar30 + -0x48) = FVar13;
    *(FName *)((longlong)pTVar30 + -0x40) = FVar14;
    *(FName *)((longlong)pTVar30 + -0x38) = FVar15;
    *(FName *)((longlong)pTVar30 + -0x30) = FVar16;
    *(FName *)((longlong)pTVar30 + -0x28) = FVar17;
    *(FName *)((longlong)pTVar30 + -0x20) = FVar18;
    *(FName *)((longlong)pTVar30 + -0x18) = FVar19;
    *(FName *)((longlong)pTVar30 + -0x10) = FVar20;
    *(FName *)((longlong)pTVar30 + -8) = FVar21;
    goto LAB_142b429b3;
  }
  TVar2 = this->_s_1;
  FVar13 = *(FName *)((this->ElementData).Pad + 8);
  FVar14 = *(FName *)((this->ElementData).Pad + 0x10);
  FVar15 = *(FName *)((this->ElementData).Pad + 0x18);
  FVar16 = *(FName *)((this->ElementData).Pad + 0x20);
  FVar17 = *(FName *)((this->ElementData).Pad + 0x28);
  local_378 = local_378 + -1;
  FVar18 = *(FName *)((this->ElementData).Pad + 0x30);
  FVar19 = *(FName *)((this->ElementData).Pad + 0x38);
  FVar20 = *(FName *)((this->ElementData).Pad + 0x40);
  FVar21 = *(FName *)((this->ElementData).Pad + 0x48);
  this->_s_1 = pTVar29->_s_1;
  *(FName *)((this->ElementData).Pad + 8) = FVar12;
  FVar12 = *(FName *)((longlong)pTVar30 + -0x38);
  *(FName *)((this->ElementData).Pad + 0x10) = *(FName *)((longlong)pTVar30 + -0x40);
  *(FName *)((this->ElementData).Pad + 0x18) = FVar12;
  FVar12 = *(FName *)((longlong)pTVar30 + -0x28);
  *(FName *)((this->ElementData).Pad + 0x20) = *(FName *)((longlong)pTVar30 + -0x30);
  *(FName *)((this->ElementData).Pad + 0x28) = FVar12;
  FVar12 = *(FName *)((longlong)pTVar30 + -0x18);
  *(FName *)((this->ElementData).Pad + 0x30) = *(FName *)((longlong)pTVar30 + -0x20);
  *(FName *)((this->ElementData).Pad + 0x38) = FVar12;
  FVar12 = *(FName *)((longlong)pTVar30 + -8);
  *(FName *)((this->ElementData).Pad + 0x40) = *(FName *)((longlong)pTVar30 + -0x10);
  *(FName *)((this->ElementData).Pad + 0x48) = FVar12;
  pTVar29->_s_1 = TVar2;
  *(FName *)((longlong)pTVar30 + -0x48) = FVar13;
  *(FName *)((longlong)pTVar30 + -0x40) = FVar14;
  *(FName *)((longlong)pTVar30 + -0x38) = FVar15;
  *(FName *)((longlong)pTVar30 + -0x30) = FVar16;
  *(FName *)((longlong)pTVar30 + -0x28) = FVar17;
  *(FName *)((longlong)pTVar30 + -0x20) = FVar18;
  *(FName *)((longlong)pTVar30 + -0x18) = FVar19;
  *(FName *)((longlong)pTVar30 + -0x10) = FVar20;
  *(FName *)((longlong)pTVar30 + -8) = FVar21;
  if (((longlong)pTVar29 + (-0x50 - (longlong)this)) / 0x50 <
      ((longlong)pTVar33 - (longlong)pTVar31) / 0x50) {
    if (pTVar31 < pTVar33) {
      *ppTVar32 = pTVar31;
      ppTVar32[1] = pTVar33;
      *(int *)(ppTVar32 + 2) = local_378;
      ppTVar32 = ppTVar32 + 3;
    }
    if (pTVar29 <= this + 1) goto LAB_142b42bfd;
    pTVar33 = pTVar30 + -2;
    pTVar31 = this;
  }
  else {
    if (this + 1 < pTVar29) {
      *ppTVar32 = this;
      ppTVar32[1] = pTVar30 + -2;
      *(int *)(ppTVar32 + 2) = local_378;
      ppTVar32 = ppTVar32 + 3;
    }
    if (pTVar33 <= pTVar31) goto LAB_142b42bfd;
  }
  iVar27 = (int)(((longlong)pTVar33 - (longlong)pTVar31) / 0x50) + 1;
  this = pTVar31;
  if (local_378 == 0) goto LAB_142b42be4;
  goto LAB_142b42942;
}

// IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142b42d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,FString> *param_1,int param_2,FKeyForward param_3,FNameFastLess param_4)

{
  TTuple<FName,FString> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  TTuple<FName,FString> *pTVar8;
  TTuple<FName,FString> *pTVar9;
  TTuple<FName,FString> *pTVar10;
  TTuple<FName,FString> *pTVar11;
  TTuple<FName,FString> *pTVar12;
  TTuple<FName,FString> *pTVar13;
  TTuple<FName,FString> **ppTVar14;
  float fVar15;
  undefined1 auStack_388 [48];
  TTuple<FName,FString> *local_358;
  TTuple<FName,FString> *local_348;
  TTuple<FName,FString> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar15;
    memset(local_330,0,0x2e8);
    ppTVar14 = &local_348;
    do {
      pTVar8 = ppTVar14[1];
      pTVar13 = *ppTVar14;
      pTVar1 = ppTVar14[2];
      local_358._0_4_ = (int)pTVar1;
      iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
      pTVar12 = pTVar13;
      if ((int)local_358 != 0) {
LAB_142b42e40:
        if (8 < iVar7) {
          uVar3 = *(undefined8 *)&pTVar12->field_0x8;
          pTVar10 = pTVar8 + 1;
          iVar7 = iVar7 / 2;
          uVar4 = *(undefined8 *)(pTVar12 + iVar7);
          uVar5 = *(undefined8 *)&pTVar12[iVar7].field_0x8;
          uVar2 = *(undefined8 *)&pTVar12[iVar7].field_0x10;
          *(undefined8 *)(pTVar12 + iVar7) = *(undefined8 *)pTVar12;
          *(undefined8 *)&pTVar12[iVar7].field_0x8 = uVar3;
          *(undefined8 *)&pTVar12[iVar7].field_0x10 = *(undefined8 *)&pTVar12->field_0x10;
          *(undefined8 *)pTVar12 = uVar4;
          *(undefined8 *)&pTVar12->field_0x8 = uVar5;
          *(undefined8 *)&pTVar12->field_0x10 = uVar2;
          pTVar13 = pTVar12;
LAB_142b42e90:
          pTVar9 = pTVar13;
          pTVar13 = pTVar9 + 1;
          if (pTVar13 <= pTVar8) goto code_r0x000142b42e99;
          goto LAB_142b42eb0;
        }
        for (; pTVar1 = pTVar12, pTVar13 = pTVar12, pTVar12 < pTVar8; pTVar8 = pTVar8 + -1) {
          while (pTVar10 = pTVar13 + 1, pTVar10 <= pTVar8) {
            iVar7 = *(int *)pTVar1 - *(int *)pTVar10;
            if (iVar7 == 0) {
              iVar7 = *(int *)&pTVar1->field_0x4 - *(int *)&pTVar13[1].field_0x4;
            }
            pTVar13 = pTVar10;
            if (iVar7 < 0) {
              pTVar1 = pTVar10;
            }
          }
          uVar3 = *(undefined8 *)pTVar1;
          uVar4 = *(undefined8 *)&pTVar1->field_0x8;
          uVar2 = *(undefined8 *)&pTVar1->field_0x10;
          uVar5 = *(undefined8 *)&pTVar8->field_0x8;
          *(undefined8 *)pTVar1 = *(undefined8 *)pTVar8;
          *(undefined8 *)&pTVar1->field_0x8 = uVar5;
          *(undefined8 *)&pTVar1->field_0x10 = *(undefined8 *)&pTVar8->field_0x10;
          *(undefined8 *)pTVar8 = uVar3;
          *(undefined8 *)&pTVar8->field_0x8 = uVar4;
          *(undefined8 *)&pTVar8->field_0x10 = uVar2;
        }
        goto LAB_142b42fe0;
      }
LAB_142b42fd0:
      local_358 = pTVar1;
      HeapSortInternal<TTuple<FName,FString>,int,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                (pTVar13,iVar7,param_3,param_4);
LAB_142b42fe0:
      ppTVar14 = ppTVar14 + -3;
    } while (&local_348 <= ppTVar14);
  }
  return;
code_r0x000142b42e99:
  iVar7 = *(int *)pTVar12 - *(int *)pTVar13;
  if (iVar7 == 0) {
    iVar7 = *(int *)&pTVar12->field_0x4 - *(int *)&pTVar9[1].field_0x4;
  }
  if (-1 < iVar7) goto LAB_142b42e90;
LAB_142b42eb0:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar12) break;
    iVar7 = *(int *)pTVar10 - *(int *)pTVar12;
    if (iVar7 == 0) {
      iVar7 = *(int *)&pTVar11[-1].field_0x4 - *(int *)&pTVar12->field_0x4;
    }
  } while (-1 < iVar7);
  uVar2 = *(undefined8 *)&pTVar11[-1].field_0x8;
  if (pTVar13 <= pTVar10) {
    uVar4 = *(undefined8 *)pTVar13;
    uVar5 = *(undefined8 *)&pTVar9[1].field_0x8;
    uVar3 = *(undefined8 *)&pTVar9[1].field_0x10;
    *(undefined8 *)pTVar13 = *(undefined8 *)pTVar10;
    *(undefined8 *)&pTVar9[1].field_0x8 = uVar2;
    *(undefined8 *)&pTVar9[1].field_0x10 = *(undefined8 *)&pTVar11[-1].field_0x10;
    *(undefined8 *)pTVar10 = uVar4;
    *(undefined8 *)&pTVar11[-1].field_0x8 = uVar5;
    *(undefined8 *)&pTVar11[-1].field_0x10 = uVar3;
    goto LAB_142b42e90;
  }
  uVar4 = *(undefined8 *)pTVar12;
  uVar5 = *(undefined8 *)&pTVar12->field_0x8;
  uVar3 = *(undefined8 *)&pTVar12->field_0x10;
  lVar6 = (longlong)pTVar10 + (-0x18 - (longlong)pTVar12);
  local_358._0_4_ = (int)local_358 + -1;
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  *(undefined8 *)pTVar12 = *(undefined8 *)pTVar10;
  *(undefined8 *)&pTVar12->field_0x8 = uVar2;
  *(undefined8 *)&pTVar12->field_0x10 = *(undefined8 *)&pTVar11[-1].field_0x10;
  *(undefined8 *)pTVar10 = uVar4;
  *(undefined8 *)&pTVar11[-1].field_0x8 = uVar5;
  *(undefined8 *)&pTVar11[-1].field_0x10 = uVar3;
  if ((lVar6 >> 2) - (lVar6 >> 0x3f) < ((longlong)pTVar8 - (longlong)pTVar13) / 0x18) {
    if (pTVar13 < pTVar8) {
      *ppTVar14 = pTVar13;
      ppTVar14[1] = pTVar8;
      *(int *)(ppTVar14 + 2) = (int)local_358;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar10 <= pTVar12 + 1) goto LAB_142b42fe0;
    pTVar8 = pTVar11 + -2;
    pTVar13 = pTVar12;
  }
  else {
    if (pTVar12 + 1 < pTVar10) {
      *ppTVar14 = pTVar12;
      ppTVar14[1] = pTVar11 + -2;
      *(int *)(ppTVar14 + 2) = (int)local_358;
      ppTVar14 = ppTVar14 + 3;
    }
    if (pTVar8 <= pTVar13) goto LAB_142b42fe0;
  }
  iVar7 = (int)(((longlong)pTVar8 - (longlong)pTVar13) / 0x18) + 1;
  pTVar12 = pTVar13;
  if ((int)local_358 == 0) goto LAB_142b42fd0;
  goto LAB_142b42e40;
}

// IntroSortInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_> @ 142b430a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>
          (FPackageDependency *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>
          param_4)

{
  FPackageDependency *pFVar1;
  FName FVar2;
  undefined3 uVar3;
  EDependencyProperty EVar4;
  undefined3 uVar5;
  longlong lVar6;
  int iVar7;
  FPackageDependency *pFVar8;
  FPackageDependency *pFVar9;
  FPackageDependency *pFVar10;
  FPackageDependency *pFVar11;
  FPackageDependency *pFVar12;
  FPackageDependency *pFVar13;
  FPackageDependency **ppFVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_378 [48];
  FPackageDependency *local_348;
  FPackageDependency *local_338;
  FPackageDependency *local_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_378;
  if (1 < param_2) {
    local_330 = param_1 + (longlong)param_2 + -1;
    local_338 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_328 = (undefined4)(longlong)fVar16;
    memset(local_320,0,0x2e8);
    ppFVar14 = &local_338;
    do {
      pFVar8 = ppFVar14[1];
      pFVar12 = *ppFVar14;
      pFVar1 = ppFVar14[2];
      local_348._0_4_ = (int)pFVar1;
      iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar12) / 0xc) + 1;
      pFVar11 = pFVar12;
      if ((int)local_348 != 0) {
LAB_142b43170:
        if (8 < iVar7) {
          pFVar9 = pFVar8 + 1;
          iVar7 = iVar7 / 2;
          FVar2 = pFVar11[iVar7].PackageName;
          EVar4 = pFVar11[iVar7].Property;
          uVar5 = *(undefined3 *)&pFVar11[iVar7].field_0x9;
          pFVar11[iVar7].PackageName = pFVar11->PackageName;
          uVar3 = *(undefined3 *)&pFVar11->field_0x9;
          pFVar11[iVar7].Property = pFVar11->Property;
          *(undefined3 *)&pFVar11[iVar7].field_0x9 = uVar3;
          pFVar11->PackageName = FVar2;
          pFVar11->Property = EVar4;
          *(undefined3 *)&pFVar11->field_0x9 = uVar5;
          pFVar12 = pFVar11;
LAB_142b431c0:
          pFVar13 = pFVar12;
          pFVar12 = pFVar13 + 1;
          if (pFVar12 <= pFVar8) goto code_r0x000142b431cc;
          goto LAB_142b431f1;
        }
        for (; pFVar12 = pFVar11, pFVar1 = pFVar11, pFVar11 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            iVar7 = (pFVar12->PackageName).ComparisonIndex.Value -
                    (pFVar1->PackageName).ComparisonIndex.Value;
            if ((iVar7 == 0) &&
               (iVar7 = (pFVar12->PackageName).Number - (pFVar1->PackageName).Number, iVar7 == 0)) {
              bVar15 = pFVar12->Property < pFVar1->Property;
            }
            else {
              bVar15 = SUB41((uint)iVar7 >> 0x1f,0);
            }
            if (bVar15 != false) {
              pFVar12 = pFVar1;
            }
          }
          FVar2 = pFVar12->PackageName;
          EVar4 = pFVar12->Property;
          uVar5 = *(undefined3 *)&pFVar12->field_0x9;
          pFVar12->PackageName = pFVar8->PackageName;
          uVar3 = *(undefined3 *)&pFVar8->field_0x9;
          pFVar12->Property = pFVar8->Property;
          *(undefined3 *)&pFVar12->field_0x9 = uVar3;
          pFVar8->PackageName = FVar2;
          pFVar8->Property = EVar4;
          *(undefined3 *)&pFVar8->field_0x9 = uVar5;
        }
        goto LAB_142b43328;
      }
LAB_142b43319:
      local_348 = pFVar1;
      HeapSortInternal<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TDereferenceWrapper<FPackageDependencyData::FPackageDependency,FSortPackageDependency>_>
                (pFVar12,iVar7,param_3,param_4);
LAB_142b43328:
      ppFVar14 = ppFVar14 + -3;
    } while (&local_338 <= ppFVar14);
  }
  return;
code_r0x000142b431cc:
  iVar7 = (pFVar11->PackageName).ComparisonIndex.Value -
          (pFVar12->PackageName).ComparisonIndex.Value;
  if ((iVar7 == 0) &&
     (iVar7 = (pFVar11->PackageName).Number - pFVar13[1].PackageName.Number, iVar7 == 0)) {
    bVar15 = pFVar11->Property < pFVar13[1].Property;
  }
  else {
    bVar15 = SUB41((uint)iVar7 >> 0x1f,0);
  }
  if (bVar15 == false) goto LAB_142b431c0;
LAB_142b431f1:
  do {
    pFVar10 = pFVar9;
    pFVar9 = pFVar10 + -1;
    if (pFVar9 <= pFVar11) break;
    iVar7 = (pFVar9->PackageName).ComparisonIndex.Value -
            (pFVar11->PackageName).ComparisonIndex.Value;
    if ((iVar7 == 0) &&
       (iVar7 = pFVar10[-1].PackageName.Number - (pFVar11->PackageName).Number, iVar7 == 0)) {
      bVar15 = pFVar10[-1].Property < pFVar11->Property;
    }
    else {
      bVar15 = SUB41((uint)iVar7 >> 0x1f,0);
    }
  } while (bVar15 == false);
  if (pFVar12 <= pFVar9) {
    FVar2 = pFVar12->PackageName;
    EVar4 = pFVar13[1].Property;
    uVar5 = *(undefined3 *)&pFVar13[1].field_0x9;
    pFVar12->PackageName = pFVar9->PackageName;
    uVar3 = *(undefined3 *)&pFVar10[-1].field_0x9;
    pFVar13[1].Property = pFVar10[-1].Property;
    *(undefined3 *)&pFVar13[1].field_0x9 = uVar3;
    pFVar9->PackageName = FVar2;
    pFVar10[-1].Property = EVar4;
    *(undefined3 *)&pFVar10[-1].field_0x9 = uVar5;
    goto LAB_142b431c0;
  }
  EVar4 = pFVar11->Property;
  uVar5 = *(undefined3 *)&pFVar11->field_0x9;
  local_348._0_4_ = (int)local_348 + -1;
  FVar2 = pFVar11->PackageName;
  pFVar11->PackageName = pFVar9->PackageName;
  uVar3 = *(undefined3 *)&pFVar10[-1].field_0x9;
  pFVar11->Property = pFVar10[-1].Property;
  *(undefined3 *)&pFVar11->field_0x9 = uVar3;
  pFVar9->PackageName = FVar2;
  pFVar10[-1].Property = EVar4;
  *(undefined3 *)&pFVar10[-1].field_0x9 = uVar5;
  lVar6 = (longlong)pFVar9 + (-0xc - (longlong)pFVar11);
  lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
  if ((lVar6 >> 1) - (lVar6 >> 0x3f) < ((longlong)pFVar8 - (longlong)pFVar12) / 0xc) {
    if (pFVar12 < pFVar8) {
      *ppFVar14 = pFVar12;
      ppFVar14[1] = pFVar8;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar9 <= pFVar11 + 1) goto LAB_142b43328;
    pFVar8 = pFVar10 + -2;
    pFVar12 = pFVar11;
  }
  else {
    if (pFVar11 + 1 < pFVar9) {
      *ppFVar14 = pFVar11;
      ppFVar14[1] = pFVar10 + -2;
      *(int *)(ppFVar14 + 2) = (int)local_348;
      ppFVar14 = ppFVar14 + 3;
    }
    if (pFVar8 <= pFVar12) goto LAB_142b43328;
  }
  iVar7 = (int)(((longlong)pFVar8 - (longlong)pFVar12) / 0xc) + 1;
  pFVar11 = pFVar12;
  if ((int)local_348 == 0) goto LAB_142b43319;
  goto LAB_142b43170;
}

// IntroSortInternal<FDependsNode::FSaveScratch::FSortInfo,int,FIdentityFunctor,``FDependsNode::SerializeSave'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 142b43400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FDependsNode::FSaveScratch::FSortInfo,int,FIdentityFunctor,__FDependsNode::SerializeSave_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (FSortInfo *param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  FSortInfo *pFVar1;
  FSortInfo FVar2;
  int iVar3;
  FSortInfo *pFVar4;
  FSortInfo **ppFVar5;
  FSortInfo *pFVar6;
  FSortInfo *pFVar7;
  FSortInfo *pFVar8;
  FSortInfo *pFVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  FSortInfo *local_338;
  FSortInfo *local_328;
  FSortInfo *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppFVar5 = &local_328;
    do {
      pFVar8 = ppFVar5[1];
      pFVar4 = *ppFVar5;
      pFVar1 = ppFVar5[2];
      iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
      local_338._0_4_ = (int)pFVar1;
      pFVar9 = pFVar4;
      if ((int)local_338 != 0) {
LAB_142b434b0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          pFVar6 = pFVar8 + 1;
          FVar2 = pFVar9[iVar3 >> 1];
          pFVar9[iVar3 >> 1] = *pFVar9;
          *pFVar9 = FVar2;
          pFVar4 = pFVar9;
LAB_142b434e0:
          pFVar4 = pFVar4 + 1;
          if (pFVar4 <= pFVar8) goto code_r0x000142b434e9;
          goto LAB_142b434f0;
        }
        for (; pFVar4 = pFVar9, pFVar1 = pFVar9, pFVar9 < pFVar8; pFVar8 = pFVar8 + -1) {
          while (pFVar1 = pFVar1 + 1, pFVar1 <= pFVar8) {
            if (pFVar4->SerializeIndex < pFVar1->SerializeIndex) {
              pFVar4 = pFVar1;
            }
          }
          FVar2 = *pFVar4;
          *pFVar4 = *pFVar8;
          *pFVar8 = FVar2;
        }
        goto LAB_142b435ab;
      }
LAB_142b43599:
      local_338 = pFVar1;
      HeapSortInternal<FDependsNode::FSaveScratch::FSortInfo,int,FIdentityFunctor,__FDependsNode::SerializeSave_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                (pFVar4,iVar3,param_3,param_4);
LAB_142b435ab:
      ppFVar5 = ppFVar5 + -3;
    } while (&local_328 <= ppFVar5);
  }
  return;
code_r0x000142b434e9:
  if (pFVar4->SerializeIndex <= pFVar9->SerializeIndex) goto LAB_142b434e0;
LAB_142b434f0:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= pFVar9) break;
  } while (pFVar9->SerializeIndex <= pFVar6->SerializeIndex);
  if (pFVar4 <= pFVar6) {
    FVar2 = *pFVar4;
    *pFVar4 = *pFVar6;
    *pFVar6 = FVar2;
    goto LAB_142b434e0;
  }
  FVar2 = *pFVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *pFVar9 = *pFVar6;
  *pFVar6 = FVar2;
  if ((longlong)((longlong)pFVar6 + (-8 - (longlong)pFVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)pFVar8 - (longlong)pFVar4 & 0xfffffffffffffff8U)) {
    if (pFVar4 < pFVar8) {
      *ppFVar5 = pFVar4;
      ppFVar5[1] = pFVar8;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar6 <= pFVar9 + 1) goto LAB_142b435ab;
    pFVar8 = pFVar7 + -2;
    pFVar4 = pFVar9;
  }
  else {
    if (pFVar9 + 1 < pFVar6) {
      *ppFVar5 = pFVar9;
      ppFVar5[1] = pFVar7 + -2;
      *(int *)(ppFVar5 + 2) = (int)local_338;
      ppFVar5 = ppFVar5 + 3;
    }
    if (pFVar8 <= pFVar4) goto LAB_142b435ab;
  }
  iVar3 = (int)((longlong)pFVar8 - (longlong)pFVar4 >> 3) + 1;
  pFVar9 = pFVar4;
  if ((int)local_338 == 0) goto LAB_142b43599;
  goto LAB_142b434b0;
}

// IsSortedBy<unsigned_int,int,FIdentityFunctor,TLess<void>_> @ 142b43640

bool __cdecl
AlgoImpl::IsSortedBy<unsigned_int,int,FIdentityFunctor,TLess<void>_>
          (uint *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4)

{
  uint *puVar1;
  
  puVar1 = param_1;
  if (param_2 != 0) {
    while (param_2 = param_2 + -1, param_2 != 0) {
      if (puVar1[1] < *param_1) {
        return false;
      }
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return true;
}

// IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&> @ 142b43670

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>
          (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
           *param_1,FDependsNode *param_2,EDependencyCategory param_3,FDependencyQuery *param_4,
          EDependencyCategory param_5,EDependencyProperty param_6,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_7,
          TBitArray<FDefaultBitArrayAllocator> *param_8,
          _func___cdecl_EDependencyProperty_uchar *param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *local_58;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_50;
  EDependencyCategory *local_48;
  TBitArray<FDefaultBitArrayAllocator> **local_40;
  EDependencyProperty *local_38;
  _func___cdecl_EDependencyProperty_uchar **local_30;
  FDependencyQuery *local_28;
  
  pTVar3 = param_7;
  if ((param_5 & param_3) != None) {
    local_48 = &param_5;
    local_40 = &param_8;
    local_38 = &param_6;
    uVar7 = 0;
    iVar6 = 0;
    local_30 = &param_9;
    local_50 = param_7;
    local_58 = param_1;
    local_28 = param_4;
    if (param_10) {
      uVar5 = param_7->ArrayNum;
      pFVar1 = (param_7->AllocatorInstance).Data;
      uVar8 = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar10 = uVar8 >> 1;
          iVar6 = uVar10 + (int)uVar7;
          if (*(FDependsNode **)(pFVar1 + (longlong)iVar6 * 8) < param_2) {
            uVar7 = (ulonglong)(iVar6 + (uVar8 & 1));
          }
          iVar6 = (int)uVar7;
          uVar8 = uVar10;
        } while (uVar10 != 0);
      }
      if (((iVar6 < (int)uVar5) && (*(FDependsNode **)(pFVar1 + (longlong)iVar6 * 8) <= param_2)) &&
         (iVar6 != -1)) {
        `IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
        ::__l2::<lambda_1>::operator()(&local_58,iVar6);
      }
    }
    else {
      iVar6 = param_7->ArrayNum;
      uVar9 = uVar7;
      if (0 < (longlong)iVar6) {
        do {
          uVar8 = (uint)uVar9;
          uVar5 = 0;
          if ((int)uVar8 < pTVar3->ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(FDependsNode **)((pTVar3->AllocatorInstance).Data + uVar7 * 8) == param_2) {
            `IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
            ::__l2::<lambda_1>::operator()(&local_58,uVar8);
          }
          uVar7 = uVar7 + 1;
          uVar9 = (ulonglong)(uVar8 + 1);
        } while ((longlong)uVar7 < (longlong)iVar6);
      }
    }
  }
  return;
}

// IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&> @ 142b43800

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>
          (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
           *param_1,EDependencyCategory param_2,FDependencyQuery *param_3,
          EDependencyCategory param_4,EDependencyProperty param_5,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_6,
          TBitArray<FDefaultBitArrayAllocator> *param_7,
          _func___cdecl_EDependencyProperty_uchar *param_8,bool param_9)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  <lambda_1> local_48;
  
  if ((param_4 & param_2) != None) {
    uVar5 = 0;
    iVar4 = param_6->ArrayNum;
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_48.DependsNode = *(FDependsNode **)((param_6->AllocatorInstance).Data + lVar6);
        local_48.InCallback = param_1;
        local_48.ListCategory = param_4;
        EnumerateMatchingDependencyFlags<2,_IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l14::<lambda_1>_>
                  (param_7,param_5,param_8,uVar5,param_3,&local_48);
        iVar4 = param_6->ArrayNum;
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
  }
  return;
}

// IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&> @ 142b43930

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>
          (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
           *param_1,FDependsNode *param_2,EDependencyCategory param_3,FDependencyQuery *param_4,
          EDependencyCategory param_5,EDependencyProperty param_6,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_7,
          TBitArray<FDefaultBitArrayAllocator> *param_8,
          _func___cdecl_EDependencyProperty_uchar *param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *local_58;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_50;
  EDependencyCategory *local_48;
  TBitArray<FDefaultBitArrayAllocator> **local_40;
  EDependencyProperty *local_38;
  _func___cdecl_EDependencyProperty_uchar **local_30;
  FDependencyQuery *local_28;
  
  pTVar3 = param_7;
  if ((param_5 & param_3) != None) {
    local_48 = &param_5;
    local_40 = &param_8;
    local_38 = &param_6;
    uVar7 = 0;
    iVar6 = 0;
    local_30 = &param_9;
    local_50 = param_7;
    local_58 = param_1;
    local_28 = param_4;
    if (param_10) {
      uVar5 = param_7->ArrayNum;
      pFVar1 = (param_7->AllocatorInstance).Data;
      uVar8 = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar10 = uVar8 >> 1;
          iVar6 = uVar10 + (int)uVar7;
          if (*(FDependsNode **)(pFVar1 + (longlong)iVar6 * 8) < param_2) {
            uVar7 = (ulonglong)(iVar6 + (uVar8 & 1));
          }
          iVar6 = (int)uVar7;
          uVar8 = uVar10;
        } while (uVar10 != 0);
      }
      if (((iVar6 < (int)uVar5) && (*(FDependsNode **)(pFVar1 + (longlong)iVar6 * 8) <= param_2)) &&
         (iVar6 != -1)) {
        `IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
        ::__l2::<lambda_1>::operator()(&local_58,iVar6);
      }
    }
    else {
      iVar6 = param_7->ArrayNum;
      uVar9 = uVar7;
      if (0 < (longlong)iVar6) {
        do {
          uVar8 = (uint)uVar9;
          uVar5 = 0;
          if ((int)uVar8 < pTVar3->ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(FDependsNode **)((pTVar3->AllocatorInstance).Data + uVar7 * 8) == param_2) {
            `IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
            ::__l2::<lambda_1>::operator()(&local_58,uVar8);
          }
          uVar7 = uVar7 + 1;
          uVar9 = (ulonglong)(uVar8 + 1);
        } while ((longlong)uVar7 < (longlong)iVar6);
      }
    }
  }
  return;
}

// IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&> @ 142b43ac0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>
          (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
           *param_1,EDependencyCategory param_2,FDependencyQuery *param_3,
          EDependencyCategory param_4,EDependencyProperty param_5,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_6,
          TBitArray<FDefaultBitArrayAllocator> *param_7,
          _func___cdecl_EDependencyProperty_uchar *param_8,bool param_9)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  <lambda_1> local_48;
  
  if ((param_4 & param_2) != None) {
    uVar5 = 0;
    iVar4 = param_6->ArrayNum;
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_48.DependsNode = *(FDependsNode **)((param_6->AllocatorInstance).Data + lVar6);
        local_48.InCallback = param_1;
        local_48.ListCategory = param_4;
        EnumerateMatchingDependencyFlags<3,_IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l14::<lambda_1>_>
                  (param_7,param_5,param_8,uVar5,param_3,&local_48);
        iVar4 = param_6->ArrayNum;
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < iVar4);
    }
  }
  return;
}

// IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&> @ 142b43bf0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>
          (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
           *param_1,FDependsNode *param_2,EDependencyCategory param_3,FDependencyQuery *param_4,
          EDependencyCategory param_5,EDependencyProperty param_6,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_7,
          TBitArray<FDefaultBitArrayAllocator> *param_8,
          _func___cdecl_EDependencyProperty_uchar *param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
  *local_58;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_50;
  EDependencyCategory *local_48;
  TBitArray<FDefaultBitArrayAllocator> **local_40;
  EDependencyProperty *local_38;
  _func___cdecl_EDependencyProperty_uchar **local_30;
  FDependencyQuery *local_28;
  
  pTVar3 = param_7;
  if ((param_5 & param_3) != None) {
    local_48 = &param_5;
    local_40 = &param_8;
    local_38 = &param_6;
    uVar7 = 0;
    iVar6 = 0;
    local_30 = &param_9;
    local_50 = param_7;
    local_58 = param_1;
    local_28 = param_4;
    if (param_10) {
      uVar5 = param_7->ArrayNum;
      pFVar1 = (param_7->AllocatorInstance).Data;
      uVar8 = uVar5;
      if (0 < (int)uVar5) {
        do {
          uVar10 = uVar8 >> 1;
          iVar6 = uVar10 + (int)uVar7;
          if (*(FDependsNode **)(pFVar1 + (longlong)iVar6 * 8) < param_2) {
            uVar7 = (ulonglong)(iVar6 + (uVar8 & 1));
          }
          iVar6 = (int)uVar7;
          uVar8 = uVar10;
        } while (uVar10 != 0);
      }
      if (((iVar6 < (int)uVar5) && (*(FDependsNode **)(pFVar1 + (longlong)iVar6 * 8) <= param_2)) &&
         (iVar6 != -1)) {
        `IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
        ::__l2::<lambda_1>::operator()(&local_58,iVar6);
      }
    }
    else {
      iVar6 = param_7->ArrayNum;
      uVar9 = uVar7;
      if (0 < (longlong)iVar6) {
        do {
          uVar8 = (uint)uVar9;
          uVar5 = 0;
          if ((int)uVar8 < pTVar3->ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(FDependsNode **)((pTVar3->AllocatorInstance).Data + uVar7 * 8) == param_2) {
            `IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
            ::__l2::<lambda_1>::operator()(&local_58,uVar8);
          }
          uVar7 = uVar7 + 1;
          uVar9 = (ulonglong)(uVar8 + 1);
        } while ((longlong)uVar7 < (longlong)iVar6);
      }
    }
  }
  return;
}

// IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&> @ 142b43d80

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>
          (TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
           *param_1,EDependencyCategory param_2,FDependencyQuery *param_3,
          EDependencyCategory param_4,EDependencyProperty param_5,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_6,
          TBitArray<FDefaultBitArrayAllocator> *param_7,
          _func___cdecl_EDependencyProperty_uchar *param_8,bool param_9)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  EDependencyCategory local_38 [8];
  undefined8 local_30;
  
  if ((param_4 & param_2) != None) {
    uVar7 = 0;
    iVar6 = param_6->ArrayNum;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar7 < iVar6) {
          uVar3 = ~uVar7 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res10[0] = 0;
        local_res20[0] = 0;
        local_30 = *(undefined8 *)((param_6->AllocatorInstance).Data + lVar8);
        local_38[0] = param_4;
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar1 = *(code **)param_1;
        plVar5 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar5 = (longlong *)&param_1->field_0x10;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar1)(uVar4,&local_30,local_38,local_res20,local_res10);
        iVar6 = param_6->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < iVar6);
    }
  }
  return;
}

// IterateDependencyList<0,`FDependsNode::ContainsDependency'::__l11::<lambda_2>_> @ 142b43eb0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __cdecl
IterateDependencyList<0,_FDependsNode::ContainsDependency_::__l11::<lambda_2>_>
          (<lambda_2> *param_1,FDependsNode *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4,EDependencyCategory param_5,EDependencyProperty param_6,
          TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_7,
          TBitArray<FDefaultBitArrayAllocator> *param_8,
          _func___cdecl_EDependencyProperty_uchar *param_9,bool param_10)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  if ((param_5 & param_3) != None) {
    uVar7 = 0;
    uVar6 = 0;
    if (param_10) {
      uVar4 = param_7->ArrayNum;
      pFVar1 = (param_7->AllocatorInstance).Data;
      uVar8 = uVar4;
      if (0 < (int)uVar4) {
        do {
          uVar10 = uVar8 >> 1;
          iVar5 = uVar10 + (int)uVar7;
          if (*(FDependsNode **)(pFVar1 + (longlong)iVar5 * 8) < param_2) {
            uVar7 = (ulonglong)(iVar5 + (uVar8 & 1));
          }
          uVar6 = (uint)uVar7;
          uVar8 = uVar10;
        } while (uVar10 != 0);
      }
      if ((((int)uVar6 < (int)uVar4) &&
          (*(FDependsNode **)(pFVar1 + (longlong)(int)uVar6 * 8) <= param_2)) &&
         (uVar6 != 0xffffffff)) {
        if (((int)uVar6 < 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *param_1->bExists = true;
        return;
      }
    }
    else {
      iVar5 = param_7->ArrayNum;
      uVar9 = uVar7;
      if (0 < (longlong)iVar5) {
        do {
          uVar8 = (uint)uVar9;
          uVar4 = uVar6;
          if ((int)uVar8 < param_7->ArrayNum) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(FDependsNode **)((param_7->AllocatorInstance).Data + uVar7 * 8) == param_2) {
            uVar4 = 0;
            if ((int)uVar8 < param_7->ArrayNum) {
              uVar4 = ~uVar8 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *param_1->bExists = true;
          }
          uVar7 = uVar7 + 1;
          uVar9 = (ulonglong)(uVar8 + 1);
        } while ((longlong)uVar7 < (longlong)iVar5);
      }
    }
  }
  return;
}

// LowerBoundInternal<FDependsNode_*_const,int,FDependsNode_*,FIdentityFunctor,TLess<void>_> @ 142b440a0

int __cdecl
AlgoImpl::LowerBoundInternal<FDependsNode_*_const,int,FDependsNode_*,FIdentityFunctor,TLess<void>_>
          (FDependsNode **param_1,int param_2,FDependsNode **param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<FDependsNode_*_const,int,FDependsNode_const_*,FIdentityFunctor,TLess<void>_> @ 142b440f0

int __cdecl
AlgoImpl::
LowerBoundInternal<FDependsNode_*_const,int,FDependsNode_const_*,FIdentityFunctor,TLess<void>_>
          (FDependsNode **param_1,int param_2,FDependsNode **param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// RemoveAll<2> @ 142b44290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
RemoveAll<2>(TUniqueFunction<bool___cdecl(FDependsNode_const_*)> *param_1,
            TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_2,
            TBitArray<FDefaultBitArrayAllocator> *param_3,bool param_4,EAllowShrinking param_5)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 local_58;
  undefined8 local_50 [2];
  
  if ((param_3 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FlagWidth == 0 || FlagBits != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                         ,0x26c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = param_2->ArrayNum;
  uVar12 = (ulonglong)iVar14;
  if (param_4) {
    if (iVar14 != 0) {
      pFVar1 = (param_2->AllocatorInstance).Data;
      iVar19 = 0;
      iVar14 = 0;
      bVar4 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,bool___cdecl(FDependsNode_const_*)>
              ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,bool___cdecl(FDependsNode_const_*)>
                            *)param_1,*(FDependsNode **)pFVar1);
      bVar4 = !bVar4;
      lVar13 = 0;
      iVar15 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar16 = iVar15 + 1;
        if (lVar13 < (longlong)uVar12) {
          do {
            local_58 = *(undefined8 *)(pFVar1 + lVar13 * 8);
            UE::Core::Private::Function::CheckCallable(*(void **)param_1);
            pcVar3 = *(code **)param_1;
            plVar11 = *(longlong **)&param_1->field_0x28;
            if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
              plVar11 = (longlong *)&param_1->field_0x10;
            }
            uVar8 = (**(code **)(*plVar11 + 8))();
            cVar5 = (*pcVar3)(uVar8,&local_58);
            iVar19 = iVar14;
            if (bVar4 != (cVar5 == '\0')) break;
            iVar16 = iVar16 + 1;
            lVar13 = lVar13 + 1;
          } while (lVar13 < (longlong)uVar12);
        }
        iVar17 = iVar16 - iVar15;
        if (bVar4 != false) {
          if (iVar19 != iVar15) {
            memmove(pFVar1 + (longlong)iVar19 * 8,pFVar1 + (longlong)iVar15 * 8,
                    (longlong)iVar17 << 3);
            FVar2 = (param_3->AllocatorInstance).SecondaryData;
            iVar14 = iVar19 * 3;
            uVar18 = iVar17 * 3;
            FVar9 = (ForElementType<unsigned_int>)param_3;
            if (FVar2 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = FVar2;
            }
            if ((((iVar14 < 0) || ((int)uVar18 < 0)) || (param_3->NumBits < (int)(iVar14 + uVar18)))
               && (bVar6 = FDebug::CheckVerifyFailedImpl2
                                     ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x3bc,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((uVar18 != 0) && (FVar9 == (ForElementType<unsigned_int>)0x0)) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("NumBitsToSet == 0 || ReadBits != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x3bd,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar2 = (param_3->AllocatorInstance).SecondaryData;
            FVar10 = (ForElementType<unsigned_int>)param_3;
            if (FVar2 != (ForElementType<unsigned_int>)0x0) {
              FVar10 = FVar2;
            }
            FBitArrayMemory::MemmoveBitsWordOrder
                      ((uint *)FVar10,iVar14,(uint *)FVar9,iVar15 * 3,uVar18);
          }
          iVar19 = iVar19 + iVar17;
          iVar14 = iVar19;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar15 = iVar16;
      } while (lVar13 < (longlong)uVar12);
      TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar19,param_5);
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(param_3,iVar19 * 3);
    }
  }
  else {
    uVar18 = 0;
    if (0 < iVar14) {
      iVar14 = 0;
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar18 < (int)uVar12) {
          uVar7 = ~uVar18 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_50[0] = *(undefined8 *)((param_2->AllocatorInstance).Data + lVar13);
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar3 = *(code **)param_1;
        plVar11 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar11 = (longlong *)&param_1->field_0x10;
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        cVar5 = (*pcVar3)(uVar8,local_50);
        if (cVar5 == '\0') {
          uVar18 = uVar18 + 1;
          iVar14 = iVar14 + 3;
          lVar13 = lVar13 + 8;
        }
        else {
          uVar7 = 0;
          if ((int)uVar18 < param_2->ArrayNum) {
            uVar7 = ~uVar18 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data;
          iVar19 = ~uVar18 + param_2->ArrayNum;
          if (1 < iVar19) {
            iVar19 = 1;
          }
          if (iVar19 != 0) {
            memmove(pFVar1 + (longlong)(int)uVar18 * 8,
                    pFVar1 + (longlong)(param_2->ArrayNum - iVar19) * 8,(longlong)iVar19 << 3);
          }
          iVar19 = param_2->ArrayNum + -1;
          param_2->ArrayNum = iVar19;
          if (param_5 == Default) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&param_2->AllocatorInstance,iVar19,&param_2->ArrayMax);
          }
          TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(param_3,iVar14,3);
        }
        uVar12 = (ulonglong)(uint)param_2->ArrayNum;
      } while ((int)uVar18 < param_2->ArrayNum);
    }
  }
  return;
}

// RemoveAll<3> @ 142b446b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
RemoveAll<3>(TUniqueFunction<bool___cdecl(FDependsNode_const_*)> *param_1,
            TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_2,
            TBitArray<FDefaultBitArrayAllocator> *param_3,bool param_4,EAllowShrinking param_5)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 local_58;
  undefined8 local_50 [2];
  
  if ((param_3 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("FlagWidth == 0 || FlagBits != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                         ,0x26c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar14 = param_2->ArrayNum;
  uVar12 = (ulonglong)iVar14;
  if (param_4) {
    if (iVar14 != 0) {
      pFVar1 = (param_2->AllocatorInstance).Data;
      iVar19 = 0;
      iVar14 = 0;
      bVar4 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,bool___cdecl(FDependsNode_const_*)>
              ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,bool___cdecl(FDependsNode_const_*)>
                            *)param_1,*(FDependsNode **)pFVar1);
      bVar4 = !bVar4;
      lVar13 = 0;
      iVar15 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar16 = iVar15 + 1;
        if (lVar13 < (longlong)uVar12) {
          do {
            local_58 = *(undefined8 *)(pFVar1 + lVar13 * 8);
            UE::Core::Private::Function::CheckCallable(*(void **)param_1);
            pcVar3 = *(code **)param_1;
            plVar11 = *(longlong **)&param_1->field_0x28;
            if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
              plVar11 = (longlong *)&param_1->field_0x10;
            }
            uVar8 = (**(code **)(*plVar11 + 8))();
            cVar5 = (*pcVar3)(uVar8,&local_58);
            iVar19 = iVar14;
            if (bVar4 != (cVar5 == '\0')) break;
            iVar16 = iVar16 + 1;
            lVar13 = lVar13 + 1;
          } while (lVar13 < (longlong)uVar12);
        }
        iVar17 = iVar16 - iVar15;
        if (bVar4 != false) {
          if (iVar19 != iVar15) {
            memmove(pFVar1 + (longlong)iVar19 * 8,pFVar1 + (longlong)iVar15 * 8,
                    (longlong)iVar17 << 3);
            FVar2 = (param_3->AllocatorInstance).SecondaryData;
            iVar14 = iVar19 * 5;
            uVar18 = iVar17 * 5;
            FVar9 = (ForElementType<unsigned_int>)param_3;
            if (FVar2 != (ForElementType<unsigned_int>)0x0) {
              FVar9 = FVar2;
            }
            if ((((iVar14 < 0) || ((int)uVar18 < 0)) || (param_3->NumBits < (int)(iVar14 + uVar18)))
               && (bVar6 = FDebug::CheckVerifyFailedImpl2
                                     ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x3bc,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((uVar18 != 0) && (FVar9 == (ForElementType<unsigned_int>)0x0)) &&
               (bVar6 = FDebug::CheckVerifyFailedImpl2
                                  ("NumBitsToSet == 0 || ReadBits != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x3bd,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar2 = (param_3->AllocatorInstance).SecondaryData;
            FVar10 = (ForElementType<unsigned_int>)param_3;
            if (FVar2 != (ForElementType<unsigned_int>)0x0) {
              FVar10 = FVar2;
            }
            FBitArrayMemory::MemmoveBitsWordOrder
                      ((uint *)FVar10,iVar14,(uint *)FVar9,iVar15 * 5,uVar18);
          }
          iVar19 = iVar19 + iVar17;
          iVar14 = iVar19;
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar15 = iVar16;
      } while (lVar13 < (longlong)uVar12);
      TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar19,param_5);
      TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(param_3,iVar19 * 5);
    }
  }
  else {
    uVar18 = 0;
    if (0 < iVar14) {
      iVar14 = 0;
      lVar13 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar18 < (int)uVar12) {
          uVar7 = ~uVar18 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_50[0] = *(undefined8 *)((param_2->AllocatorInstance).Data + lVar13);
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar3 = *(code **)param_1;
        plVar11 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar11 = (longlong *)&param_1->field_0x10;
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        cVar5 = (*pcVar3)(uVar8,local_50);
        if (cVar5 == '\0') {
          uVar18 = uVar18 + 1;
          iVar14 = iVar14 + 5;
          lVar13 = lVar13 + 8;
        }
        else {
          uVar7 = 0;
          if ((int)uVar18 < param_2->ArrayNum) {
            uVar7 = ~uVar18 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data;
          iVar19 = ~uVar18 + param_2->ArrayNum;
          if (1 < iVar19) {
            iVar19 = 1;
          }
          if (iVar19 != 0) {
            memmove(pFVar1 + (longlong)(int)uVar18 * 8,
                    pFVar1 + (longlong)(param_2->ArrayNum - iVar19) * 8,(longlong)iVar19 << 3);
          }
          iVar19 = param_2->ArrayNum + -1;
          param_2->ArrayNum = iVar19;
          if (param_5 == Default) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&param_2->AllocatorInstance,iVar19,&param_2->ArrayMax);
          }
          TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(param_3,iVar14,5);
        }
        uVar12 = (ulonglong)(uint)param_2->ArrayNum;
      } while ((int)uVar18 < param_2->ArrayNum);
    }
  }
  return;
}

// RemoveAll<0> @ 142b44ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
RemoveAll<0>(TUniqueFunction<bool___cdecl(FDependsNode_const_*)> *param_1,
            TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_2,
            TBitArray<FDefaultBitArrayAllocator> *param_3,bool param_4,EAllowShrinking param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  int iStackX_18;
  undefined8 uStackX_20;
  undefined8 auStack_50 [2];
  
  if (!param_4) {
    TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<TUniqueFunction<bool___cdecl(FDependsNode_const_*)>_>(param_2,param_1,param_5);
    return;
  }
  lVar7 = (longlong)param_2->ArrayNum;
  if (param_2->ArrayNum == 0) {
    return;
  }
  iVar8 = 0;
  pFVar1 = (param_2->AllocatorInstance).Data;
  iVar11 = 0;
  uStackX_20 = *(undefined8 *)pFVar1;
  iStackX_18 = 0;
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar5 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar5 = *(longlong **)&param_1->field_0x28;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar2)(uVar4,&uStackX_20);
  bVar12 = cVar3 == '\0';
  lVar6 = 0;
  do {
    uStackX_20 = CONCAT44(uStackX_20._4_4_,iVar8);
    iVar9 = iVar8 + 1;
    lVar6 = lVar6 + 1;
    iVar10 = iVar8;
    if (lVar6 < lVar7) {
      do {
        auStack_50[0] = *(undefined8 *)(pFVar1 + lVar6 * 8);
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar2 = *(code **)param_1;
        plVar5 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar5 = (longlong *)&param_1->field_0x10;
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        cVar3 = (*pcVar2)(uVar4,auStack_50);
        if (bVar12 != (cVar3 == '\0')) break;
        iVar9 = iVar9 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar7);
      iVar11 = iStackX_18;
      iVar10 = (int)uStackX_20;
    }
    iVar8 = iVar9;
    if (bVar12 != false) {
      if (iVar11 != iVar10) {
        memmove(pFVar1 + (longlong)iVar11 * 8,pFVar1 + (longlong)iVar10 * 8,
                (longlong)(iVar8 - iVar10) << 3);
      }
      iVar11 = iVar11 + (iVar8 - iVar10);
      iStackX_18 = iVar11;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    if (lVar7 <= lVar6) {
      param_2->ArrayNum = iVar11;
      return;
    }
  } while( true );
}

// RemoveAllSwap<`FDependsNode::RefreshReferencers'::__l7::<lambda_2>_> @ 142b44cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

int __thiscall
TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_FDependsNode::RefreshReferencers_::__l7::<lambda_2>_>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *this,<lambda_2> *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_98 [32];
  FDependencyQuery local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_98;
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    iVar7 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      local_60.RequiredUnions.AllocatorInstance.SecondaryData =
           (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
      local_60.RequiredUnions.ArrayNum = 0;
      local_60.RequiredUnions.ArrayMax = 1;
      local_60.Required = None;
      local_60.Excluded = None;
      bVar4 = FDependsNode::ContainsDependency
                        (*(FDependsNode **)((this->AllocatorInstance).Data + lVar9),param_1->__this,
                         All,&local_60);
      if (local_60.RequiredUnions.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
        FMemory::Free((void *)local_60.RequiredUnions.AllocatorInstance.SecondaryData);
      }
      if (bVar4) {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      }
      else {
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar7 = ~uVar8 + this->ArrayNum;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar8 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar7) * 8,
                  (longlong)iVar7 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar7 = this->ArrayNum;
    } while ((int)uVar8 < iVar7);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar7,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// RemoveDependency<2> @ 142b45070

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
RemoveDependency<2>(FDependsNode *param_1,
                   TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_2,
                   TBitArray<FDefaultBitArrayAllocator> *param_3,bool param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  if ((param_3 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("FlagWidth == 0 || FlagBits != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                         ,0x1c2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = param_2->ArrayNum;
  if (param_4) {
    iVar9 = 0;
    uVar7 = uVar5;
    if (0 < (int)uVar5) {
      do {
        iVar6 = (uVar7 >> 1) + iVar9;
        if (*(FDependsNode **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) < param_1) {
          iVar9 = iVar6 + (uVar7 & 1);
        }
        uVar4 = uVar7 >> 1;
        uVar7 = uVar7 >> 1;
      } while (uVar4 != 0);
    }
    if (iVar9 < (int)uVar5) {
      if ((iVar9 < 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FDependsNode **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) == param_1) {
        TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::RemoveAt(param_2,iVar9,param_5);
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_3,iVar9 * 3,3);
        return;
      }
    }
  }
  else {
    uVar7 = 0;
    if (0 < (int)uVar5) {
      lVar8 = 0;
      iVar9 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < (int)uVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(FDependsNode **)((param_2->AllocatorInstance).Data + lVar8) == param_1) {
          uVar5 = 0;
          if ((int)uVar7 < param_2->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data;
          iVar6 = ~uVar7 + param_2->ArrayNum;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove(pFVar1 + (longlong)(int)uVar7 * 8,
                    pFVar1 + (longlong)(param_2->ArrayNum - iVar6) * 8,(longlong)iVar6 << 3);
          }
          iVar6 = param_2->ArrayNum + -1;
          param_2->ArrayNum = iVar6;
          if (param_5) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&param_2->AllocatorInstance,iVar6,&param_2->ArrayMax);
          }
          TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(param_3,iVar9,3);
        }
        else {
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 3;
          lVar8 = lVar8 + 8;
        }
        uVar5 = param_2->ArrayNum;
      } while ((int)uVar7 < (int)uVar5);
    }
  }
  return;
}

// RemoveDependency<3> @ 142b452f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
RemoveDependency<3>(FDependsNode *param_1,
                   TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_2,
                   TBitArray<FDefaultBitArrayAllocator> *param_3,bool param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  if ((param_3 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("FlagWidth == 0 || FlagBits != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                         ,0x1c2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = param_2->ArrayNum;
  if (param_4) {
    iVar9 = 0;
    uVar7 = uVar5;
    if (0 < (int)uVar5) {
      do {
        iVar6 = (uVar7 >> 1) + iVar9;
        if (*(FDependsNode **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) < param_1) {
          iVar9 = iVar6 + (uVar7 & 1);
        }
        uVar4 = uVar7 >> 1;
        uVar7 = uVar7 >> 1;
      } while (uVar4 != 0);
    }
    if (iVar9 < (int)uVar5) {
      if ((iVar9 < 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FDependsNode **)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) == param_1) {
        TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::RemoveAt(param_2,iVar9,param_5);
        TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_3,iVar9 * 5,5);
        return;
      }
    }
  }
  else {
    uVar7 = 0;
    if (0 < (int)uVar5) {
      lVar8 = 0;
      iVar9 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < (int)uVar5) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(FDependsNode **)((param_2->AllocatorInstance).Data + lVar8) == param_1) {
          uVar5 = 0;
          if ((int)uVar7 < param_2->ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data;
          iVar6 = ~uVar7 + param_2->ArrayNum;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove(pFVar1 + (longlong)(int)uVar7 * 8,
                    pFVar1 + (longlong)(param_2->ArrayNum - iVar6) * 8,(longlong)iVar6 << 3);
          }
          iVar6 = param_2->ArrayNum + -1;
          param_2->ArrayNum = iVar6;
          if (param_5) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&param_2->AllocatorInstance,iVar6,&param_2->ArrayMax);
          }
          TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap(param_3,iVar9,5);
        }
        else {
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 5;
          lVar8 = lVar8 + 8;
        }
        uVar5 = param_2->ArrayNum;
      } while ((int)uVar7 < (int)uVar5);
    }
  }
  return;
}

// RemoveDependency<0> @ 142b45570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
RemoveDependency<0>(FDependsNode *param_1,
                   TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_2,
                   TBitArray<FDefaultBitArrayAllocator> *param_3,bool param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = param_2->ArrayNum;
  uVar7 = 0;
  iVar6 = 0;
  if (param_4) {
    uVar4 = uVar5;
    if (0 < (int)uVar5) {
      do {
        uVar8 = uVar4 >> 1;
        iVar6 = uVar8 + (int)uVar7;
        if (*(FDependsNode **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) < param_1) {
          uVar7 = (ulonglong)(iVar6 + (uVar4 & 1));
        }
        iVar6 = (int)uVar7;
        uVar4 = uVar8;
      } while (uVar8 != 0);
    }
    if (iVar6 < (int)uVar5) {
      if ((iVar6 < 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(FDependsNode **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) == param_1) {
        TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::RemoveAt(param_2,iVar6,param_5);
        return;
      }
    }
  }
  else {
    uVar9 = uVar7;
    if (0 < (int)uVar5) {
      do {
        uVar8 = (uint)uVar7;
        uVar4 = 0;
        if ((int)uVar8 < (int)uVar5) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(FDependsNode **)((param_2->AllocatorInstance).Data + uVar9) == param_1) {
          uVar5 = 0;
          if ((int)uVar8 < param_2->ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_2->AllocatorInstance).Data;
          iVar6 = ~uVar8 + param_2->ArrayNum;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove(pFVar1 + (longlong)(int)uVar8 * 8,
                    pFVar1 + (longlong)(param_2->ArrayNum - iVar6) * 8,(longlong)iVar6 << 3);
          }
          iVar6 = param_2->ArrayNum + -1;
          param_2->ArrayNum = iVar6;
          if (param_5) {
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&param_2->AllocatorInstance,iVar6,&param_2->ArrayMax);
          }
        }
        else {
          uVar7 = (ulonglong)(uVar8 + 1);
          uVar9 = uVar9 + 8;
        }
        uVar5 = param_2->ArrayNum;
      } while ((int)uVar7 < (int)uVar5);
    }
  }
  return;
}

// Sort<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<`FPackageReader::ReadLinkerObjects'::__l2::<lambda_2>_>_> @ 142b485a0

void __thiscall
TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
::
Sort<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>
          (TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>
           *this,FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>
                 *param_1)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>
  *local_res8;
  
  local_res8 = param_1;
  if (0 < *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this);
    iVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    pTVar1 = *(TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_> **)&this->Elements;
    if (iVar4 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<80,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,FPackageReader::FObjectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FSoftObjectPath,FPackageReader::FObjectData>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_FPackageReader::ReadLinkerObjects_::__l2::<lambda_2>_>_>_>_>
              (pTVar1,iVar4,local_res8._0_1_,
               (FElementCompareClass<TSortableMapBase<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>::FKeyComparisonClass<_public:_bool___cdecl_FPackageReader::ReadLinkerObjects(TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FSoftObjectPath,FPackageReader::FObjectData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,FPackageReader::FObjectData,0>_>_&,TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_&)_::_2_::<lambda_2>_>_>
                *)&local_res8);
  }
  Rehash(this);
  return;
}

// SortDependencyList<2> @ 142b48630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
SortDependencyList<2>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,EAllowShrinking param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong64 uVar14;
  int iVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  longlong lVar23;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  FIdentityFunctor local_a8;
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack2> local_a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack2> local_90 [2];
  longlong local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar19 = param_1->ArrayNum;
  if (uVar19 != 0) {
    local_80 = (param_1->AllocatorInstance).Data;
    local_70 = param_1;
    if ((param_2 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Flags",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                           ,0x529,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_a0,uVar19,Default);
    lVar23 = (longlong)(int)uVar19;
    uVar21 = uVar18;
    local_78 = lVar23;
    if (0 < (int)uVar19) {
      do {
        uVar20 = (uint)uVar18;
        uVar10 = 0;
        if ((int)uVar20 < local_a0.ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(local_a0.AllocatorInstance.Data + uVar21 * 4) = uVar20;
        uVar18 = (ulonglong)(uVar20 + 1);
        uVar21 = uVar21 + 1;
      } while ((longlong)uVar21 < lVar23);
    }
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,_SortDependencyList<2>_::__l23::<lambda_1>_>
              ((int *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum,local_a8,
               (<lambda_1>)&local_80);
    local_b8.Data = (FScriptContainerElement *)0x0;
    uStack_b0._0_4_ = 0;
    uStack_b0._4_4_ = 0;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    iVar11 = 0x80;
    if (0 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar19,&local_b8,0,(int *)((longlong)&uStack_b0 + 4));
      iVar11 = local_68.MaxBits;
    }
    if (iVar11 < (int)(uVar19 * 3)) {
      uVar10 = iVar11 + 0x1fU >> 5;
      uVar19 = uVar19 * 3 + 0x1f >> 5;
      if (uVar19 < 5) {
        iVar11 = 4;
      }
      else {
        uVar21 = (ulonglong)uVar19;
        if (uVar10 < 5) {
          uVar10 = 0;
        }
        if (uVar10 == 0) {
          uVar18 = 4;
          if (4 < uVar21) {
            uVar18 = uVar21;
          }
        }
        else {
          uVar18 = ((ulonglong)uVar19 * 3 >> 3) + 0x10 + uVar21;
        }
        uVar14 = FMemory::QuantizeSize(uVar18 * 4,0);
        iVar11 = (int)(uVar14 >> 2);
        if (iVar11 < (int)uVar19) {
          iVar11 = 0x7fffffff;
        }
      }
      local_68.MaxBits = iVar11 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,local_68.NumBits);
    }
    if ((local_a0.ArrayNum < 1) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)local_a0.AllocatorInstance.Data;
    pFVar2 = local_80 + (longlong)iVar11 * 8;
    if (((local_b8.Data <= pFVar2) && (pFVar2 < local_b8.Data + (longlong)uStack_b0._4_4_ * 8)) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((int)uStack_b0 == uStack_b0._4_4_) {
      uStack_b0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_b8,(int *)((longlong)&uStack_b0 + 4));
    }
    lVar16 = (longlong)(int)uStack_b0;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
    *(undefined8 *)(local_b8.Data + lVar16 * 8) = *(undefined8 *)pFVar2;
    TBitArray<FDefaultBitArrayAllocator>::AddRange<FDefaultBitArrayAllocator>
              (&local_68,param_2,3,iVar11 * 3);
    uVar19 = 1;
    if (1 < lVar23) {
      lVar16 = 1;
      do {
        uVar10 = 0;
        if ((int)uVar19 < local_a0.ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = *(int *)(local_a0.AllocatorInstance.Data + lVar16 * 4);
        local_88 = *(longlong *)(local_80 + (longlong)iVar11 * 8);
        uVar10 = 0;
        if ((int)((int)uStack_b0 - 1U) < (int)uStack_b0) {
          uVar10 = ~((int)uStack_b0 - 1U) >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_88 == *(longlong *)(local_b8.Data + (longlong)((int)uStack_b0 + -1) * 8)) {
          iVar12 = (int)uStack_b0 * 3;
          iVar15 = iVar12 + -3;
          local_a4.Storage = 0;
          if (((iVar15 < 0) || (local_68.NumBits < iVar12)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3df,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_68.AllocatorInstance.SecondaryData;
          }
          FBitArrayMemory::MemmoveBitsWordOrder(&local_a4.Storage,0,(uint *)FVar17,iVar15,3);
          iVar11 = iVar11 * 3;
          local_90[0].Storage = 0;
          if (((iVar11 < 0) || (param_2->NumBits < iVar11 + 3)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3df,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (param_2->AllocatorInstance).SecondaryData;
          FVar22 = (ForElementType<unsigned_int>)param_2;
          if (FVar17 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = FVar17;
          }
          FBitArrayMemory::MemmoveBitsWordOrder(&local_90[0].Storage,0,(uint *)FVar22,iVar11,3);
          TPropertyCombinationSetHardcoded<FPropertyCombinationPack2>::AddRange(&local_a4,local_90);
          if (((iVar15 < 0) || (local_68.NumBits < iVar12)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bc,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_68.AllocatorInstance.SecondaryData;
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar17,iVar15,&local_a4.Storage,0,3);
        }
        else {
          iVar12 = (int)uStack_b0;
          if ((local_b8.Data <= (FScriptContainerElement *)&local_88) &&
             ((FScriptContainerElement *)&local_88 < local_b8.Data + (longlong)uStack_b0._4_4_ * 8))
          {
            bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar12 = (int)uStack_b0;
          }
          if (iVar12 == uStack_b0._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b8,(int *)((longlong)&uStack_b0 + 4));
          }
          uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar12 + 1);
          iVar11 = iVar11 * 3;
          *(longlong *)(local_b8.Data + (longlong)iVar12 * 8) = local_88;
          if (((iVar11 < 0) || (param_2->NumBits < iVar11 + 3)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x298,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar12 = local_68.NumBits;
          if (local_68.NumBits == 0) {
            iVar15 = -1;
          }
          else {
            iVar15 = (int)((local_68.NumBits + -1 >> 0x1f & 0x1fU) + local_68.NumBits + -1) >> 5;
          }
          iVar1 = local_68.NumBits + 3;
          if ((int)(local_68.NumBits + 2 + (local_68.NumBits + 2 >> 0x1f & 0x1fU)) >> 5 == iVar15) {
            local_68.NumBits = iVar1;
            iVar15 = iVar1;
          }
          else {
            if (local_68.MaxBits < iVar1) {
              uVar10 = local_68.MaxBits + 0x1fU >> 5;
              uVar20 = local_68.NumBits + 0x22U >> 5;
              if (uVar20 < 5) {
                iVar15 = 4;
                iVar13 = local_68.NumBits;
              }
              else {
                uVar21 = (ulonglong)uVar20;
                if (uVar10 < 5) {
                  uVar10 = 0;
                }
                if (uVar10 == 0) {
                  uVar18 = 4;
                  if (4 < uVar21) {
                    uVar18 = uVar21;
                  }
                }
                else {
                  uVar18 = ((ulonglong)uVar20 * 3 >> 3) + 0x10 + uVar21;
                }
                uVar14 = FMemory::QuantizeSize(uVar18 * 4,0);
                iVar15 = (int)(uVar14 >> 2);
                if (iVar15 < (int)uVar20) {
                  iVar15 = 0x7fffffff;
                }
                iVar13 = local_68.NumBits;
              }
              local_68.MaxBits = iVar15 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,iVar13);
            }
            iVar15 = local_68.NumBits + 3;
            local_68.NumBits = iVar15;
            uVar20 = iVar15 >> 0x1f & 0x1f;
            uVar10 = iVar15 + uVar20;
            iVar13 = (uVar10 & 0x1f) - uVar20;
            if (iVar13 != 0) {
              FVar17 = (ForElementType<unsigned_int>)&local_68;
              if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_68.AllocatorInstance.SecondaryData;
              }
              puVar3 = (uint *)((longlong)FVar17 + (longlong)((int)uVar10 >> 5) * 4);
              *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
              iVar15 = local_68.NumBits;
            }
          }
          if (((iVar12 < 0) || (iVar15 < iVar1)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3cf,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((iVar11 < 0) || (param_2->NumBits < iVar11 + 3)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3d0,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (param_2->AllocatorInstance).SecondaryData;
          FVar22 = (ForElementType<unsigned_int>)param_2;
          if (FVar17 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = FVar17;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_68.AllocatorInstance.SecondaryData;
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar17,iVar12,(uint *)FVar22,iVar11,3);
          lVar23 = local_78;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 1;
        param_1 = local_70;
      } while (lVar16 < lVar23);
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar6._0_4_ = param_1->ArrayNum;
    uVar6._4_4_ = param_1->ArrayMax;
    (param_1->AllocatorInstance).Data = local_b8.Data;
    param_1->ArrayNum = (int)uStack_b0;
    param_1->ArrayMax = uStack_b0._4_4_;
    FVar17 = (param_2->AllocatorInstance).SecondaryData;
    uVar5._0_4_ = param_2->NumBits;
    uVar5._4_4_ = param_2->MaxBits;
    uVar7 = *(undefined8 *)(param_2->AllocatorInstance).InlineData;
    uVar8 = *(undefined8 *)((param_2->AllocatorInstance).InlineData + 8);
    *(undefined8 *)(param_2->AllocatorInstance).InlineData =
         local_68.AllocatorInstance.InlineData._0_8_;
    *(undefined8 *)((param_2->AllocatorInstance).InlineData + 8) =
         local_68.AllocatorInstance.InlineData._8_8_;
    (param_2->AllocatorInstance).SecondaryData = local_68.AllocatorInstance.SecondaryData;
    param_2->NumBits = local_68.NumBits;
    param_2->MaxBits = local_68.MaxBits;
    local_b8.Data = pFVar2;
    uStack_b0 = uVar6;
    local_68.AllocatorInstance.InlineData._0_8_ = uVar7;
    local_68.AllocatorInstance.InlineData._8_8_ = uVar8;
    local_68.AllocatorInstance.SecondaryData = FVar17;
    local_68._24_8_ = uVar5;
    if (FVar17 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  return;
}

// SortDependencyList<3> @ 142b48e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
SortDependencyList<3>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,EAllowShrinking param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong64 uVar14;
  int iVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  longlong lVar23;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  FIdentityFunctor local_a8;
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> local_a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TPropertyCombinationSetHardcoded<FPropertyCombinationPack3> local_90 [2];
  longlong local_88;
  FScriptContainerElement *local_80;
  longlong local_78;
  TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  uVar19 = param_1->ArrayNum;
  if (uVar19 != 0) {
    local_80 = (param_1->AllocatorInstance).Data;
    local_70 = param_1;
    if ((param_2 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Flags",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNode.cpp"
                           ,0x529,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar18 = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_a0,uVar19,Default);
    lVar23 = (longlong)(int)uVar19;
    uVar21 = uVar18;
    local_78 = lVar23;
    if (0 < (int)uVar19) {
      do {
        uVar20 = (uint)uVar18;
        uVar10 = 0;
        if ((int)uVar20 < local_a0.ArrayNum) {
          uVar10 = ~uVar20 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(uint *)(local_a0.AllocatorInstance.Data + uVar21 * 4) = uVar20;
        uVar18 = (ulonglong)(uVar20 + 1);
        uVar21 = uVar21 + 1;
      } while ((longlong)uVar21 < lVar23);
    }
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,_SortDependencyList<3>_::__l23::<lambda_1>_>
              ((int *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum,local_a8,
               (<lambda_1>)&local_80);
    local_b8.Data = (FScriptContainerElement *)0x0;
    uStack_b0._0_4_ = 0;
    uStack_b0._4_4_ = 0;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = 0;
    local_68.MaxBits = 0x80;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    iVar11 = 0x80;
    if (0 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar19,&local_b8,0,(int *)((longlong)&uStack_b0 + 4));
      iVar11 = local_68.MaxBits;
    }
    if (iVar11 < (int)(uVar19 * 5)) {
      uVar10 = iVar11 + 0x1fU >> 5;
      uVar19 = uVar19 * 5 + 0x1f >> 5;
      if (uVar19 < 5) {
        iVar11 = 4;
      }
      else {
        uVar21 = (ulonglong)uVar19;
        if (uVar10 < 5) {
          uVar10 = 0;
        }
        if (uVar10 == 0) {
          uVar18 = 4;
          if (4 < uVar21) {
            uVar18 = uVar21;
          }
        }
        else {
          uVar18 = ((ulonglong)uVar19 * 3 >> 3) + 0x10 + uVar21;
        }
        uVar14 = FMemory::QuantizeSize(uVar18 * 4,0);
        iVar11 = (int)(uVar14 >> 2);
        if (iVar11 < (int)uVar19) {
          iVar11 = 0x7fffffff;
        }
      }
      local_68.MaxBits = iVar11 << 5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,local_68.NumBits);
    }
    if ((local_a0.ArrayNum < 1) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = *(int *)local_a0.AllocatorInstance.Data;
    pFVar2 = local_80 + (longlong)iVar11 * 8;
    if (((local_b8.Data <= pFVar2) && (pFVar2 < local_b8.Data + (longlong)uStack_b0._4_4_ * 8)) &&
       (bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((int)uStack_b0 == uStack_b0._4_4_) {
      uStack_b0._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_b8,(int *)((longlong)&uStack_b0 + 4));
    }
    lVar16 = (longlong)(int)uStack_b0;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
    *(undefined8 *)(local_b8.Data + lVar16 * 8) = *(undefined8 *)pFVar2;
    TBitArray<FDefaultBitArrayAllocator>::AddRange<FDefaultBitArrayAllocator>
              (&local_68,param_2,5,iVar11 * 5);
    uVar19 = 1;
    if (1 < lVar23) {
      lVar16 = 1;
      do {
        uVar10 = 0;
        if ((int)uVar19 < local_a0.ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = *(int *)(local_a0.AllocatorInstance.Data + lVar16 * 4);
        local_88 = *(longlong *)(local_80 + (longlong)iVar11 * 8);
        uVar10 = 0;
        if ((int)((int)uStack_b0 - 1U) < (int)uStack_b0) {
          uVar10 = ~((int)uStack_b0 - 1U) >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (local_88 == *(longlong *)(local_b8.Data + (longlong)((int)uStack_b0 + -1) * 8)) {
          iVar12 = (int)uStack_b0 * 5;
          iVar15 = iVar12 + -5;
          local_a4.Storage = 0;
          if (((iVar15 < 0) || (local_68.NumBits < iVar12)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3df,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_68.AllocatorInstance.SecondaryData;
          }
          FBitArrayMemory::MemmoveBitsWordOrder(&local_a4.Storage,0,(uint *)FVar17,iVar15,5);
          iVar11 = iVar11 * 5;
          local_90[0].Storage = 0;
          if (((iVar11 < 0) || (param_2->NumBits < iVar11 + 5)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToGet >= 0 && Index + NumBitsToGet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3df,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (param_2->AllocatorInstance).SecondaryData;
          FVar22 = (ForElementType<unsigned_int>)param_2;
          if (FVar17 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = FVar17;
          }
          FBitArrayMemory::MemmoveBitsWordOrder(&local_90[0].Storage,0,(uint *)FVar22,iVar11,5);
          TPropertyCombinationSetHardcoded<FPropertyCombinationPack3>::AddRange(&local_a4,local_90);
          if (((iVar15 < 0) || (local_68.NumBits < iVar12)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3bc,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_68.AllocatorInstance.SecondaryData;
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar17,iVar15,&local_a4.Storage,0,5);
        }
        else {
          iVar12 = (int)uStack_b0;
          if ((local_b8.Data <= (FScriptContainerElement *)&local_88) &&
             ((FScriptContainerElement *)&local_88 < local_b8.Data + (longlong)uStack_b0._4_4_ * 8))
          {
            bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar12 = (int)uStack_b0;
          }
          if (iVar12 == uStack_b0._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b8,(int *)((longlong)&uStack_b0 + 4));
          }
          uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar12 + 1);
          iVar11 = iVar11 * 5;
          *(longlong *)(local_b8.Data + (longlong)iVar12 * 8) = local_88;
          if (((iVar11 < 0) || (param_2->NumBits < iVar11 + 5)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToAdd <= ReadBits.NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x298,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar12 = local_68.NumBits;
          if (local_68.NumBits == 0) {
            iVar15 = -1;
          }
          else {
            iVar15 = (int)((local_68.NumBits + -1 >> 0x1f & 0x1fU) + local_68.NumBits + -1) >> 5;
          }
          iVar1 = local_68.NumBits + 5;
          if ((int)(local_68.NumBits + 4 + (local_68.NumBits + 4 >> 0x1f & 0x1fU)) >> 5 == iVar15) {
            local_68.NumBits = iVar1;
            iVar15 = iVar1;
          }
          else {
            if (local_68.MaxBits < iVar1) {
              uVar10 = local_68.MaxBits + 0x1fU >> 5;
              uVar20 = local_68.NumBits + 0x24U >> 5;
              if (uVar20 < 5) {
                iVar15 = 4;
                iVar13 = local_68.NumBits;
              }
              else {
                uVar21 = (ulonglong)uVar20;
                if (uVar10 < 5) {
                  uVar10 = 0;
                }
                if (uVar10 == 0) {
                  uVar18 = 4;
                  if (4 < uVar21) {
                    uVar18 = uVar21;
                  }
                }
                else {
                  uVar18 = ((ulonglong)uVar20 * 3 >> 3) + 0x10 + uVar21;
                }
                uVar14 = FMemory::QuantizeSize(uVar18 * 4,0);
                iVar15 = (int)(uVar14 >> 2);
                if (iVar15 < (int)uVar20) {
                  iVar15 = 0x7fffffff;
                }
                iVar13 = local_68.NumBits;
              }
              local_68.MaxBits = iVar15 << 5;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,iVar13);
            }
            iVar15 = local_68.NumBits + 5;
            local_68.NumBits = iVar15;
            uVar20 = iVar15 >> 0x1f & 0x1f;
            uVar10 = iVar15 + uVar20;
            iVar13 = (uVar10 & 0x1f) - uVar20;
            if (iVar13 != 0) {
              FVar17 = (ForElementType<unsigned_int>)&local_68;
              if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_68.AllocatorInstance.SecondaryData;
              }
              puVar3 = (uint *)((longlong)FVar17 + (longlong)((int)uVar10 >> 5) * 4);
              *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar13 & 0x1f);
              iVar15 = local_68.NumBits;
            }
          }
          if (((iVar12 < 0) || (iVar15 < iVar1)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0 && NumBitsToSet >= 0 && Index + NumBitsToSet <= NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3cf,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((iVar11 < 0) || (param_2->NumBits < iVar11 + 5)) &&
             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                ("0 <= ReadOffsetBits && ReadOffsetBits + NumBitsToSet <= ReadBits.NumBits"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x3d0,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar17 = (param_2->AllocatorInstance).SecondaryData;
          FVar22 = (ForElementType<unsigned_int>)param_2;
          if (FVar17 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = FVar17;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_68.AllocatorInstance.SecondaryData;
          }
          FBitArrayMemory::MemmoveBitsWordOrder((uint *)FVar17,iVar12,(uint *)FVar22,iVar11,5);
          lVar23 = local_78;
        }
        uVar19 = uVar19 + 1;
        lVar16 = lVar16 + 1;
        param_1 = local_70;
      } while (lVar16 < lVar23);
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar6._0_4_ = param_1->ArrayNum;
    uVar6._4_4_ = param_1->ArrayMax;
    (param_1->AllocatorInstance).Data = local_b8.Data;
    param_1->ArrayNum = (int)uStack_b0;
    param_1->ArrayMax = uStack_b0._4_4_;
    FVar17 = (param_2->AllocatorInstance).SecondaryData;
    uVar5._0_4_ = param_2->NumBits;
    uVar5._4_4_ = param_2->MaxBits;
    uVar7 = *(undefined8 *)(param_2->AllocatorInstance).InlineData;
    uVar8 = *(undefined8 *)((param_2->AllocatorInstance).InlineData + 8);
    *(undefined8 *)(param_2->AllocatorInstance).InlineData =
         local_68.AllocatorInstance.InlineData._0_8_;
    *(undefined8 *)((param_2->AllocatorInstance).InlineData + 8) =
         local_68.AllocatorInstance.InlineData._8_8_;
    (param_2->AllocatorInstance).SecondaryData = local_68.AllocatorInstance.SecondaryData;
    param_2->NumBits = local_68.NumBits;
    param_2->MaxBits = local_68.MaxBits;
    local_b8.Data = pFVar2;
    uStack_b0 = uVar6;
    local_68.AllocatorInstance.InlineData._0_8_ = uVar7;
    local_68.AllocatorInstance.InlineData._8_8_ = uVar8;
    local_68.AllocatorInstance.SecondaryData = FVar17;
    local_68._24_8_ = uVar5;
    if (FVar17 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar17);
    }
    if (local_b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data);
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  return;
}

// SortDependencyList<0> @ 142b49630

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
SortDependencyList<0>
          (TArray<FDependsNode_*,TSizedDefaultAllocator<32>_> *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,EAllowShrinking param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FIdentityFunctor local_18;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 != 0) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if ((iVar1 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::IntroSortInternal<FDependsNode_*,int,FIdentityFunctor,TLess<void>_>
              ((FDependsNode **)pFVar2,iVar1,local_18,(TLess<void>)local_18);
    iVar9 = iVar1 + -1;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = uVar5;
    if (0 < iVar9) {
      do {
        uVar6 = (uint)uVar7;
        if (*(longlong *)(pFVar2 + uVar5 * 8) == *(longlong *)(pFVar2 + (uVar5 + 1) * 8)) break;
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while ((longlong)uVar5 < (longlong)iVar9);
    }
    if ((int)uVar6 < iVar9) {
      iVar9 = uVar6 + 1;
      lVar8 = (longlong)(int)(uVar6 + 2);
      if (lVar8 < iVar1) {
        pFVar10 = pFVar2 + (longlong)iVar9 * 8;
        do {
          if (*(longlong *)(pFVar2 + lVar8 * 8) != *(longlong *)(pFVar10 + -8)) {
            iVar9 = iVar9 + 1;
            *(longlong *)pFVar10 = *(longlong *)(pFVar2 + lVar8 * 8);
            pFVar10 = pFVar10 + 8;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar1);
      }
      TArray<FDependsNode_*,TSizedDefaultAllocator<32>_>::SetNum(param_1,iVar9,param_3);
    }
  }
  return;
}

// Unique<TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_>_&> @ 142b4db70

int __cdecl
Algo::Unique<TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_>_&>
          (TArray<FPackageDependencyData::FPackageDependency,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = param_1->ArrayNum;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (1 < iVar5) {
    pFVar6 = pFVar1;
    pFVar3 = pFVar1;
    while (pFVar4 = pFVar3, pFVar2 = pFVar6, pFVar3 = pFVar4 + 0xc,
          pFVar3 != pFVar1 + (longlong)iVar5 * 0xc) {
      if (((*(longlong *)pFVar2 != *(longlong *)pFVar3) ||
          (pFVar6 = pFVar2, pFVar2[8] != pFVar4[0x14])) && (pFVar6 = pFVar2 + 0xc, pFVar6 != pFVar3)
         ) {
        *(longlong *)pFVar6 = *(longlong *)pFVar3;
        *(undefined4 *)(pFVar2 + 0x14) = *(undefined4 *)(pFVar4 + 0x14);
      }
    }
    iVar5 = (int)((longlong)(pFVar2 + (0xc - (longlong)pFVar1)) / 0xc);
  }
  return iVar5;
}

// Unique<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TEqualTo<void>_> @ 142b4dbf0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

int __cdecl
AlgoImpl::Unique<FPackageDependencyData::FPackageDependency,int,FIdentityFunctor,TEqualTo<void>_>
          (FPackageDependency *param_1,int param_2,FIdentityFunctor param_3,TEqualTo<void> param_4)

{
  FPackageDependency *pFVar1;
  FPackageDependency *pFVar2;
  undefined3 uVar3;
  FPackageDependency *pFVar4;
  FPackageDependency *pFVar5;
  
  if (1 < param_2) {
    pFVar5 = param_1;
    pFVar4 = param_1;
    while (pFVar2 = pFVar4, pFVar1 = pFVar5, pFVar4 = pFVar2 + 1, pFVar4 != param_1 + param_2) {
      if (((pFVar1->PackageName != pFVar4->PackageName) ||
          (pFVar5 = pFVar1, pFVar1->Property != pFVar2[1].Property)) &&
         (pFVar5 = pFVar1 + 1, pFVar5 != pFVar4)) {
        pFVar5->PackageName = pFVar4->PackageName;
        uVar3 = *(undefined3 *)&pFVar2[1].field_0x9;
        pFVar1[1].Property = pFVar2[1].Property;
        *(undefined3 *)&pFVar1[1].field_0x9 = uVar3;
      }
    }
    param_2 = (int)(((longlong)pFVar1 + (0xc - (longlong)param_1)) / 0xc);
  }
  return param_2;
}

// WriteToString<1035,FString_&,wchar_t_const_(&)[2],FString_&,wchar_t_const_(&)[2],FString_&> @ 142b4dc90

TStringBuilderWithBuffer<wchar_t,1035> * __cdecl
WriteToString<1035,FString_&,wchar_t_const_(&)[2],FString_&,wchar_t_const_(&)[2],FString_&>
          (TStringBuilderWithBuffer<wchar_t,1035> *__return_storage_ptr__,FString *param_1,
          wchar_t (*param_2) [2],FString *param_3,wchar_t (*param_4) [2],FString *param_5)

{
  int iVar1;
  TStringBuilderBase<wchar_t> *pTVar2;
  size_t sVar3;
  int iVar4;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)&__return_storage_ptr__->field_0x836;
  iVar1 = (param_1->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pTVar2 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                      (wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar4);
  iVar4 = 0;
  if (param_2 != (wchar_t (*) [2])0x0) {
    sVar3 = wcslen(*param_2);
    iVar4 = (int)sVar3;
  }
  pTVar2 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar2,*param_2,iVar4);
  iVar1 = (param_3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  pTVar2 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar2,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar4);
  iVar4 = 0;
  if (param_4 != (wchar_t (*) [2])0x0) {
    sVar3 = wcslen(*param_4);
    iVar4 = (int)sVar3;
  }
  pTVar2 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar2,*param_4,iVar4);
  iVar1 = (param_5->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (pTVar2,(wchar_t *)(param_5->Data).AllocatorInstance.Data,iVar4);
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l76::<lambda_10>,1,1> @ 142b4ed30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l76::<lambda_10>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l76::<lambda_10>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`76'::<lambda_10>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l79::<lambda_12>,1,1> @ 142b4ed50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l79::<lambda_12>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l79::<lambda_12>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`79'::<lambda_12>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l82::<lambda_15>,1,1> @ 142b4ed70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l82::<lambda_15>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l82::<lambda_15>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`82'::<lambda_15>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l89::<lambda_18>,1,1> @ 142b4ed90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l89::<lambda_18>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l89::<lambda_18>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`89'::<lambda_18>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l106::<lambda_19>,1,0> @ 142b4edb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l106::<lambda_19>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l106::<lambda_19>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`106'::<lambda_19>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FPackageReader::ConvertLinkerTableToPaths'::__l2::<lambda_1>,0,1> @ 142b4edd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPackageReader::ConvertLinkerTableToPaths'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FPackageReader::ConvertLinkerTableToPaths_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPackageReader::ConvertLinkerTableToPaths'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0> @ 142b4edf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDependsNode::GetDependencies_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0> @ 142b4ee10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDependsNode::GetDependencies_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0> @ 142b4ee30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDependsNode::GetDependencies_::__l2::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNode::GetReferencers'::__l6::<lambda_1>,1,0> @ 142b4ee50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetReferencers'::__l6::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDependsNode::GetReferencers_::__l6::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetReferencers'::`6'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNode::GetReferencers'::__l9::<lambda_1>,1,0> @ 142b4ee70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetReferencers'::__l9::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDependsNode::GetReferencers_::__l9::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetReferencers'::`9'::<lambda_1>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNode::PrintDependenciesRecursive'::__l47::<lambda_1>,1,0> @ 142b4ee90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::PrintDependenciesRecursive'::__l47::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FDependsNode::PrintDependenciesRecursive_::__l47::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::PrintDependenciesRecursive'::`47'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l107::<lambda_20>,1,0> @ 142b4eeb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l107::<lambda_20>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l107::<lambda_20>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`107'::<lambda_20>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l109::<lambda_21>,1,1> @ 142b4eed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l109::<lambda_21>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l109::<lambda_21>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`109'::<lambda_21>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l109::<lambda_22>,1,1> @ 142b4eef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l109::<lambda_22>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l109::<lambda_22>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`109'::<lambda_22>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l110::<lambda_23>,1,1> @ 142b4ef10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l110::<lambda_23>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l110::<lambda_23>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`110'::<lambda_23>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l111::<lambda_24>,1,1> @ 142b4ef30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l111::<lambda_24>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l111::<lambda_24>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`111'::<lambda_24>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_25>,1,0> @ 142b4ef50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_25>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l112::<lambda_25>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_25>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_26>,1,0> @ 142b4ef70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_26>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l112::<lambda_26>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_26>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_27>,1,0> @ 142b4ef90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_27>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l112::<lambda_27>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_27>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_28>,1,0> @ 142b4efb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_28>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l112::<lambda_28>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_28>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_29>,1,0> @ 142b4efd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_29>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l112::<lambda_29>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_29>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l59::<lambda_2>,1,1> @ 142b4eff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l59::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l59::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`59'::<lambda_2>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l116::<lambda_30>,1,0> @ 142b4f010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l116::<lambda_30>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l116::<lambda_30>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`116'::<lambda_30>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l116::<lambda_31>,1,0> @ 142b4f030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l116::<lambda_31>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l116::<lambda_31>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`116'::<lambda_31>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'[::M]::<lambda_34>,1,1> @ 142b4f050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'[::M]::<lambda_34>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_[::M]::<lambda_34>,1,1>(void *this)

{
  *(undefined ***)this = &_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l176::<lambda_36>,1,1> @ 142b4f070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l176::<lambda_36>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l176::<lambda_36>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`176'::<lambda_36>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_37>,1,1> @ 142b4f090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_37>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l189::<lambda_37>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_37>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_38>,1,1> @ 142b4f0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_38>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l189::<lambda_38>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_38>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_39>,1,1> @ 142b4f0d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_39>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l189::<lambda_39>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_39>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_40>,1,0> @ 142b4f0f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_40>,1,0>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l189::<lambda_40>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_40>,1,0>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l67::<lambda_5>,1,1> @ 142b4f110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l67::<lambda_5>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l67::<lambda_5>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`67'::<lambda_5>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l75::<lambda_8>,1,1> @ 142b4f130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l75::<lambda_8>,1,1>::
~TFunction_OwnedObject<_FDependsNodeTest::RunTest_::__l75::<lambda_8>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`75'::<lambda_8>,1,1>::_vftable_;
  return;
}

// operator<< @ 142b4f590

FArchive * __cdecl operator<<(FArchive *param_1,FAssetIdentifier *param_2)

{
  longlong *plVar1;
  byte local_res8 [8];
  FName local_res18;
  
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 4) != 0) {
    local_res8[0] =
         -(param_2->ValueName != (FName)0x0) & 8U | -(param_2->ObjectName != (FName)0x0) & 4U |
         param_2->PackageName != (FName)0x0 | -((param_2->PrimaryAssetType).Name != (FName)0x0) & 2U
    ;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if ((local_res8[0] & 1) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,param_2);
  }
  if ((local_res8[0] & 2) != 0) {
    local_res18 = (param_2->PrimaryAssetType).Name;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res18);
    if ((param_1->field_0x28 & 1) != 0) {
      (param_2->PrimaryAssetType).Name = local_res18;
    }
  }
  if ((local_res8[0] & 4) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->ObjectName);
  }
  if ((local_res8[0] & 8) != 0) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->ValueName);
  }
  return param_1;
}

// operator() @ 142b4ffe0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_1> local_28;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.InCallback =
       *(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
         **)this;
  local_28.DependsNode = *(FDependsNode **)(*plVar1 + (longlong)param_1 * 8);
  local_28.ListCategory = **(EDependencyCategory **)((longlong)this + 0x10);
  EnumerateMatchingDependencyFlags<2,__IterateDependencyList<2,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)**(undefined8 **)((longlong)this + 0x18),
             **(EDependencyProperty **)((longlong)this + 0x20),
             (_func___cdecl_EDependencyProperty_uchar *)**(undefined8 **)((longlong)this + 0x28),
             param_1,*(FDependencyQuery **)((longlong)this + 0x30),&local_28);
  return;
}

// operator() @ 142b500b0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`IterateDependencyList<2,`FDependsNode::ContainsDependency'::__l17::<lambda_3>_>'::__l2::<lambda_1>
::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_1> local_28;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.InCallback = *(<lambda_3> **)this;
  local_28.DependsNode = *(FDependsNode **)(*plVar1 + (longlong)param_1 * 8);
  local_28.ListCategory = **(EDependencyCategory **)((longlong)this + 0x10);
  EnumerateMatchingDependencyFlags<2,__IterateDependencyList<2,_FDependsNode::ContainsDependency_::__l17::<lambda_3>_>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)**(undefined8 **)((longlong)this + 0x18),
             **(EDependencyProperty **)((longlong)this + 0x20),
             (_func___cdecl_EDependencyProperty_uchar *)**(undefined8 **)((longlong)this + 0x28),
             param_1,*(FDependencyQuery **)((longlong)this + 0x30),&local_28);
  return;
}

// operator() @ 142b50180

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_1> local_28;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.InCallback =
       *(TUniqueFunction<void___cdecl(FDependsNode_*,UE::AssetRegistry::EDependencyCategory,UE::AssetRegistry::EDependencyProperty,bool)>
         **)this;
  local_28.DependsNode = *(FDependsNode **)(*plVar1 + (longlong)param_1 * 8);
  local_28.ListCategory = **(EDependencyCategory **)((longlong)this + 0x10);
  EnumerateMatchingDependencyFlags<3,__IterateDependencyList<3,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)**(undefined8 **)((longlong)this + 0x18),
             **(EDependencyProperty **)((longlong)this + 0x20),
             (_func___cdecl_EDependencyProperty_uchar *)**(undefined8 **)((longlong)this + 0x28),
             param_1,*(FDependencyQuery **)((longlong)this + 0x30),&local_28);
  return;
}

// operator() @ 142b50250

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`IterateDependencyList<3,`FDependsNode::ContainsDependency'::__l5::<lambda_1>_>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  <lambda_1> local_28;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_28.InCallback = *(<lambda_1> **)this;
  local_28.DependsNode = *(FDependsNode **)(*plVar1 + (longlong)param_1 * 8);
  local_28.ListCategory = **(EDependencyCategory **)((longlong)this + 0x10);
  EnumerateMatchingDependencyFlags<3,__IterateDependencyList<3,_FDependsNode::ContainsDependency_::__l5::<lambda_1>_>_::__l2::<lambda_1>::operator()_::__l7::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)**(undefined8 **)((longlong)this + 0x18),
             **(EDependencyProperty **)((longlong)this + 0x20),
             (_func___cdecl_EDependencyProperty_uchar *)**(undefined8 **)((longlong)this + 0x28),
             param_1,*(FDependencyQuery **)((longlong)this + 0x30),&local_28);
  return;
}

// operator() @ 142b50320

void __thiscall
`IterateDependencyList<0,TUniqueFunction<void___cdecl(FDependsNode_*,enum_UE::AssetRegistry::EDependencyCategory,enum_UE::AssetRegistry::EDependencyProperty,bool)>_const_&>'
::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  plVar7 = *(longlong **)((longlong)this + 8);
  puVar2 = *(undefined8 **)this;
  uVar1 = **(undefined1 **)((longlong)this + 0x10);
  uVar5 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res10[0] = 0;
  local_res8[0] = 0;
  local_res20 = *(undefined8 *)(*plVar7 + (longlong)param_1 * 8);
  local_res18[0] = uVar1;
  UE::Core::Private::Function::CheckCallable((void *)*puVar2);
  pcVar3 = (code *)*puVar2;
  plVar7 = puVar2 + 2;
  if ((longlong *)puVar2[5] != (longlong *)0x0) {
    plVar7 = (longlong *)puVar2[5];
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(uVar6,&local_res20,local_res18,local_res8,local_res10);
  return;
}

// `scalar_deleting_destructor' @ 142b53030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l76::<lambda_10>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`76'::<lambda_10>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l79::<lambda_12>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`79'::<lambda_12>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b530b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l82::<lambda_15>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`82'::<lambda_15>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b530f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l89::<lambda_18>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`89'::<lambda_18>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l106::<lambda_19>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`106'::<lambda_19>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPackageReader::ConvertLinkerTableToPaths'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPackageReader::ConvertLinkerTableToPaths'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b531b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b531f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetDependencies'::__l2::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetDependencies'::`2'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetReferencers'::__l6::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetReferencers'::`6'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b532b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::GetReferencers'::__l9::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::GetReferencers'::`9'::<lambda_1>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b532f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNode::PrintDependenciesRecursive'::__l47::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNode::PrintDependenciesRecursive'::`47'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l107::<lambda_20>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`107'::<lambda_20>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l109::<lambda_21>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`109'::<lambda_21>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b533b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l109::<lambda_22>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`109'::<lambda_22>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b533f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l110::<lambda_23>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`110'::<lambda_23>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l111::<lambda_24>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`111'::<lambda_24>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_25>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_25>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b534b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_26>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_26>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b534f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_27>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_27>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_28>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_28>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l112::<lambda_29>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`112'::<lambda_29>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b535b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l59::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`59'::<lambda_2>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b535f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l116::<lambda_30>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`116'::<lambda_30>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l116::<lambda_31>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`116'::<lambda_31>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'[::M]::<lambda_34>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b536b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l176::<lambda_36>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`176'::<lambda_36>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b536f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_37>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_37>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_38>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_38>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_39>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_39>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b537b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l189::<lambda_40>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`189'::<lambda_40>,1,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b537f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l67::<lambda_5>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`67'::<lambda_5>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDependsNodeTest::RunTest'::__l75::<lambda_8>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FDependsNodeTest::RunTest'::`75'::<lambda_8>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53870

void * __thiscall
UE::AssetRegistry::FNameMapAwareArchive::_scalar_deleting_destructor_
          (FNameMapAwareArchive *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NameMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchiveProxy::~FArchiveProxy((FArchiveProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b538c0

void * __thiscall
FNameTableArchiveReader::_scalar_deleting_destructor_(FNameTableArchiveReader *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NameMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b53910

void * __thiscall
FNonBufferingReadOnlyArchive::_scalar_deleting_destructor_
          (FNonBufferingReadOnlyArchive *this,uint param_1)

{
  IFileHandle *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FNonBufferingReadOnlyArchive__6B_;
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (this->Handle).Ptr = (IFileHandle *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  FWindowsPlatformMemory::BinnedFreeToOS(this->Buffer,this->BufferSize);
  pIVar1 = (this->Handle).Ptr;
  if (pIVar1 != (IFileHandle *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar2 = (this->Filename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142b539c0

void * __thiscall FPackageReader::_scalar_deleting_destructor_(FPackageReader *this,uint param_1)

{
  FArchive *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPackageReader__6B_;
  pFVar1 = this->Loader;
  if ((pFVar1 != (FArchive *)0x0) && (this->bLoaderOwner != false)) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->ThumbnailMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FGatherableTextData,int>
            ((FGatherableTextData *)(this->GatherableTextDataMap).AllocatorInstance.Data,
             (this->GatherableTextDataMap).ArrayNum);
  pFVar2 = (this->GatherableTextDataMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->SoftObjectPathMap).AllocatorInstance.Data,
             (this->SoftObjectPathMap).ArrayNum);
  pFVar2 = (this->SoftObjectPathMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SoftPackageReferenceList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
             (this->DependsMap).AllocatorInstance.Data,(this->DependsMap).ArrayNum);
  pFVar2 = (this->DependsMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ExportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ImportMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NameMap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPackageFileSummary::~FPackageFileSummary(&this->PackageFileSummary);
  pFVar2 = (this->PackageFilename).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LongPackageName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a8);
  }
  return this;
}

// LexToString @ 142b5bda0

wchar_t * __cdecl LexToString(EOpenPackageResult param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Success:
    return L"Success";
  case NoLoader:
    return L"NoLoader";
  case MalformedTag:
    return L"MalformedTag";
  case VersionTooOld:
    return L"VersionTooOld";
  case VersionTooNew:
    return L"VersionTooNew";
  case CustomVersionMissing:
    return L"CustomVersionMissing";
  case CustomVersionInvalid:
    return L"CustomVersionInvalid";
  case Unversioned:
    return L"Unversioned";
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\PackageReader.cpp"
                     ,0x27,L"LexToString unimplemented for EOpenPackageResult %d");
  if (!bVar2) {
    return L"UNKNOWN";
  }
  pcVar1 = (code *)swi(3);
  pwVar3 = (wchar_t *)(*pcVar1)();
  return pwVar3;
}

// `dynamic_atexit_destructor_for_'FDependsNodeTestAutomationTestInstance'' @ 15035e4c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FDependsNodeTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FDependsNodeTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEnumerateAssetsPerformanceAutomationTestInstance'' @ 15035e4e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FEnumerateAssetsPerformanceAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEnumerateAssetsPerformanceAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FPropertyCombinationSetTestSubClassAutomationTestInstance'' @ 15035e500

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FPropertyCombinationSetTestSubClassAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FPropertyCombinationSetTestSubClassAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FSetKeyFuncsTestInstance'' @ 15035e520

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__FSetKeyFuncsTestInstance__(void)

{
  if (FSetKeyFuncsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FSetKeyFuncsTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FSetKeyFuncsTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GNameTableErrorArchive'' @ 15035e550

void __cdecl _dynamic_atexit_destructor_for__GNameTableErrorArchive__(void)

{
  FArchive::~FArchive((FArchive *)&GNameTableErrorArchive);
  return;
}

