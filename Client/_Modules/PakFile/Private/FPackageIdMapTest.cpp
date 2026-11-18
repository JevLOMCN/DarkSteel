// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 11

// GetTestFlags @ 142a3a8a0

EAutomationTestFlags __thiscall FPackageIdMapTest::GetTestFlags(FPackageIdMapTest *this)

{
  return this->TestFlags;
}

// IsStressTest @ 142a3a8b0

bool __thiscall FPackageIdMapTest::IsStressTest(FPackageIdMapTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 142a3a8c0

uint __thiscall FPackageIdMapTest::GetRequiredDeviceNum(FPackageIdMapTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 142a3a8d0

FString * __thiscall
FPackageIdMapTest::GetTestSourceFileName(FPackageIdMapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142a3a900

int __thiscall FPackageIdMapTest::GetTestSourceFileLine(FPackageIdMapTest *this)

{
  return 0x342;
}

// GetTests @ 142a3a910

/* WARNING: Removing unreachable block (ram,0x000142a3aa8e) */

void __thiscall
FPackageIdMapTest::GetTests
          (FPackageIdMapTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
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

// RunTest @ 142a3aab0

bool __thiscall FPackageIdMapTest::RunTest(FPackageIdMapTest *this,FString *param_1)

{
  bool bVar1;
  
  TestBody(this,param_1);
  bVar1 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  return !bVar1;
}

// GetBeautifiedTestName @ 142a3aae0

FString * __thiscall
FPackageIdMapTest::GetBeautifiedTestName(FPackageIdMapTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PrettyNameDotNotation);
  return __return_storage_ptr__;
}

// FPackageIdMapTest @ 142a525b0

FPackageIdMapTest * __thiscall
FPackageIdMapTest::FPackageIdMapTest(FPackageIdMapTest *this,FString *param_1)

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
  this->_padding_ = (longlong)&___7FPackageIdMapTest__6B_;
  pFVar1 = &this->PrettyNameDotNotation;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrettyNameDotNotation).Data.ArrayNum = 0;
  (this->PrettyNameDotNotation).Data.ArrayMax = 0;
  pFVar4 = ::FString::FString(&local_18,"[Pak][IoStore][SmokeFilter]");
  EVar3 = FAutomationTestBase::ExtractAutomationTestFlags((FAutomationTestBase *)this,pFVar4);
  this->TestFlags = EVar3;
  pFVar4 = ::FString::FString(&local_28,"System::Pak::IoStore::PackageIdMap");
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
  ::FString::FString(&local_18,"[Pak][IoStore][SmokeFilter]");
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

// operator() @ 142a5a020

TMap<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
* __thiscall
`FPackageIdMapTest::TestBody'::__l2::<lambda_2>::operator()
          (void *this,
          TMap<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
          *__return_storage_ptr__,
          TArrayView<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_const_,int>
          *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *pTVar9;
  uint uVar10;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *pTVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar1 = param_1->ArrayNum;
  uVar6 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (uVar1 == 0) goto LAB_142a5a27e;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar1);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar1);
  uVar10 = 1;
  if (3 < uVar1) {
    uVar7 = (ulonglong)((uVar1 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar10 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_142a5a27e;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar10;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar10 != 0) {
    uVar4 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar4 = 0;
        goto LAB_142a5a0f4;
      }
    }
    else {
LAB_142a5a0f4:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar4,4);
    }
    if (0 < (int)uVar10) {
      uVar12 = (ulonglong)uVar10;
      uVar7 = uVar6;
      do {
        puVar5 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar3 = uVar7 & (longlong)(int)uVar10 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(puVar5 + uVar3 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar10 = *(uint *)&__return_storage_ptr__->field_0x28;
    puStack_70 = (undefined8 *)&__return_storage_ptr__->field_0x10;
    local_78 = (undefined8 *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      puVar13 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar13 = (uint *)puStack_70;
      }
      uVar4 = *puVar13;
      uVar7 = uVar6;
      while (uVar4 == 0) {
        iVar8 = (int)uVar6;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uVar4 = iVar8 + 1;
        uVar6 = (ulonglong)local_78 >> 0x20;
        local_78 = (undefined8 *)CONCAT44((int)uVar6,uVar4);
        uVar6 = (ulonglong)uVar4;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_142a5a1eb;
        uVar4 = puVar13[(longlong)iVar8 + 1];
      }
      local_78 = (undefined8 *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar6 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_142a5a1eb:
        uVar6 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = __return_storage_ptr__;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_70;
    if ((int)uVar6 < (int)uVar10) {
      do {
        iVar8 = (int)uVar6;
        uVar10 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                 *(uint *)(*(longlong *)local_58 + (longlong)iVar8 * 0x18);
        lVar2 = *(longlong *)local_58 + (longlong)iVar8 * 0x18;
        *(uint *)(lVar2 + 0x14) = uVar10;
        puVar5 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar6 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar5 + uVar6 * 4);
        *(int *)(puVar5 + uVar6 * 4) = iVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
LAB_142a5a27e:
  pTVar9 = param_1->DataPtr;
  pTVar11 = pTVar9 + (int)uVar1;
  if (pTVar9 != pTVar11) {
    local_78 = &local_88;
    puStack_70 = &uStack_80;
    do {
      local_88 = *(undefined8 *)pTVar9;
      uStack_80 = *(undefined8 *)&pTVar9->field_0x8;
      TSet<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FPackageId_const_&,UE::FilePackageStorePrivate::FEntryHandle_const_&>_>
                ((TSet<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,
                 (TPairInitializer<FPackageId_const_&,UE::FilePackageStorePrivate::FEntryHandle_const_&>
                  *)&stack0x00000010,(bool *)&local_78);
      pTVar9 = pTVar9 + 1;
    } while (pTVar9 != pTVar11);
  }
  return __return_storage_ptr__;
}

// TestBody @ 142aa1e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FPackageIdMapTest::TestBody(FPackageIdMapTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  longlong lVar4;
  FPackageId FVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FAutomationTestFramework *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  TMap<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
  *this_00;
  FEntryHandle *pFVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ForAnyElementType FVar23;
  uint *puVar24;
  int *piVar25;
  uint uVar26;
  ulong64 *puVar27;
  undefined1 auStackY_498 [32];
  ForAnyElementType local_448;
  undefined8 local_440;
  undefined1 local_438;
  undefined1 local_437 [7];
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_430;
  undefined1 local_420 [8];
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_418;
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_408;
  undefined8 local_3f8;
  ulonglong local_3f0;
  longlong local_3e8;
  ulonglong local_3e0;
  longlong *local_3d8;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  TBitArray<FDefaultBitArrayAllocator> *local_3c8;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  uint local_3b8;
  undefined4 uStack_3b4;
  int iStack_3b0;
  undefined4 uStack_3ac;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> local_3a8;
  FString local_398;
  int local_388;
  int local_384;
  longlong local_380;
  FPackageIdMap local_378;
  longlong *local_360;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_358;
  longlong *local_338;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_330;
  undefined8 uStack_310;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *local_2d8;
  uint uStack_2d0;
  undefined4 uStack_2cc;
  TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  TArrayView<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_const_,int> local_248;
  TArray<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>,TSizedDefaultAllocator<32>_>
  local_238;
  TArrayView<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_const_,int> local_228 [2];
  undefined4 local_1fc;
  undefined4 local_1dc;
  undefined1 local_1d8 [32];
  uint *local_1b8;
  uint local_1b0;
  int local_1a4;
  void *local_198;
  undefined4 local_190;
  undefined1 local_188 [72];
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 local_124;
  int local_120 [2];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_498;
  pFVar10 = FAutomationTestFramework::Get();
  pFVar2 = pFVar10->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_2b8,L"PackageIdKey");
  (*pcVar3)(pFVar2,&local_2b8,0);
  if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
  }
  piVar25 = (int *)&local_138;
  local_138 = ___xmm_00000018000000130000001200000011;
  uStack_130 = _UNK_15098c3a8;
  local_128 = 0x1f;
  local_124 = 0x20;
  do {
    iVar8 = *piVar25;
    puVar27 = ::Values;
    bVar15 = 0x40 - (char)iVar8;
    do {
      uVar17 = *puVar27;
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                             ,0x30,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((0xf < iVar8 - 0x11U) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlotBits >= MinSlotBits && SlotBits <= MaxSlotBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                             ,0x31,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 != ((uVar17 >> (bVar15 & 0x3f) & 0xffffffff) << (bVar15 & 0x3f) |
                     (uVar17 >> 0xf & 0xffffffff) << 0xf | (ulonglong)((uint)uVar17 & 0x7fff))) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_288,L"Condition failed");
        (*pcVar3)(pFVar2,&local_288,0);
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
      }
      uVar17 = ~uVar17;
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("PID.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                             ,0x30,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((0xf < iVar8 - 0x11U) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SlotBits >= MinSlotBits && SlotBits <= MaxSlotBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                             ,0x31,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 != ((uVar17 >> (bVar15 & 0x3f) & 0xffffffff) << (bVar15 & 0x3f) |
                     (uVar17 >> 0xf & 0xffffffff) << 0xf | (ulonglong)((uint)uVar17 & 0x7fff))) {
        pFVar10 = FAutomationTestFramework::Get();
        pFVar2 = pFVar10->CurrentTest;
        pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
        ::FString::FString(&local_278,L"Condition failed");
        (*pcVar3)(pFVar2,&local_278);
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
      puVar27 = (ulong64 *)((longlong)puVar27 + 8);
    } while ((wchar_t *)puVar27 != L"PackageIdKey");
    piVar25 = piVar25 + 1;
  } while (piVar25 != local_120);
  pFVar10 = FAutomationTestFramework::Get();
  pFVar2 = pFVar10->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_268,L"Sorting");
  (*pcVar3)(pFVar2,&local_268,0);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  local_118 = 2;
  local_f8 = 0xfedcba0987654321;
  uStack_110 = 0x40000002;
  local_c8 = 0x100000000;
  local_108 = 1;
  local_b8 = 0x1000000000;
  uStack_100 = 0x20000001;
  local_a8 = 0x10000000000;
  uStack_f0 = 0x40123456;
  local_98 = 0x100000000000;
  local_e8 = 3;
  local_88 = 0x1000000000000;
  uStack_e0 = 0x10000000;
  local_78 = 0x10000000000000;
  local_68 = 0x100000000000000;
  local_58 = 0x1000000000000000;
  local_48 = 0x110000000000000;
  local_d8 = 0x10000000;
  uStack_d0 = 0x20000001;
  uStack_c0 = 0x40000002;
  uStack_b0 = 0x60000003;
  uStack_a0 = 4;
  uStack_90 = 0x20000001;
  uStack_80 = 0x40000002;
  uStack_70 = 0x60000003;
  uStack_60 = 4;
  uStack_50 = 0x20000005;
  uStack_40 = 0x40000006;
  local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_408.ArrayNum = 0xe;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xe,0,&local_408.AllocatorInstance,0xe,&local_408.ArrayMax);
  *(undefined8 *)local_408.AllocatorInstance.Data = local_118;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 8) = CONCAT44(uStack_10c,uStack_110);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x10) = local_108;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_fc,uStack_100);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x20) = local_f8;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_ec,uStack_f0);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x30) = local_e8;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x40) = local_d8;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_cc,uStack_d0);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x50) = local_c8;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x58) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x60) = local_b8;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x68) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x70) = local_a8;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x78) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x80) = local_98;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x88) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0x90) = local_88;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0x98) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0xa0) = local_78;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0xa8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0xb0) = local_68;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0xb8) = CONCAT44(uStack_5c,uStack_60);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0xc0) = local_58;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 200) = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)(local_408.AllocatorInstance.Data + 0xd0) = local_48;
  *(ulonglong *)(local_408.AllocatorInstance.Data + 0xd8) = CONCAT44(uStack_3c,uStack_40);
  UE::FilePackageStorePrivate::SortByEntryOffset(&local_408);
  uVar20 = 1;
  uVar19 = 1;
  do {
    uVar26 = 0;
    if ((int)uVar19 < local_408.ArrayNum) {
      uVar26 = ~uVar19 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar23.Data = local_408.AllocatorInstance.Data;
    uVar26 = 0;
    if ((int)(uVar19 - 1) < local_408.ArrayNum) {
      uVar26 = ~(uVar19 - 1) >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(uint *)(FVar23.Data + (longlong)(int)uVar19 * 0x10 + 8) & 0x1fffffff) <
        (*(uint *)(local_408.AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10 + -8) &
        0x1fffffff)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_258,L"Condition failed");
      (*pcVar3)(pFVar2,&local_258,0);
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 < 0xe);
  local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_418.ArrayNum = 0xe;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0xe,0,&local_418.AllocatorInstance,0xe,&local_418.ArrayMax);
  *(undefined8 *)local_418.AllocatorInstance.Data = local_118;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 8) = CONCAT44(uStack_10c,uStack_110);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x10) = local_108;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x18) = CONCAT44(uStack_fc,uStack_100);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x20) = local_f8;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x28) = CONCAT44(uStack_ec,uStack_f0);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x30) = local_e8;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x38) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x40) = local_d8;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x48) = CONCAT44(uStack_cc,uStack_d0);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x50) = local_c8;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x58) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x60) = local_b8;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x68) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x70) = local_a8;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x78) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x80) = local_98;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x88) = CONCAT44(uStack_8c,uStack_90);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0x90) = local_88;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0x98) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0xa0) = local_78;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0xa8) = CONCAT44(uStack_6c,uStack_70);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0xb0) = local_68;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0xb8) = CONCAT44(uStack_5c,uStack_60);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0xc0) = local_58;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 200) = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)(local_418.AllocatorInstance.Data + 0xd0) = local_48;
  *(ulonglong *)(local_418.AllocatorInstance.Data + 0xd8) = CONCAT44(uStack_3c,uStack_40);
  UE::FilePackageStorePrivate::SortBySlotIndex(&local_418);
  do {
    uVar26 = ~(uVar20 - 1) >> 0x1f;
    uVar19 = 0;
    if ((int)(uVar20 - 1) < local_418.ArrayNum) {
      uVar19 = uVar26;
    }
    if ((uVar19 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar11 = (longlong)(int)uVar20 + -1;
    lVar21 = *(longlong *)(local_418.AllocatorInstance.Data + lVar11 * 0x10);
    local_380 = lVar11;
    if ((lVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PID.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x30,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar19 = 0;
    if ((int)uVar20 < local_418.ArrayNum) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar4 = *(longlong *)(local_418.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10);
    if ((lVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PID.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x30,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)((ulonglong)lVar4 >> 0x2f) < (uint)((ulonglong)lVar21 >> 0x2f)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_308,L"Condition failed");
      (*pcVar3)(pFVar2,&local_308,0);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
    }
    uVar19 = 0;
    if ((int)(uVar20 - 1) < local_418.ArrayNum) {
      uVar19 = uVar26;
    }
    if ((uVar19 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar21 = *(longlong *)(local_418.AllocatorInstance.Data + lVar11 * 0x10);
    if ((lVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PID.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x30,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = 0;
    uVar26 = 0;
    uVar19 = uVar26;
    if ((int)uVar20 < local_418.ArrayNum) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar11 = *(longlong *)(local_418.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x10);
    if ((lVar11 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("PID.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\FilePackageStore.cpp"
                           ,0x30,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)((ulonglong)lVar11 >> 0x20) < (uint)((ulonglong)lVar21 >> 0x20)) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_2f8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_2f8);
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 < 0xe);
  if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.AllocatorInstance.Data);
  }
  if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AllocatorInstance.Data);
  }
  pFVar10 = FAutomationTestFramework::Get();
  pFVar2 = pFVar10->CurrentTest;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x50);
  ::FString::FString(&local_2e8,L"Map");
  (*pcVar3)(pFVar2,&local_2e8,0,0);
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  local_448.Data = (FScriptContainerElement *)0x0;
  local_440 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_448,(int *)((longlong)&local_440 + 4));
  uVar19 = iVar8 + 1;
  *(undefined8 *)(local_448.Data + (longlong)iVar8 * 8) = 0x123456789abcdef;
  local_3f8 = 0xfedcba9876543210;
  local_440._0_4_ = uVar19;
  if (((local_448.Data <= (FScriptContainerElement *)&local_3f8) &&
      ((FScriptContainerElement *)&local_3f8 < local_448.Data + (longlong)(int)local_440._4_4_ * 8))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((uint)local_440 == local_440._4_4_) {
    local_440._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_448,(int *)((longlong)&local_440 + 4));
  }
  uVar18 = 1;
  lVar21 = 0x3f;
  *(undefined8 *)(local_448.Data + (longlong)(int)(uint)local_440 * 8) = local_3f8;
  local_440._0_4_ = (uint)local_440 + 1;
  do {
    local_3f0 = uVar18;
    if (((local_448.Data <= (FScriptContainerElement *)&local_3f0) &&
        ((FScriptContainerElement *)&local_3f0 < local_448.Data + (longlong)(int)local_440._4_4_ * 8
        )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((uint)local_440 == local_440._4_4_) {
      local_440._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_448,(int *)((longlong)&local_440 + 4));
    }
    uVar19 = (uint)local_440 + 1;
    uVar18 = uVar18 << 1 | (ulonglong)((longlong)uVar18 < 0);
    *(ulonglong *)(local_448.Data + (longlong)(int)(uint)local_440 * 8) = local_3f0;
    lVar21 = lVar21 + -1;
    local_440._0_4_ = uVar19;
  } while (lVar21 != 0);
  uVar12 = (ulonglong)(int)uVar19;
  uVar18 = uVar12;
  uVar16 = uVar17;
  uVar22 = uVar17;
  if (0 < (int)uVar19) {
    do {
      uVar20 = (uint)uVar16;
      uVar19 = uVar26;
      if ((int)uVar20 < (int)(uint)uVar18) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      uVar9 = (uint)uVar18;
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar9 = (uint)local_440, bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_3e8 = *(longlong *)(local_448.Data + uVar22 * 8) + 1;
      if (((local_448.Data <= (FScriptContainerElement *)&local_3e8) &&
          ((FScriptContainerElement *)&local_3e8 <
           local_448.Data + (longlong)(int)local_440._4_4_ * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar9 = (uint)local_440, bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 == local_440._4_4_) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_448,(int *)((longlong)&local_440 + 4));
      }
      local_440._0_4_ = uVar9 + 1;
      uVar22 = uVar22 + 1;
      *(longlong *)(local_448.Data + (longlong)(int)uVar9 * 8) = local_3e8;
      uVar18 = (ulonglong)(uint)local_440;
      uVar16 = (ulonglong)(uVar20 + 1);
    } while ((longlong)uVar22 < (longlong)uVar12);
  }
  iVar8 = (int)uVar18;
  uVar16 = uVar17;
  uVar22 = uVar17;
  if (0 < iVar8) {
    do {
      uVar20 = (uint)uVar16;
      uVar19 = uVar26;
      if ((int)uVar20 < (int)(uint)uVar18) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      uVar9 = (uint)uVar18;
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar9 = (uint)local_440, bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_3e0 = ~*(ulonglong *)(local_448.Data + uVar22 * 8);
      if (((local_448.Data <= (FScriptContainerElement *)&local_3e0) &&
          ((FScriptContainerElement *)&local_3e0 <
           local_448.Data + (longlong)(int)local_440._4_4_ * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar9 = (uint)local_440, bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 == local_440._4_4_) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_448,(int *)((longlong)&local_440 + 4));
      }
      local_440._0_4_ = uVar9 + 1;
      uVar22 = uVar22 + 1;
      *(ulonglong *)(local_448.Data + (longlong)(int)uVar9 * 8) = local_3e0;
      uVar18 = (ulonglong)(uint)local_440;
      uVar16 = (ulonglong)(uVar20 + 1);
    } while ((longlong)uVar22 < (longlong)iVar8);
  }
  local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_430.ArrayNum = 0;
  local_430.ArrayMax = 0;
  iVar8 = (int)uVar18;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar18 & 0xffffffff);
  }
  uVar16 = uVar17;
  if (0 < iVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar8,&local_430.AllocatorInstance,0,&local_430.ArrayMax);
    uVar18 = (ulonglong)(uint)local_440;
    uVar16 = (ulonglong)(uint)local_430.ArrayNum;
  }
  iVar8 = (int)uVar18;
  pFVar1 = local_448.Data + (longlong)iVar8 * 8;
  FVar23.Data = local_448.Data;
  while( true ) {
    uStack_2d0 = (uint)uVar16;
    if ((int)uVar18 != iVar8) {
      local_438 = 0;
      `TCheckedPointerIterator<FPackageId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_438);
      uStack_2d0 = local_430.ArrayNum;
    }
    if (FVar23.Data == pFVar1) break;
    local_3a8._0_8_ = *(undefined8 *)FVar23.Data;
    local_3a8._8_4_ = SUB84(local_3a8._0_8_,0);
    if (((local_430.AllocatorInstance.Data <= &local_3a8) &&
        (&local_3a8 <
         (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
         (local_430.AllocatorInstance.Data + (longlong)local_430.ArrayMax * 0x10))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uStack_2d0 = local_430.ArrayNum, bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uStack_2d0 == local_430.ArrayMax) {
      uStack_2d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_430.AllocatorInstance,&local_430.ArrayMax);
    }
    local_430.ArrayNum = uStack_2d0 + 1;
    FVar23.Data = FVar23.Data + 8;
    *(undefined8 *)(local_430.AllocatorInstance.Data + (longlong)(int)uStack_2d0 * 0x10) =
         local_3a8._0_8_;
    *(ulonglong *)(local_430.AllocatorInstance.Data + (longlong)(int)uStack_2d0 * 0x10 + 8) =
         CONCAT44(local_3a8._12_4_,local_3a8._8_4_);
    uVar18 = (ulonglong)(uint)local_440;
    uVar16 = (ulonglong)(uint)local_430.ArrayNum;
  }
  local_2d8 = (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
              local_430.AllocatorInstance.Data;
  if (((int)uStack_2d0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_228[0]._12_4_ = uStack_2cc;
  local_228[0].ArrayNum = uStack_2d0;
  local_228[0].DataPtr = local_2d8;
  `FPackageIdMapTest::TestBody'::__l2::<lambda_2>::operator()
            (local_437,
             (TMap<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
              *)local_1d8,local_228);
  UE::FilePackageStorePrivate::FPackageIdMap::FPackageIdMap(&local_378,&local_430);
  pTVar13 = UE::FilePackageStorePrivate::ToArray(&local_238,&local_378);
  local_2c8 = (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
              (pTVar13->AllocatorInstance).Data;
  iStack_2c0 = pTVar13->ArrayNum;
  if ((iStack_2c0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_248._12_4_ = uStack_2bc;
  local_248.ArrayNum = iStack_2c0;
  local_248.DataPtr = local_2c8;
  this_00 = `FPackageIdMapTest::TestBody'::__l2::<lambda_2>::operator()
                      (local_437,
                       (TMap<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
                        *)local_188,&local_248);
  uVar19 = 0;
  if (local_1d8._8_4_ - local_1a4 == *(int *)&this_00->field_0x8 - *(int *)&this_00->field_0x34) {
    uVar16 = uVar17;
    uVar18 = uVar17;
    local_3b8 = uVar19;
    uStack_3cc = 1;
    if (local_1b0 != 0) {
      puVar24 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar24 = local_1b8;
      }
      uStack_3cc = *puVar24;
      local_3b8 = 0;
      while (uStack_3cc == 0) {
        iVar8 = (int)uVar18;
        local_3b8 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)local_3b8;
        uVar20 = iVar8 + 1;
        uVar18 = (ulonglong)uVar20;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20) {
          uVar16 = (ulonglong)local_1b0;
          uStack_3cc = 1;
          goto LAB_142aa2f2f;
        }
        uStack_3cc = puVar24[(longlong)iVar8 + 1];
      }
      uStack_3cc = -uStack_3cc & uStack_3cc;
      uVar16 = (ulonglong)uStack_3cc * 2 + 1;
      lVar21 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_388 = (int)lVar21;
      uVar20 = local_388 + -1 + local_3b8;
      uVar16 = (ulonglong)uVar20;
      if ((int)local_1b0 < (int)uVar20) {
        uVar16 = (ulonglong)local_1b0;
      }
    }
LAB_142aa2f2f:
    uStack_3d0 = (undefined4)uVar18;
    local_3d8 = (longlong *)local_1d8;
    local_3c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
    uStack_3c0 = 0xffffffff;
    uStack_3bc = (uint)uVar16;
    uStack_3b4 = local_1fc;
    TStack_358._padding_ = CONCAT44(uStack_3cc,uStack_3d0);
    TStack_358.CurrentBitIndex = uStack_3bc;
    TStack_358.UnvisitedBitMask = 0xffffffff;
    TStack_358._28_4_ = local_1fc;
    TStack_358.BaseBitIndex = local_3b8;
    local_360 = local_3d8;
    TStack_358.Array = local_3c8;
    if ((int)uStack_3bc < (int)local_1b0) {
      do {
        lVar21 = *local_360;
        pFVar14 = TMapBase<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
                  ::Find((TMapBase<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,UE::FilePackageStorePrivate::FEntryHandle,0>_>
                          *)this_00,(FPackageId *)(lVar21 + (longlong)(int)uVar16 * 0x18));
        if ((pFVar14 == (FEntryHandle *)0x0) ||
           (*pFVar14 != *(FEntryHandle *)(lVar21 + 8 + (longlong)(int)uVar16 * 0x18)))
        goto LAB_142aa2e9b;
        TStack_358.UnvisitedBitMask = TStack_358.UnvisitedBitMask & ~TStack_358._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_358);
        uVar16 = (ulonglong)(uint)TStack_358.CurrentBitIndex;
      } while (TStack_358.CurrentBitIndex < (TStack_358.Array)->NumBits);
    }
    bVar7 = false;
  }
  else {
LAB_142aa2e9b:
    bVar7 = true;
  }
  local_140 = 0;
  if ((void *)local_188._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_188._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if (bVar7) {
    pFVar10 = FAutomationTestFramework::Get();
    pFVar2 = pFVar10->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::FString(&local_398,L"Condition failed");
    (*pcVar3)(pFVar2,&local_398,0);
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  }
  uVar20 = local_1b0;
  uStack_3bc = uVar19;
  uStack_3cc = 1;
  if (local_1b0 != 0) {
    puVar24 = (uint *)(local_1d8 + 0x10);
    if (local_1b8 != (uint *)0x0) {
      puVar24 = local_1b8;
    }
    uVar26 = *puVar24;
    uVar18 = uVar17;
    uVar19 = 0;
    while (uVar26 == 0) {
      iVar8 = (int)uVar17;
      uVar19 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uVar19;
      uVar26 = iVar8 + 1;
      uVar17 = (ulonglong)uVar26;
      uStack_3bc = local_1b0;
      if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_142aa30d1;
      uVar26 = puVar24[(longlong)iVar8 + 1];
    }
    uStack_3cc = -uVar26 & uVar26;
    uVar18 = (ulonglong)uStack_3cc * 2 + 1;
    lVar21 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_384 = (int)lVar21;
    uStack_3bc = (uVar19 - 1) + local_384;
    if ((int)local_1b0 < (int)uStack_3bc) {
      uStack_3bc = local_1b0;
    }
  }
LAB_142aa30d1:
  local_3d8 = (longlong *)local_1d8;
  uStack_3b4 = local_1dc;
  local_3c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
  uVar26 = local_1b0 & 0xffffffe0;
  iStack_3b0 = local_1d8._8_4_ - local_1a4;
  uStack_3c0 = 0xffffffff;
  TStack_330.CurrentBitIndex = uStack_3bc;
  TStack_330.UnvisitedBitMask = 0xffffffff;
  uStack_3d0 = (undefined4)uVar17;
  TStack_330._padding_ = CONCAT44(uStack_3cc,uStack_3d0);
  iVar8 = (int)local_1b0 >> 5;
  TStack_330._28_4_ = local_1dc;
  TStack_330.BaseBitIndex = uVar19;
  uStack_310 = CONCAT44(uStack_3ac,iStack_3b0);
  bVar15 = (byte)local_1b0;
  local_3b8 = uVar19;
  local_338 = local_3d8;
  TStack_330.Array = local_3c8;
  if (((int)local_1b0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar20 != local_1b0) {
    puVar24 = (uint *)(local_1d8 + 0x10);
    if (local_1b8 != (uint *)0x0) {
      puVar24 = local_1b8;
    }
    uVar19 = -1 << (bVar15 & 0x1f) & puVar24[iVar8];
    while (uVar19 == 0) {
      lVar21 = (longlong)iVar8;
      uVar26 = uVar26 + 0x20;
      iVar8 = iVar8 + 1;
      uVar20 = local_1b0;
      if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
      goto LAB_142aa31f0;
      uVar19 = puVar24[lVar21 + 1];
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar20 = (int)lVar21 + -1 + uVar26;
    if ((int)local_1b0 < (int)uVar20) {
      uVar20 = local_1b0;
    }
  }
LAB_142aa31f0:
  while( true ) {
    plVar6 = local_338;
    if ((int)local_338[1] - *(int *)((longlong)local_338 + 0x34) != (int)uStack_310) {
      `TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_420);
    }
    if (((TStack_330.CurrentBitIndex == uVar20) &&
        (TStack_330.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10))) &&
       (plVar6 == (longlong *)local_1d8)) break;
    puVar27 = (ulong64 *)(*plVar6 + (longlong)TStack_330.CurrentBitIndex * 0x18);
    FVar5.Id = *puVar27;
    local_398.Data._8_8_ = puVar27[1];
    local_398.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5.Id;
    pFVar14 = UE::FilePackageStorePrivate::FPackageIdMap::Find(&local_378,FVar5);
    if (pFVar14 == (FEntryHandle *)0x0) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_2a8,L"Condition failed");
      (*pcVar3)(pFVar2,&local_2a8,0);
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
    }
    pFVar14 = UE::FilePackageStorePrivate::FPackageIdMap::Find(&local_378,FVar5);
    if (*pFVar14 != (FEntryHandle)local_398.Data.ArrayNum) {
      pFVar10 = FAutomationTestFramework::Get();
      pFVar2 = pFVar10->CurrentTest;
      pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
      ::FString::FString(&local_298,L"Condition failed");
      (*pcVar3)(pFVar2,&local_298);
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
    }
    TStack_330.UnvisitedBitMask = TStack_330.UnvisitedBitMask & ~TStack_330._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_330);
  }
  FMemory::Free(local_378.Slots);
  FMemory::Free(local_378.Values);
  local_190 = 0;
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
  if ((TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)
      local_430.AllocatorInstance.Data !=
      (TTuple<FPackageId,UE::FilePackageStorePrivate::FEntryHandle> *)0x0) {
    FMemory::Free(local_430.AllocatorInstance.Data);
  }
  if (local_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data);
  }
  return;
}

