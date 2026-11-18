// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// GetTestFlags @ 1422c5dc0

EAutomationTestFlags __thiscall
UE::FInstancedPropertiesTest::GetTestFlags(FInstancedPropertiesTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 1422c5dd0

bool __thiscall UE::FInstancedPropertiesTest::IsStressTest(FInstancedPropertiesTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 1422c5de0

uint __thiscall UE::FInstancedPropertiesTest::GetRequiredDeviceNum(FInstancedPropertiesTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 1422c5df0

FString * __thiscall
UE::FInstancedPropertiesTest::GetTestSourceFileName
          (FInstancedPropertiesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Tests\\UObject\\InstancedPropertiesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 1422c5e20

int __thiscall UE::FInstancedPropertiesTest::GetTestSourceFileLine(FInstancedPropertiesTest *this)

{
  return 0xe;
}

// GetTests @ 1422c5e30

/* WARNING: Removing unreachable block (ram,0x0001422c5fae) */

void __thiscall
UE::FInstancedPropertiesTest::GetTests
          (FInstancedPropertiesTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 1422c5fd0

bool __thiscall
UE::FInstancedPropertiesTest::RunTest(FInstancedPropertiesTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 1422c6000

FString * __thiscall
UE::FInstancedPropertiesTest::GetBeautifiedTestName
          (FInstancedPropertiesTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FInstancedPropertiesTest @ 1422cccf0

FInstancedPropertiesTest * __thiscall
UE::FInstancedPropertiesTest::FInstancedPropertiesTest
          (FInstancedPropertiesTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FInstancedPropertiesTest_UE__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[CoreUObject][EngineFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"CoreUObject::InstancedProperties");
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
  ::FString::FString(&local_18,"[CoreUObject][EngineFilter]");
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

// TestBody @ 1422e3f20

void __thiscall
UE::FInstancedPropertiesTest::TestBody(FInstancedPropertiesTest *this,FString *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FName FVar3;
  FAutomationTestFramework *pFVar4;
  FName *pFVar5;
  UClass *pUVar6;
  FProperty *pFVar7;
  FName local_res18;
  FName local_res20;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  FString local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  FString local_c08;
  FString local_bf8;
  FString local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  FString local_458;
  FString local_448;
  FString local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
  ::FString::FString(&local_bd8,L"Instanced object property");
  (*pcVar2)(pFVar1,&local_bd8,0,0);
  if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FName::FName(&local_res18,0xb,L"InnerObject",FNAME_Add);
  FVar3 = *pFVar5;
  pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
  pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
  if (pFVar7 == (FProperty *)0x0) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_bc8,L"Required condition failed, interrupting test");
    (*pcVar2)(pFVar1,&local_bc8,0);
    if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10 & 1) == 0) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_bb8,L"Condition failed");
      (*pcVar2)(pFVar1,&local_bb8,0);
      if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
      }
    }
    if ((pFVar7->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
        CPF_None) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_ba8,L"Condition failed");
      (*pcVar2)(pFVar1,&local_ba8,0);
      if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
      }
    }
    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) == 0) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_b98,L"Condition failed");
      (*pcVar2)(pFVar1,&local_b98,0);
      if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b98.Data.AllocatorInstance.Data);
      }
    }
    if ((pFVar7->PropertyFlags & CPF_PersistentInstance) == CPF_None) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_b88,L"Condition failed");
      (*pcVar2)(pFVar1,&local_b88,0);
      if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b88.Data.AllocatorInstance.Data);
      }
    }
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    ::FString::FString(&local_b78,L"Non-instanced object property");
    (*pcVar2)(pFVar1,&local_b78,0,0);
    if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b78.Data.AllocatorInstance.Data);
    }
    pFVar5 = ::FName::FName(&local_res20,0xe,L"ExternalObject",FNAME_Add);
    FVar3 = *pFVar5;
    pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
    pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
    if (pFVar7 == (FProperty *)0x0) {
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
      ::FString::FString(&local_b68,L"Required condition failed, interrupting test");
      (*pcVar2)(pFVar1,&local_b68,0);
      if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b68.Data.AllocatorInstance.Data);
      }
    }
    else {
      if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10 & 1) == 0) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_b58,L"Condition failed");
        (*pcVar2)(pFVar1,&local_b58,0);
        if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b58.Data.AllocatorInstance.Data);
        }
      }
      if ((pFVar7->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) !=
          CPF_None) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_ce8,L"Condition expected to return false but returned true");
        (*pcVar2)(pFVar1,&local_ce8,0);
        if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
        }
      }
      if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_b38,L"Condition expected to return false but returned true");
        (*pcVar2)(pFVar1,&local_b38,0);
        if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b38.Data.AllocatorInstance.Data);
        }
      }
      if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_b28,L"Condition expected to return false but returned true");
        (*pcVar2)(pFVar1,&local_b28,0);
        if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b28.Data.AllocatorInstance.Data);
        }
      }
      pFVar4 = FAutomationTestFramework::Get();
      pFVar1 = pFVar4->CurrentTest;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
      ::FString::FString(&local_b18,L"DefaultToInstanced object property");
      (*pcVar2)(pFVar1,&local_b18,0,0);
      if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b18.Data.AllocatorInstance.Data);
      }
      pFVar5 = ::FName::FName(local_48,0x13,L"InnerObjectFromType",FNAME_Add);
      FVar3 = *pFVar5;
      pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
      pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
      if (pFVar7 == (FProperty *)0x0) {
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
        ::FString::FString(&local_b08,L"Required condition failed, interrupting test");
        (*pcVar2)(pFVar1,&local_b08,0);
        if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b08.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10 & 1) == 0) {
          pFVar4 = FAutomationTestFramework::Get();
          pFVar1 = pFVar4->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_af8,L"Condition failed");
          (*pcVar2)(pFVar1,&local_af8,0);
          if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_af8.Data.AllocatorInstance.Data);
          }
        }
        if ((pFVar7->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
            CPF_None) {
          pFVar4 = FAutomationTestFramework::Get();
          pFVar1 = pFVar4->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_ae8,L"Condition failed");
          (*pcVar2)(pFVar1,&local_ae8,0);
          if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
          }
        }
        if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) == 0) {
          pFVar4 = FAutomationTestFramework::Get();
          pFVar1 = pFVar4->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_ad8,L"Condition failed");
          (*pcVar2)(pFVar1,&local_ad8,0);
          if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
          }
        }
        if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None) {
          pFVar4 = FAutomationTestFramework::Get();
          pFVar1 = pFVar4->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_ac8,L"Condition expected to return false but returned true");
          (*pcVar2)(pFVar1,&local_ac8,0);
          if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
          }
        }
        pFVar4 = FAutomationTestFramework::Get();
        pFVar1 = pFVar4->CurrentTest;
        pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
        ::FString::FString(&local_ab8,L"Transient instanced object property");
        (*pcVar2)(pFVar1,&local_ab8,0,0);
        if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
        }
        pFVar5 = ::FName::FName(&local_c8,0x14,L"TransientInnerObject",FNAME_Add);
        FVar3 = *pFVar5;
        pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
        pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
        if (pFVar7 == (FProperty *)0x0) {
          pFVar4 = FAutomationTestFramework::Get();
          pFVar1 = pFVar4->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
          ::FString::FString(&local_aa8,L"Required condition failed, interrupting test");
          (*pcVar2)(pFVar1,&local_aa8,0);
          if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
          }
        }
        else {
          if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10 & 1) == 0) {
            pFVar4 = FAutomationTestFramework::Get();
            pFVar1 = pFVar4->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_a98,L"Condition failed");
            (*pcVar2)(pFVar1,&local_a98,0);
            if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a98.Data.AllocatorInstance.Data);
            }
          }
          if ((pFVar7->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
              CPF_None) {
            pFVar4 = FAutomationTestFramework::Get();
            pFVar1 = pFVar4->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_a88,L"Condition failed");
            (*pcVar2)(pFVar1,&local_a88,0);
            if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a88.Data.AllocatorInstance.Data);
            }
          }
          if (((uint)(int)pFVar7->PropertyFlags >> 0xd & 1) == 0) {
            pFVar4 = FAutomationTestFramework::Get();
            pFVar1 = pFVar4->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_a78,L"Condition failed");
            (*pcVar2)(pFVar1,&local_a78,0);
            if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a78.Data.AllocatorInstance.Data);
            }
          }
          if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) == 0) {
            pFVar4 = FAutomationTestFramework::Get();
            pFVar1 = pFVar4->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_a68,L"Condition failed");
            (*pcVar2)(pFVar1,&local_a68,0);
            if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a68.Data.AllocatorInstance.Data);
            }
          }
          if ((pFVar7->PropertyFlags & CPF_PersistentInstance) == CPF_None) {
            pFVar4 = FAutomationTestFramework::Get();
            pFVar1 = pFVar4->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_a58,L"Condition failed");
            (*pcVar2)(pFVar1,&local_a58,0);
            if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a58.Data.AllocatorInstance.Data);
            }
          }
          pFVar4 = FAutomationTestFramework::Get();
          pFVar1 = pFVar4->CurrentTest;
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
          ::FString::FString(&local_a48,L"Instanced object array property");
          (*pcVar2)(pFVar1,&local_a48,0,0);
          if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a48.Data.AllocatorInstance.Data);
          }
          pFVar5 = ::FName::FName(&local_c0,0x10,L"InnerObjectArray",FNAME_Add);
          FVar3 = *pFVar5;
          pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
          pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
          if ((pFVar7 == (FProperty *)0x0) ||
             ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
            pFVar4 = FAutomationTestFramework::Get();
            pFVar1 = pFVar4->CurrentTest;
            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
            ::FString::FString(&local_9a8,L"Required condition failed, interrupting test");
            (*pcVar2)(pFVar1,&local_9a8,0);
            if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
            }
          }
          else {
            if ((pFVar7->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
                CPF_None) {
              pFVar4 = FAutomationTestFramework::Get();
              pFVar1 = pFVar4->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_a38,L"Condition failed");
              (*pcVar2)(pFVar1,&local_a38,0);
              if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a38.Data.AllocatorInstance.Data);
              }
            }
            if ((pFVar7->PropertyFlags & CPF_ContainsInstancedReference) == CPF_None) {
              pFVar4 = FAutomationTestFramework::Get();
              pFVar1 = pFVar4->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_a28,L"Condition failed");
              (*pcVar2)(pFVar1,&local_a28,0);
              if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a28.Data.AllocatorInstance.Data);
              }
            }
            if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
              pFVar4 = FAutomationTestFramework::Get();
              pFVar1 = pFVar4->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_a18,L"Condition expected to return false but returned true")
              ;
              (*pcVar2)(pFVar1,&local_a18,0);
              if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a18.Data.AllocatorInstance.Data);
              }
            }
            if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None) {
              pFVar4 = FAutomationTestFramework::Get();
              pFVar1 = pFVar4->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_a08,L"Condition expected to return false but returned true")
              ;
              (*pcVar2)(pFVar1,&local_a08,0);
              if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a08.Data.AllocatorInstance.Data);
              }
            }
            if (pFVar7[1]._padding_ == 0) {
              pFVar4 = FAutomationTestFramework::Get();
              pFVar1 = pFVar4->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
              ::FString::FString(&local_9f8,L"Required condition failed, interrupting test");
              (*pcVar2)(pFVar1,&local_9f8,0);
              if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
              }
            }
            else {
              if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >> 0x10 & 1) == 0) {
                pFVar4 = FAutomationTestFramework::Get();
                pFVar1 = pFVar4->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_9e8,L"Condition failed");
                (*pcVar2)(pFVar1,&local_9e8,0);
                if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
                }
              }
              if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000) == 0) {
                pFVar4 = FAutomationTestFramework::Get();
                pFVar1 = pFVar4->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_9d8,L"Condition failed");
                (*pcVar2)(pFVar1,&local_9d8,0);
                if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
                }
              }
              if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000) != 0) {
                pFVar4 = FAutomationTestFramework::Get();
                pFVar1 = pFVar4->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_9c8,
                                   L"Condition expected to return false but returned true");
                (*pcVar2)(pFVar1,&local_9c8,0);
                if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
                }
              }
              if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0) {
                pFVar4 = FAutomationTestFramework::Get();
                pFVar1 = pFVar4->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_9b8,L"Condition failed");
                (*pcVar2)(pFVar1,&local_9b8,0);
                if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
                }
              }
              if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x2000000000000) == 0) {
                pFVar4 = FAutomationTestFramework::Get();
                pFVar1 = pFVar4->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_b48,L"Condition failed");
                (*pcVar2)(pFVar1,&local_b48,0);
                if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b48.Data.AllocatorInstance.Data);
                }
              }
              pFVar4 = FAutomationTestFramework::Get();
              pFVar1 = pFVar4->CurrentTest;
              pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
              ::FString::FString(&local_998,L"DefaultToInstanced object array property");
              (*pcVar2)(pFVar1,&local_998,0,0);
              if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_998.Data.AllocatorInstance.Data);
              }
              pFVar5 = ::FName::FName(&local_b8,0x18,L"InnerObjectFromTypeArray",FNAME_Add);
              FVar3 = *pFVar5;
              pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
              pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
              if ((pFVar7 == (FProperty *)0x0) ||
                 ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
                pFVar4 = FAutomationTestFramework::Get();
                pFVar1 = pFVar4->CurrentTest;
                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                ::FString::FString(&local_be8,L"Required condition failed, interrupting test");
                (*pcVar2)(pFVar1,&local_be8,0);
                if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_be8.Data.AllocatorInstance.Data);
                }
              }
              else {
                if ((pFVar7->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)
                    ) == CPF_None) {
                  pFVar4 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar4->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_988,L"Condition failed");
                  (*pcVar2)(pFVar1,&local_988,0);
                  if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_988.Data.AllocatorInstance.Data);
                  }
                }
                if ((pFVar7->PropertyFlags & CPF_ContainsInstancedReference) == CPF_None) {
                  pFVar4 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar4->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_978,L"Condition failed");
                  (*pcVar2)(pFVar1,&local_978,0);
                  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_978.Data.AllocatorInstance.Data);
                  }
                }
                if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
                  pFVar4 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar4->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_968,
                                     L"Condition expected to return false but returned true");
                  (*pcVar2)(pFVar1,&local_968,0);
                  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_968.Data.AllocatorInstance.Data);
                  }
                }
                if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None) {
                  pFVar4 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar4->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_958,
                                     L"Condition expected to return false but returned true");
                  (*pcVar2)(pFVar1,&local_958,0);
                  if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_958.Data.AllocatorInstance.Data);
                  }
                }
                if (pFVar7[1]._padding_ == 0) {
                  pFVar4 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar4->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                  ::FString::FString(&local_948,L"Required condition failed, interrupting test");
                  (*pcVar2)(pFVar1,&local_948,0);
                  if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_948.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >> 0x10 & 1) == 0) {
                    pFVar4 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar4->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_938,L"Condition failed");
                    (*pcVar2)(pFVar1,&local_938,0);
                    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_938.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000) == 0) {
                    pFVar4 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar4->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_928,L"Condition failed");
                    (*pcVar2)(pFVar1,&local_928,0);
                    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_928.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000) != 0) {
                    pFVar4 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar4->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_918,
                                       L"Condition expected to return false but returned true");
                    (*pcVar2)(pFVar1,&local_918,0);
                    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_918.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0) {
                    pFVar4 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar4->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_908,L"Condition failed");
                    (*pcVar2)(pFVar1,&local_908,0);
                    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_908.Data.AllocatorInstance.Data);
                    }
                  }
                  if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x2000000000000) != 0) {
                    pFVar4 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar4->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_8f8,
                                       L"Condition expected to return false but returned true");
                    (*pcVar2)(pFVar1,&local_8f8,0);
                    if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
                    }
                  }
                  pFVar4 = FAutomationTestFramework::Get();
                  pFVar1 = pFVar4->CurrentTest;
                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                  ::FString::FString(&local_8e8,L"Instanced object set container property");
                  (*pcVar2)(pFVar1,&local_8e8,0,0);
                  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
                  }
                  pFVar5 = ::FName::FName(&local_b0,0xe,L"InnerObjectSet",FNAME_Add);
                  FVar3 = *pFVar5;
                  pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
                  pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
                  if ((pFVar7 == (FProperty *)0x0) ||
                     ((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x800000000000) == 0)) {
                    pFVar4 = FAutomationTestFramework::Get();
                    pFVar1 = pFVar4->CurrentTest;
                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                    ::FString::FString(&local_bf8,L"Required condition failed, interrupting test");
                    (*pcVar2)(pFVar1,&local_bf8,0);
                    local_898.Data.AllocatorInstance.Data = local_bf8.Data.AllocatorInstance.Data;
                  }
                  else {
                    if ((pFVar7->PropertyFlags &
                        (CPF_ContainsInstancedReference|CPF_InstancedReference)) == CPF_None) {
                      pFVar4 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar4->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_8d8,L"Condition failed");
                      (*pcVar2)(pFVar1,&local_8d8,0);
                      if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
                      }
                    }
                    if ((pFVar7->PropertyFlags & CPF_ContainsInstancedReference) == CPF_None) {
                      pFVar4 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar4->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_8c8,L"Condition failed");
                      (*pcVar2)(pFVar1,&local_8c8,0);
                      if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
                      }
                    }
                    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
                      pFVar4 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar4->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_8b8,
                                         L"Condition expected to return false but returned true");
                      (*pcVar2)(pFVar1,&local_8b8,0);
                      if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
                      }
                    }
                    if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None) {
                      pFVar4 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar4->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_8a8,
                                         L"Condition expected to return false but returned true");
                      (*pcVar2)(pFVar1,&local_8a8,0);
                      if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
                      }
                    }
                    if (pFVar7[1]._padding_ == 0) {
                      pFVar4 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar4->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                      ::FString::FString(&local_898,L"Required condition failed, interrupting test")
                      ;
                      (*pcVar2)(pFVar1,&local_898,0);
                    }
                    else {
                      if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >> 0x10 & 1) ==
                          0) {
                        pFVar4 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar4->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_888,L"Condition failed");
                        (*pcVar2)(pFVar1,&local_888,0);
                        if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_888.Data.AllocatorInstance.Data);
                        }
                      }
                      if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000) == 0) {
                        pFVar4 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar4->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_878,L"Condition failed");
                        (*pcVar2)(pFVar1,&local_878,0);
                        if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_878.Data.AllocatorInstance.Data);
                        }
                      }
                      if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000) != 0) {
                        pFVar4 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar4->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_868,
                                           L"Condition expected to return false but returned true");
                        (*pcVar2)(pFVar1,&local_868,0);
                        if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_868.Data.AllocatorInstance.Data);
                        }
                      }
                      if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0) {
                        pFVar4 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar4->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_858,L"Condition failed");
                        (*pcVar2)(pFVar1,&local_858,0);
                        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_858.Data.AllocatorInstance.Data);
                        }
                      }
                      if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x2000000000000) == 0) {
                        pFVar4 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar4->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_848,L"Condition failed");
                        (*pcVar2)(pFVar1,&local_848,0);
                        if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_848.Data.AllocatorInstance.Data);
                        }
                      }
                      pFVar4 = FAutomationTestFramework::Get();
                      pFVar1 = pFVar4->CurrentTest;
                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                      ::FString::FString(&local_838,
                                         L"DefaultToInstanced object set container property");
                      (*pcVar2)(pFVar1,&local_838,0,0);
                      if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_838.Data.AllocatorInstance.Data);
                      }
                      pFVar5 = ::FName::FName(&local_a8,0x16,L"InnerObjectFromTypeSet",FNAME_Add);
                      FVar3 = *pFVar5;
                      pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
                      pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
                      if ((pFVar7 == (FProperty *)0x0) ||
                         ((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x800000000000) == 0)) {
                        pFVar4 = FAutomationTestFramework::Get();
                        pFVar1 = pFVar4->CurrentTest;
                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                        ::FString::FString(&local_c08,
                                           L"Required condition failed, interrupting test");
                        (*pcVar2)(pFVar1,&local_c08,0);
                        local_898.Data.AllocatorInstance.Data =
                             local_c08.Data.AllocatorInstance.Data;
                      }
                      else {
                        if ((pFVar7->PropertyFlags &
                            (CPF_ContainsInstancedReference|CPF_InstancedReference)) == CPF_None) {
                          pFVar4 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar4->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_828,L"Condition failed");
                          (*pcVar2)(pFVar1,&local_828,0);
                          if (local_828.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_828.Data.AllocatorInstance.Data);
                          }
                        }
                        if ((pFVar7->PropertyFlags & CPF_ContainsInstancedReference) == CPF_None) {
                          pFVar4 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar4->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_818,L"Condition failed");
                          (*pcVar2)(pFVar1,&local_818,0);
                          if (local_818.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_818.Data.AllocatorInstance.Data);
                          }
                        }
                        if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
                          pFVar4 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar4->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_808,
                                             L"Condition expected to return false but returned true"
                                            );
                          (*pcVar2)(pFVar1,&local_808,0);
                          if (local_808.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_808.Data.AllocatorInstance.Data);
                          }
                        }
                        if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None) {
                          pFVar4 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar4->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_7f8,
                                             L"Condition expected to return false but returned true"
                                            );
                          (*pcVar2)(pFVar1,&local_7f8,0);
                          if (local_7f8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
                          }
                        }
                        if (pFVar7[1]._padding_ == 0) {
                          pFVar4 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar4->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                          ::FString::FString(&local_7e8,
                                             L"Required condition failed, interrupting test");
                          (*pcVar2)(pFVar1,&local_7e8,0);
                          local_898.Data.AllocatorInstance.Data =
                               local_7e8.Data.AllocatorInstance.Data;
                        }
                        else {
                          if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >> 0x10 & 1)
                              == 0) {
                            pFVar4 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar4->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_7d8,L"Condition failed");
                            (*pcVar2)(pFVar1,&local_7d8,0);
                            if (local_7d8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
                            }
                          }
                          if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000) == 0) {
                            pFVar4 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar4->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_7c8,L"Condition failed");
                            (*pcVar2)(pFVar1,&local_7c8,0);
                            if (local_7c8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
                            }
                          }
                          if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000) != 0) {
                            pFVar4 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar4->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_7b8,
                                               L"Condition expected to return false but returned true"
                                              );
                            (*pcVar2)(pFVar1,&local_7b8,0);
                            if (local_7b8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
                            }
                          }
                          if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0) {
                            pFVar4 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar4->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_7a8,L"Condition failed");
                            (*pcVar2)(pFVar1,&local_7a8,0);
                            if (local_7a8.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
                            }
                          }
                          if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x2000000000000) != 0) {
                            pFVar4 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar4->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_798,
                                               L"Condition expected to return false but returned true"
                                              );
                            (*pcVar2)(pFVar1,&local_798,0);
                            if (local_798.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_798.Data.AllocatorInstance.Data);
                            }
                          }
                          pFVar4 = FAutomationTestFramework::Get();
                          pFVar1 = pFVar4->CurrentTest;
                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                          ::FString::FString(&local_788,L"Instanced object map container property");
                          (*pcVar2)(pFVar1,&local_788,0,0);
                          if (local_788.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_788.Data.AllocatorInstance.Data);
                          }
                          pFVar5 = ::FName::FName(&local_a0,0xe,L"InnerObjectMap",FNAME_Add);
                          FVar3 = *pFVar5;
                          pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
                          pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
                          if ((pFVar7 == (FProperty *)0x0) ||
                             ((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x400000000000) == 0)) {
                            pFVar4 = FAutomationTestFramework::Get();
                            pFVar1 = pFVar4->CurrentTest;
                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                            ::FString::FString(&local_c18,
                                               L"Required condition failed, interrupting test");
                            (*pcVar2)(pFVar1,&local_c18,0);
                            local_898.Data.AllocatorInstance.Data =
                                 local_c18.Data.AllocatorInstance.Data;
                          }
                          else {
                            if ((pFVar7->PropertyFlags &
                                (CPF_ContainsInstancedReference|CPF_InstancedReference)) == CPF_None
                               ) {
                              pFVar4 = FAutomationTestFramework::Get();
                              pFVar1 = pFVar4->CurrentTest;
                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                              ::FString::FString(&local_778,L"Condition failed");
                              (*pcVar2)(pFVar1,&local_778,0);
                              if (local_778.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_778.Data.AllocatorInstance.Data);
                              }
                            }
                            if ((pFVar7->PropertyFlags & CPF_ContainsInstancedReference) == CPF_None
                               ) {
                              pFVar4 = FAutomationTestFramework::Get();
                              pFVar1 = pFVar4->CurrentTest;
                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                              ::FString::FString(&local_768,L"Condition failed");
                              (*pcVar2)(pFVar1,&local_768,0);
                              if (local_768.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_768.Data.AllocatorInstance.Data);
                              }
                            }
                            if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
                              pFVar4 = FAutomationTestFramework::Get();
                              pFVar1 = pFVar4->CurrentTest;
                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                              ::FString::FString(&local_758,
                                                 L"Condition expected to return false but returned true"
                                                );
                              (*pcVar2)(pFVar1,&local_758,0);
                              if (local_758.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_758.Data.AllocatorInstance.Data);
                              }
                            }
                            if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None) {
                              pFVar4 = FAutomationTestFramework::Get();
                              pFVar1 = pFVar4->CurrentTest;
                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                              ::FString::FString(&local_748,
                                                 L"Condition expected to return false but returned true"
                                                );
                              (*pcVar2)(pFVar1,&local_748,0);
                              if (local_748.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_748.Data.AllocatorInstance.Data);
                              }
                            }
                            if (pFVar7[1]._padding_ == 0) {
                              pFVar4 = FAutomationTestFramework::Get();
                              pFVar1 = pFVar4->CurrentTest;
                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                              ::FString::FString(&local_738,
                                                 L"Required condition failed, interrupting test");
                              (*pcVar2)(pFVar1,&local_738,0);
                              local_898.Data.AllocatorInstance.Data =
                                   local_738.Data.AllocatorInstance.Data;
                            }
                            else {
                              if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >> 0x10
                                  & 1) == 0) {
                                pFVar4 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar4->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_728,L"Condition failed");
                                (*pcVar2)(pFVar1,&local_728,0);
                                if (local_728.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_728.Data.AllocatorInstance.Data);
                                }
                              }
                              if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000) == 0)
                              {
                                pFVar4 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar4->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_718,L"Condition failed");
                                (*pcVar2)(pFVar1,&local_718,0);
                                if (local_718.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_718.Data.AllocatorInstance.Data);
                                }
                              }
                              if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000) != 0)
                              {
                                pFVar4 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar4->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_708,
                                                                                                      
                                                  L"Condition expected to return false but returned true"
                                                  );
                                (*pcVar2)(pFVar1,&local_708,0);
                                if (local_708.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_708.Data.AllocatorInstance.Data);
                                }
                              }
                              if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0) {
                                pFVar4 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar4->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_6f8,L"Condition failed");
                                (*pcVar2)(pFVar1,&local_6f8,0);
                                if (local_6f8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
                                }
                              }
                              if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x2000000000000) ==
                                  0) {
                                pFVar4 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar4->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_6e8,L"Condition failed");
                                (*pcVar2)(pFVar1,&local_6e8,0);
                                if (local_6e8.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
                                }
                              }
                              if (pFVar7[1]._padding_ == 0) {
                                pFVar4 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar4->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                ::FString::FString(&local_6d8,
                                                   L"Required condition failed, interrupting test");
                                (*pcVar2)(pFVar1,&local_6d8,0);
                                local_898.Data.AllocatorInstance.Data =
                                     local_6d8.Data.AllocatorInstance.Data;
                              }
                              else {
                                if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >>
                                     0x10 & 1) == 0) {
                                  pFVar4 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar4->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_6c8,L"Condition failed");
                                  (*pcVar2)(pFVar1,&local_6c8,0);
                                  if (local_6c8.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
                                  }
                                }
                                if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000) == 0
                                   ) {
                                  pFVar4 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar4->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_6b8,L"Condition failed");
                                  (*pcVar2)(pFVar1,&local_6b8,0);
                                  if (local_6b8.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                                  }
                                }
                                if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000) != 0
                                   ) {
                                  pFVar4 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar4->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_6a8,
                                                                                                          
                                                  L"Condition expected to return false but returned true"
                                                  );
                                  (*pcVar2)(pFVar1,&local_6a8,0);
                                  if (local_6a8.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
                                  }
                                }
                                if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0) {
                                  pFVar4 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar4->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_698,L"Condition failed");
                                  (*pcVar2)(pFVar1,&local_698,0);
                                  if (local_698.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_698.Data.AllocatorInstance.Data);
                                  }
                                }
                                if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x2000000000000)
                                    == 0) {
                                  pFVar4 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar4->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_688,L"Condition failed");
                                  (*pcVar2)(pFVar1,&local_688,0);
                                  if (local_688.Data.AllocatorInstance.Data !=
                                      (FScriptContainerElement *)0x0) {
                                    FMemory::Free(local_688.Data.AllocatorInstance.Data);
                                  }
                                }
                                pFVar4 = FAutomationTestFramework::Get();
                                pFVar1 = pFVar4->CurrentTest;
                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                                ::FString::FString(&local_678,
                                                                                                      
                                                  L"DefaultToInstanced object map container property"
                                                  );
                                (*pcVar2)(pFVar1,&local_678,0,0);
                                if (local_678.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_678.Data.AllocatorInstance.Data);
                                }
                                pFVar5 = ::FName::FName(&local_98,0x16,L"InnerObjectFromTypeMap",
                                                        FNAME_Add);
                                FVar3 = *pFVar5;
                                pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
                                pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
                                if ((pFVar7 == (FProperty *)0x0) ||
                                   ((*(ulonglong *)(pFVar7->_padding_ + 0x18) & 0x400000000000) == 0
                                   )) {
                                  pFVar4 = FAutomationTestFramework::Get();
                                  pFVar1 = pFVar4->CurrentTest;
                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                  ::FString::FString(&local_c28,
                                                     L"Required condition failed, interrupting test"
                                                    );
                                  (*pcVar2)(pFVar1,&local_c28,0);
                                  local_898.Data.AllocatorInstance.Data =
                                       local_c28.Data.AllocatorInstance.Data;
                                }
                                else {
                                  if ((pFVar7->PropertyFlags &
                                      (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
                                      CPF_None) {
                                    pFVar4 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar4->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_668,L"Condition failed");
                                    (*pcVar2)(pFVar1,&local_668,0);
                                    if (local_668.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_668.Data.AllocatorInstance.Data);
                                    }
                                  }
                                  if ((pFVar7->PropertyFlags & CPF_ContainsInstancedReference) ==
                                      CPF_None) {
                                    pFVar4 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar4->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_658,L"Condition failed");
                                    (*pcVar2)(pFVar1,&local_658,0);
                                    if (local_658.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_658.Data.AllocatorInstance.Data);
                                    }
                                  }
                                  if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
                                    pFVar4 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar4->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_648,
                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                    (*pcVar2)(pFVar1,&local_648,0);
                                    if (local_648.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_648.Data.AllocatorInstance.Data);
                                    }
                                  }
                                  if ((pFVar7->PropertyFlags & CPF_PersistentInstance) != CPF_None)
                                  {
                                    pFVar4 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar4->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_638,
                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                    (*pcVar2)(pFVar1,&local_638,0);
                                    if (local_638.Data.AllocatorInstance.Data !=
                                        (FScriptContainerElement *)0x0) {
                                      FMemory::Free(local_638.Data.AllocatorInstance.Data);
                                    }
                                  }
                                  if (pFVar7[1]._padding_ == 0) {
                                    pFVar4 = FAutomationTestFramework::Get();
                                    pFVar1 = pFVar4->CurrentTest;
                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                    ::FString::FString(&local_628,
                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                    (*pcVar2)(pFVar1,&local_628,0);
                                    local_898.Data.AllocatorInstance.Data =
                                         local_628.Data.AllocatorInstance.Data;
                                  }
                                  else {
                                    if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >>
                                         0x10 & 1) == 0) {
                                      pFVar4 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar4->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_618,L"Condition failed");
                                      (*pcVar2)(pFVar1,&local_618,0);
                                      if (local_618.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_618.Data.AllocatorInstance.Data);
                                      }
                                    }
                                    if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000)
                                        == 0) {
                                      pFVar4 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar4->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_608,L"Condition failed");
                                      (*pcVar2)(pFVar1,&local_608,0);
                                      if (local_608.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_608.Data.AllocatorInstance.Data);
                                      }
                                    }
                                    if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000)
                                        != 0) {
                                      pFVar4 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar4->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_5f8,
                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                      (*pcVar2)(pFVar1,&local_5f8,0);
                                      if (local_5f8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
                                      }
                                    }
                                    if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0) {
                                      pFVar4 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar4->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_5e8,L"Condition failed");
                                      (*pcVar2)(pFVar1,&local_5e8,0);
                                      if (local_5e8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
                                      }
                                    }
                                    if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) &
                                        0x2000000000000) != 0) {
                                      pFVar4 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar4->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_5d8,
                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                      (*pcVar2)(pFVar1,&local_5d8,0);
                                      if (local_5d8.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
                                      }
                                    }
                                    if (pFVar7[1]._padding_ == 0) {
                                      pFVar4 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar4->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                      ::FString::FString(&local_5c8,
                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                      (*pcVar2)(pFVar1,&local_5c8,0);
                                      local_898.Data.AllocatorInstance.Data =
                                           local_5c8.Data.AllocatorInstance.Data;
                                    }
                                    else {
                                      if ((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18)
                                           >> 0x10 & 1) == 0) {
                                        pFVar4 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar4->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_5b8,L"Condition failed");
                                        (*pcVar2)(pFVar1,&local_5b8,0);
                                        if (local_5b8.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
                                        }
                                      }
                                      if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000080000
                                          ) == 0) {
                                        pFVar4 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar4->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_5a8,L"Condition failed");
                                        (*pcVar2)(pFVar1,&local_5a8,0);
                                        if (local_5a8.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
                                        }
                                      }
                                      if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) & 0x8000000000
                                          ) != 0) {
                                        pFVar4 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar4->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_598,
                                                                                                                      
                                                  L"Condition expected to return false but returned true"
                                                  );
                                        (*pcVar2)(pFVar1,&local_598,0);
                                        if (local_598.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_598.Data.AllocatorInstance.Data);
                                        }
                                      }
                                      if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13 & 1) == 0)
                                      {
                                        pFVar4 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar4->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_588,L"Condition failed");
                                        (*pcVar2)(pFVar1,&local_588,0);
                                        if (local_588.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_588.Data.AllocatorInstance.Data);
                                        }
                                      }
                                      if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) &
                                          0x2000000000000) != 0) {
                                        pFVar4 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar4->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_578,
                                                                                                                      
                                                  L"Condition expected to return false but returned true"
                                                  );
                                        (*pcVar2)(pFVar1,&local_578,0);
                                        if (local_578.Data.AllocatorInstance.Data !=
                                            (FScriptContainerElement *)0x0) {
                                          FMemory::Free(local_578.Data.AllocatorInstance.Data);
                                        }
                                      }
                                      pFVar4 = FAutomationTestFramework::Get();
                                      pFVar1 = pFVar4->CurrentTest;
                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                                      ::FString::FString(&local_568,
                                                         L"Struct with instanced object property");
                                      (*pcVar2)(pFVar1,&local_568,0,0);
                                      if (local_568.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_568.Data.AllocatorInstance.Data);
                                      }
                                      pFVar5 = ::FName::FName(&local_90,0x16,
                                                              L"StructWithInnerObjects",FNAME_Add);
                                      FVar3 = *pFVar5;
                                      pUVar6 = USubobjectInstancingTestOuterObject::StaticClass();
                                      pFVar7 = UStruct::FindPropertyByName((UStruct *)pUVar6,FVar3);
                                      if ((pFVar7 == (FProperty *)0x0) ||
                                         ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
                                        pFVar4 = FAutomationTestFramework::Get();
                                        pFVar1 = pFVar4->CurrentTest;
                                        pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                        ::FString::FString(&local_c38,
                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                        (*pcVar2)(pFVar1,&local_c38,0);
                                        local_898.Data.AllocatorInstance.Data =
                                             local_c38.Data.AllocatorInstance.Data;
                                      }
                                      else {
                                        if ((pFVar7->PropertyFlags &
                                            (CPF_ContainsInstancedReference|CPF_InstancedReference))
                                            == CPF_None) {
                                          pFVar4 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar4->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_558,L"Condition failed");
                                          (*pcVar2)(pFVar1,&local_558,0);
                                          if (local_558.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_558.Data.AllocatorInstance.Data);
                                          }
                                        }
                                        if ((pFVar7->PropertyFlags & CPF_ContainsInstancedReference)
                                            == CPF_None) {
                                          pFVar4 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar4->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_548,L"Condition failed");
                                          (*pcVar2)(pFVar1,&local_548,0);
                                          if (local_548.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_548.Data.AllocatorInstance.Data);
                                          }
                                        }
                                        if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) != 0) {
                                          pFVar4 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar4->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_538,
                                                                                                                          
                                                  L"Condition expected to return false but returned true"
                                                  );
                                          (*pcVar2)(pFVar1,&local_538,0);
                                          if (local_538.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_538.Data.AllocatorInstance.Data);
                                          }
                                        }
                                        if ((pFVar7->PropertyFlags & CPF_PersistentInstance) !=
                                            CPF_None) {
                                          pFVar4 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar4->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_528,
                                                                                                                          
                                                  L"Condition expected to return false but returned true"
                                                  );
                                          (*pcVar2)(pFVar1,&local_528,0);
                                          if (local_528.Data.AllocatorInstance.Data !=
                                              (FScriptContainerElement *)0x0) {
                                            FMemory::Free(local_528.Data.AllocatorInstance.Data);
                                          }
                                        }
                                        if (pFVar7[1]._padding_ == 0) {
                                          pFVar4 = FAutomationTestFramework::Get();
                                          pFVar1 = pFVar4->CurrentTest;
                                          pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                          ::FString::FString(&local_518,
                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                          (*pcVar2)(pFVar1,&local_518,0);
                                          local_898.Data.AllocatorInstance.Data =
                                               local_518.Data.AllocatorInstance.Data;
                                        }
                                        else {
                                          pFVar5 = ::FName::FName(&local_88,0xb,L"InnerObject",
                                                                  FNAME_Add);
                                          pFVar7 = UStruct::FindPropertyByName
                                                             ((UStruct *)pFVar7[1]._padding_,*pFVar5
                                                             );
                                          if (pFVar7 == (FProperty *)0x0) {
                                            pFVar4 = FAutomationTestFramework::Get();
                                            pFVar1 = pFVar4->CurrentTest;
                                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                            ::FString::FString(&local_508,
                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                            (*pcVar2)(pFVar1,&local_508,0);
                                            local_898.Data.AllocatorInstance.Data =
                                                 local_508.Data.AllocatorInstance.Data;
                                          }
                                          else {
                                            if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10 & 1) ==
                                                0) {
                                              pFVar4 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar4->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_4f8,L"Condition failed");
                                              (*pcVar2)(pFVar1,&local_4f8,0);
                                              if (local_4f8.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_4f8.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                            }
                                            if ((pFVar7->PropertyFlags &
                                                (CPF_ContainsInstancedReference|
                                                CPF_InstancedReference)) == CPF_None) {
                                              pFVar4 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar4->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_4e8,L"Condition failed");
                                              (*pcVar2)(pFVar1,&local_4e8,0);
                                              if (local_4e8.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_4e8.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                            }
                                            if ((pFVar7->PropertyFlags &
                                                CPF_ContainsInstancedReference) != CPF_None) {
                                              pFVar4 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar4->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_4d8,
                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                              (*pcVar2)(pFVar1,&local_4d8,0);
                                              if (local_4d8.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_4d8.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                            }
                                            if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) == 0)
                                            {
                                              pFVar4 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar4->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_4c8,L"Condition failed");
                                              (*pcVar2)(pFVar1,&local_4c8,0);
                                              if (local_4c8.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_4c8.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                            }
                                            if ((pFVar7->PropertyFlags & CPF_PersistentInstance) ==
                                                CPF_None) {
                                              pFVar4 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar4->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_4b8,L"Condition failed");
                                              (*pcVar2)(pFVar1,&local_4b8,0);
                                              if (local_4b8.Data.AllocatorInstance.Data !=
                                                  (FScriptContainerElement *)0x0) {
                                                FMemory::Free(local_4b8.Data.AllocatorInstance.Data)
                                                ;
                                              }
                                            }
                                            pFVar4 = FAutomationTestFramework::Get();
                                            pFVar1 = pFVar4->CurrentTest;
                                            pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                                            ::FString::FString(&local_4a8,
                                                                                                                              
                                                  L"Struct with DefaultToInstanced object property")
                                            ;
                                            (*pcVar2)(pFVar1,&local_4a8,0,0);
                                            if (local_4a8.Data.AllocatorInstance.Data !=
                                                (FScriptContainerElement *)0x0) {
                                              FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
                                            }
                                            pFVar5 = ::FName::FName(&local_80,0x16,
                                                                    L"StructWithInnerObjects",
                                                                    FNAME_Add);
                                            FVar3 = *pFVar5;
                                            pUVar6 = USubobjectInstancingTestOuterObject::
                                                     StaticClass();
                                            pFVar7 = UStruct::FindPropertyByName
                                                               ((UStruct *)pUVar6,FVar3);
                                            if ((pFVar7 == (FProperty *)0x0) ||
                                               ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x14 & 1) ==
                                                0)) {
                                              pFVar4 = FAutomationTestFramework::Get();
                                              pFVar1 = pFVar4->CurrentTest;
                                              pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                              ::FString::FString(&local_c48,
                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                              (*pcVar2)(pFVar1,&local_c48,0);
                                              local_898.Data.AllocatorInstance.Data =
                                                   local_c48.Data.AllocatorInstance.Data;
                                            }
                                            else {
                                              if ((pFVar7->PropertyFlags &
                                                  (CPF_ContainsInstancedReference|
                                                  CPF_InstancedReference)) == CPF_None) {
                                                pFVar4 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar4->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_498,L"Condition failed");
                                                (*pcVar2)(pFVar1,&local_498,0);
                                                if (local_498.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_498.Data.AllocatorInstance.
                                                                Data);
                                                }
                                              }
                                              if ((pFVar7->PropertyFlags &
                                                  CPF_ContainsInstancedReference) == CPF_None) {
                                                pFVar4 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar4->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_488,L"Condition failed");
                                                (*pcVar2)(pFVar1,&local_488,0);
                                                if (local_488.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_488.Data.AllocatorInstance.
                                                                Data);
                                                }
                                              }
                                              if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1) !=
                                                  0) {
                                                pFVar4 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar4->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_478,
                                                                                                                                      
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                (*pcVar2)(pFVar1,&local_478,0);
                                                if (local_478.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_478.Data.AllocatorInstance.
                                                                Data);
                                                }
                                              }
                                              if ((pFVar7->PropertyFlags & CPF_PersistentInstance)
                                                  != CPF_None) {
                                                pFVar4 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar4->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_468,
                                                                                                                                      
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                (*pcVar2)(pFVar1,&local_468,0);
                                                if (local_468.Data.AllocatorInstance.Data !=
                                                    (FScriptContainerElement *)0x0) {
                                                  FMemory::Free(local_468.Data.AllocatorInstance.
                                                                Data);
                                                }
                                              }
                                              if (pFVar7[1]._padding_ == 0) {
                                                pFVar4 = FAutomationTestFramework::Get();
                                                pFVar1 = pFVar4->CurrentTest;
                                                pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                ::FString::FString(&local_458,
                                                                                                                                      
                                                  L"Required condition failed, interrupting test");
                                                (*pcVar2)(pFVar1,&local_458,0);
                                                local_898.Data.AllocatorInstance.Data =
                                                     local_458.Data.AllocatorInstance.Data;
                                              }
                                              else {
                                                pFVar5 = ::FName::FName(&local_78,0x13,
                                                                        L"InnerObjectFromType",
                                                                        FNAME_Add);
                                                pFVar7 = UStruct::FindPropertyByName
                                                                   ((UStruct *)pFVar7[1]._padding_,
                                                                    *pFVar5);
                                                if (pFVar7 == (FProperty *)0x0) {
                                                  pFVar4 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar4->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                  ::FString::FString(&local_448,
                                                                                                                                          
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_448,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_448.Data.AllocatorInstance.Data;
                                                }
                                                else {
                                                  if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10 &
                                                      1) == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_438,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_438,0);
                                                    if (local_438.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_438.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      (CPF_ContainsInstancedReference|
                                                      CPF_InstancedReference)) == CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_428,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_428,0);
                                                    if (local_428.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_428.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_ContainsInstancedReference) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_418,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_418,0);
                                                  if (local_418.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_418.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1)
                                                      == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_408,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_408,0);
                                                    if (local_408.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_408.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_3f8,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_3f8,0);
                                                  if (local_3f8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3f8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  pFVar4 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar4->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                                                  ::FString::FString(&local_3e8,
                                                                                                                                          
                                                  L"Struct with instanced object array property");
                                                  (*pcVar2)(pFVar1,&local_3e8,0,0);
                                                  if (local_3e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3e8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  pFVar5 = ::FName::FName(&local_70,0x16,
                                                                          L"StructWithInnerObjects",
                                                                          FNAME_Add);
                                                  FVar3 = *pFVar5;
                                                  pUVar6 = USubobjectInstancingTestOuterObject::
                                                           StaticClass();
                                                  pFVar7 = UStruct::FindPropertyByName
                                                                     ((UStruct *)pUVar6,FVar3);
                                                  if ((pFVar7 == (FProperty *)0x0) ||
                                                     ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x14 &
                                                      1) == 0)) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_c58,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_c58,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_c58.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_3d8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_3d8,0);
                                                      if (local_3d8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_3d8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) == CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_3c8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_3c8,0);
                                                      if (local_3c8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_3c8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 &
                                                        1) != 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_3b8,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_3b8,0);
                                                  if (local_3b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_3a8,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_3a8,0);
                                                  if (local_3a8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_3a8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if (pFVar7[1]._padding_ == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_398,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_398,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_398.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    pFVar5 = ::FName::FName(&local_68,0x10,
                                                                            L"InnerObjectArray",
                                                                            FNAME_Add);
                                                    pFVar7 = UStruct::FindPropertyByName
                                                                       ((UStruct *)
                                                                        pFVar7[1]._padding_,*pFVar5)
                                                    ;
                                                    if ((pFVar7 == (FProperty *)0x0) ||
                                                       ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15
                                                        & 1) == 0)) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_c68,
                                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_c68,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_c68.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_388,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_388,0);
                                                      if (local_388.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_388.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) == CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_378,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_378,0);
                                                      if (local_378.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_378.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 &
                                                        1) != 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_368,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_368,0);
                                                  if (local_368.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_368.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_358,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_358,0);
                                                  if (local_358.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_358.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if (pFVar7[1]._padding_ == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_348,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_348,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_348.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((*(uint *)(*(longlong *)
                                                                    (pFVar7[1]._padding_ + 8) + 0x18
                                                                  ) >> 0x10 & 1) == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_338,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_338,0);
                                                      if (local_338.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_338.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38)
                                                        & 0x8000080000) == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_328,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_328,0);
                                                      if (local_328.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_328.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38)
                                                        & 0x8000000000) != 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_318,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_318,0);
                                                  if (local_318.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_318.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13
                                                      & 1) == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_308,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_308,0);
                                                    if (local_308.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_308.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) &
                                                      0x2000000000000) == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_2f8,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_2f8,0);
                                                    if (local_2f8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_2f8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  pFVar4 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar4->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                                                  ::FString::FString(&local_2e8,
                                                                                                                                          
                                                  L"Optional instanced object property");
                                                  (*pcVar2)(pFVar1,&local_2e8,0,0);
                                                  if (local_2e8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2e8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  pFVar5 = ::FName::FName(&local_60,0x13,
                                                                          L"OptionalInnerObject",
                                                                          FNAME_Add);
                                                  FVar3 = *pFVar5;
                                                  pUVar6 = USubobjectInstancingTestOuterObject::
                                                           StaticClass();
                                                  pFVar7 = UStruct::FindPropertyByName
                                                                     ((UStruct *)pUVar6,FVar3);
                                                  if ((pFVar7 == (FProperty *)0x0) ||
                                                     ((*(ulonglong *)(pFVar7->_padding_ + 0x18) &
                                                      0x100000000000000) == 0)) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_c78,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_c78,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_c78.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_2d8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_2d8,0);
                                                      if (local_2d8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_2d8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) == CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_2c8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_2c8,0);
                                                      if (local_2c8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_2c8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 &
                                                        1) != 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_2b8,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_2b8,0);
                                                  if (local_2b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_2a8,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_2a8,0);
                                                  if (local_2a8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_2a8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  pFVar7 = FOptionalPropertyLayout::GetValueProperty
                                                                     ((FOptionalPropertyLayout *)
                                                                      (pFVar7 + 1));
                                                  if (pFVar7 == (FProperty *)0x0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_298,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_298,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_298.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10
                                                        & 1) == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_288,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_288,0);
                                                      if (local_288.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_288.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_278,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_278,0);
                                                      if (local_278.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_278.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) != CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_268,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_268,0);
                                                  if (local_268.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_268.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1)
                                                      == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_258,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_258,0);
                                                    if (local_258.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_258.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) == CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_248,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_248,0);
                                                    if (local_248.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_248.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  pFVar4 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar4->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                                                  ::FString::FString(&local_238,
                                                                                                                                          
                                                  L"Optional DefaultToInstanced object property");
                                                  (*pcVar2)(pFVar1,&local_238,0,0);
                                                  if (local_238.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_238.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  pFVar5 = ::FName::FName(&local_58,0x1b,
                                                                                                                                                    
                                                  L"OptionalInnerObjectFromType",FNAME_Add);
                                                  FVar3 = *pFVar5;
                                                  pUVar6 = USubobjectInstancingTestOuterObject::
                                                           StaticClass();
                                                  pFVar7 = UStruct::FindPropertyByName
                                                                     ((UStruct *)pUVar6,FVar3);
                                                  if ((pFVar7 == (FProperty *)0x0) ||
                                                     ((*(ulonglong *)(pFVar7->_padding_ + 0x18) &
                                                      0x100000000000000) == 0)) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_c88,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_c88,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_c88.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_228,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_228,0);
                                                      if (local_228.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_228.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) == CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_218,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_218,0);
                                                      if (local_218.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_218.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 &
                                                        1) != 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_208,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_208,0);
                                                  if (local_208.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_208.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1f8,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_1f8,0);
                                                  if (local_1f8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1f8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  pFVar7 = FOptionalPropertyLayout::GetValueProperty
                                                                     ((FOptionalPropertyLayout *)
                                                                      (pFVar7 + 1));
                                                  if (pFVar7 == (FProperty *)0x0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1e8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_1e8,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_1e8.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x10
                                                        & 1) == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_1d8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_1d8,0);
                                                      if (local_1d8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_1d8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_1c8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_1c8,0);
                                                      if (local_1c8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_1c8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) != CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_1b8,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_1b8,0);
                                                  if (local_1b8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_1b8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if (((uint)(int)pFVar7->PropertyFlags >> 0x13 & 1)
                                                      == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_1a8,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_1a8,0);
                                                    if (local_1a8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_1a8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_198,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_198,0);
                                                  if (local_198.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_198.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  pFVar4 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar4->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
                                                  ::FString::FString(&local_188,
                                                                                                                                          
                                                  L"Optional instanced object array property");
                                                  (*pcVar2)(pFVar1,&local_188,0,0);
                                                  if (local_188.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_188.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  pFVar5 = ::FName::FName(&local_50,0x18,
                                                                                                                                                    
                                                  L"OptionalInnerObjectArray",FNAME_Add);
                                                  FVar3 = *pFVar5;
                                                  pUVar6 = USubobjectInstancingTestOuterObject::
                                                           StaticClass();
                                                  pFVar7 = UStruct::FindPropertyByName
                                                                     ((UStruct *)pUVar6,FVar3);
                                                  if ((pFVar7 == (FProperty *)0x0) ||
                                                     ((*(ulonglong *)(pFVar7->_padding_ + 0x18) &
                                                      0x100000000000000) == 0)) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_c98,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_c98,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_c98.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_178,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_178,0);
                                                      if (local_178.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_178.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) == CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_168,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_168,0);
                                                      if (local_168.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_168.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 &
                                                        1) != 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_158,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_158,0);
                                                  if (local_158.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_158.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if ((pFVar7->PropertyFlags &
                                                      CPF_PersistentInstance) != CPF_None) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_148,
                                                                                                                                              
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_148,0);
                                                  if (local_148.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_148.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  pFVar7 = FOptionalPropertyLayout::GetValueProperty
                                                                     ((FOptionalPropertyLayout *)
                                                                      (pFVar7 + 1));
                                                  if ((pFVar7 == (FProperty *)0x0) ||
                                                     ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 &
                                                      1) == 0)) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_ca8,
                                                                                                                                              
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_ca8,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_ca8.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((pFVar7->PropertyFlags &
                                                        (CPF_ContainsInstancedReference|
                                                        CPF_InstancedReference)) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_138,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_138,0);
                                                      if (local_138.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_138.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_ContainsInstancedReference) == CPF_None)
                                                    {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_128,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_128,0);
                                                      if (local_128.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_128.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if (((uint)(int)pFVar7->PropertyFlags >> 0x13 &
                                                        1) == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_118,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_118,0);
                                                      if (local_118.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_118.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((pFVar7->PropertyFlags &
                                                        CPF_PersistentInstance) == CPF_None) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_108,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_108,0);
                                                      if (local_108.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_108.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if (pFVar7[1]._padding_ == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_f8,
                                                                                                                                                  
                                                  L"Required condition failed, interrupting test");
                                                  (*pcVar2)(pFVar1,&local_f8,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_f8.Data.AllocatorInstance.Data;
                                                  }
                                                  else {
                                                    if ((*(uint *)(*(longlong *)
                                                                    (pFVar7[1]._padding_ + 8) + 0x18
                                                                  ) >> 0x10 & 1) == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_e8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_e8,0);
                                                      if (local_e8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_e8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38)
                                                        & 0x8000080000) == 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_d8,
                                                                         L"Condition failed");
                                                      (*pcVar2)(pFVar1,&local_d8,0);
                                                      if (local_d8.Data.AllocatorInstance.Data !=
                                                          (FScriptContainerElement *)0x0) {
                                                        FMemory::Free(local_d8.Data.
                                                                      AllocatorInstance.Data);
                                                      }
                                                    }
                                                    if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38)
                                                        & 0x8000000000) != 0) {
                                                      pFVar4 = FAutomationTestFramework::Get();
                                                      pFVar1 = pFVar4->CurrentTest;
                                                      pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                      ::FString::FString(&local_cd8,
                                                                                                                                                  
                                                  L"Condition expected to return false but returned true"
                                                  );
                                                  (*pcVar2)(pFVar1,&local_cd8,0);
                                                  if (local_cd8.Data.AllocatorInstance.Data !=
                                                      (FScriptContainerElement *)0x0) {
                                                    FMemory::Free(local_cd8.Data.AllocatorInstance.
                                                                  Data);
                                                  }
                                                  }
                                                  if ((*(uint *)(pFVar7[1]._padding_ + 0x38) >> 0x13
                                                      & 1) == 0) {
                                                    pFVar4 = FAutomationTestFramework::Get();
                                                    pFVar1 = pFVar4->CurrentTest;
                                                    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                    ::FString::FString(&local_cc8,
                                                                       L"Condition failed");
                                                    (*pcVar2)(pFVar1,&local_cc8,0);
                                                    if (local_cc8.Data.AllocatorInstance.Data !=
                                                        (FScriptContainerElement *)0x0) {
                                                      FMemory::Free(local_cc8.Data.AllocatorInstance
                                                                    .Data);
                                                    }
                                                  }
                                                  if ((*(ulonglong *)(pFVar7[1]._padding_ + 0x38) &
                                                      0x2000000000000) != 0) {
                                                    return;
                                                  }
                                                  pFVar4 = FAutomationTestFramework::Get();
                                                  pFVar1 = pFVar4->CurrentTest;
                                                  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
                                                  ::FString::FString(&local_cb8,L"Condition failed")
                                                  ;
                                                  (*pcVar2)(pFVar1,&local_cb8,0);
                                                  local_898.Data.AllocatorInstance.Data =
                                                       local_cb8.Data.AllocatorInstance.Data;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_898.Data.AllocatorInstance.Data);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

