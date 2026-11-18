// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 14a007110

EAutomationTestFlags __thiscall
FPCGSortPointsTest_SameValues::GetTestFlags(FPCGSortPointsTest_SameValues *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a007120

bool __thiscall FPCGSortPointsTest_SameValues::IsStressTest(FPCGSortPointsTest_SameValues *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a007130

uint __thiscall
FPCGSortPointsTest_SameValues::GetRequiredDeviceNum(FPCGSortPointsTest_SameValues *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a007140

FString * __thiscall
FPCGSortPointsTest_SameValues::GetTestSourceFileName
          (FPCGSortPointsTest_SameValues *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a007170

int __thiscall
FPCGSortPointsTest_SameValues::GetTestSourceFileLine(FPCGSortPointsTest_SameValues *this)

{
  return 0xad;
}

// GetTests @ 14a007180

/* WARNING: Removing unreachable block (ram,0x00014a00726d) */
/* WARNING: Removing unreachable block (ram,0x00014a007338) */

void __thiscall
FPCGSortPointsTest_SameValues::GetTests
          (FPCGSortPointsTest_SameValues *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.SortAttributes.SameValues");
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

// RunTest @ 14a007360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSortPointsTest_SameValues::RunTest(FPCGSortPointsTest_SameValues *this,FString *param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  FObjectPtr_u_0 *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined1 uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  UPCGPointData *pUVar33;
  UClass *pUVar34;
  longlong lVar35;
  ForAnyElementType FVar36;
  uint uVar37;
  FObjectPtr_u_0 FVar38;
  uint uVar39;
  FObjectPtr_u_0 FVar40;
  FObjectPtr_u_0 FVar41;
  float fVar42;
  undefined1 auStackY_4c8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_488;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_478;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_468;
  FObjectPtr_u_0 local_458;
  FObjectPtr_u_0 local_450;
  undefined8 *local_448;
  undefined8 local_440;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_438;
  FString local_428;
  FString local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  FPCGAttributePropertySelector local_3c8;
  longlong local_388;
  int local_380;
  int local_37c;
  int local_378;
  longlong local_370;
  int local_368;
  int local_364;
  int local_360;
  longlong local_358;
  int local_350;
  int local_34c;
  int local_348;
  longlong local_340;
  int local_338;
  int local_334;
  int local_330;
  FString local_328;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  FStringFormatArg local_2f8;
  FStringFormatArg local_2d8;
  FStringFormatArg local_2b8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  longlong local_158;
  int local_150;
  int local_14c;
  int local_148;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  FVar40.Handle = (UObject *)0x0;
  local_440 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_3c8);
  FPCGAttributePropertySelector::SetDomainName(&local_3c8,(FName)0x0,true);
  FPCGAttributePropertySelector::SetPointProperty(&local_3c8,Density,true);
  DestructItems<FString,int>
            ((FString *)local_3c8.ExtraNames.AllocatorInstance.Data,local_3c8.ExtraNames.ArrayNum);
  local_3c8.ExtraNames.ArrayNum = 0;
  if (local_3c8.ExtraNames.ArrayMax == 0) {
    local_3c8.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,local_3c8.ExtraNames.ArrayMax,&local_3c8.ExtraNames.AllocatorInstance,0,
               &local_3c8.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>
              (local_3c8.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0);
  }
  pUVar33 = PCGTestsCommon::CreateRandomPointData<UPCGPointData,0>(100,0x2a,false);
  SortCommonTestData::RunSortElementOnData
            ((EPCGSortMethod)&local_448,(UPCGData *)0x0,
             (FPCGAttributePropertyInputSelector *)pUVar33);
  DestructItems<FString,int>
            ((FString *)local_3c8.ExtraNames.AllocatorInstance.Data,local_3c8.ExtraNames.ArrayNum);
  if (local_3c8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.ExtraNames.AllocatorInstance.Data);
  }
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_448 + 1),&local_438,&PCGPinConstants::DefaultInputLabel);
  puVar26 = local_448;
  iVar29 = *(int *)(local_448 + 8);
  ::FString::FString(&local_428,"Output count");
  FVar36.Data = (FScriptContainerElement *)L"";
  if (local_428.Data.ArrayNum != 0) {
    FVar36.Data = local_428.Data.AllocatorInstance.Data;
  }
  bVar27 = FAutomationTestBase::TestEqual
                     ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,iVar29,1);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  if (bVar27) {
    if ((local_438.ArrayNum < 1) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar5 = (code *)swi(3);
      uVar28 = (*pcVar5)();
      return (bool)uVar28;
    }
    FVar36.Data = local_438.AllocatorInstance.Data;
    if ((*(int *)(puVar26 + 8) < 1) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar27)) {
      pcVar5 = (code *)swi(3);
      uVar28 = (*pcVar5)();
      return (bool)uVar28;
    }
    local_458 = *(FObjectPtr_u_0 *)FVar36.Data;
    pFVar4 = (FObjectPtr_u_0 *)puVar26[7];
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a0075ca:
      if (local_458.Handle == (UObject *)0x0) goto LAB_14a0075ea;
      pUVar34 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar27 = FObjectPtr::IsA((FObjectPtr *)&local_458,pUVar34);
      FVar41 = local_458;
      if (!bVar27) goto LAB_14a0075ea;
    }
    else {
      if (local_458.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_458.Handle);
        goto LAB_14a0075ca;
      }
