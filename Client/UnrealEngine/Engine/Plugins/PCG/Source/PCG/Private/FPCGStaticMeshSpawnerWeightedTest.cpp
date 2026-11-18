// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149ffd3a0

EAutomationTestFlags __thiscall
FPCGStaticMeshSpawnerWeightedTest::GetTestFlags(FPCGStaticMeshSpawnerWeightedTest *this)

{
  return EngineFilter|Disabled|EditorContext;
}

// IsStressTest @ 149ffd3b0

bool __thiscall
FPCGStaticMeshSpawnerWeightedTest::IsStressTest(FPCGStaticMeshSpawnerWeightedTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149ffd3c0

uint __thiscall
FPCGStaticMeshSpawnerWeightedTest::GetRequiredDeviceNum(FPCGStaticMeshSpawnerWeightedTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149ffd3d0

FString * __thiscall
FPCGStaticMeshSpawnerWeightedTest::GetTestSourceFileName
          (FPCGStaticMeshSpawnerWeightedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149ffd400

int __thiscall
FPCGStaticMeshSpawnerWeightedTest::GetTestSourceFileLine(FPCGStaticMeshSpawnerWeightedTest *this)

{
  return 0x17;
}

// GetTests @ 149ffd410

/* WARNING: Removing unreachable block (ram,0x000149ffd4fd) */
/* WARNING: Removing unreachable block (ram,0x000149ffd5c8) */

void __thiscall
FPCGStaticMeshSpawnerWeightedTest::GetTests
          (FPCGStaticMeshSpawnerWeightedTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.StaticMeshSpawner.Weighted");
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

// RunTest @ 149ffd5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FPCGStaticMeshSpawnerWeightedTest::RunTest(FPCGStaticMeshSpawnerWeightedTest *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  TConsoleVariableData<bool> *pTVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  UClass *pUVar15;
  size_t sVar16;
  UObject *pUVar17;
  UObject *pUVar18;
  UObject *pUVar19;
  UObject *pUVar20;
  UPCGPointArrayData *pUVar21;
  undefined1 (*pauVar22) [16];
  int *piVar23;
  UObject *pUVar24;
  FPCGDataPtrWrapper *this_00;
  FPCGMeshSelectorWeightedEntry *pFVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_4e8 [32];
  TArray<FPCGMeshSelectorWeightedEntry,TSizedDefaultAllocator<32>_> local_4a8;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  FTestData local_478;
  AActor *local_3e8;
  UObject *local_3e0;
  UObject *local_3d8;
  UObject *local_3d0;
  wchar_t *local_3c8;
  undefined8 uStack_3c0;
  FScriptContainerElement *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  wchar_t *local_3a8;
  undefined8 uStack_3a0;
  FScriptContainerElement *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  wchar_t *local_388;
  undefined8 uStack_380;
  FScriptContainerElement *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  FString local_368;
  FString local_358;
  FString local_348;
  longlong local_338;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  undefined1 local_320 [24];
  FUtf8String local_308;
  undefined1 local_2f8 [24];
  FUtf8String local_2e0;
  undefined1 local_2d0 [24];
  FUtf8String local_2b8;
  TStringView<wchar_t> local_2a8;
  TStringView<wchar_t> local_298;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_1e8;
  TObjectPtr<UPCGData_const_>_u_0 local_1b8;
  undefined8 local_1b0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_1a8;
  UPCGData *local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  undefined1 local_118 [96];
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  pUVar15 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  pUVar24 = (UObject *)0x0;
  local_478.Seed = 0x2a;
  local_478.InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.InputData.TaggedData.ArrayNum = 0;
  local_478.InputData.TaggedData.ArrayMax = 0;
  local_478.InputData.bCancelExecutionOnEmpty = false;
  local_478.InputData.bCancelExecution = false;
  local_478.InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.InputData.DataCrcs.ArrayNum = 0;
  local_478.InputData.DataCrcs.ArrayMax = 0;
  local_478.InputData.InactiveOutputPinBitmask = 0;
  local_478.OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.OutputData.TaggedData.ArrayNum = 0;
  local_478.OutputData.TaggedData.ArrayMax = 0;
  local_478.OutputData.bCancelExecutionOnEmpty = false;
  local_478.OutputData.bCancelExecution = false;
  local_478.OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.OutputData.DataCrcs.ArrayNum = 0;
  local_478.OutputData.DataCrcs.ArrayMax = 0;
  local_478.OutputData.InactiveOutputPinBitmask = 0;
  local_478.TestActor = (AActor *)0x0;
  local_478.TestPCGComponent = (UPCGComponent *)0x0;
  local_478.Settings = (UPCGSettings *)0x0;
  local_1e8._0_8_ = 0;
  local_1e8._40_8_ = 0;
  local_478.RandomStream.InitialSeed = 0x2a;
  local_478.RandomStream.Seed = 0x2a;
  PCGTestsCommon::GenerateSettings<UPCGStaticMeshSpawnerSettings>(&local_478,&local_1e8);
  ::FString::FString(&local_348,L"StaticMesh\'/Engine/BasicShapes/Cube.Cube\'");
  ::FString::FString(&local_358,L"StaticMesh\'/Engine/BasicShapes/Sphere.Sphere\'");
  ::FString::FString(&local_368,L"StaticMesh\'/Engine/BasicShapes/Cylinder.Cylinder\'");
  uStack_3c0._0_4_ = 0;
  uStack_3c0._4_4_ = 0;
  local_3c8 = (wchar_t *)0x0;
  iVar14 = 0;
  if (local_348.Data.ArrayNum == 0) {
    local_3b8 = (FScriptContainerElement *)0x15060d16c;
LAB_149ffd752:
    sVar16 = wcslen((wchar_t *)local_3b8);
    iStack_3b0 = (int)sVar16;
  }
  else {
    local_3b8 = local_348.Data.AllocatorInstance.Data;
    iStack_3b0 = iVar14;
    if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_149ffd752;
  }
  pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
  local_298._12_4_ = uStack_3ac;
  local_298.Size = iStack_3b0;
  local_2a8.DataPtr = local_3c8;
  local_2a8.Size = (int)uStack_3c0;
  local_2a8._12_4_ = uStack_3c0._4_4_;
  local_298.DataPtr = (wchar_t *)local_3b8;
  pUVar17 = StaticLoadObject(pUVar15,(UObject *)0x0,&local_298,&local_2a8,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if (pUVar17 == (UObject *)0x0) {
LAB_149ffd7cd:
    pUVar17 = pUVar24;
  }
  else {
    pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar17->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar17->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar15->_padding_)) goto LAB_149ffd7cd;
  }
  uStack_3a0._0_4_ = 0;
  uStack_3a0._4_4_ = 0;
  local_3a8 = (wchar_t *)0x0;
  if (local_358.Data.ArrayNum == 0) {
    local_398 = (FScriptContainerElement *)0x15060d16c;
LAB_149ffd7fb:
    sVar16 = wcslen((wchar_t *)local_398);
    iStack_390 = (int)sVar16;
  }
  else {
    local_398 = local_358.Data.AllocatorInstance.Data;
    iStack_390 = iVar14;
    if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_149ffd7fb;
  }
  pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
  local_278._12_4_ = uStack_38c;
  local_278.Size = iStack_390;
  local_288.DataPtr = local_3a8;
  local_288.Size = (int)uStack_3a0;
  local_288._12_4_ = uStack_3a0._4_4_;
  local_278.DataPtr = (wchar_t *)local_398;
  pUVar18 = StaticLoadObject(pUVar15,(UObject *)0x0,&local_278,&local_288,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if (pUVar18 == (UObject *)0x0) {
LAB_149ffd876:
    pUVar18 = pUVar24;
  }
  else {
    pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar15->_padding_)) goto LAB_149ffd876;
  }
  uStack_380._0_4_ = 0;
  uStack_380._4_4_ = 0;
  local_388 = (wchar_t *)0x0;
  if (local_368.Data.ArrayNum == 0) {
    local_378 = (FScriptContainerElement *)0x15060d16c;
LAB_149ffd8a1:
    sVar16 = wcslen((wchar_t *)local_378);
    iVar14 = (int)sVar16;
  }
  else {
    local_378 = local_368.Data.AllocatorInstance.Data;
    if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_149ffd8a1;
  }
  iStack_370 = iVar14;
  pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
  local_258._12_4_ = uStack_36c;
  local_258.Size = iStack_370;
  local_268.DataPtr = local_388;
  local_268.Size = (int)uStack_380;
  local_268._12_4_ = uStack_380._4_4_;
  local_258.DataPtr = (wchar_t *)local_378;
  pUVar19 = StaticLoadObject(pUVar15,(UObject *)0x0,&local_258,&local_268,0,(UPackageMap *)0x0,true,
                             (FLinkerInstancingContext *)0x0);
  if (pUVar19 == (UObject *)0x0) {
LAB_149ffd91f:
    pUVar19 = pUVar24;
  }
  else {
    pUVar15 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar14 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar15->_padding_)) goto LAB_149ffd91f;
  }
  pTVar11 = CVarPCGEnablePointArrayData.Ref;
  bVar12 = IsInParallelGameThread();
  if (!bVar12) {
    bVar12 = IsInGameThread();
    pUVar20 = (UObject *)&DAT_00000001;
    if (!bVar12) goto LAB_149ffd943;
  }
  pUVar20 = pUVar24;
