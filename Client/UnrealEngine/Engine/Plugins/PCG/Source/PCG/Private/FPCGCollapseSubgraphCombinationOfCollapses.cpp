// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// GetTestFlags @ 14a004510

EAutomationTestFlags __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::GetTestFlags
          (FPCGCollapseSubgraphCombinationOfCollapses *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a004520

bool __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::IsStressTest
          (FPCGCollapseSubgraphCombinationOfCollapses *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a004530

uint __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::GetRequiredDeviceNum
          (FPCGCollapseSubgraphCombinationOfCollapses *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a004540

FString * __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::GetTestSourceFileName
          (FPCGCollapseSubgraphCombinationOfCollapses *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a004570

int __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::GetTestSourceFileLine
          (FPCGCollapseSubgraphCombinationOfCollapses *this)

{
  return 0x17;
}

// GetTests @ 14a004580

/* WARNING: Removing unreachable block (ram,0x00014a00466d) */
/* WARNING: Removing unreachable block (ram,0x00014a004738) */

void __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::GetTests
          (FPCGCollapseSubgraphCombinationOfCollapses *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Subgraph.Collapse.Combination");
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

// RunTest @ 14a004760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::RunTest
          (FPCGCollapseSubgraphCombinationOfCollapses *this,FString *param_1)

{
  code *pcVar1;
  FName FVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  bool bVar11;
  UPCGGraph *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  FName *pFVar15;
  UPackage *pUVar16;
  UPCGGraph *pUVar17;
  FUObjectItem *pFVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined1 auStackY_428 [32];
  bool local_3e8;
  uint local_3e4;
  uint local_3dc;
  int local_3d0;
  undefined8 *local_3c8;
  UPCGGraph *local_3c0;
  FString local_3b8;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  UPCGGraph *local_398;
  FPCGCollapseSubgraphCombinationOfCollapses *local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  TArray<UPCGNode_*,TSizedDefaultAllocator<32>_> local_368;
  FSoftObjectPath local_358;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_338;
  FName local_328;
  FName local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  FAutomationTestBase *local_300;
  longlong local_2f0;
  FName local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FText local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FName local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  FPCGTaggedData *local_228;
  undefined8 local_220;
  undefined2 local_218;
  void *local_210;
  undefined8 local_208;
  undefined8 local_200;
  FPCGTaggedData *local_1f8;
  undefined8 local_1f0;
  undefined2 local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  TPersistentObjectPtr<FSoftObjectPath> local_1a8;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  FString local_168;
  FString local_158;
  FString local_148;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_138;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_128;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_118;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_d8;
  FSoftObjectPath local_c8;
  TStringView<wchar_t> local_a8;
  FName local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_428;
  pUVar17 = (UPCGGraph *)0x0;
  iVar24 = 0;
  local_178 = 
  L"/Script/PCG.PCGGraph\'/PCG/UnitTest/UnitTestSubgraphCollapse.UnitTestSubgraphCollapse\'";
  uStack_170 = 0x55;
  local_a8._12_4_ = uStack_16c;
  local_a8.Size = 0x55;
  local_a8.DataPtr =
       L"/Script/PCG.PCGGraph\'/PCG/UnitTest/UnitTestSubgraphCollapse.UnitTestSubgraphCollapse\'";
  local_358.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_358.AssetPath.PackageName.Number = 0;
  local_358.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_358.AssetPath.AssetName.Number = 0;
  local_358.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.SubPathString.Data.ArrayNum = 0;
  local_358.SubPathString.Data.ArrayMax = 0;
  local_300 = (FAutomationTestBase *)this;
  FSoftObjectPath::SetPath(&local_358,&local_a8);
  local_c8.AssetPath.PackageName = local_358.AssetPath.PackageName;
  local_c8.AssetPath.AssetName = local_358.AssetPath.AssetName;
  local_c8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
            (&local_c8.SubPathString.Data,
             (uchar *)local_358.SubPathString.Data.AllocatorInstance.Data,
             local_358.SubPathString.Data.ArrayNum,0);
  local_1a8.WeakPtr.ObjectIndex = 0;
  local_1a8.WeakPtr.ObjectSerialNumber = 0;
  FSoftObjectPath::FSoftObjectPath(&local_1a8.ObjectID,&local_c8);
  if (local_c8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.SubPathString.Data.AllocatorInstance.Data);
  }
  pUVar12 = (UPCGGraph *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_1a8);
  if (pUVar12 == (UPCGGraph *)0x0) {
    if (local_1a8.ObjectID.AssetPath.PackageName != (FName)0x0) {
      local_398 = pUVar12;
      FSoftObjectPath::TryLoad(&local_1a8.ObjectID,(FUObjectSerializeContext *)0x0);
      pUVar12 = (UPCGGraph *)TPersistentObjectPtr<FSoftObjectPath>::Get(&local_1a8);
      goto LAB_14a00487b;
    }
LAB_14a0048a3:
    local_398 = (UPCGGraph *)0x0;
    pUVar12 = pUVar17;
  }
  else {
LAB_14a00487b:
    if (pUVar12 == (UPCGGraph *)0x0) goto LAB_14a0048a3;
    local_398 = pUVar12;
    pUVar13 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar23 = (int)pUVar13->_padding_;
    if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar23) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
        &pUVar13->_padding_)) goto LAB_14a0048a3;
  }
  if (local_1a8.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_1a8.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2e0,"UnitTest graph was successfully loaded");
  if (pUVar12 == (UPCGGraph *)0x0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_168,L"Expected \'%s\' to be not null.");
    (*pcVar1)(this,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if (!bVar8) {
    if ((pUVar12 == (UPCGGraph *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("UnitTestGraph",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                           ,0x108,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return (bool)uVar9;
    }
    iVar23 = (pUVar12->Nodes).ArrayNum;
    ::FString::FString(&local_2d0,"Expected number of nodes");
    FVar22.Data = (FScriptContainerElement *)L"";
    if (local_2d0.Data.ArrayNum != 0) {
      FVar22.Data = local_2d0.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual
                      ((FAutomationTestBase *)this,(wchar_t *)FVar22.Data,iVar23,0xc);
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      pUVar13 = Z_Construct_UClass_AActor_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      dVar7 = __real_407f400000000000;
      dVar5 = __real_4049000000000000;
      local_3c8 = &local_238;
      local_228 = (FPCGTaggedData *)0x0;
      local_220 = 0;
      local_218 = 0;
      local_210 = (void *)0x0;
      local_208 = 0;
      local_200 = 0;
      local_1f8 = (FPCGTaggedData *)0x0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_1e0 = (void *)0x0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c0 = 0x2a;
      local_1bc = 0x2a;
      local_1b8 = 0x2a;
      local_238 = 0;
      uStack_230 = 0;
      local_1c8 = 0;
      local_390 = this;
      `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()
                (&local_3c8,&local_e8,pUVar12,__real_4049000000000000,__real_407f400000000000);
      dVar4 = __real_4059000000000000;
      `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()
                (&local_3c8,&local_d8,pUVar12,__real_4059000000000000,dVar7);
      dVar6 = __real_40b3880000000000;
      `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()
                (&local_3c8,&local_108,pUVar12,dVar5,__real_40b3880000000000);
      lVar20 = (longlong)(pUVar12->Nodes).ArrayNum;
      bVar8 = true;
      local_3e8 = true;
      local_3e4 = 0;
      local_3d0 = 0;
      local_3dc = 0;
      local_370 = 0;
      pUVar12 = pUVar17;
      iVar23 = 0;
      local_2f0 = lVar20;
      if (lVar20 < 1) {
LAB_14a005538:
        ::FString::FString(&local_260,"Number of success expected");
        FVar22.Data = (FScriptContainerElement *)L"";
        if (local_260.Data.ArrayNum != 0) {
          FVar22.Data = local_260.Data.AllocatorInstance.Data;
        }
        bVar8 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar22.Data,iVar23,0xb4);
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          ::FString::FString(&local_250,"Number of cycles expected");
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_250.Data.ArrayNum != 0) {
            FVar22.Data = local_250.Data.AllocatorInstance.Data;
          }
          bVar10 = FAutomationTestBase::TestEqual
                             ((FAutomationTestBase *)this,(wchar_t *)FVar22.Data,iVar24,0x13b);
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          bVar8 = local_3e8;
          if (bVar10) goto LAB_14a00563d;
        }
        bVar8 = false;
      }
      else {
        do {
          if (bVar8 == false) goto LAB_14a00563d;
          local_378 = local_370 + 1;
          local_3a0 = (int)pUVar17 + 1;
          uVar25 = local_3a0;
          local_308 = local_378;
          if (local_378 < lVar20) {
            do {
              if (bVar8 == false) break;
              local_380 = local_378 + 1;
              local_3a4 = uVar25 + 1;
              uVar3 = local_3a4;
              local_310 = local_380;
              if (local_380 < lVar20) {
                do {
                  if (bVar8 == false) break;
                  uVar21 = uVar3 + 1;
                  lVar14 = local_380 + 1;
                  local_3a8 = uVar21;
                  local_388 = lVar14;
                  local_318 = lVar14;
                  if (lVar14 < lVar20) {
                    do {
                      local_388 = lVar14;
                      if (bVar8 == false) break;
                      pFVar15 = ::FName::FName(&local_98,L"UnitTest_GraphDuplicate");
                      FVar2 = *pFVar15;
                      pUVar16 = GetTransientPackage();
                      pUVar13 = Z_Construct_UClass_UPCGGraph_NoRegister();
                      pUVar17 = (UPCGGraph *)
                                DuplicateObject_Internal
                                          (pUVar13,(UObject *)local_398,(UObject *)pUVar16,FVar2);
                      local_3c0 = pUVar17;
                      if ((pUVar17 == (UPCGGraph *)0x0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("OriginalGraph",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Subgraphs\\PCGCollapseSubgraphTest.cpp"
                                             ,0x15d,L""), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar17,RF_Transient);
                      ::FString::PrintfImpl(&local_3b8,L"[%d, %d, %d, %d]");
                      uVar19 = 0;
                      if ((int)uVar21 < (pUVar17->Nodes).ArrayNum) {
                        uVar19 = ~uVar21 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      local_2e8 = *(FName *)(*(longlong *)
                                              ((pUVar17->Nodes).AllocatorInstance.Data + lVar14 * 8)
                                            + 0x18);
                      ::FName::ToString(&local_2e8,&local_290);
                      uVar19 = 0;
                      if ((int)uVar3 < (pUVar17->Nodes).ArrayNum) {
                        uVar19 = ~uVar3 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      local_240 = *(FName *)(*(longlong *)
                                              ((pUVar17->Nodes).AllocatorInstance.Data +
                                              local_380 * 8) + 0x18);
                      ::FName::ToString(&local_240,&local_2a0);
                      uVar19 = 0;
                      if ((int)uVar25 < (pUVar17->Nodes).ArrayNum) {
                        uVar19 = ~uVar25 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      local_328 = *(FName *)(*(longlong *)
                                              ((pUVar17->Nodes).AllocatorInstance.Data +
                                              local_378 * 8) + 0x18);
                      ::FName::ToString(&local_328,&local_2b0);
                      uVar19 = 0;
                      if ((int)local_3dc < (pUVar17->Nodes).ArrayNum) {
                        uVar19 = ~local_3dc >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      local_320 = *(FName *)(*(longlong *)
                                              ((local_3c0->Nodes).AllocatorInstance.Data +
                                              local_370 * 8) + 0x18);
                      ::FName::ToString(&local_320,&local_2c0);
                      ::FString::PrintfImpl(&local_270,L"[%s, %s, %s, %s]");
                      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
                      }
                      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
                      }
                      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
                      }
                      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_290.Data.AllocatorInstance.Data);
                      }
                      pUVar17 = local_3c0;
                      uVar19 = 0;
                      if ((int)local_3dc < (local_3c0->Nodes).ArrayNum) {
                        uVar19 = ~local_3dc >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      local_90 = *(undefined8 *)
                                  ((pUVar17->Nodes).AllocatorInstance.Data + local_370 * 8);
                      uVar19 = 0;
                      if ((int)uVar25 < (pUVar17->Nodes).ArrayNum) {
                        uVar19 = ~uVar25 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      uStack_88 = *(undefined8 *)
                                   ((pUVar17->Nodes).AllocatorInstance.Data + local_378 * 8);
                      uVar19 = 0;
                      if ((int)uVar3 < (pUVar17->Nodes).ArrayNum) {
                        uVar19 = ~uVar3 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      local_80 = *(undefined8 *)
                                  ((pUVar17->Nodes).AllocatorInstance.Data + local_380 * 8);
                      uVar19 = 0;
                      if ((int)uVar21 < (pUVar17->Nodes).ArrayNum) {
                        uVar19 = ~uVar21 >> 0x1f;
                      }
                      if ((uVar19 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      uStack_78 = *(undefined8 *)
                                   ((pUVar17->Nodes).AllocatorInstance.Data + local_388 * 8);
                      local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_368.ArrayNum = 4;
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (8,8,4,0,&local_368.AllocatorInstance,4,&local_368.ArrayMax);
                      *(undefined8 *)local_368.AllocatorInstance.Data = local_90;
                      *(undefined8 *)(local_368.AllocatorInstance.Data + 8) = uStack_88;
                      *(undefined8 *)(local_368.AllocatorInstance.Data + 0x10) = local_80;
                      *(undefined8 *)(local_368.AllocatorInstance.Data + 0x18) = uStack_78;
                      FText::FText(&local_280);
                      local_338.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_338.ArrayNum = 0;
                      local_338.ArrayMax = 0;
                      pUVar12 = FPCGSubgraphHelpers::CollapseIntoSubgraphWithReason
                                          (pUVar17,&local_368,&local_338,&local_280,(UPCGGraph *)0x0
                                          );
                      if (local_338.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_338.AllocatorInstance.Data);
                      }
                      if (pUVar12 == (UPCGGraph *)0x0) {
                        if (4 < (byte)LogPCG._0_1_) {
                          FText::ToString(&local_280);
                          UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                        }
                        local_3e4 = local_3e4 + 1;
                      }
                      else {
                        UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar12,RF_Transient);
                        `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::
                        operator()(&local_3c8,&local_118,pUVar17,dVar5,dVar7);
                        `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::
                        operator()(&local_3c8,&local_128,pUVar17,dVar4,dVar7);
                        `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::
                        operator()(&local_3c8,&local_138,pUVar17,dVar5,dVar6);
                        ::FString::ConcatFC(&local_f8,&local_3b8,L" First run");
                        bVar8 = `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::
                                <lambda_2>::operator()(&local_390,&local_e8,&local_118,&local_f8);
                        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                        }
                        ::FString::ConcatFC(&local_158,&local_3b8,L" Second run");
                        bVar10 = `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::
                                 <lambda_2>::operator()(&local_390,&local_d8,&local_128,&local_158);
                        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_158.Data.AllocatorInstance.Data);
                        }
                        ::FString::ConcatFC(&local_148,&local_3b8,L" Third run");
                        bVar11 = `FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::
                                 <lambda_2>::operator()(&local_390,&local_108,&local_138,&local_148)
                        ;
                        bVar11 = (bVar8 && bVar10) && bVar11;
                        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_148.Data.AllocatorInstance.Data);
                        }
                        if (bVar11) {
                          local_3d0 = local_3d0 + 1;
                        }
                        else if (4 < (byte)LogPCG._0_1_) {
                          UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                        }
                        local_3e8 = (bool)(local_3e8 & bVar11);
                        pFVar18 = FUObjectArray::IndexToObject
                                            (&GUObjectArray,
                                             *(int *)((longlong)&pUVar12->_padding_ + 4));
                        if ((((ulonglong)((pFVar18->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e &
                             1) != 0) &&
                           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                              ("!IsRooted()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                               ,0xb8,L""), bVar8)) {
                          pcVar1 = (code *)swi(3);
                          uVar9 = (*pcVar1)();
                          return (bool)uVar9;
                        }
                        UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar12,RF_MirroredGarbage);
                        pFVar18 = FUObjectArray::IndexToObject
                                            (&GUObjectArray,
                                             *(int *)((longlong)&pUVar12->_padding_ + 4));
                        do {
                          lVar20 = (pFVar18->field0_0x0).FlagsAndRefCount;
                          uVar19 = (uint)((ulonglong)lVar20 >> 0x20);
                          if ((uVar19 >> 0x15 & 1) != 0) break;
                          if (((ulonglong)pFVar18 & 7) != 0) {
                            FWindowsPlatformAtomics::HandleAtomicsFailure
                                      (
                                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                                      );
                          }
                          LOCK();
                          bVar8 = lVar20 == (pFVar18->field0_0x0).FlagsAndRefCount;
                          if (bVar8) {
                            (pFVar18->field0_0x0).FlagsAndRefCount =
                                 (longlong)(int)uVar19 << 0x20 | (longlong)(int)lVar20 |
                                 0x20000000000000;
                          }
                          UNLOCK();
                        } while (!bVar8);
                        pFVar18 = FUObjectArray::IndexToObject
                                            (&GUObjectArray,
                                             *(int *)((longlong)&pUVar12->_padding_ + 4));
                        FUObjectItem::ClearRootFlags(pFVar18,Async);
                        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_138.AllocatorInstance.Data);
                        }
                        if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_128.AllocatorInstance.Data);
                        }
                        pUVar17 = local_3c0;
                        if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_118.AllocatorInstance.Data);
                          pUVar17 = local_3c0;
                        }
                      }
                      pUVar12 = (UPCGGraph *)(ulonglong)local_3e4;
                      pFVar18 = FUObjectArray::IndexToObject
                                          (&GUObjectArray,
                                           *(int *)((longlong)&pUVar17->_padding_ + 4));
                      if ((((ulonglong)((pFVar18->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1)
                           != 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("!IsRooted()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                                             ,0xb8,L""), bVar8)) {
                        pcVar1 = (code *)swi(3);
                        uVar9 = (*pcVar1)();
                        return (bool)uVar9;
                      }
                      UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar17,RF_MirroredGarbage);
                      pFVar18 = FUObjectArray::IndexToObject
                                          (&GUObjectArray,
                                           *(int *)((longlong)&pUVar17->_padding_ + 4));
                      do {
                        lVar20 = (pFVar18->field0_0x0).FlagsAndRefCount;
                        uVar19 = (uint)((ulonglong)lVar20 >> 0x20);
                        if ((uVar19 >> 0x15 & 1) != 0) break;
                        if (((ulonglong)pFVar18 & 7) != 0) {
                          FWindowsPlatformAtomics::HandleAtomicsFailure
                                    (
                                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                                    );
                        }
                        LOCK();
                        bVar8 = lVar20 == (pFVar18->field0_0x0).FlagsAndRefCount;
                        if (bVar8) {
                          (pFVar18->field0_0x0).FlagsAndRefCount =
                               (longlong)(int)uVar19 << 0x20 | (longlong)(int)lVar20 |
                               0x20000000000000;
                        }
                        UNLOCK();
                      } while (!bVar8);
                      pFVar18 = FUObjectArray::IndexToObject
                                          (&GUObjectArray,
                                           *(int *)((longlong)&local_3c0->_padding_ + 4));
                      FUObjectItem::ClearRootFlags(pFVar18,Async);
                      if (local_280.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
                      }
                      if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_368.AllocatorInstance.Data);
                      }
                      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_270.Data.AllocatorInstance.Data);
                      }
                      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
                      }
                      uVar21 = uVar21 + 1;
                      lVar14 = local_388 + 1;
                      lVar20 = local_2f0;
                      bVar8 = local_3e8;
                      local_388 = lVar14;
                    } while (lVar14 < local_2f0);
                  }
                  local_380 = local_318;
                  uVar3 = local_3a8;
                } while (local_318 < lVar20);
              }
              local_378 = local_310;
              uVar25 = local_3a4;
            } while (local_310 < lVar20);
          }
          iVar24 = (int)pUVar12;
          pUVar17 = (UPCGGraph *)(ulonglong)local_3a0;
          local_3dc = local_3a0;
          local_370 = local_308;
        } while (local_308 < lVar20);
        this = (FPCGCollapseSubgraphCombinationOfCollapses *)local_300;
        iVar23 = local_3d0;
        if (bVar8 != false) goto LAB_14a005538;
      }
LAB_14a00563d:
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_1e0 != (void *)0x0) {
        FMemory::Free(local_1e0);
      }
      DestructItems<FPCGTaggedData,int>(local_1f8,(int)local_1f0);
      if (local_1f8 != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_1f8);
      }
      if (local_210 != (void *)0x0) {
        FMemory::Free(local_210);
      }
      DestructItems<FPCGTaggedData,int>(local_228,(int)local_220);
      if (local_228 != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_228);
      }
      goto LAB_14a00570e;
    }
  }
  bVar8 = false;
LAB_14a00570e:
  if (local_358.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// GetBeautifiedTestName @ 14a005760

FString * __thiscall
FPCGCollapseSubgraphCombinationOfCollapses::GetBeautifiedTestName
          (FPCGCollapseSubgraphCombinationOfCollapses *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Subgraph.Collapse.Combination");
  return __return_storage_ptr__;
}

// operator() @ 14a019480

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
`FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPCGGraph *param_1,double param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  UPCGGraphInterface *pUVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  ulong64 uVar10;
  FPCGGraphExecutor *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  char local_res8 [8];
  FName local_res10;
  double local_res20;
  FName local_a8 [2];
  FPCGGraphExecutor *local_98;
  TReferenceControllerBase<1> *local_90;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_88;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_78;
  code *local_68 [5];
  undefined8 *local_40;
  
  local_res20 = param_2;
  pTVar7 = ::operator_new(0x6b0);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar11 = (FPCGGraphExecutor *)&DAT_00000010;
    pTVar7 = pTVar12;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPCGGraphExecutor___00_SharedPointerInternals__6B_;
    FPCGGraphExecutor::FPCGGraphExecutor((FPCGGraphExecutor *)(pTVar7 + 1));
    pFVar11 = (FPCGGraphExecutor *)(pTVar7 + 1);
    if (pFVar11 == (FPCGGraphExecutor *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14a019586;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar11->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar11->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14a019586:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98 = pFVar11;
  local_90 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res8[0] = '\0';
  UPCGComponent::SetGraphLocal
            (*(UPCGComponent **)(*(longlong *)this + 8),(UPCGGraphInterface *)param_1);
  pUVar4 = *(UPCGGraphInterface **)(*(longlong *)(*(longlong *)this + 8) + 600);
  pFVar9 = ::FName::FName(&local_res10,L"FloatConstant");
  UPCGGraphInterface::SetGraphParameter<double>(pUVar4,*pFVar9,&local_res20);
  pUVar4 = *(UPCGGraphInterface **)(*(longlong *)(*(longlong *)this + 8) + 600);
  pFVar9 = ::FName::FName(local_a8,L"AnotherConstant");
  UPCGGraphInterface::SetGraphParameter<double>(pUVar4,*pFVar9,&param_3);
  if ((local_98 == (FPCGGraphExecutor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar8;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pTVar7 = (TReferenceControllerBase<1> *)(*(longlong *)(*(longlong *)this + 8) + 0xc0);
  if (*(longlong *)(*(longlong *)this + 8) == 0) {
    pTVar7 = pTVar12;
  }
  uVar10 = FPCGGraphExecutor::Schedule
                     (local_98,(IPCGGraphExecutionSource *)pTVar7,&local_78,(FPCGStack *)0x0);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (*(longlong *)(*(longlong *)this + 8) != 0) {
    *(ulong64 *)(*(longlong *)(*(longlong *)this + 8) + 0x370) = uVar10;
  }
  if ((local_98 == (FPCGGraphExecutor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar8;
  }
  pFVar11 = local_98;
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_88.AllocatorInstance,1,&local_88.ArrayMax);
  *(ulong64 *)local_88.AllocatorInstance.Data = uVar10;
  local_68[0] = (code *)0x0;
  pTVar7 = (TReferenceControllerBase<1> *)(*(longlong *)(*(longlong *)this + 8) + 0xc0);
  if (*(longlong *)(*(longlong *)this + 8) == 0) {
    pTVar7 = pTVar12;
  }
  local_40 = FMemory::Malloc(0x28,8);
  *local_40 = &UE::Core::Private::Function::
               TFunction_OwnedObject<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_40[1] = __return_storage_ptr__;
  local_40[2] = &local_98;
  local_40[3] = uVar10;
  local_40[4] = local_res8;
  if (local_40 + 1 != (undefined8 *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool>
                  ::Call;
  }
  FPCGGraphExecutor::ScheduleGeneric
            (pFVar11,(TFunction<bool___cdecl(void)> *)local_68,(IPCGGraphExecutionSource *)pTVar7,
             &local_88);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  while( true ) {
    if (local_res8[0] != '\0') {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      return __return_storage_ptr__;
    }
    if ((local_98 == (FPCGGraphExecutor *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) break;
    FPCGGraphExecutor::Execute(local_98);
  }
  pcVar5 = (code *)swi(3);
  pTVar8 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar8;
}

// operator() @ 14a01a010

bool __thiscall
`FPCGCollapseSubgraphCombinationOfCollapses::RunTest'::__l2::<lambda_2>::operator()
          (void *this,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,FString *param_3
          )

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  FString local_128;
  FString local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8 [2];
  double local_98;
  double local_80;
  double local_68;
  
  pFVar2 = *(FAutomationTestBase **)this;
  iVar13 = param_1->ArrayNum;
  iVar1 = param_2->ArrayNum;
  ::FString::PrintfImpl(&local_128,L"%s: Same number of points");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar14.Data = local_128.Data.AllocatorInstance.Data;
  }
  bVar10 = FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)FVar14.Data,iVar1,iVar13);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  fVar9 = __real_38d1b717;
  if (bVar10) {
    iVar13 = param_1->ArrayNum;
    uVar15 = 0;
    if (0 < iVar13) {
      lVar16 = 0;
      do {
        pFVar2 = *(FAutomationTestBase **)this;
        uVar12 = 0;
        if ((int)uVar15 < iVar13) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_f8 = *(double *)(pFVar3 + lVar16 + 0x30);
        pFVar3 = pFVar3 + lVar16 + 0x20;
        dVar5 = *(double *)pFVar3;
        dVar6 = *(double *)(pFVar3 + 8);
        uVar12 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        local_108 = dVar5;
        dStack_100 = dVar6;
        local_80 = local_f8;
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        local_98 = *(double *)(pFVar3 + lVar16 + 0x30);
        pFVar3 = pFVar3 + lVar16 + 0x20;
        dVar7 = *(double *)pFVar3;
        dVar8 = *(double *)(pFVar3 + 8);
        local_68 = local_98;
        ::FString::PrintfImpl(&local_118,L"%s: Same position");
        local_e8._s_0.Z = local_80;
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_118.Data.ArrayNum != 0) {
          FVar14.Data = local_118.Data.AllocatorInstance.Data;
        }
        local_c8[0]._s_0.Z = local_68;
        local_e8._s_0.X = dVar5;
        local_e8._s_0.Y = dVar6;
        local_c8[0]._0_8_ = dVar7;
        local_c8[0]._8_8_ = dVar8;
        bVar10 = FAutomationTestBase::TestEqual
                           (pFVar2,(wchar_t *)FVar14.Data,(TVector<double> *)&local_c8[0]._s_0,
                            (TVector<double> *)&local_e8._s_0,fVar9);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (!bVar10) goto LAB_14a01a26d;
        iVar13 = param_1->ArrayNum;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x60;
      } while ((int)uVar15 < iVar13);
    }
    bVar10 = true;
  }
  else {
LAB_14a01a26d:
    bVar10 = false;
  }
  return bVar10;
}