LAB_14a0075ea:
      FVar41.Handle = FVar40.Handle;
    }
    local_450 = (FObjectPtr_u_0)pFVar4->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14a007610:
      if (local_450.Handle == (UObject *)0x0) goto LAB_14a007630;
      pUVar34 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar27 = FObjectPtr::IsA((FObjectPtr *)&local_450,pUVar34);
      FVar38 = local_450;
      if (!bVar27) goto LAB_14a007630;
    }
    else {
      if (local_450.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_450.Handle);
        goto LAB_14a007610;
      }
LAB_14a007630:
      FVar38.Handle = FVar40.Handle;
    }
    ::FString::FString(&local_418,"Output is a point data");
    if (FVar38.Handle == (UObject *)0x0) {
      pcVar5 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_328,L"Expected \'%s\' to be not null.");
      (*pcVar5)(this,&local_328,0);
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      bVar27 = true;
    }
    else {
      bVar27 = false;
    }
    if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data.AllocatorInstance.Data);
    }
    if (!bVar27) {
      if (((FVar41.Handle == (UObject *)0x0) || (FVar38.Handle == (UObject *)0x0)) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("InPointData && OutPointData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGSortAttributesTest.cpp"
                              ,0xc2,L""), bVar27)) {
        pcVar5 = (code *)swi(3);
        uVar28 = (*pcVar5)();
        return (bool)uVar28;
      }
      iVar29 = (**(code **)(*(longlong *)FVar38.Handle + 0x488))(FVar38.Handle);
      iVar30 = (**(code **)(*(longlong *)FVar41.Handle + 0x488))(FVar41.Handle);
      ::FString::FString(&local_408,"Arrays have the same number of points:");
      FVar36.Data = (FScriptContainerElement *)L"";
      if (local_408.Data.ArrayNum != 0) {
        FVar36.Data = local_408.Data.AllocatorInstance.Data;
      }
      bVar27 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,iVar30,iVar29);
      if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.Data.AllocatorInstance.Data);
      }
      if (bVar27) {
        (**(code **)(*(longlong *)FVar41.Handle + 0x530))(FVar41.Handle,&local_388);
        (**(code **)(*(longlong *)FVar41.Handle + 0x508))(FVar41.Handle,&local_358);
        (**(code **)(*(longlong *)FVar41.Handle + 0x500))(FVar41.Handle,&local_1d8);
        (**(code **)(*(longlong *)FVar38.Handle + 0x530))(FVar38.Handle,&local_370);
        (**(code **)(*(longlong *)FVar38.Handle + 0x508))(FVar38.Handle,&local_340);
        (**(code **)(*(longlong *)FVar38.Handle + 0x500))(FVar38.Handle,&local_158);
        iVar29 = (**(code **)(*(longlong *)FVar41.Handle + 0x488))(FVar41.Handle);
        fVar42 = __real_38d1b717;
        if (0 < iVar29) {
          do {
            uVar39 = FVar40._0_4_;
            uVar37 = ~uVar39 >> 0x1f;
            uVar31 = 0;
            if ((int)uVar39 < local_378) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar27)) {
              pcVar5 = (code *)swi(3);
              uVar28 = (*pcVar5)();
              return (bool)uVar28;
            }
            iVar29 = *(int *)((longlong)((int)uVar39 % local_37c) * (longlong)local_380 + local_388)
            ;
            uVar32 = 0;
            uVar31 = uVar32;
            if ((int)uVar39 < local_360) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar27)) {
              pcVar5 = (code *)swi(3);
              uVar28 = (*pcVar5)();
              return (bool)uVar28;
            }
            iVar30 = *(int *)((longlong)((int)uVar39 % local_364) * (longlong)local_368 + local_370)
            ;
            FStringFormatArg::FStringFormatArg(&local_2f8,uVar39);
            local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_488.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_488.AllocatorInstance,1,&local_488.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_488.AllocatorInstance.Data,&local_2f8,1);
            ::FString::FormatImpl
                      (&local_3f8,L"UnsortedArray[{0}].Seed is equal to SortedArray[{0}].Seed",
                       &local_488);
            FVar36.Data = (FScriptContainerElement *)L"";
            if (local_3f8.Data.ArrayNum != 0) {
              FVar36.Data = local_3f8.Data.AllocatorInstance.Data;
            }
            bVar27 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,iVar30,iVar29);
            if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_488.AllocatorInstance.Data,local_488.ArrayNum);
            if ((FStringFormatArg *)local_488.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_488.AllocatorInstance.Data);
            }
            if (local_2f8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_2f8.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar27) goto LAB_14a007dcf;
            uVar31 = uVar32;
            if ((int)uVar39 < local_348) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar27)) {
              pcVar5 = (code *)swi(3);
              uVar28 = (*pcVar5)();
              return (bool)uVar28;
            }
            fVar2 = *(float *)((longlong)((int)uVar39 % local_34c) * (longlong)local_350 + local_358
                              );
            uVar31 = uVar32;
            if ((int)uVar39 < local_330) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar27)) {
              pcVar5 = (code *)swi(3);
              uVar28 = (*pcVar5)();
              return (bool)uVar28;
            }
            fVar3 = *(float *)((longlong)((int)uVar39 % local_334) * (longlong)local_338 + local_340
                              );
            FStringFormatArg::FStringFormatArg(&local_2d8,uVar39);
            local_478.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_478.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_478.AllocatorInstance,1,&local_478.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_478.AllocatorInstance.Data,&local_2d8,1);
            ::FString::FormatImpl
                      (&local_3e8,L"UnsortedArray[{0}].Density is equal to SortedArray[{0}].Density"
                       ,&local_478);
            FVar36.Data = (FScriptContainerElement *)L"";
            if (local_3e8.Data.ArrayNum != 0) {
              FVar36.Data = local_3e8.Data.AllocatorInstance.Data;
            }
            bVar27 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,fVar3,fVar2,
                                fVar42);
            if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_478.AllocatorInstance.Data,local_478.ArrayNum);
            if ((FStringFormatArg *)local_478.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_478.AllocatorInstance.Data);
            }
            if (local_2d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_2d8.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar27) goto LAB_14a007dcf;
            uVar31 = uVar32;
            if ((int)uVar39 < local_1c8) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar27)) {
              pcVar5 = (code *)swi(3);
              uVar28 = (*pcVar5)();
              return (bool)uVar28;
            }
            lVar35 = (longlong)((int)uVar39 % local_1cc) * (longlong)local_1d0;
            pdVar1 = (double *)(lVar35 + 0x40 + local_1d8);
            local_318 = *pdVar1;
            dStack_310 = pdVar1[1];
            dVar6 = *(double *)(lVar35 + local_1d8);
            dVar7 = ((double *)(lVar35 + local_1d8))[1];
            pdVar1 = (double *)(lVar35 + 0x10 + local_1d8);
            dVar8 = *pdVar1;
            dVar9 = pdVar1[1];
            pdVar1 = (double *)(lVar35 + 0x20 + local_1d8);
            dVar10 = *pdVar1;
            dVar11 = pdVar1[1];
            pdVar1 = (double *)(lVar35 + 0x30 + local_1d8);
            dVar12 = *pdVar1;
            dVar13 = pdVar1[1];
            pdVar1 = (double *)(lVar35 + 0x50 + local_1d8);
            local_308 = *pdVar1;
            dStack_300 = pdVar1[1];
            if ((int)uVar39 < local_148) {
              uVar32 = uVar37;
            }
            if ((uVar32 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar27)) {
              pcVar5 = (code *)swi(3);
              uVar28 = (*pcVar5)();
              return (bool)uVar28;
            }
            lVar35 = (longlong)((int)uVar39 % local_14c) * (longlong)local_150;
            dVar14 = *(double *)(lVar35 + local_158);
            dVar15 = ((double *)(lVar35 + local_158))[1];
            pdVar1 = (double *)(lVar35 + 0x10 + local_158);
            dVar16 = *pdVar1;
            dVar17 = pdVar1[1];
            pdVar1 = (double *)(lVar35 + 0x20 + local_158);
            dVar18 = *pdVar1;
            dVar19 = pdVar1[1];
            pdVar1 = (double *)(lVar35 + 0x30 + local_158);
            dVar20 = *pdVar1;
            dVar21 = pdVar1[1];
            pdVar1 = (double *)(lVar35 + 0x40 + local_158);
            dVar22 = *pdVar1;
            dVar23 = pdVar1[1];
            pdVar1 = (double *)(lVar35 + 0x50 + local_158);
            dVar24 = *pdVar1;
            dVar25 = pdVar1[1];
            FStringFormatArg::FStringFormatArg(&local_2b8,uVar39);
            local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_468.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_468.AllocatorInstance,1,&local_468.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_468.AllocatorInstance.Data,&local_2b8,1);
            ::FString::FormatImpl
                      (&local_3d8,
                       L"UnsortedArray[{0}].Transform is equal to SortedArray[{0}].Transform",
                       &local_468);
            fVar42 = __real_38d1b717;
            FVar36.Data = (FScriptContainerElement *)L"";
            if (local_3d8.Data.ArrayNum != 0) {
              FVar36.Data = local_3d8.Data.AllocatorInstance.Data;
            }
            local_298.Scale3D.XY.m128d_f64[0] = local_318;
            local_298.Scale3D.XY.m128d_f64[1] = dStack_310;
            local_298.Scale3D.ZW.m128d_f64[0] = local_308;
            local_298.Scale3D.ZW.m128d_f64[1] = dStack_300;
            local_298.Rotation.XY.m128d_f64[0] = dVar6;
            local_298.Rotation.XY.m128d_f64[1] = dVar7;
            local_298.Rotation.ZW.m128d_f64[0] = dVar8;
            local_298.Rotation.ZW.m128d_f64[1] = dVar9;
            local_298.Translation.XY.m128d_f64[0] = dVar10;
            local_298.Translation.XY.m128d_f64[1] = dVar11;
            local_298.Translation.ZW.m128d_f64[0] = dVar12;
            local_298.Translation.ZW.m128d_f64[1] = dVar13;
            local_238.Rotation.XY.m128d_f64[0] = dVar14;
            local_238.Rotation.XY.m128d_f64[1] = dVar15;
            local_238.Rotation.ZW.m128d_f64[0] = dVar16;
            local_238.Rotation.ZW.m128d_f64[1] = dVar17;
            local_238.Translation.XY.m128d_f64[0] = dVar18;
            local_238.Translation.XY.m128d_f64[1] = dVar19;
            local_238.Translation.ZW.m128d_f64[0] = dVar20;
            local_238.Translation.ZW.m128d_f64[1] = dVar21;
            local_238.Scale3D.XY.m128d_f64[0] = dVar22;
            local_238.Scale3D.XY.m128d_f64[1] = dVar23;
            local_238.Scale3D.ZW.m128d_f64[0] = dVar24;
            local_238.Scale3D.ZW.m128d_f64[1] = dVar25;
            bVar27 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar36.Data,&local_238,
                                &local_298,__real_38d1b717);
            if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_468.AllocatorInstance.Data,local_468.ArrayNum);
            if ((FStringFormatArg *)local_468.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_468.AllocatorInstance.Data);
            }
            if (local_2b8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_2b8.StringValue.Data.AllocatorInstance.Data);
            }
            if (!bVar27) goto LAB_14a007dcf;
            FVar40._0_4_ = uVar39 + 1;
            FVar40._4_4_ = 0;
            iVar29 = (**(code **)(*(longlong *)FVar41.Handle + 0x488))(FVar41.Handle);
          } while ((int)FVar40._0_4_ < iVar29);
        }
        bVar27 = true;
        goto LAB_14a007dd1;
      }
    }
  }
LAB_14a007dcf:
  bVar27 = false;
LAB_14a007dd1:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_438.AllocatorInstance.Data,local_438.ArrayNum);
  if ((FPCGTaggedData *)local_438.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_438.AllocatorInstance.Data);
  }
  if (local_448 != (undefined8 *)0x0) {
    (**(code **)*local_448)(local_448,1);
  }
  return bVar27;
}

// GetBeautifiedTestName @ 14a007eb0

FString * __thiscall
FPCGSortPointsTest_SameValues::GetBeautifiedTestName
          (FPCGSortPointsTest_SameValues *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.SortAttributes.SameValues");
  return __return_storage_ptr__;
}

