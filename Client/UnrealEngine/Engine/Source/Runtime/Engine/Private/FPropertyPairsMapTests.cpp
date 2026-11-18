// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// GetTestFlags @ 14886ab10

EAutomationTestFlags __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::GetTestFlags(FPropertyPairsMapTests *this)

{
  return EngineFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 14886ab20

bool __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::IsStressTest(FPropertyPairsMapTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14886ab30

uint __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::GetRequiredDeviceNum(FPropertyPairsMapTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 14886ab40

FString * __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::GetTestSourceFileName
          (FPropertyPairsMapTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Tests\\PropertyPairsMapTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14886ab70

int __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::GetTestSourceFileLine(FPropertyPairsMapTests *this)

{
  return 0xe;
}

// GetTests @ 14886ab80

/* WARNING: Removing unreachable block (ram,0x00014886ac6d) */
/* WARNING: Removing unreachable block (ram,0x00014886ad38) */

void __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::GetTests
          (FPropertyPairsMapTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Engine.PropertyPairsMap");
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

// RunTest @ 14886ad60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::RunTest
          (FPropertyPairsMapTests *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  FString *pFVar6;
  FName *pFVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  wchar_t *pwVar10;
  bool bVar11;
  undefined1 auStackY_f8 [32];
  FName local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [16];
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName *local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  undefined1 local_40 [8];
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar7 = (FName *)0x0;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_48 = 0xffffffff;
  ::FName::FName((FName *)local_c0,L"Invalid",FNAME_Find);
  if ((FName)local_c0 != (FName)0x0) {
    uVar3 = ::GetTypeHash((FNameEntryId)local_c0._0_4_);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & local_c0._4_4_ + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == (FName)local_c0) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            bVar11 = true;
            goto LAB_14886ae3f;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886ae3f:
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"PropertyPairsMap.HasProperty(Invalid)",bVar11);
  ::FName::FName(&local_98,L"Invalid");
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  pFVar5 = ::FName::FName(&local_90,L"WithoutValue");
  local_a0 = *pFVar5;
  local_88 = (FName)&local_a0;
  local_80 = &local_c8;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_78,(TPairInitializer<FName_const_&,FName_const_&> *)local_c0,(bool *)&local_88
            );
  ::FName::FName(&local_c8,L"WithoutValue",FNAME_Find);
  FVar2 = local_c8;
  if (local_c8 != (FName)0x0) {
    uVar3 = ::GetTypeHash(local_c8.ComparisonIndex.Value);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & FVar2.Number + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == FVar2) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            bVar11 = true;
            goto LAB_14886af1f;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886af1f:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.HasProperty(WithoutValue)",bVar11);
  ::FName::FName(&local_c8,L"WithoutValue",FNAME_Find);
  FVar2 = local_c8;
  if (local_c8 != (FName)0x0) {
    uVar3 = ::GetTypeHash(local_c8.ComparisonIndex.Value);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & FVar2.Number + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == FVar2) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            bVar11 = true;
            goto LAB_14886afab;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886afab:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.GetProperty(WithoutValue)",bVar11);
  pFVar6 = ::FName::ToString(&local_98,(FString *)local_b8);
  pwVar10 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"Invalid");
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WithoutValueValue is Invalid",iVar4 == 0);
  if ((FName *)local_b8._0_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  ::FName::FName(&local_c8,L"WithoutValue",FNAME_Find);
  FVar2 = local_c8;
  if (local_c8 != (FName)0x0) {
    uVar3 = ::GetTypeHash(local_c8.ComparisonIndex.Value);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & FVar2.Number + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == FVar2) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            local_98 = *pFVar5;
            bVar11 = true;
            goto LAB_14886b0df;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886b0df:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.GetProperty(WithVoutValue)",bVar11);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"WithoutValueValue is None",local_98 == (FName)0x0);
  ::FName::FName(&local_a8,L"Invalid");
  pFVar5 = ::FName::FName(&local_90,L"Value1");
  local_a0 = *pFVar5;
  pFVar5 = ::FName::FName(&local_88,L"WithValue");
  local_c8 = *pFVar5;
  local_b8._0_8_ = &local_c8;
  local_b8._8_8_ = &local_a0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_78,(TPairInitializer<FName_const_&,FName_const_&> *)local_c0,(bool *)local_b8)
  ;
  ::FName::FName(&local_c8,L"WithValue",FNAME_Find);
  FVar2 = local_c8;
  if (local_c8 != (FName)0x0) {
    uVar3 = ::GetTypeHash(local_c8.ComparisonIndex.Value);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & FVar2.Number + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == FVar2) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            bVar11 = true;
            goto LAB_14886b1e1;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886b1e1:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.HasProperty(WithValue)",bVar11);
  ::FName::FName(&local_c8,L"WithValue",FNAME_Find);
  FVar2 = local_c8;
  if (local_c8 != (FName)0x0) {
    uVar3 = ::GetTypeHash(local_c8.ComparisonIndex.Value);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & FVar2.Number + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == FVar2) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            bVar11 = true;
            goto LAB_14886b26f;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886b26f:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.GetProperty(WithValue)",bVar11);
  pFVar6 = ::FName::ToString(&local_a8,(FString *)local_b8);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"Invalid");
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WithValueValue is Invalid",iVar4 == 0)
  ;
  if ((FName *)local_b8._0_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  ::FName::FName(&local_c8,L"WithValue",FNAME_Find);
  FVar2 = local_c8;
  if (local_c8 != (FName)0x0) {
    uVar3 = ::GetTypeHash(local_c8.ComparisonIndex.Value);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & FVar2.Number + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == FVar2) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            local_a8 = *pFVar5;
            bVar11 = true;
            goto LAB_14886b39b;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886b39b:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.GetProperty(WithValue)",bVar11);
  pFVar6 = ::FName::ToString(&local_a8,(FString *)local_b8);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"Value1");
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WithValueValue is Value1",iVar4 == 0);
  if ((FName *)local_b8._0_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pFVar5 = ::FName::FName(&local_88,L"Value2");
  local_a0 = *pFVar5;
  pFVar5 = ::FName::FName(&local_90,L"WithValue");
  local_c8 = *pFVar5;
  local_b8._0_8_ = &local_c8;
  local_b8._8_8_ = &local_a0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)local_78,(TPairInitializer<FName_const_&,FName_const_&> *)local_c0,(bool *)local_b8)
  ;
  ::FName::FName(&local_c8,L"WithValue",FNAME_Find);
  FVar2 = local_c8;
  if (local_c8 != (FName)0x0) {
    uVar3 = ::GetTypeHash(local_c8.ComparisonIndex.Value);
    if (local_78._8_4_ != local_44) {
      FVar9 = (ForElementType<FSetElementId>)local_40;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = local_38;
      }
      iVar4 = *(int *)((longlong)FVar9 + (ulonglong)(local_30 - 1U & FVar2.Number + uVar3) * 4);
      while (iVar4 != -1) {
        pFVar1 = (FScriptContainerElement *)(local_78._0_8_ + (longlong)iVar4 * 0x18);
        if (*(FName *)(local_78._0_8_ + (longlong)iVar4 * 0x18) == FVar2) {
          pFVar5 = (FName *)(pFVar1 + 8);
          if (pFVar1 == (FScriptContainerElement *)0x0) {
            pFVar5 = pFVar7;
          }
          if (pFVar5 != (FName *)0x0) {
            bVar11 = true;
            goto LAB_14886b4db;
          }
          break;
        }
        iVar4 = *(int *)(pFVar1 + 0x10);
      }
    }
  }
  bVar11 = false;
