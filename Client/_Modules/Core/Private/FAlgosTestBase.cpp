// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// operator() @ 141594870

void __thiscall
`FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()
          (void *this,initializer_list<char_const_*> *param_1,
          initializer_list<char_const_*> *param_2)

{
  FScriptContainerElement *pFVar1;
  char **ppcVar2;
  char *pcVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  size_t sVar9;
  FStringWrapper *pFVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  FStringWrapper *pFVar14;
  uint uVar15;
  uint uVar16;
  char **ppcVar17;
  uint uVar18;
  char **ppcVar19;
  longlong lVar20;
  undefined1 local_res20 [8];
  undefined1 local_88;
  undefined1 local_87 [3];
  int local_84;
  int local_80 [2];
  TArray<_public:_void___cdecl_FAlgosTestBase::TestRemoveIf(void)_::_2_::FStringWrapper,TSizedDefaultAllocator<32>_>
  local_78;
  TArray<_public:_void___cdecl_FAlgosTestBase::TestRemoveIf(void)_::_2_::FStringWrapper,TSizedDefaultAllocator<32>_>
  local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  ppcVar2 = param_1->_Last;
  ppcVar17 = param_1->_First;
  iVar7 = local_78.ArrayNum;
  for (ppcVar19 = ppcVar17; local_78.ArrayNum = iVar7, ppcVar19 != ppcVar2; ppcVar19 = ppcVar19 + 1)
  {
    pcVar3 = *ppcVar19;
    if (iVar7 == local_78.ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_78.AllocatorInstance,&local_78.ArrayMax);
    }
    FVar12.Data = (FScriptContainerElement *)0x0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = iVar7 + 1;
    local_50 = 0;
    pFVar1 = local_78.AllocatorInstance.Data + (longlong)iVar7 * 0x18;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      sVar9 = strlen(pcVar3);
      uVar15 = (int)sVar9 + 1;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      if (0 < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar15,&local_58,0,(int *)((longlong)&local_50 + 4));
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar15,&local_58,(int *)&local_50,(int *)((longlong)&local_50 + 4));
      FVar12.Data = local_58.Data;
      FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_58.Data,uVar15,pcVar3,uVar15);
    }
    *(FScriptContainerElement **)&pFVar1->field_0x0 = FVar12.Data;
    *(int *)(pFVar1 + 8) = (int)local_50;
    *(undefined4 *)(pFVar1 + 0xc) = local_50._4_4_;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = 0;
    *(undefined2 *)(pFVar1 + 0x10) = 0;
    iVar7 = local_78.ArrayNum;
  }
  local_84 = 0;
  uVar15 = Algo::
           RemoveIf<TArray<_FAlgosTestBase::TestRemoveIf_::__l2::FStringWrapper,TSizedDefaultAllocator<32>_>,__FAlgosTestBase::TestRemoveIf_::__l2::<lambda_1>::operator()_::__l3::<lambda_1>_>
                     (&local_78,(<lambda_1>)&local_84);
  if (((longlong)local_84 != (longlong)ppcVar2 - (longlong)ppcVar17 >> 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCalls == Input.size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x35f,L"Algo::RemoveIf - expected predicate to be run %d times, got %d"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((longlong)(int)uVar15 != (longlong)param_2->_Last - (longlong)param_2->_First >> 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == ExpectedResult.size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x360,L"Algo::RemoveIf - expected %d elements to be kept, got %d"), bVar6)
     ) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = local_78.ArrayNum;
  pFVar14 = (FStringWrapper *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x18)
  ;
  FVar12.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar7) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<`FAlgosTestBase::TestRemoveIf'::__l2::FStringWrapper_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((FStringWrapper *)FVar12.Data == pFVar14) goto LAB_141594aa9;
    if (((FStringWrapper *)FVar12.Data)->bPredicateInvoked == false) break;
    FVar12.Data = FVar12.Data + 0x18;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::AllOf(TestArray, &FStringWrapper::bPredicateInvoked)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x361,
                     L"Algo::RemoveIf - expected predicate to be run over all elements but found one that was not"
                    );
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_141594aa9:
  uVar16 = local_78.ArrayNum - uVar15;
  if (((int)(uVar16 | uVar15) < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar16 != 0) {
    pFVar14 = (FStringWrapper *)(local_78.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18);
    DestructItems<_FAlgosTestBase::TestRemoveIf_::__l2::FStringWrapper,int>(pFVar14,uVar16);
    iVar7 = (local_78.ArrayNum - uVar16) - uVar15;
    if (iVar7 != 0) {
      memmove(pFVar14,pFVar14 + (int)uVar16,(longlong)iVar7 * 0x18);
    }
    local_78.ArrayNum = local_78.ArrayNum - uVar16;
  }
  iVar7 = local_78.ArrayNum;
  pFVar14 = (FStringWrapper *)(local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 0x18)
  ;
  FVar12.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if (local_78.ArrayNum != iVar7) {
      local_88 = 0;
      `TCheckedPointerIterator<`FAlgosTestBase::TestRemoveIf'::__l2::FStringWrapper_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_88);
    }
    if ((FStringWrapper *)FVar12.Data == pFVar14) goto LAB_141594b99;
    if (((FStringWrapper *)FVar12.Data)->bMovedFrom != false) break;
    FVar12.Data = FVar12.Data + 0x18;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::NoneOf(TestArray, &FStringWrapper::bMovedFrom)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x365,L"Algo::RemoveIf - found non-removed element in a moved-from state");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_141594b99:
  ppcVar2 = param_2->_Last;
  FVar12.Data = local_78.AllocatorInstance.Data;
  iVar7 = local_78.ArrayNum;
  for (ppcVar17 = param_2->_First; local_78.AllocatorInstance.Data = FVar12.Data,
      local_78.ArrayNum = iVar7, ppcVar17 != ppcVar2; ppcVar17 = ppcVar17 + 1) {
    pcVar3 = *ppcVar17;
    pFVar14 = (FStringWrapper *)((longlong)FVar12.Data + (longlong)iVar7 * 0x18);
    while( true ) {
      if (local_78.ArrayNum != iVar7) {
        local_87[0] = 0;
        `TCheckedPointerIterator<`FAlgosTestBase::TestRemoveIf'::__l2::FStringWrapper,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_87);
      }
      if ((FStringWrapper *)FVar12.Data == pFVar14) goto LAB_141594c0e;
      if ((((FStringWrapper *)FVar12.Data)->Str).Data.ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(((FStringWrapper *)FVar12.Data)->Str).Data.AllocatorInstance.Data;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar11,pcVar3);
      if (iVar8 == 0) break;
      FVar12.Data = FVar12.Data + 0x18;
    }
    if ((FStringWrapper *)FVar12.Data == (FStringWrapper *)0x0) {
LAB_141594c0e:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::AllOf(ExpectedResult, [&TestArray](const ANSICHAR* ExpectedStr){ return Algo::ContainsBy(TestArray, ExpectedStr, &FStringWrapper::Str); })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x366,L"Algo::RemoveIf - actual result does not match expected result");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
    FVar12.Data = local_78.AllocatorInstance.Data;
    iVar7 = local_78.ArrayNum;
  }
  DestructItems<_FAlgosTestBase::TestRemoveIf_::__l2::FStringWrapper,int>
            ((FStringWrapper *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FStringWrapper *)local_78.AllocatorInstance.Data != (FStringWrapper *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  ppcVar17 = param_1->_First;
  pFVar10 = (FStringWrapper *)0x0;
  uVar15 = 0;
  ppcVar2 = param_1->_Last;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pFVar14 = pFVar10;
  FVar12.Data = (FScriptContainerElement *)pFVar10;
  if (ppcVar17 != ppcVar2) {
    while( true ) {
      pcVar3 = *ppcVar17;
      iVar7 = (int)pFVar14;
      if (iVar7 == (int)pFVar10) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_68.AllocatorInstance,&local_68.ArrayMax);
        FVar12.Data = local_68.AllocatorInstance.Data;
      }
      FVar13.Data = (FScriptContainerElement *)0x0;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      uVar15 = iVar7 + 1;
      pFVar14 = (FStringWrapper *)(ulonglong)uVar15;
      local_40._0_4_ = 0;
      pFVar10 = (FStringWrapper *)((longlong)FVar12.Data + (longlong)iVar7 * 0x18);
      local_40._4_4_ = 0;
      local_68.ArrayNum = uVar15;
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        sVar9 = strlen(pcVar3);
        uVar16 = (int)sVar9 + 1;
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        if (0 < (int)uVar16) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar16,&local_48,0,(int *)((longlong)&local_40 + 4));
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar16,&local_48,(int *)&local_40,(int *)((longlong)&local_40 + 4));
        FVar13.Data = local_48.Data;
        FGenericPlatformString::Convert<char,wchar_t>((wchar_t *)local_48.Data,uVar16,pcVar3,uVar16)
        ;
      }
      (pFVar10->Str).Data.AllocatorInstance.Data = FVar13.Data;
      ppcVar17 = ppcVar17 + 1;
      (pFVar10->Str).Data.ArrayNum = (int)local_40;
      (pFVar10->Str).Data.ArrayMax = local_40._4_4_;
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      pFVar10->bMovedFrom = false;
      pFVar10->bPredicateInvoked = false;
      if (ppcVar17 == ppcVar2) break;
      pFVar10 = (FStringWrapper *)(ulonglong)(uint)local_68.ArrayMax;
    }
  }
  local_80[0] = 0;
  uVar16 = Algo::
           StableRemoveIf<TArray<_FAlgosTestBase::TestRemoveIf_::__l2::FStringWrapper,TSizedDefaultAllocator<32>_>_&,__FAlgosTestBase::TestRemoveIf_::__l2::<lambda_1>::operator()_::__l53::<lambda_3>_>
                     (&local_68,(<lambda_3>)local_80);
  if (((longlong)local_80[0] != (longlong)ppcVar2 - (longlong)param_1->_First >> 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCalls == Input.size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x37b,
                         L"Algo::StableRemoveIf - expected predicate to be run %d times, got %d"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((longlong)(int)uVar16 != (longlong)param_2->_Last - (longlong)param_2->_First >> 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == ExpectedResult.size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x37c,L"Algo::StableRemoveIf - expected %d elements to be kept, got %d"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  for (pFVar14 = (FStringWrapper *)FVar12.Data;
      pFVar14 != (FStringWrapper *)((longlong)FVar12.Data + (longlong)(int)uVar15 * 0x18);
      pFVar14 = pFVar14 + 1) {
    if (pFVar14->bPredicateInvoked == false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::AllOf(TestArray, &FStringWrapper::bPredicateInvoked)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x37d,
                         L"Algo::StableRemoveIf - expected predicate to be run over all elements but found one that was not"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
  }
  uVar18 = uVar15 - uVar16;
  if (((int)(uVar16 | uVar18) < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = local_68.ArrayNum;
  if (uVar18 != 0) {
    pFVar14 = (FStringWrapper *)((longlong)FVar12.Data + (longlong)(int)uVar16 * 0x18);
    DestructItems<_FAlgosTestBase::TestRemoveIf_::__l2::FStringWrapper,int>(pFVar14,uVar18);
    uVar15 = uVar15 - uVar18;
    uVar5 = uVar15;
    if (uVar15 - uVar16 != 0) {
      memmove(pFVar14,pFVar14 + (int)uVar18,(longlong)(int)(uVar15 - uVar16) * 0x18);
    }
  }
  local_68.ArrayNum = uVar5;
  for (pFVar14 = (FStringWrapper *)FVar12.Data;
      pFVar14 != (FStringWrapper *)((longlong)FVar12.Data + (longlong)(int)uVar15 * 0x18);
      pFVar14 = pFVar14 + 1) {
    if (pFVar14->bMovedFrom != false) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::NoneOf(TestArray, &FStringWrapper::bMovedFrom)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x381,
                         L"Algo::StableRemoveIf - found non-removed element in a moved-from state");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
  }
  if (uVar15 == (uint)((longlong)param_2->_Last - (longlong)param_2->_First >> 3)) {
    lVar20 = (longlong)(int)uVar15;
    ppcVar17 = param_2->_First;
    pFVar14 = (FStringWrapper *)FVar12.Data;
    if (uVar15 != 0) {
      do {
        if ((pFVar14->Str).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(pFVar14->Str).Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar11,*ppcVar17);
        if (iVar7 != 0) goto LAB_141594f97;
        lVar20 = lVar20 + -1;
        ppcVar17 = ppcVar17 + 1;
        pFVar14 = pFVar14 + 1;
      } while (lVar20 != 0);
    }
  }
  else {
LAB_141594f97:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::Compare(TestArray, ExpectedResult, [](const FStringWrapper& Lhs, const ANSICHAR* Rhs){ return Lhs.Str == Rhs; })"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x382,L"Algo::StableRemoveIf - actual result does not match expected result"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  DestructItems<_FAlgosTestBase::TestRemoveIf_::__l2::FStringWrapper,int>
            ((FStringWrapper *)FVar12.Data,uVar15);
  if ((FStringWrapper *)FVar12.Data != (FStringWrapper *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// Initialize @ 1415c85a0

void __thiscall FAlgosTestBase::Initialize(FAlgosTestBase *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int local_18;
  int local_14 [3];
  
  local_18 = 0;
  pTVar1 = &this->TestData;
  do {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)(this->TestData).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->TestData).ArrayNum;
    if (iVar5 == (this->TestData).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,&(this->TestData).ArrayMax);
    }
    (this->TestData).ArrayNum = iVar5 + 1;
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18;
    local_18 = local_18 + 1;
  } while (local_18 < 0x20);
  pTVar1 = &this->TestData2;
  lVar6 = 0x20;
  do {
    local_14[0] = rand();
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_14) &&
       ((FScriptContainerElement *)local_14 < pFVar2 + (longlong)(this->TestData2).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->TestData2).ArrayNum;
    if (iVar5 == (this->TestData2).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,&(this->TestData2).ArrayMax);
    }
    (this->TestData2).ArrayNum = iVar5 + 1;
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_14[0];
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

// TestBinarySearch @ 1415f7f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAlgosTestBase::TestBinarySearch(FAlgosTestBase *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStackY_c8 [32];
  ForAnyElementType local_88;
  uint local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar10 = 6;
  uVar12 = 0;
  local_68 = 6;
  local_78 = ___xmm_00000006000000060000000400000002;
  uStack_70 = _UNK_150631e98;
  local_64 = 8;
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 6) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if ((((5 < uVar11) || (6 < *(int *)((longlong)&local_78 + uVar11 * 4))) || (uVar11 != 2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::BinarySearch(StaticArray, 6) == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x13b,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 5) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if (((uVar11 < 6) && (*(int *)((longlong)&local_78 + uVar11 * 4) < 6)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::BinarySearch(StaticArray, 5) == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x13c,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 4) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if ((((5 < uVar11) || (4 < *(int *)((longlong)&local_78 + uVar11 * 4))) || (uVar11 != 1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::BinarySearchBy(StaticArray, 4, FIdentityFunctor()) == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x13d,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 6) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if ((uVar11 != 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::LowerBound(StaticArray, 6) == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x13f,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 5) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if ((uVar11 != 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::LowerBound(StaticArray, 5) == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x140,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 7) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if ((uVar11 != 5) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::UpperBound(StaticArray, 6) == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x141,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 7) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if ((uVar11 != 5) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::LowerBound(StaticArray, 7) == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x142,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 9) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  if ((uVar11 != 6) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::LowerBound(StaticArray, 9) == 6",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x143,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar11 = uVar12;
  uVar9 = 6;
  do {
    uVar16 = uVar9 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar16 + uVar11) * 4) < 6) {
      uVar11 = (ulonglong)((uint)uVar9 & 1) + uVar16 + uVar11;
    }
    uVar9 = uVar16;
  } while (uVar16 != 0);
  uVar9 = uVar12;
  if ((uVar11 != 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::LowerBoundBy(StaticArray, 6, FIdentityFunctor()) == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x144,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  do {
    uVar11 = uVar10 >> 1;
    if (*(int *)((longlong)&local_78 + (uVar11 + uVar9) * 4) < 7) {
      uVar9 = (ulonglong)((uint)uVar10 & 1) + uVar11 + uVar9;
    }
    uVar10 = uVar11;
  } while (uVar11 != 0);
  if ((uVar9 != 5) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::UpperBoundBy(StaticArray, 6, FIdentityFunctor()) == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x145,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = _UNK_150631ec8;
  uVar4 = ___xmm_00000008000000060000000600000006;
  uVar3 = _UNK_150631e48;
  uVar2 = ___xmm_00000004000000040000000200000002;
  local_40 = 8;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,9,0,&local_88,9,&local_7c);
  uVar13 = local_80;
  FVar6.Data = local_88.Data;
  local_60 = uVar2;
  uStack_58 = uVar3;
  *(undefined8 *)local_88.Data = uVar2;
  *(undefined8 *)(local_88.Data + 8) = uVar3;
  *(undefined8 *)(local_88.Data + 0x10) = uVar4;
  *(undefined8 *)(local_88.Data + 0x18) = uVar5;
  *(undefined4 *)(local_88.Data + 0x20) = local_40;
  local_50 = uVar4;
  uStack_48 = uVar5;
  uVar11 = uVar12;
  uVar14 = local_80;
  if ((int)local_80 < 1) {
LAB_1415f83c3:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::BinarySearch(IntArray, 6) == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x14a,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(local_88.Data + (longlong)iVar8 * 4) < 6) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    iVar8 = (int)uVar11;
    if ((((int)local_80 <= iVar8) || (6 < *(int *)(local_88.Data + (longlong)iVar8 * 4))) ||
       (iVar8 != 4)) goto LAB_1415f83c3;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if (0 < (int)uVar13) {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 5) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    iVar8 = (int)uVar11;
    if (((iVar8 < (int)uVar13) && (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 6)) &&
       ((iVar8 != -1 &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Algo::BinarySearch(IntArray, 5) == INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                            ,0x14b,L""), bVar7)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f84a3:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::BinarySearchBy(IntArray, 4, FIdentityFunctor()) == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x14c,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 4) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    iVar8 = (int)uVar11;
    if ((((int)uVar13 <= iVar8) || (4 < *(int *)(FVar6.Data + (longlong)iVar8 * 4))) || (iVar8 != 2)
       ) goto LAB_1415f84a3;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if (0 < (int)uVar13) {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 2) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if (((int)uVar11 != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::LowerBound(IntArray, 2) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x14e,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f8565:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::UpperBound(IntArray, 2) == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x14f,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 3) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 2) goto LAB_1415f8565;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f85c5:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::LowerBound(IntArray, 6) == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x150,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 6) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 4) goto LAB_1415f85c5;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f8625:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::UpperBound(IntArray, 6) == 7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x151,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 7) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 7) goto LAB_1415f8625;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f8685:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::LowerBound(IntArray, 5) == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x152,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 5) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 4) goto LAB_1415f8685;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f86e5:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::UpperBound(IntArray, 5) == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x153,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 6) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 4) goto LAB_1415f86e5;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f8745:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::LowerBound(IntArray, 7) == 7",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x154,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 7) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 7) goto LAB_1415f8745;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f87a5:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::LowerBound(IntArray, 9) == 9",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x155,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 9) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 9) goto LAB_1415f87a5;
  }
  uVar11 = uVar12;
  uVar14 = uVar13;
  if ((int)uVar13 < 1) {
LAB_1415f8805:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::LowerBoundBy(IntArray, 6, FIdentityFunctor()) == 4",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x156,L"");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      uVar15 = uVar14 >> 1;
      iVar8 = uVar15 + (int)uVar11;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 6) {
        uVar11 = (ulonglong)((uVar14 & 1) + iVar8);
      }
      uVar14 = uVar15;
    } while (uVar15 != 0);
    if ((int)uVar11 != 4) goto LAB_1415f8805;
  }
  if (0 < (int)uVar13) {
    do {
      uVar14 = uVar13 >> 1;
      iVar8 = uVar14 + (int)uVar12;
      if (*(int *)(FVar6.Data + (longlong)iVar8 * 4) < 7) {
        uVar12 = (ulonglong)((uVar13 & 1) + iVar8);
      }
      uVar13 = uVar14;
    } while (uVar14 != 0);
    if ((int)uVar12 == 7) goto LAB_1415f888d;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::UpperBoundBy(IntArray, 6, FIdentityFunctor()) == 7",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x157,L"");
  if (bVar7) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1415f888d:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// TestCopy @ 1415f88d0

void __thiscall FAlgosTestBase::TestCopy(FAlgosTestBase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Algo::Copy<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
            (&this->TestData,&local_18);
  if (local_18.ArrayNum == (this->TestData).ArrayNum) {
    if (local_18.ArrayNum == 0) goto LAB_1415f895f;
    iVar4 = memcmp(local_18.AllocatorInstance.Data,(this->TestData).AllocatorInstance.Data,
                   (longlong)local_18.ArrayNum << 2);
    if (iVar4 == 0) goto LAB_1415f895f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("TestArray == TestData",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x77,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415f895f:
  Algo::Copy<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
            (&this->TestData2,&local_18);
  if (local_18.ArrayNum != 0x40) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestArray.Num() == NumTestObjects * 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x7a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->TestData).ArrayNum <= iVar4) {
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
    pFVar1 = (this->TestData).AllocatorInstance.Data;
    if (local_18.ArrayNum <= iVar4) {
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
    if (*(int *)(local_18.AllocatorInstance.Data + lVar6 * 4) != *(int *)(pFVar1 + lVar6 * 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestArray[i] == TestData[i]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x7d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 1;
  } while (iVar4 < 0x20);
  iVar4 = 0;
  lVar6 = 0;
  do {
    if ((this->TestData2).ArrayNum <= iVar4) {
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
    pFVar1 = (this->TestData2).AllocatorInstance.Data;
    uVar5 = 0;
    if ((int)(iVar4 + 0x20U) < local_18.ArrayNum) {
      uVar5 = ~(iVar4 + 0x20U) >> 0x1f;
    }
    if (uVar5 == 0) {
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
    if (*(int *)(local_18.AllocatorInstance.Data + lVar6 + 0x80) != *(int *)(pFVar1 + lVar6)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestArray[i + NumTestObjects] == TestData2[i]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x81,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + 4;
  } while (iVar4 < 0x20);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// TestCopyIf @ 1415f8b70

void __thiscall FAlgosTestBase::TestCopyIf(FAlgosTestBase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement *local_res18;
  ForAnyElementType local_48;
  uint local_40;
  uint local_3c;
  
  pFVar11 = (this->TestData).AllocatorInstance.Data;
  uVar12 = 0;
  iVar8 = (this->TestData).ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_3c = 0;
  pFVar1 = pFVar11 + (longlong)iVar8 * 4;
  uVar7 = uVar12;
  uVar9 = uVar12;
  while( true ) {
    iVar4 = (int)uVar7;
    if ((this->TestData).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) break;
    if (((byte)*pFVar11 & 1) == 0) {
      if ((local_48.Data <= pFVar11) && (pFVar11 < local_48.Data + (longlong)(int)uVar9 * 4)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iVar4 == (int)uVar9) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_48,(int *)&local_3c);
        uVar9 = (ulonglong)local_3c;
      }
      local_40 = iVar4 + 1;
      uVar7 = (ulonglong)local_40;
      *(undefined4 *)(local_48.Data + (longlong)iVar4 * 4) = *(undefined4 *)pFVar11;
    }
    pFVar11 = pFVar11 + 4;
  }
  local_res18 = (FScriptContainerElement *)0x0;
  uVar9 = uVar12;
  uVar13 = uVar12;
  do {
    iVar8 = (int)uVar12;
    if ((this->TestData).ArrayNum <= iVar8) {
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
    if (((byte)(this->TestData).AllocatorInstance.Data[uVar13] & 1) == 0) {
      if ((this->TestData).ArrayNum <= iVar8) {
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
      pFVar1 = (this->TestData).AllocatorInstance.Data;
      uVar10 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar10 < iVar4) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if (uVar5 == 0) {
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
      pFVar11 = local_res18;
      if (*(int *)(local_48.Data + (longlong)local_res18) != *(int *)(pFVar1 + uVar13)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestArray[j] == TestData[i]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x8f,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar9 = (ulonglong)(uVar10 + 1);
      local_res18 = (FScriptContainerElement *)((longlong)pFVar11 + 4);
    }
    uVar12 = (ulonglong)(iVar8 + 1U);
    uVar13 = uVar13 + 4;
  } while ((int)(iVar8 + 1U) < 0x20);
  pFVar11 = (this->TestData2).AllocatorInstance.Data;
  iVar8 = (this->TestData2).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar8 * 4;
  while( true ) {
    uVar5 = (uint)uVar7;
    if ((this->TestData2).ArrayNum != iVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar1) break;
    if (((byte)*pFVar11 & 1) == 0) {
      if ((local_48.Data <= pFVar11) && (pFVar11 < local_48.Data + (longlong)(int)local_3c * 4)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (uVar5 == local_3c) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_48,(int *)&local_3c);
      }
      local_40 = uVar5 + 1;
      uVar7 = (ulonglong)local_40;
      *(undefined4 *)(local_48.Data + (longlong)(int)uVar5 * 4) = *(undefined4 *)pFVar11;
    }
    pFVar11 = pFVar11 + 4;
  }
  iVar8 = 0;
  uVar10 = 0;
  lVar14 = 0;
  local_res18 = (FScriptContainerElement *)0x0;
  do {
    if ((this->TestData).ArrayNum <= iVar8) {
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
    if (((byte)(this->TestData).AllocatorInstance.Data[lVar14] & 1) == 0) {
      if ((this->TestData).ArrayNum <= iVar8) {
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
      pFVar1 = (this->TestData).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar10 < (int)uVar5) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      pFVar11 = local_res18;
      if (*(int *)(local_48.Data + (longlong)local_res18) != *(int *)(pFVar1 + lVar14)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestArray[j] == TestData[i]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x9a,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar10 = uVar10 + 1;
      local_res18 = pFVar11 + 4;
    }
    iVar8 = iVar8 + 1;
    lVar14 = lVar14 + 4;
  } while (iVar8 < 0x20);
  iVar8 = 0;
  lVar15 = 0;
  lVar14 = (longlong)(int)uVar10 * 4;
  do {
    if ((this->TestData2).ArrayNum <= iVar8) {
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
    if (((byte)(this->TestData2).AllocatorInstance.Data[lVar15] & 1) == 0) {
      if ((this->TestData2).ArrayNum <= iVar8) {
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
      local_res18 = (this->TestData2).AllocatorInstance.Data + lVar15;
      uVar6 = 0;
      if ((int)uVar10 < (int)uVar5) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
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
      if (*(int *)(local_48.Data + lVar14) != *(int *)local_res18) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestArray[j] == TestData2[i]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0xa2,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar10 = uVar10 + 1;
      lVar14 = lVar14 + 4;
    }
    iVar8 = iVar8 + 1;
    lVar15 = lVar15 + 4;
  } while (iVar8 < 0x20);
  if (uVar10 != uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("j == TestArray.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0xa6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// TestEditDistance @ 1415f9180

void __thiscall FAlgosTestBase::TestEditDistance(FAlgosTestBase *this)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  ForAnyElementType FVar7;
  ForAnyElementType _Src;
  ForAnyElementType _Src_00;
  int *piVar8;
  wchar_t *pwVar9;
  int local_424;
  FString local_420;
  FString local_410;
  ForAnyElementType local_400;
  int local_3f8 [2];
  FString local_3f0;
  FString local_3e0;
  FAlgosTestBase *local_3d0;
  FString local_3c8;
  wchar_t *local_3b8;
  wchar_t *local_3b0;
  int local_3a8 [2];
  wchar_t *local_3a0;
  wchar_t *local_398;
  undefined4 local_390;
  undefined4 local_38c;
  wchar_t *local_388;
  wchar_t *local_380;
  undefined4 local_378;
  undefined4 local_374;
  wchar_t *local_370;
  wchar_t *local_368;
  undefined4 local_360;
  undefined4 local_35c;
  wchar_t *local_358;
  wchar_t *local_350;
  undefined8 local_348;
  wchar_t *local_340;
  wchar_t *local_338;
  undefined4 local_330;
  undefined4 local_32c;
  wchar_t *local_328;
  wchar_t *local_320;
  undefined8 local_318;
  wchar_t *local_310;
  wchar_t *local_308;
  undefined8 local_300;
  wchar_t *local_2f8;
  wchar_t *local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  wchar_t *local_2e0;
  wchar_t *local_2d8;
  undefined8 local_2d0;
  wchar_t *local_2c8;
  wchar_t *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  wchar_t *local_2b0;
  wchar_t *local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  wchar_t *local_290;
  undefined4 local_288;
  undefined4 local_284;
  wchar_t *local_280;
  wchar_t *local_278;
  undefined8 local_270;
  wchar_t *local_268;
  wchar_t *local_260;
  undefined4 local_258;
  undefined4 local_254;
  wchar_t *local_250;
  wchar_t *local_248;
  undefined8 local_240;
  wchar_t *local_238;
  wchar_t *local_230;
  undefined4 local_228;
  undefined4 local_224;
  wchar_t *local_220;
  wchar_t *local_218;
  undefined8 local_210;
  wchar_t *local_208;
  wchar_t *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  wchar_t *local_1f0;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  wchar_t *local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  wchar_t *local_1c0;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  wchar_t *local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  wchar_t *local_190;
  wchar_t *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  wchar_t *local_178;
  wchar_t *local_170;
  undefined4 local_168;
  undefined4 local_164;
  wchar_t *local_160;
  wchar_t *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  wchar_t *local_148;
  wchar_t *local_140;
  undefined4 local_138;
  undefined4 local_134;
  wchar_t *local_130;
  wchar_t *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  wchar_t *local_118;
  wchar_t *local_110;
  undefined4 local_108;
  undefined4 local_104;
  wchar_t *local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  wchar_t *local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  wchar_t *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  wchar_t *local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  wchar_t *local_80;
  undefined4 local_78;
  undefined4 local_74;
  wchar_t *local_70;
  wchar_t *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  wchar_t *local_50;
  undefined4 local_48;
  undefined4 local_44;
  wchar_t *local_40;
  wchar_t *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_3b0 = L"Saturday";
  local_3a8[0] = 0;
  local_3a8[1] = 8;
  local_3b8 = L"";
  local_3a0 = L"";
  local_380 = L"";
  local_368 = L"";
  local_358 = L"a";
  local_350 = L"a";
  local_340 = L"a";
  local_338 = L"b";
  local_298 = L"SaturdaY";
  local_280 = L"SaturdaY";
  local_268 = L"saturdaY";
  local_250 = L"saturdaY";
  local_238 = L"SATURDAY";
  local_220 = L"SATURDAY";
  local_200 = L"baturday";
  local_1e8 = L"baturday";
  local_398 = L"Saturday";
  local_390 = 1;
  local_38c = 8;
  local_388 = L"Saturday";
  local_378 = 0;
  local_374 = 8;
  local_370 = L"Saturday";
  local_360 = 1;
  local_35c = 8;
  local_348 = 0;
  local_330 = 0;
  local_32c = 1;
  local_328 = L"Saturday";
  local_320 = L"Saturday";
  local_318 = 0;
  local_310 = L"Saturday";
  local_308 = L"Saturday";
  local_300 = 1;
  local_2f8 = L"Saturday";
  local_2f0 = L"saturday";
  local_2e8 = 0;
  local_2e4 = 1;
  local_2e0 = L"Saturday";
  local_2d8 = L"saturday";
  local_2d0 = 1;
  local_2c8 = L"saturday";
  local_2c0 = L"Saturday";
  local_2b8 = 0;
  local_2b4 = 1;
  local_2b0 = L"saturday";
  local_2a8 = L"Saturday";
  local_2a0 = 1;
  local_290 = L"saturday";
  local_288 = 0;
  local_284 = 2;
  local_278 = L"saturday";
  local_270 = 1;
  local_260 = L"Saturday";
  local_258 = 0;
  local_254 = 2;
  local_248 = L"Saturday";
  local_240 = 1;
  local_230 = L"saturday";
  local_228 = 0;
  local_224 = 8;
  local_218 = L"saturday";
  local_210 = 1;
  local_208 = L"Saturday";
  local_1f8 = 0;
  local_1f4 = 1;
  local_1f0 = L"Saturday";
  local_1e0 = 1;
  local_1d0 = L"Saturdai";
  local_1b8 = L"Saturdai";
  local_1a8 = L"Satyrday";
  local_190 = L"Satyrday";
  local_170 = L"Body";
  local_158 = L"Body";
  local_140 = L"Paste_Body";
  local_128 = L"Paste_Body";
  local_110 = L"Legs_1";
  local_f8 = L"Legs_1";
  local_e0 = L"Arms";
  local_c8 = L"Arms";
  local_178 = L"Copy_Body";
  local_160 = L"Copy_Body";
  local_b0 = L"Sunday";
  local_98 = L"Sunday";
  local_148 = L"copy_Body";
  local_130 = L"copy_Body";
  local_80 = L"suNday";
  local_68 = L"suNday";
  local_118 = L"legs";
  local_100 = L"legs";
  local_50 = L"sUnday";
  local_1dc = 1;
  local_1d8 = L"Saturday";
  local_1c8 = 0;
  local_1c4 = 1;
  local_1c0 = L"Saturday";
  local_1b0 = 1;
  local_1ac = 1;
  local_1a0 = L"Saturday";
  local_198 = 0;
  local_194 = 1;
  local_188 = L"Saturday";
  local_180 = 1;
  local_17c = 1;
  local_168 = 0;
  local_164 = 5;
  local_150 = 1;
  local_14c = 5;
  local_138 = 0;
  local_134 = 5;
  local_120 = 1;
  local_11c = 5;
  local_108 = 0;
  local_104 = 3;
  local_f0 = 1;
  local_ec = 2;
  local_e8 = L"arms";
  local_d8 = 0;
  local_d4 = 1;
  local_d0 = L"arms";
  local_c0 = 1;
  local_b8 = L"Saturday";
  local_a8 = 0;
  local_a4 = 3;
  local_a0 = L"Saturday";
  local_90 = 1;
  local_8c = 3;
  local_88 = L"Saturday";
  local_78 = 0;
  local_74 = 4;
  local_70 = L"Saturday";
  local_60 = 1;
  local_5c = 3;
  local_58 = L"Saturday";
  local_48 = 0;
  local_44 = 5;
  local_40 = L"Saturday";
  local_38 = L"sUnday";
  local_30 = 1;
  local_2c = 3;
  local_424 = 0;
  piVar8 = local_3a8;
  local_3d0 = this;
  while( true ) {
    _Src.Data = (FScriptContainerElement *)0x0;
    pwVar9 = *(wchar_t **)(piVar8 + -2);
    local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_420.Data.ArrayNum = 0;
    local_420.Data.ArrayMax = 0;
    iVar2 = 0;
    if ((pwVar9 != (wchar_t *)0x0) && (*pwVar9 != L'\0')) {
      sVar3 = wcslen(pwVar9);
      uVar4 = (int)sVar3 + 1;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (0 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar4,(ForAnyElementType *)&local_420,0,&local_420.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)&local_420,&local_420.Data.ArrayNum,
                 &local_420.Data.ArrayMax);
      _Src.Data = local_420.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_420.Data.AllocatorInstance.Data,pwVar9,(longlong)(int)uVar4 * 2);
      iVar2 = local_420.Data.ArrayNum;
    }
    _Src_00.Data = (FScriptContainerElement *)0x0;
    pwVar9 = *(wchar_t **)(piVar8 + -4);
    local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_410.Data.ArrayNum = 0;
    local_410.Data.ArrayMax = 0;
    iVar6 = 0;
    if ((pwVar9 != (wchar_t *)0x0) && (*pwVar9 != L'\0')) {
      sVar3 = wcslen(pwVar9);
      uVar4 = (int)sVar3 + 1;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (0 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar4,(ForAnyElementType *)&local_410,0,&local_410.Data.ArrayMax);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)&local_410,&local_410.Data.ArrayNum,
                 &local_410.Data.ArrayMax);
      _Src_00.Data = local_410.Data.AllocatorInstance.Data;
      FGenericPlatformString::Memcpy
                (local_410.Data.AllocatorInstance.Data,pwVar9,(longlong)(int)uVar4 * 2);
      iVar6 = local_410.Data.ArrayNum;
    }
    FVar7.Data = (FScriptContainerElement *)0x0;
    if (local_424 == 1) {
      local_3f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3f0.Data.ArrayNum = iVar2;
      if (iVar2 == 0) {
        local_3f0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar2,0,(ForAnyElementType *)&local_3f0,iVar2,&local_3f0.Data.ArrayMax);
        FVar7.Data = local_3f0.Data.AllocatorInstance.Data;
        memcpy(local_3f0.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar2 * 2);
      }
      ::FString::ToLowerInline(&local_3f0);
      FVar5.Data = (FScriptContainerElement *)0x0;
      local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3e0.Data.ArrayNum = iVar6;
      if (iVar6 == 0) {
        local_3e0.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,0,(ForAnyElementType *)&local_3e0,iVar6,&local_3e0.Data.ArrayMax);
        FVar5.Data = local_3e0.Data.AllocatorInstance.Data;
        memcpy(local_3e0.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar6 * 2);
      }
      ::FString::ToLowerInline(&local_3e0);
      iVar2 = Algo::LevenshteinDistance<FString,FString>(&local_3e0,&local_3f0);
      if (FVar5.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar5.Data);
      }
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
    }
    else {
      iVar2 = Algo::LevenshteinDistance<FString,FString>(&local_410,&local_420);
    }
    if (iVar2 != piVar8[1]) {
      pwVar9 = L"IgnoreCase";
      if (local_424 == 0) {
        pwVar9 = L"CaseSensitive";
      }
      FVar7.Data = (FScriptContainerElement *)0x0;
      local_400.Data = (FScriptContainerElement *)0x0;
      local_3f8[0] = 0;
      local_3f8[1] = 0;
      if (*pwVar9 != L'\0') {
        sVar3 = wcslen(pwVar9);
        uVar4 = (int)sVar3 + 1;
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
        }
        if (0 < (int)uVar4) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar4,&local_400,0,local_3f8 + 1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar4,&local_400,local_3f8,local_3f8 + 1);
        FVar7.Data = local_400.Data;
        FGenericPlatformString::Memcpy(local_400.Data,pwVar9,(longlong)(int)uVar4 * 2);
      }
      _Src.Data = local_420.Data.AllocatorInstance.Data;
      pcVar1 = *(code **)(local_3d0->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_3c8,
                 L"Algo::EditDistance return the wrong distance between 2 string (A \'%s\', B \'%s\', case \'%s\', result \'%d\', expected \'%d\')."
                );
      (*pcVar1)(local_3d0,&local_3c8);
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
    }
    if (_Src_00.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src_00.Data);
    }
    if (_Src.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src.Data);
    }
    if (piVar8 + 2 == (int *)&stack0xffffffffffffffd8) break;
    local_424 = piVar8[6];
    piVar8 = piVar8 + 6;
  }
  return;
}

// TestEditDistanceArray @ 1415f9a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAlgosTestBase::TestEditDistanceArray(FAlgosTestBase *this)

{
  wchar_t *pwVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FAlgosTestBase *pFVar8;
  int iVar9;
  size_t sVar10;
  wchar_t **ppwVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_248 [32];
  ForAnyElementType local_208;
  int local_200 [2];
  ForAnyElementType local_1f8;
  int local_1f0 [4];
  FAlgosTestBase *local_1e0;
  FString local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  wchar_t **local_1c0;
  undefined4 local_1b8;
  wchar_t *local_1a8;
  wchar_t *local_1a0;
  ForAnyElementType local_198;
  undefined4 local_190;
  int local_18c;
  ForAnyElementType local_188;
  undefined4 local_180;
  int local_17c [3];
  wchar_t *local_170;
  wchar_t *local_168;
  ForAnyElementType local_160;
  undefined4 local_158;
  int local_154;
  ForAnyElementType local_150;
  undefined4 local_148;
  int local_144 [3];
  wchar_t *local_138;
  wchar_t *local_130;
  ForAnyElementType local_128;
  undefined4 local_120;
  int local_11c;
  ForAnyElementType local_118;
  undefined4 local_110;
  int local_10c [3];
  wchar_t *local_100;
  wchar_t *local_f8;
  ForAnyElementType local_f0;
  undefined4 local_e8;
  int local_e4;
  ForAnyElementType local_e0;
  undefined4 local_d8;
  int local_d4 [3];
  wchar_t *local_c8;
  wchar_t *local_c0;
  ForAnyElementType local_b8;
  undefined4 local_b0;
  int local_ac;
  ForAnyElementType local_a8;
  undefined4 local_a0;
  int local_9c [3];
  wchar_t *local_90;
  wchar_t *local_88;
  ForAnyElementType local_80;
  undefined4 local_78;
  int local_74;
  void *local_70;
  undefined8 local_68;
  undefined4 local_60;
  wchar_t *local_58 [6];
  
  uVar4 = _UNK_150631e38;
  pFVar3 = ___xmm_00000004000000030000000200000001;
  local_58[0] = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStackY_248);
  local_1a8 = L"{1, 2, 3, 4}";
  local_1a0 = L"{1, 2, 3, 4}";
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 4;
  local_1e0 = this;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_198,4,&local_18c);
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  *(FScriptContainerElement **)local_198.Data = pFVar3;
  *(undefined8 *)(local_198.Data + 8) = uVar4;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_188,4,local_17c);
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  *(FScriptContainerElement **)local_188.Data = pFVar3;
  *(undefined8 *)(local_188.Data + 8) = uVar4;
  local_17c[1] = 0;
  local_168 = L"{1, 2, 3, 10}";
  local_170 = L"{1, 2, 3, 4}";
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_160,4,&local_154);
  uVar6 = _UNK_150631ee8;
  pFVar5 = ___xmm_0000000a000000030000000200000001;
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  *(FScriptContainerElement **)local_160.Data = pFVar3;
  *(undefined8 *)(local_160.Data + 8) = uVar4;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_150,4,local_144);
  uVar7 = _UNK_150631ee8;
  local_1d8.Data.AllocatorInstance.Data = pFVar5;
  _UNK_150631ee8 = (int)uVar6;
  _UNK_150631eec = SUB84(uVar6,4);
  local_1d8.Data.ArrayNum = _UNK_150631ee8;
  local_1d8.Data.ArrayMax = _UNK_150631eec;
  _UNK_150631ee8 = uVar7;
  *(FScriptContainerElement **)local_150.Data = pFVar5;
  *(undefined8 *)(local_150.Data + 8) = uVar6;
  local_144[1] = 1;
  local_130 = L"{1, 2, 3}";
  local_138 = L"{1, 2, 3, 4}";
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_128,4,&local_11c);
  local_1c0 = (wchar_t **)&DAT_200000001;
  local_1b8 = 3;
  *(FScriptContainerElement **)local_128.Data = pFVar3;
  *(undefined8 *)(local_128.Data + 8) = uVar4;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  local_110 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_118,3,local_10c);
  *(wchar_t ***)local_118.Data = local_1c0;
  *(undefined4 *)(local_118.Data + 8) = local_1b8;
  local_f8 = L"{1, 2, 3, 4, 5}";
  local_10c[1] = 1;
  local_100 = L"{1, 2, 3, 4}";
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_f0,4,&local_e4);
  local_1c8 = 5;
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  *(FScriptContainerElement **)local_f0.Data = pFVar3;
  *(undefined8 *)(local_f0.Data + 8) = uVar4;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_e0,5,local_d4);
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  *(FScriptContainerElement **)local_e0.Data = pFVar3;
  *(undefined8 *)(local_e0.Data + 8) = uVar4;
  *(undefined4 *)(local_e0.Data + 0x10) = local_1c8;
  local_c0 = L"{1, 2, 3, 4, 5, 6}";
  local_d4[1] = 1;
  local_c8 = L"{1, 2, 3, 4}";
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_b8,4,&local_ac);
  local_1c8 = 5;
  uStack_1c4 = 6;
  *(FScriptContainerElement **)local_b8.Data = pFVar3;
  *(undefined8 *)(local_b8.Data + 8) = uVar4;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  local_a0 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_a8,6,local_9c);
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  *(FScriptContainerElement **)local_a8.Data = pFVar3;
  *(undefined8 *)(local_a8.Data + 8) = uVar4;
  *(ulonglong *)(local_a8.Data + 0x10) = CONCAT44(uStack_1c4,local_1c8);
  local_88 = L"{}";
  local_9c[1] = 2;
  local_90 = L"{1, 2, 3, 4}";
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_80,4,&local_74);
  ppwVar11 = &local_1a0;
  local_1d8.Data.AllocatorInstance.Data = pFVar3;
  local_1d8.Data._8_8_ = uVar4;
  *(FScriptContainerElement **)local_80.Data = pFVar3;
  *(undefined8 *)(local_80.Data + 8) = uVar4;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = 4;
  do {
    FVar12.Data = (FScriptContainerElement *)0x0;
    pwVar1 = *ppwVar11;
    local_1f0[2] = *(int *)(ppwVar11 + 5);
    local_208.Data = (FScriptContainerElement *)0x0;
    local_200[0] = 0;
    local_200[1] = 0;
    FVar14.Data = FVar12.Data;
    local_1c0 = ppwVar11;
    if ((pwVar1 != (wchar_t *)0x0) && (*pwVar1 != L'\0')) {
      sVar10 = wcslen(pwVar1);
      uVar13 = (int)sVar10 + 1;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar13,&local_208,0,local_200 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,&local_208,local_200,local_200 + 1);
      FVar14.Data = local_208.Data;
      FGenericPlatformString::Memcpy(local_208.Data,pwVar1,(longlong)(int)uVar13 * 2);
    }
    pwVar1 = ppwVar11[-1];
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0[0] = 0;
    local_1f0[1] = 0;
    if ((pwVar1 != (wchar_t *)0x0) && (*pwVar1 != L'\0')) {
      sVar10 = wcslen(pwVar1);
      uVar13 = (int)sVar10 + 1;
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
      }
      if (0 < (int)uVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar13,&local_1f8,0,local_1f0 + 1);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar13,&local_1f8,local_1f0,local_1f0 + 1);
      FVar12.Data = local_1f8.Data;
      FGenericPlatformString::Memcpy(local_1f8.Data,pwVar1,(longlong)(int)uVar13 * 2);
    }
    iVar9 = Algo::
            LevenshteinDistance<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                      ((TArray<int,TSizedDefaultAllocator<32>_> *)(ppwVar11 + 1),
                       (TArray<int,TSizedDefaultAllocator<32>_> *)(ppwVar11 + 3));
    pFVar8 = local_1e0;
    if (iVar9 != local_1f0[2]) {
      pcVar2 = *(code **)(local_1e0->_padding_ + 0x28);
      ::FString::PrintfImpl
                (&local_1d8,
                 L"Algo::EditDistance return the wrong distance between 2 array (A \'%s\', B \'%s\', result \'%d\', expected \'%d\')."
                );
      (*pcVar2)(pFVar8,&local_1d8,0);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    if (FVar14.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar14.Data);
    }
    ppwVar11 = ppwVar11 + 7;
  } while (local_1c0 + 6 != local_58);
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  if (local_198.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data);
  }
  return;
}

