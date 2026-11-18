// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fc6440

EAutomationTestFlags __thiscall
FPCGNormalToDensityTest_Strength::GetTestFlags(FPCGNormalToDensityTest_Strength *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fc6450

bool __thiscall
FPCGNormalToDensityTest_Strength::IsStressTest(FPCGNormalToDensityTest_Strength *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fc6460

uint __thiscall
FPCGNormalToDensityTest_Strength::GetRequiredDeviceNum(FPCGNormalToDensityTest_Strength *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fc6470

FString * __thiscall
FPCGNormalToDensityTest_Strength::GetTestSourceFileName
          (FPCGNormalToDensityTest_Strength *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGNormalToDensityTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fc64a0

int __thiscall
FPCGNormalToDensityTest_Strength::GetTestSourceFileLine(FPCGNormalToDensityTest_Strength *this)

{
  return 0x6c;
}

// GetTests @ 149fc64b0

/* WARNING: Removing unreachable block (ram,0x000149fc659d) */
/* WARNING: Removing unreachable block (ram,0x000149fc6668) */

void __thiscall
FPCGNormalToDensityTest_Strength::GetTests
          (FPCGNormalToDensityTest_Strength *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.NormalToDensity.Strength");
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

// RunTest @ 149fc6690

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
FPCGNormalToDensityTest_Strength::RunTest(FPCGNormalToDensityTest_Strength *this,FString *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPCGNormalToDensitySettings *pUVar7;
  UPCGBasePointData *pUVar8;
  longlong lVar9;
  FPCGTaggedData *this_00;
  UClass *pUVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  UPCGSpatialData *this_01;
  undefined1 auStackY_2a8 [32];
  undefined1 local_278 [32];
  int local_258;
  FString local_250;
  FString local_240;
  FString local_230;
  FString local_220;
  TSharedPtr<IPCGElement,1> local_210;
  FString local_200;
  FString local_1f0;
  undefined4 *local_1e0 [2];
  int local_1d0;
  float *local_1c8 [2];
  int local_1b8;
  FTestData local_1a8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_118;
  TObjectPtr<UPCGData_const_>_u_0 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  void *local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  TVector<double>_u_0 local_68;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_278._16_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_278._16_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_278._16_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_1a8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_278 + 0x10));
  local_118._0_8_ = 0;
  local_118._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGNormalToDensitySettings>(&local_1a8,&local_118);
  pUVar7 = CastChecked<UPCGNormalToDensitySettings,UPCGSettings>(local_1a8.Settings);
  UPCGSettings::GetElement(local_1a8.Settings,&local_210);
  pUVar7->DensityMode = Set;
  pUVar7->Strength = 2.0;
  (pUVar7->Normal).field0_0x0._s_0.X = 0.866;
  (pUVar7->Normal).field0_0x0._s_0.Y = 0.0;
  (pUVar7->Normal).field0_0x0._s_0.Z = 0.5;
  pUVar8 = PCGTestsCommon::CreateBasePointData();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UPCGBasePointData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (**(code **)(pUVar8->_padding_ + 0x4c8))(pUVar8,local_1e0,1);
  if ((local_1d0 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < NumElements)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                         ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar4
     )) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_d8._16_8_ = 0;
  uStack_c0 = 0;
  local_80 = 0x100;
  local_e8.DebugPtr = (UPCGData *)0x0;
  *local_1e0[0] = 0x3f000000;
  local_a0 = 0;
  local_90 = 0;
  local_e0 = 0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (void *)0x0;
  local_88 = 0;
  local_7c = 0;
  local_74 = 0xffffffff;
  if (local_1a8.InputData.TaggedData.ArrayNum == local_1a8.InputData.TaggedData.ArrayMax) {
    local_1a8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_1a8.InputData,
                    &local_1a8.InputData.TaggedData.ArrayMax);
  }
  lVar9 = (longlong)local_1a8.InputData.TaggedData.ArrayNum;
  local_1a8.InputData.TaggedData.ArrayNum = local_1a8.InputData.TaggedData.ArrayNum + 1;
  this_00 = FPCGTaggedData::FPCGTaggedData
                      ((FPCGTaggedData *)
                       (local_1a8.InputData.TaggedData.AllocatorInstance.Data + lVar9 * 0x78),
                       (FPCGTaggedData *)&local_e8.ObjectPtr);
  local_90 = local_90 & 0xffffffff00000000;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar6 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_e8.ObjectPtr);
  FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar8);
  this_00->Pin = PCGPinConstants::DefaultInputLabel;
  PCGTestsCommon::FTestData::InitializeTestContext(&local_1a8,(UPCGNode *)local_278);
  do {
    if ((local_210.Object == (IPCGElement *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    bVar4 = IPCGElement::Execute(local_210.Object,(FPCGContext *)local_278._0_8_);
    uVar3 = local_278._0_8_;
  } while (!bVar4);
  iVar6 = (((FPCGDataCollection *)(local_278._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_278 + 0x18),"Output count");
  pwVar11 = L"";
  if (local_258 != 0) {
    pwVar11 = (wchar_t *)local_278._24_8_;
  }
  bVar4 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar11,iVar6,1);
  if ((wchar_t *)local_278._24_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_278._24_8_);
  }
  if (bVar4) {
    if (((((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    local_278._8_8_ =
         *(undefined8 *)(((FPCGDataCollection *)(uVar3 + 0x38))->TaggedData).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149fc6a9b:
      if ((UPCGSpatialData *)local_278._8_8_ == (UPCGSpatialData *)0x0) goto LAB_149fc6abb;
      pUVar10 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)(local_278 + 8),pUVar10);
      this_01 = (UPCGSpatialData *)local_278._8_8_;
      if (!bVar4) goto LAB_149fc6abb;
    }
    else {
      if ((UPCGSpatialData *)local_278._8_8_ != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_278._8_8_);
        goto LAB_149fc6a9b;
      }
LAB_149fc6abb:
      this_01 = (UPCGSpatialData *)0x0;
    }
    ::FString::FString(&local_250,"Output data");
    if (this_01 == (UPCGSpatialData *)0x0) {
      pcVar2 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_200,L"Expected \'%s\' to be not null.");
      (*pcVar2)(this,&local_200,0);
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((FName)local_250.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_250.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      local_38 = 0;
      local_37 = 0;
      local_33 = 0;
      local_31 = 0;
      local_68._s_0.X = 0.0;
      local_68._s_0.Y = 0.0;
      local_68._s_0.Z = 0.0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      pUVar8 = UPCGSpatialData::ToBasePointData
                         (this_01,(FPCGContext *)local_278._0_8_,(TBox<double> *)&local_68._s_0);
      ::FString::FString(&local_240,"Output point data");
      if (pUVar8 == (UPCGBasePointData *)0x0) {
        pcVar2 = *(code **)(*(longlong *)this + 0x28);
        ::FString::PrintfImpl(&local_1f0,L"Expected \'%s\' to be not null.");
        (*pcVar2)(this,&local_1f0,0);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      if (!bVar4) {
        iVar6 = (**(code **)(pUVar8->_padding_ + 0x488))(pUVar8);
        ::FString::FString(&local_230,"Output point count");
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_230.Data.ArrayNum != 0) {
          FVar12.Data = local_230.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestEqual
                          ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,iVar6,1);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          (**(code **)(pUVar8->_padding_ + 0x508))(pUVar8,local_1c8);
          if ((local_1b8 < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          fVar1 = *local_1c8[0];
          ::FString::FString(&local_220,"Output point density");
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_220.Data.ArrayNum != 0) {
            FVar12.Data = local_220.Data.AllocatorInstance.Data;
          }
          bVar4 = FAutomationTestBase::TestEqual
                            ((FAutomationTestBase *)this,(wchar_t *)FVar12.Data,fVar1,
                             __real_3f34fdf4,__real_3a83126f);
          if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_220.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            bVar4 = true;
            goto LAB_149fc6d05;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_149fc6d05:
  if ((FPCGContext *)local_278._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_278._0_8_)(local_278._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_210.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_1a8);
  return bVar4;
}

// GetBeautifiedTestName @ 149fc6d70

FString * __thiscall
FPCGNormalToDensityTest_Strength::GetBeautifiedTestName
          (FPCGNormalToDensityTest_Strength *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.NormalToDensity.Strength");
  return __return_storage_ptr__;
}

