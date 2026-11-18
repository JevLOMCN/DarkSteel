// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f74a20

EAutomationTestFlags __thiscall
FPCGApplyScaleToBoundsTest_Basic::GetTestFlags(FPCGApplyScaleToBoundsTest_Basic *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f74a30

bool __thiscall
FPCGApplyScaleToBoundsTest_Basic::IsStressTest(FPCGApplyScaleToBoundsTest_Basic *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f74a40

uint __thiscall
FPCGApplyScaleToBoundsTest_Basic::GetRequiredDeviceNum(FPCGApplyScaleToBoundsTest_Basic *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f74a50

FString * __thiscall
FPCGApplyScaleToBoundsTest_Basic::GetTestSourceFileName
          (FPCGApplyScaleToBoundsTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGApplyScaleToBoundsTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f74a80

int __thiscall
FPCGApplyScaleToBoundsTest_Basic::GetTestSourceFileLine(FPCGApplyScaleToBoundsTest_Basic *this)

{
  return 10;
}

// GetTests @ 149f74a90

/* WARNING: Removing unreachable block (ram,0x000149f74b7d) */
/* WARNING: Removing unreachable block (ram,0x000149f74c48) */

void __thiscall
FPCGApplyScaleToBoundsTest_Basic::GetTests
          (FPCGApplyScaleToBoundsTest_Basic *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.ApplyScaleToBounds.Basic");
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

// RunTest @ 149f74c70

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
FPCGApplyScaleToBoundsTest_Basic::RunTest(FPCGApplyScaleToBoundsTest_Basic *this,FString *param_1)

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
  undefined8 uVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  UPCGBasePointData *pUVar18;
  UClass *pUVar19;
  undefined1 *puVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  TObjectPtr<UPCGSettingsInterface>_u_0 TVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  FObjectPtr_u_0 FVar26;
  FObjectPtr_u_0 FVar27;
  FPCGDataPtrWrapper *this_00;
  undefined1 auStackY_3a8 [32];
  FObjectPtr_u_0 local_378;
  undefined1 local_370 [24];
  int local_358;
  FString local_350;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_340;
  int local_338;
  FString local_330;
  FString local_320;
  TSharedPtr<IPCGElement,1> local_310;
  FString local_300;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_288;
  longlong local_268;
  int local_260;
  int local_25c;
  int local_258;
  longlong local_238;
  int local_230;
  int local_22c;
  int local_228;
  double local_208;
  double dStack_200;
  double local_1f8;
  FTestData local_1e8;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_158;
  longlong local_128;
  int local_120;
  int local_11c;
  int local_118;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_370._8_8_ = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_370._8_8_ != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_370._8_8_);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_1e8,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)((longlong)local_370 + 8));
  if (local_1e8.InputData.TaggedData.ArrayNum == local_1e8.InputData.TaggedData.ArrayMax) {
    local_1e8.InputData.TaggedData.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x878,(ForAnyElementType *)&local_1e8.InputData,
                    &local_1e8.InputData.TaggedData.ArrayMax);
  }
  local_158._0_8_ = 0;
  this_00 = (FPCGDataPtrWrapper *)
            (local_1e8.InputData.TaggedData.AllocatorInstance.Data +
            (longlong)local_1e8.InputData.TaggedData.ArrayNum * 0x78);
  local_158._40_8_ = 0;
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
  local_1e8.InputData.TaggedData.ArrayNum = local_1e8.InputData.TaggedData.ArrayNum + 1;
  PCGTestsCommon::GenerateSettings<UPCGApplyScaleToBoundsSettings>(&local_1e8,&local_158);
  pUVar18 = PCGTestsCommon::CreateRandomBasePointData(10,0x2a,false);
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar18);
  (**(code **)(pUVar18->_padding_ + 0x4c0))(pUVar18,&local_128,1);
  dVar9 = _UNK_15076baf8;
  dVar8 = ___xmm_40080000000000004008000000000000;
  dVar7 = __real_4008000000000000;
  FVar26.Handle = (UObject *)0x0;
  FVar27.Handle = FVar26.Handle;
  while (iVar16 = FVar27._0_4_, iVar16 != local_118) {
    if (iVar16 == iVar16 % local_11c) {
      puVar20 = (undefined1 *)((longlong)local_120 * (longlong)(iVar16 % local_11c) + local_128);
    }
    else {
      puVar20 = local_108;
    }
    local_1f8 = __real_4008000000000000;
    local_208 = ___xmm_40080000000000004008000000000000;
    dStack_200 = _UNK_15076baf8;
    FVar27._0_4_ = iVar16 + 1;
    FVar27._4_4_ = 0;
    *(double *)(puVar20 + 0x40) = ___xmm_40080000000000004008000000000000;
    *(double *)(puVar20 + 0x48) = _UNK_15076baf8;
    *(double *)(puVar20 + 0x50) = __real_4008000000000000;
    *(undefined8 *)(puVar20 + 0x58) = 0;
  }
  UPCGSettings::GetElement(local_1e8.Settings,&local_310);
  PCGTestsCommon::FTestData::InitializeTestContext(&local_1e8,(UPCGNode *)local_370);
  do {
    if ((local_310.Object == (IPCGElement *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar3 = (code *)swi(3);
      uVar15 = (*pcVar3)();
      return (bool)uVar15;
    }
    bVar14 = IPCGElement::Execute(local_310.Object,(FPCGContext *)local_370._0_8_);
    uVar13 = local_370._0_8_;
  } while (!bVar14);
  iVar16 = (((FPCGDataCollection *)(local_370._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString((FString *)(local_370 + 0x10),"Output count");
  pwVar22 = L"";
  if (local_358 != 0) {
    pwVar22 = (wchar_t *)local_370._16_8_;
  }
  bVar14 = FAutomationTestBase::TestEqual((FAutomationTestBase *)this,pwVar22,iVar16,1);
  if ((wchar_t *)local_370._16_8_ != (wchar_t *)0x0) {
    FMemory::Free((void *)local_370._16_8_);
  }
  if (bVar14) {
    if (((((FPCGDataCollection *)(uVar13 + 0x38))->TaggedData).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar3 = (code *)swi(3);
      uVar15 = (*pcVar3)();
      return (bool)uVar15;
    }
    local_378 = (FObjectPtr_u_0)
                ((FObjectPtr_u_0 *)
                (((FPCGDataCollection *)(uVar13 + 0x38))->TaggedData).AllocatorInstance.Data)->
                Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f74fae:
      if (local_378.Handle == (UObject *)0x0) goto LAB_149f74fce;
      pUVar19 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
      bVar14 = FObjectPtr::IsA((FObjectPtr *)&local_378,pUVar19);
      FVar27 = local_378;
      if (!bVar14) goto LAB_149f74fce;
    }
    else {
      if (local_378.Handle != (UObject *)0x0) {
        UE::GC::MarkAsReachable(local_378.Handle);
        goto LAB_149f74fae;
      }
LAB_149f74fce:
      FVar27.Handle = FVar26.Handle;
    }
    ::FString::FString(&local_350,"Output point data");
    if (FVar27.Handle == (UObject *)0x0) {
      pcVar3 = *(code **)(*(longlong *)this + 0x28);
      ::FString::PrintfImpl(&local_300,L"Expected \'%s\' to be not null.");
      (*pcVar3)(this,&local_300,0);
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    if (!bVar14) {
      iVar16 = (**(code **)(*(longlong *)FVar27.Handle + 0x488))(FVar27.Handle);
      ::FString::FString((FString *)&local_340.ObjectPtr,"Output point count");
      TVar23 = (TObjectPtr<UPCGSettingsInterface>_u_0)L"";
      if (local_338 != 0) {
        TVar23 = local_340;
      }
      bVar14 = FAutomationTestBase::TestEqual
                         ((FAutomationTestBase *)this,(wchar_t *)TVar23.DebugPtr,iVar16,10);
      if (local_340.DebugPtr != (UPCGSettingsInterface *)0x0) {
        FMemory::Free(local_340.DebugPtr);
      }
      if (bVar14) {
        (**(code **)(*(longlong *)FVar27.Handle + 0x510))(FVar27.Handle,&local_268);
        (**(code **)(*(longlong *)FVar27.Handle + 0x518))(FVar27.Handle,&local_238);
        iVar16 = (**(code **)(*(longlong *)FVar27.Handle + 0x488))(FVar27.Handle);
        dVar12 = _UNK_15201e918;
        dVar11 = ___xmm_c008000000000000c008000000000000;
        dVar10 = __real_c008000000000000;
        fVar6 = __real_38d1b717;
        if (0 < iVar16) {
          do {
            uVar25 = FVar26._0_4_;
            uVar17 = 0;
            if ((int)uVar25 < local_258) {
              uVar17 = ~uVar25 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar3 = (code *)swi(3);
              uVar15 = (*pcVar3)();
              return (bool)uVar15;
            }
            lVar21 = (longlong)((int)uVar25 % local_25c) * (longlong)local_260;
            pdVar1 = (double *)(lVar21 + local_268);
            dVar4 = *pdVar1;
            dVar5 = pdVar1[1];
            dVar2 = *(double *)(lVar21 + 0x10 + local_268);
            ::FString::FString(&local_330,"Output points should have a Bounds Min of -3");
            local_2e8._s_0.Z = dVar10;
            FVar24.Data = (FScriptContainerElement *)L"";
            if (local_330.Data.ArrayNum != 0) {
              FVar24.Data = local_330.Data.AllocatorInstance.Data;
            }
            local_2e8._s_0.X = dVar11;
            local_2e8._s_0.Y = dVar12;
            local_2c8._s_0.X = dVar4;
            local_2c8._s_0.Y = dVar5;
            local_2c8._s_0.Z = dVar2;
            bVar14 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar24.Data,
                                (TVector<double> *)&local_2c8._s_0,
                                (TVector<double> *)&local_2e8._s_0,fVar6);
            if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_330.Data.AllocatorInstance.Data);
            }
            if (!bVar14) goto LAB_149f752b8;
            uVar17 = 0;
            if ((int)uVar25 < local_228) {
              uVar17 = ~uVar25 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar3 = (code *)swi(3);
              uVar15 = (*pcVar3)();
              return (bool)uVar15;
            }
            lVar21 = (longlong)((int)uVar25 % local_22c) * (longlong)local_230;
            pdVar1 = (double *)(lVar21 + local_238);
            dVar4 = *pdVar1;
            dVar5 = pdVar1[1];
            dVar2 = *(double *)(lVar21 + 0x10 + local_238);
            ::FString::FString(&local_320,"Output points should have a Bounds Max of 3");
            local_2a8._s_0.Z = dVar7;
            FVar24.Data = (FScriptContainerElement *)L"";
            if (local_320.Data.ArrayNum != 0) {
              FVar24.Data = local_320.Data.AllocatorInstance.Data;
            }
            local_2a8._s_0.X = dVar8;
            local_2a8._s_0.Y = dVar9;
            local_288._s_0.X = dVar4;
            local_288._s_0.Y = dVar5;
            local_288._s_0.Z = dVar2;
            bVar14 = FAutomationTestBase::TestEqual
                               ((FAutomationTestBase *)this,(wchar_t *)FVar24.Data,
                                (TVector<double> *)&local_288._s_0,
                                (TVector<double> *)&local_2a8._s_0,fVar6);
            if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_320.Data.AllocatorInstance.Data);
            }
            if (!bVar14) goto LAB_149f752b8;
            FVar26._0_4_ = uVar25 + 1;
            FVar26._4_4_ = 0;
            iVar16 = (**(code **)(*(longlong *)FVar27.Handle + 0x488))(FVar27.Handle);
          } while ((int)FVar26._0_4_ < iVar16);
        }
        bVar14 = true;
        goto LAB_149f752ba;
      }
    }
  }
LAB_149f752b8:
  bVar14 = false;
LAB_149f752ba:
  if ((FPCGContext *)local_370._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_370._0_8_)(local_370._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310.SharedReferenceCount.ReferenceController);
  PCGTestsCommon::FTestData::~FTestData(&local_1e8);
  return bVar14;
}

// GetBeautifiedTestName @ 149f75370

FString * __thiscall
FPCGApplyScaleToBoundsTest_Basic::GetBeautifiedTestName
          (FPCGApplyScaleToBoundsTest_Basic *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ApplyScaleToBounds.Basic");
  return __return_storage_ptr__;
}

