// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd1a60

EAutomationTestFlags __thiscall
FPCGDistanceTest_PointToPoint::GetTestFlags(FPCGDistanceTest_PointToPoint *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd1a70

bool __thiscall FPCGDistanceTest_PointToPoint::IsStressTest(FPCGDistanceTest_PointToPoint *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd1a80

uint __thiscall
FPCGDistanceTest_PointToPoint::GetRequiredDeviceNum(FPCGDistanceTest_PointToPoint *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd1a90

FString * __thiscall
FPCGDistanceTest_PointToPoint::GetTestSourceFileName
          (FPCGDistanceTest_PointToPoint *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDistanceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd1ac0

int __thiscall
FPCGDistanceTest_PointToPoint::GetTestSourceFileLine(FPCGDistanceTest_PointToPoint *this)

{
  return 0xb;
}

// GetTests @ 149fd1ad0

/* WARNING: Removing unreachable block (ram,0x000149fd1bbd) */
/* WARNING: Removing unreachable block (ram,0x000149fd1c88) */

void __thiscall
FPCGDistanceTest_PointToPoint::GetTests
          (FPCGDistanceTest_PointToPoint *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Distance.PointToPoint");
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

// RunTest @ 149fd1cb0

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
FPCGDistanceTest_PointToPoint::RunTest(FPCGDistanceTest_PointToPoint *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UPCGDistanceSettings *pUVar8;
  UPCGBasePointData *pUVar9;
  undefined1 *puVar10;
  UClass *pUVar11;
  FObjectPtr_u_0 this_00;
  int *piVar12;
  FPCGDataPtrWrapper *pFVar13;
  ForAnyElementType FVar14;
  FObjectPtr_u_0 FVar15;
  undefined1 auStackY_308 [32];
  FObjectPtr_u_0 local_2d8;
  undefined1 local_2d0 [16];
  int local_2c0;
  FString local_2b8;
  FName local_2a8;
  ForAnyElementType local_298;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  TSharedPtr<IPCGElement,1> local_230;
  FString local_220;
  FTestData local_208;
  TVector<double>_u_0 local_178;
  FPCGAttributeIdentifier local_158;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_108;
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_298.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_298.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_298.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_208,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_298);
  local_108._0_8_ = 0;
  local_108._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGDistanceSettings>(&local_208,&local_108);
  pUVar8 = CastChecked<UPCGDistanceSettings,UPCGSettings>(local_208.Settings);
  pUVar8->SourceShape = Center;
  pUVar8->TargetShape = Center;
  UPCGSettings::GetElement(local_208.Settings,&local_230);
  pUVar9 = PCGTestsCommon::CreateRandomBasePointData(2,0x2a,false);
  (**(code **)(pUVar9->_padding_ + 0x4c0))(pUVar9,&local_d8,1);
  if ((local_c8 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  uVar4 = _UNK_150f34e18;
  local_128 = 0;
  local_138 = ___xmm_00000000000000004059000000000000;
  uStack_130 = _UNK_150f34e18;
  *(undefined8 *)(local_d8 + 0x20) = ___xmm_00000000000000004059000000000000;
  *(undefined8 *)(local_d8 + 0x28) = uVar4;
  *(undefined8 *)(local_d8 + 0x30) = 0;
  *(undefined8 *)(local_d8 + 0x38) = 0;
  if ((local_c8 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  if ((int)(1 % (longlong)local_cc) == 1) {
    puVar10 = (undefined1 *)(local_d0 + local_d8);
  }
  else {
    puVar10 = local_b8;
  }
  local_120 = ___xmm_40490000000000000000000000000000;
  uStack_118 = _UNK_152030078;
  local_110 = 0;
  *(undefined8 *)(puVar10 + 0x20) = ___xmm_40490000000000000000000000000000;
  *(undefined8 *)(puVar10 + 0x28) = _UNK_152030078;
  *(undefined8 *)(puVar10 + 0x30) = 0;
  *(undefined8 *)(puVar10 + 0x38) = 0;
  if (local_208.InputData.TaggedData.ArrayNum == local_208.InputData.TaggedData.ArrayMax) {
    local_208.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_208.InputData,
                    &local_208.InputData.TaggedData.ArrayMax);
  }
  pFVar13 = (FPCGDataPtrWrapper *)
            (local_208.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_208.InputData.TaggedData.ArrayNum * 0x78);
  pFVar13[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar13->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar13->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar13[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar13[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar13[4].Data.field0_0x0 + 4) = 0;
  pFVar13[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar13[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar13[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar13[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGDistance::SourceLabel;
  local_208.InputData.TaggedData.ArrayNum = local_208.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(pFVar13,(UPCGData *)pUVar9);
  if (local_208.InputData.TaggedData.ArrayNum == local_208.InputData.TaggedData.ArrayMax) {
    local_208.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_208.InputData,
                    &local_208.InputData.TaggedData.ArrayMax);
  }
  local_178._s_0.Z = 0.0;
  local_178._s_0.X = 0.0;
  local_178._s_0.Y = 0.0;
  pFVar13 = (FPCGDataPtrWrapper *)
            (local_208.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_208.InputData.TaggedData.ArrayNum * 0x78);
  pFVar13[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (pFVar13->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (pFVar13->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  pFVar13[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[3].WeakData.WeakPtr.ObjectIndex = 0;
  pFVar13[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&pFVar13[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&pFVar13[4].Data.field0_0x0 + 4) = 0;
  pFVar13[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  pFVar13[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&pFVar13[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&pFVar13[7].Data.field0_0x0 + 4) = 0xffffffff;
  pFVar13[6].Data.field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)PCGDistance::TargetLabel;
  local_208.InputData.TaggedData.ArrayNum = local_208.InputData.TaggedData.ArrayNum + 1;
  pUVar9 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_178._s_0);
  FPCGDataPtrWrapper::operator=(pFVar13,(UPCGData *)pUVar9);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_208,(UPCGNode *)local_2d0);
  do {
    if ((local_230.Object == (IPCGElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    bVar5 = IPCGElement::Execute(local_230.Object,(FPCGContext *)local_2d0._0_8_);
  } while (!bVar5);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_2d0._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_2d0 + 8),
             &PCGPinConstants::DefaultOutputLabel);
  iVar7 = local_2c0;
  ::FString::FString(&local_290,"Output count");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_290.Data.ArrayNum != 0) {
    FVar14.Data = local_290.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar7,1)
  ;
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if ((local_2c0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    local_2d8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_2d0._8_8_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fd20f6:
      if ((FPCGMetadataAttribute<double> *)local_2d8.Handle == (FPCGMetadataAttribute<double> *)0x0)
      goto LAB_149fd2116;
      pUVar11 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_2d8,pUVar11);
      FVar15 = local_2d8;
      if (!bVar5) goto LAB_149fd2116;
    }
    else {
      if ((FPCGMetadataAttribute<double> *)local_2d8.Handle != (FPCGMetadataAttribute<double> *)0x0)
      {
        UE::GC::MarkAsReachable(local_2d8.Handle);
        goto LAB_149fd20f6;
      }
LAB_149fd2116:
      FVar15.Handle = (UObject *)0x0;
    }
    ::FString::FString(&local_280,"Output point data");
    if ((FPCGMetadataAttribute<double> *)FVar15.Handle == (FPCGMetadataAttribute<double> *)0x0) {
      pcVar1 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_2b8,L"Expected \'%s\' to be not null.");
      (*pcVar1)(this,&local_2b8,0);
      if ((FName)local_2b8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      iVar7 = (**(code **)(*(longlong *)FVar15.Handle + 0x488))(FVar15.Handle);
      ::FString::FString(&local_270,"Output point count");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_270.Data.ArrayNum != 0) {
        FVar14.Data = local_270.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar7,2);
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        local_2b8.Data.AllocatorInstance.Data =
             *(FScriptContainerElement **)&(pUVar8->OutputAttribute).AttributeName;
        local_2b8.Data._8_8_ = PCGMetadataDomainID::Default._0_8_;
        local_2a8 = PCGMetadataDomainID::Default.DebugName;
        local_158.MetadataDomain.DebugName = PCGMetadataDomainID::Default.DebugName;
        local_158.MetadataDomain.Flag = PCGMetadataDomainID::Default.Flag;
        local_158.MetadataDomain._1_3_ = PCGMetadataDomainID::Default._1_3_;
        local_158.MetadataDomain.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
        local_158.Name = (FName)local_2b8.Data.AllocatorInstance.Data;
        this_00.Handle =
             (UObject *)
             UPCGMetadata::GetConstAttribute
                       (*(UPCGMetadata **)&FVar15.Handle[1].field_0x10,&local_158);
        if (((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0
            ) || ((short)*(longlong *)&this_00.Handle[2].field_0x20 != 1)) {
          this_00.Handle = (UObject *)0x0;
        }
        ::FString::FString(&local_260,"Distance attribute");
        if ((FPCGMetadataAttribute<double> *)this_00.Handle == (FPCGMetadataAttribute<double> *)0x0)
        {
          pcVar1 = *(code **)(*(longlong *)this + 0x28);
          ::FString::PrintfImpl(&local_220,L"Expected \'%s\' to be not null.");
          (*pcVar1)(this,&local_220,0);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_260.Data.AllocatorInstance.Data);
        }
        if (!bVar5) {
          piVar12 = (int *)(**(code **)(*(longlong *)FVar15.Handle + 0x5c8))(FVar15.Handle,0);
          dVar2 = FPCGMetadataAttribute<double>::GetValue
                            ((FPCGMetadataAttribute<double> *)this_00.Handle,*piVar12);
          ::FString::FString(&local_250,"Point 0 distance");
          dVar3 = __real_3f847ae147ae147b;
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_250.Data.ArrayNum != 0) {
            FVar14.Data = local_250.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,dVar2,
                             __real_4059000000000000,__real_3f847ae147ae147b);
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            piVar12 = (int *)(**(code **)(*(longlong *)FVar15.Handle + 0x5c8))(FVar15.Handle,1);
            dVar2 = FPCGMetadataAttribute<double>::GetValue
                              ((FPCGMetadataAttribute<double> *)this_00.Handle,*piVar12);
            ::FString::FString(&local_240,"Point 1 distance");
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_240.Data.ArrayNum != 0) {
              FVar14.Data = local_240.Data.AllocatorInstance.Data;
            }
            bVar5 = FAutomationTestBase::TestEqual
                              ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,dVar2,
                               __real_4049000000000000,dVar3);
            if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_240.Data.AllocatorInstance.Data);
            }
            if (bVar5) {
              bVar5 = true;
              goto LAB_149fd238d;
            }
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_149fd238d:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_2d0._8_8_,local_2c0);
  if ((FObjectPtr_u_0 *)local_2d0._8_8_ != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free((void *)local_2d0._8_8_);
  }
  if ((FPCGContext *)local_2d0._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_2d0._0_8_)(local_2d0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_230.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_208);
  return bVar5;
}

// GetBeautifiedTestName @ 149fd2430

FString * __thiscall
FPCGDistanceTest_PointToPoint::GetBeautifiedTestName
          (FPCGDistanceTest_PointToPoint *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Distance.PointToPoint");
  return __return_storage_ptr__;
}

