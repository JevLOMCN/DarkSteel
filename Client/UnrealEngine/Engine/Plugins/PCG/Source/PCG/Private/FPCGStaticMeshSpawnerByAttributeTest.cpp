// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149ffbdc0

EAutomationTestFlags __thiscall
FPCGStaticMeshSpawnerByAttributeTest::GetTestFlags(FPCGStaticMeshSpawnerByAttributeTest *this)

{
  return EngineFilter|Disabled|EditorContext;
}

// IsStressTest @ 149ffbdd0

bool __thiscall
FPCGStaticMeshSpawnerByAttributeTest::IsStressTest(FPCGStaticMeshSpawnerByAttributeTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149ffbde0

uint __thiscall
FPCGStaticMeshSpawnerByAttributeTest::GetRequiredDeviceNum
          (FPCGStaticMeshSpawnerByAttributeTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149ffbdf0

FString * __thiscall
FPCGStaticMeshSpawnerByAttributeTest::GetTestSourceFileName
          (FPCGStaticMeshSpawnerByAttributeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGStaticMeshSpawnerTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149ffbe20

int __thiscall
FPCGStaticMeshSpawnerByAttributeTest::GetTestSourceFileLine
          (FPCGStaticMeshSpawnerByAttributeTest *this)

{
  return 0x16;
}

// GetTests @ 149ffbe30

/* WARNING: Removing unreachable block (ram,0x000149ffbf1d) */
/* WARNING: Removing unreachable block (ram,0x000149ffbfe8) */

void __thiscall
FPCGStaticMeshSpawnerByAttributeTest::GetTests
          (FPCGStaticMeshSpawnerByAttributeTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.StaticMeshSpawner.ByAttribute");
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

// RunTest @ 149ffc010

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
FPCGStaticMeshSpawnerByAttributeTest::RunTest
          (FPCGStaticMeshSpawnerByAttributeTest *this,FString *param_1)

{
  int iVar1;
  UPCGMetadata *pUVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ForAnyElementType FVar16;
  FName FVar17;
  FName FVar18;
  bool bVar19;
  undefined1 uVar20;
  int iVar21;
  UClass *pUVar22;
  UPCGBasePointData *pUVar23;
  FString *pFVar24;
  FSoftObjectPath *pFVar25;
  undefined1 (*pauVar26) [16];
  uint *puVar27;
  long64 *plVar28;
  size_t sVar29;
  FName FVar30;
  FPCGDataPtrWrapper *this_00;
  uint uVar31;
  longlong lVar32;
  FScriptContainerElement *_Src;
  undefined1 auStackY_758 [32];
  TArray<_anonymous_namespace_::FPCGByAttributeValidationData,TSizedDefaultAllocator<32>_> local_718
  ;
  FSoftObjectPath local_708;
  FSoftObjectPath local_6e8;
  FName local_6c8;
  FName local_6c0;
  FName local_6b8;
  FSoftObjectPath local_6b0;
  FSoftObjectPath local_690;
  FSoftObjectPath local_670;
  FTestData local_648;
  undefined8 local_5b8;
  FSoftObjectPath local_5b0;
  FSoftObjectPath local_590;
  AActor *local_570;
  longlong local_568;
  int local_560;
  int local_55c;
  int local_558;
  uint local_554;
  undefined8 local_550;
  FSoftObjectPath local_548;
  undefined8 local_528;
  FSoftObjectPath local_520;
  undefined8 local_500;
  FSoftObjectPath local_4f8;
  wchar_t *local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  wchar_t *local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  wchar_t *local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  longlong local_4a8;
  int local_4a0;
  int local_49c;
  int local_498;
  long64 local_490;
  wchar_t *local_488;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  FSoftObjectPath local_478;
  FSoftObjectPath local_458;
  FSoftObjectPath local_438;
  TStringView<wchar_t> local_418;
  TStringView<wchar_t> local_408;
  TStringView<wchar_t> local_3f8;
  FString local_3e8;
  undefined8 local_3d8;
  FSoftObjectPath local_3d0;
  undefined8 local_3b0;
  FSoftObjectPath local_3a8;
  undefined8 local_388;
  FSoftObjectPath local_380;
  undefined8 local_360;
  FSoftObjectPath local_358;
  TStringView<wchar_t> local_338;
  undefined8 local_328;
  FSoftObjectPath local_320;
  undefined8 local_300;
  FSoftObjectPath local_2f8;
  undefined8 local_2d8;
  FSoftObjectPath local_2d0;
  undefined8 local_2b0;
  FSoftObjectPath local_2a8;
  undefined8 local_288;
  FSoftObjectPath local_280;
  undefined8 local_260;
  FSoftObjectPath local_258;
  undefined8 local_238;
  FSoftObjectPath local_230;
  FString local_210;
  FString local_200;
  FString local_1f0;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_1d8;
  TObjectPtr<UPCGData_const_>_u_0 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [24];
  undefined8 uStack_180;
  void *local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 local_164;
  ForElementType<FSetElementId> local_160;
  ulonglong local_150;
  UPCGData *local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  int local_120;
  int local_11c;
  int local_118;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_758;
  pUVar22 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar22);
  }
  uVar31 = 0;
  local_648.Seed = 0x2a;
  local_648.InputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.InputData.TaggedData.ArrayNum = 0;
  local_648.InputData.TaggedData.ArrayMax = 0;
  local_648.InputData.bCancelExecutionOnEmpty = false;
  local_648.InputData.bCancelExecution = false;
  local_648.InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.InputData.DataCrcs.ArrayNum = 0;
  local_648.InputData.DataCrcs.ArrayMax = 0;
  local_648.InputData.InactiveOutputPinBitmask = 0;
  local_648.OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.OutputData.TaggedData.ArrayNum = 0;
  local_648.OutputData.TaggedData.ArrayMax = 0;
  local_648.OutputData.bCancelExecutionOnEmpty = false;
  local_648.OutputData.bCancelExecution = false;
  local_648.OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_648.OutputData.DataCrcs.ArrayNum = 0;
  local_648.OutputData.DataCrcs.ArrayMax = 0;
  local_648.OutputData.InactiveOutputPinBitmask = 0;
  local_648.TestActor = (AActor *)0x0;
  local_648.TestPCGComponent = (UPCGComponent *)0x0;
  local_648.Settings = (UPCGSettings *)0x0;
  local_1d8._0_8_ = 0;
  local_1d8._40_8_ = 0;
  local_648.RandomStream.InitialSeed = 0x2a;
  local_648.RandomStream.Seed = 0x2a;
  PCGTestsCommon::GenerateSettings<UPCGStaticMeshSpawnerSettings>(&local_648,&local_1d8);
  ::FName::FName(&local_6c8,"Rock");
  ::FName::FName(&local_6c0,"Tree");
  ::FName::FName(&local_6b8,"Bush");
  uStack_480 = 0x29;
  local_488 = L"StaticMesh\'/Engine/BasicShapes/Cube.Cube\'";
  local_418._12_4_ = uStack_47c;
  local_418.Size = 0x29;
  local_418.DataPtr = L"StaticMesh\'/Engine/BasicShapes/Cube.Cube\'";
  local_690.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_690.AssetPath.PackageName.Number = 0;
  local_690.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_690.AssetPath.AssetName.Number = 0;
  local_690.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_690.SubPathString.Data.ArrayNum = 0;
  local_690.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_690,&local_418);
  uStack_4d0 = 0x2d;
  local_4d8 = L"StaticMesh\'/Engine/BasicShapes/Sphere.Sphere\'";
  local_408._12_4_ = uStack_4cc;
  local_408.Size = 0x2d;
  local_408.DataPtr = L"StaticMesh\'/Engine/BasicShapes/Sphere.Sphere\'";
  local_670.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_670.AssetPath.PackageName.Number = 0;
  local_670.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_670.AssetPath.AssetName.Number = 0;
  local_670.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_670.SubPathString.Data.ArrayNum = 0;
  local_670.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_670,&local_408);
  uStack_4c0 = 0x31;
  local_4c8 = L"StaticMesh\'/Engine/BasicShapes/Cylinder.Cylinder\'";
  local_3f8._12_4_ = uStack_4bc;
  local_3f8.Size = 0x31;
  local_3f8.DataPtr = L"StaticMesh\'/Engine/BasicShapes/Cylinder.Cylinder\'";
  local_6e8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_6e8.AssetPath.PackageName.Number = 0;
  local_6e8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_6e8.AssetPath.AssetName.Number = 0;
  local_6e8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.SubPathString.Data.ArrayNum = 0;
  local_6e8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_6e8,&local_3f8);
  uStack_4b0 = 0x29;
  local_4b8 = L"StaticMesh\'/Engine/BasicShapes/Cone.Cone\'";
  local_338._12_4_ = uStack_4ac;
  local_338.Size = 0x29;
  local_338.DataPtr = L"StaticMesh\'/Engine/BasicShapes/Cone.Cone\'";
  local_6b0.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_6b0.AssetPath.PackageName.Number = 0;
  local_6b0.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_6b0.AssetPath.AssetName.Number = 0;
  local_6b0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b0.SubPathString.Data.ArrayNum = 0;
  local_6b0.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_6b0,&local_338);
  FVar16.Data = local_690.SubPathString.Data.AllocatorInstance.Data;
  sVar29 = (size_t)local_690.SubPathString.Data.ArrayNum;
  local_590.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.SubPathString.Data.ArrayNum = local_690.SubPathString.Data.ArrayNum;
  local_590.AssetPath.PackageName = local_690.AssetPath.PackageName;
  local_590.AssetPath.AssetName = local_690.AssetPath.AssetName;
  if (local_690.SubPathString.Data.ArrayNum == 0) {
    local_590.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_690.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_590.SubPathString,local_690.SubPathString.Data.ArrayNum,
               &local_590.SubPathString.Data.ArrayMax);
    memcpy(local_590.SubPathString.Data.AllocatorInstance.Data,FVar16.Data,sVar29);
  }
  local_550 = 0;
  FSoftObjectPath::FSoftObjectPath(&local_548,&local_590);
  if (local_590.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_590.SubPathString.Data.AllocatorInstance.Data);
  }
  local_478.AssetPath.PackageName = local_670.AssetPath.PackageName;
  local_478.AssetPath.AssetName = local_670.AssetPath.AssetName;
  local_478.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
            (&local_478.SubPathString.Data,
             (uchar *)local_670.SubPathString.Data.AllocatorInstance.Data,
             local_670.SubPathString.Data.ArrayNum,0);
  local_528 = 0;
  FSoftObjectPath::FSoftObjectPath(&local_520,&local_478);
  if (local_478.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.SubPathString.Data.AllocatorInstance.Data);
  }
  local_458.AssetPath.PackageName = local_6e8.AssetPath.PackageName;
  local_458.AssetPath.AssetName = local_6e8.AssetPath.AssetName;
  local_458.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
            (&local_458.SubPathString.Data,
             (uchar *)local_6e8.SubPathString.Data.AllocatorInstance.Data,
             local_6e8.SubPathString.Data.ArrayNum,0);
  local_500 = 0;
  FSoftObjectPath::FSoftObjectPath(&local_4f8,&local_458);
  if (local_458.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.SubPathString.Data.AllocatorInstance.Data);
  }
  local_438.AssetPath.PackageName = local_6b0.AssetPath.PackageName;
  local_438.AssetPath.AssetName = local_6b0.AssetPath.AssetName;
  local_438.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<char8_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<char8_t,int>
            (&local_438.SubPathString.Data,
             (uchar *)local_6b0.SubPathString.Data.AllocatorInstance.Data,
             local_6b0.SubPathString.Data.ArrayNum,0);
  local_5b8 = 0;
  FSoftObjectPath::FSoftObjectPath(&local_5b0,&local_438);
  if (local_438.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.SubPathString.Data.AllocatorInstance.Data);
  }
  pUVar23 = PCGTestsCommon::CreateEmptyBasePointData();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar23 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar23);
  }
  local_570 = local_648.TestActor;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_648.TestActor != (AActor *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_648.TestActor);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar23->_padding_,(FObjectPtr)&local_570);
  pUVar2 = (UPCGMetadata *)pUVar23->_padding_;
  pFVar24 = FSoftObjectPath::ToString(&local_6b0,&local_1f0);
  UPCGMetadata::CreateStringAttribute(pUVar2,local_6c8,pFVar24,false,true);
  pUVar2 = (UPCGMetadata *)pUVar23->_padding_;
  pFVar24 = FSoftObjectPath::ToString(&local_6b0,&local_200);
  UPCGMetadata::CreateStringAttribute(pUVar2,local_6c0,pFVar24,false,true);
  pUVar2 = (UPCGMetadata *)pUVar23->_padding_;
  pFVar24 = FSoftObjectPath::ToString(&local_6b0,&local_210);
  UPCGMetadata::CreateStringAttribute(pUVar2,local_6b8,pFVar24,false,true);
  (**(code **)(pUVar23->_padding_ + 0x490))(pUVar23,100,1);
  (**(code **)(pUVar23->_padding_ + 0x548))(pUVar23,__real_3f800000);
  (**(code **)(pUVar23->_padding_ + 0x4c0))(pUVar23,&local_128,1);
  (**(code **)(pUVar23->_padding_ + 0x4f0))(pUVar23,&local_568,1);
  (**(code **)(pUVar23->_padding_ + 0x4f8))(pUVar23,&local_4a8,1);
  do {
    fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
    if (local_118 <= (int)uVar31) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar19) {
        pcVar3 = (code *)swi(3);
        uVar20 = (*pcVar3)();
        return (bool)uVar20;
      }
    }
    if (uVar31 == (int)uVar31 % local_11c) {
      pauVar26 = (undefined1 (*) [16])
                 ((longlong)((int)uVar31 % local_11c) * (longlong)local_120 + local_128);
    }
    else {
      pauVar26 = (undefined1 (*) [16])local_108;
    }
    auVar12._8_4_ = SUB84((double)fVar6,0);
    auVar12._0_8_ = (double)fVar4;
    auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    *pauVar26 = auVar12;
    auVar13._8_4_ = SUB84((double)fVar10,0);
    auVar13._0_8_ = (double)fVar8;
    auVar13._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
    pauVar26[1] = auVar13;
    *(double *)pauVar26[2] = (double)(int)uVar31;
    *(undefined8 *)(pauVar26[2] + 8) = 0;
    *(undefined8 *)pauVar26[3] = 0;
    *(undefined8 *)(pauVar26[3] + 8) = 0;
    auVar14._8_4_ = SUB84((double)fVar7,0);
    auVar14._0_8_ = (double)fVar5;
    auVar14._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
    pauVar26[4] = auVar14;
    auVar15._8_4_ = SUB84((double)fVar11,0);
    auVar15._0_8_ = (double)fVar9;
    auVar15._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
    pauVar26[5] = auVar15;
    if (local_558 <= (int)uVar31) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar19) {
        pcVar3 = (code *)swi(3);
        uVar20 = (*pcVar3)();
        return (bool)uVar20;
      }
    }
    FVar30 = local_6b8;
    FVar18 = local_6c0;
    FVar17 = local_6c8;
    FVar16.Data = local_6e8.SubPathString.Data.AllocatorInstance.Data;
    if (uVar31 == (int)uVar31 % local_55c) {
      puVar27 = (uint *)((longlong)((int)uVar31 % local_55c) * (longlong)local_560 + local_568);
    }
    else {
      puVar27 = &local_554;
    }
    *puVar27 = uVar31;
    local_708.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_708.SubPathString.Data.ArrayNum = 0;
    local_708.SubPathString.Data.ArrayMax = 0;
    if (uVar31 < 0x14) {
      pFVar25 = &local_690;
      if (9 < uVar31) {
        pFVar25 = &local_670;
      }
      local_708.AssetPath.PackageName = (pFVar25->AssetPath).PackageName;
      local_708.AssetPath.AssetName = (pFVar25->AssetPath).AssetName;
      FVar30 = local_6c8;
      if (&local_708.SubPathString != &pFVar25->SubPathString) {
        local_708.SubPathString.Data.ArrayNum = (pFVar25->SubPathString).Data.ArrayNum;
        sVar29 = (size_t)local_708.SubPathString.Data.ArrayNum;
        _Src = (pFVar25->SubPathString).Data.AllocatorInstance.Data;
        local_708.SubPathString.Data.ArrayMax = 0;
        if (local_708.SubPathString.Data.ArrayNum != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_708.SubPathString.Data.ArrayNum,0,
                     (ForAnyElementType *)&local_708.SubPathString,
                     local_708.SubPathString.Data.ArrayNum,&local_708.SubPathString.Data.ArrayMax);
          FVar30 = FVar17;
LAB_149ffc82a:
          memcpy(local_708.SubPathString.Data.AllocatorInstance.Data,_Src,sVar29);
        }
      }
    }
    else if (uVar31 < 0x46) {
      if (uVar31 < 0x23) {
        pFVar25 = &local_690;
      }
      else {
        pFVar25 = &local_670;
        if (0x31 < uVar31) {
          pFVar25 = &local_6e8;
        }
      }
      local_708.AssetPath.PackageName = (pFVar25->AssetPath).PackageName;
      local_708.AssetPath.AssetName = (pFVar25->AssetPath).AssetName;
      FVar30 = local_6c0;
      if (&local_708.SubPathString != &pFVar25->SubPathString) {
        local_708.SubPathString.Data.ArrayNum = (pFVar25->SubPathString).Data.ArrayNum;
        sVar29 = (size_t)local_708.SubPathString.Data.ArrayNum;
        _Src = (pFVar25->SubPathString).Data.AllocatorInstance.Data;
        local_708.SubPathString.Data.ArrayMax = 0;
        if (local_708.SubPathString.Data.ArrayNum != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_708.SubPathString.Data.ArrayNum,0,
                     (ForAnyElementType *)&local_708.SubPathString,
                     local_708.SubPathString.Data.ArrayNum,&local_708.SubPathString.Data.ArrayMax);
          FVar30 = FVar18;
          goto LAB_149ffc82a;
        }
      }
    }
    else {
      sVar29 = (size_t)local_6e8.SubPathString.Data.ArrayNum;
      local_708.SubPathString.Data._8_8_ = local_6e8.SubPathString.Data._8_8_ & 0xffffffff;
      local_708.AssetPath.PackageName = local_6e8.AssetPath.PackageName;
      local_708.AssetPath.AssetName = local_6e8.AssetPath.AssetName;
      iVar21 = 0;
      if (local_6e8.SubPathString.Data.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_6e8.SubPathString.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_708.SubPathString,
                   local_6e8.SubPathString.Data.ArrayNum,&local_708.SubPathString.Data.ArrayMax);
        memcpy(local_708.SubPathString.Data.AllocatorInstance.Data,FVar16.Data,sVar29);
        iVar21 = local_708.SubPathString.Data.ArrayMax;
      }
      pFVar25 = &local_690;
      if (0x54 < uVar31) {
        pFVar25 = &local_6e8;
      }
      local_708.AssetPath.PackageName = (pFVar25->AssetPath).PackageName;
      local_708.AssetPath.AssetName = (pFVar25->AssetPath).AssetName;
      if (&local_708.SubPathString != &pFVar25->SubPathString) {
        iVar1 = (pFVar25->SubPathString).Data.ArrayNum;
        sVar29 = (size_t)iVar1;
        _Src = (pFVar25->SubPathString).Data.AllocatorInstance.Data;
        local_708.SubPathString.Data.ArrayNum = iVar1;
        if ((iVar1 == 0) && (iVar21 == 0)) {
          local_708.SubPathString.Data.ArrayNum = 0;
          local_708.SubPathString.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar1,iVar21,(ForAnyElementType *)&local_708.SubPathString,iVar1,
                     &local_708.SubPathString.Data.ArrayMax);
          if (iVar1 != 0) goto LAB_149ffc82a;
        }
      }
    }
    pFVar24 = FSoftObjectPath::ToString(&local_708,&local_3e8);
    pUVar2 = (UPCGMetadata *)pUVar23->_padding_;
    if (local_498 <= (int)uVar31) {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar19) {
        pcVar3 = (code *)swi(3);
        uVar20 = (*pcVar3)();
        return (bool)uVar20;
      }
    }
    if (uVar31 == (int)uVar31 % local_49c) {
      plVar28 = (long64 *)((longlong)((int)uVar31 % local_49c) * (longlong)local_4a0 + local_4a8);
    }
    else {
      plVar28 = &local_490;
    }
    UPCGMetadataAccessorHelpers::SetStringAttributeByMetadataKey(plVar28,pUVar2,FVar30,pFVar24);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (local_708.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.SubPathString.Data.AllocatorInstance.Data);
    }
    uVar31 = uVar31 + 1;
  } while ((int)uVar31 < 100);
  local_140 = 0x100;
  local_160.InlineData[0] = '\0';
  local_160.InlineData[1] = '\0';
  local_160.InlineData[2] = '\0';
  local_160.InlineData[3] = '\0';
  local_160._padding_ = 0;
  local_150 = 0;
  local_198._16_8_ = 0;
  uStack_180 = 0;
  local_1a8.DebugPtr = (UPCGData *)0x0;
  local_1a0 = 0;
  local_198._0_8_ = (FScriptContainerElement *)0x0;
  local_198._8_8_ = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_16c = 0x80;
  local_168 = 0xffffffff;
  local_164 = 0;
  local_160.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_148 = (UPCGData *)0x0;
  local_13c = 0;
  local_134 = 0xffffffff;
  iVar21 = local_648.InputData.TaggedData.ArrayNum;
  if (local_648.InputData.TaggedData.ArrayNum == local_648.InputData.TaggedData.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&local_648.InputData,
                        &local_648.InputData.TaggedData.ArrayMax);
  }
  local_648.InputData.TaggedData.ArrayNum = iVar21 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            (local_648.InputData.TaggedData.AllocatorInstance.Data + (longlong)iVar21 * 0x78);
  FPCGDataPtrWrapper::FPCGDataPtrWrapper(this_00,(FPCGDataPtrWrapper *)&local_1a8.ObjectPtr);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_198);
  this_00[6].Data.field0_0x0.DebugPtr = local_148;
  *(undefined1 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = (undefined1)local_140;
  *(undefined1 *)((longlong)&this_00[6].WeakData.WeakPtr.ObjectIndex + 1) = local_140._1_1_;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = local_13c;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = local_134;
  local_150 = local_150 & 0xffffffff00000000;
  if (local_160.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_160.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_198,0,local_198._8_4_);
  iVar21 = SUB84(local_198._8_8_,4);
  local_198._8_8_ = local_198._8_8_ & 0xffffffff00000000;
  if (iVar21 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_198,0,(int *)(local_198 + 0xc));
  }
  local_168 = 0xffffffff;
  local_164 = 0;
  local_170 = 0;
  if (0x80 < local_16c) {
    local_16c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),0);
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  if ((FScriptContainerElement *)local_198._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_198._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_1a8.ObjectPtr);
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar23);
  local_718.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.ArrayNum = 0;
  local_718.ArrayMax = 0;
  iVar21 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_3d8 = local_550;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_3d0,&local_548);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_3d8;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_3d0);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 10;
  if (local_3d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_3b0 = local_528;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_3a8,&local_520);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_3b0;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_3a8);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 10;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 0x14;
  if (local_3a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_388 = local_5b8;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_380,&local_5b0);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_388;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_380);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0x14;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 100;
  if (local_380.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.SubPathString.Data.AllocatorInstance.Data);
  }
  TestMeshSelectorByAttribute(this,&local_648,&local_6c8,&local_718,false);
  DestructItems<_anonymous_namespace_::FPCGByAttributeValidationData,int>
            ((FPCGByAttributeValidationData *)local_718.AllocatorInstance.Data,local_718.ArrayNum);
  iVar21 = local_718.ArrayMax;
  local_718._8_8_ = local_718._8_8_ & 0xffffffff00000000;
  if (iVar21 == 0) {
LAB_149ffcce8:
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  else {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&local_718.AllocatorInstance,0,&local_718.ArrayMax);
    iVar21 = local_718.ArrayNum;
    if (local_718.ArrayNum == local_718.ArrayMax) goto LAB_149ffcce8;
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_360 = local_5b8;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_358,&local_5b0);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_360;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_358);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 0x14;
  if (local_358.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_288 = local_550;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_280,&local_548);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_288;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_280);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0x14;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 0x23;
  if (local_280.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_328 = local_528;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_320,&local_520);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_328;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_320);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0x23;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 0x32;
  if (local_320.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_300 = local_500;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_2f8,&local_4f8);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_300;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_2f8);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0x32;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 0x46;
  if (local_2f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_2d8 = local_5b8;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_2d0,&local_5b0);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_2d8;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_2d0);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0x46;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 100;
  if (local_2d0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.SubPathString.Data.AllocatorInstance.Data);
  }
  TestMeshSelectorByAttribute(this,&local_648,&local_6c0,&local_718,false);
  DestructItems<_anonymous_namespace_::FPCGByAttributeValidationData,int>
            ((FPCGByAttributeValidationData *)local_718.AllocatorInstance.Data,local_718.ArrayNum);
  iVar21 = local_718.ArrayMax;
  local_718._8_8_ = local_718._8_8_ & 0xffffffff00000000;
  if (iVar21 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&local_718.AllocatorInstance,0,&local_718.ArrayMax);
    iVar21 = local_718.ArrayNum;
    if (local_718.ArrayNum != local_718.ArrayMax) goto LAB_149ffd033;
  }
  iVar21 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
