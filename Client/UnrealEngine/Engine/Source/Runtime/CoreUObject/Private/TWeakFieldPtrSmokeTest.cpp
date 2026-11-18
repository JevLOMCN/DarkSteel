// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c7fb0

EAutomationTestFlags __thiscall
UE::TWeakFieldPtrSmokeTest::GetTestFlags(TWeakFieldPtrSmokeTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c7fc0

bool __thiscall UE::TWeakFieldPtrSmokeTest::IsStressTest(TWeakFieldPtrSmokeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c7fd0

uint __thiscall UE::TWeakFieldPtrSmokeTest::GetRequiredDeviceNum(TWeakFieldPtrSmokeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c7fe0

FString * __thiscall
UE::TWeakFieldPtrSmokeTest::GetTestSourceFileName
          (TWeakFieldPtrSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\WeakFieldPtrTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c8010

int __thiscall UE::TWeakFieldPtrSmokeTest::GetTestSourceFileLine(TWeakFieldPtrSmokeTest *this)

{
  return 0xe;
}

// GetTests @ 1422c8020

/* WARNING: Removing unreachable block (ram,0x0001422c819e) */

void __thiscall
UE::TWeakFieldPtrSmokeTest::GetTests
          (TWeakFieldPtrSmokeTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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
    iVar4 = Core::Private::
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
    iVar4 = Core::Private::
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

// RunTest @ 1422c81c0

bool __thiscall UE::TWeakFieldPtrSmokeTest::RunTest(TWeakFieldPtrSmokeTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c81f0

FString * __thiscall
UE::TWeakFieldPtrSmokeTest::GetBeautifiedTestName
          (TWeakFieldPtrSmokeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// TWeakFieldPtrSmokeTest @ 1422ce470

TWeakFieldPtrSmokeTest * __thiscall
UE::TWeakFieldPtrSmokeTest::TWeakFieldPtrSmokeTest(TWeakFieldPtrSmokeTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7TWeakFieldPtrSmokeTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::TWeakFieldPtr::Smoke");
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
  ::FString::FString(&local_18,"[Core][UObject][SmokeFilter]");
  local_28.Data.ArrayNum = (this->PrettyNameDotNotation).Data.ArrayNum;
  lVar5 = (longlong)local_28.Data.ArrayNum;
  pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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

// TestBody @ 1422fa2b0

void __thiscall UE::TWeakFieldPtrSmokeTest::TestBody(TWeakFieldPtrSmokeTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FFieldClass *pFVar3;
  bool bVar4;
  bool bVar5;
  FAutomationTestFramework *pFVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  int iVar9;
  ForAnyElementType FVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  FWeakObjectPtr local_2b8;
  FFieldPath local_2b0;
  FWeakObjectPtr local_290;
  FFieldPath local_288;
  FWeakObjectPtr local_268;
  FFieldPath local_260;
  FWeakObjectPtr local_240;
  FFieldPath local_238;
  FWeakObjectPtr local_218;
  FFieldPath local_210;
  FWeakObjectPtr local_1f0;
  FFieldPath local_1e8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_1b0,L"Check that TWeakFieldPtr can hold \'const FProperty\'");
  (*pcVar2)(pFVar1,&local_1b0,0,0);
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  local_2b8.ObjectIndex = 0;
  local_2b8.ObjectSerialNumber = 0;
  local_2b0.ResolvedField = (FField *)0x0;
  local_2b0.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_2b0.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_2b0.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.Path.ArrayNum = 0;
  local_2b0.Path.ArrayMax = 0;
  local_290.ObjectIndex = 0;
  local_290.ObjectSerialNumber = 0;
  local_288.ResolvedField = (FField *)0x0;
  local_288.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_288.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_288.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.Path.ArrayNum = 0;
  local_288.Path.ArrayMax = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_res18);
  local_2b0.ResolvedField = (FField *)0x0;
  FFieldPath::Generate(&local_2b0,(FField *)0x0);
  local_2b8 = local_290;
  pFVar7 = FProperty::StaticClass();
  bVar5 = false;
  if ((local_288.ResolvedField == (FField *)0x0) ||
     (bVar4 = FWeakObjectPtr::IsValid(&local_288.ResolvedOwner.WeakPtr),
     pFVar8 = local_288.ResolvedField, !bVar4)) {
    iVar9 = 0;
    if (local_288.Path.ArrayNum != 0) {
      pFVar8 = FFieldPath::TryToResolvePath(&local_288,(UStruct *)0x0,UseStructIfOuterNotFound);
      if (pFVar8 != (FField *)0x0) {
        if ((pFVar7 == (FFieldClass *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar3 = pFVar8->ClassPrivate;
        if (pFVar7->Id == CASTCLASS_None) {
          for (; bVar4 = bVar5, pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
            if (pFVar3 == pFVar7) {
              bVar4 = true;
              break;
            }
          }
        }
        else {
          bVar4 = (pFVar3->CastFlags & pFVar7->Id) != CASTCLASS_None;
        }
        if (bVar4) goto LAB_1422fa432;
      }
      pFVar8 = local_288.ResolvedField;
      if (local_288.ResolvedField != (FField *)0x0) {
        local_288.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_288.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        local_288.ResolvedField = (FField *)0x0;
        pFVar8 = local_288.ResolvedField;
      }
      goto LAB_1422fa432;
    }
  }
  else {
LAB_1422fa432:
    local_288.ResolvedField = pFVar8;
    iVar9 = local_288.Path.ArrayNum;
  }
  FVar10.Data = local_288.Path.AllocatorInstance.Data;
  local_2b0.ResolvedField = local_288.ResolvedField;
  local_2b0.ResolvedOwner.WeakPtr = local_288.ResolvedOwner.WeakPtr;
  local_2b0.Path.ArrayNum = iVar9;
  if ((iVar9 == 0) && (local_2b0.Path.ArrayMax == 0)) {
    local_2b0.Path.ArrayNum = 0;
    local_2b0.Path.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar9,local_2b0.Path.ArrayMax,&local_2b0.Path.AllocatorInstance,iVar9,
               &local_2b0.Path.ArrayMax);
    if (iVar9 != 0) {
      memcpy(local_2b0.Path.AllocatorInstance.Data,FVar10.Data,(longlong)iVar9 << 3);
    }
  }
  bVar4 = TWeakObjectPtr<UStruct,FWeakObjectPtr>::UEOpEquals<UStruct,bool>
                    (&local_2b0.ResolvedOwner,&local_288.ResolvedOwner);
  if (bVar4) {
    if ((local_2b0.Path.ArrayNum != local_288.Path.ArrayNum) ||
       (bVar4 = CompareItems<FName,int>
                          ((FName *)local_2b0.Path.AllocatorInstance.Data,
                           (FName *)local_288.Path.AllocatorInstance.Data,local_2b0.Path.ArrayNum),
       !bVar4)) goto LAB_1422fa4d8;
  }
  else {
LAB_1422fa4d8:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_1a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_1a0);
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
  }
  bVar4 = TWeakObjectPtr<UStruct,FWeakObjectPtr>::UEOpEquals<UStruct,bool>
                    (&local_2b0.ResolvedOwner,&local_288.ResolvedOwner);
  if (bVar4) {
    if ((local_2b0.Path.ArrayNum != local_288.Path.ArrayNum) ||
       (bVar4 = CompareItems<FName,int>
                          ((FName *)local_2b0.Path.AllocatorInstance.Data,
                           (FName *)local_288.Path.AllocatorInstance.Data,local_2b0.Path.ArrayNum),
       !bVar4)) goto LAB_1422fa545;
  }
  else {
LAB_1422fa545:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_190,L"Condition failed");
    (*pcVar2)(pFVar1);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  if (((local_2b0.ResolvedField != (FField *)0x0) &&
      (bVar4 = FWeakObjectPtr::IsValid(&local_2b0.ResolvedOwner.WeakPtr),
      pFVar8 = local_2b0.ResolvedField, bVar4)) ||
     (pFVar8 = local_2b0.ResolvedField, local_2b0.Path.ArrayNum == 0)) {
LAB_1422fa641:
    local_2b0.ResolvedField = pFVar8;
    if (local_2b0.ResolvedField != (FField *)0x0) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_180,L"Condition failed");
      (*pcVar2)(pFVar1);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar8 = FFieldPath::TryToResolvePath(&local_2b0,(UStruct *)0x0,UseStructIfOuterNotFound);
    if (pFVar8 != (FField *)0x0) {
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = pFVar8->ClassPrivate;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; bVar4 = bVar5, pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
          if (pFVar3 == pFVar7) {
            bVar4 = true;
            break;
          }
        }
      }
      else {
        bVar4 = (pFVar3->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
      if (bVar4) goto LAB_1422fa641;
    }
    if (local_2b0.ResolvedField != (FField *)0x0) {
      local_2b0.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_2b0.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      local_2b0.ResolvedField = (FField *)0x0;
      pFVar8 = local_2b0.ResolvedField;
      goto LAB_1422fa641;
    }
  }
  pFVar7 = FProperty::StaticClass();
  if (((local_2b0.ResolvedField != (FField *)0x0) &&
      (bVar4 = FWeakObjectPtr::IsValid(&local_2b0.ResolvedOwner.WeakPtr),
      pFVar8 = local_2b0.ResolvedField, bVar4)) ||
     (pFVar8 = local_2b0.ResolvedField, local_2b0.Path.ArrayNum == 0)) {
LAB_1422fa73e:
    local_2b0.ResolvedField = pFVar8;
    if (local_2b0.ResolvedField != (FField *)0x0) {
      pFVar6 = FAutomationTestFramework::Get();
      pFVar1 = pFVar6->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_170,L"Condition failed");
      (*pcVar2)(pFVar1,&local_170);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pFVar8 = FFieldPath::TryToResolvePath(&local_2b0,(UStruct *)0x0,UseStructIfOuterNotFound);
    if (pFVar8 != (FField *)0x0) {
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3 = pFVar8->ClassPrivate;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; (bVar4 = bVar5, pFVar3 != (FFieldClass *)0x0 && (bVar4 = true, pFVar3 != pFVar7));
            pFVar3 = pFVar3->SuperClass) {
        }
      }
      else {
        bVar4 = (pFVar3->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
      if (bVar4) goto LAB_1422fa73e;
    }
    if (local_2b0.ResolvedField != (FField *)0x0) {
      local_2b0.ResolvedOwner.WeakPtr.ObjectIndex = 0;
      local_2b0.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
      local_2b0.ResolvedField = (FField *)0x0;
      pFVar8 = local_2b0.ResolvedField;
      goto LAB_1422fa73e;
    }
  }
  if ((FName *)local_288.Path.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_288.Path.AllocatorInstance.Data);
  }
  if ((FName *)local_2b0.Path.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_2b0.Path.AllocatorInstance.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_160,
                     L"Check that TWeakFieldPtr of different types can be compared in both directions"
                    );
  (*pcVar2)(pFVar1,&local_160,0,0);
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  local_1f0.ObjectIndex = 0;
  local_1f0.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_res20);
  local_1e8.ResolvedField = (FField *)0x0;
  local_1e8.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_1e8.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_1e8.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.Path.ArrayNum = 0;
  local_1e8.Path.ArrayMax = 0;
  FFieldPath::Generate(&local_1e8,(FField *)0x0);
  local_218.ObjectIndex = 0;
  local_218.ObjectSerialNumber = 0;
  local_1b8 = 0;
  FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_1b8);
  local_210.ResolvedField = (FField *)0x0;
  local_210.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_210.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_210.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Path.ArrayNum = 0;
  local_210.Path.ArrayMax = 0;
  FFieldPath::Generate(&local_210,(FField *)0x0);
  bVar5 = TWeakObjectPtr<UStruct,FWeakObjectPtr>::UEOpEquals<UStruct,bool>
                    (&local_1e8.ResolvedOwner,&local_210.ResolvedOwner);
  if (bVar5) {
    if ((local_1e8.Path.ArrayNum != local_210.Path.ArrayNum) ||
       (bVar5 = CompareItems<FName,int>
                          ((FName *)local_1e8.Path.AllocatorInstance.Data,
                           (FName *)local_210.Path.AllocatorInstance.Data,local_1e8.Path.ArrayNum),
       !bVar5)) goto LAB_1422fa883;
  }
  else {
LAB_1422fa883:
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_150,L"Condition failed");
    (*pcVar2)(pFVar1,&local_150);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  bVar5 = TWeakObjectPtr<UStruct,FWeakObjectPtr>::UEOpEquals<UStruct,bool>
                    (&local_210.ResolvedOwner,&local_1e8.ResolvedOwner);
  FVar10.Data = local_210.Path.AllocatorInstance.Data;
  if (bVar5) {
    if ((local_210.Path.ArrayNum == local_1e8.Path.ArrayNum) &&
       (bVar5 = CompareItems<FName,int>
                          ((FName *)local_210.Path.AllocatorInstance.Data,
                           (FName *)local_1e8.Path.AllocatorInstance.Data,local_210.Path.ArrayNum),
       bVar5)) goto LAB_1422fa942;
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::FString(&local_140,L"Condition failed");
  (*pcVar2)(pFVar1,&local_140);
  FVar10.Data = local_210.Path.AllocatorInstance.Data;
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
    FVar10.Data = local_210.Path.AllocatorInstance.Data;
  }
LAB_1422fa942:
  if ((FName *)FVar10.Data != (FName *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if ((FName *)local_1e8.Path.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_1e8.Path.AllocatorInstance.Data);
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_130,L"Check that TWeakFieldPtr can be compared against raw pointers");
  (*pcVar2)(pFVar1,&local_130,0,0);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  local_268.ObjectIndex = 0;
  local_268.ObjectSerialNumber = 0;
  local_1c8 = 0;
  FWeakObjectPtr::operator=(&local_268,(FObjectPtr)&local_1c8);
  local_260.ResolvedField = (FField *)0x0;
  local_260.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_260.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_260.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.Path.ArrayNum = 0;
  local_260.Path.ArrayMax = 0;
  FFieldPath::Generate(&local_260,(FField *)0x0);
  local_240.ObjectIndex = 0;
  local_240.ObjectSerialNumber = 0;
  local_1c0 = 0;
  FWeakObjectPtr::operator=(&local_240,(FObjectPtr)&local_1c0);
  local_238.ResolvedField = (FField *)0x0;
  local_238.ResolvedOwner.WeakPtr.ObjectIndex = 0;
  local_238.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
  local_238.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Path.ArrayNum = 0;
  local_238.Path.ArrayMax = 0;
  FFieldPath::Generate(&local_238,(FField *)0x0);
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_40,L"Condition failed");
    (*pcVar2)(pFVar1,&local_40);
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_50,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_50);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_60,L"Condition failed");
    (*pcVar2)(pFVar1,&local_60);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_70,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_70);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_80,L"Condition failed");
    (*pcVar2)(pFVar1,&local_80);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_30,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_30);
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_120,L"Condition failed");
    (*pcVar2)(pFVar1,&local_120);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_260,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_110,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_110);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_100,L"Condition failed");
    (*pcVar2)(pFVar1,&local_100);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_f0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_f0);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_e0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_e0);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_d0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_d0);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_c0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_c0);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_b0,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_b0);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a0,L"Condition failed");
    (*pcVar2)(pFVar1,&local_a0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  pFVar7 = FProperty::StaticClass();
  pFVar8 = FFieldPath::GetTyped(&local_238,pFVar7,(UStruct *)0x0);
  if (pFVar8 != (FField *)0x0) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_90,L"Condition expected to return false but returned true");
    (*pcVar2)(pFVar1,&local_90,0);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  if (local_238.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Path.AllocatorInstance.Data);
  }
  if (local_260.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Path.AllocatorInstance.Data);
  }
  return;
}

