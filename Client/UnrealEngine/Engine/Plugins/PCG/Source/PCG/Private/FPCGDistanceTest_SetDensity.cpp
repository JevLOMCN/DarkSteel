// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd2d40

EAutomationTestFlags __thiscall
FPCGDistanceTest_SetDensity::GetTestFlags(FPCGDistanceTest_SetDensity *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd2d50

bool __thiscall FPCGDistanceTest_SetDensity::IsStressTest(FPCGDistanceTest_SetDensity *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd2d60

uint __thiscall FPCGDistanceTest_SetDensity::GetRequiredDeviceNum(FPCGDistanceTest_SetDensity *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd2d70

FString * __thiscall
FPCGDistanceTest_SetDensity::GetTestSourceFileName
          (FPCGDistanceTest_SetDensity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDistanceTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd2da0

int __thiscall FPCGDistanceTest_SetDensity::GetTestSourceFileLine(FPCGDistanceTest_SetDensity *this)

{
  return 0x42;
}

// GetTests @ 149fd2db0

/* WARNING: Removing unreachable block (ram,0x000149fd2e9d) */
/* WARNING: Removing unreachable block (ram,0x000149fd2f68) */

void __thiscall
FPCGDistanceTest_SetDensity::GetTests
          (FPCGDistanceTest_SetDensity *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.Distance.SetDensity");
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

// RunTest @ 149fd2f90

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
FPCGDistanceTest_SetDensity::RunTest(FPCGDistanceTest_SetDensity *this,FString *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UPCGDistanceSettings *pUVar8;
  UPCGBasePointData *pUVar9;
  undefined1 *puVar10;
  UClass *pUVar11;
  float *pfVar12;
  FPCGDataPtrWrapper *pFVar13;
  ForAnyElementType FVar14;
  FObjectPtr_u_0 FVar15;
  undefined1 auStackY_2e8 [32];
  FObjectPtr_u_0 local_2b8;
  undefined1 local_2b0 [16];
  int local_2a0;
  undefined1 local_298 [56];
  EPCGExtraProperties local_260;
  undefined4 local_25f;
  undefined2 local_25b;
  undefined1 local_259;
  ForAnyElementType local_258;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  TSharedPtr<IPCGElement,1> local_200;
  FString local_1f0;
  FTestData local_1d8;
  TVector<double>_u_0 local_148;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_f8;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_258.Data = (FScriptContainerElement *)Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_258.Data != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_258.Data);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_1d8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_258);
  FVar15.Handle = (UObject *)0x0;
  local_f8._0_8_ = 0;
  local_f8._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGDistanceSettings>(&local_1d8,&local_f8);
  pUVar8 = CastChecked<UPCGDistanceSettings,UPCGSettings>(local_1d8.Settings);
  local_298._32_8_ = (FScriptContainerElement *)0x0;
  local_25f = 0;
  local_25b = 0;
  pUVar8->SourceShape = Center;
  pUVar8->TargetShape = Center;
  local_259 = 0;
  local_298._0_8_ = &___7FPCGAttributePropertySelector__6B_;
  local_298._8_8_ = 0;
  local_298._16_4_ = 0;
  local_298._20_4_ = 0;
  local_298._24_8_ = (UPCGSettingsInterface *)0x0;
  local_298._40_8_ = (FScriptContainerElement *)0x0;
  local_298._48_8_ = (FScriptContainerElement *)0x0;
  local_260 = Index;
  FPCGAttributePropertySelector::operator=
            (&pUVar8->OutputAttribute,(FPCGAttributePropertySelector *)local_298);
  uVar4 = local_298._40_8_;
  DestructItems<FString,int>((FString *)local_298._40_8_,local_298._48_4_);
  if ((FScriptContainerElement *)uVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)uVar4);
  }
  pUVar8->bSetDensity = true;
  pUVar8->MaximumDistance = 200.0;
  UPCGSettings::GetElement(local_1d8.Settings,&local_200);
  pUVar9 = PCGTestsCommon::CreateRandomBasePointData(2,0x2a,false);
  (**(code **)(pUVar9->_padding_ + 0x4c0))(pUVar9,&local_c8,1);
  if ((local_b8 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  uVar4 = _UNK_150f34e18;
  local_120 = 0;
  local_130 = ___xmm_00000000000000004059000000000000;
  uStack_128 = _UNK_150f34e18;
  *(undefined8 *)(local_c8 + 0x20) = ___xmm_00000000000000004059000000000000;
  *(undefined8 *)(local_c8 + 0x28) = uVar4;
  *(undefined8 *)(local_c8 + 0x30) = 0;
  *(undefined8 *)(local_c8 + 0x38) = 0;
  if ((local_b8 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar5
     )) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if ((int)(1 % (longlong)local_bc) == 1) {
    puVar10 = (undefined1 *)(local_c0 + local_c8);
  }
  else {
    puVar10 = local_a8;
  }
  local_118 = ___xmm_40490000000000000000000000000000;
  uStack_110 = _UNK_152030078;
  local_108 = 0;
  *(undefined8 *)(puVar10 + 0x20) = ___xmm_40490000000000000000000000000000;
  *(undefined8 *)(puVar10 + 0x28) = _UNK_152030078;
  *(undefined8 *)(puVar10 + 0x30) = 0;
  *(undefined8 *)(puVar10 + 0x38) = 0;
  if (local_1d8.InputData.TaggedData.ArrayNum == local_1d8.InputData.TaggedData.ArrayMax) {
    local_1d8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_1d8.InputData,
                    &local_1d8.InputData.TaggedData.ArrayMax);
  }
  pFVar13 = (FPCGDataPtrWrapper *)
            (local_1d8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_1d8.InputData.TaggedData.ArrayNum * 0x78);
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
  local_1d8.InputData.TaggedData.ArrayNum = local_1d8.InputData.TaggedData.ArrayNum + 1;
  FPCGDataPtrWrapper::operator=(pFVar13,(UPCGData *)pUVar9);
  if (local_1d8.InputData.TaggedData.ArrayNum == local_1d8.InputData.TaggedData.ArrayMax) {
    local_1d8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_1d8.InputData,
                    &local_1d8.InputData.TaggedData.ArrayMax);
  }
  local_148._s_0.Z = 0.0;
  local_148._s_0.X = 0.0;
  local_148._s_0.Y = 0.0;
  pFVar13 = (FPCGDataPtrWrapper *)
            (local_1d8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_1d8.InputData.TaggedData.ArrayNum * 0x78);
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
  local_1d8.InputData.TaggedData.ArrayNum = local_1d8.InputData.TaggedData.ArrayNum + 1;
  pUVar9 = PCGTestsCommon::CreateBasePointData((TVector<double> *)&local_148._s_0);
  FPCGDataPtrWrapper::operator=(pFVar13,(UPCGData *)pUVar9);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_1d8,(UPCGNode *)local_2b0);
  do {
    if ((local_200.Object == (IPCGElement *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    bVar5 = IPCGElement::Execute(local_200.Object,(FPCGContext *)local_2b0._0_8_);
  } while (!bVar5);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_2b0._0_8_ + 0x38),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_2b0 + 8),
             &PCGPinConstants::DefaultOutputLabel);
  iVar7 = local_2a0;
  ::FString::FString(&local_250,"Output count");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_250.Data.ArrayNum != 0) {
    FVar14.Data = local_250.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar7,1)
  ;
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if ((local_2a0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    local_2b8 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_2b0._8_8_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fd3448:
      if (local_2b8.Handle != (UObject *)0x0) {
        pUVar11 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_2b8,pUVar11);
        if (bVar5) {
          FVar15 = local_2b8;
        }
      }
    }
    else if (local_2b8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_2b8.Handle);
      goto LAB_149fd3448;
    }
    ::FString::FString(&local_240,"Output point data");
    if (FVar15.Handle == (UObject *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_1f0,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_1f0,0);
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    if (!bVar5) {
      iVar7 = (**(code **)(*(longlong *)FVar15.Handle + 0x488))(FVar15.Handle);
      ::FString::FString(&local_230,"Output point count");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_230.Data.ArrayNum != 0) {
        FVar14.Data = local_230.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestEqual
                        ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,iVar7,2);
      if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        pfVar12 = (float *)(**(code **)(*(longlong *)FVar15.Handle + 0x598))(FVar15.Handle,0);
        fVar1 = *pfVar12;
        ::FString::FString(&local_220,"Point 0 distance");
        fVar3 = __real_3c23d70a;
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_220.Data.ArrayNum != 0) {
          FVar14.Data = local_220.Data.AllocatorInstance.Data;
        }
        bVar5 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,fVar1,__real_3f000000,
                           __real_3c23d70a);
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          pfVar12 = (float *)(**(code **)(*(longlong *)FVar15.Handle + 0x598))(FVar15.Handle,1);
          fVar1 = *pfVar12;
          ::FString::FString(&local_210,"Point 1 distance");
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_210.Data.ArrayNum != 0) {
            FVar14.Data = local_210.Data.AllocatorInstance.Data;
          }
          bVar5 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar14.Data,fVar1,
                             __real_3e800000,fVar3);
          if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            bVar5 = true;
            goto LAB_149fd35f6;
          }
        }
      }
    }
  }
  bVar5 = false;
LAB_149fd35f6:
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_2b0._8_8_,local_2a0);
  if ((FObjectPtr_u_0 *)local_2b0._8_8_ != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free((void *)local_2b0._8_8_);
  }
  if ((FPCGContext *)local_2b0._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_2b0._0_8_)(local_2b0._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_200.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_1d8);
  return bVar5;
}

// GetBeautifiedTestName @ 149fd3690

FString * __thiscall
FPCGDistanceTest_SetDensity::GetBeautifiedTestName
          (FPCGDistanceTest_SetDensity *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.Distance.SetDensity");
  return __return_storage_ptr__;
}