LAB_149ffd033:
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_2b0 = local_5b8;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_2a8,&local_5b0);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_2b0;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_2a8);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 0x46;
  if (local_2a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_238 = local_550;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_230,&local_548);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_238;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_230);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0x46;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 0x55;
  if (local_230.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.SubPathString.Data.AllocatorInstance.Data);
  }
  iVar21 = local_718.ArrayNum;
  if (local_718.ArrayNum == local_718.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_718.AllocatorInstance,&local_718.ArrayMax);
  }
  FVar16.Data = local_718.AllocatorInstance.Data;
  local_718.ArrayNum = iVar21 + 1;
  local_260 = local_500;
  lVar32 = (longlong)iVar21 * 0x30;
  FSoftObjectPath::FSoftObjectPath(&local_258,&local_4f8);
  *(undefined8 *)&FVar16.Data[lVar32].field_0x0 = local_260;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(FVar16.Data + lVar32 + 8),&local_258);
  *(undefined4 *)(FVar16.Data + lVar32 + 0x28) = 0x55;
  *(undefined4 *)(FVar16.Data + lVar32 + 0x2c) = 100;
  if (local_258.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.SubPathString.Data.AllocatorInstance.Data);
  }
  TestMeshSelectorByAttribute(this,&local_648,&local_6b8,&local_718,true);
  DestructItems<_anonymous_namespace_::FPCGByAttributeValidationData,int>
            ((FPCGByAttributeValidationData *)local_718.AllocatorInstance.Data,local_718.ArrayNum);
  if ((FPCGByAttributeValidationData *)local_718.AllocatorInstance.Data !=
      (FPCGByAttributeValidationData *)0x0) {
    FMemory::Free(local_718.AllocatorInstance.Data);
  }
  if (local_5b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_4f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_520.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_520.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_548.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_6b0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_6e8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_670.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_670.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_690.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_648.OutputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.OutputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_648.OutputData.TaggedData.AllocatorInstance.Data,
             local_648.OutputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_648.OutputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_648.OutputData.TaggedData.AllocatorInstance.Data);
  }
  if (local_648.InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.InputData.DataCrcs.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_648.InputData.TaggedData.AllocatorInstance.Data,
             local_648.InputData.TaggedData.ArrayNum);
  if ((FPCGTaggedData *)local_648.InputData.TaggedData.AllocatorInstance.Data !=
      (FPCGTaggedData *)0x0) {
    FMemory::Free(local_648.InputData.TaggedData.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 149ffd330

FString * __thiscall
FPCGStaticMeshSpawnerByAttributeTest::GetBeautifiedTestName
          (FPCGStaticMeshSpawnerByAttributeTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.StaticMeshSpawner.ByAttribute");
  return __return_storage_ptr__;
}

