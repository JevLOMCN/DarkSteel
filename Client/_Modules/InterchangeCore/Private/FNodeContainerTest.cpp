// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 11

// GetTestFlags @ 14e304eb0

EAutomationTestFlags __thiscall FNodeContainerTest::GetTestFlags(FNodeContainerTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14e304ec0

bool __thiscall FNodeContainerTest::IsStressTest(FNodeContainerTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14e304ed0

uint __thiscall FNodeContainerTest::GetRequiredDeviceNum(FNodeContainerTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14e304ee0

FString * __thiscall
FNodeContainerTest::GetTestSourceFileName(FNodeContainerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Tests\\NodeContainerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14e304f10

int __thiscall FNodeContainerTest::GetTestSourceFileLine(FNodeContainerTest *this)

{
  return 0xe;
}

// GetTests @ 14e304f20

/* WARNING: Removing unreachable block (ram,0x00014e30500d) */
/* WARNING: Removing unreachable block (ram,0x00014e3050d8) */

void __thiscall
FNodeContainerTest::GetTests
          (FNodeContainerTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Runtime.Interchange.NodeContainer");
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

// RunTest @ 14e305100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FNodeContainerTest::RunTest(FNodeContainerTest *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FString *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UInterchangeBaseNodeContainer *pUVar11;
  UObject *pUVar12;
  UInterchangeBaseNode *pUVar13;
  UObject *pUVar14;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  UObject *pUVar22;
  wchar_t *pwVar23;
  ForAnyElementType FVar24;
  longlong lVar25;
  FAutomationTestBase *this_00;
  UObject *pUVar26;
  undefined1 auStackY_438 [32];
  bool local_3f8 [8];
  UInterchangeBaseNodeContainer *local_3f0;
  ForAnyElementType local_3e8;
  int local_3e0;
  int local_3dc;
  FString local_3d8;
  ForAnyElementType local_3c8;
  int local_3c0 [2];
  FString local_3b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_3a8;
  FString *local_398;
  undefined8 local_390;
  FString *local_388;
  undefined8 local_380;
  FString *local_378;
  undefined8 local_370;
  FString local_368;
  FAutomationTestBase *local_358;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  void *local_2e0;
  undefined8 local_2d8;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  longlong local_280;
  FString local_278;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_268;
  FString local_258;
  FString local_248;
  FAutomationTestBase *local_238;
  void **local_230;
  FString *local_228;
  FString *local_220;
  FString local_218;
  code *local_208;
  FString ***local_200;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FAutomationTestBase *local_1c8;
  UInterchangeBaseNodeContainer **local_1c0;
  ForAnyElementType *local_1b8;
  ForAnyElementType *local_1b0;
  FString *local_1a8;
  FString **local_1a0;
  FString **local_198;
  FString **local_190;
  void **local_188;
  bool *local_180;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pUVar22 = (UObject *)0x0;
  iVar8 = 0;
  local_3f0 = (UInterchangeBaseNodeContainer *)((ulonglong)local_3f0 & 0xffffffff00000000);
  local_358 = (FAutomationTestBase *)this;
  pUVar9 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = UInterchangeBaseNodeContainer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar10);
  local_138._8_8_ = pUVar9;
  pUVar11 = (UInterchangeBaseNodeContainer *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
  if (local_138._64_8_ != 0) {
    plVar17 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  local_3f0 = pUVar11;
  if (pUVar11 == (UInterchangeBaseNodeContainer *)0x0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::FString(&local_218,L"Cannot create a UInterchangeNodeContainer object.");
    (*pcVar2)(this,&local_218,0);
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    return false;
  }
  ::FString::FString(&local_1d8,L"TranslatedAssetNode_");
  pUVar9 = pUVar22;
  do {
    pUVar12 = GetTransientPackageAsObject();
    pUVar13 = NewObject<UInterchangeBaseNode>(pUVar12);
    local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_340.Data.ArrayNum = 0;
    local_340.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_340,(int)pUVar9);
    ::FString::ConcatFF(&local_2c0,&local_1d8,&local_340);
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_278,L"");
    pUVar11 = local_3f0;
    UInterchangeBaseNode::InitializeNode(pUVar13,&local_2c0,&local_2c0,TranslatedAsset);
    UInterchangeBaseNodeContainer::AddNode(pUVar11,&local_178,pUVar13);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    iVar6 = local_278.Data.ArrayNum + -1;
    if (local_278.Data.ArrayNum == 0) {
      iVar6 = iVar8;
    }
    if (iVar6 != 0) {
      UInterchangeBaseNodeContainer::SetNodeParentUid(pUVar11,&local_2c0,&local_278);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    uVar19 = (int)pUVar9 + 1;
    pUVar9 = (UObject *)(ulonglong)uVar19;
  } while ((int)uVar19 < 10);
  ::FString::FString(&local_350,L"TranslatedSceneNode_");
  local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.Data.ArrayNum = 0;
  local_330.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_330,0);
  ::FString::ConcatFF(&local_3d8,&local_350,&local_330);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
  local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_320.Data.ArrayNum = 0;
  local_320.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_320,0);
  ::FString::ConcatFF(&local_2b0,&local_350,&local_320);
  pUVar9 = pUVar22;
  pUVar12 = pUVar22;
  pUVar26 = pUVar22;
  if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data.AllocatorInstance.Data);
  }
  do {
    pUVar14 = GetTransientPackageAsObject();
    pUVar13 = NewObject<UInterchangeBaseNode>(pUVar14);
    uVar19 = (uint)pUVar9;
    local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.Data.ArrayNum = 0;
    local_310.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_310,uVar19);
    ::FString::ConcatFF(&local_368,&local_350,&local_310);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    uVar16 = (uint)pUVar26;
    if (uVar16 == uVar19) {
      uVar20 = (uint)pUVar12 | 2;
      pTVar15 = &::FString::FString(&local_158,L"")->Data;
    }
    else {
      uVar20 = (uint)pUVar12 | 1;
      local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                (&local_268,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,local_2b0.Data.ArrayNum
                 ,0);
      pTVar15 = &local_268;
    }
    pUVar11 = local_3f0;
    pUVar12 = (UObject *)(ulonglong)uVar20;
    UInterchangeBaseNode::InitializeNode(pUVar13,&local_368,&local_368,TranslatedScene);
    UInterchangeBaseNodeContainer::AddNode(pUVar11,&local_168,pUVar13);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    uVar18 = 0;
    uVar21 = pTVar15->ArrayNum - 1;
    if (pTVar15->ArrayNum == 0) {
      uVar21 = uVar18;
    }
    if (uVar21 != 0) {
      UInterchangeBaseNodeContainer::SetNodeParentUid(pUVar11,&local_368,(FString *)pTVar15);
    }
    if (((uVar20 & 2) != 0) &&
       (pUVar12 = (UObject *)(ulonglong)(uVar20 & 0xfffffffd),
       local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pUVar12 & 1) != 0) &&
       (pUVar12 = (UObject *)(ulonglong)((uint)pUVar12 & 0xfffffffe),
       local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
    uVar20 = uVar16;
    if (uVar19 == (int)((ulonglong)pUVar9 / 9) * 9) {
      uVar20 = uVar19;
    }
    if (uVar20 != uVar16) {
      pUVar26 = (UObject *)(ulonglong)uVar20;
      uVar16 = local_368.Data.ArrayNum - 1;
      if (local_368.Data.ArrayNum == 0) {
        uVar16 = uVar18;
      }
      ::FString::AssignRange(&local_2b0,(wchar_t *)local_368.Data.AllocatorInstance.Data,uVar16);
    }
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_368.Data.AllocatorInstance.Data);
    }
    pUVar9 = (UObject *)(ulonglong)(uVar19 + 1);
  } while ((int)(uVar19 + 1) < 100);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_1e8,L"FactoryNode_");
  pUVar9 = pUVar22;
  do {
    pUVar12 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar12,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = UInterchangeBaseNode::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar10);
    local_b8._8_8_ = pUVar12;
    pUVar13 = (UInterchangeBaseNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar17 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))();
    }
    local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.Data.ArrayNum = 0;
    local_300.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_300,(int)pUVar9);
    ::FString::ConcatFF(&local_2a0,&local_1e8,&local_300);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_258,L"");
    pUVar11 = local_3f0;
    UInterchangeBaseNode::InitializeNode(pUVar13,&local_2a0,&local_2a0,FactoryData);
    UInterchangeBaseNodeContainer::AddNode(pUVar11,&local_148,pUVar13);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    iVar6 = local_258.Data.ArrayNum + -1;
    if (local_258.Data.ArrayNum == 0) {
      iVar6 = iVar8;
    }
    if (iVar6 != 0) {
      UInterchangeBaseNodeContainer::SetNodeParentUid(pUVar11,&local_2a0,&local_258);
    }
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    UE::Interchange::TArrayAttributeHelper<FString>::AddItem(&pUVar13->TargetNodes,&local_3d8);
    if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
    }
    uVar19 = (int)pUVar9 + 1;
    pUVar9 = (UObject *)(ulonglong)uVar19;
  } while ((int)uVar19 < 3);
  local_1a0 = &local_378;
  local_198 = &local_388;
  local_378 = (FString *)0x0;
  local_190 = &local_398;
  local_188 = &local_2e0;
  local_180 = local_3f8;
  local_200 = &local_1a0;
  local_208 = UE::Core::Private::Function::
              TFunctionRefCaller<`FNodeContainerTest::RunTest'::__l17::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
              ::Call;
  local_370 = 0;
  local_388 = (FString *)0x0;
  local_380 = 0;
  local_398 = (FString *)0x0;
  local_390 = 0;
  local_2e0 = (void *)0x0;
  local_2d8 = 0;
  local_3f8[0] = false;
  UInterchangeBaseNodeContainer::IterateNodes
            (local_3f0,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_208);
  this_00 = local_358;
  FAutomationTestBase::TestEqual
            (local_358,L"Node container translated asset node count",(int)local_370,10);
  FAutomationTestBase::TestEqual
            (this_00,L"Node container translated scene node count",(int)local_380,100);
  FAutomationTestBase::TestEqual
            (this_00,L"Node container translated asset node count",(int)local_390,3);
  FAutomationTestBase::TestFalse(this_00,L"Node container contains unknown node",local_3f8[0]);
  local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.ArrayNum = 0;
  local_3a8.ArrayMax = 0;
  UInterchangeBaseNodeContainer::GetRoots(local_3f0,&local_3a8);
  FAutomationTestBase::TestEqual(this_00,L"Node container root count",local_3a8.ArrayNum,0xe);
  DestructItems<FString,int>((FString *)local_3a8.AllocatorInstance.Data,local_3a8.ArrayNum);
  if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AllocatorInstance.Data);
  }
  pUVar11 = local_3f0;
  uVar19 = local_3d8.Data.ArrayNum - 1;
  FVar24.Data = local_3d8.Data.AllocatorInstance.Data;
  if (local_3d8.Data.ArrayNum == 0) {
    uVar19 = uVar18;
    FVar24.Data = (FScriptContainerElement *)L"";
  }
  uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar19,(wchar_t *)FVar24.Data);
  iVar6 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&pUVar11->ChildrenCache,uVar19,&local_3d8);
  uVar19 = 0;
  if (iVar6 != -1) {
    lVar25 = *(longlong *)&pUVar11->ChildrenCache + (longlong)iVar6 * 0x28;
    pUVar9 = (UObject *)(lVar25 + 0x10);
    if (lVar25 == 0) {
      pUVar9 = pUVar22;
    }
    if (pUVar9 != (UObject *)0x0) {
      iVar6 = *(int *)&pUVar9->field_0x8;
      pFVar3 = *(FString **)pUVar9;
      local_3e8.Data = (FScriptContainerElement *)0x0;
      local_3e0 = iVar6;
      if (iVar6 == 0) {
        local_3dc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar6,0,&local_3e8,iVar6,&local_3dc);
        ConstructItems<FString,FString,int>(local_3e8.Data,pFVar3,iVar6);
      }
      FAutomationTestBase::TestEqual(this_00,L"Node container root node children count",local_3e0,9)
      ;
      pUVar9 = pUVar22;
      pUVar12 = pUVar22;
      if (0 < local_3e0) {
        do {
          uVar16 = (uint)pUVar9;
          uVar20 = uVar16 + 1;
          local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.Data.ArrayNum = 0;
          local_2f0.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_2f0,uVar20);
          ::FString::ConcatFF(&local_290,&local_350,&local_2f0);
          if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
          }
          uVar21 = uVar19;
          if ((int)uVar16 < local_3e0) {
            uVar21 = ~uVar16 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          FVar24.Data = (FScriptContainerElement *)L"";
          if (local_290.Data.ArrayNum != 0) {
            FVar24.Data = local_290.Data.AllocatorInstance.Data;
          }
          if (*(int *)(&pUVar12->field_0x8 + (longlong)local_3e8.Data) == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = *(wchar_t **)(local_3e8.Data + (longlong)&pUVar12->field_0x0);
          }
          bVar4 = FAutomationTestBase::TestEqual
                            (this_00,L"Node container child unique id doesn\'t match",pwVar23,
                             (wchar_t *)FVar24.Data);
          if (!bVar4) {
            if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_290.Data.AllocatorInstance.Data);
            }
            break;
          }
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
          pUVar9 = (UObject *)(ulonglong)uVar20;
          pUVar12 = (UObject *)&pUVar12->field_0x10;
        } while ((int)uVar20 < local_3e0);
      }
      iVar6 = local_3e0;
      lVar25 = (longlong)local_3e0;
      local_3c8.Data = (FScriptContainerElement *)0x0;
      local_3c0[0] = 0;
      local_3c0[1] = 0;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_3e0,&local_3c8,local_3c0,local_3c0 + 1);
      local_280 = lVar25;
      memset(local_3c8.Data + (longlong)iVar7 * 4,0,lVar25 * 4);
      pUVar9 = pUVar22;
      pUVar12 = pUVar22;
      if (0 < iVar6) {
        do {
          iVar6 = iVar6 + -1;
          uVar20 = (uint)pUVar9;
          uVar21 = ~uVar20 >> 0x1f;
          uVar16 = uVar19;
          if ((int)uVar20 < local_3c0[0]) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          *(int *)(local_3c8.Data + (longlong)pUVar12 * 4) = iVar6;
          uVar16 = uVar18;
          if ((int)uVar20 < local_3c0[0]) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          pFVar1 = local_3c8.Data + (longlong)(int)uVar20 * 4;
          uVar16 = uVar18;
          if ((int)uVar20 < local_3e0) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          UInterchangeBaseNodeContainer::SetNodeDesiredChildIndex
                    (local_3f0,(FString *)(local_3e8.Data + (longlong)(int)uVar20 * 0x10),
                     (int *)pFVar1);
          pUVar12 = (UObject *)&pUVar12->field_0x1;
          pUVar9 = (UObject *)(ulonglong)(uVar20 + 1);
          this_00 = local_358;
        } while ((longlong)pUVar12 < local_280);
      }
      local_1c0 = &local_3f0;
      local_1b8 = &local_3e8;
      local_1b0 = &local_3c8;
      local_1a8 = &local_3d8;
      local_1c8 = this_00;
      `FNodeContainerTest::RunTest'::__l29::<lambda_2>::operator()(&local_1c8);
      UInterchangeBaseNodeContainer::ComputeChildrenCache(local_3f0);
      `FNodeContainerTest::RunTest'::__l29::<lambda_2>::operator()(&local_1c8);
      if (local_3c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data);
      }
      DestructItems<FString,int>((FString *)local_3e8.Data,local_3e0);
      local_1f8.Data.AllocatorInstance.Data = local_3e8.Data;
      goto LAB_14e305bbf;
    }
  }
  pcVar2 = *(code **)(this_00->_padding_ + 0x28);
  ::FString::FString(&local_1f8,
                     L"Node container child index feature fail, Cannot get the cache node childrenUids."
                    );
  (*pcVar2)(this_00,&local_1f8,0);
LAB_14e305bbf:
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_248,L"Foo");
  ::FString::ConcatFF(&local_3b8,&local_248,&local_3d8);
  pUVar11 = local_3f0;
  local_230 = &local_2e0;
  local_228 = &local_3b8;
  local_220 = &local_3d8;
  bVar4 = -1 < CpuChannel->Enabled;
  local_238 = this_00;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((local_3d8.Data.ArrayNum == 0) || (local_3d8.Data.ArrayNum == 1)) {
    pUVar9 = pUVar22;
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    uVar16 = local_3d8.Data.ArrayNum - 1;
    FVar24.Data = local_3d8.Data.AllocatorInstance.Data;
    if (local_3d8.Data.ArrayNum == 0) {
      uVar16 = uVar19;
      FVar24.Data = (FScriptContainerElement *)L"";
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,(wchar_t *)FVar24.Data);
    iVar6 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&pUVar11->Nodes,uVar16,&local_3d8);
    if ((iVar6 == -1) ||
       (lVar25 = (longlong)iVar6 * 0x20 + *(longlong *)&pUVar11->Nodes, lVar25 == 0)) {
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar9 = *(UObject **)(lVar25 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FAutomationTestBase::TestTrue
            (this_00,
             L"UInterchangeNodeContainer::GetNode() should return the node if the unique id is pass without the namesapce, if the container dont have any namespace"
             ,pUVar9 != (UObject *)0x0);
  pUVar11 = local_3f0;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((local_3b8.Data.ArrayNum == 0) || (local_3b8.Data.ArrayNum == 1)) {
    pUVar9 = pUVar22;
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    uVar16 = local_3b8.Data.ArrayNum - 1;
    FVar24.Data = local_3b8.Data.AllocatorInstance.Data;
    if (local_3b8.Data.ArrayNum == 0) {
      uVar16 = uVar19;
      FVar24.Data = (FScriptContainerElement *)L"";
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,(wchar_t *)FVar24.Data);
    iVar6 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&pUVar11->Nodes,uVar16,&local_3b8);
    if ((iVar6 == -1) ||
       (lVar25 = (longlong)iVar6 * 0x20 + *(longlong *)&pUVar11->Nodes, lVar25 == 0)) {
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar9 = *(UObject **)(lVar25 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FAutomationTestBase::TestTrue
            (this_00,
             L"UInterchangeNodeContainer::GetNode() should return null node if the namespace and the unique id are combine, if the container dont have any namespace"
             ,pUVar9 == (UObject *)0x0);
  `FNodeContainerTest::RunTest'::__l34::<lambda_3>::operator()(&local_238,false);
  UInterchangeBaseNodeContainer::SetNamespace(local_3f0,&local_248,(UClass *)0x0);
  pUVar11 = local_3f0;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((local_3d8.Data.ArrayNum == 0) || (local_3d8.Data.ArrayNum == 1)) {
    pUVar9 = pUVar22;
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    uVar16 = local_3d8.Data.ArrayNum - 1;
    FVar24.Data = local_3d8.Data.AllocatorInstance.Data;
    if (local_3d8.Data.ArrayNum == 0) {
      uVar16 = uVar19;
      FVar24.Data = (FScriptContainerElement *)L"";
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,(wchar_t *)FVar24.Data);
    iVar6 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&pUVar11->Nodes,uVar16,&local_3d8);
    if ((iVar6 == -1) ||
       (lVar25 = (longlong)iVar6 * 0x20 + *(longlong *)&pUVar11->Nodes, lVar25 == 0)) {
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar9 = *(UObject **)(lVar25 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FAutomationTestBase::TestTrue
            (this_00,
             L"UInterchangeNodeContainer::GetNode() should return null node if the unique id is pass without the namesapce, if the container have a namespace"
             ,pUVar9 == (UObject *)0x0);
  pUVar11 = local_3f0;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((local_3b8.Data.ArrayNum == 0) || (local_3b8.Data.ArrayNum == 1)) {
    pUVar9 = pUVar22;
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    uVar16 = local_3b8.Data.ArrayNum - 1;
    FVar24.Data = local_3b8.Data.AllocatorInstance.Data;
    if (local_3b8.Data.ArrayNum == 0) {
      uVar16 = uVar19;
      FVar24.Data = (FScriptContainerElement *)L"";
    }
    uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,(wchar_t *)FVar24.Data);
    iVar6 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&pUVar11->Nodes,uVar16,&local_3b8);
    if ((iVar6 == -1) ||
       (lVar25 = (longlong)iVar6 * 0x20 + *(longlong *)&pUVar11->Nodes, lVar25 == 0)) {
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar9 = *(UObject **)(lVar25 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FAutomationTestBase::TestTrue
            (this_00,
             L"UInterchangeNodeContainer::GetNode() should return the node if the namespace and the unique id are combine, if the container have a namespace"
             ,pUVar9 != (UObject *)0x0);
  `FNodeContainerTest::RunTest'::__l34::<lambda_3>::operator()(&local_238,true);
  local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.Data.ArrayNum = 0;
  local_2d0.Data.ArrayMax = 0;
  UInterchangeBaseNodeContainer::SetNamespace(local_3f0,&local_2d0,(UClass *)0x0);
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  pUVar11 = local_3f0;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((local_3d8.Data.ArrayNum == 0) || (local_3d8.Data.ArrayNum == 1)) {
    pUVar9 = pUVar22;
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    uVar16 = local_3d8.Data.ArrayNum - 1;
    FVar24.Data = local_3d8.Data.AllocatorInstance.Data;
    if (local_3d8.Data.ArrayNum == 0) {
      uVar16 = uVar19;
      FVar24.Data = (FScriptContainerElement *)L"";
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,(wchar_t *)FVar24.Data);
    iVar6 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&pUVar11->Nodes,uVar19,&local_3d8);
    if ((iVar6 == -1) ||
       (lVar25 = (longlong)iVar6 * 0x20 + *(longlong *)&pUVar11->Nodes, lVar25 == 0)) {
      pUVar9 = (UObject *)0x0;
    }
    else {
      pUVar9 = *(UObject **)(lVar25 + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  FAutomationTestBase::TestTrue
            (this_00,
             L"UInterchangeNodeContainer::GetNode() should return the node if the unique id is pass without the namesapce, if the container dont have any namespace"
             ,pUVar9 != (UObject *)0x0);
  pUVar11 = local_3f0;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UInterchangeBaseNodeContainer::GetNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\Nodes\\InterchangeBaseNodeContainer.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((local_3b8.Data.ArrayNum != 0) && (local_3b8.Data.ArrayNum != 1)) {
    iVar6 = local_3b8.Data.ArrayNum + -1;
    FVar24.Data = local_3b8.Data.AllocatorInstance.Data;
    if (local_3b8.Data.ArrayNum == 0) {
      iVar6 = iVar8;
      FVar24.Data = (FScriptContainerElement *)L"";
    }
    uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar24.Data);
    iVar8 = TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TObjectPtr<UInterchangeBaseNode>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UInterchangeBaseNode>,0>,FDefaultSetAllocator>
                        *)&pUVar11->Nodes,uVar19,&local_3b8);
    if ((((iVar8 != -1) &&
         (lVar25 = (longlong)iVar8 * 0x20 + *(longlong *)&pUVar11->Nodes, pUVar22 = (UObject *)0x0,
         lVar25 != 0)) &&
        (pUVar22 = *(UObject **)(lVar25 + 0x10), UE::GC::GIsIncrementalReachabilityPending != false)
        ) && (pUVar22 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar22);
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FAutomationTestBase::TestTrue
            (this_00,
             L"UInterchangeNodeContainer::GetNode() should return null node if the namespace and the unique id are combine, if the container dont have any namespace"
             ,pUVar22 == (UObject *)0x0);
  `FNodeContainerTest::RunTest'::__l34::<lambda_3>::operator()(&local_238,false);
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (local_2e0 != (void *)0x0) {
    FMemory::Free(local_2e0);
  }
  DestructItems<FString,int>(local_398,(int)local_390);
  if (local_398 != (FString *)0x0) {
    FMemory::Free(local_398);
  }
  DestructItems<FString,int>(local_388,(int)local_380);
  if (local_388 != (FString *)0x0) {
    FMemory::Free(local_388);
  }
  DestructItems<FString,int>(local_378,(int)local_370);
  if (local_378 != (FString *)0x0) {
    FMemory::Free(local_378);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14e306280

FString * __thiscall
FNodeContainerTest::GetBeautifiedTestName(FNodeContainerTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Runtime.Interchange.NodeContainer");
  return __return_storage_ptr__;
}

// operator() @ 14e406190

void __thiscall
`FNodeContainerTest::RunTest'::__l17::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  int *piVar1;
  code *pcVar2;
  EInterchangeNodeContainerType EVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  UInterchangeBaseNode *local_res18 [2];
  
  local_res18[0] = param_2;
  EVar3 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  if (EVar3 == TranslatedScene) {
    pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
  }
  else {
    if (EVar3 != TranslatedAsset) {
      if (EVar3 != FactoryData) {
        **(undefined1 **)((longlong)this + 0x20) = 1;
        return;
      }
      pFVar6 = *(ForAnyElementType **)((longlong)this + 0x10);
      if ((pFVar6->Data <= param_1) &&
         (param_1 < pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0x10)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = *(int *)&pFVar6[1].Data;
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar6,piVar1);
      }
      *(int *)&pFVar6[1].Data = iVar5 + 1;
      ::FString::FString((FString *)(pFVar6->Data + (longlong)iVar5 * 0x10),param_1);
      pFVar6 = *(ForAnyElementType **)((longlong)this + 0x18);
      if ((pFVar6->Data <= (FScriptContainerElement *)local_res18) &&
         ((FScriptContainerElement *)local_res18 <
          pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = *(int *)&pFVar6[1].Data;
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar6,piVar1);
      }
      *(int *)&pFVar6[1].Data = iVar5 + 1;
      *(UInterchangeBaseNode **)(pFVar6->Data + (longlong)iVar5 * 8) = local_res18[0];
      return;
    }
    pFVar6 = *(ForAnyElementType **)this;
  }
  if ((pFVar6->Data <= param_1) &&
     (param_1 < pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0x10)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar6[1].Data;
  piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar6,piVar1);
  }
  *(int *)&pFVar6[1].Data = iVar5 + 1;
  ::FString::FString((FString *)(pFVar6->Data + (longlong)iVar5 * 0x10),param_1);
  return;
}

// operator() @ 14e4070e0

void __thiscall `FNodeContainerTest::RunTest'::__l29::<lambda_2>::operator()(void *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FAutomationTestBase *this_00;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  longlong lVar15;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  
  pTVar9 = TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)(**(longlong **)((longlong)this + 8) + 0x78),
                  *(FString **)((longlong)this + 0x20));
  if (pTVar9 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
    plVar3 = *(longlong **)this;
    pcVar5 = *(code **)(*plVar3 + 0x28);
    ::FString::FString(&local_38,
                       L"Node container child index feature fail, Cannot get the cache node childrenUids."
                      );
    (*pcVar5)(plVar3,&local_38,0);
  }
  else {
    iVar1 = pTVar9->ArrayNum;
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = iVar1;
    if (iVar1 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_58,iVar1,&local_4c);
      ConstructItems<FString,FString,int>(local_58.Data,(FString *)pFVar2,iVar1);
    }
    if (*(int *)(*(longlong *)((longlong)this + 0x10) + 8) == local_50) {
      uVar10 = 0;
      if (0 < local_50) {
        lVar15 = 0;
        lVar14 = 0;
        do {
          plVar3 = *(longlong **)((longlong)this + 0x18);
          this_00 = *(FAutomationTestBase **)this;
          plVar4 = *(longlong **)((longlong)this + 0x10);
          uVar7 = 0;
          if ((int)uVar10 < (int)plVar3[1]) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar7 = *(uint *)(lVar14 + *plVar3);
          uVar8 = 0;
          if ((int)uVar7 < (int)plVar4[1]) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar11 = (undefined8 *)((longlong)(int)uVar7 * 0x10 + *plVar4);
          uVar7 = 0;
          if ((int)uVar10 < local_50) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)(puVar11 + 1) == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)*puVar11;
          }
          if (*(int *)(local_58.Data + lVar15 + 8) == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)(local_58.Data + lVar15);
          }
          bVar6 = FAutomationTestBase::TestEqual
                            (this_00,L"Node container child index reorder fail",pwVar12,pwVar13);
          if (!bVar6) break;
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 4;
          lVar15 = lVar15 + 0x10;
        } while ((int)uVar10 < local_50);
      }
    }
    else {
      plVar3 = *(longlong **)this;
      pcVar5 = *(code **)(*plVar3 + 0x28);
      ::FString::FString(&local_48,
                         L"Node container child index feature fail, the number of child change when indexes are specified."
                        );
      (*pcVar5)(plVar3,&local_48,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<FString,int>((FString *)local_58.Data,local_50);
    local_38.Data.AllocatorInstance.Data = local_58.Data;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14e4075e0

void __thiscall
`FNodeContainerTest::RunTest'::__l34::<lambda_3>::operator()(void *this,bool param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *_Src;
  FAutomationTestBase *this_00;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  undefined1 local_res8 [8];
  byte local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  plVar2 = *(longlong **)((longlong)this + 8);
  plVar8 = (longlong *)*plVar2;
  lVar5 = plVar2[1];
  plVar1 = plVar8 + (int)lVar5;
  local_res10 = param_1;
  do {
    if ((int)plVar2[1] != (int)lVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UInterchangeBaseNode_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar8 == plVar1) {
      return;
    }
    if (*plVar8 != 0) {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      UE::Interchange::TArrayAttributeHelper<FString>::GetItems
                ((TArrayAttributeHelper<FString> *)(*plVar8 + 0x40),&local_58);
      if (0 < local_58.ArrayNum) {
        puVar3 = *(undefined8 **)((longlong)this + ((ulonglong)param_1 ^ 1) * 8 + 0x10);
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = *(int *)(puVar3 + 1);
        lVar7 = (longlong)local_40;
        _Src = (void *)*puVar3;
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_40,0,&local_48,local_40,&local_3c);
          memcpy(local_48.Data,_Src,lVar7 * 2);
        }
        this_00 = *(FAutomationTestBase **)this;
        if ((local_58.ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(local_58.AllocatorInstance.Data + 8) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)local_58.AllocatorInstance.Data;
        }
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_40 != 0) {
          FVar9.Data = local_48.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual
                          (this_00,
                           L"Namespace should update node reference into all node attributes",
                           (wchar_t *)FVar9.Data,pwVar10);
        if (!bVar6) {
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data);
          }
          DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
          if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.AllocatorInstance.Data);
          }
          return;
        }
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data);
        }
        param_1 = (bool)local_res10;
      }
      DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}

