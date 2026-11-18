// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// GetTestFlags @ 149fdd180

EAutomationTestFlags __thiscall
FPCGPointsBoundsModiferTest::GetTestFlags(FPCGPointsBoundsModiferTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fdd190

bool __thiscall FPCGPointsBoundsModiferTest::IsStressTest(FPCGPointsBoundsModiferTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fdd1a0

uint __thiscall FPCGPointsBoundsModiferTest::GetRequiredDeviceNum(FPCGPointsBoundsModiferTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fdd1b0

FString * __thiscall
FPCGPointsBoundsModiferTest::GetTestSourceFileName
          (FPCGPointsBoundsModiferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointExtentsModifierTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fdd1e0

int __thiscall FPCGPointsBoundsModiferTest::GetTestSourceFileLine(FPCGPointsBoundsModiferTest *this)

{
  return 0xc;
}

// GetTests @ 149fdd1f0

/* WARNING: Removing unreachable block (ram,0x000149fdd2dd) */
/* WARNING: Removing unreachable block (ram,0x000149fdd3a8) */

void __thiscall
FPCGPointsBoundsModiferTest::GetTests
          (FPCGPointsBoundsModiferTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.PointExtentsModifier.Basic");
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

// RunTest @ 149fdd3d0

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
FPCGPointsBoundsModiferTest::RunTest(FPCGPointsBoundsModiferTest *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  UPCGSettings *pUVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  UClass *pUVar13;
  UPCGBasePointData *pUVar14;
  longlong lVar15;
  FPCGTaggedData *this_00;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar16;
  FString *pFVar17;
  int *piVar18;
  TVector<double>_u_0 *pTVar19;
  TVector<double> *pTVar20;
  int iVar21;
  TVector<double> *pTVar22;
  wchar_t *pwVar23;
  int iVar24;
  TVector<double>_u_0 *pTVar25;
  wchar_t *pwVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStackY_938 [32];
  FPCGPointsBoundsModiferTest *local_908;
  FTestData *local_900;
  IPCGElement *local_8f8;
  TReferenceControllerBase<1> *local_8f0;
  UPCGSettings *local_8e8;
  UClass *local_8e0;
  TSharedPtr<IPCGElement,1> local_8d8;
  TVector<double>_u_0 *local_8c8;
  TVector<double>_u_0 *pTStack_8c0;
  TVector<double>_u_0 *local_8b8;
  TVector<double>_u_0 *pTStack_8b0;
  TVector<double>_u_0 *local_8a8;
  TVector<double>_u_0 *pTStack_8a0;
  TVector<double>_u_0 *local_898;
  TVector<double>_u_0 *pTStack_890;
  TVector<double>_u_0 *local_888;
  TVector<double>_u_0 *pTStack_880;
  initializer_list<UE::Math::TVector<double>_> local_878;
  initializer_list<UE::Math::TVector<double>_> local_868;
  initializer_list<UE::Math::TVector<double>_> local_858;
  initializer_list<UE::Math::TVector<double>_> local_848;
  initializer_list<UE::Math::TVector<double>_> local_838;
  FTestData local_828;
  double local_788;
  FPCGPointValueRanges local_778;
  FString local_5e8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_5d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_5c8;
  FString local_5b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_5a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_598;
  TFunction<void___cdecl(PCGTestsCommon::FTestData_&)> local_588;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_558;
  FString local_548 [9];
  TObjectPtr<UPCGData_const_>_u_0 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [24];
  undefined8 uStack_490;
  void *local_488;
  undefined4 local_480;
  uint local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined8 local_470;
  void *local_468;
  ulonglong local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_44c;
  undefined4 local_444;
  TVector<double>_u_0 local_438;
  undefined8 uStack_420;
  longlong local_418;
  longlong lStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  undefined8 uStack_3f0;
  longlong local_3e8;
  longlong lStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  longlong lStack_3b0;
  longlong local_3a8;
  longlong lStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  TVector<double>_u_0 local_378;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined8 uStack_330;
  longlong local_328;
  longlong lStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  longlong lStack_2f0;
  double local_2e8;
  double dStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  TVector<double>_u_0 local_2b8;
  undefined8 uStack_2a0;
  longlong local_298;
  longlong lStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
  longlong local_268;
  longlong lStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  TVector<double>_u_0 local_1f8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  TVector<double>_u_0 local_138;
  undefined8 uStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TVector<double>_u_0 local_78 [3];
  
  local_78[0]._0_8_ = __security_cookie.value ^ (ulonglong)auStackY_938;
  local_8e0 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_8e0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_8e0);
  }
  PCGTestsCommon::FTestData::FTestData
            (&local_828,0x2a,(UPCGSettings *)0x0,(TSubclassOf<AActor>)&local_8e0);
  local_588._0_8_ = 0;
  local_588._40_8_ = 0;
  PCGTestsCommon::GenerateSettings<UPCGPointExtentsModifierSettings>(&local_828,&local_588);
  pUVar6 = local_828.Settings;
  if (local_828.Settings != (UPCGSettings *)0x0) {
    pUVar13 = Z_Construct_UClass_UPCGPointExtentsModifierSettings_NoRegister();
    iVar21 = (int)pUVar13->_padding_;
    if ((iVar21 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar21 * 8)
        == &pUVar13->_padding_)) {
      UPCGSettings::GetElement(local_828.Settings,&local_8d8);
      pUVar14 = PCGTestsCommon::CreateEmptyBasePointData();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UPCGBasePointData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      (**(code **)(pUVar14->_padding_ + 0x490))(pUVar14,4);
      (**(code **)(pUVar14->_padding_ + 0x548))(pUVar14);
      (**(code **)(pUVar14->_padding_ + 0x498))(pUVar14,0x4c);
      FPCGPointValueRanges::FPCGPointValueRanges(&local_778,pUVar14,false);
      dVar3 = __real_3fe0000000000000;
      dVar2 = __real_3ff0000000000000;
      iVar21 = 0;
      do {
        if (local_778.SeedRange.NumElements <= iVar21) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
        }
        if (iVar21 == iVar21 % local_778.SeedRange.ElementView.NumElements) {
          piVar18 = (int *)((longlong)local_778.SeedRange.ElementView.BytesBetweenElements *
                            (longlong)(iVar21 % local_778.SeedRange.ElementView.NumElements) +
                           (longlong)local_778.SeedRange.ElementView.FirstElementPtr);
        }
        else {
          piVar18 = &local_778.SeedRange.StubValue;
        }
        *piVar18 = iVar21;
        iVar24 = iVar21 + 1;
        if (local_778.BoundsMaxRange.NumElements <= iVar21) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
        }
        if (iVar21 == iVar21 % local_778.BoundsMaxRange.ElementView.NumElements) {
          pTVar25 = (TVector<double>_u_0 *)
                    ((longlong)&(local_778.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0 +
                    (longlong)local_778.BoundsMaxRange.ElementView.BytesBetweenElements *
                    (longlong)(iVar21 % local_778.BoundsMaxRange.ElementView.NumElements));
        }
        else {
          pTVar25 = &local_778.BoundsMaxRange.StubValue.field0_0x0;
        }
        if (local_778.BoundsMinRange.NumElements <= iVar21) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar7) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
        }
        if (iVar21 == iVar21 % local_778.BoundsMinRange.ElementView.NumElements) {
          pTVar19 = (TVector<double>_u_0 *)
                    ((longlong)&(local_778.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0 +
                    (longlong)local_778.BoundsMinRange.ElementView.BytesBetweenElements *
                    (longlong)(iVar21 % local_778.BoundsMinRange.ElementView.NumElements));
        }
        else {
          pTVar19 = &local_778.BoundsMinRange.StubValue.field0_0x0;
        }
        dVar29 = (double)iVar24;
        dVar27 = (*(double *)((longlong)pTVar19 + 8) + *(double *)((longlong)pTVar25 + 8)) * dVar3;
        dVar28 = (*(double *)((longlong)pTVar19 + 0x10) + *(double *)((longlong)pTVar25 + 0x10)) *
                 dVar3;
        local_788 = dVar28 + dVar29;
        dVar30 = ((((TVector<double>_u_0 *)&(pTVar25->_s_0).X)->_s_0).X +
                 (((TVector<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X) * dVar3;
        (((TVector<double>_u_0 *)&(pTVar19->_s_0).X)->_s_0).X = dVar30 - dVar29;
        *(double *)((longlong)pTVar19 + 8) = dVar27 - dVar29;
        *(double *)((longlong)pTVar19 + 0x10) = dVar28 - dVar29;
        (((TVector<double>_u_0 *)&(pTVar25->_s_0).X)->_s_0).X = dVar30 + dVar29;
        *(double *)((longlong)pTVar25 + 8) = dVar27 + dVar29;
        *(double *)((longlong)pTVar25 + 0x10) = local_788;
        if (iVar21 == 3) {
          if (local_778.BoundsMaxRange.NumElements < 4) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
            if (bVar7) {
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return (bool)uVar8;
            }
          }
          if ((int)(3 % (longlong)local_778.BoundsMaxRange.ElementView.NumElements) == 3) {
            pTVar22 = (TVector<double> *)
                      ((longlong)&(local_778.BoundsMaxRange.ElementView.FirstElementPtr)->field0_0x0
                      + (longlong)local_778.BoundsMaxRange.ElementView.BytesBetweenElements * 3);
          }
          else {
            pTVar22 = &local_778.BoundsMaxRange.StubValue;
          }
          if (local_778.BoundsMinRange.NumElements < 4) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
            if (bVar7) {
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return (bool)uVar8;
            }
          }
          if ((int)(3 % (longlong)local_778.BoundsMinRange.ElementView.NumElements) == 3) {
            pTVar20 = (TVector<double> *)
                      ((longlong)&(local_778.BoundsMinRange.ElementView.FirstElementPtr)->field0_0x0
                      + (longlong)local_778.BoundsMinRange.ElementView.BytesBetweenElements * 3);
          }
          else {
            pTVar20 = &local_778.BoundsMinRange.StubValue;
          }
          dVar29 = dVar2 - ((pTVar20->field0_0x0)._s_0.X + (pTVar22->field0_0x0)._s_0.X) * dVar3;
          dVar28 = dVar2 - ((pTVar20->field0_0x0)._s_0.Y + (pTVar22->field0_0x0)._s_0.Y) * dVar3;
          dVar27 = dVar2 - ((pTVar20->field0_0x0)._s_0.Z + (pTVar22->field0_0x0)._s_0.Z) * dVar3;
          (pTVar20->field0_0x0)._s_0.Y = dVar28 + (pTVar20->field0_0x0)._s_0.Y;
          (pTVar20->field0_0x0)._s_0.X = dVar29 + (pTVar20->field0_0x0)._s_0.X;
          (pTVar20->field0_0x0)._s_0.Z = dVar27 + (pTVar20->field0_0x0)._s_0.Z;
          (pTVar22->field0_0x0)._s_0.X = dVar29 + (pTVar22->field0_0x0)._s_0.X;
          (pTVar22->field0_0x0)._s_0.Y = dVar28 + (pTVar22->field0_0x0)._s_0.Y;
          (pTVar22->field0_0x0)._s_0.Z = dVar27 + (pTVar22->field0_0x0)._s_0.Z;
        }
        iVar21 = iVar24;
      } while (iVar24 < 4);
      local_470 = 0;
      local_460 = 0;
      local_4a8._16_8_ = 0;
      uStack_490 = 0;
      local_450 = 0x100;
      local_4b8.DebugPtr = (UPCGData *)0x0;
      local_4b0 = 0;
      local_4a8._0_8_ = (FScriptContainerElement *)0x0;
      local_4a8._8_8_ = 0;
      local_488 = (void *)0x0;
      local_480 = 0;
      local_47c = 0x80;
      local_478 = 0xffffffff;
      local_474 = 0;
      local_468 = (void *)0x0;
      local_458 = 0;
      local_44c = 0;
      local_444 = 0xffffffff;
      if (local_828.InputData.TaggedData.ArrayNum == local_828.InputData.TaggedData.ArrayMax) {
        local_828.InputData.TaggedData.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x878,(ForAnyElementType *)&local_828.InputData,
                        &local_828.InputData.TaggedData.ArrayMax);
      }
      lVar15 = (longlong)local_828.InputData.TaggedData.ArrayNum;
      local_828.InputData.TaggedData.ArrayNum = local_828.InputData.TaggedData.ArrayNum + 1;
      this_00 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           (local_828.InputData.TaggedData.AllocatorInstance.Data + lVar15 * 0x78),
                           (FPCGTaggedData *)&local_4b8.ObjectPtr);
      local_460 = local_460 & 0xffffffff00000000;
      if (local_468 != (void *)0x0) {
        FMemory::Free(local_468);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_4a8,0,local_4a8._8_4_);
      iVar21 = SUB84(local_4a8._8_8_,4);
      local_4a8._8_8_ = local_4a8._8_8_ & 0xffffffff00000000;
      if (iVar21 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_4a8,0,(int *)(local_4a8 + 0xc));
      }
      local_478 = 0xffffffff;
      local_474 = 0;
      local_480 = 0;
      if (0x80 < local_47c) {
        local_47c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_4a8 + 0x10),0);
      }
      if (local_488 != (void *)0x0) {
        FMemory::Free(local_488);
      }
      if ((FScriptContainerElement *)local_4a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_4a8._0_8_);
      }
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_4b8.ObjectPtr);
      this_00->Pin = PCGPinConstants::DefaultInputLabel;
      FPCGDataPtrWrapper::operator=(&this_00->Data,(UPCGData *)pUVar14);
      local_900 = &local_828;
      local_8f8 = local_8d8.Object;
      local_8f0 = local_8d8.SharedReferenceCount.ReferenceController;
      if (local_8d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_8d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_8d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uStack_380 = _UNK_1518a70e8;
      local_388 = ___xmm_3ff80000000000003ff8000000000000;
      lStack_410 = _UNK_150689678;
      local_418 = ___xmm_3fe00000000000003fe0000000000000;
      local_8c8 = &local_438;
      pTStack_8c0 = &local_378;
      local_438._s_0.Z = ___xmm_3fe0000000000000bfe0000000000000;
      uStack_420 = _UNK_15202fe88;
      local_3f8 = ___xmm_3fe0000000000000bfe0000000000000;
      uStack_3f0 = _UNK_15202fe88;
      local_3c8 = ___xmm_3fe0000000000000bfe0000000000000;
      uStack_3c0 = _UNK_15202fe88;
      local_438._s_0.X = ___xmm_bfe0000000000000bfe0000000000000;
      local_438._s_0.Y = _UNK_150689738;
      local_408 = ___xmm_bfe0000000000000bfe0000000000000;
      dStack_400 = _UNK_150689738;
      local_3d8 = ___xmm_bfe0000000000000bfe0000000000000;
      dStack_3d0 = _UNK_150689738;
      local_398 = ___xmm_3ff80000000000003fe0000000000000;
      uStack_390 = _UNK_15202fed8;
      pUVar6[1]._padding_ = ___xmm_3fe00000000000003fe0000000000000;
      pUVar6[1]._padding_ = lStack_410;
      local_8e8 = pUVar6;
      pUVar6[1]._padding_ = (longlong)dVar3;
      *(undefined1 *)&pUVar6[1]._padding_ = 0;
      local_3e8 = local_418;
      lStack_3e0 = lStack_410;
      local_3b8 = local_418;
      lStack_3b0 = lStack_410;
      local_3a8 = local_418;
      lStack_3a0 = lStack_410;
      local_908 = this;
      local_878._First = (TVector<double> *)local_8c8;
      local_878._Last = (TVector<double> *)pTStack_8c0;
      pTVar16 = TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
                TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&local_5d8,&local_878)
      ;
      bVar7 = `FPCGPointsBoundsModiferTest::RunTest'::__l2::<lambda_1>::operator()
                        (&local_908,pTVar16);
      dStack_340 = _UNK_15097b468;
      local_348 = ___xmm_c000000000000000c000000000000000;
      local_378._s_0.Y = _UNK_15076c718;
      local_378._s_0.X = ___xmm_bff0000000000000bff0000000000000;
      uStack_2c0 = _UNK_15076baf8;
      local_2c8 = ___xmm_40080000000000004008000000000000;
      lVar5 = _UNK_150689698;
      lVar4 = ___xmm_40000000000000004000000000000000;
      lVar15 = __real_4000000000000000;
      local_8b8 = &local_378;
      local_378._s_0.Z = ___xmm_3ff0000000000000bff0000000000000;
      uStack_360 = _UNK_15076b868;
      pTStack_8b0 = &local_2b8;
      local_338 = ___xmm_4000000000000000c000000000000000;
      uStack_330 = _UNK_15202fee8;
      local_308 = ___xmm_4000000000000000c000000000000000;
      uStack_300 = _UNK_15202fee8;
      local_2d8 = ___xmm_4008000000000000bff0000000000000;
      uStack_2d0 = _UNK_15076bb28;
      local_358 = ___xmm_3ff00000000000003ff0000000000000;
      uStack_350 = _UNK_150689688;
      pUVar6[1]._padding_ = ___xmm_40000000000000004000000000000000;
      pUVar6[1]._padding_ = lVar5;
      *(undefined1 *)&pUVar6[1]._padding_ = 1;
      pUVar6[1]._padding_ = lVar15;
      local_328 = lVar4;
      lStack_320 = lVar5;
      local_318 = local_348;
      dStack_310 = dStack_340;
      local_2f8 = lVar4;
      lStack_2f0 = lVar5;
      local_2e8 = local_378._s_0.X;
      dStack_2e0 = local_378._s_0.Y;
      local_868._First = (TVector<double> *)local_8b8;
      local_868._Last = (TVector<double> *)pTStack_8b0;
      pTVar16 = TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
                TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&local_5c8,&local_868)
      ;
      bVar9 = `FPCGPointsBoundsModiferTest::RunTest'::__l2::<lambda_1>::operator()
                        (&local_908,pTVar16);
      uStack_2a0 = _UNK_15202fee8;
      local_2b8._s_0.Z = ___xmm_4000000000000000c000000000000000;
      local_2b8._s_0.Y = _UNK_15097b468;
      local_2b8._s_0.X = ___xmm_c000000000000000c000000000000000;
      pUVar6[1]._padding_ = lVar4;
      pUVar6[1]._padding_ = lVar5;
      *(undefined1 *)&pUVar6[1]._padding_ = 2;
      local_288 = local_2b8._s_0.X;
      dStack_280 = local_2b8._s_0.Y;
      pUVar6[1]._padding_ = lVar15;
      local_298 = lVar4;
      lStack_290 = lVar5;
      local_8a8 = &local_2b8;
      local_278 = local_2b8._s_0.Z;
      uStack_270 = uStack_2a0;
      pTStack_8a0 = &local_1f8;
      local_248 = ___xmm_4008000000000000c008000000000000;
      uStack_240 = _UNK_15202ff08;
      local_218 = ___xmm_4014000000000000c008000000000000;
      uStack_210 = _UNK_15202ff38;
      local_238 = ___xmm_40080000000000004008000000000000;
      uStack_230 = _UNK_15076baf8;
      local_268 = lVar4;
      lStack_260 = lVar5;
      local_258 = ___xmm_c008000000000000c008000000000000;
      dStack_250 = _UNK_15201e918;
      local_228 = ___xmm_c008000000000000c008000000000000;
      dStack_220 = _UNK_15201e918;
      local_208 = ___xmm_40140000000000004014000000000000;
      uStack_200 = _UNK_150ae9818;
      local_858._First = (TVector<double> *)local_8a8;
      local_858._Last = (TVector<double> *)pTStack_8a0;
      pTVar16 = TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
                TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&local_558,&local_858)
      ;
      bVar10 = `FPCGPointsBoundsModiferTest::RunTest'::__l2::<lambda_1>::operator()
                         (&local_908,pTVar16);
      uStack_140 = _UNK_15202ff78;
      local_148 = ___xmm_401c000000000000401c000000000000;
      uStack_190 = _UNK_150ae9858;
      local_198 = ___xmm_c014000000000000c014000000000000;
      local_1f8._s_0.X = ___xmm_c008000000000000c008000000000000;
      local_1f8._s_0.Y = _UNK_15201e918;
      local_898 = &local_1f8;
      local_1d8 = ___xmm_40080000000000004008000000000000;
      uStack_1d0 = _UNK_15076baf8;
      local_1f8._s_0.Z = ___xmm_4008000000000000c008000000000000;
      uStack_1e0 = _UNK_15202ff08;
      local_1b8 = ___xmm_4010000000000000c010000000000000;
      uStack_1b0 = _UNK_15202ff18;
      local_1c8 = ___xmm_c010000000000000c010000000000000;
      uStack_1c0 = _UNK_152030178;
      pTStack_890 = &local_138;
      local_188 = ___xmm_4014000000000000c014000000000000;
      uStack_180 = _UNK_15202ff48;
      local_1a8 = ___xmm_40100000000000004010000000000000;
      uStack_1a0 = _UNK_15076bb98;
      local_158 = ___xmm_401c000000000000c014000000000000;
      uStack_150 = _UNK_15202ff88;
      local_178 = ___xmm_40140000000000004014000000000000;
      uStack_170 = _UNK_150ae9818;
      pUVar6[1]._padding_ = lVar4;
      pUVar6[1]._padding_ = lVar5;
      *(undefined1 *)&pUVar6[1]._padding_ = 3;
      pUVar6[1]._padding_ = lVar15;
      local_168 = local_198;
      uStack_160 = uStack_190;
      local_848._First = (TVector<double> *)local_898;
      local_848._Last = (TVector<double> *)pTStack_890;
      pTVar16 = TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
                TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&local_598,&local_848)
      ;
      bVar11 = `FPCGPointsBoundsModiferTest::RunTest'::__l2::<lambda_1>::operator()
                         (&local_908,pTVar16);
      uStack_f0 = _UNK_15202ff18;
      local_f8 = ___xmm_4010000000000000c010000000000000;
      uStack_e0 = _UNK_15076bb98;
      local_e8 = ___xmm_40100000000000004010000000000000;
      local_138._s_0.X = ___xmm_c000000000000000c000000000000000;
      local_138._s_0.Y = _UNK_15097b468;
      local_108 = ___xmm_c010000000000000c010000000000000;
      uStack_100 = _UNK_152030178;
      local_138._s_0.Z = ___xmm_4000000000000000c000000000000000;
      uStack_120 = _UNK_15202fee8;
      pUVar6[1]._padding_ = lVar4;
      pUVar6[1]._padding_ = lVar5;
      *(undefined1 *)&pUVar6[1]._padding_ = 4;
      pUVar6[1]._padding_ = lVar15;
      local_118 = lVar4;
      lStack_110 = lVar5;
      local_888 = &local_138;
      local_c8 = ___xmm_4018000000000000c018000000000000;
      uStack_c0 = _UNK_15202ff58;
      pTStack_880 = local_78;
      local_a8 = ___xmm_c01c000000000000c01c000000000000;
      uStack_a0 = _UNK_152030198;
      local_d8 = ___xmm_c018000000000000c018000000000000;
      uStack_d0 = _UNK_152030188;
      local_88 = ___xmm_40220000000000004022000000000000;
      uStack_80 = _UNK_150971c58;
      local_b8 = ___xmm_40180000000000004018000000000000;
      uStack_b0 = _UNK_151c790d8;
      local_98 = ___xmm_4022000000000000c01c000000000000;
      uStack_90 = _UNK_15202ffc8;
      local_838._First = (TVector<double> *)local_888;
      local_838._Last = (TVector<double> *)pTStack_880;
      pTVar16 = TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
                TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>(&local_5a8,&local_838)
      ;
      bVar12 = `FPCGPointsBoundsModiferTest::RunTest'::__l2::<lambda_1>::operator()
                         (&local_908,pTVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_8f0)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_8d8.SharedReferenceCount.ReferenceController);
      PCGTestsCommon::FTestData::~FTestData(&local_828);
      return bVar12 && (bVar11 && (bVar10 && (bVar9 && bVar7)));
    }
    pFVar17 = GetTypeName<UPCGPointExtentsModifierSettings>(local_548);
    pwVar23 = L"";
    if ((pFVar17->Data).ArrayNum == 0) {
      pwVar26 = L"";
    }
    else {
      pwVar26 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    pFVar17 = GetFullNameForCastLogError<UPCGSettings>(&local_5b8,pUVar6);
    if ((pFVar17->Data).ArrayNum != 0) {
      pwVar23 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar23,pwVar26);
  }
  pFVar17 = GetTypeName<UPCGPointExtentsModifierSettings>(&local_5e8);
  if ((pFVar17->Data).ArrayNum == 0) {
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar23);
}

// GetBeautifiedTestName @ 149fde030

FString * __thiscall
FPCGPointsBoundsModiferTest::GetBeautifiedTestName
          (FPCGPointsBoundsModiferTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.PointExtentsModifier.Basic");
  return __return_storage_ptr__;
}

// operator() @ 149ff37b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
`FPCGPointsBoundsModiferTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  FAutomationTestBase *pFVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  UClass *pUVar20;
  UPCGBasePointData *pUVar21;
  UPCGBasePointData *pUVar22;
  longlong lVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  uint uVar26;
  TObjectPtr<UPCGSettingsInterface>_u_0 this_00;
  uint uVar27;
  longlong lVar28;
  FPCGContext *pFVar29;
  undefined1 auStackY_318 [32];
  bool local_2e8;
  undefined1 local_2e0 [16];
  int local_2d0;
  uint local_2c8;
  FPCGContext *local_2c0;
  FName local_2b8;
  TObjectPtr<UPCGSettingsInterface>_u_0 local_2b0;
  ForAnyElementType local_2a8;
  longlong local_2a0;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  longlong local_168;
  int local_160;
  int local_15c;
  int local_158;
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  TVector<double>_u_0 local_108;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined1 local_d1;
  TVector<double>_u_0 local_d0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_318;
  PCGTestsCommon::FTestData::InitializeTestContext
            (*(FTestData **)((longlong)this + 8),(UPCGNode *)local_2e0);
  do {
    if ((*(longlong *)((longlong)this + 0x10) == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      uVar16 = (*pcVar8)();
      return (bool)uVar16;
    }
    bVar15 = IPCGElement::Execute
                       (*(IPCGElement **)((longlong)this + 0x10),(FPCGContext *)local_2e0._0_8_);
  } while (!bVar15);
  FPCGDataCollection::GetInputsByPin
            ((FPCGDataCollection *)(local_2e0._0_8_ + 8),
             (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_2e0 + 8),
             &PCGPinConstants::DefaultInputLabel);
  iVar19 = local_2d0;
  pFVar29 = (FPCGContext *)local_2e0._0_8_;
  pFVar4 = *(FAutomationTestBase **)this;
  local_2c0 = (FPCGContext *)local_2e0._0_8_;
  iVar18 = (((FPCGDataCollection *)(local_2e0._0_8_ + 0x38))->TaggedData).ArrayNum;
  ::FString::FString(&local_298,"Valid number of Outputs");
  FVar24.Data = (FScriptContainerElement *)L"";
  if (local_298.Data.ArrayNum != 0) {
    FVar24.Data = local_298.Data.AllocatorInstance.Data;
  }
  bVar15 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar24.Data,iVar19,iVar18);
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (bVar15) {
    plVar5 = *(longlong **)this;
    iVar18 = (((FPCGDataCollection *)((longlong)pFVar29 + 0x38))->TaggedData).ArrayNum;
    ::FString::FString(&local_288,"Has Outputs");
    if (iVar18 < 1) {
      pcVar8 = *(code **)(*plVar5 + 0x28);
      ::FString::PrintfImpl(&local_218,L"%s: The two values are not equal.");
      (*pcVar8)(plVar5,&local_218);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    fVar13 = __real_38d1b717;
    if (!bVar15) {
      local_2c8 = 0;
      local_2e8 = true;
      bVar15 = true;
      if (0 < local_2d0) {
        local_2b8.ComparisonIndex.Value = 0;
        local_2b8.Number = 0;
        local_2a0 = 0;
        do {
          lVar28 = local_2a0;
          uVar26 = local_2c8;
          uVar25 = ~local_2c8;
          uVar27 = 0;
          if ((int)local_2c8 < local_2d0) {
            uVar27 = uVar25 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
          uVar14 = local_2e0._8_8_;
          uVar27 = 0;
          if ((int)uVar26 < (pFVar29->OutputData).TaggedData.ArrayNum) {
            uVar27 = uVar25 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
          local_2b0 = (TObjectPtr<UPCGSettingsInterface>_u_0)
                      ((TObjectPtr<UPCGSettingsInterface>_u_0 *)
                      ((((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                        (uVar14 + 0x10))->Hash).InlineData + lVar28 + -0x48))->DebugPtr;
          pFVar6 = (pFVar29->OutputData).TaggedData.AllocatorInstance.Data;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ff3a89:
            if ((UPCGSpatialData *)local_2b0.DebugPtr == (UPCGSpatialData *)0x0) goto LAB_149ff3ab0;
            pUVar20 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            bVar15 = FObjectPtr::IsA(&local_2b0.ObjectPtr,pUVar20);
            if (!bVar15) goto LAB_149ff3ab0;
            this_00 = local_2b0;
            if ((UPCGSpatialData *)local_2b0.DebugPtr == (UPCGSpatialData *)0x0) goto LAB_149ff3ab2;
          }
          else {
            if ((UPCGSpatialData *)local_2b0.DebugPtr != (UPCGSpatialData *)0x0) {
              UE::GC::MarkAsReachable((UObject *)local_2b0.DebugPtr);
              goto LAB_149ff3a89;
            }
LAB_149ff3ab0:
            this_00.DebugPtr = (UPCGSettingsInterface *)0x0;
LAB_149ff3ab2:
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InSpatialData",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointExtentsModifierTest.cpp"
                                ,0x4e,L"");
            if (bVar15) {
              pcVar8 = (code *)swi(3);
              uVar16 = (*pcVar8)();
              return (bool)uVar16;
            }
          }
          local_d8 = 0;
          local_d7 = 0;
          local_d3 = 0;
          local_d1 = 0;
          local_108._s_0.X = 0.0;
          local_108._s_0.Y = 0.0;
          local_108._s_0.Z = 0.0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          pUVar21 = UPCGSpatialData::ToBasePointData
                              ((UPCGSpatialData *)this_00.DebugPtr,(FPCGContext *)local_2e0._0_8_,
                               (TBox<double> *)&local_108._s_0);
          if ((pUVar21 == (UPCGBasePointData *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InPointData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGPointExtentsModifierTest.cpp"
                                  ,0x51,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
                    /* WARNING: Load size is inaccurate */
          local_2a8.Data = pFVar6[local_2a0];
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149ff3b7a:
            if ((UPCGSpatialData *)local_2a8.Data == (UPCGSpatialData *)0x0) goto LAB_149ff3b9c;
            pUVar20 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
            bVar15 = FObjectPtr::IsA((FObjectPtr *)&local_2a8,pUVar20);
            FVar24.Data = local_2a8.Data;
            if (!bVar15) goto LAB_149ff3b9c;
          }
          else {
            if ((UPCGSpatialData *)local_2a8.Data != (UPCGSpatialData *)0x0) {
              UE::GC::MarkAsReachable((UObject *)local_2a8.Data);
              goto LAB_149ff3b7a;
            }
LAB_149ff3b9c:
            FVar24.Data = (FScriptContainerElement *)(UPCGSpatialData *)0x0;
          }
          plVar5 = *(longlong **)this;
          ::FString::FString(&local_278,"Valid output SpatialData");
          if ((UPCGSpatialData *)FVar24.Data == (UPCGSpatialData *)0x0) {
            pcVar8 = *(code **)(*plVar5 + 0x28);
            ::FString::PrintfImpl(&local_208,L"Expected \'%s\' to be not null.");
            (*pcVar8)(plVar5,&local_208,0);
            if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.Data.AllocatorInstance.Data);
            }
            bVar15 = true;
          }
          else {
            bVar15 = false;
          }
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
          if (bVar15) {
            local_2e8 = false;
          }
          else {
            local_a0 = 0;
            local_9f = 0;
            local_9b = 0;
            local_99 = 0;
            local_d0._s_0.X = 0.0;
            local_d0._s_0.Y = 0.0;
            local_d0._s_0.Z = 0.0;
            uStack_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            pUVar22 = UPCGSpatialData::ToBasePointData
                                ((UPCGSpatialData *)FVar24.Data,(FPCGContext *)local_2e0._0_8_,
                                 (TBox<double> *)&local_d0._s_0);
            plVar5 = *(longlong **)this;
            ::FString::FString(&local_268,"Valid output PointData");
            if (pUVar22 == (UPCGBasePointData *)0x0) {
              pcVar8 = *(code **)(*plVar5 + 0x28);
              ::FString::PrintfImpl(&local_1f8,L"Expected \'%s\' to be not null.");
              (*pcVar8)(plVar5,&local_1f8,0);
              if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
              }
              bVar15 = true;
            }
            else {
              bVar15 = false;
            }
            if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data.AllocatorInstance.Data);
            }
            if (bVar15) {
              local_2e8 = false;
              pFVar29 = local_2c0;
            }
            else {
              pFVar4 = *(FAutomationTestBase **)this;
              iVar18 = (**(code **)(pUVar22->_padding_ + 0x488))(pUVar22);
              iVar19 = (**(code **)(pUVar21->_padding_ + 0x488))(pUVar21);
              ::FString::FString(&local_258,"Input and output point counts match");
              FVar24.Data = (FScriptContainerElement *)L"";
              if (local_258.Data.ArrayNum != 0) {
                FVar24.Data = local_258.Data.AllocatorInstance.Data;
              }
              bVar15 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar24.Data,iVar19,iVar18);
              if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_258.Data.AllocatorInstance.Data);
              }
              if (bVar15) {
                pFVar4 = *(FAutomationTestBase **)this;
                iVar18 = (**(code **)(pUVar22->_padding_ + 0x488))(pUVar22);
                ::FString::FString(&local_248,"Test data has enough points");
                FVar24.Data = (FScriptContainerElement *)L"";
                if (local_248.Data.ArrayNum != 0) {
                  FVar24.Data = local_248.Data.AllocatorInstance.Data;
                }
                bVar15 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar24.Data,4,iVar18);
                if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_248.Data.AllocatorInstance.Data);
                }
                if (bVar15) {
                  (**(code **)(pUVar22->_padding_ + 0x510))(pUVar22,&local_168);
                  (**(code **)(pUVar22->_padding_ + 0x518))(pUVar22,&local_138);
                  iVar18 = param_1->ArrayNum;
                  uVar26 = 0;
                  pFVar29 = local_2c0;
                  if (0 < iVar18 / 2) {
                    lVar28 = 0;
                    uVar27 = 0;
                    do {
                      pFVar4 = *(FAutomationTestBase **)this;
                      uVar25 = 0;
                      if ((int)uVar27 < iVar18) {
                        uVar25 = ~uVar27 >> 0x1f;
                      }
                      if ((uVar25 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar8 = (code *)swi(3);
                        uVar16 = (*pcVar8)();
                        return (bool)uVar16;
                      }
                      pFVar7 = (param_1->AllocatorInstance).Data;
                      pFVar6 = pFVar7 + lVar28;
                      dVar9 = *(double *)pFVar6;
                      dVar10 = *(double *)(pFVar6 + 8);
                      dVar2 = *(double *)(pFVar7 + lVar28 + 0x10);
                      uVar25 = 0;
                      if ((int)uVar26 < local_158) {
                        uVar25 = ~uVar26 >> 0x1f;
                      }
                      if ((uVar25 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < NumElements)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                              ,0x8b,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar15)) {
                        pcVar8 = (code *)swi(3);
                        uVar16 = (*pcVar8)();
                        return (bool)uVar16;
                      }
                      lVar23 = (longlong)((int)uVar26 % local_15c) * (longlong)local_160;
                      pdVar1 = (double *)(lVar23 + local_168);
                      dVar11 = *pdVar1;
                      dVar12 = pdVar1[1];
                      dVar3 = *(double *)(lVar23 + 0x10 + local_168);
                      ::FString::FString(&local_238,"Correct BoundsMin");
                      FVar24.Data = (FScriptContainerElement *)L"";
                      if (local_238.Data.ArrayNum != 0) {
                        FVar24.Data = local_238.Data.AllocatorInstance.Data;
                      }
                      local_1e8._s_0.X = dVar9;
                      local_1e8._s_0.Y = dVar10;
                      local_1e8._s_0.Z = dVar2;
                      local_1c8._s_0.X = dVar11;
                      local_1c8._s_0.Y = dVar12;
                      local_1c8._s_0.Z = dVar3;
                      bVar15 = FAutomationTestBase::TestEqual
                                         (pFVar4,(wchar_t *)FVar24.Data,
                                          (TVector<double> *)&local_1c8._s_0,
                                          (TVector<double> *)&local_1e8._s_0,fVar13);
                      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_238.Data.AllocatorInstance.Data);
                      }
                      pFVar4 = *(FAutomationTestBase **)this;
                      uVar25 = 0;
                      if ((int)(uVar27 + 1) < param_1->ArrayNum) {
                        uVar25 = ~(uVar27 + 1) >> 0x1f;
                      }
                      if ((uVar25 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar17)) {
                        pcVar8 = (code *)swi(3);
                        uVar16 = (*pcVar8)();
                        return (bool)uVar16;
                      }
                      pFVar7 = (param_1->AllocatorInstance).Data;
                      pFVar6 = pFVar7 + lVar28 + 0x18;
                      dVar9 = *(double *)pFVar6;
                      dVar10 = *(double *)(pFVar6 + 8);
                      dVar2 = *(double *)(pFVar7 + lVar28 + 0x28);
                      uVar25 = 0;
                      if ((int)uVar26 < local_128) {
                        uVar25 = ~uVar26 >> 0x1f;
                      }
                      if ((uVar25 == 0) &&
                         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < NumElements)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                              ,0x8b,
                                              L"Array index out of bounds: %lld from an array of size %lld"
                                             ), bVar17)) {
                        pcVar8 = (code *)swi(3);
                        uVar16 = (*pcVar8)();
                        return (bool)uVar16;
                      }
                      lVar23 = (longlong)((int)uVar26 % local_12c) * (longlong)local_130;
                      pdVar1 = (double *)(lVar23 + local_138);
                      dVar11 = *pdVar1;
                      dVar12 = pdVar1[1];
                      dVar3 = *(double *)(lVar23 + 0x10 + local_138);
                      ::FString::FString(&local_228,"Correct BoundsMax");
                      FVar24.Data = (FScriptContainerElement *)L"";
                      if (local_228.Data.ArrayNum != 0) {
                        FVar24.Data = local_228.Data.AllocatorInstance.Data;
                      }
                      local_1a8._s_0.X = dVar9;
                      local_1a8._s_0.Y = dVar10;
                      local_1a8._s_0.Z = dVar2;
                      local_188._s_0.X = dVar11;
                      local_188._s_0.Y = dVar12;
                      local_188._s_0.Z = dVar3;
                      bVar17 = FAutomationTestBase::TestEqual
                                         (pFVar4,(wchar_t *)FVar24.Data,
                                          (TVector<double> *)&local_188._s_0,
                                          (TVector<double> *)&local_1a8._s_0,fVar13);
                      local_2e8 = (bool)(local_2e8 & bVar15 & bVar17);
                      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_228.Data.AllocatorInstance.Data);
                      }
                      iVar18 = param_1->ArrayNum;
                      uVar26 = uVar26 + 1;
                      uVar27 = uVar27 + 2;
                      lVar28 = lVar28 + 0x30;
                      pFVar29 = local_2c0;
                    } while ((int)uVar26 < iVar18 / 2);
                  }
                }
                else {
                  local_2e8 = false;
                  pFVar29 = local_2c0;
                }
              }
              else {
                local_2e8 = false;
                pFVar29 = local_2c0;
              }
            }
          }
          local_2c8 = local_2c8 + 1;
          local_2b8 = (FName)((longlong)local_2b8 + 1);
          local_2a0 = local_2a0 + 0x78;
          bVar15 = local_2e8;
        } while ((int)local_2c8 < local_2d0);
      }
      DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_2e0._8_8_,local_2d0);
      if ((FPCGTaggedData *)local_2e0._8_8_ != (FPCGTaggedData *)0x0) {
        FMemory::Free((void *)local_2e0._8_8_);
      }
      if ((FPCGContext *)local_2e0._0_8_ != (FPCGContext *)0x0) {
        (**(code **)*(longlong *)local_2e0._0_8_)(local_2e0._0_8_,1);
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (pFVar6 == (FScriptContainerElement *)0x0) {
        return bVar15;
      }
      FMemory::Free(pFVar6);
      return bVar15;
    }
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_2e0._8_8_,local_2d0);
  if ((FPCGTaggedData *)local_2e0._8_8_ != (FPCGTaggedData *)0x0) {
    FMemory::Free((void *)local_2e0._8_8_);
  }
  if ((FPCGContext *)local_2e0._0_8_ != (FPCGContext *)0x0) {
    (**(code **)*(longlong *)local_2e0._0_8_)(local_2e0._0_8_,1);
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return false;
}

