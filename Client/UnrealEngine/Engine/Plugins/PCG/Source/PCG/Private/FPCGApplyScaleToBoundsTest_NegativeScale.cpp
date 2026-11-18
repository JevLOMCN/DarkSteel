// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f754b0

EAutomationTestFlags __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::GetTestFlags
          (FPCGApplyScaleToBoundsTest_NegativeScale *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f754c0

bool __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::IsStressTest
          (FPCGApplyScaleToBoundsTest_NegativeScale *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f754d0

uint __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::GetRequiredDeviceNum
          (FPCGApplyScaleToBoundsTest_NegativeScale *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f754e0

FString * __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::GetTestSourceFileName
          (FPCGApplyScaleToBoundsTest_NegativeScale *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGApplyScaleToBoundsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f75510

int __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::GetTestSourceFileLine
          (FPCGApplyScaleToBoundsTest_NegativeScale *this)

{
  return 0x3a;
}

// GetTests @ 149f75520

/* WARNING: Removing unreachable block (ram,0x000149f7560d) */
/* WARNING: Removing unreachable block (ram,0x000149f756d8) */

void __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::GetTests
          (FPCGApplyScaleToBoundsTest_NegativeScale *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.ApplyScaleToBounds.NegativeScale");
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

// RunTest @ 149f75700

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
FPCGApplyScaleToBoundsTest_NegativeScale::RunTest
          (FPCGApplyScaleToBoundsTest_NegativeScale *this,FString *param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  UPCGBasePointData *pUVar21;
  UClass *pUVar22;
  undefined1 *puVar23;
  longlong lVar24;
  wchar_t *pwVar25;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  FObjectPtr_u_0 FVar29;
  FObjectPtr_u_0 FVar30;
  uint uVar31;
  FPCGDataPtrWrapper *this_00;
  undefined1 auStackY_4c8 [32];
  FObjectPtr_u_0 local_498;
  undefined1 local_490 [24];
  int local_478;
  FString local_470;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_460;
  int local_458;
  FString local_450;
  FString local_440;
  FString local_430;
  TSharedPtr<IPCGElement,1> local_420;
  FString local_410;
  TVector<double>_u_0 local_3f8;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_398;
  double local_378;
  double dStack_370;
  double local_368;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_338;
  longlong local_318;
  int local_310;
  int local_30c;
  int local_308;
  longlong local_2e8;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_290;
  FTestData local_288;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_1f8;
  longlong local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined1 local_1a8 [96];
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  local_490._8_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_490._8_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_490._8_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_288,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_490 + 8));
  if (local_288.InputData.TaggedData.ArrayNum == local_288.InputData.TaggedData.ArrayMax) {
    local_288.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_288.InputData,
                    &local_288.InputData.TaggedData.ArrayMax);
  }
  local_1f8._0_8_ = 0;
  this_00 = (FPCGDataPtrWrapper *)
            (local_288.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_288.InputData.TaggedData.ArrayNum * 0x78);
  local_1f8._40_8_ = 0;
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  this_00[6].Data.field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)PCGPinConstants::DefaultInputLabel;
  local_288.InputData.TaggedData.ArrayNum = local_288.InputData.TaggedData.ArrayNum + 1;
  PCGTestsCommon::GenerateSettings<UPCGApplyScaleToBoundsSettings>(&local_288,&local_1f8);
  pUVar21 = PCGTestsCommon::CreateRandomBasePointData(10,0x2a,false);
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar21);
  (**(code **)(pUVar21->_padding_ + 0x4c0))(pUVar21,&local_1c8,1);
  dVar15 = _UNK_15097b468;
  dVar14 = ___xmm_c000000000000000c000000000000000;
  dVar9 = __real_c000000000000000;
  FVar29.Handle = (UObject *)0x0;
  FVar30.Handle = FVar29.Handle;
  while (iVar19 = FVar30._0_4_, iVar19 != local_1b8) {
    if (iVar19 == iVar19 % local_1bc) {
      puVar23 = (undefined1 *)((longlong)local_1c0 * (longlong)(iVar19 % local_1bc) + local_1c8);
    }
    else {
      puVar23 = local_1a8;
    }
    local_2a8 = __real_c000000000000000;
    local_2b8 = ___xmm_c000000000000000c000000000000000;
    dStack_2b0 = _UNK_15097b468;
    FVar30._0_4_ = iVar19 + 1;
    FVar30._4_4_ = 0;
    *(double *)(puVar23 + 0x40) = ___xmm_c000000000000000c000000000000000;
    *(double *)(puVar23 + 0x48) = _UNK_15097b468;
    *(double *)(puVar23 + 0x50) = __real_c000000000000000;
    *(undefined8 *)(puVar23 + 0x58) = 0;
  }
  UPCGSettings::GetElement(local_288.Settings,&local_420);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_288,(UPCGNode *)local_490);
  do {
    if ((local_420.Object == (IPCGElement *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar3 = (code *)swi(3);
      uVar18 = (*pcVar3)();
      return (bool)uVar18;
    }
    bVar17 = IPCGElement::Execute(local_420.Object,(FPCGContext *)local_490._0_8_);
    uVar16 = local_490._0_8_;
  } while (!bVar17);
  iVar19 = (((FPCGDataCollection *)(local_490._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_490 + 0x10),"Output count");
  pwVar25 = L"";
  if (local_478 != 0) {
    pwVar25 = (wchar_t *)local_490._16_8_;
  }
  bVar17 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar25,iVar19,1);
  if ((wchar_t *)local_490._16_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_490._16_8_);
  }
  if (bVar17) {
    if (((((FPCGDataCollection *)(uVar16 + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar3 = (code *)swi(3);
      uVar18 = (*pcVar3)();
      return (bool)uVar18;
    }
    local_498 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (((FPCGDataCollection *)(uVar16 + 0x38))->TaggedData).AllocatorInstance.Data)->
                Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f75a50:
      if (local_498.Handle == (UObject *)0x0) goto LAB_149f75a70;
      pUVar22 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar17 = FObjectPtr::IsA((FObjectPtr *)&local_498,pUVar22);
      FVar30 = local_498;
      if (!bVar17) goto LAB_149f75a70;
    }
    else {
      if (local_498.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_498.Handle);
        goto LAB_149f75a50;
      }
LAB_149f75a70:
      FVar30.Handle = FVar29.Handle;
    }
    ::FString::FString(&local_470,"Output point data");
    if (FVar30.Handle == (UObject *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_410,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_410,0);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      bVar17 = true;
    }
    else {
      bVar17 = false;
    }
    if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data.AllocatorInstance.Data);
    }
    if (!bVar17) {
      iVar19 = (**(code **)(*(longlong *)FVar30.Handle + 0x488))(FVar30.Handle);
      ::FString::FString((FString *)&local_460.ObjectPtr,"Output point count");
      TVar26 = (TObjectPtr<UPCGSettingsInterface>_u_0)L"";
      if (local_458 != 0) {
        TVar26 = local_460;
      }
      bVar17 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)TVar26.DebugPtr,iVar19,10);
      if (local_460.DebugPtr != (UPCGSettingsInterface *)0x0) {
        FMemory::Free(local_460.DebugPtr);
      }
      if (bVar17) {
        (**(code **)(*(longlong *)FVar30.Handle + 0x500))(FVar30.Handle,&local_148);
        (**(code **)(*(longlong *)FVar30.Handle + 0x510))(FVar30.Handle,&local_318);
        (**(code **)(*(longlong *)FVar30.Handle + 0x518))(FVar30.Handle,&local_2e8);
        iVar19 = (**(code **)(*(longlong *)FVar30.Handle + 0x488))(FVar30.Handle);
        dVar13 = _UNK_15076c718;
        dVar12 = ___xmm_bff0000000000000bff0000000000000;
        dVar11 = _UNK_150689698;
        dVar10 = ___xmm_40000000000000004000000000000000;
        dVar8 = __real_4000000000000000;
        dVar7 = __real_bff0000000000000;
        fVar6 = __real_38d1b717;
        if (0 < iVar19) {
          do {
            uVar28 = FVar29._0_4_;
            uVar31 = ~uVar28 >> 0x1f;
            uVar20 = 0;
            if ((int)uVar28 < local_308) {
              uVar20 = uVar31;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              uVar18 = (*pcVar3)();
              return (bool)uVar18;
            }
            lVar24 = (longlong)((int)uVar28 % local_30c) * (longlong)local_310;
            pdVar1 = (double *)(lVar24 + local_318);
            dVar4 = *pdVar1;
            dVar5 = pdVar1[1];
            dVar2 = *(double *)(lVar24 + 0x10 + local_318);
            ::FString::FString(&local_450,"Output points should have a Bounds Min of -2");
            local_3f8._s_0.Z = dVar9;
            FVar27.Data = (FScriptContainerElement *)L"";
            if (local_450.Data.ArrayNum != 0) {
              FVar27.Data = local_450.Data.AllocatorInstance.Data;
            }
            local_3f8._s_0.X = dVar14;
            local_3f8._s_0.Y = dVar15;
            local_3d8._s_0.X = dVar4;
            local_3d8._s_0.Y = dVar5;
            local_3d8._s_0.Z = dVar2;
            bVar17 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,
                                (TVector<double> *)&local_3d8._s_0,
                                (TVector<double> *)&local_3f8._s_0,fVar6);
            if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_450.Data.AllocatorInstance.Data);
            }
            if (!bVar17) goto LAB_149f75e9c;
            uVar20 = 0;
            if ((int)uVar28 < local_2d8) {
              uVar20 = uVar31;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              uVar18 = (*pcVar3)();
              return (bool)uVar18;
            }
            lVar24 = (longlong)((int)uVar28 % local_2dc) * (longlong)local_2e0;
            pdVar1 = (double *)(lVar24 + local_2e8);
            dVar4 = *pdVar1;
            dVar5 = pdVar1[1];
            dVar2 = *(double *)(lVar24 + 0x10 + local_2e8);
            ::FString::FString(&local_440,"Output points should have a Bounds Max of 2");
            local_3b8._s_0.Z = dVar8;
            FVar27.Data = (FScriptContainerElement *)L"";
            if (local_440.Data.ArrayNum != 0) {
              FVar27.Data = local_440.Data.AllocatorInstance.Data;
            }
            local_3b8._s_0.X = dVar10;
            local_3b8._s_0.Y = dVar11;
            local_398._s_0.X = dVar4;
            local_398._s_0.Y = dVar5;
            local_398._s_0.Z = dVar2;
            bVar17 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,
                                (TVector<double> *)&local_398._s_0,
                                (TVector<double> *)&local_3b8._s_0,fVar6);
            if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_440.Data.AllocatorInstance.Data);
            }
            if (!bVar17) goto LAB_149f75e9c;
            uVar20 = 0;
            if ((int)uVar28 < local_138) {
              uVar20 = uVar31;
            }
            if ((uVar20 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar17)) {
              pcVar3 = (code *)swi(3);
              uVar18 = (*pcVar3)();
              return (bool)uVar18;
            }
            lVar24 = (longlong)((int)uVar28 % local_13c) * (longlong)local_140;
            pdVar1 = (double *)(lVar24 + 0x40 + local_148);
            dVar2 = *pdVar1;
            dVar4 = pdVar1[1];
            local_368 = *(double *)(lVar24 + 0x50 + local_148);
            local_378 = dVar2;
            dStack_370 = dVar4;
            ::FString::FString(&local_430,"Output points Bounds Max should be negative -1");
            local_290 = local_368;
            FVar27.Data = (FScriptContainerElement *)L"";
            if (local_430.Data.ArrayNum != 0) {
              FVar27.Data = local_430.Data.AllocatorInstance.Data;
            }
            local_338._s_0.Z = local_368;
            local_358._s_0.Z = dVar7;
            local_358._s_0.X = dVar12;
            local_358._s_0.Y = dVar13;
            local_338._s_0.X = dVar2;
            local_338._s_0.Y = dVar4;
            bVar17 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,
                                (TVector<double> *)&local_338._s_0,
                                (TVector<double> *)&local_358._s_0,fVar6);
            if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_430.Data.AllocatorInstance.Data);
            }
            if (!bVar17) goto LAB_149f75e9c;
            FVar29._0_4_ = uVar28 + 1;
            FVar29._4_4_ = 0;
            iVar19 = (**(code **)(*(longlong *)FVar30.Handle + 0x488))(FVar30.Handle);
          } while ((int)FVar29._0_4_ < iVar19);
        }
        bVar17 = true;
        goto LAB_149f75e9e;
      }
    }
  }
LAB_149f75e9c:
  bVar17 = false;
LAB_149f75e9e:
  if ((FPCGContext *)local_490._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_490._0_8_)(local_490._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_420.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_288);
  return bVar17;
}

// GetBeautifiedTestName @ 149f75f70

FString * __thiscall
FPCGApplyScaleToBoundsTest_NegativeScale::GetBeautifiedTestName
          (FPCGApplyScaleToBoundsTest_NegativeScale *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ApplyScaleToBounds.NegativeScale");
  return __return_storage_ptr__;
}

