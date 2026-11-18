// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 23

// GetTestFlags @ 142b32170

EAutomationTestFlags __thiscall FDependsNodeTest::GetTestFlags(FDependsNodeTest *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 142b32180

bool __thiscall FDependsNodeTest::IsStressTest(FDependsNodeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142b32190

uint __thiscall FDependsNodeTest::GetRequiredDeviceNum(FDependsNodeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142b321a0

FString * __thiscall
FDependsNodeTest::GetTestSourceFileName(FDependsNodeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\DependsNodeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142b321d0

int __thiscall FDependsNodeTest::GetTestSourceFileLine(FDependsNodeTest *this)

{
  return 0xc;
}

// GetTests @ 142b321e0

/* WARNING: Removing unreachable block (ram,0x000142b322cd) */
/* WARNING: Removing unreachable block (ram,0x000142b32398) */

void __thiscall
FDependsNodeTest::GetTests
          (FDependsNodeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.AssetRegistry.DependsNode");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// GetBeautifiedTestName @ 142b39c00

FString * __thiscall
FDependsNodeTest::GetBeautifiedTestName(FDependsNodeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.AssetRegistry.DependsNode");
  return __return_storage_ptr__;
}

// <lambda_21> @ 142b4dd90

<lambda_21> * __thiscall
`FDependsNodeTest::RunTest'::__l109::<lambda_21>::<lambda_21>
          (void *this,FDependsNodeTest *param_1,FDependsNode *param_2,int *param_3,bool *param_4,
          bool *param_5)

{
  *(bool **)((longlong)this + 0x18) = param_4;
  *(bool **)((longlong)this + 0x20) = param_5;
  *(FDependsNodeTest **)this = param_1;
  *(FDependsNode **)((longlong)this + 8) = param_2;
  *(int **)((longlong)this + 0x10) = param_3;
  return this;
}

// <lambda_22> @ 142b4ddc0

<lambda_22> * __thiscall
`FDependsNodeTest::RunTest'::__l109::<lambda_22>::<lambda_22>
          (void *this,FDependsNodeTest *param_1,FDependsNode *param_2,int *param_3,bool *param_4,
          bool *param_5)

{
  *(bool **)((longlong)this + 0x18) = param_4;
  *(bool **)((longlong)this + 0x20) = param_5;
  *(FDependsNodeTest **)this = param_1;
  *(FDependsNode **)((longlong)this + 8) = param_2;
  *(int **)((longlong)this + 0x10) = param_3;
  return this;
}

// <lambda_24> @ 142b4ddf0

<lambda_24> * __thiscall
`FDependsNodeTest::RunTest'::__l111::<lambda_24>::<lambda_24>
          (void *this,FDependsNodeTest *param_1,FDependsNode *param_2,int *param_3,bool *param_4,
          bool *param_5)

{
  *(bool **)((longlong)this + 0x18) = param_4;
  *(bool **)((longlong)this + 0x20) = param_5;
  *(FDependsNodeTest **)this = param_1;
  *(FDependsNode **)((longlong)this + 8) = param_2;
  *(int **)((longlong)this + 0x10) = param_3;
  return this;
}

// operator() @ 142b4fc00

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l76::<lambda_10>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"IterateDependencies SearchableName Category",
             param_2 == SearchableName);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  this_00 = *(FAutomationTestBase **)this;
  if (param_1 == (FDependsNode *)(*(longlong *)((longlong)this + 0x10) + 0x1f8)) {
    if ((param_3 != None) || (param_4)) {
      FAutomationTestBase::TestTrue(this_00,L"IterateDependencies SearchableName",false);
    }
    else {
      FAutomationTestBase::TestTrue(this_00,L"IterateDependencies SearchableName",true);
    }
  }
  else {
    pcVar1 = *(code **)(this_00->_padding_ + 0x28);
    ::FString::FString(&local_18,L"IterateDependencies SearchableName");
    (*pcVar1)(this_00,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 142b4fcd0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l79::<lambda_12>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  longlong lVar1;
  FAutomationTestBase *this_00;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"IterateDependencies Manage, no flags, Category",
             param_2 == Manage);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  if (param_1 == (FDependsNode *)(lVar1 + 0x2a0)) {
    if ((param_3 == ManageMask) && (!param_4)) {
      FAutomationTestBase::TestTrue
                (*(FAutomationTestBase **)this,L"IterateDependencies Manage, no flags",true);
      return;
    }
    FAutomationTestBase::TestTrue
              (*(FAutomationTestBase **)this,L"IterateDependencies Manage, no flags",false);
    return;
  }
  this_00 = *(FAutomationTestBase **)this;
  if (param_1 == (FDependsNode *)(lVar1 + 0x348)) {
    bVar3 = param_3 == Direct;
  }
  else {
    if (param_1 != (FDependsNode *)(lVar1 + 0x3f0)) {
      pcVar2 = *(code **)(this_00->_padding_ + 0x28);
      ::FString::FString(&local_18,L"IterateDependencies Manage, no flags");
      (*pcVar2)(this_00,&local_18,0);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return;
    }
    bVar3 = param_3 == None;
  }
  if ((bVar3) && (!param_4)) {
    FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Manage, no flags",true);
    return;
  }
  FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Manage, no flags",false);
  return;
}

// operator() @ 142b4fe20

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l82::<lambda_15>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"IterateDependencies Manage, Direct, Category",
             param_2 == Manage);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  this_00 = *(FAutomationTestBase **)this;
  if (param_1 == (FDependsNode *)(*(longlong *)((longlong)this + 0x10) + 0x2a0)) {
    bVar2 = param_3 == ManageMask;
  }
  else {
    if (param_1 != (FDependsNode *)(*(longlong *)((longlong)this + 0x10) + 0x348)) {
      pcVar1 = *(code **)(this_00->_padding_ + 0x28);
      ::FString::FString(&local_18,L"IterateDependencies Manage, Direct");
      (*pcVar1)(this_00,&local_18,0);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
    bVar2 = param_3 == Direct;
  }
  if ((!bVar2) || (param_4)) {
    FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Manage, Direct",false);
  }
  else {
    FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Manage, Direct",true);
  }
  return;
}

// operator() @ 142b4ff10

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l89::<lambda_18>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"IterateDependencies Manage, Indirect, Category",
             param_2 == Manage);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  this_00 = *(FAutomationTestBase **)this;
  if (param_1 == (FDependsNode *)(*(longlong *)((longlong)this + 0x10) + 0x3f0)) {
    if ((param_3 != None) || (param_4)) {
      FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Manage, Indirect",false);
    }
    else {
      FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Manage, Indirect",true);
    }
  }
  else {
    pcVar1 = *(code **)(this_00->_padding_ + 0x28);
    ::FString::FString(&local_18,L"IterateDependencies Manage, Indirect");
    (*pcVar1)(this_00,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 142b527a0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l109::<lambda_21>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  char cVar1;
  bool bVar2;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies two property corners only two elements",
             **(int **)((longlong)this + 0x10) < 2);
  if (((param_1 == *(FDependsNode **)((longlong)this + 8)) && (param_2 == Package)) &&
     ((byte)(param_3 - Hard) < 2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies two property corners expected values",bVar2);
  if ((**(int **)((longlong)this + 0x10) == 0) || (param_4)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies two property corners bDuplicate is set correctly",bVar2);
  if ((**(char **)((longlong)this + 0x18) == '\0') && (param_3 != Game)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x18) = cVar1;
  if ((**(char **)((longlong)this + 0x20) == '\0') && (param_3 != Hard)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x20) = cVar1;
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  return;
}

// operator() @ 142b52880

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l109::<lambda_22>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  char cVar1;
  bool bVar2;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies two property corners, node-specific, only two elements",
             **(int **)((longlong)this + 0x10) < 2);
  if (((param_1 == *(FDependsNode **)((longlong)this + 8)) && (param_2 == Package)) &&
     ((byte)(param_3 - Hard) < 2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies two property corners, node-specific, expected values",bVar2);
  if ((**(int **)((longlong)this + 0x10) == 0) || (param_4)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies two property corners, node-specific, bDuplicate is set correctly"
             ,bVar2);
  if ((**(char **)((longlong)this + 0x18) == '\0') && (param_3 != Game)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x18) = cVar1;
  if ((**(char **)((longlong)this + 0x20) == '\0') && (param_3 != Hard)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x20) = cVar1;
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  return;
}

// operator() @ 142b52960

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l110::<lambda_23>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  bool bVar1;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies redundant corner only one element",
             **(int **)((longlong)this + 0x10) < 1);
  if (((param_1 == *(FDependsNode **)((longlong)this + 8)) && (param_2 == Package)) &&
     (param_3 == (Game|Hard))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies redundant corner expected values",bVar1);
  if ((**(int **)((longlong)this + 0x10) == 0) || (param_4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,
             L"IterateOverDependencies redundant corner bDuplicate is set correctly",bVar1);
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  return;
}

// operator() @ 142b52a10

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l111::<lambda_24>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  char cVar1;
  bool bVar2;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"AddPackageDependencySet only two elements",
             **(int **)((longlong)this + 0x10) < 2);
  if (((param_1 == *(FDependsNode **)((longlong)this + 8)) && (param_2 == Package)) &&
     ((byte)(param_3 - Hard) < 2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"AddPackageDependencySets expected values",bVar2);
  if ((**(char **)((longlong)this + 0x18) == '\0') && (param_3 != Game)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x18) = cVar1;
  if ((**(char **)((longlong)this + 0x20) == '\0') && (param_3 != Hard)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x20) = cVar1;
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  return;
}

// operator() @ 142b52ad0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l59::<lambda_2>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  FDependsNode *pFVar1;
  FAutomationTestBase *this_00;
  code *pcVar2;
  bool bVar3;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"IterateDependencies Package, no flags, Category",
             param_2 == Package);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  pFVar1 = *(FDependsNode **)((longlong)this + 0x10);
  if (param_1 == pFVar1) {
    if ((param_3 == PackageMask) && (!param_4)) {
      FAutomationTestBase::TestTrue
                (*(FAutomationTestBase **)this,L"IterateDependencies Package, no flags",true);
      return;
    }
    FAutomationTestBase::TestTrue
              (*(FAutomationTestBase **)this,L"IterateDependencies Package, no flags",false);
    return;
  }
  this_00 = *(FAutomationTestBase **)this;
  if (param_1 == pFVar1 + 1) {
    bVar3 = param_3 == Hard;
  }
  else {
    if (param_1 != pFVar1 + 2) {
      pcVar2 = *(code **)(this_00->_padding_ + 0x28);
      ::FString::FString(&local_18,L"IterateDependencies Package, no flags");
      (*pcVar2)(this_00,&local_18,0);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      return;
    }
    bVar3 = param_3 == None;
  }
  if ((bVar3) && (!param_4)) {
    FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Package, no flags",true);
    return;
  }
  FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Package, no flags",false);
  return;
}

// operator() @ 142b52c20

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l176::<lambda_36>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  undefined8 *puVar1;
  FAutomationTestBase *this_00;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  FDependsNode *local_res8;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  this_00 = *(FAutomationTestBase **)this;
  local_res8 = param_1;
  UE::Core::Private::Function::CheckCallable((void *)*puVar1);
  pcVar2 = (code *)*puVar1;
  plVar5 = puVar1 + 2;
  if ((longlong *)puVar1[5] != (longlong *)0x0) {
    plVar5 = (longlong *)puVar1[5];
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar2)(uVar4,&local_res8);
  FAutomationTestBase::TestTrue
            (this_00,L"RemoveLinks removes all requested referencers",cVar3 == '\0');
  if (*(char *)((longlong)this + 0x18) == '\x01') {
    lVar6 = *(longlong *)((longlong)this + 0x28);
  }
  else {
    if (*(char *)((longlong)this + 0x18) != '\x02') goto LAB_142b52ce7;
    lVar6 = *(longlong *)((longlong)this + 0x30);
  }
  if (lVar6 != 0) {
    lVar7 = (longlong)param_1 - **(longlong **)((longlong)this + 0x10);
    lVar7 = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(lVar7),8) + lVar7;
    FAutomationTestBase::TestTrue
              (*(FAutomationTestBase **)this,L"RemoveLinks keeps the proper properties",
               param_3 ==
               *(EDependencyProperty *)(((int)(lVar7 >> 7) - (int)(lVar7 >> 0x3f)) + lVar6));
  }
LAB_142b52ce7:
  **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
  return;
}

// operator() @ 142b52d10

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l189::<lambda_39>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  char cVar1;
  bool bVar2;
  
  if ((**(char **)((longlong)this + 0x10) == '\0') && (param_2 != Package)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x10) = cVar1;
  if ((**(char **)((longlong)this + 0x20) == '\0') && (param_2 != SearchableName)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x20) = cVar1;
  if ((**(char **)((longlong)this + 0x18) == '\0') && (param_2 != Manage)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  **(char **)((longlong)this + 0x18) = cVar1;
  if (((param_2 - Package & 0xfc) == 0) && (param_2 != (Manage|Package))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"Serialize - ADependencies - Category one at a time",
             bVar2);
  if ((param_1 == *(FDependsNode **)((longlong)this + 0x28)) && (param_3 == None)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"Serialize - ADependencies - Expected values",bVar2);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  return;
}

// operator() @ 142b52de0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l67::<lambda_5>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  bool bVar2;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"IterateDependencies Package, Hard, Category",
             param_2 == Package);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  this_00 = *(FAutomationTestBase **)this;
  if (param_1 == *(FDependsNode **)((longlong)this + 0x10)) {
    bVar2 = param_3 == PackageMask;
  }
  else {
    if (param_1 != *(FDependsNode **)((longlong)this + 0x10) + 1) {
      pcVar1 = *(code **)(this_00->_padding_ + 0x28);
      ::FString::FString(&local_18,L"IterateDependencies Package, Hard");
      (*pcVar1)(this_00,&local_18,0);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
    bVar2 = param_3 == Hard;
  }
  if ((!bVar2) || (param_4)) {
    FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Package, Hard",false);
  }
  else {
    FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Package, Hard",true);
  }
  return;
}

// operator() @ 142b52ec0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
`FDependsNodeTest::RunTest'::__l75::<lambda_8>::operator()
          (void *this,FDependsNode *param_1,EDependencyCategory param_2,EDependencyProperty param_3,
          bool param_4)

{
  FAutomationTestBase *this_00;
  code *pcVar1;
  FString local_18;
  
  FAutomationTestBase::TestTrue
            (*(FAutomationTestBase **)this,L"IterateDependencies Package, Soft, Category",
             param_2 == Package);
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  this_00 = *(FAutomationTestBase **)this;
  if (param_1 == (FDependsNode *)(*(longlong *)((longlong)this + 0x10) + 0x150)) {
    if ((param_3 != None) || (param_4)) {
      FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Package, Soft",false);
    }
    else {
      FAutomationTestBase::TestTrue(this_00,L"IterateDependencies Package, Soft",true);
    }
  }
  else {
    pcVar1 = *(code **)(this_00->_padding_ + 0x28);
    ::FString::FString(&local_18,L"IterateDependencies Package, Soft");
    (*pcVar1)(this_00,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

