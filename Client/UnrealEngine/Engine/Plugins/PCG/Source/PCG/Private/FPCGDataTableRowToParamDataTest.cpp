// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fba8d0

EAutomationTestFlags __thiscall
FPCGDataTableRowToParamDataTest::GetTestFlags(FPCGDataTableRowToParamDataTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fba8e0

bool __thiscall FPCGDataTableRowToParamDataTest::IsStressTest(FPCGDataTableRowToParamDataTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fba930

uint __thiscall
FPCGDataTableRowToParamDataTest::GetRequiredDeviceNum(FPCGDataTableRowToParamDataTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fba940

FString * __thiscall
FPCGDataTableRowToParamDataTest::GetTestSourceFileName
          (FPCGDataTableRowToParamDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDataTableRowToParamDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fba970

int __thiscall
FPCGDataTableRowToParamDataTest::GetTestSourceFileLine(FPCGDataTableRowToParamDataTest *this)

{
  return 0xc;
}

// GetTests @ 149fba980

/* WARNING: Removing unreachable block (ram,0x000149fbaa6d) */
/* WARNING: Removing unreachable block (ram,0x000149fbab38) */

void __thiscall
FPCGDataTableRowToParamDataTest::GetTests
          (FPCGDataTableRowToParamDataTest *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.DataTableRowToParamData.Basic");
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

// RunTest @ 149fbab60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FPCGDataTableRowToParamDataTest::RunTest(FPCGDataTableRowToParamDataTest *this,FString *param_1)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  UPCGSettings *pUVar8;
  bool bVar9;
  undefined1 uVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  UDataTable *this_00;
  UScriptStruct *pUVar13;
  ulonglong uVar14;
  UPCGParamData *pUVar15;
  uchar *puVar16;
  FName *pFVar17;
  FString *pFVar18;
  ForAnyElementType FVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  wchar_t *pwVar22;
  int iVar23;
  undefined1 local_res18 [8];
  FPCGContext *local_res20;
  FName local_348;
  FString local_340;
  TArray<FString,TSizedDefaultAllocator<32>_> local_330;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_320;
  FSoftObjectPath local_310;
  UClass *local_2f0;
  UDataTable *local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  TSharedPtr<IPCGElement,1> local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FString local_1e8;
  TVector2<double>_u_0 local_1d8;
  TStringView<wchar_t> local_1c8;
  TVector<double>_u_0 local_1b8;
  FName local_198 [2];
  TVector4<double>_u_0 local_188;
  FString local_168;
  FString local_150;
  FString local_140;
  FString local_130;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_118;
  FTestData local_e8;
  
  local_2f0 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2f0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_2f0);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_e8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_2f0);
  local_118._0_8_ = 0;
  local_118._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGDataTableRowToParamDataSettings>(&local_e8,&local_118);
  pUVar8 = local_e8.Settings;
  local_348 = (FName)local_e8.Settings;
  if ((FName)local_e8.Settings == (FName)0x0) {
    pFVar18 = GetTypeName<UPCGDataTableRowToParamDataSettings>(&local_150);
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar22);
  }
  pUVar11 = Z_Construct_UClass_UPCGDataTableRowToParamDataSettings_NoRegister();
  lVar2 = *(longlong *)((longlong)pUVar8 + 0x10);
  iVar1 = (int)pUVar11->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar11->_padding_)) {
    pFVar18 = GetTypeName<UPCGDataTableRowToParamDataSettings>(&local_130);
    pwVar22 = L"";
    if ((pFVar18->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
    pFVar18 = GetFullNameForCastLogError<UPCGSettings>(&local_168,pUVar8);
    if ((pFVar18->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar20);
  }
  pUVar12 = GetTransientPackageAsObject();
  this_00 = NewObject<UDataTable>(pUVar12);
  pUVar13 = FPCGDataTableRowToParamDataTestStruct::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this_00->RowStruct).field0_0x0.DebugPtr = pUVar13;
  ::FString::FString(&local_290,
                     "---,Name,String,I32,I64,F32,F64,V2,V3,V4,SoftPath\nAAA,\"A Name\",\"A String\",\"111\",\"1111\",\"1.1\",\"1.11\",\"(X=1.0,Y=1.0)\",\"(X=1.0,Y=1.0,Z=1.0)\",\"(X=1.0,Y=1.0,Z=1.0,W=1.0)\",\"/Script/PCG\"\nBBB,\"B Name\",\"B String\",\"222\",\"2222\",\"2.2\",\"2.22\",\"(X=2.0,Y=2.0)\",\"(X=2.0,Y=2.0,Z=2.0)\",\"(X=2.0,Y=2.0,Z=2.0,W=2.0)\",\"/Script/PCG\"\nCCC,\"C Name\",\"C String\",\"333\",\"3333\",\"3.3\",\"3.33\",\"(X=3.0,Y=3.0)\",\"(X=3.0,Y=3.0,Z=3.0)\",\"(X=3.0,Y=3.0,Z=3.0,W=3.0)\",\"/Script/PCG\""
                    );
  UDataTable::CreateTableFromCSVString(this_00,&local_330,&local_290);
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  iVar1 = local_330.ArrayNum;
  uVar14 = (ulonglong)local_330.ArrayNum;
  pFVar21 = local_330.AllocatorInstance.Data + uVar14 * 0x10;
  local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_340.Data.ArrayNum = 0;
  local_340.Data.ArrayMax = 0;
  bVar9 = true;
  FVar19.Data = local_330.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar14 != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar19.Data == pFVar21) break;
    if (bVar9) {
      bVar9 = false;
    }
    else {
      ::FString::AppendChars(&local_340,L"\n",1);
    }
    iVar23 = *(int *)(FVar19.Data + 8) + -1;
    if (*(int *)(FVar19.Data + 8) == 0) {
      iVar23 = 0;
    }
    ::FString::AppendChars(&local_340,*(wchar_t **)FVar19.Data,iVar23);
    uVar14 = (ulonglong)(uint)local_330.ArrayNum;
    FVar19.Data = FVar19.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_2e0,L"CSV Errors:\n%s");
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_2e0.Data.ArrayNum != 0) {
    FVar19.Data = local_2e0.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar19.Data,iVar1,0)
  ;
  FVar3 = local_348;
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_340.Data.AllocatorInstance.Data);
  }
  if (!bVar9) goto LAB_149fbb316;
  ::FName::FName(&local_348,L"BBB");
  pFVar17 = (FName *)((longlong)FVar3 + 200);
  *pFVar17 = local_348;
  local_2e8 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)FVar3 + 0xd0),(FObjectPtr)&local_2e8);
  UPCGSettings::GetElement(local_e8.Settings,&local_2a0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_e8,(UPCGNode *)&local_res20);
  do {
    if ((local_2a0.Object == (IPCGElement *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    bVar9 = IPCGElement::Execute(local_2a0.Object,local_res20);
  } while (!bVar9);
  FPCGDataCollection::GetParamsByPin
            (&local_res20->OutputData,&local_320,&PCGPinConstants::DefaultOutputLabel);
  if (local_320.ArrayNum == 0) {
    pUVar15 = (UPCGParamData *)0x0;
  }
  else {
    if ((local_320.ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      uVar10 = (*pcVar4)();
      return (bool)uVar10;
    }
    pUVar15 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)local_320.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2d0,"Output params");
  if (pUVar15 == (UPCGParamData *)0x0) {
    pcVar4 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_280,L"Expected \'%s\' to be not null.");
    (*pcVar4)(this,&local_280,0);
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  if ((bVar9) || (pUVar15 == (UPCGParamData *)0x0)) {
LAB_149fbb2d8:
    bVar9 = false;
  }
  else {
    lVar2 = pUVar15->_padding_;
    ::FString::FString(&local_2c0,"Params has metadata");
    if (lVar2 == 0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_270,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_270,0);
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
    }
    if (bVar9) goto LAB_149fbb2d8;
    FVar3 = *pFVar17;
    pUVar13 = FPCGDataTableRowToParamDataTestStruct::StaticStruct();
    puVar16 = UDataTable::FindRowInternal
                        (this_00,pUVar13,FVar3,L"FPCGDataTableRowToParamDataTest",true);
    ::FName::ToString(pFVar17,&local_1e8);
    ::FString::PrintfImpl(&local_2b0,L"\'%s\' Row not found in data table");
    if (puVar16 == (uchar *)0x0) {
      pcVar4 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_260,L"Expected \'%s\' to be not null.");
      (*pcVar4)(this,&local_260,0);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (bVar9) goto LAB_149fbb2d8;
    pFVar17 = ::FName::FName(&local_238,L"B Name");
    FVar3 = *pFVar17;
    pFVar17 = ::FName::FName(&local_230,L"Name");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<FName,FName>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,FVar3);
    pFVar18 = ::FString::FString(&local_140,L"B String");
    pFVar17 = ::FName::FName(&local_228,L"String");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<FString,FString>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,pFVar18);
    pFVar17 = ::FName::FName(&local_220,L"I32");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<int,int>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,0xde);
    pFVar17 = ::FName::FName(&local_218,L"I64");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<__int64,__int64>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,0x8ae);
    pFVar17 = ::FName::FName(&local_210,L"F32");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<float,double>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,__real_400199999999999a);
    pFVar17 = ::FName::FName(&local_208,L"F64");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<double,double>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,__real_4001c28f5c28f5c3);
    dVar7 = _UNK_150689698;
    dVar6 = ___xmm_40000000000000004000000000000000;
    pFVar17 = ::FName::FName(&local_200,L"V2");
    local_1d8._s_0.X = dVar6;
    local_1d8._s_0.Y = dVar7;
    PCGDataTableRowToParamDataTestHelpers::
    TestAttribute<UE::Math::TVector2<double>,UE::Math::TVector2<double>_>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,
               (TVector2<double> *)&local_1d8._s_0);
    dVar5 = __real_4000000000000000;
    pFVar17 = ::FName::FName(&local_1f8,L"V3");
    local_1b8._s_0.X = dVar6;
    local_1b8._s_0.Y = dVar7;
    local_1b8._s_0.Z = dVar5;
    PCGDataTableRowToParamDataTestHelpers::
    TestAttribute<UE::Math::TVector<double>,UE::Math::TVector<double>_>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,(TVector<double> *)&local_1b8._s_0
              );
    pFVar17 = ::FName::FName(&local_1f0,L"V4");
    local_188._s_0.X = dVar6;
    local_188._s_0.Y = dVar7;
    local_188._s_0.Z = dVar6;
    local_188._s_0.W = dVar7;
    PCGDataTableRowToParamDataTestHelpers::
    TestAttribute<UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,
               (TVector4<double> *)&local_188._s_0);
    uStack_240 = 0xb;
    local_310.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_310.AssetPath.PackageName.Number = 0;
    local_310.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_310.AssetPath.AssetName.Number = 0;
    local_310.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.SubPathString.Data.ArrayNum = 0;
    local_310.SubPathString.Data.ArrayMax = 0;
    local_248 = L"/Script/PCG";
    local_1c8._12_4_ = uStack_23c;
    local_1c8.Size = 0xb;
    local_1c8.DataPtr = L"/Script/PCG";
    FSoftObjectPath::SetPath(&local_310,&local_1c8);
    pFVar17 = ::FName::FName(local_198,L"SoftPath");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<FSoftObjectPath,FSoftObjectPath>
              ((FPCGTestBaseClass *)this,puVar16,pUVar15,*pFVar17,&local_310);
    bVar9 = true;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_320.AllocatorInstance.Data,local_320.ArrayNum);
  if ((FPCGTaggedData *)local_320.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_320.AllocatorInstance.Data);
  }
  if (local_res20 != (FPCGContext *)0x0) {
    (**(code **)local_res20->_padding_)(local_res20,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.SharedReferenceCount.ReferenceController);
LAB_149fbb316:
  DestructItems<FString,int>((FString *)local_330.AllocatorInstance.Data,local_330.ArrayNum);
  if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.AllocatorInstance.Data);
  }
  PCGTestsCommon::FTestData::~FTestData(&local_e8);
  return bVar9;
}

// GetBeautifiedTestName @ 149fbb3f0

FString * __thiscall
FPCGDataTableRowToParamDataTest::GetBeautifiedTestName
          (FPCGDataTableRowToParamDataTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.DataTableRowToParamData.Basic");
  return __return_storage_ptr__;
}