LAB_149ffd943:
  if ((&pUVar20->field_0x0)[(longlong)pTVar11->ShadowedValue] == '\0') {
    pUVar21 = (UPCGPointArrayData *)PCGTestsCommon::CreateEmptyPointData<UPCGPointData,0>();
  }
  else {
    pUVar21 = PCGTestsCommon::CreateEmptyPointData<UPCGPointArrayData,0>();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (UPCGPointArrayData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  local_3e8 = local_478.TestActor;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_478.TestActor != (AActor *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_478.TestActor);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar21->_padding_,(FObjectPtr)&local_3e8);
  (**(code **)(pUVar21->_padding_ + 0x490))(pUVar21,1000,1);
  (**(code **)(pUVar21->_padding_ + 0x548))(pUVar21,__real_3f800000);
  (**(code **)(pUVar21->_padding_ + 0x4c0))(pUVar21,&local_138,1);
  (**(code **)(pUVar21->_padding_ + 0x4f0))(pUVar21,&local_338,1);
  do {
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
    iVar14 = (int)pUVar24;
    local_218 = 0;
    uStack_210 = 0;
    uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_248._8_4_ = uVar27;
    local_248._0_8_ = (double)fVar3;
    local_248._12_4_ = uVar28;
    uVar29 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_238._8_4_ = uVar29;
    local_238._0_8_ = (double)fVar5;
    local_238._12_4_ = uVar30;
    dVar26 = (double)iVar14;
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
    uStack_220 = 0;
    uVar31 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_208._8_4_ = uVar31;
    local_208._0_8_ = (double)fVar4;
    local_208._12_4_ = uVar32;
    uVar33 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    uVar34 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_1f8._8_4_ = uVar33;
    local_1f8._0_8_ = (double)fVar6;
    local_1f8._12_4_ = uVar34;
    local_228 = dVar26;
    if ((local_128 <= iVar14) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return (bool)uVar13;
    }
    if (iVar14 == iVar14 % local_12c) {
      pauVar22 = (undefined1 (*) [16])
                 ((longlong)(iVar14 % local_12c) * (longlong)local_130 + local_138);
    }
    else {
      pauVar22 = (undefined1 (*) [16])local_118;
    }
    auVar7._8_4_ = uVar27;
    auVar7._0_8_ = (double)fVar3;
    auVar7._12_4_ = uVar28;
    *pauVar22 = auVar7;
    auVar8._8_4_ = uVar29;
    auVar8._0_8_ = (double)fVar5;
    auVar8._12_4_ = uVar30;
    pauVar22[1] = auVar8;
    *(double *)pauVar22[2] = dVar26;
    *(undefined8 *)(pauVar22[2] + 8) = 0;
    *(undefined8 *)pauVar22[3] = 0;
    *(undefined8 *)(pauVar22[3] + 8) = 0;
    auVar9._8_4_ = uVar31;
    auVar9._0_8_ = (double)fVar4;
    auVar9._12_4_ = uVar32;
    pauVar22[4] = auVar9;
    auVar10._8_4_ = uVar33;
    auVar10._0_8_ = (double)fVar6;
    auVar10._12_4_ = uVar34;
    pauVar22[5] = auVar10;
    if ((local_328 <= iVar14) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                            ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar2 = (code *)swi(3);
      uVar13 = (*pcVar2)();
      return (bool)uVar13;
    }
    if (iVar14 == iVar14 % local_32c) {
      piVar23 = (int *)((longlong)(iVar14 % local_32c) * (longlong)local_330 + local_338);
    }
    else {
      piVar23 = &local_324;
    }
    *piVar23 = iVar14;
    pUVar24 = (UObject *)(ulonglong)(iVar14 + 1U);
  } while ((int)(iVar14 + 1U) < 1000);
  local_150 = 0x100;
  local_1b8.DebugPtr = (UPCGData *)0x0;
  local_1a8.Hash.InlineData[0] = '\0';
  local_1a8.Hash.InlineData[1] = '\0';
  local_1a8.Hash.InlineData[2] = '\0';
  local_1a8.Hash.InlineData[3] = '\0';
  local_1a8.Hash._padding_ = 0;
  local_1a8._72_8_ = 0;
  local_1a8.Elements._16_8_ = 0;
  local_1a8.Elements._24_8_ = 0;
  local_1b0 = 0;
  local_1a8.Elements._0_8_ = 0;
  local_1a8.Elements._8_8_ = 0;
  local_1a8.Elements._32_8_ = 0;
  local_1a8.Elements._40_4_ = 0;
  local_1a8.Elements._44_4_ = 0x80;
  local_1a8.Elements._48_4_ = 0xffffffff;
  local_1a8.Elements._52_4_ = 0;
  local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_158 = (UPCGData *)0x0;
  local_14c = 0;
  local_144 = 0xffffffff;
  iVar14 = local_478.InputData.TaggedData.ArrayNum;
  if (local_478.InputData.TaggedData.ArrayNum == local_478.InputData.TaggedData.ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&local_478.InputData,
                        &local_478.InputData.TaggedData.ArrayMax);
  }
  local_478.InputData.TaggedData.ArrayNum = iVar14 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            (local_478.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar14 * 0x78);
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_00,(FPCGDataPtrWrapper *)&local_1b8.ObjectPtr);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
             &local_1a8);
  this_00[6].Data.field0_0x0.DebugPtr = local_158;
  *(undefined1 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_150;
  *(undefined1 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 1) = local_150._1_1_;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = local_14c;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = local_144;
  local_1a8._72_8_ = local_1a8._72_8_ & 0xffffffff00000000;
  if (local_1a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1a8.Elements);
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_1b8.ObjectPtr);
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar21);
  local_4a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4a8.ArrayNum = 0;
  local_4a8.ArrayMax = 0;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x288,8,&local_4a8.AllocatorInstance,&local_4a8.ArrayMax);
  local_4a8.ArrayNum = iVar14 + 1;
  pFVar25 = (FPCGMeshSelectorWeightedEntry *)
            (local_4a8.AllocatorInstance.Data + (longlong)iVar14 * 0x288);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar17);
  }
  local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_320._16_8_ = 0;
  local_320._8_8_ = 0;
  local_308.Data.ArrayNum = 0;
  local_308.Data.ArrayMax = 0;
  local_320._0_8_ = 0;
  local_498 = 0;
  FUtf8String::Reset(&local_308,0);
  local_3e0 = pUVar17;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar17);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_320,(FObjectPtr)&local_3e0);
  FPCGMeshSelectorWeightedEntry::FPCGMeshSelectorWeightedEntry
            (pFVar25,(TSoftObjectPtr<UStaticMesh> *)local_320,1);
  iVar14 = local_4a8.ArrayNum;
  if (local_4a8.ArrayNum == local_4a8.ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x288,8,&local_4a8.AllocatorInstance,&local_4a8.ArrayMax);
  }
  local_4a8.ArrayNum = iVar14 + 1;
  pFVar25 = (FPCGMeshSelectorWeightedEntry *)
            (local_4a8.AllocatorInstance.Data + (longlong)iVar14 * 0x288);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar18);
  }
  local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8._16_8_ = 0;
  local_2f8._8_8_ = 0;
  local_2e0.Data.ArrayNum = 0;
  local_2e0.Data.ArrayMax = 0;
  local_2f8._0_8_ = 0;
  local_490 = 0;
  FUtf8String::Reset(&local_2e0,0);
  local_3d8 = pUVar18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar18);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_2f8,(FObjectPtr)&local_3d8);
  FPCGMeshSelectorWeightedEntry::FPCGMeshSelectorWeightedEntry
            (pFVar25,(TSoftObjectPtr<UStaticMesh> *)local_2f8,1);
  iVar14 = local_4a8.ArrayNum;
  if (local_4a8.ArrayNum == local_4a8.ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x288,8,&local_4a8.AllocatorInstance,&local_4a8.ArrayMax);
  }
  local_4a8.ArrayNum = iVar14 + 1;
  pFVar25 = (FPCGMeshSelectorWeightedEntry *)
            (local_4a8.AllocatorInstance.Data + (longlong)iVar14 * 0x288);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar19);
  }
  local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0._16_8_ = 0;
  local_2d0._8_8_ = 0;
  local_2b8.Data.ArrayNum = 0;
  local_2b8.Data.ArrayMax = 0;
  local_2d0._0_8_ = 0;
  local_488 = 0;
  FUtf8String::Reset(&local_2b8,0);
  local_3d0 = pUVar19;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar19);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_2d0,(FObjectPtr)&local_3d0);
  FPCGMeshSelectorWeightedEntry::FPCGMeshSelectorWeightedEntry
            (pFVar25,(TSoftObjectPtr<UStaticMesh> *)local_2d0,1);
  TestMeshSelectorWeighted(this,&local_478,&local_4a8,1000,false);
  if ((local_4a8.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x280) = 1;
  if ((local_4a8.ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x508) = 10;
  if ((local_4a8.ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x790) = 1;
  TestMeshSelectorWeighted(this,&local_478,&local_4a8,1000,false);
  if ((local_4a8.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x280) = 1;
  if ((local_4a8.ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x508) = 0;
  if ((local_4a8.ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x790) = 1;
  TestMeshSelectorWeighted(this,&local_478,&local_4a8,1000,false);
  if ((local_4a8.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x280) = 1000;
  if ((local_4a8.ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x508) = 1;
  if ((local_4a8.ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x790) = 1;
  TestMeshSelectorWeighted(this,&local_478,&local_4a8,1000,false);
  if ((local_4a8.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x280) = 0;
  if ((local_4a8.ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x508) = 0;
  if ((local_4a8.ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x790) = 0;
  TestMeshSelectorWeighted(this,&local_478,&local_4a8,0,false);
  if ((local_4a8.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x280) = 1;
  if ((local_4a8.ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x508) = 10;
  if ((local_4a8.ArrayNum < 3) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar2 = (code *)swi(3);
    uVar13 = (*pcVar2)();
    return (bool)uVar13;
  }
  *(int *)(local_4a8.AllocatorInstance.Data + 0x790) = 100;
  TestMeshSelectorWeighted(this,&local_478,&local_4a8,1000,true);
  DestructItems<FPCGMeshSelectorWeightedEntry,int>
            ((FPCGMeshSelectorWeightedEntry *)local_4a8.AllocatorInstance.Data,local_4a8.ArrayNum);
  if ((FPCGMeshSelectorWeightedEntry *)local_4a8.AllocatorInstance.Data !=
      (FPCGMeshSelectorWeightedEntry *)0x0) {
    FMemory::Free(local_4a8.AllocatorInstance.Data);
  }
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (local_478.OutputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.OutputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_478.OutputData.TaggedData.AllocatorInstance.Data,
             local_478.OutputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_478.OutputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_478.OutputData.TaggedData.AllocatorInstance.Data);
  }
  if (local_478.InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.InputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_478.InputData.TaggedData.AllocatorInstance.Data,
             local_478.InputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_478.InputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_478.InputData.TaggedData.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 149ffe530

FString * __thiscall
FPCGStaticMeshSpawnerWeightedTest::GetBeautifiedTestName
          (FPCGStaticMeshSpawnerWeightedTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.StaticMeshSpawner.Weighted");
  return __return_storage_ptr__;
}

