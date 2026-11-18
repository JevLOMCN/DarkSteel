// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// GetTestFlags @ 141ac9f00

EAutomationTestFlags __thiscall FDirectoryTreeAPITests::GetTestFlags(FDirectoryTreeAPITests *this)

{
  return this->TestFlags;
}

// IsStressTest @ 141ac9f10

bool __thiscall FDirectoryTreeAPITests::IsStressTest(FDirectoryTreeAPITests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141ac9f20

uint __thiscall FDirectoryTreeAPITests::GetRequiredDeviceNum(FDirectoryTreeAPITests *this)

{
  return 1;
}

// GetTestSourceFileName @ 141ac9f30

FString * __thiscall
FDirectoryTreeAPITests::GetTestSourceFileName
          (FDirectoryTreeAPITests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\DirectoryTreeTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141ac9fb0

int __thiscall FDirectoryTreeAPITests::GetTestSourceFileLine(FDirectoryTreeAPITests *this)

{
  return 0x1e;
}

// GetTests @ 141ac9fc0

/* WARNING: Removing unreachable block (ram,0x000141aca13e) */

void __thiscall
FDirectoryTreeAPITests::GetTests
          (FDirectoryTreeAPITests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  pFVar1 = &this->PrettyNameDotNotation;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (((pFVar5 <= pFVar1) && (pFVar1 < pFVar5 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 0x10),pFVar1)
  ;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_18 = 0;
  local_10 = 0;
  if (((pFVar5 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar5 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(undefined8 *)pFVar5 = local_18;
  *(undefined4 *)(pFVar5 + 8) = (undefined4)local_10;
  *(undefined4 *)(pFVar5 + 0xc) = local_10._4_4_;
  return;
}

// RunTest @ 141aca170

bool __thiscall FDirectoryTreeAPITests::RunTest(FDirectoryTreeAPITests *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 141aca1b0

FString * __thiscall
FDirectoryTreeAPITests::GetBeautifiedTestName
          (FDirectoryTreeAPITests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FDirectoryTreeAPITests @ 141b21390

FDirectoryTreeAPITests * __thiscall
FDirectoryTreeAPITests::FDirectoryTreeAPITests(FDirectoryTreeAPITests *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  EAutomationTestFlags EVar3;
  FString *pFVar4;
  FAutomationTestFramework *this_00;
  longlong lVar5;
  FString local_28;
  FString local_18;
  
  FAutomationTestBase::FAutomationTestBase((FAutomationTestBase *)this,param_1,false);
  this->_padding_ = (longlong)&___7FDirectoryTreeAPITests__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][Containers][DirectoryTree]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Core::Containers::DirectoryTree::API");
  pFVar4 = ::FString::Replace(pFVar4,&local_18,L"::",L".",IgnoreCase);
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrettyNameDotNotation).Data.ArrayNum = (pFVar4->Data).ArrayNum;
    (this->PrettyNameDotNotation).Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  EVar3 = this->TestFlags;
  if ((EVar3 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) == None
     ) {
    EVar3 = EVar3 | (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext);
    this->TestFlags = EVar3;
  }
  if ((EVar3 & (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      None) {
    this->TestFlags = EVar3 | EngineFilter;
  }
  this_00 = FAutomationTestFramework::Get();
  ::FString::FString(&local_18,"[Core][Containers][DirectoryTree]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,lVar5 * 2);
  }
  FAutomationTestFramework::RegisterAutomationTestTags(this_00,&local_28,&local_18,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// operator() @ 141b30bb0

bool __thiscall
`FDirectoryTreeAPITests::TestBody'::__l2::<lambda_2>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<wchar_t_const_*_const,int> *param_2)

{
  int *piVar1;
  wchar_t **ppwVar2;
  ForAnyElementType *pFVar3;
  longlong *plVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  wchar_t **ppwVar18;
  FIdentityFunctor local_res10 [8];
  wchar_t *local_38;
  wchar_t *local_30;
  
  uVar12 = param_2->ArrayNum;
  uVar13 = param_1->ArrayNum;
  if (uVar13 == uVar12) {
    pFVar3 = *(ForAnyElementType **)this;
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
    }
    iVar11 = *(int *)((longlong)&pFVar3[1].Data + 4);
    uVar14 = 0;
    *(undefined4 *)&pFVar3[1].Data = 0;
    if (iVar11 < (int)uVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar13,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    iVar11 = *(int *)((longlong)&pFVar3[1].Data + 4);
    *(undefined4 *)&pFVar3[1].Data = 0;
    if (iVar11 < (int)uVar12) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar12,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    iVar11 = param_1->ArrayNum;
    pFVar17 = (param_1->AllocatorInstance).Data;
    pFVar15 = pFVar17 + (longlong)iVar11 * 0x10;
    while( true ) {
      if (param_1->ArrayNum != iVar11) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar17 == pFVar15) break;
      pFVar3 = *(ForAnyElementType **)this;
      if (*(int *)(pFVar17 + 8) == 0) {
        local_38 = L"";
      }
      else {
        local_38 = *(wchar_t **)pFVar17;
      }
      if (((pFVar3->Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar10 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar10 + 1;
      pFVar17 = pFVar17 + 0x10;
      *(wchar_t **)(pFVar3->Data + (longlong)iVar10 * 8) = local_38;
    }
    ppwVar18 = param_2->DataPtr;
    ppwVar2 = ppwVar18 + param_2->ArrayNum;
    for (; ppwVar18 != ppwVar2; ppwVar18 = ppwVar18 + 1) {
      local_30 = *ppwVar18;
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      if (((pFVar3->Data <= (FScriptContainerElement *)&local_30) &&
          ((FScriptContainerElement *)&local_30 <
           pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      iVar11 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar11 + 1;
      *(wchar_t **)(pFVar3->Data + (longlong)iVar11 * 8) = local_30;
    }
    AlgoImpl::
    IntroSortInternal<wchar_t_const_*,int,FIdentityFunctor,__FDirectoryTreeAPITests::TestBody_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>_>
              ((wchar_t **)**(undefined8 **)this,*(int *)(*(undefined8 **)this + 1),local_res10[0],
               (<lambda_1>)local_res10[0]);
    AlgoImpl::
    IntroSortInternal<wchar_t_const_*,int,FIdentityFunctor,__FDirectoryTreeAPITests::TestBody_::__l2::<lambda_2>::operator()_::__l2::<lambda_2>_>
              ((wchar_t **)**(undefined8 **)((longlong)this + 8),
               *(int *)(*(undefined8 **)((longlong)this + 8) + 1),local_res10[0],
               (<lambda_2>)local_res10[0]);
    uVar16 = uVar14;
    if (0 < param_1->ArrayNum) {
      do {
        plVar4 = *(longlong **)((longlong)this + 8);
        uVar13 = (uint)uVar14;
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar4[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        plVar5 = *(longlong **)this;
        pwVar6 = *(wchar_t **)(uVar16 + *plVar4);
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar5[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp(*(wchar_t **)(uVar16 + *plVar5),pwVar6);
        if (iVar11 != 0) goto LAB_141b30f39;
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar16 = uVar16 + 8;
      } while ((int)(uVar13 + 1) < param_1->ArrayNum);
    }
    bVar8 = true;
  }
  else {
LAB_141b30f39:
    bVar8 = false;
  }
  return bVar8;
}

// operator() @ 141b33180

void __thiscall `FDirectoryTreeAPITests::TestBody'[::I]::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  
  (*(undefined8 **)this)[1] = **(undefined8 **)this;
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (*(int *)((longlong)&pFVar2[1].Data + 4) < 0) {
    DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)&pFVar2[1].Data);
    *(undefined4 *)&pFVar2[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar2,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)&pFVar2[1].Data);
    *(undefined4 *)&pFVar2[1].Data = 0;
  }
  **(undefined8 **)((longlong)this + 0x10) = 0;
  return;
}

// operator() @ 141b33250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FDirectoryTreeAPITests::TestBody'::__l284::<lambda_4>::operator()(void *this)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_948 [32];
  longlong local_8f8;
  undefined1 local_8f0 [24];
  wchar_t *local_8d8;
  int local_8d0;
  longlong local_8c8;
  FString local_8c0;
  FString local_8b0;
  TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
  local_8a0;
  wchar_t *local_888;
  int local_880;
  TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
  local_870;
  undefined1 local_858 [480];
  void *local_678;
  int local_670;
  TStringBuilderBase<wchar_t> local_668 [17];
  undefined1 local_440 [480];
  void *local_260;
  int local_258;
  TStringBuilderBase<wchar_t> local_250 [17];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_948;
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (*(int *)((longlong)&pFVar2[1].Data + 4) < 0) {
    DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)&pFVar2[1].Data);
    *(undefined4 *)&pFVar2[1].Data = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,pFVar2,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)&pFVar2[1].Data);
    *(undefined4 *)&pFVar2[1].Data = 0;
  }
  pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
  iVar6 = *(int *)((longlong)&pFVar2[1].Data + 4);
  *(undefined4 *)&pFVar2[1].Data = 0;
  if (iVar6 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar2,0,(int *)((longlong)&pFVar2[1].Data + 4));
  }
  TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal::
  FIteratorInternal(local_858,*(FTreeNode **)this,Recursive,
                    *(wchar_t *)&(*(FTreeNode **)this)[1].field_0x4);
  while( true ) {
    if (local_670 == 0) {
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(local_668);
      if (local_678 != (void *)0x0) {
        FMemory::Free(local_678);
      }
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (*(int *)((longlong)&pFVar2[1].Data + 4) < 0) {
        DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)&pFVar2[1].Data);
        iVar6 = *piVar1;
        *(undefined4 *)&pFVar2[1].Data = 0;
        if (iVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,pFVar2,0,piVar1);
        }
      }
      else {
        DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)&pFVar2[1].Data);
        *(undefined4 *)&pFVar2[1].Data = 0;
      }
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x20);
      iVar6 = *(int *)((longlong)&pFVar2[1].Data + 4);
      *(undefined4 *)&pFVar2[1].Data = 0;
      if (iVar6 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,pFVar2,0,(int *)((longlong)&pFVar2[1].Data + 4));
      }
      TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::
      FIteratorInternal::FIteratorInternal
                (local_440,*(FTreeNode **)this,ImpliedChildren|Recursive,
                 *(wchar_t *)&(*(FTreeNode **)this)[1].field_0x4);
      while( true ) {
        if (local_258 == 0) {
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(local_250);
          if (local_260 != (void *)0x0) {
            FMemory::Free(local_260);
          }
          return;
        }
        pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
        if ((local_258 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(bool)Internal",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x761,L""), bVar5)) break;
        TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::
        FIteratorInternal::operator*
                  (local_440,
                   (TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
                    *)&local_888);
        iVar6 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,pFVar2,piVar1);
        }
        *(int *)&pFVar2[1].Data = iVar6 + 1;
        pFVar8 = pFVar2->Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar8 = 0;
        *(undefined8 *)(pFVar8 + 8) = 0;
        pFVar7 = (FScriptContainerElement *)
                 ::FString::ConstructFromPtrSize(&local_8b0,local_888,local_880);
        if (pFVar8 != pFVar7) {
          if (*(void **)pFVar8 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar8);
          }
          *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
          *(undefined8 *)pFVar7 = 0;
          *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
          *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
          *(undefined8 *)(pFVar7 + 8) = 0;
        }
        if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
        }
        pFVar2 = *(ForAnyElementType **)((longlong)this + 0x20);
        if ((local_258 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(bool)Internal",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                               ,0x761,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::
        FIteratorInternal::operator*(local_440,&local_870);
        local_8f0._16_8_ = local_870._16_8_;
        local_8f0._0_8_ = local_870._0_8_;
        local_8f0._8_8_ = local_870._8_8_;
        if (((pFVar2->Data <= (FScriptContainerElement *)(local_8f0 + 0x10)) &&
            ((FScriptContainerElement *)(local_8f0 + 0x10) <
             pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,pFVar2,piVar1);
        }
        *(int *)&pFVar2[1].Data = iVar6 + 1;
        *(undefined8 *)(pFVar2->Data + (longlong)iVar6 * 8) = local_8f0._16_8_;
        TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::
        FIteratorInternal::operator++(local_440);
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
    if ((local_670 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(bool)Internal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x72f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal
    ::operator*(local_858,
                (TTuple<TStringView<wchar_t>,_protected:_void___cdecl_FDirectoryTreeAPITests::TestBody(FString_const_&)_::_2_::FMoveConstructOnly_*>
                 *)&local_8d8);
    if ((local_8c8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InternalPair.Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x731,L""), bVar5)) break;
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    pFVar8 = pFVar2->Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)(pFVar8 + 8) = 0;
    pFVar7 = (FScriptContainerElement *)
             ::FString::ConstructFromPtrSize(&local_8c0,local_8d8,local_8d0);
    if (pFVar8 != pFVar7) {
      if (*(void **)pFVar8 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar8);
      }
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar7;
      *(undefined8 *)pFVar7 = 0;
      *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + 8);
      *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + 0xc);
      *(undefined8 *)(pFVar7 + 8) = 0;
    }
    if (local_8c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c0.Data.AllocatorInstance.Data);
    }
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
    if ((local_670 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(bool)Internal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x72f,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal
    ::operator*(local_858,&local_8a0);
    uVar4 = local_8a0._16_8_;
    if ((local_8a0._16_8_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InternalPair.Value != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\DirectoryTree.h"
                           ,0x731,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_8f8 = uVar4;
    if (((pFVar2->Data <= (FScriptContainerElement *)&local_8f8) &&
        ((FScriptContainerElement *)&local_8f8 <
         pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = *(int *)&pFVar2[1].Data;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar6 + 1;
    *(longlong *)(pFVar2->Data + (longlong)iVar6 * 8) = local_8f8;
    TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FIteratorInternal
    ::operator++(local_858);
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

