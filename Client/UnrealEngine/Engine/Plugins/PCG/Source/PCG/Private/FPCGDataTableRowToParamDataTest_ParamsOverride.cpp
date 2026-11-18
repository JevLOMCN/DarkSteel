// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fbea70

EAutomationTestFlags __thiscall
FPCGDataTableRowToParamDataTest_ParamsOverride::GetTestFlags
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fbea80

bool __thiscall
FPCGDataTableRowToParamDataTest_ParamsOverride::IsStressTest
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fbea90

uint __thiscall
FPCGDataTableRowToParamDataTest_ParamsOverride::GetRequiredDeviceNum
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fbeaa0

FString * __thiscall
FPCGDataTableRowToParamDataTest_ParamsOverride::GetTestSourceFileName
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDataTableRowToParamDataTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fbead0

int __thiscall
FPCGDataTableRowToParamDataTest_ParamsOverride::GetTestSourceFileLine
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this)

{
  return 0x47;
}

// GetTests @ 149fbeae0

/* WARNING: Removing unreachable block (ram,0x000149fbebcd) */
/* WARNING: Removing unreachable block (ram,0x000149fbec98) */

void __thiscall
FPCGDataTableRowToParamDataTest_ParamsOverride::GetTests
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.DataTableRowToParamData.ParamsOverride");
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

// RunTest @ 149fbecc0

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
FPCGDataTableRowToParamDataTest_ParamsOverride::RunTest
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this,FString *param_1)