LAB_14886b4db:
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.HasProperty(WithValue)",bVar11);
  ::FName::FName(&local_c8,L"WithValue",FNAME_Find);
  if ((local_c8 == (FName)0x0) ||
     (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)local_78,local_c8), pFVar7 == (FName *)0x0)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.GetProperty(WithValue)",bVar11);
  pFVar6 = ::FName::ToString(&local_a8,(FString *)local_b8);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"Value1");
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WithValueValue is Value1",iVar4 == 0);
  if ((FName *)local_b8._0_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  ::FName::FName(&local_c8,L"WithValue",FNAME_Find);
  if ((local_c8 == (FName)0x0) ||
     (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
               ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                       *)local_78,local_c8), pFVar7 == (FName *)0x0)) {
    bVar11 = false;
  }
  else {
    local_a8 = *pFVar7;
    bVar11 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"PropertyPairsMap.GetProperty(WithValue)",bVar11);
  pFVar6 = ::FName::ToString(&local_a8,(FString *)local_b8);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp(pwVar10,L"Value2");
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"WithValueValue is Value2",iVar4 == 0);
  if ((FName *)local_b8._0_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  FPropertyPairsMap::
  ForEachProperty<_PropertyPairsMapTests::FPropertyPairsMapTests::RunTest_::__l2::<lambda_1>_>
            ((FPropertyPairsMap *)local_78,(<lambda_1>)this);
  FPropertyPairsMap::
  ForEachProperty<_PropertyPairsMapTests::FPropertyPairsMapTests::RunTest_::__l2::<lambda_2>_>
            ((FPropertyPairsMap *)local_78,(<lambda_2>)this);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar4 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return true;
}

