// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd4000

EAutomationTestFlags __thiscall
FPCGDistanceTest_PointToSphere::GetTestFlags(FPCGDistanceTest_PointToSphere *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd40d0

bool __thiscall FPCGDistanceTest_PointToSphere::IsStressTest(FPCGDistanceTest_PointToSphere *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd40e0

uint __thiscall
FPCGDistanceTest_PointToSphere::GetRequiredDeviceNum(FPCGDistanceTest_PointToSphere *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd40f0

FString * __thiscall
FPCGDistanceTest_PointToSphere::GetTestSourceFileName
          (FPCGDistanceTest_PointToSphere *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDistanceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd4120

int __thiscall
FPCGDistanceTest_PointToSphere::GetTestSourceFileLine(FPCGDistanceTest_PointToSphere *this)

{
  return 0x79;
}

// GetTests @ 149fd4130

/* WARNING: Removing unreachable block (ram,0x000149fd421d) */
/* WARNING: Removing unreachable block (ram,0x000149fd42e8) */

void __thiscall
FPCGDistanceTest_PointToSphere::GetTests
          (FPCGDistanceTest_PointToSphere *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Distance.PointToSphere");
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

// RunTest @ 149fd4310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGDistanceTest_PointToSphere::RunTest(FPCGDistanceTest_PointToSphere *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPCGDistanceSettings *pUVar7;
  UPCGBasePointData *pUVar8;
  undefined1 *puVar9;
  UClass *pUVar10;
  FObjectPtr_u_0 this_00;
  int *piVar11;
  FPCGDataPtrWrapper *pFVar12;
  ForAnyElementType FVar13;
  FObjectPtr_u_0 FVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStackY_498 [32];
  FObjectPtr_u_0 local_468;
  undefined1 local_460 [16];
  int local_450;
  FString local_448;
  FName local_438;
  ForAnyElementType local_428;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  TSharedPtr<IPCGElement,1> local_3c0;
  FString local_3b0;
  FTestData local_398;
  TVector<double>_u_0 local_308;
  FPCGAttributeIdentifier local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_298;
  FPCGPointValueRanges local_268;
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_428.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_428.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_428.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_398,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_428);
  local_298._0_8_ = 0;
  local_298._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGDistanceSettings>(&local_398,&local_298);
  pUVar7 = CastChecked<UPCGDistanceSettings,UPCGSettings>(local_398.Settings);
  pUVar7->SourceShape = Center;
  pUVar7->TargetShape = SphereBounds;
  UPCGSettings::GetElement(local_398.Settings,&local_3c0);
  pUVar8 = PCGTestsCommon::CreateRandomBasePointData(2,0x2a,false);
  (**(code **)(pUVar8->_padding_ + 0x4c0))(pUVar8,&local_d8,1);
  if ((local_c8 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar4
     )) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  uVar3 = _UNK_150f34e18;
  local_2b8 = 0;
  local_2c8 = ___xmm_00000000000000004059000000000000;
  uStack_2c0 = _UNK_150f34e18;
  *(undefined8 *)(local_d8 + 0x20) = ___xmm_00000000000000004059000000000000;
  *(undefined8 *)(local_d8 + 0x28) = uVar3;
  *(undefined8 *)(local_d8 + 0x30) = 0;
  *(undefined8 *)(local_d8 + 0x38) = 0;
  if ((local_c8 < 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar4
     )) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((int)(1 % (longlong)local_cc) == 1) {
    puVar9 = (undefined1 *)(local_d0 + local_d8);
  }
  else {
    puVar9 = local_b8;
  }
  local_2b0 = ___xmm_40490000000000000000000000000000;
  uStack_2a8 = _UNK_152030078;
  local_2a0 = 0;
  *(undefined8 *)(puVar9 + 0x20) = ___xmm_40490000000000000000000000000000;
  *(undefined8 *)(puVar9 + 0x28) = _UNK_152030078;
  *(undefined8 *)(puVar9 + 0x30) = 0;
  *(undefined8 *)(puVar9 + 0x38) = 0;
  if (local_398.InputData.TaggedData.ArrayNum == local_398.InputData.TaggedData.ArrayMax) {
    local_398.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_398.InputData,
                    &local_398.InputData.TaggedData.ArrayMax);
  }
  pFVar12 = (FPCGDataPtrWrapper *)
            (local_398.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_398.InputData.TaggedData.ArrayNum * 0x78);
  pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
  pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGDistance::SourceLabel;
  local_398.InputData.TaggedData.ArrayNum = local_398.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(pFVar12,(UPCGData *)pUVar8);
  if (local_398.InputData.TaggedData.ArrayNum == local_398.InputData.TaggedData.ArrayMax) {
    local_398.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_398.InputData,
                    &local_398.InputData.TaggedData.ArrayMax);
  }
  local_308._s_0.Z = 0.0;
  local_308._s_0.X = 0.0;
  local_308._s_0.Y = 0.0;
  pFVar12 = (FPCGDataPtrWrapper *)
            (local_398.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_398.InputData.TaggedData.ArrayNum * 0x78);
  pFVar12[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar12->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar12->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar12[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar12[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar12[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar12[4].Data.field0_0x0 + 4) = 0;
  pFVar12[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar12[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar12[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar12[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar12[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGDistance::TargetLabel;
  local_398.InputData.TaggedData.ArrayNum = local_398.InputData.TaggedData.ArrayNum + 1;
  pUVar8 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_308._s_0);
  (**(code **)(pUVar8->_padding_ + 0x498))(pUVar8,0xc);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_268,pUVar8,false);
  if ((local_268.BoundsMaxRange.NumElements < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar4
     )) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  if ((local_268.BoundsMinRange.NumElements < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar4
     )) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  dVar2 = __real_4024000000000000;
  dVar18 = (((local_268.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X +
           ((local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X) *
           __real_3fe0000000000000;
  dVar17 = (((local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y +
           ((local_268.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y) *
           __real_3fe0000000000000;
  dVar15 = (((local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z +
           ((local_268.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z) *
           __real_3fe0000000000000;
  dVar19 = dVar18 + __real_4024000000000000;
  dVar16 = dVar15 + __real_4024000000000000;
  dVar15 = dVar15 - __real_4024000000000000;
  ((local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X =
       dVar18 - __real_4024000000000000;
  ((local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z = dVar15;
  ((local_268.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y = dVar17 - dVar2;
  ((local_268.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X = dVar19;
  ((local_268.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y = dVar17 + dVar2;
  ((local_268.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z = dVar16;
  FPCGDataPtrWrapper::operator=(pFVar12,(UPCGData *)pUVar8);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_398,(UPCGNode *)local_460);
  do {
    if ((local_3c0.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_3c0.Object,(FPCGContext *)local_460._0_8_);
  } while (!bVar4);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_460._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_460 + 8),
             &PCGPinConstants::DefaultOutputLabel);
  iVar6 = local_450;
  ::FString::FString(&local_420,"Output count");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_420.Data.ArrayNum != 0) {
    FVar13.Data = local_420.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar6,1)
  ;
  if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_420.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if ((local_450 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    local_468 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_460._8_8_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fd486c:
      if ((FPCGMetadataAttribute<double> *)local_468.Handle == (FPCGMetadataAttribute<double> *)0x0)
      goto LAB_149fd488c;
      pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_468,pUVar10);
      FVar14 = local_468;
      if (!bVar4) goto LAB_149fd488c;
    }
    else {
      if ((FPCGMetadataAttribute<double> *)local_468.Handle != (FPCGMetadataAttribute<double> *)0x0)
      {
        UE::GC::MarkAsReachable(local_468.Handle);
        goto LAB_149fd486c;
      }
LAB_149fd488c:
      FVar14.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_410,"Output point data");
    if ((FPCGMetadataAttribute<double> *)FVar14.Handle == (FPCGMetadataAttribute<double> *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_448,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_448,0);
      if ((FName)local_448.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_448.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      iVar6 = (**(code **)(*(longlong *)FVar14.Handle + 0x488))(FVar14.Handle);
      ::FString::FString(&local_400,"Output point count");
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_400.Data.ArrayNum != 0) {
        FVar13.Data = local_400.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,iVar6,2);
      if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        local_448.Data.AllocatorInstance.Data =
             *(FScriptContainerElement **)&(pUVar7->OutputAttribute).AttributeName;
        local_448.Data._8_8_ = PCGMetadataDomainID::Default._0_8_;
        local_438 = PCGMetadataDomainID::Default.DebugName;
        local_2e8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_2e8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_2e8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_2e8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        local_2e8.Name = (FName)local_448.Data.AllocatorInstance.Data;
        this_00.Handle =
             (UObject *)
             UPCGMetadata::GetConstAttribute
                       (*(UPCGMetadata **)&FVar14.Handle[1].field_0x10,&local_2e8);
        if (((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0
            ) || ((short)*(longlong *)&this_00.Handle[2].field_0x20 != 1)) {
          this_00.Handle = (UObject *)0x0;
        }
        ::FString::FString(&local_3f0,"Distance attribute");
        if ((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0)
        {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_3b0,L"Expected \'%s\' to be not null.");
          (*pcVar1)(this,&local_3b0,0);
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
        }
        if (!bVar4) {
          piVar11 = (int *)(**(code **)(*(longlong *)FVar14.Handle + 0x5c8))(FVar14.Handle,0);
          dVar2 = FPCGMetadataAttribute<double>::GetValue
                            ((FPCGMetadataAttribute<double> *)this_00.Handle,*piVar11);
          ::FString::FString(&local_3e0,"Point 0 distance");
          dVar15 = __real_3f847ae147ae147b;
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_3e0.Data.ArrayNum != 0) {
            FVar13.Data = local_3e0.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,dVar2,
                             __real_4054ab7cc0000000,__real_3f847ae147ae147b);
          if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            piVar11 = (int *)(**(code **)(*(longlong *)FVar14.Handle + 0x5c8))(FVar14.Handle,1);
            dVar2 = FPCGMetadataAttribute<double>::GetValue
                              ((FPCGMetadataAttribute<double> *)this_00.Handle,*piVar11);
            ::FString::FString(&local_3d0,"Point 1 distance");
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_3d0.Data.ArrayNum != 0) {
              FVar13.Data = local_3d0.Data.AllocatorInstance.Data;
            }
            bVar4 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar13.Data,dVar2,
                               __real_404056f9a0000000,dVar15);
            if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
            }
            if (bVar4) {
              bVar4 = true;
              goto LAB_149fd4b03;
            }
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_149fd4b03:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_460._8_8_,local_450);
  if ((FObjectPtr_u_0 *)local_460._8_8_ != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free((void *)local_460._8_8_);
  }
  if ((FPCGContext *)local_460._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_460._0_8_)(local_460._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_398);
  return bVar4;
}

// GetBeautifiedTestName @ 149fd4bb0

FString * __thiscall
FPCGDistanceTest_PointToSphere::GetBeautifiedTestName
          (FPCGDistanceTest_PointToSphere *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Distance.PointToSphere");
  return __return_storage_ptr__;
}