{
  longlong lVar1;
  code *pcVar2;
  FObjectPtr_u_0 FVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject *pUVar7;
  UDataTable *this_00;
  UScriptStruct *pUVar8;
  UPCGParamData *pUVar9;
  UPCGMetadata *pUVar10;
  FName *pFVar11;
  FString *pFVar12;
  UClass *pUVar13;
  uchar *puVar14;
  ForAnyElementType FVar15;
  FName FVar16;
  FPCGDataPtrWrapper *this_01;
  wchar_t *pwVar17;
  FName FVar18;
  wchar_t *pwVar19;
  int iVar20;
  undefined1 local_res18 [8];
  FObjectPtr_u_0 local_res20;
  FName local_258;
  undefined1 local_250 [16];
  longlong local_240;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_238;
  undefined1 local_228 [16];
  FSoftObjectPath local_218;
  ForAnyElementType local_1f8;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  TSharedPtr<IPCGElement,1> local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FString local_150;
  FTestData local_138;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_68;
  
  local_1f8.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_1f8.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1f8.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_138,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_1f8);
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGDataTableRowToParamDataSettings>(&local_138,&local_68);
  pUVar7 = GetTransientPackageAsObject();
  this_00 = NewObject<UDataTable>(pUVar7);
  pUVar8 = FPCGDataTableRowToParamDataTestStruct::StaticStruct();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this_00->RowStruct).field0_0x0.DebugPtr = pUVar8;
  ::FString::FString(&local_1a0,
                     "---,Name,String,I32,I64,F32,F64,V2,V3,V4,SoftPath\nAAA,\"A Name\",\"A String\",\"111\",\"1111\",\"1.1\",\"1.11\",\"(X=1.0,Y=1.0)\",\"(X=1.0,Y=1.0,Z=1.0)\",\"(X=1.0,Y=1.0,Z=1.0,W=1.0)\",\"/Script/PCG\"\nBBB,\"B Name\",\"B String\",\"222\",\"2222\",\"2.2\",\"2.22\",\"(X=2.0,Y=2.0)\",\"(X=2.0,Y=2.0,Z=2.0)\",\"(X=2.0,Y=2.0,Z=2.0,W=2.0)\",\"/Script/PCG\"\nCCC,\"C Name\",\"C String\",\"333\",\"3333\",\"3.3\",\"3.33\",\"(X=3.0,Y=3.0)\",\"(X=3.0,Y=3.0,Z=3.0)\",\"(X=3.0,Y=3.0,Z=3.0,W=3.0)\",\"/Script/PCG\""
                    );
  UDataTable::CreateTableFromCSVString
            (this_00,(TArray<FString,TSizedDefaultAllocator<32>_> *)local_228,&local_1a0);
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  uVar4 = local_228._8_4_;
  bVar5 = true;
  local_250._8_8_ = (void *)0x0;
  FVar18 = (FName)((longlong)(int)local_228._8_4_ * 0x10 + local_228._0_8_);
  local_240 = 0;
  FVar16 = (FName)local_228._0_8_;
  while( true ) {
    if (local_228._8_4_ != uVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar16 == FVar18) break;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      ::FString::AppendChars((FString *)(local_250 + 8),L"\n",1);
    }
    iVar20 = *(int *)((longlong)FVar16 + 8) + -1;
    if (*(int *)((longlong)FVar16 + 8) == 0) {
      iVar20 = 0;
    }
    ::FString::AppendChars((FString *)(local_250 + 8),*(wchar_t **)FVar16,iVar20);
    FVar16 = (FName)((longlong)FVar16 + 0x10);
  }
  pwVar19 = L"";
  ::FString::PrintfImpl(&local_1f0,L"CSV Errors:\n%s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1f0.Data.ArrayNum != 0) {
    FVar15.Data = local_1f0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,uVar4,0)
  ;
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_250._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_250._8_8_);
  }
  if (!bVar5) goto LAB_149fbf2fa;
  ::FName::FName(&local_258,L"BBB");
  pUVar7 = GetTransientPackageAsObject();
  pUVar9 = NewObject<UPCGParamData>(pUVar7);
  pUVar10 = (UPCGMetadata *)(**(code **)(pUVar9->_padding_ + 0x328))(pUVar9);
  local_218.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_218.AssetPath.PackageName.Number = 0;
  local_218.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_218.AssetPath.AssetName.Number = 0;
  local_218.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.SubPathString.Data.ArrayNum = 0;
  local_218.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_218,(UObject *)this_00);
  pFVar11 = ::FName::FName(&local_170,L"DataTable");
  UPCGMetadata::CreateSoftObjectPathAttribute(pUVar10,*pFVar11,&local_218,false,true);
  if (local_218.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.SubPathString.Data.AllocatorInstance.Data);
  }
  pUVar10 = (UPCGMetadata *)(**(code **)(pUVar9->_padding_ + 0x328))(pUVar9);
  pFVar12 = ::FName::ToString(&local_258,&local_a8);
  pFVar11 = ::FName::FName(&local_168,L"RowName");
  UPCGMetadata::CreateStringAttribute(pUVar10,*pFVar11,pFVar12,false,true);
  if (local_138.InputData.TaggedData.ArrayNum == local_138.InputData.TaggedData.ArrayMax) {
    local_138.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_138.InputData,
                    &local_138.InputData.TaggedData.ArrayMax);
  }
  this_01 = (FPCGDataPtrWrapper *)
            (local_138.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_138.InputData.TaggedData.ArrayNum * 0x78);
  this_01[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_01->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_01->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_01[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_01[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_01[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_01[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_01[4].Data.field0_0x0 + 4) = 0;
  this_01[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_01[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_01[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_01[7].Data.field0_0x0 + 4) = 0xffffffff;
  local_138.InputData.TaggedData.ArrayNum = local_138.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(this_01,(UPCGData *)pUVar9);
  this_01[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultParamsLabel;
  UPCGSettings::GetElement(local_138.Settings,&local_1b0);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_138,(UPCGNode *)local_250);
  do {
    if ((local_1b0.Object == (IPCGElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    bVar5 = IPCGElement::Execute(local_1b0.Object,(FPCGContext *)local_250._0_8_);
  } while (!bVar5);
  FPCGDataCollection::GetParamsByPin
            ((FPCGDataCollection *)(local_250._0_8_ + 0x38),&local_238,
             &PCGPinConstants::DefaultOutputLabel);
  iVar20 = local_238.ArrayNum;
  ::FString::FString(&local_1e0,"Output params");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_1e0.Data.ArrayNum != 0) {
    FVar15.Data = local_1e0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual
                    ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar20,1);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (!bVar5) goto LAB_149fbf2be;
  if ((local_238.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  local_res20 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_238.AllocatorInstance.Data;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGParamData *)local_res20.Handle == (UPCGParamData *)0x0) goto LAB_149fbf33e;
    UE::GC::MarkAsReachable(local_res20.Handle);
  }
  if ((UPCGParamData *)local_res20.Handle == (UPCGParamData *)0x0) {
LAB_149fbf33e:
    pFVar12 = GetTypeName<UPCGParamData_const_>(&local_78);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar19);
  }
  pUVar13 = Z_Construct_UClass_UPCGParamData_NoRegister();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_res20,pUVar13);
  FVar3 = local_res20;
  if ((!bVar5) || ((UPCGParamData *)local_res20.Handle == (UPCGParamData *)0x0)) {
    pFVar12 = GetTypeName<UPCGParamData_const_>(&local_98);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UPCGData_const_>(&local_88,(UPCGData *)local_res20.Handle);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar19 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar19,pwVar17);
  }
  lVar1 = *(longlong *)&local_res20.Handle[1].field_0x10;
  ::FString::FString(&local_1d0,"Params has metadata");
  if (lVar1 == 0) {
    pcVar2 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl(&local_190,L"Expected \'%s\' to be not null.");
    (*pcVar2)(this,&local_190,0);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
LAB_149fbf2be:
    bVar5 = false;
  }
  else {
    pUVar8 = FPCGDataTableRowToParamDataTestStruct::StaticStruct();
    puVar14 = UDataTable::FindRowInternal
                        (this_00,pUVar8,local_258,L"FPCGDataTableRowToParamDataTest",true);
    ::FName::ToString(&local_258,&local_150);
    ::FString::PrintfImpl(&local_1c0,L"\'%s\' Row not found in data table");
    if (puVar14 == (uchar *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_180,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_180,0);
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    if (bVar5) goto LAB_149fbf2be;
    pFVar11 = ::FName::FName(&local_160,L"B Name");
    FVar16 = *pFVar11;
    pFVar11 = ::FName::FName(&local_158,L"Name");
    PCGDataTableRowToParamDataTestHelpers::TestAttribute<FName,FName>
              ((FPCGTestBaseClass *)this,puVar14,(UPCGParamData *)FVar3.Handle,*pFVar11,FVar16);
    bVar5 = true;
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_238.AllocatorInstance.Data,local_238.ArrayNum);
  if ((FPCGTaggedData *)local_238.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_238.AllocatorInstance.Data);
  }
  if ((FPCGContext *)local_250._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_250._0_8_)(local_250._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b0.SharedReferenceCount.ReferenceController);
LAB_149fbf2fa:
  DestructItems<FString,int>((FString *)local_228._0_8_,local_228._8_4_);
  if ((FName)local_228._0_8_ != (FName)0x0) {
    FMemory::Free((void *)local_228._0_8_);
  }
  PCGTestsCommon::FTestData::~FTestData(&local_138);
  return bVar5;
}

// GetBeautifiedTestName @ 149fbf3b0

FString * __thiscall
FPCGDataTableRowToParamDataTest_ParamsOverride::GetBeautifiedTestName
          (FPCGDataTableRowToParamDataTest_ParamsOverride *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.DataTableRowToParamData.ParamsOverride");
  return __return_storage_ptr__;
}

