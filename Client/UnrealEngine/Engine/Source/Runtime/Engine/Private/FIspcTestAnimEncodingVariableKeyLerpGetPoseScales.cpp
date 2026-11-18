// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 14750ad30

EAutomationTestFlags __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::GetTestFlags
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14750ad80

bool __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::IsStressTest
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14750ad90

uint __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::GetRequiredDeviceNum
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this)

{
  return 1;
}

// GetTestSourceFileName @ 14750ada0

FString * __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::GetTestSourceFileName
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingVariableKeyLerp.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14750add0

int __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::GetTestSourceFileLine
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this)

{
  return 0xc6;
}

// GetTests @ 14750ae60

/* WARNING: Removing unreachable block (ram,0x00014750af4d) */
/* WARNING: Removing unreachable block (ram,0x00014750b018) */

void __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::GetTests
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this,
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
  
  ::FString::FString(&local_18,"Ispc.Animation.VariableKeyLerp.GetPoseScales");
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

// RunTest @ 14750b040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::RunTest
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this,FString *param_1)

{
  double *pdVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  UEngine *pUVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  FOutputDeviceRedirector *pFVar18;
  FString *pFVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  size_t _Size;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  double dVar27;
  undefined1 auStackY_728 [32];
  ForAnyElementType local_6d8;
  undefined8 local_6d0;
  FScriptContainerElement local_6c8 [8];
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> local_6c0;
  undefined4 local_6b0;
  undefined4 local_6ac;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_6a8;
  ForAnyElementType local_698;
  int local_690;
  int local_68c [3];
  undefined4 local_680;
  undefined4 uStack_67c;
  undefined4 local_678;
  undefined4 uStack_674;
  ForAnyElementType local_670;
  int local_668;
  int local_664;
  ForAnyElementType local_660;
  int local_654;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_650;
  FString local_640;
  TArrayView<UE::Math::TTransform<double>,int> local_630;
  undefined1 local_618 [16];
  ForAnyElementType local_608;
  int local_600;
  int iStack_5fc;
  ForAnyElementType local_5f8;
  undefined8 local_5f0;
  undefined4 local_5e8;
  ForAnyElementType local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 *local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  FName local_598;
  undefined8 local_590;
  TArrayView<UE::Math::TTransform<double>,int> local_588;
  undefined8 local_578;
  AEFVariableKeyLerp<6> local_570;
  undefined8 local_568;
  FString local_560;
  AEFVariableKeyLerp<6> local_550;
  double local_548;
  double dStack_540;
  double local_538;
  FAnimSequenceDecompressionContext local_528;
  FAnimSequenceDecompressionContext local_4b8;
  FString local_448;
  FString local_438;
  FString local_428;
  FStringFormatArg local_418;
  double local_3e8;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_728;
  ::FString::FString(&local_640,L"a.VariableKeyLerp.ISPC");
  iVar15 = local_640.Data.ArrayNum;
  FVar21.Data = local_640.Data.AllocatorInstance.Data;
  uVar23 = 0;
  local_660.Data = (FScriptContainerElement *)0x0;
  if (local_640.Data.ArrayNum == 0) {
    local_654 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_640.Data.ArrayNum,0,&local_660,local_640.Data.ArrayNum,&local_654);
    memcpy(local_660.Data,FVar21.Data,(longlong)iVar15 * 2);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_640.Data.ArrayNum != 0) {
    FVar21.Data = local_640.Data.AllocatorInstance.Data;
  }
  plVar17 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,FVar21.Data,1);
  bVar11 = (bool)(**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((GEngine == (UEngine *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingVariableKeyLerp.cpp"
                          ,0xd0,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  uVar9 = _UNK_1516fe2d8;
  uVar8 = ___xmm_00000000000000004046800000000000;
  dVar7 = _UNK_150689688;
  dVar6 = ___xmm_3ff00000000000003ff0000000000000;
  dVar27 = _UNK_150689518;
  dVar5 = ___xmm_00000000000000003ff0000000000000;
  local_6d8.Data = (FScriptContainerElement *)0x0;
  local_6d0 = 0;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  local_3d8.Scale3D.XY.m128d_f64[1] = _UNK_1516fe338;
  local_3d8.Scale3D.XY.m128d_f64[0] = ___xmm_40668000000000004046800000000000;
  local_d8 = dVar6;
  dStack_d0 = dVar7;
  local_c8 = dVar6;
  dStack_c0 = dVar7;
  iVar15 = iVar14 + 1;
  local_b8 = dVar6;
  dStack_b0 = dVar7;
  local_a8 = dVar5;
  dStack_a0 = dVar27;
  local_98 = uVar8;
  uStack_90 = uVar9;
  local_88 = 0;
  uStack_80 = 0;
  local_3d8.Rotation.XY.m128d_f64[0] = dVar6;
  local_3d8.Rotation.XY.m128d_f64[1] = dVar7;
  lVar20 = (longlong)iVar14 * 0x60;
  local_3d8.Rotation.ZW.m128d_f64[0] = dVar6;
  local_3d8.Rotation.ZW.m128d_f64[1] = dVar7;
  local_3d8.Translation.XY.m128d_f64[0] = dVar6;
  local_3d8.Translation.XY.m128d_f64[1] = dVar7;
  local_3d8.Translation.ZW.m128d_f64[0] = dVar5;
  local_3d8.Translation.ZW.m128d_f64[1] = dVar27;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = dVar6;
  *(double *)(local_6d8.Data + lVar20 + 8) = dVar7;
  *(double *)(local_6d8.Data + lVar20 + 0x10) = dVar6;
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = dVar7;
  *(double *)(local_6d8.Data + lVar20 + 0x20) = dVar6;
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = dVar7;
  *(double *)(local_6d8.Data + lVar20 + 0x30) = dVar5;
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = dVar27;
  *(undefined8 *)(local_6d8.Data + lVar20 + 0x40) = uVar8;
  *(undefined8 *)(local_6d8.Data + lVar20 + 0x40 + 8) = uVar9;
  *(undefined8 *)(local_6d8.Data + lVar20 + 0x50) = 0;
  *(undefined8 *)(local_6d8.Data + lVar20 + 0x50 + 8) = 0;
  local_3d8.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_3d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_3d8) &&
      (&local_3d8 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if ((int)local_6d0 == local_6d0._4_4_) {
    local_6d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  iVar15 = (int)local_6d0 + 1;
  local_1f8.Rotation.XY.m128d_f64[0] = dVar6;
  local_1f8.Rotation.XY.m128d_f64[1] = dVar7;
  local_1f8.Rotation.ZW.m128d_f64[0] = dVar6;
  local_1f8.Rotation.ZW.m128d_f64[1] = dVar7;
  local_1f8.Translation.XY.m128d_f64[0] = dVar6;
  local_1f8.Translation.XY.m128d_f64[1] = dVar7;
  local_1f8.Translation.ZW.m128d_f64[0] = dVar5;
  local_1f8.Translation.ZW.m128d_f64[1] = dVar27;
  lVar20 = (longlong)(int)local_6d0 * 0x60;
  local_1f8.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_1f8.Scale3D.ZW.m128d_f64[1] = 0.0;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_3d8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_3d8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_3d8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_3d8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_3d8.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_3d8.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_3d8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_3d8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_3d8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_3d8.Scale3D.XY.m128d_f64[1];
  local_1f8.Scale3D.XY.m128d_f64[1] = _UNK_1516fe388;
  local_1f8.Scale3D.XY.m128d_f64[0] = ___xmm_c0568000000000003ff0000000000000;
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_3d8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_3d8.Scale3D.ZW.m128d_f64[1];
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_1f8) &&
      (&local_1f8 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if ((int)local_6d0 == local_6d0._4_4_) {
    local_6d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  iVar15 = (int)local_6d0 + 1;
  local_378.Rotation.XY.m128d_f64[0] = dVar6;
  local_378.Rotation.XY.m128d_f64[1] = dVar7;
  local_378.Rotation.ZW.m128d_f64[0] = dVar6;
  local_378.Rotation.ZW.m128d_f64[1] = dVar7;
  local_378.Translation.XY.m128d_f64[0] = dVar6;
  local_378.Translation.XY.m128d_f64[1] = dVar7;
  local_378.Translation.ZW.m128d_f64[0] = dVar5;
  local_378.Translation.ZW.m128d_f64[1] = dVar27;
  lVar20 = (longlong)(int)local_6d0 * 0x60;
  local_378.Scale3D.XY.m128d_f64[0] = dVar6;
  local_378.Scale3D.XY.m128d_f64[1] = dVar7;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_1f8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_1f8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_1f8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_1f8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_1f8.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_1f8.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_1f8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_1f8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_1f8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_1f8.Scale3D.XY.m128d_f64[1];
  local_378.Scale3D.ZW.m128d_f64[1] = _UNK_150f34e18;
  local_378.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000004059000000000000;
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_1f8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_1f8.Scale3D.ZW.m128d_f64[1];
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_378) &&
      (&local_378 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if ((int)local_6d0 == local_6d0._4_4_) {
    local_6d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  iVar15 = (int)local_6d0 + 1;
  local_318.Rotation.XY.m128d_f64[0] = dVar6;
  local_318.Rotation.XY.m128d_f64[1] = dVar7;
  local_318.Rotation.ZW.m128d_f64[0] = dVar6;
  local_318.Rotation.ZW.m128d_f64[1] = dVar7;
  local_318.Translation.XY.m128d_f64[0] = dVar6;
  local_318.Translation.XY.m128d_f64[1] = dVar7;
  local_318.Translation.ZW.m128d_f64[0] = dVar5;
  local_318.Translation.ZW.m128d_f64[1] = dVar27;
  lVar20 = (longlong)(int)local_6d0 * 0x60;
  local_318.Scale3D.XY.m128d_f64[0] = 0.0;
  local_318.Scale3D.XY.m128d_f64[1] = 0.0;
  local_318.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_318.Scale3D.ZW.m128d_f64[1] = 0.0;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_378.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_378.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_378.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_378.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_378.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_378.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_378.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_378.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_378.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_378.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_378.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_378.Scale3D.ZW.m128d_f64[1];
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_318) &&
      (&local_318 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if ((int)local_6d0 == local_6d0._4_4_) {
    local_6d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  iVar15 = (int)local_6d0 + 1;
  local_2b8.Rotation.XY.m128d_f64[0] = dVar6;
  local_2b8.Rotation.XY.m128d_f64[1] = dVar7;
  local_2b8.Rotation.ZW.m128d_f64[0] = dVar6;
  local_2b8.Rotation.ZW.m128d_f64[1] = dVar7;
  local_2b8.Translation.XY.m128d_f64[0] = dVar6;
  local_2b8.Translation.XY.m128d_f64[1] = dVar7;
  local_2b8.Translation.ZW.m128d_f64[0] = dVar5;
  local_2b8.Translation.ZW.m128d_f64[1] = dVar27;
  lVar20 = (longlong)(int)local_6d0 * 0x60;
  local_2b8.Scale3D.XY.m128d_f64[0] = dVar6;
  local_2b8.Scale3D.XY.m128d_f64[1] = dVar7;
  local_2b8.Scale3D.ZW.m128d_f64[0] = dVar5;
  local_2b8.Scale3D.ZW.m128d_f64[1] = dVar27;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_318.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_318.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_318.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_318.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_318.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_318.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_318.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_318.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_318.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_318.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_318.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_318.Scale3D.ZW.m128d_f64[1];
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_2b8) &&
      (&local_2b8 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if ((int)local_6d0 == local_6d0._4_4_) {
    local_6d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  iVar15 = (int)local_6d0 + 1;
  local_258.Rotation.XY.m128d_f64[0] = dVar6;
  local_258.Rotation.XY.m128d_f64[1] = dVar7;
  local_258.Rotation.ZW.m128d_f64[0] = dVar6;
  local_258.Rotation.ZW.m128d_f64[1] = dVar7;
  local_258.Translation.XY.m128d_f64[0] = dVar6;
  local_258.Translation.XY.m128d_f64[1] = dVar7;
  local_258.Translation.ZW.m128d_f64[0] = dVar5;
  local_258.Translation.ZW.m128d_f64[1] = dVar27;
  lVar20 = (longlong)(int)local_6d0 * 0x60;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_2b8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_2b8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_2b8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_2b8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_2b8.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_2b8.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_2b8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_2b8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_2b8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_2b8.Scale3D.XY.m128d_f64[1];
  local_258.Scale3D.XY.m128d_f64[1] = _UNK_1516fe368;
  local_258.Scale3D.XY.m128d_f64[0] = ___xmm_40768000000000004076800000000000;
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_2b8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_2b8.Scale3D.ZW.m128d_f64[1];
  local_258.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000004076800000000000;
  local_258.Scale3D.ZW.m128d_f64[1] = _UNK_1516fe2e8;
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_258) &&
      (&local_258 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if ((int)local_6d0 == local_6d0._4_4_) {
    local_6d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  iVar15 = (int)local_6d0 + 1;
  local_138.Rotation.XY.m128d_f64[0] = dVar6;
  local_138.Rotation.XY.m128d_f64[1] = dVar7;
  local_138.Rotation.ZW.m128d_f64[0] = dVar6;
  local_138.Rotation.ZW.m128d_f64[1] = dVar7;
  local_138.Translation.XY.m128d_f64[0] = dVar6;
  local_138.Translation.XY.m128d_f64[1] = dVar7;
  local_138.Translation.ZW.m128d_f64[0] = dVar5;
  local_138.Translation.ZW.m128d_f64[1] = dVar27;
  lVar20 = (longlong)(int)local_6d0 * 0x60;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_258.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_258.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_258.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_258.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_258.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_258.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_258.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_258.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_258.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_258.Scale3D.XY.m128d_f64[1];
  local_138.Scale3D.XY.m128d_f64[1] = _UNK_1516fe378;
  local_138.Scale3D.XY.m128d_f64[0] = ___xmm_40c194000000000040c1940000000000;
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_258.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_258.Scale3D.ZW.m128d_f64[1];
  local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_000000000000000040c1940000000000;
  local_138.Scale3D.ZW.m128d_f64[1] = _UNK_1516fe308;
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_138) &&
      (&local_138 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if ((int)local_6d0 == local_6d0._4_4_) {
    local_6d0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  iVar15 = (int)local_6d0 + 1;
  local_198.Rotation.XY.m128d_f64[0] = dVar6;
  local_198.Rotation.XY.m128d_f64[1] = dVar7;
  local_198.Rotation.ZW.m128d_f64[0] = dVar6;
  local_198.Rotation.ZW.m128d_f64[1] = dVar7;
  local_198.Translation.XY.m128d_f64[0] = dVar6;
  local_198.Translation.XY.m128d_f64[1] = dVar7;
  local_198.Translation.ZW.m128d_f64[0] = dVar5;
  local_198.Translation.ZW.m128d_f64[1] = dVar27;
  lVar20 = (longlong)(int)local_6d0 * 0x60;
  local_198.Scale3D.ZW.m128d_f64[0] = dVar5;
  local_198.Scale3D.ZW.m128d_f64[1] = dVar27;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_138.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_138.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_138.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_138.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_138.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_138.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_138.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_138.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_138.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_138.Scale3D.XY.m128d_f64[1];
  local_198.Scale3D.XY.m128d_f64[1] = _UNK_1516fe398;
  local_198.Scale3D.XY.m128d_f64[0] = ___xmm_c066800000000000c046800000000000;
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_138.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_138.Scale3D.ZW.m128d_f64[1];
  local_6d0._0_4_ = iVar15;
  if (((local_6d8.Data <= &local_198) &&
      (&local_198 < (TTransform<double> *)(local_6d8.Data + (longlong)local_6d0._4_4_ * 0x60))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  iVar15 = (int)local_6d0;
  if ((int)local_6d0 == local_6d0._4_4_) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&local_6d8,(int *)((longlong)&local_6d0 + 4));
  }
  FVar21.Data = local_6d8.Data;
  local_668 = iVar15 + 1;
  local_6d0 = CONCAT44(local_6d0._4_4_,local_668);
  lVar20 = (longlong)iVar15 * 0x60;
  *(double *)&local_6d8.Data[lVar20].field_0x0 = local_198.Rotation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 8) = local_198.Rotation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x10) = local_198.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x10 + 8) = local_198.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x20) = local_198.Translation.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x20 + 8) = local_198.Translation.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x30) = local_198.Translation.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x30 + 8) = local_198.Translation.ZW.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x40) = local_198.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x40 + 8) = local_198.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6d8.Data + lVar20 + 0x50) = local_198.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6d8.Data + lVar20 + 0x50 + 8) = local_198.Scale3D.ZW.m128d_f64[1];
  lVar20 = (longlong)local_668;
  local_670.Data = (FScriptContainerElement *)0x0;
  if (local_668 == 0) {
    local_664 = 0;
    local_630.ArrayNum = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_668,0,&local_670,local_668,&local_664);
    memcpy(local_670.Data,FVar21.Data,lVar20 * 0x60);
    local_630.ArrayNum = (int)local_6d0;
  }
  local_630.DataPtr = (TTransform<double> *)local_6d8.Data;
  if ((local_630.ArrayNum < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  iVar15 = local_668;
  local_588.DataPtr = (TTransform<double> *)local_670.Data;
  if ((local_668 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  local_588.ArrayNum = iVar15;
  local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6c0.ArrayNum = 0;
  local_6c0.ArrayMax = 0;
  local_590 = 0;
  iVar14 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_6c0.AllocatorInstance,&local_6c0.ArrayMax);
  local_680 = 1;
  uStack_67c = 1;
  iVar15 = iVar14 + 1;
  *(undefined8 *)(local_6c0.AllocatorInstance.Data + (longlong)iVar14 * 8) = 0;
  local_6c0.ArrayNum = iVar15;
  if (((local_6c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_680) &&
      ((FScriptContainerElement *)&local_680 <
       local_6c0.AllocatorInstance.Data + (longlong)local_6c0.ArrayMax * 8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  if (local_6c0.ArrayNum == local_6c0.ArrayMax) {
    local_6c0.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_6c0.AllocatorInstance,&local_6c0.ArrayMax);
  }
  iVar15 = local_6c0.ArrayNum + 1;
  local_678 = 2;
  uStack_674 = 2;
  *(ulonglong *)(local_6c0.AllocatorInstance.Data + (longlong)local_6c0.ArrayNum * 8) =
       CONCAT44(uStack_67c,local_680);
  local_6c0.ArrayNum = iVar15;
  if (((local_6c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_678) &&
      ((FScriptContainerElement *)&local_678 <
       local_6c0.AllocatorInstance.Data + (longlong)local_6c0.ArrayMax * 8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  iVar15 = local_6c0.ArrayNum;
  if (local_6c0.ArrayNum == local_6c0.ArrayMax) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_6c0.AllocatorInstance,&local_6c0.ArrayMax);
  }
  local_6c8[0] = (FScriptContainerElement)0xa;
  local_6c0.ArrayNum = iVar15 + 1;
  lVar20 = 100;
  *(ulonglong *)(local_6c0.AllocatorInstance.Data + (longlong)iVar15 * 8) =
       CONCAT44(uStack_674,local_678);
  local_6a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.ArrayNum = 0;
  local_6a8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,100,&local_6a8.AllocatorInstance,0,&local_6a8.ArrayMax);
  lVar25 = 100;
  do {
    if (((local_6a8.AllocatorInstance.Data <= local_6c8) &&
        (local_6c8 < local_6a8.AllocatorInstance.Data + local_6a8.ArrayMax)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
    if (local_6a8.ArrayNum == local_6a8.ArrayMax) {
      local_6a8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_6a8.AllocatorInstance,&local_6a8.ArrayMax);
    }
    iVar15 = local_6a8.ArrayNum + 1;
    local_6a8.AllocatorInstance.Data[local_6a8.ArrayNum] = local_6c8[0];
    lVar25 = lVar25 + -1;
    local_6a8.ArrayNum = iVar15;
  } while (lVar25 != 0);
  local_698.Data = (FScriptContainerElement *)0x0;
  local_68c[0] = 0;
  local_68c[1] = 2;
  local_6b0 = 0x1e;
  local_690 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_698,0,local_68c);
  lVar25 = 100;
  do {
    if (((local_698.Data <= (FScriptContainerElement *)&local_6b0) &&
        ((FScriptContainerElement *)&local_6b0 < local_698.Data + (longlong)local_68c[0] * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
    if (local_690 == local_68c[0]) {
      local_690 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_698,local_68c);
    }
    iVar15 = local_690 + 1;
    *(undefined4 *)(local_698.Data + (longlong)local_690 * 4) = local_6b0;
    lVar25 = lVar25 + -1;
    local_690 = iVar15;
  } while (lVar25 != 0);
  local_608.Data = (FScriptContainerElement *)0x0;
  local_618._0_8_ = &___7FUECompressedAnimDataMutable__6B_;
  local_600 = 0;
  iStack_5fc = 0;
  local_5f8.Data = (FScriptContainerElement *)0x0;
  local_5f0 = 0;
  local_5e8 = 2;
  local_5e0.Data = (FScriptContainerElement *)0x0;
  local_5d8 = 0;
  local_5d0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5b8 = (undefined1 *)0x0;
  uStack_5b0 = 0;
  local_6ac = 0x1e;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_608,0,&iStack_5fc);
  do {
    if (((local_608.Data <= (FScriptContainerElement *)&local_6ac) &&
        ((FScriptContainerElement *)&local_6ac < local_608.Data + (longlong)iStack_5fc * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar2 = (code *)swi(3);
      uVar12 = (*pcVar2)();
      return (bool)uVar12;
    }
    if (local_600 == iStack_5fc) {
      local_600 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_608,&iStack_5fc);
    }
    iVar15 = local_690;
    FVar21.Data = local_698.Data;
    lVar25 = (longlong)local_600;
    local_600 = local_600 + 1;
    *(undefined4 *)(local_608.Data + lVar25 * 4) = local_6ac;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  lVar20 = (longlong)local_690;
  local_5f0._0_4_ = local_690;
  if ((local_690 == 0) && (local_5f0._4_4_ == 0)) {
    local_5f0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_690,local_5f0._4_4_,&local_5f8,local_690,(int *)((longlong)&local_5f0 + 4))
    ;
    if (iVar15 != 0) {
      memcpy(local_5f8.Data,FVar21.Data,lVar20 << 2);
    }
  }
  iVar15 = local_6a8.ArrayNum;
  FVar21.Data = local_6a8.AllocatorInstance.Data;
  _Size = (size_t)local_6a8.ArrayNum;
  local_5e8 = local_68c[1];
  local_5d8._0_4_ = local_6a8.ArrayNum;
  if ((local_6a8.ArrayNum == 0) && (local_5d8._4_4_ == 0)) {
    local_5d8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_6a8.ArrayNum,local_5d8._4_4_,&local_5e0,local_6a8.ArrayNum,
               (int *)((longlong)&local_5d8 + 4));
    if (iVar15 != 0) {
      memcpy(local_5e0.Data,FVar21.Data,_Size);
    }
  }
  local_5b8 = &DAT_600000001;
  uStack_5b0 = 0x600000006;
  FUECompressedAnimDataMutable::BuildFinalBuffer
            ((FUECompressedAnimDataMutable *)local_618,&local_6a8);
  ::FName::FName(&local_598,L"");
  pUVar10 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar18 = GetGlobalLogSingleton();
  pFVar19 = `FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::RunTest'::__l2::<lambda_1>::
            operator()(&local_660,&local_448,true);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar10->_padding_,0,pwVar26,pFVar18);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  dVar5 = __real_3ef179ec9cbd821e;
  local_570 = (AEFVariableKeyLerp<6>)&___7__AEFVariableKeyLerp__05__6B_;
  local_578 = 1;
  local_528.AnimName = local_598;
  local_528.CompressedAnimData = (ICompressedAnimData *)local_618;
  local_528.RefPoses.DataPtr = (TTransform<double> *)local_6d8.Data;
  local_5a8 = 1;
  local_528.Interpolation = Linear;
  local_528.Time = 0.0;
  local_528.RelativePos = 0.0;
  local_528.RefPoses.ArrayNum = (int)local_6d0;
  local_528.SequenceLength = (float)(__real_3ef179ec9cbd821e * 1.0);
  if (((int)local_6d0 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  local_528.TrackToSkeletonMap.DataPtr = (FTrackToSkeletonMap *)0x0;
  local_528.TrackToSkeletonMap.ArrayNum = 0;
  local_528.SamplingRate.Numerator = 60000;
  local_528.SamplingRate.Denominator = 1;
  local_528.SamplingTime.FrameNumber.Value = 0;
  local_528.SamplingTime.SubFrame = 0.0;
  local_528.NumberOfFrames = 1;
  local_528.SourceSkeleton = (USkeleton *)0x0;
  local_528.AdditiveType = AAT_None;
  local_528.bAdditiveAnimation = false;
  AEFVariableKeyLerp<6>::GetPoseScales(&local_570,&local_630,&local_6c0,&local_528);
  pUVar10 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar18 = GetGlobalLogSingleton();
  pFVar19 = `FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::RunTest'::__l2::<lambda_1>::
            operator()(&local_660,&local_438,false);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar10->_padding_,0,pwVar26,pFVar18);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  local_550 = (AEFVariableKeyLerp<6>)&___7__AEFVariableKeyLerp__05__6B_;
  local_568 = 1;
  local_4b8.AnimName = local_598;
  local_4b8.CompressedAnimData = (ICompressedAnimData *)local_618;
  local_4b8.RefPoses.DataPtr = (TTransform<double> *)local_670.Data;
  local_5a0 = 1;
  local_4b8.Interpolation = Linear;
  local_4b8.Time = 0.0;
  local_4b8.RelativePos = 0.0;
  local_4b8.RefPoses.ArrayNum = local_668;
  local_4b8.SequenceLength = (float)(dVar5 * 1.0);
  if ((local_668 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar13)) {
    pcVar2 = (code *)swi(3);
    uVar12 = (*pcVar2)();
    return (bool)uVar12;
  }
  local_4b8.TrackToSkeletonMap.DataPtr = (FTrackToSkeletonMap *)0x0;
  local_4b8.TrackToSkeletonMap.ArrayNum = 0;
  local_4b8.SamplingRate.Numerator = 60000;
  local_4b8.SamplingRate.Denominator = 1;
  local_4b8.SamplingTime.FrameNumber.Value = 0;
  local_4b8.SamplingTime.SubFrame = 0.0;
  local_4b8.NumberOfFrames = 1;
  local_4b8.SourceSkeleton = (USkeleton *)0x0;
  local_4b8.AdditiveType = AAT_None;
  local_4b8.bAdditiveAnimation = false;
  AEFVariableKeyLerp<6>::GetPoseScales(&local_550,&local_588,&local_6c0,&local_4b8);
  pUVar10 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  GetGlobalLogSingleton();
  pFVar19 = `FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::RunTest'::__l2::<lambda_1>::
            operator()(&local_660,&local_428,bVar11);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar26 = L"";
  }
  else {
    pwVar26 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar10->_padding_,0,pwVar26);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  dVar5 = __real_3f1a36e2e0000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar24 = uVar23;
  if (0 < local_630.ArrayNum) {
    do {
      uVar22 = (uint)uVar23;
      FStringFormatArg::FStringFormatArg(&local_418,uVar22);
      local_650.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_650.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_650.AllocatorInstance,1,&local_650.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_650.AllocatorInstance.Data,&local_418,1);
      ::FString::FormatImpl(&local_560,L"Scale {0}",&local_650);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_650.AllocatorInstance.Data,local_650.ArrayNum);
      if ((FStringFormatArg *)local_650.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_650.AllocatorInstance.Data);
      }
      if (local_418.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.StringValue.Data.AllocatorInstance.Data);
      }
      uVar16 = 0;
      if ((int)uVar22 < local_630.ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return (bool)uVar12;
      }
      pdVar1 = (double *)((longlong)((local_630.DataPtr)->Scale3D).XY.m128d_f64 + uVar24);
      local_548 = *pdVar1;
      dStack_540 = pdVar1[1];
      local_538 = *(double *)((longlong)((local_630.DataPtr)->Scale3D).ZW.m128d_f64 + uVar24);
      uVar16 = 0;
      if ((int)uVar22 < local_588.ArrayNum) {
        uVar16 = ~uVar22 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar12 = (*pcVar2)();
        return (bool)uVar12;
      }
      pdVar1 = (double *)((longlong)((local_588.DataPtr)->Scale3D).XY.m128d_f64 + uVar24);
      local_3e8 = *(double *)((longlong)((local_588.DataPtr)->Scale3D).ZW.m128d_f64 + uVar24);
      dVar27 = local_548 - *pdVar1;
      if (((dVar5 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar4,
                                     SUB84(dVar27,0) & uVar3)) ||
          (dVar27 = dStack_540 - pdVar1[1],
          dVar5 < (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & uVar4,SUB84(dVar27,0) & uVar3
                                  ))) ||
         (bVar11 = true,
         dVar5 < (double)CONCAT44((uint)((ulonglong)(local_538 - local_3e8) >> 0x20) & uVar4,
                                  SUB84(local_538 - local_3e8,0) & uVar3))) {
        bVar11 = false;
      }
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_560.Data.ArrayNum != 0) {
        FVar21.Data = local_560.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,bVar11);
      if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.Data.AllocatorInstance.Data);
      }
      uVar23 = (ulonglong)(uVar22 + 1);
      uVar24 = uVar24 + 0x60;
    } while ((int)(uVar22 + 1) < local_630.ArrayNum);
  }
  if (local_5e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data);
  }
  if (local_5f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data);
  }
  if (local_608.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data);
  }
  local_618._0_8_ = &___7ICompressedAnimData__6B_;
  if (local_698.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data);
  }
  if (local_6a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.AllocatorInstance.Data);
  }
  if (local_6c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.AllocatorInstance.Data);
  }
  if (local_670.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_670.Data);
  }
  if ((TTransform<double> *)local_6d8.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_6d8.Data);
  }
  if (local_660.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data);
  }
  if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_640.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14750c820

FString * __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::GetBeautifiedTestName
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseScales *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Animation.VariableKeyLerp.GetPoseScales");
  return __return_storage_ptr__;
}

// operator() @ 14753d0f0

FString * __thiscall
`FIspcTestAnimEncodingVariableKeyLerpGetPoseScales::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FString *__return_storage_ptr__,bool param_1)

{
  FString *pFVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FStringFormatArg local_48;
  FStringFormatArg local_28;
  
  pFVar1 = ::FString::FString(&local_58,this);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar1);
  FStringFormatArg::FStringFormatArg(&local_28,(uint)param_1);
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_68.AllocatorInstance,2,&local_68.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_68.AllocatorInstance.Data,&local_48,2)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"{0} {1}",&local_68);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FStringFormatArg *)local_68.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