// GetBeautifiedTestName @ 14886b6f0

FString * __thiscall
PropertyPairsMapTests::FPropertyPairsMapTests::GetBeautifiedTestName
          (FPropertyPairsMapTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Engine.PropertyPairsMap");
  return __return_storage_ptr__;
}

// operator() @ 148880cd0

void __thiscall
`PropertyPairsMapTests::FPropertyPairsMapTests::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FName param_1,FName param_2)

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  
  pFVar1 = *(FAutomationTestBase **)this;
  bVar2 = ::FName::Equals(param_1,L"WithoutValue");
  if (bVar2) {
LAB_148880d1b:
    bVar2 = true;
  }
  else {
    bVar2 = ::FName::Equals(param_1,L"WithValue");
    if (bVar2) goto LAB_148880d1b;
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue(pFVar1,L"Unbreakable iterator",bVar2);
  pFVar1 = *(FAutomationTestBase **)this;
  if (param_2 != (FName)0x0) {
    bVar2 = ::FName::Equals(param_2,L"Value2");
    if (!bVar2) {
      bVar2 = false;
      goto LAB_148880d50;
    }
  }
  bVar2 = true;
LAB_148880d50:
  FAutomationTestBase::TestTrue(pFVar1,L"Unbreakable iterator",bVar2);
  return;
}

// operator() @ 148881600

bool __thiscall
`PropertyPairsMapTests::FPropertyPairsMapTests::RunTest'::__l2::<lambda_2>::operator()
          (void *this,FName param_1,FName param_2)

{
  FAutomationTestBase *pFVar1;
  bool bVar2;
  
  pFVar1 = *(FAutomationTestBase **)this;
  bVar2 = ::FName::Equals(param_1,L"WithoutValue");
  if (bVar2) {
LAB_14888164b:
    bVar2 = true;
  }
  else {
    bVar2 = ::FName::Equals(param_1,L"WithValue");
    if (bVar2) goto LAB_14888164b;
    bVar2 = false;
  }
  FAutomationTestBase::TestTrue(pFVar1,L"Breakable iterator",bVar2);
  pFVar1 = *(FAutomationTestBase **)this;
  if (param_2 != (FName)0x0) {
    bVar2 = ::FName::Equals(param_2,L"Value2");
    if (!bVar2) {
      bVar2 = false;
      goto LAB_148881680;
    }
  }
  bVar2 = true;
LAB_148881680:
  FAutomationTestBase::TestTrue(pFVar1,L"Breakable iterator",bVar2);
  return true;
}

