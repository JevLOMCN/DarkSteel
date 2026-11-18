// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// <lambda_invoker_cdecl> @ 148877a70

void __cdecl
`FLoadingTests_Renames_Base::DoRenameTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FLoadingTestsScope *param_1)

{
  UAsyncLoadingTests_Shared *pUVar1;
  UAsyncLoadingTests_Shared *pUVar2;
  
  pUVar1 = param_1->Object2;
  pUVar2 = param_1->Object1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UAsyncLoadingTests_Shared *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (pUVar2->HardReference).field0_0x0.DebugPtr = (UObject *)pUVar1;
  return;
}

// DoRenameTest @ 148889230

void __thiscall
FLoadingTests_Renames_Base::DoRenameTest(FLoadingTests_Renames_Base *this,bool param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UPackage *this_00;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  code *local_a0;
  undefined8 local_90;
  FLoadingTestsScope local_88;
  
  local_a8 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFLoadingTestsScope___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_a0 = `FLoadingTests_Renames_Base::DoRenameTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FLoadingTestsScope_&),void,FLoadingTestsScope_&>
                ::Call;
  local_90 = 0;
  FLoadingTestsScope::FLoadingTestsScope
            (&local_88,(FAutomationTestBase *)this,
             (TFunction<void___cdecl(FLoadingTestsScope_&)> *)local_b8);
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_f8.DataPtr = L"/Engine/LoadingTestsScope_Package2.TestObject";
  local_108.DataPtr = (wchar_t *)0x0;
  local_f8.Size = 0x2d;
  pUVar5 = UAsyncLoadingTests_Shared::StaticClass();
  local_e8.DataPtr = local_108.DataPtr;
  local_e8.Size = local_108.Size;
  local_e8._12_4_ = local_108._12_4_;
  pUVar6 = StaticLoadObject(pUVar5,(UObject *)0x0,&local_f8,&local_e8,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  FLoadingTestsScope::CreatePackage(&local_88);
  (**(code **)(*(longlong *)pUVar6 + 0x170))(pUVar6,0);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar6,&local_d8,(UObject *)0x0,None);
  if (param_1) {
    FLoadingTestsScope::SavePackages(&local_88);
  }
  if (param_2) {
    FLoadingTestsScope::GarbageCollect(&local_88.PackageNames,local_88.AutomationTest);
  }
  local_108.Size = 0;
  local_108._12_4_ = 0;
  local_f8.DataPtr = L"/Engine/LoadingTestsScope_Package1.TestObject";
  local_108.DataPtr = (wchar_t *)0x0;
  local_f8.Size = 0x2d;
  pUVar5 = UAsyncLoadingTests_Shared::StaticClass();
  local_e8.DataPtr = local_108.DataPtr;
  local_e8.Size = local_108.Size;
  local_e8._12_4_ = local_108._12_4_;
  pUVar6 = StaticLoadObject(pUVar5,(UObject *)0x0,&local_f8,&local_e8,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  ::FString::FString((FString *)&local_108,"Object1 should have been loaded");
  pwVar9 = L"";
  if (pUVar6 == (UObject *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_f8,L"%s: The two values are equal.");
    (*pcVar2)(this,&local_f8);
    if (local_f8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
  }
  if (local_108.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_108.DataPtr);
  }
  if (pUVar6 != (UObject *)0x0) {
    lVar3 = *(longlong *)(pUVar6 + 2);
    ::FString::FString((FString *)&local_108,"Object1\'s hard reference should have been loaded");
    if (lVar3 == 0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl((FString *)&local_f8,L"%s: The two values are equal.");
      (*pcVar2)(this,&local_f8);
      if (local_f8.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_f8.DataPtr);
      }
    }
    if (local_108.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_108.DataPtr);
    }
    if (*(UObject **)(pUVar6 + 2) != (UObject *)0x0) {
      UE::CoreUObject::Private::GetFullName
                ((FString *)&local_f8,*(UObject **)(pUVar6 + 2),(UObject *)0x0,None);
      ::FString::FString((FString *)&local_108,
                         "Object1\'s hard reference object name should be the moved object");
      pwVar8 = L"";
      if (local_108.Size != 0) {
        pwVar8 = local_108.DataPtr;
      }
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar11.Data = local_d8.Data.AllocatorInstance.Data;
      }
      pwVar10 = L"";
      if (local_f8.Size != 0) {
        pwVar10 = local_f8.DataPtr;
      }
      FAutomationTestBase::TestEqual
                ((FAutomationTestBase *)this,pwVar8,pwVar10,(wchar_t *)FVar11.Data);
      if (local_108.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_108.DataPtr);
      }
      if (local_f8.DataPtr != (wchar_t *)0x0) {
        FMemory::Free(local_f8.DataPtr);
      }
    }
  }
  this_00 = LoadPackage((UPackage *)0x0,L"/Engine/LoadingTestsScope_Package2",0,(FArchive *)0x0,
                        (FLinkerInstancingContext *)0x0);
  ::FString::FString((FString *)&local_108,"Package should have been loaded");
  if (this_00 == (UPackage *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_f8,L"%s: The two values are equal.");
    (*pcVar2)(this);
    if (local_f8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
  }
  if (local_108.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_108.DataPtr);
  }
  if (this_00 != (UPackage *)0x0) {
    local_108.DataPtr = L"/Engine/LoadingTestsScope_Package2";
    local_108.Size = 0x22;
    pFVar7 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this_00,(FString *)&local_c8,(UObject *)0x0);
    local_e8.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    iVar1 = (pFVar7->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    local_e8.Size = iVar4;
    ::FString::FString((FString *)&local_f8,"Package name is wrong");
    pwVar8 = L"";
    if (local_f8.Size != 0) {
      pwVar8 = local_f8.DataPtr;
    }
    FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar8,&local_e8,&local_108);
    if (local_f8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
    if (local_c8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_c8.DataPtr);
    }
  }
  local_f8.Size = 0;
  local_f8._12_4_ = 0;
  local_f8.DataPtr = (wchar_t *)0x0;
  local_e8.DataPtr = L"/Engine/LoadingTestsScope_Package2.TestObject";
  local_e8.Size = 0x2d;
  pUVar5 = UAsyncLoadingTests_Shared::StaticClass();
  local_c8.DataPtr = local_f8.DataPtr;
  local_c8.Size = local_f8.Size;
  local_c8._12_4_ = local_f8._12_4_;
  pUVar6 = StaticLoadObject(pUVar5,(UObject *)0x0,&local_e8,&local_c8,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  ::FString::FString((FString *)&local_108,"Object should have been loaded");
  if (pUVar6 == (UObject *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_e8,L"%s: The two values are equal.");
    (*pcVar2)(this,&local_e8);
    if (local_e8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_e8.DataPtr);
    }
  }
  if (local_108.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_108.DataPtr);
  }
  if (pUVar6 != (UObject *)0x0) {
    pFVar7 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)pUVar6,(FString *)&local_c8,(UObject *)0x0,None);
    ::FString::FString((FString *)&local_f8,"Object name is wrong");
    pwVar8 = L"";
    if (local_f8.Size != 0) {
      pwVar8 = local_f8.DataPtr;
    }
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_d8.Data.ArrayNum != 0) {
      FVar11.Data = local_d8.Data.AllocatorInstance.Data;
    }
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar8,pwVar9,(wchar_t *)FVar11.Data)
    ;
    if (local_f8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_f8.DataPtr);
    }
    if (local_c8.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_c8.DataPtr);
    }
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  FLoadingTestsScope::~FLoadingTestsScope(&local_88);
  return;
}