// TestIncludes @ 1415fa210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAlgosTestBase::TestIncludes(FAlgosTestBase *this)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_3c8 [32];
  TLess<void> local_388;
  ForAnyElementType local_380;
  int local_378;
  int local_374;
  TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_> local_370;
  ForAnyElementType local_360;
  int local_358;
  int local_354;
  ForAnyElementType local_350;
  int local_348 [2];
  ForAnyElementType local_340;
  int local_338 [2];
  ForAnyElementType local_330;
  int local_328 [2];
  ForAnyElementType local_320;
  int local_318 [2];
  ForAnyElementType local_310;
  int local_308 [2];
  ForAnyElementType local_300;
  int local_2f8 [2];
  ForAnyElementType local_2f0;
  int local_2e8 [2];
  ForAnyElementType local_2e0;
  int local_2d8 [2];
  ForAnyElementType local_2d0;
  int local_2c8 [2];
  ForAnyElementType local_2c0;
  int local_2b8 [2];
  ForAnyElementType local_2b0;
  int local_2a8 [2];
  ForAnyElementType local_2a0;
  int local_298 [2];
  ForAnyElementType local_290;
  int local_288 [2];
  ForAnyElementType local_280;
  int local_278 [2];
  ForAnyElementType local_270;
  int local_268 [2];
  ForAnyElementType local_260;
  int local_258 [2];
  TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_> local_250;
  int local_240 [4];
  int local_230 [4];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  initializer_list<FAlgosTestBase::FTestData> local_1e8;
  initializer_list<FAlgosTestBase::FTestData> local_1d8;
  FTestData local_1c8;
  FScriptContainerElement *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 local_19c;
  FScriptContainerElement *local_198;
  int local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined1 local_180 [8];
  FTestData local_178;
  FScriptContainerElement *local_160;
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c;
  FScriptContainerElement *local_148;
  int local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_130 [8];
  FTestData local_128;
  FScriptContainerElement *local_110;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  FScriptContainerElement *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  FScriptContainerElement *local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  FScriptContainerElement *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_b0 [8];
  FTestData local_a8;
  FScriptContainerElement *local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  FScriptContainerElement *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  FScriptContainerElement *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  FScriptContainerElement *local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  lVar15 = 3;
  piVar11 = (int *)0x0;
  local_230[0] = 1;
  local_220 = ___xmm_00000004000000030000000200000001;
  uStack_218 = _UNK_150631e38;
  lVar16 = 5;
  local_230[1] = 3;
  local_208 = ___xmm_00000002000000030000000400000005;
  uStack_200 = _UNK_150631de8;
  local_210 = 5;
  local_230[2] = 4;
  local_1f8 = 1;
  local_240[0] = 4;
  local_240[1] = 3;
  local_240[2] = 1;
  piVar9 = piVar11;
  piVar12 = piVar11;
  do {
    piVar10 = piVar11;
    piVar8 = piVar11;
    if (&DAT_00000004 < piVar12) {
LAB_1415fa2ec:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::Includes(FixedArrayA, FixedArrayA)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x24b,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
    iVar2 = *(int *)((longlong)&local_220 + (longlong)piVar12 * 4);
    iVar3 = *(int *)((longlong)&local_220 + (longlong)piVar9 * 4);
    if (iVar3 < iVar2) goto LAB_1415fa2ec;
    piVar7 = (int *)((longlong)piVar9 + 1);
    if (iVar2 < iVar3) {
      piVar7 = piVar9;
    }
    piVar12 = (int *)((longlong)piVar12 + 1);
    piVar9 = piVar7;
  } while (piVar7 < &DAT_00000005);
  do {
    piVar9 = piVar11;
    piVar12 = piVar11;
    if (&DAT_00000004 < piVar8) {
LAB_1415fa344:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::Includes(FixedArrayA, FixedArrayB)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x24d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
    iVar2 = *(int *)((longlong)&local_220 + (longlong)piVar8 * 4);
    if (local_230[(longlong)piVar10] < iVar2) goto LAB_1415fa344;
    piVar7 = (int *)((longlong)piVar10 + 1);
    if (iVar2 < local_230[(longlong)piVar10]) {
      piVar7 = piVar10;
    }
    piVar10 = piVar7;
    piVar8 = (int *)((longlong)piVar8 + 1);
  } while (piVar7 < &DAT_00000003);
  do {
    piVar10 = piVar11;
    piVar8 = piVar11;
    if (-1 < (longlong)piVar12) goto LAB_1415fa3c2;
    iVar2 = *(int *)((longlong)&local_220 + (longlong)piVar9 * 4);
    if (iVar2 < *piVar12) goto LAB_1415fa3c2;
    piVar7 = (int *)((longlong)piVar9 + 1);
    if (*piVar12 < iVar2) {
      piVar7 = piVar9;
    }
    piVar9 = piVar7;
    piVar12 = piVar12 + 1;
  } while (piVar7 < &DAT_00000005);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(Empty, FixedArrayA)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x253,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa3c2:
  do {
    piVar9 = piVar11;
    piVar12 = piVar11;
    if (&DAT_00000002 < piVar8) goto LAB_1415fa418;
    iVar2 = *(int *)((longlong)&local_220 + (longlong)piVar10 * 4);
    if (iVar2 < local_230[(longlong)piVar8]) goto LAB_1415fa418;
    piVar7 = (int *)((longlong)piVar10 + 1);
    if (local_230[(longlong)piVar8] < iVar2) {
      piVar7 = piVar10;
    }
    piVar10 = piVar7;
    piVar8 = (int *)((longlong)piVar8 + 1);
  } while (piVar7 < &DAT_00000005);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(FixedArrayB, FixedArrayA)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x255,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa418:
  do {
    piVar10 = piVar11;
    piVar8 = piVar11;
    if (&DAT_00000004 < piVar12) goto LAB_1415fa470;
    iVar2 = *(int *)((longlong)&local_208 + (longlong)piVar12 * 4);
    if (local_230[(longlong)piVar9] < iVar2) goto LAB_1415fa470;
    piVar7 = (int *)((longlong)piVar9 + 1);
    if (iVar2 < local_230[(longlong)piVar9]) {
      piVar7 = piVar9;
    }
    piVar9 = piVar7;
    piVar12 = (int *)((longlong)piVar12 + 1);
  } while (piVar7 < &DAT_00000003);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(FixedArrayC, FixedArrayB)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,599,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa470:
  do {
    piVar9 = piVar11;
    piVar12 = piVar11;
    if (&DAT_00000004 < piVar8) goto LAB_1415fa4c6;
    iVar2 = *(int *)((longlong)&local_220 + (longlong)piVar8 * 4);
    if (local_240[(longlong)piVar10] < iVar2) goto LAB_1415fa4c6;
    piVar7 = (int *)((longlong)piVar10 + 1);
    if (iVar2 < local_240[(longlong)piVar10]) {
      piVar7 = piVar10;
    }
    piVar10 = piVar7;
    piVar8 = (int *)((longlong)piVar8 + 1);
  } while (piVar7 < &DAT_00000003);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(FixedArrayA, FixedArrayD)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x259,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa4c6:
  do {
    piVar10 = piVar11;
    piVar8 = piVar11;
    if (&DAT_00000004 < piVar12) {
LAB_1415fa4f2:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::Includes(FixedArrayC, FixedArrayC, TGreater<>())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x25c,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
    iVar2 = *(int *)((longlong)&local_208 + (longlong)piVar9 * 4);
    iVar3 = *(int *)((longlong)&local_208 + (longlong)piVar12 * 4);
    if (iVar3 < iVar2) goto LAB_1415fa4f2;
    piVar7 = (int *)((longlong)piVar9 + 1);
    if (iVar2 < iVar3) {
      piVar7 = piVar9;
    }
    piVar9 = piVar7;
    piVar12 = (int *)((longlong)piVar12 + 1);
  } while (piVar7 < &DAT_00000005);
  do {
    piVar9 = piVar11;
    piVar12 = piVar11;
    if (&DAT_00000004 < piVar8) {
LAB_1415fa54c:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::Includes(FixedArrayC, FixedArrayD, TGreater<>())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x25e,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      break;
    }
    iVar2 = *(int *)((longlong)&local_208 + (longlong)piVar8 * 4);
    if (iVar2 < local_240[(longlong)piVar10]) goto LAB_1415fa54c;
    piVar7 = (int *)((longlong)piVar10 + 1);
    if (local_240[(longlong)piVar10] < iVar2) {
      piVar7 = piVar10;
    }
    piVar10 = piVar7;
    piVar8 = (int *)((longlong)piVar8 + 1);
  } while (piVar7 < &DAT_00000003);
  do {
    piVar10 = piVar11;
    piVar8 = piVar11;
    if (-1 < (longlong)piVar12) goto LAB_1415fa5d0;
    iVar2 = *(int *)((longlong)&local_208 + (longlong)piVar9 * 4);
    if (*piVar12 < iVar2) goto LAB_1415fa5d0;
    piVar7 = (int *)((longlong)piVar9 + 1);
    if (iVar2 < *piVar12) {
      piVar7 = piVar9;
    }
    piVar9 = piVar7;
    piVar12 = piVar12 + 1;
  } while (piVar7 < &DAT_00000005);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(Empty, FixedArrayC, TGreater<>())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x264,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa5d0:
  do {
    piVar9 = piVar11;
    piVar12 = piVar11;
    if (&DAT_00000002 < piVar8) goto LAB_1415fa626;
    iVar2 = *(int *)((longlong)&local_208 + (longlong)piVar10 * 4);
    if (local_240[(longlong)piVar8] < iVar2) goto LAB_1415fa626;
    piVar7 = (int *)((longlong)piVar10 + 1);
    if (iVar2 < local_240[(longlong)piVar8]) {
      piVar7 = piVar10;
    }
    piVar10 = piVar7;
    piVar8 = (int *)((longlong)piVar8 + 1);
  } while (piVar7 < &DAT_00000005);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(FixedArrayD, FixedArrayC, TGreater<>())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x266,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa626:
  do {
    piVar10 = piVar11;
    if (&DAT_00000004 < piVar12) goto LAB_1415fa680;
    iVar2 = *(int *)((longlong)&local_220 + (longlong)piVar12 * 4);
    if (iVar2 < local_240[(longlong)piVar9]) goto LAB_1415fa680;
    piVar8 = (int *)((longlong)piVar9 + 1);
    if (local_240[(longlong)piVar9] < iVar2) {
      piVar8 = piVar9;
    }
    piVar9 = piVar8;
    piVar12 = (int *)((longlong)piVar12 + 1);
  } while (piVar8 < &DAT_00000003);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(FixedArrayA, FixedArrayD, TGreater<>())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x268,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa680:
  do {
    if (&DAT_00000004 < piVar10) goto LAB_1415fa6d0;
    iVar2 = *(int *)((longlong)&local_208 + (longlong)piVar10 * 4);
    if (iVar2 < local_230[(longlong)piVar11]) goto LAB_1415fa6d0;
    piVar9 = (int *)((longlong)piVar11 + 1);
    if (local_230[(longlong)piVar11] < iVar2) {
      piVar9 = piVar11;
    }
    piVar11 = piVar9;
    piVar10 = (int *)((longlong)piVar10 + 1);
  } while (piVar9 < &DAT_00000003);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Algo::Includes(FixedArrayC, FixedArrayB, TGreater<>())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x26a,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1415fa6d0:
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348[0] = 0;
  local_348[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_350,0,local_348 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_350,local_348,local_348 + 1);
  FVar5.Data = local_350.Data;
  FGenericPlatformString::Memcpy(local_350.Data,&u_1,4);
  local_a8.Name.Data.ArrayNum = local_348[0];
  local_a8.Name.Data.ArrayMax = local_348[1];
  local_a8.Name.Data.AllocatorInstance.Data = FVar5.Data;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348[0] = 0;
  local_348[1] = 0;
  local_a8.Age = 1;
  local_a8.bRetired = false;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338[0] = 0;
  local_338[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_340,0,local_338 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_340,local_338,local_338 + 1);
  FVar5.Data = local_340.Data;
  FGenericPlatformString::Memcpy(local_340.Data,L"2",4);
  local_88 = local_338[0];
  local_84 = local_338[1];
  local_90 = FVar5.Data;
  local_340.Data = (FScriptContainerElement *)0x0;
  local_338[0] = 0;
  local_338[1] = 0;
  local_80 = 2;
  local_7c = 0;
  local_330.Data = (FScriptContainerElement *)0x0;
  local_328[0] = 0;
  local_328[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_330,0,local_328 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_330,local_328,local_328 + 1);
  FVar5.Data = local_330.Data;
  FGenericPlatformString::Memcpy(local_330.Data,L"3",4);
  local_70 = local_328[0];
  local_6c = local_328[1];
  local_78 = FVar5.Data;
  local_330.Data = (FScriptContainerElement *)0x0;
  local_328[0] = 0;
  local_328[1] = 0;
  local_68 = 3;
  local_64 = 0;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318[0] = 0;
  local_318[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_320,0,local_318 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_320,local_318,local_318 + 1);
  FVar5.Data = local_320.Data;
  FGenericPlatformString::Memcpy(local_320.Data,L"4",4);
  local_58 = local_318[0];
  local_54 = local_318[1];
  local_60 = FVar5.Data;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318[0] = 0;
  local_318[1] = 0;
  local_50 = 4;
  local_4c = 0;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308[0] = 0;
  local_308[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_310,0,local_308 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_310,local_308,local_308 + 1);
  FVar5.Data = local_310.Data;
  FGenericPlatformString::Memcpy(local_310.Data,L"5",4);
  local_40 = local_308[0];
  local_3c = local_308[1];
  local_48 = FVar5.Data;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308[0] = 0;
  local_308[1] = 0;
  local_38 = 5;
  local_34 = 0;
  local_380.Data = (FScriptContainerElement *)0x0;
  local_378 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,5,0,&local_380,5,&local_374);
  ConstructItems<FAlgosTestBase::FTestData,FAlgosTestBase::FTestData,int>
            (local_380.Data,&local_a8,5);
  puVar14 = local_30;
  lVar13 = 5;
  do {
    puVar1 = (undefined8 *)(puVar14 + -0x18);
    puVar14 = puVar14 + -0x18;
    lVar13 = lVar13 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar13 != 0);
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_300,0,local_2f8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_300,local_2f8,local_2f8 + 1);
  FVar5.Data = local_300.Data;
  FGenericPlatformString::Memcpy(local_300.Data,&u_1,4);
  local_178.Name.Data.ArrayNum = local_2f8[0];
  local_178.Name.Data.ArrayMax = local_2f8[1];
  local_178.Name.Data.AllocatorInstance.Data = FVar5.Data;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  local_178.Age = 1;
  local_178.bRetired = false;
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8[0] = 0;
  local_2e8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2f0,0,local_2e8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2f0,local_2e8,local_2e8 + 1);
  FVar5.Data = local_2f0.Data;
  FGenericPlatformString::Memcpy(local_2f0.Data,L"3",4);
  local_158 = local_2e8[0];
  local_154 = local_2e8[1];
  local_160 = FVar5.Data;
  local_2f0.Data = (FScriptContainerElement *)0x0;
  local_2e8[0] = 0;
  local_2e8[1] = 0;
  local_150 = 3;
  local_14c = 0;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8[0] = 0;
  local_2d8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2e0,0,local_2d8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2e0,local_2d8,local_2d8 + 1);
  FVar5.Data = local_2e0.Data;
  FGenericPlatformString::Memcpy(local_2e0.Data,L"4",4);
  local_140 = local_2d8[0];
  local_13c = local_2d8[1];
  local_148 = FVar5.Data;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8[0] = 0;
  local_2d8[1] = 0;
  local_138 = 4;
  local_134 = 0;
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,3,0,&local_360,3,&local_354);
  ConstructItems<FAlgosTestBase::FTestData,FAlgosTestBase::FTestData,int>
            (local_360.Data,&local_178,3);
  puVar14 = local_130;
  lVar13 = 3;
  do {
    puVar1 = (undefined8 *)(puVar14 + -0x18);
    puVar14 = puVar14 + -0x18;
    lVar13 = lVar13 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar13 != 0);
  local_2d0.Data = (FScriptContainerElement *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2d0,0,local_2c8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2d0,local_2c8,local_2c8 + 1);
  FVar5.Data = local_2d0.Data;
  FGenericPlatformString::Memcpy(local_2d0.Data,L"5",4);
  local_128.Name.Data.ArrayNum = local_2c8[0];
  local_128.Name.Data.ArrayMax = local_2c8[1];
  local_128.Name.Data.AllocatorInstance.Data = FVar5.Data;
  local_2d0.Data = (FScriptContainerElement *)0x0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_128.Age = 5;
  local_128.bRetired = false;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8[0] = 0;
  local_2b8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2c0,0,local_2b8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2c0,local_2b8,local_2b8 + 1);
  FVar5.Data = local_2c0.Data;
  FGenericPlatformString::Memcpy(local_2c0.Data,L"4",4);
  local_108 = local_2b8[0];
  local_104 = local_2b8[1];
  local_110 = FVar5.Data;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8[0] = 0;
  local_2b8[1] = 0;
  local_100 = 4;
  local_fc = 0;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2b0,0,local_2a8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2b0,local_2a8,local_2a8 + 1);
  FVar5.Data = local_2b0.Data;
  FGenericPlatformString::Memcpy(local_2b0.Data,L"3",4);
  local_f0 = local_2a8[0];
  local_ec = local_2a8[1];
  local_f8 = FVar5.Data;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  local_e8 = 3;
  local_e4 = 0;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  local_298[0] = 0;
  local_298[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2a0,0,local_298 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_2a0,local_298,local_298 + 1);
  FVar5.Data = local_2a0.Data;
  FGenericPlatformString::Memcpy(local_2a0.Data,L"2",4);
  local_d8 = local_298[0];
  local_d4 = local_298[1];
  local_e0 = FVar5.Data;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  local_298[0] = 0;
  local_298[1] = 0;
  local_d0 = 2;
  local_cc = 0;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288[0] = 0;
  local_288[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_290,0,local_288 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_290,local_288,local_288 + 1);
  FVar5.Data = local_290.Data;
  FGenericPlatformString::Memcpy(local_290.Data,&u_1,4);
  local_c0 = local_288[0];
  local_bc = local_288[1];
  local_c8 = FVar5.Data;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_1e8._First = &local_128;
  local_288[0] = 0;
  local_288[1] = 0;
  local_1e8._Last = (FTestData *)local_b0;
  local_b8 = 1;
  local_b4 = 0;
  TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_>::
  TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_>(&local_370,&local_1e8);
  puVar14 = local_b0;
  do {
    puVar1 = (undefined8 *)(puVar14 + -0x18);
    puVar14 = puVar14 + -0x18;
    lVar16 = lVar16 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar16 != 0);
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278[0] = 0;
  local_278[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_280,0,local_278 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_280,local_278,local_278 + 1);
  FVar5.Data = local_280.Data;
  FGenericPlatformString::Memcpy(local_280.Data,L"4",4);
  local_1c8.Name.Data.ArrayNum = local_278[0];
  local_1c8.Name.Data.ArrayMax = local_278[1];
  local_1c8.Name.Data.AllocatorInstance.Data = FVar5.Data;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278[0] = 0;
  local_278[1] = 0;
  local_1c8.Age = 4;
  local_1c8.bRetired = false;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268[0] = 0;
  local_268[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_270,0,local_268 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_270,local_268,local_268 + 1);
  FVar5.Data = local_270.Data;
  FGenericPlatformString::Memcpy(local_270.Data,L"3",4);
  local_1a8 = local_268[0];
  local_1a4 = local_268[1];
  local_1b0 = FVar5.Data;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268[0] = 0;
  local_268[1] = 0;
  local_1a0 = 3;
  local_19c = 0;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258[0] = 0;
  local_258[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_260,0,local_258 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_260,local_258,local_258 + 1);
  FVar5.Data = local_260.Data;
  FGenericPlatformString::Memcpy(local_260.Data,&u_1,4);
  local_190 = local_258[0];
  local_18c = local_258[1];
  local_1d8._First = &local_1c8;
  local_1d8._Last = (FTestData *)local_180;
  local_198 = FVar5.Data;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258[0] = 0;
  local_258[1] = 0;
  local_188 = 1;
  local_184 = 0;
  TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_>::
  TArray<FAlgosTestBase::FTestData,TSizedDefaultAllocator<32>_>(&local_250,&local_1d8);
  puVar14 = local_180;
  do {
    puVar1 = (undefined8 *)(puVar14 + -0x18);
    puVar14 = puVar14 + -0x18;
    lVar15 = lVar15 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar15 != 0);
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)local_380.Data,local_378,(FTestData *)local_380.Data,local_378,
                     (pdm_788a3804)0x0,local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(DynamicArrayA, DynamicArrayA, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x28e,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)local_380.Data,local_378,(FTestData *)local_360.Data,local_358,
                     (pdm_788a3804)0x0,local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(DynamicArrayA, DynamicArrayB, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x290,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)local_380.Data,local_378,(FTestData *)0x0,0,(pdm_788a3804)0x0,
                     local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(DynamicArrayA, Empty, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x292,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)0x0,0,(FTestData *)0x0,0,(pdm_788a3804)0x0,local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(Empty, Empty, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x294,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)0x0,0,(FTestData *)local_380.Data,local_378,(pdm_788a3804)0x0,
                     local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(Empty, DynamicArrayA, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x296,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)local_360.Data,local_358,(FTestData *)local_380.Data,local_378,
                     (pdm_788a3804)0x0,local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(DynamicArrayB, DynamicArrayA, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x298,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum,
                     (FTestData *)local_360.Data,local_358,(pdm_788a3804)0x0,local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(DynamicArrayC, DynamicArrayB, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x29a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TLess<void>_>
                    ((FTestData *)local_380.Data,local_378,
                     (FTestData *)local_250.AllocatorInstance.Data,local_250.ArrayNum,
                     (pdm_788a3804)0x0,local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(DynamicArrayA, DynamicArrayD, &FTestData::Name)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x29c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum,
                     (FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum,
                     (pdm_788a3804)0x0,(TGreater<void>)local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(DynamicArrayC, DynamicArrayC, &FTestData::Name, TGreater<>())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x29f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum,
                     (FTestData *)local_250.AllocatorInstance.Data,local_250.ArrayNum,
                     (pdm_788a3804)0x0,(TGreater<void>)local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(DynamicArrayC, DynamicArrayD, &FTestData::Name, TGreater<>())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x2a1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum,
                     (FTestData *)0x0,0,(pdm_788a3804)0x0,(TGreater<void>)local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(DynamicArrayC, Empty, &FTestData::Name, TGreater<>())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x2a3,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)0x0,0,(FTestData *)0x0,0,(pdm_788a3804)0x0,
                     (TGreater<void>)local_388);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IncludesBy(Empty, Empty, &FTestData::Name, TGreater<>())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x2a5,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)0x0,0,(FTestData *)local_370.AllocatorInstance.Data,
                     local_370.ArrayNum,(pdm_788a3804)0x0,(TGreater<void>)local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(Empty, DynamicArrayC, &FTestData::Name, TGreater<>())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x2a7,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)local_250.AllocatorInstance.Data,local_250.ArrayNum,
                     (FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum,
                     (pdm_788a3804)0x0,(TGreater<void>)local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(DynamicArrayD, DynamicArrayC, &FTestData::Name, TGreater<>())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x2a9,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)local_380.Data,local_378,
                     (FTestData *)local_250.AllocatorInstance.Data,local_250.ArrayNum,
                     (pdm_788a3804)0x0,(TGreater<void>)local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(DynamicArrayA, DynamicArrayD, &FTestData::Name, TGreater<>())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x2ab,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = Algo::Private::
          Includes<FAlgosTestBase::FTestData,int,FAlgosTestBase::FTestData,int,FString_FAlgosTestBase::FTestData::*,TGreater<void>_>
                    ((FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum,
                     (FTestData *)local_360.Data,local_358,(pdm_788a3804)0x0,
                     (TGreater<void>)local_388);
  if ((bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Algo::IncludesBy(DynamicArrayC, DynamicArrayB, &FTestData::Name, TGreater<>())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x2ad,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  DestructItems<FAlgosTestBase::FTestData,int>
            ((FTestData *)local_250.AllocatorInstance.Data,local_250.ArrayNum);
  if ((FTestData *)local_250.AllocatorInstance.Data != (FTestData *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  DestructItems<FAlgosTestBase::FTestData,int>
            ((FTestData *)local_370.AllocatorInstance.Data,local_370.ArrayNum);
  if ((FTestData *)local_370.AllocatorInstance.Data != (FTestData *)0x0) {
    FMemory::Free(local_370.AllocatorInstance.Data);
  }
  FVar5.Data = local_360.Data;
  DestructItems<FAlgosTestBase::FTestData,int>((FTestData *)local_360.Data,local_358);
  if ((FTestData *)FVar5.Data != (FTestData *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  FVar5.Data = local_380.Data;
  DestructItems<FAlgosTestBase::FTestData,int>((FTestData *)local_380.Data,local_378);
  if ((FTestData *)FVar5.Data != (FTestData *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// TestIndexOf @ 1415fb7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAlgosTestBase::TestIndexOf(FAlgosTestBase *this)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  char *pcVar11;
  char cVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  ForAnyElementType FVar15;
  int iVar16;
  undefined1 auStackY_268 [32];
  ForAnyElementType local_228;
  int local_220;
  int local_21c;
  ForAnyElementType local_218;
  int local_210 [2];
  ForAnyElementType local_208;
  int local_200 [2];
  ForAnyElementType local_1f8;
  int local_1f0 [2];
  ForAnyElementType local_1e8;
  int local_1e0 [2];
  ForAnyElementType local_1d8;
  int local_1d0 [2];
  ForAnyElementType local_1c8;
  int local_1c0 [2];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  FTestData local_198;
  FScriptContainerElement *local_180;
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  FScriptContainerElement *local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  FScriptContainerElement *local_150;
  int local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_13c;
  char local_138 [255];
  char local_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar10 = 0;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210[0] = 0;
  local_210[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_218,0,local_210 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_218,local_210,local_210 + 1);
  FVar15.Data = local_218.Data;
  FGenericPlatformString::Memcpy(local_218.Data,L"Alice",0xc);
  local_198.Name.Data.ArrayNum = local_210[0];
  lVar13 = 4;
  local_198.Name.Data.ArrayMax = local_210[1];
  local_198.Name.Data.AllocatorInstance.Data = FVar15.Data;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210[0] = 0;
  local_210[1] = 0;
  local_198.Age = 0x1f;
  local_198.bRetired = false;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200[0] = 0;
  local_200[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_208,0,local_200 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_208,local_200,local_200 + 1);
  FVar15.Data = local_208.Data;
  FGenericPlatformString::Memcpy(local_208.Data,L"Bob",8);
  local_178 = local_200[0];
  local_174 = local_200[1];
  local_180 = FVar15.Data;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200[0] = 0;
  local_200[1] = 0;
  local_170 = 0x19;
  local_16c = 0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0[0] = 0;
  local_1f0[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_1f8,0,local_1f0 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_1f8,local_1f0,local_1f0 + 1);
  FVar15.Data = local_1f8.Data;
  FGenericPlatformString::Memcpy(local_1f8.Data,L"Charles",0x10);
  local_160 = local_1f0[0];
  local_15c = local_1f0[1];
  local_168 = FVar15.Data;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0[0] = 0;
  local_1f0[1] = 0;
  local_158 = 0x13;
  local_154 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_1e8,0,local_1e0 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_1e8,local_1e0,local_1e0 + 1);
  FVar15.Data = local_1e8.Data;
  FGenericPlatformString::Memcpy(local_1e8.Data,L"Donna",0xc);
  local_148 = local_1e0[0];
  local_144 = local_1e0[1];
  local_150 = FVar15.Data;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  local_140 = 0xd;
  local_13c = 0;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,0,&local_228,4,&local_21c);
  ConstructItems<FAlgosTestBase::FTestData,FAlgosTestBase::FTestData,int>
            (local_228.Data,&local_198,4);
  pcVar11 = local_138;
  do {
    pcVar1 = pcVar11 + -0x18;
    pcVar11 = pcVar11 + -0x18;
    lVar13 = lVar13 + -1;
    if (*(void **)pcVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pcVar1);
    }
  } while (lVar13 != 0);
  local_1b8 = ___xmm_00000006000000060000000400000002;
  uStack_1b0 = _UNK_150631e98;
  local_1a8 = 6;
  local_1a4 = 8;
  uVar6 = uVar10;
  do {
    uVar7 = uVar10;
    if (*(int *)((longlong)&local_1b8 + uVar6 * 4) == 2) {
      if (uVar6 == 0) goto LAB_1415fbb08;
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOf(FixedArray, 2) == 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x164,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fbb08:
  do {
    uVar6 = uVar10;
    if (*(int *)((longlong)&local_1b8 + uVar7 * 4) == 6) {
      if (uVar7 == 2) goto LAB_1415fbb50;
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOf(FixedArray, 6) == 2",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x165,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fbb50:
  do {
    uVar7 = uVar10;
    if (*(int *)((longlong)&local_1b8 + uVar6 * 4) == 8) {
      if (uVar6 == 5) goto LAB_1415fbb91;
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOf(FixedArray, 8) == 5",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x166,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fbb91:
  do {
    if (*(int *)((longlong)&local_1b8 + uVar7 * 4) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IndexOf(FixedArray, 0) == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x167,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 6);
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0[0] = 0;
  local_1d0[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_1d8,0,local_1d0 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_1d8,local_1d0,local_1d0 + 1);
  FVar15.Data = local_1d8.Data;
  FGenericPlatformString::Memcpy(local_1d8.Data,L"Alice",0xc);
  lVar13 = (longlong)local_220;
  iVar5 = local_1d0[0];
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0[0] = 0;
  local_1d0[1] = 0;
  if (0 < lVar13) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      iVar16 = (int)uVar7;
      iVar4 = *(int *)(pFVar14 + -8);
      if (iVar4 == iVar5) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)
                             (((FTestData *)(pFVar14 + -0x10))->Name).Data.AllocatorInstance.Data,
                             (wchar_t *)FVar15.Data);
          bVar3 = iVar4 == 0;
          goto LAB_1415fbc83;
        }
LAB_1415fbc8a:
        if ((*(int *)pFVar14 == 0x1f) && (pFVar14[4] == (FScriptContainerElement)0x0))
        goto LAB_1415fbca9;
      }
      else {
        bVar3 = iVar4 + iVar5 == 1;
LAB_1415fbc83:
        if (bVar3) goto LAB_1415fbc8a;
      }
      uVar7 = (ulonglong)(iVar16 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < lVar13);
  }
  iVar16 = -1;
LAB_1415fbca9:
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  if ((iVar16 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IndexOf(Data, FTestData(L\"Alice\", 31)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x169,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_1c8,0,local_1c0 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_1c8,local_1c0,local_1c0 + 1);
  FVar15.Data = local_1c8.Data;
  FGenericPlatformString::Memcpy(local_1c8.Data,L"Alice",0xc);
  lVar13 = (longlong)local_220;
  iVar5 = local_1c0[0];
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  if (0 < lVar13) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      iVar16 = (int)uVar7;
      iVar4 = *(int *)(pFVar14 + -8);
      if (iVar4 == iVar5) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)
                             (((FTestData *)(pFVar14 + -0x10))->Name).Data.AllocatorInstance.Data,
                             (wchar_t *)FVar15.Data);
          bVar3 = iVar4 == 0;
          goto LAB_1415fbd95;
        }
LAB_1415fbd9c:
        if ((*(int *)pFVar14 == 0x20) && (pFVar14[4] == (FScriptContainerElement)0x0))
        goto LAB_1415fbdbb;
      }
      else {
        bVar3 = iVar4 + iVar5 == 1;
LAB_1415fbd95:
        if (bVar3) goto LAB_1415fbd9c;
      }
      uVar7 = (ulonglong)(iVar16 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < lVar13);
  }
  iVar16 = -1;
LAB_1415fbdbb:
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  if ((iVar16 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IndexOf(Data, FTestData(L\"Alice\", 32)) == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x16a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar13 = (longlong)local_220;
  uVar6 = uVar10;
  FVar15.Data = local_228.Data;
  uVar7 = uVar10;
  if (0 < lVar13) {
    do {
      if ((((FTestData *)FVar15.Data)->Name).Data.ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(((FTestData *)FVar15.Data)->Name).Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp(pwVar9,L"Donna");
      if (iVar5 == 0) {
        if ((int)uVar7 == 3) goto LAB_1415fbe6e;
        break;
      }
      uVar6 = uVar6 + 1;
      FVar15.Data = (FScriptContainerElement *)((longlong)FVar15.Data + 0x18);
      uVar7 = (ulonglong)((int)uVar7 + 1);
    } while ((longlong)uVar6 < lVar13);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOfBy(Data, L\"Donna\", &FTestData::Name) == 3",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x16c,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fbe6e:
  if (0 < (longlong)local_220) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      if (*(int *)pFVar14 == 0x13) {
        if ((int)uVar7 == 2) goto LAB_1415fbec6;
        break;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < (longlong)local_220);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOfBy(Data, 19, &FTestData::Age) == 2",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x16d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fbec6:
  if (0 < (longlong)local_220) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      if (*(int *)pFVar14 == 0) {
        if (((int)uVar7 != -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Algo::IndexOfBy(Data, 0, &FTestData::Age) == INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                               ,0x16e,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < (longlong)local_220);
  }
  if (0 < (longlong)local_220) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      if (*(int *)pFVar14 == 0x13) {
        if ((int)uVar7 == 2) goto LAB_1415fbf77;
        break;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < (longlong)local_220);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOfBy(Data, 19, GetAge) == 2",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x171,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fbf77:
  if (0 < (longlong)local_220) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      if (*(int *)pFVar14 == 0) {
        if (((int)uVar7 != -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Algo::IndexOfBy(Data, 0, GetAge) == INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                               ,0x172,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < (longlong)local_220);
  }
  if (0 < (longlong)local_220) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      if (*(int *)pFVar14 < 0x19) {
        if ((int)uVar7 == 2) goto LAB_1415fc027;
        break;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < (longlong)local_220);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOfByPredicate(Data, [](const FTestData& In) { return In.Age < 25; }) == 2"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x174,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fc027:
  if (0 < (longlong)local_220) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    uVar7 = uVar10;
    do {
      if (0x13 < *(int *)pFVar14) {
        if ((int)uVar7 == 0) goto LAB_1415fc07f;
        break;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar6 = uVar6 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar6 < (longlong)local_220);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOfByPredicate(Data, [](const FTestData& In) { return In.Age > 19; }) == 0"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x175,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fc07f:
  if (0 < (longlong)local_220) {
    pFVar14 = local_228.Data + 0x10;
    uVar6 = uVar10;
    do {
      if (0x1f < *(int *)pFVar14) {
        if (((int)uVar6 != -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Algo::IndexOfByPredicate(Data, [](const FTestData& In) { return In.Age > 31; }) == INDEX_NONE"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                               ,0x176,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar10 = uVar10 + 1;
      pFVar14 = pFVar14 + 0x18;
    } while ((longlong)uVar10 < (longlong)local_220);
  }
  pcVar11 = local_138;
  cVar12 = '\0';
  do {
    *pcVar11 = cVar12;
    pcVar11 = pcVar11 + 1;
    cVar12 = cVar12 + '\x01';
  } while (pcVar11 != &local_39);
  uVar10 = 0;
  do {
    if (local_138[uVar10] == '\x19') {
      if ((char)uVar10 == '\x19') goto LAB_1415fc13e;
      break;
    }
    bVar8 = (char)uVar10 + 1;
    uVar10 = (ulonglong)bVar8;
  } while (bVar8 != 0xff);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOf(TestRange, 25) == 25",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x17a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fc13e:
  uVar10 = 0;
  do {
    if (local_138[uVar10] == -2) {
      if ((char)uVar10 == -2) goto LAB_1415fc17e;
      break;
    }
    bVar8 = (char)uVar10 + 1;
    uVar10 = (ulonglong)bVar8;
  } while (bVar8 != 0xff);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Algo::IndexOf(TestRange, 254) == 254",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                     ,0x17b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1415fc17e:
  uVar10 = 0;
  do {
    if (local_138[uVar10] == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Algo::IndexOf(TestRange, 255) == InvalidIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x17c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      break;
    }
    bVar8 = (char)uVar10 + 1;
    uVar10 = (ulonglong)bVar8;
  } while (bVar8 != 0xff);
  FVar15.Data = local_228.Data;
  DestructItems<FAlgosTestBase::FTestData,int>((FTestData *)local_228.Data,local_220);
  if ((FTestData *)FVar15.Data != (FTestData *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return;
}

// TestMismatch @ 1415fc210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAlgosTestBase::TestMismatch(FAlgosTestBase *this)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  FString *pFVar17;
  ulonglong *puVar18;
  ForAnyElementType FVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ForAnyElementType FVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auStackY_378 [32];
  ForAnyElementType local_338;
  int local_330 [2];
  ForAnyElementType local_328;
  int local_320 [2];
  ForAnyElementType local_318;
  int local_310 [2];
  ForAnyElementType local_308;
  int local_300;
  int local_2fc;
  ForAnyElementType local_2f8;
  int local_2f0;
  int local_2ec;
  <lambda_3> local_2e8;
  TArray<_public:_void___cdecl_FAlgosTestBase::TestMismatch(void)_::_230_::FStringWrapper,TSizedDefaultAllocator<32>_>
  local_2e0;
  ForAnyElementType local_2d0;
  int local_2c8;
  int local_2c4;
  ForAnyElementType local_2c0;
  int local_2b8;
  int local_2b4;
  ForAnyElementType local_2b0;
  int local_2a8;
  int local_2a4;
  ForAnyElementType local_2a0;
  int local_298;
  int local_294;
  TArray<_public:_void___cdecl_FAlgosTestBase::TestMismatch(void)_::_230_::FStringWrapper,TSizedDefaultAllocator<32>_>
  local_290;
  TArray<_public:_void___cdecl_FAlgosTestBase::TestMismatch(void)_::_230_::FStringWrapper,TSizedDefaultAllocator<32>_>
  local_280;
  TArray<_public:_void___cdecl_FAlgosTestBase::TestMismatch(void)_::_230_::FStringWrapper,TSizedDefaultAllocator<32>_>
  local_270;
  FStringWrapper local_258;
  ForAnyElementType local_248;
  int local_240 [2];
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  ulonglong local_58 [6];
  
  uVar5 = _UNK_150631e38;
  uVar4 = ___xmm_00000004000000030000000200000001;
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_378;
  iVar25 = 0;
  lVar28 = 6;
  local_1e8 = 5;
  uStack_1e4 = 6;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_308,6,&local_2fc);
  FVar26.Data = local_308.Data;
  lVar27 = 9;
  *(undefined8 *)local_308.Data = uVar4;
  *(undefined8 *)(local_308.Data + 8) = uVar5;
  uVar7 = _UNK_150631ea8;
  uVar6 = ___xmm_00000007000000030000000200000001;
  local_1f8 = uVar4;
  uStack_1f0 = uVar5;
  *(ulonglong *)(local_308.Data + 0x10) = CONCAT44(uStack_1e4,local_1e8);
  local_1d0 = 8;
  uStack_1cc = 9;
  local_2d0.Data = (FScriptContainerElement *)0x0;
  local_2c8 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_2d0,6,&local_2c4);
  uVar9 = _UNK_150631ed8;
  uVar8 = ___xmm_00000008000000070000000600000005;
  local_1e0 = uVar6;
  uStack_1d8 = uVar7;
  local_178 = 9;
  *(undefined8 *)local_2d0.Data = uVar6;
  *(undefined8 *)(local_2d0.Data + 8) = uVar7;
  uVar5 = _UNK_150631e38;
  uVar4 = ___xmm_00000004000000030000000200000001;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  *(ulonglong *)(local_2d0.Data + 0x10) = CONCAT44(uStack_1cc,local_1d0);
  local_2a8 = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,9,0,&local_2b0,9,&local_2a4);
  iVar24 = local_300;
  iVar11 = 0;
  local_198 = uVar4;
  uStack_190 = uVar5;
  *(undefined8 *)local_2b0.Data = uVar4;
  *(undefined8 *)(local_2b0.Data + 8) = uVar5;
  *(undefined8 *)(local_2b0.Data + 0x10) = uVar8;
  *(undefined8 *)(local_2b0.Data + 0x18) = uVar9;
  *(int *)(local_2b0.Data + 0x20) = 9;
  local_188 = uVar8;
  uStack_180 = uVar9;
  FVar19.Data = FVar26.Data;
  iVar14 = iVar25;
  if (local_300 != 0) {
    do {
      if (iVar14 == 0) goto LAB_1415fc3fb;
      if (*(int *)FVar19.Data != *(int *)(FVar19.Data + -(longlong)FVar26.Data)) goto LAB_1415fc3d1;
      iVar14 = iVar14 + 1;
      FVar19.Data = FVar19.Data + 4;
    } while (iVar14 != local_300);
    if (iVar14 != 0) {
LAB_1415fc3d1:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Algo::Mismatch(DataA, Empty) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                          ,700,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
LAB_1415fc3fb:
  iVar14 = local_2c8;
  if (iVar24 == 0) {
LAB_1415fc432:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataA, DataB) == 3",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2bf,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_308.Data;
    iVar15 = iVar25;
    do {
      if ((iVar15 == local_2c8) ||
         (*(int *)FVar26.Data !=
          *(int *)(FVar26.Data + ((longlong)local_2d0.Data - (longlong)local_308.Data)))) break;
      iVar15 = iVar15 + 1;
      FVar26.Data = FVar26.Data + 4;
    } while (iVar15 != iVar24);
    if (iVar15 != 3) goto LAB_1415fc432;
  }
  if (iVar14 == 0) {
LAB_1415fc493:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataB, DataA) == 3",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2c0,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_2d0.Data;
    iVar15 = iVar25;
    do {
      if ((iVar15 == iVar24) ||
         (*(int *)FVar26.Data !=
          *(int *)(FVar26.Data + ((longlong)local_308.Data - (longlong)local_2d0.Data)))) break;
      iVar15 = iVar15 + 1;
      FVar26.Data = FVar26.Data + 4;
    } while (iVar15 != iVar14);
    if (iVar15 != 3) goto LAB_1415fc493;
  }
  if (iVar24 == 0) {
LAB_1415fc4d6:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataA, DataA) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2c3,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar15 = iVar25;
    if (iVar24 != 0) {
      do {
        iVar11 = iVar15 + 1;
        iVar15 = iVar11;
      } while (iVar11 != iVar24);
    }
    if (iVar11 != 6) goto LAB_1415fc4d6;
  }
  iVar11 = 0;
  if (iVar14 == 0) {
LAB_1415fc519:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataB, DataB) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2c4,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar15 = iVar11;
    iVar21 = iVar25;
    if (iVar14 != 0) {
      do {
        iVar15 = iVar21 + 1;
        iVar21 = iVar15;
      } while (iVar15 != iVar14);
    }
    if (iVar15 != 6) goto LAB_1415fc519;
  }
  iVar14 = local_2a8;
  if (local_2a8 == 0) {
LAB_1415fc55c:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataC, DataC) == 9",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2c5,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar15 = iVar11;
    iVar21 = iVar25;
    if (local_2a8 != 0) {
      do {
        iVar15 = iVar21 + 1;
        iVar21 = iVar15;
      } while (iVar15 != local_2a8);
    }
    if (iVar15 != 9) goto LAB_1415fc55c;
  }
  if (iVar24 == 0) {
LAB_1415fc5c1:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataA, DataC) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2c8,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_308.Data;
    iVar15 = iVar25;
    do {
      if ((iVar15 == iVar14) ||
         (*(int *)FVar26.Data !=
          *(int *)(FVar26.Data + ((longlong)local_2b0.Data - (longlong)local_308.Data)))) break;
      iVar15 = iVar15 + 1;
      FVar26.Data = FVar26.Data + 4;
    } while (iVar15 != iVar24);
    if (iVar15 != 6) goto LAB_1415fc5c1;
  }
  if (iVar14 == 0) {
LAB_1415fc622:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataC, DataA) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2c9,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_2b0.Data;
    iVar15 = iVar25;
    do {
      if ((iVar15 == iVar24) ||
         (*(int *)FVar26.Data !=
          *(int *)(FVar26.Data + ((longlong)local_308.Data - (longlong)local_2b0.Data)))) break;
      iVar15 = iVar15 + 1;
      FVar26.Data = FVar26.Data + 4;
    } while (iVar15 != iVar14);
    if (iVar15 != 6) goto LAB_1415fc622;
  }
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  if (local_2d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data);
  }
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data);
  }
  local_328.Data = (FScriptContainerElement *)0x0;
  local_320[0] = 0;
  local_320[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xc,&local_328,0,local_320 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xc,&local_328,local_320,local_320 + 1);
  FVar26.Data = local_328.Data;
  FGenericPlatformString::Memcpy(local_328.Data,L"HeLlO wOrLd",0x18);
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330[0] = 0;
  local_330[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xe,&local_338,0,local_330 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xe,&local_338,local_330,local_330 + 1);
  FGenericPlatformString::Memcpy(local_338.Data,L"HELLO GOODBYE",0x1c);
  local_318.Data = (FScriptContainerElement *)0x0;
  local_310[0] = 0;
  local_310[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_318,0,local_310 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_318,local_310,local_310 + 1);
  FGenericPlatformString::Memcpy(local_318.Data,L"hello",0xc);
  iVar24 = local_320[0];
  iVar15 = 0;
  iVar14 = local_320[0] + -1;
  if (local_320[0] == 0) {
    iVar14 = iVar15;
  }
  FVar19.Data = FVar26.Data;
  iVar21 = iVar25;
  if (iVar14 != 0) {
    do {
      if (iVar21 == 0) goto LAB_1415fc856;
      if ((ushort)(*(ushort *)FVar19.Data - (-(ushort)(*(ushort *)FVar19.Data - 0x61 < 0x1a) & 0x20)
                  ) !=
          (ushort)(*(ushort *)(FVar19.Data + -(longlong)FVar26.Data) -
                  (-(ushort)(*(ushort *)(FVar19.Data + -(longlong)FVar26.Data) - 0x61 < 0x1a) & 0x20
                  ))) goto LAB_1415fc82c;
      iVar21 = iVar21 + 1;
      FVar19.Data = FVar19.Data + 2;
    } while (iVar21 != iVar14);
    if (iVar21 != 0) {
LAB_1415fc82c:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Algo::Mismatch(DataA, Empty, CompareCaseInsensitive) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                          ,0x2da,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
LAB_1415fc856:
  iVar14 = local_330[0];
  iVar21 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar21 = iVar15;
  }
  iVar12 = local_330[0] + -1;
  if (local_330[0] == 0) {
    iVar12 = iVar15;
  }
  if (iVar21 == 0) {
LAB_1415fc8cb:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataA, DataB, CompareCaseInsensitive) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2dd,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_328.Data;
    iVar22 = iVar25;
    do {
      if ((iVar22 == iVar12) ||
         ((ushort)(*(ushort *)FVar26.Data - (-(ushort)(*(ushort *)FVar26.Data - 0x61 < 0x1a) & 0x20)
                  ) !=
          (ushort)(*(ushort *)(FVar26.Data + ((longlong)local_338.Data - (longlong)local_328.Data))
                  - (-(ushort)(*(ushort *)
                                (FVar26.Data + ((longlong)local_338.Data - (longlong)local_328.Data)
                                ) - 0x61 < 0x1a) & 0x20)))) break;
      iVar22 = iVar22 + 1;
      FVar26.Data = FVar26.Data + 2;
    } while (iVar22 != iVar21);
    if (iVar22 != 6) goto LAB_1415fc8cb;
  }
  iVar21 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar21 = iVar15;
  }
  iVar12 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar12 = iVar15;
  }
  if (iVar21 == 0) {
LAB_1415fc96a:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataB, DataA, CompareCaseInsensitive) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2de,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_338.Data;
    iVar22 = iVar25;
    do {
      if ((iVar22 == iVar12) ||
         ((ushort)(*(ushort *)FVar26.Data - (-(ushort)(*(ushort *)FVar26.Data - 0x61 < 0x1a) & 0x20)
                  ) !=
          (ushort)(*(ushort *)(FVar26.Data + ((longlong)local_328.Data - (longlong)local_338.Data))
                  - (-(ushort)(*(ushort *)
                                (FVar26.Data + ((longlong)local_328.Data - (longlong)local_338.Data)
                                ) - 0x61 < 0x1a) & 0x20)))) break;
      iVar22 = iVar22 + 1;
      FVar26.Data = FVar26.Data + 2;
    } while (iVar22 != iVar21);
    if (iVar22 != 6) goto LAB_1415fc96a;
  }
  iVar21 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar21 = iVar15;
  }
  if (iVar21 == 0) {
LAB_1415fc9b7:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataA, DataA, CompareCaseInsensitive) == 11",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2e1,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar12 = iVar15;
    iVar22 = iVar25;
    if (iVar21 != 0) {
      do {
        iVar12 = iVar22 + 1;
        iVar22 = iVar12;
      } while (iVar12 != iVar21);
    }
    if (iVar12 != 0xb) goto LAB_1415fc9b7;
  }
  iVar21 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar21 = iVar11;
  }
  iVar12 = 0;
  if (iVar21 == 0) {
LAB_1415fca04:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataB, DataB, CompareCaseInsensitive) == 13",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2e2,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar22 = iVar25;
    if (iVar21 != 0) {
      do {
        iVar11 = iVar22 + 1;
        iVar22 = iVar11;
      } while (iVar11 != iVar21);
    }
    if (iVar11 != 0xd) goto LAB_1415fca04;
  }
  iVar11 = local_310[0];
  iVar21 = local_310[0] + -1;
  if (local_310[0] == 0) {
    iVar21 = iVar12;
  }
  if (iVar21 == 0) {
LAB_1415fca55:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataC, DataC, CompareCaseInsensitive) == 5",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2e3,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar22 = iVar12;
    iVar23 = iVar25;
    if (iVar21 != 0) {
      do {
        iVar22 = iVar23 + 1;
        iVar23 = iVar22;
      } while (iVar22 != iVar21);
    }
    if (iVar22 != 5) goto LAB_1415fca55;
  }
  iVar21 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar21 = iVar12;
  }
  iVar22 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar22 = iVar12;
  }
  if (iVar21 == 0) {
LAB_1415fcb0a:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataA, DataC, CompareCaseInsensitive) == 5",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2e6,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_328.Data;
    iVar23 = iVar25;
    do {
      if ((iVar23 == iVar22) ||
         ((ushort)(*(ushort *)FVar26.Data - (-(ushort)(*(ushort *)FVar26.Data - 0x61 < 0x1a) & 0x20)
                  ) !=
          (ushort)(*(ushort *)(FVar26.Data + ((longlong)local_318.Data - (longlong)local_328.Data))
                  - (-(ushort)(*(ushort *)
                                (FVar26.Data + ((longlong)local_318.Data - (longlong)local_328.Data)
                                ) - 0x61 < 0x1a) & 0x20)))) break;
      iVar23 = iVar23 + 1;
      FVar26.Data = FVar26.Data + 2;
    } while (iVar23 != iVar21);
    if (iVar23 != 5) goto LAB_1415fcb0a;
  }
  iVar21 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar21 = iVar12;
  }
  iVar22 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar22 = iVar12;
  }
  if (iVar21 == 0) {
LAB_1415fcbae:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataC, DataA, CompareCaseInsensitive) == 5",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2e7,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_318.Data;
    iVar24 = iVar25;
    do {
      if ((iVar24 == iVar22) ||
         ((ushort)(*(ushort *)FVar26.Data - (-(ushort)(*(ushort *)FVar26.Data - 0x61 < 0x1a) & 0x20)
                  ) !=
          (ushort)(*(ushort *)(FVar26.Data + ((longlong)local_328.Data - (longlong)local_318.Data))
                  - (-(ushort)(*(ushort *)
                                (FVar26.Data + ((longlong)local_328.Data - (longlong)local_318.Data)
                                ) - 0x61 < 0x1a) & 0x20)))) break;
      iVar24 = iVar24 + 1;
      FVar26.Data = FVar26.Data + 2;
    } while (iVar24 != iVar21);
    if (iVar24 != 5) goto LAB_1415fcbae;
  }
  iVar24 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar24 = iVar12;
  }
  iVar21 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar21 = iVar12;
  }
  if (iVar24 == 0) {
LAB_1415fcc4e:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataB, DataC, CompareCaseInsensitive) == 5",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2e8,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_338.Data;
    iVar22 = iVar25;
    do {
      if ((iVar22 == iVar21) ||
         ((ushort)(*(ushort *)FVar26.Data - (-(ushort)(*(ushort *)FVar26.Data - 0x61 < 0x1a) & 0x20)
                  ) !=
          (ushort)(*(ushort *)(FVar26.Data + ((longlong)local_318.Data - (longlong)local_338.Data))
                  - (-(ushort)(*(ushort *)
                                (FVar26.Data + ((longlong)local_318.Data - (longlong)local_338.Data)
                                ) - 0x61 < 0x1a) & 0x20)))) break;
      iVar22 = iVar22 + 1;
      FVar26.Data = FVar26.Data + 2;
    } while (iVar22 != iVar24);
    if (iVar22 != 5) goto LAB_1415fcc4e;
  }
  iVar24 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar24 = iVar12;
  }
  iVar11 = iVar14 + -1;
  if (iVar14 == 0) {
    iVar11 = iVar12;
  }
  if (iVar24 == 0) {
LAB_1415fccf9:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::Mismatch(DataC, DataB, CompareCaseInsensitive) == 5",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2e9,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_318.Data;
    iVar14 = iVar25;
    do {
      if ((iVar14 == iVar11) ||
         ((ushort)(*(ushort *)FVar26.Data - (-(ushort)(*(ushort *)FVar26.Data - 0x61 < 0x1a) & 0x20)
                  ) !=
          (ushort)(*(ushort *)(FVar26.Data + ((longlong)local_338.Data - (longlong)local_318.Data))
                  - (-(ushort)(*(ushort *)
                                (FVar26.Data + ((longlong)local_338.Data - (longlong)local_318.Data)
                                ) - 0x61 < 0x1a) & 0x20)))) break;
      iVar14 = iVar14 + 1;
      FVar26.Data = FVar26.Data + 2;
    } while (iVar14 != iVar24);
    if (iVar14 != 5) goto LAB_1415fccf9;
  }
  if (local_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data);
  }
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  if (local_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data);
  }
  uVar5 = _UNK_150631e38;
  uVar4 = ___xmm_00000004000000030000000200000001;
  local_1b8 = 5;
  uStack_1b4 = 6;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  local_2f0 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_2f8,6,&local_2ec);
  FVar26.Data = local_2f8.Data;
  *(undefined8 *)local_2f8.Data = uVar4;
  *(undefined8 *)(local_2f8.Data + 8) = uVar5;
  uVar7 = _UNK_150631f88;
  uVar6 = ___xmm_fffffff9fffffffdfffffffeffffffff;
  local_1c8 = uVar4;
  uStack_1c0 = uVar5;
  *(ulonglong *)(local_2f8.Data + 0x10) = CONCAT44(uStack_1b4,local_1b8);
  local_1a0 = 0xfffffff8;
  uStack_19c = 0xfffffff7;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_2c0,6,&local_2b4);
  uVar5 = _UNK_150631f78;
  uVar4 = ___xmm_fffffff800000007fffffffa00000005;
  local_1b0 = uVar6;
  uStack_1a8 = uVar7;
  local_150 = 9;
  *(undefined8 *)local_2c0.Data = uVar6;
  *(undefined8 *)(local_2c0.Data + 8) = uVar7;
  uVar7 = _UNK_150631f98;
  uVar6 = ___xmm_fffffffc00000003fffffffe00000001;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  *(ulonglong *)(local_2c0.Data + 0x10) = CONCAT44(uStack_19c,local_1a0);
  local_298 = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,9,0,&local_2a0,9,&local_294);
  iVar24 = local_2f0;
  local_170 = uVar6;
  uStack_168 = uVar7;
  *(undefined8 *)local_2a0.Data = uVar6;
  *(undefined8 *)(local_2a0.Data + 8) = uVar7;
  *(undefined8 *)(local_2a0.Data + 0x10) = uVar4;
  *(undefined8 *)(local_2a0.Data + 0x18) = uVar5;
  *(int *)(local_2a0.Data + 0x20) = 9;
  local_160 = uVar4;
  uStack_158 = uVar5;
  FVar19.Data = FVar26.Data;
  iVar14 = iVar25;
  if (local_2f0 != 0) {
    do {
      if (iVar14 == 0) goto LAB_1415fcef7;
      iVar11 = *(int *)FVar19.Data;
      pFVar13 = FVar19.Data + -(longlong)FVar26.Data;
      FVar19.Data = FVar19.Data + 4;
      if (iVar11 * iVar11 != *(int *)pFVar13 * *(int *)pFVar13) goto LAB_1415fcece;
      iVar14 = iVar14 + 1;
    } while (iVar14 != local_2f0);
    if (iVar14 != 0) {
LAB_1415fcece:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Algo::MismatchBy(DataA, Empty, Square) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                          ,0x2fa,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
LAB_1415fcef7:
  iVar14 = local_2b8;
  if (iVar24 == 0) {
LAB_1415fcf38:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataA, DataB, Square) == 3",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2fd,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_2f8.Data;
    iVar11 = iVar25;
    do {
      if ((iVar11 == local_2b8) ||
         (pFVar13 = FVar26.Data + ((longlong)local_2c0.Data - (longlong)local_2f8.Data),
         iVar21 = *(int *)FVar26.Data, FVar26.Data = FVar26.Data + 4,
         iVar21 * iVar21 != *(int *)pFVar13 * *(int *)pFVar13)) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar24);
    if (iVar11 != 3) goto LAB_1415fcf38;
  }
  if (iVar14 == 0) {
LAB_1415fcf9e:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataB, DataA, Square) == 3",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x2fe,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_2c0.Data;
    iVar11 = iVar25;
    do {
      if ((iVar11 == iVar24) ||
         (pFVar13 = FVar26.Data + ((longlong)local_2f8.Data - (longlong)local_2c0.Data),
         iVar21 = *(int *)FVar26.Data, FVar26.Data = FVar26.Data + 4,
         iVar21 * iVar21 != *(int *)pFVar13 * *(int *)pFVar13)) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar14);
    if (iVar11 != 3) goto LAB_1415fcf9e;
  }
  if (iVar24 == 0) {
LAB_1415fcfe0:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataA, DataA, Square) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x301,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar11 = iVar15;
    iVar21 = iVar25;
    if (iVar24 != 0) {
      do {
        iVar11 = iVar21 + 1;
        iVar21 = iVar11;
      } while (iVar11 != iVar24);
    }
    if (iVar11 != 6) goto LAB_1415fcfe0;
  }
  if (iVar14 == 0) {
LAB_1415fd022:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataB, DataB, Square) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x302,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar11 = iVar15;
    iVar21 = iVar25;
    if (iVar14 != 0) {
      do {
        iVar11 = iVar21 + 1;
        iVar21 = iVar11;
      } while (iVar11 != iVar14);
    }
    if (iVar11 != 6) goto LAB_1415fd022;
  }
  iVar14 = local_298;
  if (local_298 == 0) {
LAB_1415fd064:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataC, DataC, Square) == 9",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x303,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar11 = iVar25;
    if (local_298 != 0) {
      do {
        iVar15 = iVar11 + 1;
        iVar11 = iVar15;
      } while (iVar15 != local_298);
    }
    if (iVar15 != 9) goto LAB_1415fd064;
  }
  if (iVar24 == 0) {
LAB_1415fd0c9:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataA, DataC, Square) == 6",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x306,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FVar26.Data = local_2f8.Data;
    iVar11 = iVar25;
    do {
      if ((iVar11 == iVar14) ||
         (pFVar13 = FVar26.Data + ((longlong)local_2a0.Data - (longlong)local_2f8.Data),
         iVar15 = *(int *)FVar26.Data, FVar26.Data = FVar26.Data + 4,
         iVar15 * iVar15 != *(int *)pFVar13 * *(int *)pFVar13)) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar24);
    if (iVar11 != 6) goto LAB_1415fd0c9;
  }
  if (iVar14 != 0) {
    FVar26.Data = local_2a0.Data;
    do {
      if ((iVar25 == iVar24) ||
         (pFVar13 = FVar26.Data + ((longlong)local_2f8.Data - (longlong)local_2a0.Data),
         iVar11 = *(int *)FVar26.Data, FVar26.Data = FVar26.Data + 4,
         iVar11 * iVar11 != *(int *)pFVar13 * *(int *)pFVar13)) break;
      iVar25 = iVar25 + 1;
    } while (iVar25 != iVar14);
    if (iVar25 == 6) goto LAB_1415fd154;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Algo::MismatchBy(DataC, DataA, Square) == 6",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                      ,0x307,L"");
  if (bVar10) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1415fd154:
  if (local_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data);
  }
  if (local_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data);
  }
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  local_258.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.Str.Data.ArrayNum = 0;
  local_258.Str.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_258,0,&local_258.Str.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_258,&local_258.Str.Data.ArrayNum,
             &local_258.Str.Data.ArrayMax);
  FGenericPlatformString::Memcpy(local_258.Str.Data.AllocatorInstance.Data,L"Class",0xc);
  local_248.Data = (FScriptContainerElement *)0x0;
  local_240[0] = 0;
  local_240[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_248,0,local_240 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,7,&local_248,local_240,local_240 + 1);
  FGenericPlatformString::Memcpy(local_248.Data,L"Struct",0xe);
  ::FString::FString(&local_238,L"Enum");
  ::FString::FString(&local_228,L"Float");
  ::FString::FString(&local_218,L"Int");
  ::FString::FString(&local_208,L"Char");
  local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e0.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,6,0,&local_2e0.AllocatorInstance,6,&local_2e0.ArrayMax);
  ConstructItems<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,int>
            (local_2e0.AllocatorInstance.Data,&local_258,6);
  puVar20 = &local_1f8;
  lVar16 = 6;
  do {
    puVar1 = puVar20 + -2;
    puVar20 = puVar20 + -2;
    lVar16 = lVar16 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar16 != 0);
  ::FString::FString(&local_148,L"class");
  ::FString::FString(&local_138,L"struct");
  ::FString::FString(&local_128,L"enum");
  ::FString::FString(&local_118,L"public");
  ::FString::FString(&local_108,L"protected");
  ::FString::FString(&local_f8,L"private");
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,6,0,&local_280.AllocatorInstance,6,&local_280.ArrayMax);
  ConstructItems<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,int>
            (local_280.AllocatorInstance.Data,(FStringWrapper *)&local_148,6);
  pFVar17 = &local_e8;
  do {
    pFVar13 = pFVar17[-1].Data.AllocatorInstance.Data;
    pFVar17 = pFVar17 + -1;
    lVar28 = lVar28 + -1;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
  } while (lVar28 != 0);
  ::FString::FString(&local_e8,L"CLASS");
  ::FString::FString(&local_d8,L"STRUCT");
  ::FString::FString(&local_c8,L"ENUM");
  ::FString::FString(&local_b8,L"FLOAT");
  ::FString::FString(&local_a8,L"INT");
  ::FString::FString(&local_98,L"CHAR");
  ::FString::FString(&local_88,L"PUBLIC");
  ::FString::FString(&local_78,L"PROTECTED");
  ::FString::FString(&local_68,L"PRIVATE");
  local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.ArrayNum = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,&local_290.AllocatorInstance,9,&local_290.ArrayMax);
  ConstructItems<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,int>
            (local_290.AllocatorInstance.Data,(FStringWrapper *)&local_e8,9);
  puVar18 = local_58;
  do {
    puVar2 = puVar18 + -2;
    puVar18 = puVar18 + -2;
    lVar27 = lVar27 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar27 != 0);
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_2e0,&local_270,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataA, Empty, &FStringWrapper::Str, CompareCaseInsensitive) == 0"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x31d,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_2e0,&local_280,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataA, DataB, &FStringWrapper::Str, CompareCaseInsensitive) == 3"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,800,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_280,&local_2e0,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataB, DataA, &FStringWrapper::Str, CompareCaseInsensitive) == 3"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x321,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_2e0,&local_2e0,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataA, DataA, &FStringWrapper::Str, CompareCaseInsensitive) == 6"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x324,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_280,&local_280,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataB, DataB, &FStringWrapper::Str, CompareCaseInsensitive) == 6"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x325,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_290,&local_290,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 9) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataC, DataC, &FStringWrapper::Str, CompareCaseInsensitive) == 9"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x326,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_2e0,&local_290,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataA, DataC, &FStringWrapper::Str, CompareCaseInsensitive) == 6"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x329,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar24 = Algo::
           MismatchBy<TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,TArray<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,TSizedDefaultAllocator<32>_>,FString__FAlgosTestBase::TestMismatch_::__l230::FStringWrapper::*,_FAlgosTestBase::TestMismatch_::__l230::<lambda_3>_>
                     (&local_290,&local_2e0,(pdm_d9f55dd0)0x0,local_2e8);
  if (iVar24 != 6) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Algo::MismatchBy(DataC, DataA, &FStringWrapper::Str, CompareCaseInsensitive) == 6"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                        ,0x32a,L"");
    if (bVar10) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar26.Data = local_290.AllocatorInstance.Data;
  DestructItems<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,int>
            ((FStringWrapper *)local_290.AllocatorInstance.Data,local_290.ArrayNum);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  FVar26.Data = local_280.AllocatorInstance.Data;
  DestructItems<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,int>
            ((FStringWrapper *)local_280.AllocatorInstance.Data,local_280.ArrayNum);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  FVar26.Data = local_2e0.AllocatorInstance.Data;
  DestructItems<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,int>
            ((FStringWrapper *)local_2e0.AllocatorInstance.Data,local_2e0.ArrayNum);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  FVar26.Data = local_270.AllocatorInstance.Data;
  DestructItems<_FAlgosTestBase::TestMismatch_::__l230::FStringWrapper,int>
            ((FStringWrapper *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  return;
}

// TestRemoveIf @ 1415fd7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FAlgosTestBase::TestRemoveIf(FAlgosTestBase *this)

{
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  initializer_list<char_const_*> local_108;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  initializer_list<char_const_*> local_c8;
  char *local_b8;
  char *local_b0;
  initializer_list<char_const_*> local_a8;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined *local_48;
  char *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_c8._First = (char **)0x0;
  local_c8._Last = (char **)0x0;
  local_108._First = (char **)0x0;
  local_108._Last = (char **)0x0;
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_108,&local_c8);
  local_c8._Last = (char **)0x150625afc;
  local_f0 = "2";
  local_a8._First = (char **)&local_c8;
  local_c8._First = (char **)&s_1;
  local_a8._Last = (char **)&local_a8;
  local_b8 = "3";
  local_108._First = &local_f8;
  local_b0 = "4";
  local_108._Last = &local_d8;
  local_f8 = "1";
  local_e8 = "3";
  local_e0 = "4";
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_108,&local_a8);
  local_108._First = &local_f8;
  local_108._Last = &local_d8;
  local_f8 = "Remove-1";
  local_f0 = "Remove-2";
  local_e8 = "Remove-3";
  local_e0 = "Remove-4";
  local_c8._First = (char **)0x0;
  local_c8._Last = (char **)0x0;
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_108,&local_c8);
  local_c8._Last = (char **)0x150625b00;
  local_c8._First = (char **)0x150625afc;
  local_f0 = "2";
  local_108._First = (char **)&local_c8;
  local_b8 = "4";
  local_108._Last = &local_b0;
  local_f8 = "Remove-1";
  local_a8._First = &local_f8;
  local_a8._Last = &local_d8;
  local_e8 = "3";
  local_e0 = "4";
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_a8,&local_108);
  local_108._First = (char **)&local_a8;
  local_a8._First = (char **)&s_1;
  local_108._Last = (char **)&local_a8._Last;
  local_c8._First = &local_f8;
  local_f8 = "1";
  local_f0 = "Remove-2";
  local_e8 = "Remove-3";
  local_e0 = "Remove-4";
  local_c8._Last = &local_d8;
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_c8,&local_108);
  local_a8._First = (char **)&s_1;
  local_a8._Last = (char **)0x150625afc;
  local_c8._First = (char **)&local_a8;
  local_f8 = "1";
  local_c8._Last = &local_90;
  local_98 = "3";
  local_108._First = &local_f8;
  local_f0 = "2";
  local_108._Last = &local_d8;
  local_e8 = "3";
  local_e0 = "Remove-4";
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_108,&local_c8);
  local_c8._First = (char **)&local_a8;
  local_a8._First = (char **)0x150625b04;
  local_c8._Last = (char **)&local_a8._Last;
  local_f8 = "Remove-1";
  local_108._First = &local_f8;
  local_f0 = "Remove-2";
  local_108._Last = &local_d8;
  local_e8 = "Remove-3";
  local_e0 = "4";
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_108,&local_c8);
  local_f8 = "2";
  local_e0 = "7";
  local_d8 = "9";
  local_68 = "Remove-5";
  local_58 = "7";
  local_60 = "Remove-6";
  local_48 = &s_9;
  local_50 = "Remove-8";
  local_c8._First = &local_f8;
  local_f0 = "3";
  local_c8._Last = &local_d0;
  local_108._First = &local_88;
  local_108._Last = &local_40;
  local_e8 = "4";
  local_88 = "Remove-1";
  local_80 = "2";
  local_78 = "3";
  local_70 = "4";
  `FAlgosTestBase::TestRemoveIf'::__l2::<lambda_1>::operator()(local_118,&local_108,&local_c8);
  return;
}

// TestSort @ 1415fdb30

void __thiscall FAlgosTestBase::TestSort(FAlgosTestBase *this)

{
  FScriptContainerElement *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FIdentityFunctor local_res8;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  FVar6.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->TestData2;
  local_30 = (this->TestData2).ArrayNum;
  lVar8 = (longlong)local_30;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_30,0,&local_38,local_30,&local_2c);
    FVar6.Data = local_38.Data;
    memcpy(local_38.Data,pFVar9,lVar8 << 2);
  }
  iVar7 = local_30;
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
            ((int *)FVar6.Data,local_30,local_res8,(TLess<void>)local_res8);
  if ((iVar7 != 0) && (iVar5 = iVar7 + -1, iVar5 != 0)) {
    pFVar9 = FVar6.Data;
    iVar10 = *(int *)FVar6.Data;
    do {
      pFVar1 = pFVar9 + 4;
      pFVar9 = pFVar9 + 4;
      if (*(int *)pFVar1 < iVar10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(TestArray)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x1a0,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      iVar5 = iVar5 + -1;
      iVar10 = *(int *)pFVar1;
    } while (iVar5 != 0);
  }
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_38 != pTVar2) {
    local_30 = (this->TestData2).ArrayNum;
    lVar8 = (longlong)local_30;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (local_30 == 0) {
      if (local_2c == 0) {
        local_2c = 0;
        iVar7 = local_30;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,local_2c,&local_38,0,&local_2c);
        FVar6.Data = local_38.Data;
        iVar7 = local_30;
      }
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_30,local_2c,&local_38,local_30,&local_2c);
      FVar6.Data = local_38.Data;
      memcpy(local_38.Data,pFVar9,lVar8 << 2);
      iVar7 = local_30;
    }
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TGreater<void>_>
            ((int *)FVar6.Data,iVar7,local_res8,(TGreater<void>)local_res8);
  if ((iVar7 != 0) && (iVar5 = iVar7 + -1, iVar5 != 0)) {
    pFVar9 = FVar6.Data;
    iVar10 = *(int *)FVar6.Data;
    do {
      pFVar1 = pFVar9 + 4;
      pFVar9 = pFVar9 + 4;
      if (iVar10 < *(int *)pFVar1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Algo::IsSorted(TestArray, Predicate)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0x1a8,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      iVar5 = iVar5 + -1;
      iVar10 = *(int *)pFVar1;
    } while (iVar5 != 0);
  }
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_38 != pTVar2) {
    iVar5 = (this->TestData2).ArrayNum;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    local_30 = iVar5;
    if ((iVar5 == 0) && (local_2c == 0)) {
      local_2c = 0;
      iVar7 = iVar5;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,local_2c,&local_38,iVar5,&local_2c);
      FVar6.Data = local_38.Data;
      iVar7 = local_30;
      if (iVar5 != 0) {
        memcpy(local_38.Data,pFVar9,(longlong)iVar5 << 2);
        iVar7 = local_30;
      }
    }
  }
  AlgoImpl::IntroSortInternal<int,int,_FAlgosTestBase::TestSort_::__l2::<lambda_1>,TLess<void>_>
            ((int *)FVar6.Data,iVar7,(<lambda_1>)local_res8,(TLess<void>)local_res8);
  pFVar9 = FVar6.Data;
  iVar5 = iVar7;
  if (iVar7 != 0) {
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) goto LAB_1415fde4b;
      pFVar1 = pFVar9 + 4;
      iVar10 = *(int *)pFVar9;
      pFVar9 = pFVar9 + 4;
    } while (iVar10 % 1000 <= *(int *)pFVar1 % 1000);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::IsSortedBy(TestArray, Projection)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x1b4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_1415fde4b:
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_38 != &this->TestData2) {
    iVar5 = (this->TestData2).ArrayNum;
    pFVar9 = (this->TestData2).AllocatorInstance.Data;
    local_30 = iVar5;
    if ((iVar5 == 0) && (local_2c == 0)) {
      local_2c = 0;
      iVar7 = iVar5;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,local_2c,&local_38,iVar5,&local_2c);
      FVar6.Data = local_38.Data;
      iVar7 = local_30;
      if (iVar5 != 0) {
        memcpy(local_38.Data,pFVar9,(longlong)iVar5 << 2);
        iVar7 = local_30;
      }
    }
  }
  AlgoImpl::IntroSortInternal<int,int,_FAlgosTestBase::TestSort_::__l2::<lambda_1>,TGreater<void>_>
            ((int *)FVar6.Data,iVar7,(<lambda_1>)local_res8,(TGreater<void>)local_res8);
  pFVar9 = FVar6.Data;
  if (iVar7 != 0) {
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) goto LAB_1415fdf58;
      pFVar1 = pFVar9 + 4;
      iVar5 = *(int *)pFVar9;
      pFVar9 = pFVar9 + 4;
    } while (*(int *)pFVar1 % 1000 <= iVar5 % 1000);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::IsSortedBy(TestArray, Projection, Predicate)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0x1bb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_1415fdf58:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return;
}

// TestTransform @ 1415fdf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001415fede6) */
/* WARNING: Removing unreachable block (ram,0x0001415fe8d4) */
/* WARNING: Removing unreachable block (ram,0x0001415ff64c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAlgosTestBase::TestTransform(FAlgosTestBase *this)

{
  void *pvVar1;
  code *pcVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  FTestData *pFVar13;
  ulonglong uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  FTestData *pFVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FString *pFVar24;
  FScriptContainerElement *pFVar25;
  ForAnyElementType FVar26;
  ulonglong uVar27;
  FTestData *pFVar28;
  undefined1 auStackY_358 [32];
  ForAnyElementType local_308;
  undefined8 local_300;
  ForAnyElementType local_2f8;
  uint local_2f0;
  uint local_2ec;
  undefined1 local_2e8;
  undefined1 local_2e7 [7];
  float local_2e0;
  float local_2dc;
  int local_2d8 [2];
  ForAnyElementType local_2d0;
  int local_2c8 [2];
  ForAnyElementType local_2c0;
  int local_2b8 [2];
  ForAnyElementType local_2b0;
  int local_2a8 [2];
  ForAnyElementType local_2a0;
  int local_298 [2];
  ForAnyElementType local_290;
  int local_288 [2];
  ForAnyElementType local_280;
  int local_278 [2];
  ForAnyElementType local_270;
  int local_268 [2];
  ForAnyElementType local_260;
  int local_258 [2];
  ForAnyElementType local_250;
  uint local_248;
  uint local_244;
  uint local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  ForAnyElementType local_218;
  int local_210;
  uint local_20c;
  ForAnyElementType local_208;
  int local_200;
  uint local_1fc;
  ForAnyElementType local_1f8;
  int local_1f0;
  int local_1ec;
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  FScriptContainerElement *local_1d8;
  FString local_1d0;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  ForAnyElementType local_1b0;
  int local_1a8;
  int local_1a4;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194 [3];
  FString local_188;
  ForAnyElementType local_178;
  int local_170 [2];
  ForAnyElementType local_168;
  int local_160 [2];
  ForAnyElementType local_158;
  int local_150 [2];
  ForAnyElementType local_148;
  int local_140 [2];
  FString local_138;
  ForAnyElementType local_128;
  int local_120 [2];
  ForAnyElementType local_118;
  int local_110 [2];
  ForAnyElementType local_108;
  int local_100 [2];
  ForAnyElementType local_f8;
  int local_f0 [2];
  ForAnyElementType local_e8;
  int local_e0 [2];
  FTestData local_d8;
  FScriptContainerElement *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  FScriptContainerElement *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  FScriptContainerElement *local_90;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  fVar3 = __real_3c8efa35;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pFVar25 = (this->TestData).AllocatorInstance.Data;
  uVar23 = 0;
  iVar11 = (this->TestData).ArrayNum;
  local_240 = 0;
  local_2f8.Data = (FScriptContainerElement *)0x0;
  pFVar16 = pFVar25 + (longlong)iVar11 * 4;
  local_2ec = 0;
  uVar14 = uVar23;
  while( true ) {
    uVar8 = (uint)uVar14;
    local_2f0 = uVar8;
    if ((this->TestData).ArrayNum != iVar11) {
      local_2e8 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_2e8);
    }
    if (pFVar25 == pFVar16) break;
    local_2e0 = (float)*(int *)pFVar25 * fVar3;
    if (((local_2f8.Data <= (FScriptContainerElement *)&local_2e0) &&
        ((FScriptContainerElement *)&local_2e0 < local_2f8.Data + (longlong)(int)local_2ec * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 == local_2ec) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_2f8,(int *)&local_2ec);
    }
    pFVar25 = pFVar25 + 4;
    uVar14 = (ulonglong)(uVar8 + 1);
    *(float *)(local_2f8.Data + (longlong)(int)uVar8 * 4) = local_2e0;
  }
  if ((uVar8 != 0x20) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestArray.Num() == NumTestObjects",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0xb0,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar22 = uVar23;
  uVar27 = uVar23;
  if (0 < (int)uVar8) {
    do {
      uVar21 = (uint)uVar22;
      uVar9 = 0;
      if ((int)uVar21 < (this->TestData).ArrayNum) {
        uVar9 = ~uVar21 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar11 = *(int *)((this->TestData).AllocatorInstance.Data + uVar27);
      uVar9 = 0;
      if ((int)uVar21 < (int)uVar8) {
        uVar9 = ~uVar21 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((float)iVar11 * fVar3 != *(float *)(local_2f8.Data + uVar27)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestArray[i] == FMath::DegreesToRadians((float)TestData[i])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                             ,0xb3,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar22 = (ulonglong)(uVar21 + 1);
      uVar27 = uVar27 + 4;
    } while ((int)(uVar21 + 1) < (int)uVar8);
  }
  pFVar25 = (this->TestData2).AllocatorInstance.Data;
  iVar11 = (this->TestData2).ArrayNum;
  pFVar16 = pFVar25 + (longlong)iVar11 * 4;
  while( true ) {
    uVar8 = (uint)uVar14;
    if ((this->TestData2).ArrayNum != iVar11) {
      local_2e7[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2e7);
    }
    if (pFVar25 == pFVar16) break;
    local_2dc = (float)*(int *)pFVar25 * fVar3;
    if (((local_2f8.Data <= (FScriptContainerElement *)&local_2dc) &&
        ((FScriptContainerElement *)&local_2dc < local_2f8.Data + (longlong)(int)local_2ec * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar8 == local_2ec) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_2f8,(int *)&local_2ec);
    }
    pFVar25 = pFVar25 + 4;
    local_2f0 = uVar8 + 1;
    uVar14 = (ulonglong)local_2f0;
    *(float *)(local_2f8.Data + (longlong)(int)uVar8 * 4) = local_2dc;
  }
  uVar14 = uVar23;
  if ((uVar8 != 0x40) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestArray.Num() == NumTestObjects * 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0xba,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  do {
    iVar11 = (int)uVar23;
    if (((this->TestData).ArrayNum <= iVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = *(int *)((this->TestData).AllocatorInstance.Data + uVar14);
    if (((int)uVar8 <= iVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((float)iVar10 * fVar3 != *(float *)(local_2f8.Data + uVar14)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestArray[i] == FMath::DegreesToRadians((float)TestData[i])",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0xbd,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar23 = (ulonglong)(iVar11 + 1U);
    uVar14 = uVar14 + 4;
  } while ((int)(iVar11 + 1U) < 0x20);
  pFVar19 = (FScriptContainerElement *)0x0;
  pFVar16 = pFVar19;
  pFVar25 = pFVar19;
  do {
    iVar11 = (int)pFVar16;
    if (((this->TestData2).ArrayNum <= iVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar10 = *(int *)(pFVar25 + (longlong)(this->TestData2).AllocatorInstance.Data);
    uVar9 = 0;
    if ((int)(iVar11 + 0x20U) < (int)uVar8) {
      uVar9 = ~(iVar11 + 0x20U) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((float)iVar10 * fVar3 != *(float *)(pFVar25 + 0x80 + local_2f8.Data)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestArray[i + NumTestObjects] == FMath::DegreesToRadians((float)TestData2[i])"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                           ,0xc1,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar16 = (FScriptContainerElement *)(ulonglong)(iVar11 + 1U);
    pFVar25 = pFVar25 + 4;
  } while ((int)(iVar11 + 1U) < 0x20);
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_138,0,&local_138.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,(ForAnyElementType *)&local_138,&local_138.Data.ArrayNum,&local_138.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_138.Data.AllocatorInstance.Data,L"Hello",0xc);
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120[0] = 0;
  local_120[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_128,0,local_120 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_128,local_120,local_120 + 1);
  FGenericPlatformString::Memcpy(local_128.Data,L"this",10);
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110[0] = 0;
  local_110[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_118,0,local_110 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,3,&local_118,local_110,local_110 + 1);
  FGenericPlatformString::Memcpy(local_118.Data,L"is",6);
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100[0] = 0;
  local_100[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_108,0,local_100 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,2,&local_108,local_100,local_100 + 1);
  FGenericPlatformString::Memcpy(local_108.Data,L"a",4);
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,&local_f8,0,local_f0 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0xb,&local_f8,local_f0,local_f0 + 1);
  FGenericPlatformString::Memcpy(local_f8.Data,L"projection",0x16);
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_e8,0,local_e0 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_e8,local_e0,local_e0 + 1);
  FGenericPlatformString::Memcpy(local_e8.Data,L"test",10);
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,6,0,&local_1f8,6,&local_1ec);
  FVar26.Data = local_1f8.Data;
  ConstructItems<FString,FString,int>(local_1f8.Data,&local_138,6);
  pFVar18 = &local_d8;
  lVar15 = 6;
  do {
    pvVar1 = *(void **)&pFVar18[-1].Name.Data.ArrayNum;
    pFVar18 = (FTestData *)&pFVar18[-1].Name.Data.ArrayNum;
    lVar15 = lVar15 + -1;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    iVar11 = local_1f0;
  } while (lVar15 != 0);
  local_218.Data = (FScriptContainerElement *)0x0;
  local_20c = 0;
  pFVar25 = FVar26.Data + (longlong)local_1f0 * 0x10;
  pFVar16 = pFVar19;
  FVar20.Data = pFVar19;
  for (; uVar5 = _UNK_150631dc8, uVar4 = ___xmm_00000001000000020000000400000005,
      iVar10 = (int)pFVar19, local_210 = iVar10, FVar26.Data != pFVar25;
      FVar26.Data = FVar26.Data + 0x10) {
    local_2d8[0] = *(int *)(FVar26.Data + 8) + -1;
    if (*(int *)(FVar26.Data + 8) == 0) {
      local_2d8[0] = 0;
    }
    if (((FVar20.Data <= (FScriptContainerElement *)local_2d8) &&
        ((FScriptContainerElement *)local_2d8 < FVar20.Data + (longlong)(int)pFVar16 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar10 == (int)pFVar16) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_218,(int *)&local_20c);
      pFVar16 = (FScriptContainerElement *)(ulonglong)local_20c;
      FVar20.Data = local_218.Data;
    }
    pFVar19 = (FScriptContainerElement *)(ulonglong)(iVar10 + 1);
    *(int *)(FVar20.Data + (longlong)iVar10 * 4) = local_2d8[0];
  }
  pFVar16 = (FScriptContainerElement *)0x0;
  local_68 = 10;
  uStack_64 = 4;
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1a8 = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_1b0,6,&local_1a4);
  FVar26.Data = local_1b0.Data;
  local_78 = uVar4;
  uStack_70 = uVar5;
  *(undefined8 *)local_1b0.Data = uVar4;
  *(undefined8 *)(local_1b0.Data + 8) = uVar5;
  *(ulonglong *)(local_1b0.Data + 0x10) = CONCAT44(uStack_64,local_68);
  if ((iVar10 == local_1a8) &&
     ((iVar10 == 0 ||
      (iVar10 = memcmp(FVar20.Data,local_1b0.Data,(longlong)iVar10 << 2), iVar10 == 0)))) {
    FMemory::Free(FVar26.Data);
  }
  else {
    FMemory::Free(FVar26.Data);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Lengths == TArray<int32>({ 5, 4, 2, 1, 10, 4 })",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0xd2,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar20.Data);
  }
  FVar26.Data = local_1f8.Data;
  DestructItems<FString,int>((FString *)local_1f8.Data,iVar11);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288[0] = 0;
  local_288[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_290,0,local_288 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_290,local_288,local_288 + 1);
  FVar26.Data = local_290.Data;
  FGenericPlatformString::Memcpy(local_290.Data,L"Alice",0xc);
  local_d8.Name.Data.ArrayNum = local_288[0];
  local_d8.Name.Data.ArrayMax = local_288[1];
  local_d8.Name.Data.AllocatorInstance.Data = FVar26.Data;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288[0] = 0;
  local_288[1] = 0;
  local_d8.Age = 0x1f;
  local_d8.bRetired = false;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278[0] = 0;
  local_278[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_280,0,local_278 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,4,&local_280,local_278,local_278 + 1);
  FVar26.Data = local_280.Data;
  FGenericPlatformString::Memcpy(local_280.Data,L"Bob",8);
  local_b8 = local_278[0];
  local_b4 = local_278[1];
  local_c0 = FVar26.Data;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278[0] = 0;
  local_278[1] = 0;
  local_b0 = 0x19;
  local_ac = 0;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268[0] = 0;
  local_268[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_270,0,local_268 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_270,local_268,local_268 + 1);
  FVar26.Data = local_270.Data;
  FGenericPlatformString::Memcpy(local_270.Data,L"Charles",0x10);
  local_a0 = local_268[0];
  local_9c = local_268[1];
  local_a8 = FVar26.Data;
  local_270.Data = (FScriptContainerElement *)0x0;
  local_268[0] = 0;
  local_268[1] = 0;
  local_98 = 0x13;
  local_94 = 0;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258[0] = 0;
  local_258[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_260,0,local_258 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_260,local_258,local_258 + 1);
  FVar26.Data = local_260.Data;
  FGenericPlatformString::Memcpy(local_260.Data,L"Donna",0xc);
  local_88 = local_258[0];
  local_84 = local_258[1];
  local_90 = FVar26.Data;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258[0] = 0;
  local_258[1] = 0;
  local_80 = 0xd;
  local_7c = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,0,&local_1e8,4,&local_1dc);
  FVar26.Data = local_1e8.Data;
  ConstructItems<FAlgosTestBase::FTestData,FAlgosTestBase::FTestData,int>
            (local_1e8.Data,&local_d8,4);
  puVar17 = &local_78;
  lVar15 = 4;
  do {
    puVar12 = puVar17 + -3;
    puVar17 = puVar17 + -3;
    lVar15 = lVar15 + -1;
    if ((void *)*puVar12 != (void *)0x0) {
      FMemory::Free((void *)*puVar12);
    }
    iVar11 = local_1e0;
  } while (lVar15 != 0);
  lVar15 = (longlong)local_1e0;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_1fc = 0;
  FVar20.Data = pFVar16;
  pFVar25 = pFVar16;
  for (pFVar19 = FVar26.Data + 0x10; uVar5 = _UNK_150631f28,
      uVar4 = ___xmm_0000000d00000013000000190000001f, iVar10 = (int)pFVar16, local_200 = iVar10,
      (FTestData *)(pFVar19 + -0x10) != (FTestData *)(FVar26.Data + lVar15 * 0x18);
      pFVar19 = pFVar19 + 0x18) {
    if (((FVar20.Data <= pFVar19) && (pFVar19 < FVar20.Data + (longlong)(int)pFVar25 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar10 == (int)pFVar25) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_208,(int *)&local_1fc);
      pFVar25 = (FScriptContainerElement *)(ulonglong)local_1fc;
      FVar20.Data = local_208.Data;
    }
    pFVar16 = (FScriptContainerElement *)(ulonglong)(iVar10 + 1);
    *(int *)(FVar20.Data + (longlong)iVar10 * 4) = *(int *)pFVar19;
  }
  local_1a0.Data = (FScriptContainerElement *)0x0;
  local_198 = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,0,&local_1a0,4,local_194);
  FVar26.Data = local_1a0.Data;
  uVar8 = local_240;
  local_60 = uVar4;
  uStack_58 = uVar5;
  *(undefined8 *)local_1a0.Data = uVar4;
  *(undefined8 *)(local_1a0.Data + 8) = uVar5;
  if ((iVar10 == local_198) &&
     ((iVar10 == 0 ||
      (iVar10 = memcmp(FVar20.Data,local_1a0.Data,(longlong)iVar10 << 2), iVar10 == 0)))) {
    FMemory::Free(FVar26.Data);
  }
  else {
    FMemory::Free(FVar26.Data);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ages == TArray<int32>({ 31, 25, 19, 13 })",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                       ,0xe1,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (FVar20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar20.Data);
  }
  FVar26.Data = local_1e8.Data;
  DestructItems<FAlgosTestBase::FTestData,int>((FTestData *)local_1e8.Data,iVar11);
  if ((FTestData *)FVar26.Data != (FTestData *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  puVar17 = (undefined8 *)0x0;
  local_308.Data = (FScriptContainerElement *)0x0;
  local_300 = 0;
  puVar12 = ::operator_new(0x18);
  if (puVar12 != (undefined8 *)0x0) {
    local_2b0.Data = (FScriptContainerElement *)0x0;
    local_2a8[0] = 0;
    local_2a8[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_2b0,0,local_2a8 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_2b0,local_2a8,local_2a8 + 1);
    FVar26.Data = local_2b0.Data;
    FGenericPlatformString::Memcpy(local_2b0.Data,L"Elsa",10);
    *puVar12 = FVar26.Data;
    uVar8 = 1;
    *(int *)(puVar12 + 1) = local_2a8[0];
    *(int *)((longlong)puVar12 + 0xc) = local_2a8[1];
    *(undefined4 *)(puVar12 + 2) = 0x3d;
    *(undefined1 *)((longlong)puVar12 + 0x14) = 0;
    local_2b0.Data = (FScriptContainerElement *)0x0;
    local_2a8[0] = 0;
    local_2a8[1] = 0;
    puVar17 = puVar12;
  }
  if (((uVar8 & 1) != 0) &&
     (uVar8 = uVar8 & 0xfffffffe, local_2b0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2b0.Data);
  }
  iVar10 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_308,(int *)((longlong)&local_300 + 4));
  FVar26.Data = local_308.Data;
  iVar11 = iVar10 + 1;
  local_300 = CONCAT44(local_300._4_4_,iVar11);
  *(undefined8 **)(local_308.Data + (longlong)iVar10 * 8) = puVar17;
  local_238 = ::operator_new(0x18);
  if (local_238 == (undefined8 *)0x0) {
    local_238 = (undefined8 *)0x0;
  }
  else {
    local_2a0.Data = (FScriptContainerElement *)0x0;
    local_298[0] = 0;
    local_298[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_2a0,0,local_298 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_2a0,local_298,local_298 + 1);
    FVar20.Data = local_2a0.Data;
    FGenericPlatformString::Memcpy(local_2a0.Data,L"Fred",10);
    uVar8 = uVar8 | 2;
    *local_238 = FVar20.Data;
    *(int *)(local_238 + 1) = local_298[0];
    *(int *)((longlong)local_238 + 0xc) = local_298[1];
    *(undefined4 *)(local_238 + 2) = 0xb;
    *(undefined1 *)((longlong)local_238 + 0x14) = 0;
    local_2a0.Data = (FScriptContainerElement *)0x0;
    local_298[0] = 0;
    local_298[1] = 0;
  }
  puVar17 = (undefined8 *)0x0;
  if (((uVar8 & 2) != 0) &&
     (uVar8 = uVar8 & 0xfffffffd, local_2a0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2a0.Data);
  }
  if (((FVar26.Data <= (FScriptContainerElement *)&local_238) &&
      ((FScriptContainerElement *)&local_238 < FVar26.Data + (longlong)local_300._4_4_ * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar11 == local_300._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_308,(int *)((longlong)&local_300 + 4));
    FVar26.Data = local_308.Data;
  }
  iVar10 = iVar11 + 1;
  local_300 = CONCAT44(local_300._4_4_,iVar10);
  *(undefined8 **)(FVar26.Data + (longlong)iVar11 * 8) = local_238;
  local_238 = (undefined8 *)0x0;
  puVar12 = ::operator_new(0x18);
  if (puVar12 != (undefined8 *)0x0) {
    local_2d0.Data = (FScriptContainerElement *)0x0;
    local_2c8[0] = 0;
    local_2c8[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_2d0,0,local_2c8 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_2d0,local_2c8,local_2c8 + 1);
    FVar20.Data = local_2d0.Data;
    FGenericPlatformString::Memcpy(local_2d0.Data,L"Georgina",0x12);
    uVar8 = uVar8 | 4;
    *puVar12 = FVar20.Data;
    *(int *)(puVar12 + 1) = local_2c8[0];
    *(int *)((longlong)puVar12 + 0xc) = local_2c8[1];
    *(undefined4 *)(puVar12 + 2) = 0x22;
    *(undefined1 *)((longlong)puVar12 + 0x14) = 0;
    local_2d0.Data = (FScriptContainerElement *)0x0;
    local_2c8[0] = 0;
    local_2c8[1] = 0;
    puVar17 = puVar12;
  }
  local_230 = puVar17;
  if (((uVar8 & 4) != 0) &&
     (uVar8 = uVar8 & 0xfffffffb, local_2d0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2d0.Data);
  }
  if (((FVar26.Data <= (FScriptContainerElement *)&local_230) &&
      ((FScriptContainerElement *)&local_230 < FVar26.Data + (longlong)local_300._4_4_ * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar10 == local_300._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_308,(int *)((longlong)&local_300 + 4));
    FVar26.Data = local_308.Data;
  }
  iVar11 = iVar10 + 1;
  local_300 = CONCAT44(local_300._4_4_,iVar11);
  *(undefined8 **)(FVar26.Data + (longlong)iVar10 * 8) = local_230;
  local_230 = (undefined8 *)0x0;
  local_228 = ::operator_new(0x18);
  if (local_228 == (undefined8 *)0x0) {
    local_228 = (undefined8 *)0x0;
  }
  else {
    local_2c0.Data = (FScriptContainerElement *)0x0;
    local_2b8[0] = 0;
    local_2b8[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,6,&local_2c0,0,local_2b8 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,6,&local_2c0,local_2b8,local_2b8 + 1);
    FVar20.Data = local_2c0.Data;
    FGenericPlatformString::Memcpy(local_2c0.Data,L"Henry",0xc);
    uVar8 = uVar8 | 8;
    *local_228 = FVar20.Data;
    *(int *)(local_228 + 1) = local_2b8[0];
    *(int *)((longlong)local_228 + 0xc) = local_2b8[1];
    *(undefined4 *)(local_228 + 2) = 0x36;
    *(undefined1 *)((longlong)local_228 + 0x14) = 0;
    local_2c0.Data = (FScriptContainerElement *)0x0;
    local_2b8[0] = 0;
    local_2b8[1] = 0;
  }
  if (((uVar8 & 8) != 0) &&
     (uVar8 = uVar8 & 0xfffffff7, local_2c0.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2c0.Data);
  }
  if (((FVar26.Data <= (FScriptContainerElement *)&local_228) &&
      ((FScriptContainerElement *)&local_228 < FVar26.Data + (longlong)local_300._4_4_ * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar11 == local_300._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_308,(int *)((longlong)&local_300 + 4));
    FVar26.Data = local_308.Data;
  }
  iVar10 = iVar11 + 1;
  local_300 = CONCAT44(local_300._4_4_,iVar10);
  *(undefined8 **)(FVar26.Data + (longlong)iVar11 * 8) = local_228;
  local_228 = (undefined8 *)0x0;
  local_220 = ::operator_new(0x18);
  if (local_220 == (undefined8 *)0x0) {
    local_220 = (undefined8 *)0x0;
  }
  else {
    ::FString::FString(&local_1d0,L"Ichabod");
    uVar8 = uVar8 | 0x10;
    *local_220 = local_1d0.Data.AllocatorInstance.Data;
    *(int *)(local_220 + 1) = local_1d0.Data.ArrayNum;
    *(int *)((longlong)local_220 + 0xc) = local_1d0.Data.ArrayMax;
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_220 + 2) = 0x57;
    *(undefined1 *)((longlong)local_220 + 0x14) = 0;
    local_1d0.Data.ArrayNum = 0;
    local_1d0.Data.ArrayMax = 0;
  }
  pFVar18 = (FTestData *)0x0;
  if (((uVar8 & 0x10) != 0) &&
     (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (((FVar26.Data <= (FScriptContainerElement *)&local_220) &&
      ((FScriptContainerElement *)&local_220 < FVar26.Data + (longlong)local_300._4_4_ * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar10 == local_300._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_308,(int *)((longlong)&local_300 + 4));
    FVar26.Data = local_308.Data;
  }
  iVar11 = iVar10 + 1;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_244 = 0;
  local_300 = CONCAT44(local_300._4_4_,iVar11);
  *(undefined8 **)(FVar26.Data + (longlong)iVar10 * 8) = local_220;
  local_220 = (undefined8 *)0x0;
  local_248 = 0;
  local_1d8 = FVar26.Data + (longlong)iVar11 * 8;
  FVar20.Data = (FScriptContainerElement *)pFVar18;
  pFVar28 = pFVar18;
  for (; iVar10 = (int)pFVar18, FVar26.Data != local_1d8; FVar26.Data = FVar26.Data + 8) {
    pFVar13 = UE::Core::Private::
              DereferenceIfNecessary<FAlgosTestBase::FTestData,TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>_const_&>
                        ((TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>
                          *)FVar26.Data);
    if (((FVar20.Data <= pFVar13) &&
        (pFVar13 < (FTestData *)(&((FTestData *)FVar20.Data)->Name + (int)pFVar28))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (iVar10 == (int)pFVar28) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_250,(int *)&local_244);
      pFVar28 = (FTestData *)(ulonglong)local_244;
      FVar20.Data = local_250.Data;
    }
    local_248 = iVar10 + 1;
    pFVar18 = (FTestData *)(ulonglong)local_248;
    ::FString::FString(&((FTestData *)FVar20.Data)->Name + iVar10,&pFVar13->Name);
  }
  lVar15 = 5;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,(ForAnyElementType *)&local_188,0,&local_188.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,(ForAnyElementType *)&local_188,&local_188.Data.ArrayNum,&local_188.Data.ArrayMax
            );
  FGenericPlatformString::Memcpy(local_188.Data.AllocatorInstance.Data,L"Elsa",10);
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170[0] = 0;
  local_170[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_178,0,local_170 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_178,local_170,local_170 + 1);
  FGenericPlatformString::Memcpy(local_178.Data,L"Fred",10);
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160[0] = 0;
  local_160[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,&local_168,0,local_160 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,&local_168,local_160,local_160 + 1);
  FGenericPlatformString::Memcpy(local_168.Data,L"Georgina",0x12);
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150[0] = 0;
  local_150[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_158,0,local_150 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,6,&local_158,local_150,local_150 + 1);
  FGenericPlatformString::Memcpy(local_158.Data,L"Henry",0xc);
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140[0] = 0;
  local_140[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_148,0,local_140 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,&local_148,local_140,local_140 + 1);
  FGenericPlatformString::Memcpy(local_148.Data,L"Ichabod",0x10);
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_1c0,5,&local_1b4);
  FVar26.Data = local_1c0.Data;
  ConstructItems<FString,FString,int>(local_1c0.Data,&local_188,5);
  pFVar24 = &local_138;
  do {
    pFVar16 = pFVar24[-1].Data.AllocatorInstance.Data;
    pFVar24 = pFVar24 + -1;
    lVar15 = lVar15 + -1;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    iVar6 = local_1b8;
  } while (lVar15 != 0);
  if (((iVar10 != local_1b8) ||
      (bVar7 = CompareItems<FString,int>((FString *)FVar20.Data,(FString *)FVar26.Data,iVar10),
      !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Names == ExpectedNames",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0xf1,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  DestructItems<FString,int>((FString *)FVar26.Data,iVar6);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  DestructItems<FString,int>((FString *)FVar20.Data,iVar10);
  if ((FTestData *)FVar20.Data != (FTestData *)0x0) {
    FMemory::Free(FVar20.Data);
  }
  FVar26.Data = local_308.Data;
  DestructItems<TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>,int>
            ((TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_> *)
             local_308.Data,iVar11);
  if (FVar26.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar26.Data);
  }
  if (local_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data);
  }
  return;
}

// TestTransformIf @ 1415ffb20

/* WARNING: Removing unreachable block (ram,0x0001416008c7) */
/* WARNING: Removing unreachable block (ram,0x000141600b9c) */
/* WARNING: Removing unreachable block (ram,0x000141600cc1) */
/* WARNING: Removing unreachable block (ram,0x000141600686) */
/* WARNING: Removing unreachable block (ram,0x00014160039e) */
/* WARNING: Removing unreachable block (ram,0x0001416002ab) */
/* WARNING: Removing unreachable block (ram,0x00014160050f) */
/* WARNING: Removing unreachable block (ram,0x0001416007f4) */

void __thiscall FAlgosTestBase::TestTransformIf(FAlgosTestBase *this)

{
  FScriptContainerElement **ppFVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FTestData *pFVar9;
  FTestData *pFVar10;
  ulonglong uVar11;
  FTestData *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement **ppFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  FString *pFVar26;
  undefined1 local_res8 [8];
  undefined1 local_res10 [24];
  ForAnyElementType local_198;
  undefined8 local_190;
  ForAnyElementType local_188;
  uint local_180;
  uint local_17c;
  float local_178;
  float local_174;
  ForAnyElementType local_170;
  int local_168 [2];
  ForAnyElementType local_160;
  int local_158 [2];
  ForAnyElementType local_150;
  int local_148 [2];
  ForAnyElementType local_140;
  int local_138 [2];
  ForAnyElementType local_130;
  int local_128 [2];
  ForAnyElementType local_120;
  uint local_118;
  uint local_114;
  ForAnyElementType local_110;
  undefined8 local_108;
  FTestData *local_100;
  FTestData *local_f8;
  FTestData *local_f0;
  TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_> local_e8;
  FString local_e0;
  FString local_d0;
  ForAnyElementType local_c0;
  int local_b8 [2];
  FString local_b0;
  ForAnyElementType local_a0;
  int local_98 [2];
  FScriptContainerElement *local_90;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  ForAnyElementType local_78;
  int local_70;
  int local_6c [11];
  
  fVar4 = __real_3c8efa35;
  pFVar15 = (this->TestData).AllocatorInstance.Data;
  uVar14 = 0;
  iVar21 = (this->TestData).ArrayNum;
  local_90 = (FScriptContainerElement *)((ulonglong)local_90 & 0xffffffff00000000);
  pFVar25 = pFVar15 + (longlong)iVar21 * 4;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_17c = 0;
  uVar11 = uVar14;
  uVar20 = uVar14;
  while( true ) {
    iVar6 = (int)uVar11;
    if ((this->TestData).ArrayNum != iVar21) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar25) break;
    if ((*(uint *)pFVar15 & 1) == 0) {
      local_178 = (float)(int)*(uint *)pFVar15 * fVar4;
      if (((local_188.Data <= (FScriptContainerElement *)&local_178) &&
          ((FScriptContainerElement *)&local_178 < local_188.Data + (longlong)(int)uVar20 * 4)) &&
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
      if (iVar6 == (int)uVar20) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_188,(int *)&local_17c);
        uVar20 = (ulonglong)local_17c;
      }
      local_180 = iVar6 + 1;
      uVar11 = (ulonglong)local_180;
      *(float *)(local_188.Data + (longlong)iVar6 * 4) = local_178;
    }
    pFVar15 = pFVar15 + 4;
  }
  lVar23 = 0;
  uVar20 = uVar14;
  uVar22 = uVar14;
  do {
    iVar21 = (int)uVar14;
    if (((this->TestData).ArrayNum <= iVar21) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((byte)(this->TestData).AllocatorInstance.Data[lVar23] & 1) == 0) {
      if (((this->TestData).ArrayNum <= iVar21) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = (uint)uVar22;
      iVar2 = *(int *)((this->TestData).AllocatorInstance.Data + lVar23);
      uVar7 = 0;
      if ((int)uVar13 < iVar6) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((float)iVar2 * fVar4 != *(float *)(local_188.Data + uVar20)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestArray[j] == FMath::DegreesToRadians((float)TestData[i])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                             ,0x101,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar22 = (ulonglong)(uVar13 + 1);
      uVar20 = uVar20 + 4;
    }
    uVar14 = (ulonglong)(iVar21 + 1U);
    lVar23 = lVar23 + 4;
  } while ((int)(iVar21 + 1U) < 0x20);
  pFVar15 = (this->TestData2).AllocatorInstance.Data;
  iVar21 = (this->TestData2).ArrayNum;
  pFVar25 = pFVar15 + (longlong)iVar21 * 4;
  while( true ) {
    uVar7 = (uint)uVar11;
    if ((this->TestData2).ArrayNum != iVar21) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar15 == pFVar25) break;
    if ((*(uint *)pFVar15 & 1) == 0) {
      local_174 = (float)(int)*(uint *)pFVar15 * fVar4;
      if (((local_188.Data <= (FScriptContainerElement *)&local_174) &&
          ((FScriptContainerElement *)&local_174 < local_188.Data + (longlong)(int)local_17c * 4))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar7 == local_17c) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_188,(int *)&local_17c);
      }
      local_180 = uVar7 + 1;
      uVar11 = (ulonglong)local_180;
      *(float *)(local_188.Data + (longlong)(int)uVar7 * 4) = local_174;
    }
    pFVar15 = pFVar15 + 4;
  }
  uVar13 = 0;
  iVar21 = 0;
  lVar23 = 0;
  lVar24 = 0;
  do {
    if (((this->TestData).ArrayNum <= iVar21) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((byte)(this->TestData).AllocatorInstance.Data[lVar24] & 1) == 0) {
      if (((this->TestData).ArrayNum <= iVar21) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)((this->TestData).AllocatorInstance.Data + lVar24);
      uVar8 = 0;
      if ((int)uVar13 < (int)uVar7) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((float)iVar6 * fVar4 != *(float *)(local_188.Data + lVar23)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestArray[j] == FMath::DegreesToRadians((float)TestData[i])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                             ,0x10f,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = uVar13 + 1;
      lVar23 = lVar23 + 4;
    }
    iVar21 = iVar21 + 1;
    lVar24 = lVar24 + 4;
  } while (iVar21 < 0x20);
  iVar21 = 0;
  lVar23 = (longlong)(int)uVar13 << 2;
  lVar24 = 0;
  do {
    if (((this->TestData2).ArrayNum <= iVar21) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((byte)(this->TestData2).AllocatorInstance.Data[lVar24] & 1) == 0) {
      if (((this->TestData2).ArrayNum <= iVar21) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)((this->TestData2).AllocatorInstance.Data + lVar24);
      uVar8 = 0;
      if ((int)uVar13 < (int)uVar7) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((float)iVar6 * fVar4 != *(float *)(local_188.Data + lVar23)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestArray[j] == FMath::DegreesToRadians((float)TestData2[i])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                             ,0x117,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar13 = uVar13 + 1;
      lVar23 = lVar23 + 4;
    }
    iVar21 = iVar21 + 1;
    lVar24 = lVar24 + 4;
  } while (iVar21 < 0x20);
  if ((uVar13 != uVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("j == TestArray.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x11b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = (FTestData *)0x0;
  local_198.Data = (FScriptContainerElement *)0x0;
  local_190 = 0;
  pFVar9 = ::operator_new(0x18);
  pFVar10 = pFVar12;
  if (pFVar9 != (FTestData *)0x0) {
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168[0] = 0;
    local_168[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_170,0,local_168 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_170,local_168,local_168 + 1);
    FVar18.Data = local_170.Data;
    FGenericPlatformString::Memcpy(local_170.Data,L"Jeff",10);
    (pFVar9->Name).Data.AllocatorInstance.Data = FVar18.Data;
    (pFVar9->Name).Data.ArrayNum = local_168[0];
    (pFVar9->Name).Data.ArrayMax = local_168[1];
    pFVar9->Age = 0xf;
    pFVar9->bRetired = false;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168[0] = 0;
    local_168[1] = 0;
    pFVar10 = pFVar9;
  }
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_198,(int *)((longlong)&local_190 + 4));
  FVar18.Data = local_198.Data;
  iVar21 = iVar6 + 1;
  local_190 = CONCAT44(local_190._4_4_,iVar21);
  *(FTestData **)(local_198.Data + (longlong)iVar6 * 8) = pFVar10;
  pFVar10 = ::operator_new(0x18);
  local_100 = pFVar12;
  if (pFVar10 != (FTestData *)0x0) {
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158[0] = 0;
    local_158[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,8,&local_160,0,local_158 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,8,&local_160,local_158,local_158 + 1);
    FVar16.Data = local_160.Data;
    FGenericPlatformString::Memcpy(local_160.Data,L"Katrina",0x10);
    (pFVar10->Name).Data.AllocatorInstance.Data = FVar16.Data;
    (pFVar10->Name).Data.ArrayNum = local_158[0];
    (pFVar10->Name).Data.ArrayMax = local_158[1];
    pFVar10->Age = 0x4d;
    pFVar10->bRetired = true;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158[0] = 0;
    local_158[1] = 0;
    local_100 = pFVar10;
  }
  if (((FVar18.Data <= (FScriptContainerElement *)&local_100) &&
      ((FScriptContainerElement *)&local_100 < FVar18.Data + (longlong)local_190._4_4_ * 8)) &&
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
  if (iVar21 == local_190._4_4_) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_198,(int *)((longlong)&local_190 + 4));
    FVar18.Data = local_198.Data;
  }
  iVar6 = iVar21 + 1;
  local_190 = CONCAT44(local_190._4_4_,iVar6);
  *(FTestData **)(FVar18.Data + (longlong)iVar21 * 8) = local_100;
  local_100 = (FTestData *)0x0;
  pFVar10 = ::operator_new(0x18);
  local_f8 = pFVar12;
  if (pFVar10 != (FTestData *)0x0) {
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148[0] = 0;
    local_148[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,6,&local_150,0,local_148 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,6,&local_150,local_148,local_148 + 1);
    FVar16.Data = local_150.Data;
    FGenericPlatformString::Memcpy(local_150.Data,L"Lenny",0xc);
    (pFVar10->Name).Data.AllocatorInstance.Data = FVar16.Data;
    (pFVar10->Name).Data.ArrayNum = local_148[0];
    (pFVar10->Name).Data.ArrayMax = local_148[1];
    pFVar10->Age = 0x1d;
    pFVar10->bRetired = false;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148[0] = 0;
    local_148[1] = 0;
    local_f8 = pFVar10;
  }
  if (((FVar18.Data <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 < FVar18.Data + (longlong)local_190._4_4_ * 8)) &&
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
  if (iVar6 == local_190._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_198,(int *)((longlong)&local_190 + 4));
    FVar18.Data = local_198.Data;
  }
  iVar21 = iVar6 + 1;
  local_190 = CONCAT44(local_190._4_4_,iVar21);
  *(FTestData **)(FVar18.Data + (longlong)iVar6 * 8) = local_f8;
  local_f8 = (FTestData *)0x0;
  pFVar10 = ::operator_new(0x18);
  local_f0 = pFVar12;
  if (pFVar10 != (FTestData *)0x0) {
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138[0] = 0;
    local_138[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_140,0,local_138 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,9,&local_140,local_138,local_138 + 1);
    FVar16.Data = local_140.Data;
    FGenericPlatformString::Memcpy(local_140.Data,L"Michelle",0x12);
    (pFVar10->Name).Data.AllocatorInstance.Data = FVar16.Data;
    (pFVar10->Name).Data.ArrayNum = local_138[0];
    (pFVar10->Name).Data.ArrayMax = local_138[1];
    pFVar10->Age = 0xd;
    pFVar10->bRetired = false;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138[0] = 0;
    local_138[1] = 0;
    local_f0 = pFVar10;
  }
  if (((FVar18.Data <= (FScriptContainerElement *)&local_f0) &&
      ((FScriptContainerElement *)&local_f0 < FVar18.Data + (longlong)local_190._4_4_ * 8)) &&
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
  if (iVar21 == local_190._4_4_) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_198,(int *)((longlong)&local_190 + 4));
    FVar18.Data = local_198.Data;
  }
  iVar6 = iVar21 + 1;
  local_190 = CONCAT44(local_190._4_4_,iVar6);
  *(FTestData **)(FVar18.Data + (longlong)iVar21 * 8) = local_f0;
  local_f0 = (FTestData *)0x0;
  pFVar10 = ::operator_new(0x18);
  local_e8.Ptr = pFVar12;
  if (pFVar10 != (FTestData *)0x0) {
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128[0] = 0;
    local_128[1] = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_130,0,local_128 + 1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,5,&local_130,local_128,local_128 + 1);
    FVar16.Data = local_130.Data;
    FGenericPlatformString::Memcpy(local_130.Data,L"Nico",10);
    (pFVar10->Name).Data.AllocatorInstance.Data = FVar16.Data;
    (pFVar10->Name).Data.ArrayNum = local_128[0];
    (pFVar10->Name).Data.ArrayMax = local_128[1];
    pFVar10->Age = 0x41;
    pFVar10->bRetired = true;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128[0] = 0;
    local_128[1] = 0;
    local_e8.Ptr = pFVar10;
  }
  if (((FVar18.Data <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < FVar18.Data + (longlong)local_190._4_4_ * 8)) &&
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
  if (iVar6 == local_190._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_198,(int *)((longlong)&local_190 + 4));
    FVar18.Data = local_198.Data;
  }
  iVar21 = iVar6 + 1;
  local_190 = CONCAT44(local_190._4_4_,iVar21);
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  *(FTestData **)(FVar18.Data + (longlong)iVar6 * 8) = local_e8.Ptr;
  local_e8.Ptr = (FTestData *)0x0;
  local_114 = 0;
  pFVar25 = FVar18.Data + (longlong)iVar21 * 8;
  FVar16.Data = (FScriptContainerElement *)pFVar12;
  pFVar10 = pFVar12;
  local_90 = pFVar25;
  for (; iVar6 = (int)pFVar12, FVar18.Data != pFVar25; FVar18.Data = FVar18.Data + 8) {
    pFVar9 = UE::Core::Private::
             DereferenceIfNecessary<FAlgosTestBase::FTestData,TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>_const_&>
                       ((TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>
                         *)FVar18.Data);
    if (pFVar9->bRetired != false) {
      pFVar9 = UE::Core::Private::
               DereferenceIfNecessary<FAlgosTestBase::FTestData,TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>_const_&>
                         ((TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>
                           *)FVar18.Data);
      if (((FVar16.Data <= pFVar9) &&
          (pFVar9 < (FTestData *)(&((FTestData *)FVar16.Data)->Name + (int)pFVar10))) &&
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
      if (iVar6 == (int)pFVar10) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_120,(int *)&local_114);
        pFVar10 = (FTestData *)(ulonglong)local_114;
        FVar16.Data = local_120.Data;
      }
      local_118 = iVar6 + 1;
      pFVar12 = (FTestData *)(ulonglong)local_118;
      ::FString::FString(&((FTestData *)FVar16.Data)->Name + iVar6,&pFVar9->Name);
      pFVar25 = local_90;
    }
  }
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d0,0,&local_d0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,8,(ForAnyElementType *)&local_d0,&local_d0.Data.ArrayNum,&local_d0.Data.ArrayMax);
  FGenericPlatformString::Memcpy(local_d0.Data.AllocatorInstance.Data,L"Katrina",0x10);
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_c0,0,local_b8 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,&local_c0,local_b8,local_b8 + 1);
  FGenericPlatformString::Memcpy(local_c0.Data,L"Nico",10);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_88,2,&local_7c);
  FVar18.Data = local_88.Data;
  ConstructItems<FString,FString,int>(local_88.Data,&local_d0,2);
  pFVar26 = &local_b0;
  lVar23 = 2;
  do {
    pFVar25 = pFVar26[-1].Data.AllocatorInstance.Data;
    pFVar26 = pFVar26 + -1;
    lVar23 = lVar23 + -1;
    if (pFVar25 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar25);
    }
    iVar2 = local_80;
  } while (lVar23 != 0);
  if (((iVar6 != local_80) ||
      (bVar5 = CompareItems<FString,int>((FString *)FVar16.Data,(FString *)FVar18.Data,iVar6),
      !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NamesOfRetired == ExpectedNamesOfRetired",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x12a,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  DestructItems<FString,int>((FString *)FVar18.Data,iVar2);
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  DestructItems<FString,int>((FString *)FVar16.Data,iVar6);
  if ((FTestData *)FVar16.Data != (FTestData *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  FVar18.Data = (FScriptContainerElement *)0x0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  pFVar25 = local_198.Data + (longlong)iVar21 * 8;
  pFVar19 = FVar18.Data;
  pFVar15 = FVar18.Data;
  for (FVar16.Data = local_198.Data; iVar6 = (int)pFVar19, FVar16.Data != pFVar25;
      FVar16.Data = FVar16.Data + 8) {
    pFVar10 = UE::Core::Private::
              DereferenceIfNecessary<FAlgosTestBase::FTestData,TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>_const_&>
                        ((TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>
                          *)FVar16.Data);
    if (pFVar10->Age - 0xdU < 7) {
      pFVar10 = UE::Core::Private::
                DereferenceIfNecessary<FAlgosTestBase::FTestData,TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>_const_&>
                          ((TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>
                            *)FVar16.Data);
      ::FString::FString(&local_e0,&pFVar10->Name);
      if (((FVar18.Data <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 < FVar18.Data + (longlong)(int)pFVar15 * 0x10)) &&
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
      if (iVar6 == (int)pFVar15) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_110,(int *)((longlong)&local_108 + 4));
        pFVar15 = (FScriptContainerElement *)(local_108 >> 0x20);
        FVar18.Data = local_110.Data;
      }
      lVar23 = (longlong)iVar6;
      pFVar19 = (FScriptContainerElement *)(ulonglong)(iVar6 + 1U);
      local_108 = CONCAT44(local_108._4_4_,iVar6 + 1U);
      *(undefined8 *)(FVar18.Data + lVar23 * 0x10) = 0;
      *(FScriptContainerElement **)(FVar18.Data + lVar23 * 0x10) =
           local_e0.Data.AllocatorInstance.Data;
      local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(FVar18.Data + lVar23 * 0x10 + 8) = local_e0.Data.ArrayNum;
      *(int *)(FVar18.Data + lVar23 * 0x10 + 0xc) = local_e0.Data.ArrayMax;
      local_e0.Data.ArrayNum = 0;
      local_e0.Data.ArrayMax = 0;
    }
  }
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar23 = 2;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,(ForAnyElementType *)&local_b0,0,&local_b0.Data.ArrayMax);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,5,(ForAnyElementType *)&local_b0,&local_b0.Data.ArrayNum,&local_b0.Data.ArrayMax);
  FGenericPlatformString::Memcpy(local_b0.Data.AllocatorInstance.Data,L"Jeff",10);
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,&local_a0,0,local_98 + 1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,9,&local_a0,local_98,local_98 + 1);
  FGenericPlatformString::Memcpy(local_a0.Data,L"Michelle",0x12);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_78,2,local_6c);
  FVar16.Data = local_78.Data;
  ConstructItems<FString,FString,int>(local_78.Data,&local_b0,2);
  ppFVar17 = &local_90;
  do {
    ppFVar1 = ppFVar17 + -2;
    ppFVar17 = ppFVar17 + -2;
    lVar23 = lVar23 + -1;
    if (*ppFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(*ppFVar1);
    }
    iVar2 = local_70;
  } while (lVar23 != 0);
  if (((iVar6 != local_70) ||
      (bVar5 = CompareItems<FString,int>((FString *)FVar18.Data,(FString *)FVar16.Data,iVar6),
      !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NamesOfTeenagers == ExpectedNamesOfTeenagers",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Containers\\Algo\\AlgosTest.cpp"
                         ,0x132,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  DestructItems<FString,int>((FString *)FVar16.Data,iVar2);
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  DestructItems<FString,int>((FString *)FVar18.Data,iVar6);
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  FVar18.Data = local_198.Data;
  DestructItems<TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_>,int>
            ((TUniquePtr<FAlgosTestBase::FTestData,TDefaultDelete<FAlgosTestBase::FTestData>_> *)
             local_198.Data,iVar21);
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  return;
}

