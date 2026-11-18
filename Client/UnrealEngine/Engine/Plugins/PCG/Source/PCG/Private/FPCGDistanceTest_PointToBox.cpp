// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd54f0

EAutomationTestFlags __thiscall
FPCGDistanceTest_PointToBox::GetTestFlags(FPCGDistanceTest_PointToBox *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd5500

bool __thiscall FPCGDistanceTest_PointToBox::IsStressTest(FPCGDistanceTest_PointToBox *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd5510

uint __thiscall FPCGDistanceTest_PointToBox::GetRequiredDeviceNum(FPCGDistanceTest_PointToBox *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd5520

FString * __thiscall
FPCGDistanceTest_PointToBox::GetTestSourceFileName
          (FPCGDistanceTest_PointToBox *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDistanceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd5550

int __thiscall FPCGDistanceTest_PointToBox::GetTestSourceFileLine(FPCGDistanceTest_PointToBox *this)

{
  return 0xba;
}

// GetTests @ 149fd5560

/* WARNING: Removing unreachable block (ram,0x000149fd564d) */
/* WARNING: Removing unreachable block (ram,0x000149fd5718) */

void __thiscall
FPCGDistanceTest_PointToBox::GetTests
          (FPCGDistanceTest_PointToBox *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Distance.PointToBox");
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

// RunTest @ 149fd5740

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
FPCGDistanceTest_PointToBox::RunTest(FPCGDistanceTest_PointToBox *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UPCGDistanceSettings *pUVar9;
  UPCGBasePointData *pUVar10;
  undefined1 *puVar11;
  UClass *pUVar12;
  FObjectPtr_u_0 this_00;
  int *piVar13;
  FPCGDataPtrWrapper *pFVar14;
  ForAnyElementType FVar15;
  FObjectPtr_u_0 FVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStackY_4a8 [32];
  FObjectPtr_u_0 local_478;
  undefined1 local_470 [16];
  int local_460;
  FString local_458;
  FName local_448;
  ForAnyElementType local_438;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  TSharedPtr<IPCGElement,1> local_3d0;
  FString local_3c0;
  FTestData local_3a8;
  TVector<double>_u_0 local_318;
  FPCGAttributeIdentifier local_2f8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_2a8;
  FPCGPointValueRanges local_278;
  longlong local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_438.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_438.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_438.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_3a8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_438);
  local_2a8._0_8_ = 0;
  local_2a8._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGDistanceSettings>(&local_3a8,&local_2a8);
  pUVar9 = CastChecked<UPCGDistanceSettings,UPCGSettings>(local_3a8.Settings);
  pUVar9->SourceShape = Center;
  pUVar9->TargetShape = BoxBounds;
  UPCGSettings::GetElement(local_3a8.Settings,&local_3d0);
  pUVar10 = PCGTestsCommon::CreateRandomBasePointData(2,0x2a,false);
  (**(code **)(pUVar10->_padding_ + 0x4c0))(pUVar10,&local_e8,0);
  if ((local_d8 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar6
     )) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  uVar5 = _UNK_150f34e18;
  local_2c8 = 0;
  local_2d8 = ___xmm_00000000000000004059000000000000;
  uStack_2d0 = _UNK_150f34e18;
  *(undefined8 *)(local_e8 + 0x20) = ___xmm_00000000000000004059000000000000;
  *(undefined8 *)(local_e8 + 0x28) = uVar5;
  *(undefined8 *)(local_e8 + 0x30) = 0;
  *(undefined8 *)(local_e8 + 0x38) = 0;
  if ((local_d8 < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar6
     )) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  if ((int)(1 % (longlong)local_dc) == 1) {
    puVar11 = (undefined1 *)(local_e0 + local_e8);
  }
  else {
    puVar11 = local_c8;
  }
  local_2c0 = ___xmm_40490000000000000000000000000000;
  uStack_2b8 = _UNK_152030078;
  local_2b0 = 0;
  *(undefined8 *)(puVar11 + 0x20) = ___xmm_40490000000000000000000000000000;
  *(undefined8 *)(puVar11 + 0x28) = _UNK_152030078;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  *(undefined8 *)(puVar11 + 0x38) = 0;
  if (local_3a8.InputData.TaggedData.ArrayNum == local_3a8.InputData.TaggedData.ArrayMax) {
    local_3a8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_3a8.InputData,
                    &local_3a8.InputData.TaggedData.ArrayMax);
  }
  pFVar14 = (FPCGDataPtrWrapper *)
            (local_3a8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_3a8.InputData.TaggedData.ArrayNum * 0x78);
  pFVar14[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar14->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar14->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar14[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar14[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar14[4].Data.field0_0x0 + 4) = 0;
  pFVar14[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar14[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar14[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar14[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGDistance::SourceLabel;
  local_3a8.InputData.TaggedData.ArrayNum = local_3a8.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(pFVar14,(UPCGData *)pUVar10);
  if (local_3a8.InputData.TaggedData.ArrayNum == local_3a8.InputData.TaggedData.ArrayMax) {
    local_3a8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_3a8.InputData,
                    &local_3a8.InputData.TaggedData.ArrayMax);
  }
  local_318._s_0.Z = 0.0;
  local_318._s_0.X = 0.0;
  local_318._s_0.Y = 0.0;
  pFVar14 = (FPCGDataPtrWrapper *)
            (local_3a8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_3a8.InputData.TaggedData.ArrayNum * 0x78);
  pFVar14[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar14->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar14->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar14[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar14[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar14[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar14[4].Data.field0_0x0 + 4) = 0;
  pFVar14[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar14[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar14[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar14[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar14[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGDistance::TargetLabel;
  local_3a8.InputData.TaggedData.ArrayNum = local_3a8.InputData.TaggedData.ArrayNum + 1;
  pUVar10 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_318._s_0);
  (**(code **)(pUVar10->_padding_ + 0x498))(pUVar10,0xc);
  FPCGPointValueRanges::FPCGPointValueRanges(&local_278,pUVar10,false);
  if ((local_278.BoundsMaxRange.NumElements < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar6
     )) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  if ((local_278.BoundsMinRange.NumElements < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar6
     )) {
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return (bool)uVar7;
  }
  dVar4 = __real_4024000000000000;
  dVar2 = (((local_278.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X +
          ((local_278.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X) *
          __real_3fe0000000000000;
  dVar18 = (((local_278.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y +
           ((local_278.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y) *
           __real_3fe0000000000000;
  dVar17 = (((local_278.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z +
           ((local_278.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z) *
           __real_3fe0000000000000;
  dVar3 = dVar2 + __real_4056800000000000;
  dVar19 = dVar18 + __real_4044000000000000;
  dVar18 = dVar18 - __real_4044000000000000;
  ((local_278.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X =
       dVar2 - __real_4056800000000000;
  ((local_278.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y = dVar18;
  ((local_278.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z = dVar17 - dVar4;
  ((local_278.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.X = dVar3;
  ((local_278.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Y = dVar19;
  ((local_278.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0)._s_0.Z = dVar17 + dVar4;
  FPCGDataPtrWrapper::operator=(pFVar14,(UPCGData *)pUVar10);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_3a8,(UPCGNode *)local_470);
  do {
    if ((local_3d0.Object == (IPCGElement *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    bVar6 = IPCGElement::Execute(local_3d0.Object,(FPCGContext *)local_470._0_8_);
  } while (!bVar6);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_470._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_470 + 8),
             &PCGPinConstants::DefaultOutputLabel);
  iVar8 = local_460;
  ::FString::FString(&local_430,"Output count");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_430.Data.ArrayNum != 0) {
    FVar15.Data = local_430.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar8,1)
  ;
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if ((local_460 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    local_478 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_470._8_8_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fd5cbd:
      if ((FPCGMetadataAttribute<double> *)local_478.Handle == (FPCGMetadataAttribute<double> *)0x0)
      goto LAB_149fd5cdd;
      pUVar12 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_478,pUVar12);
      FVar16 = local_478;
      if (!bVar6) goto LAB_149fd5cdd;
    }
    else {
      if ((FPCGMetadataAttribute<double> *)local_478.Handle != (FPCGMetadataAttribute<double> *)0x0)
      {
        UE::GC::MarkAsReachable(local_478.Handle);
        goto LAB_149fd5cbd;
      }
LAB_149fd5cdd:
      FVar16.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_420,"Output point data");
    if ((FPCGMetadataAttribute<double> *)FVar16.Handle == (FPCGMetadataAttribute<double> *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_458,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_458,0);
      if ((FName)local_458.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_458.Data.AllocatorInstance.Data);
      }
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      iVar8 = (**(code **)(*(longlong *)FVar16.Handle + 0x488))(FVar16.Handle);
      ::FString::FString(&local_410,"Output point count");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_410.Data.ArrayNum != 0) {
        FVar15.Data = local_410.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,iVar8,2);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        local_458.Data.AllocatorInstance.Data =
             *(FScriptContainerElement **)&(pUVar9->OutputAttribute).AttributeName;
        local_458.Data._8_8_ = PCGMetadataDomainID::Default._0_8_;
        local_448 = PCGMetadataDomainID::Default.DebugName;
        local_2f8.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_2f8.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_2f8.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_2f8.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        local_2f8.Name = (FName)local_458.Data.AllocatorInstance.Data;
        this_00.Handle =
             (UObject *)
             UPCGMetadata::GetConstAttribute
                       (*(UPCGMetadata **)&FVar16.Handle[1].field_0x10,&local_2f8);
        if (((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0
            ) || ((short)*(longlong *)&this_00.Handle[2].field_0x20 != 1)) {
          this_00.Handle = (UObject *)0x0;
        }
        ::FString::FString(&local_400,"Distance attribute");
        if ((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0)
        {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_3c0,L"Expected \'%s\' to be not null.");
          (*pcVar1)(this,&local_3c0,0);
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Data.AllocatorInstance.Data);
        }
        if (!bVar6) {
          piVar13 = (int *)(**(code **)(*(longlong *)FVar16.Handle + 0x5c8))(FVar16.Handle,0);
          dVar2 = FPCGMetadataAttribute<double>::GetValue
                            ((FPCGMetadataAttribute<double> *)this_00.Handle,*piVar13);
          ::FString::FString(&local_3f0,"Point 0 distance");
          dVar3 = __real_3f847ae147ae147b;
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_3f0.Data.ArrayNum != 0) {
            FVar15.Data = local_3f0.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,dVar2,dVar4,
                             __real_3f847ae147ae147b);
          if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            piVar13 = (int *)(**(code **)(*(longlong *)FVar16.Handle + 0x5c8))(FVar16.Handle,1);
            dVar2 = FPCGMetadataAttribute<double>::GetValue
                              ((FPCGMetadataAttribute<double> *)this_00.Handle,*piVar13);
            ::FString::FString(&local_3e0,"Point 1 distance");
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_3e0.Data.ArrayNum != 0) {
              FVar15.Data = local_3e0.Data.AllocatorInstance.Data;
            }
            bVar6 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar15.Data,dVar2,dVar4,dVar3)
            ;
            if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              bVar6 = true;
              goto LAB_149fd5f4c;
            }
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_149fd5f4c:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_470._8_8_,local_460);
  if ((FObjectPtr_u_0 *)local_470._8_8_ != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free((void *)local_470._8_8_);
  }
  if ((FPCGContext *)local_470._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_470._0_8_)(local_470._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d0.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_3a8);
  return bVar6;
}

// GetBeautifiedTestName @ 149fd6000

FString * __thiscall
FPCGDistanceTest_PointToBox::GetBeautifiedTestName
          (FPCGDistanceTest_PointToBox *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Distance.PointToBox");
  return __return_storage_ptr__;
}

