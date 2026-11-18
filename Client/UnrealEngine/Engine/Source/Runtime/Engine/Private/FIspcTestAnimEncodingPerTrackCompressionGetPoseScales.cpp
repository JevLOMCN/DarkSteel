// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 147520830

EAutomationTestFlags __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::GetTestFlags
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 147520840

bool __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::IsStressTest
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147520850

uint __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::GetRequiredDeviceNum
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this)

{
  return 1;
}

// GetTestSourceFileName @ 147520860

FString * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::GetTestSourceFileName
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingPerTrackCompression.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147520890

int __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::GetTestSourceFileLine
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this)

{
  return 0xd6;
}

// GetTests @ 1475208a0

/* WARNING: Removing unreachable block (ram,0x00014752098d) */
/* WARNING: Removing unreachable block (ram,0x000147520a58) */

void __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::GetTests
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this,
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
  
  ::FString::FString(&local_18,"Ispc.Animation.PerTrackCompression.GetPoseScales");
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

// RunTest @ 147520a80

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
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::RunTest
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this,FString *param_1)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  UEngine *pUVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  FOutputDeviceRedirector *pFVar18;
  FString *pFVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  uint uVar23;
  size_t _Size;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  double dVar28;
  undefined1 auStackY_718 [32];
  ForAnyElementType local_6c8;
  undefined8 local_6c0;
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> local_6b8;
  undefined4 local_6a8;
  undefined4 local_6a4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_6a0;
  ForAnyElementType local_690;
  int local_688;
  int local_684 [3];
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 local_670;
  undefined4 uStack_66c;
  ForAnyElementType local_668;
  int local_660;
  int local_65c;
  ForAnyElementType local_658;
  int local_64c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_648;
  FString local_638;
  undefined1 local_628 [16];
  ForAnyElementType local_618;
  int local_610;
  int iStack_60c;
  ForAnyElementType local_608;
  undefined8 local_600;
  undefined4 local_5f8;
  ForAnyElementType local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  TArrayView<UE::Math::TTransform<double>,int> local_5b8;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  FName local_590;
  TArrayView<UE::Math::TTransform<double>,int> local_588;
  undefined8 local_578;
  AEFPerTrackCompressionCodec local_570;
  undefined8 local_568;
  FString local_560;
  AEFPerTrackCompressionCodec local_550;
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
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_718;
  ::FString::FString(&local_638,L"a.PerTrackCompression.ISPC");
  iVar13 = local_638.Data.ArrayNum;
  FVar21.Data = local_638.Data.AllocatorInstance.Data;
  uVar24 = 0;
  local_658.Data = (FScriptContainerElement *)0x0;
  if (local_638.Data.ArrayNum == 0) {
    local_64c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_638.Data.ArrayNum,0,&local_658,local_638.Data.ArrayNum,&local_64c);
    memcpy(local_658.Data,FVar21.Data,(longlong)iVar13 * 2);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_638.Data.ArrayNum != 0) {
    FVar21.Data = local_638.Data.AllocatorInstance.Data;
  }
  plVar17 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,FVar21.Data,1);
  bVar9 = (bool)(**(code **)(*plVar17 + 0xc0))(plVar17);
  if ((GEngine == (UEngine *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingPerTrackCompression.cpp"
                          ,0xe0,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  uVar7 = _UNK_1516fe2d8;
  uVar6 = ___xmm_00000000000000004046800000000000;
  dVar5 = _UNK_150689688;
  dVar4 = ___xmm_3ff00000000000003ff0000000000000;
  dVar28 = _UNK_150689518;
  dVar3 = ___xmm_00000000000000003ff0000000000000;
  local_6c8.Data = (FScriptContainerElement *)0x0;
  local_6c0 = 0;
  iVar12 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  local_3d8.Scale3D.XY.m128d_f64[1] = _UNK_1516fe338;
  local_3d8.Scale3D.XY.m128d_f64[0] = ___xmm_40668000000000004046800000000000;
  local_d8 = dVar4;
  dStack_d0 = dVar5;
  local_c8 = dVar4;
  dStack_c0 = dVar5;
  iVar13 = iVar12 + 1;
  local_b8 = dVar4;
  dStack_b0 = dVar5;
  local_a8 = dVar3;
  dStack_a0 = dVar28;
  local_98 = uVar6;
  uStack_90 = uVar7;
  local_88 = 0;
  uStack_80 = 0;
  local_3d8.Rotation.XY.m128d_f64[0] = dVar4;
  local_3d8.Rotation.XY.m128d_f64[1] = dVar5;
  lVar20 = (longlong)iVar12 * 0x60;
  local_3d8.Rotation.ZW.m128d_f64[0] = dVar4;
  local_3d8.Rotation.ZW.m128d_f64[1] = dVar5;
  local_3d8.Translation.XY.m128d_f64[0] = dVar4;
  local_3d8.Translation.XY.m128d_f64[1] = dVar5;
  local_3d8.Translation.ZW.m128d_f64[0] = dVar3;
  local_3d8.Translation.ZW.m128d_f64[1] = dVar28;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = dVar4;
  *(double *)(local_6c8.Data + lVar20 + 8) = dVar5;
  *(double *)(local_6c8.Data + lVar20 + 0x10) = dVar4;
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = dVar5;
  *(double *)(local_6c8.Data + lVar20 + 0x20) = dVar4;
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = dVar5;
  *(double *)(local_6c8.Data + lVar20 + 0x30) = dVar3;
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = dVar28;
  *(undefined8 *)(local_6c8.Data + lVar20 + 0x40) = uVar6;
  *(undefined8 *)(local_6c8.Data + lVar20 + 0x40 + 8) = uVar7;
  *(undefined8 *)(local_6c8.Data + lVar20 + 0x50) = 0;
  *(undefined8 *)(local_6c8.Data + lVar20 + 0x50 + 8) = 0;
  local_3d8.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_3d8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_3d8) &&
      (&local_3d8 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  iVar13 = (int)local_6c0 + 1;
  local_378.Rotation.XY.m128d_f64[0] = dVar4;
  local_378.Rotation.XY.m128d_f64[1] = dVar5;
  local_378.Rotation.ZW.m128d_f64[0] = dVar4;
  local_378.Rotation.ZW.m128d_f64[1] = dVar5;
  local_378.Translation.XY.m128d_f64[0] = dVar4;
  local_378.Translation.XY.m128d_f64[1] = dVar5;
  local_378.Translation.ZW.m128d_f64[0] = dVar3;
  local_378.Translation.ZW.m128d_f64[1] = dVar28;
  lVar20 = (longlong)(int)local_6c0 * 0x60;
  local_378.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_378.Scale3D.ZW.m128d_f64[1] = 0.0;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_3d8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_3d8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_3d8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_3d8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_3d8.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_3d8.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_3d8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_3d8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_3d8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_3d8.Scale3D.XY.m128d_f64[1];
  local_378.Scale3D.XY.m128d_f64[1] = _UNK_1516fe388;
  local_378.Scale3D.XY.m128d_f64[0] = ___xmm_c0568000000000003ff0000000000000;
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_3d8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_3d8.Scale3D.ZW.m128d_f64[1];
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_378) &&
      (&local_378 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  iVar13 = (int)local_6c0 + 1;
  local_318.Rotation.XY.m128d_f64[0] = dVar4;
  local_318.Rotation.XY.m128d_f64[1] = dVar5;
  local_318.Rotation.ZW.m128d_f64[0] = dVar4;
  local_318.Rotation.ZW.m128d_f64[1] = dVar5;
  local_318.Translation.XY.m128d_f64[0] = dVar4;
  local_318.Translation.XY.m128d_f64[1] = dVar5;
  local_318.Translation.ZW.m128d_f64[0] = dVar3;
  local_318.Translation.ZW.m128d_f64[1] = dVar28;
  lVar20 = (longlong)(int)local_6c0 * 0x60;
  local_318.Scale3D.XY.m128d_f64[0] = dVar4;
  local_318.Scale3D.XY.m128d_f64[1] = dVar5;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_378.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_378.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_378.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_378.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_378.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_378.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_378.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_378.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_378.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_378.Scale3D.XY.m128d_f64[1];
  local_318.Scale3D.ZW.m128d_f64[1] = _UNK_150f34e18;
  local_318.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000004059000000000000;
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_378.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_378.Scale3D.ZW.m128d_f64[1];
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_318) &&
      (&local_318 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  iVar13 = (int)local_6c0 + 1;
  local_2b8.Rotation.XY.m128d_f64[0] = dVar4;
  local_2b8.Rotation.XY.m128d_f64[1] = dVar5;
  local_2b8.Rotation.ZW.m128d_f64[0] = dVar4;
  local_2b8.Rotation.ZW.m128d_f64[1] = dVar5;
  local_2b8.Translation.XY.m128d_f64[0] = dVar4;
  local_2b8.Translation.XY.m128d_f64[1] = dVar5;
  local_2b8.Translation.ZW.m128d_f64[0] = dVar3;
  local_2b8.Translation.ZW.m128d_f64[1] = dVar28;
  lVar20 = (longlong)(int)local_6c0 * 0x60;
  local_2b8.Scale3D.XY.m128d_f64[0] = 0.0;
  local_2b8.Scale3D.XY.m128d_f64[1] = 0.0;
  local_2b8.Scale3D.ZW.m128d_f64[0] = 0.0;
  local_2b8.Scale3D.ZW.m128d_f64[1] = 0.0;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_318.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_318.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_318.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_318.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_318.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_318.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_318.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_318.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_318.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_318.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_318.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_318.Scale3D.ZW.m128d_f64[1];
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_2b8) &&
      (&local_2b8 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  iVar13 = (int)local_6c0 + 1;
  local_258.Rotation.XY.m128d_f64[0] = dVar4;
  local_258.Rotation.XY.m128d_f64[1] = dVar5;
  local_258.Rotation.ZW.m128d_f64[0] = dVar4;
  local_258.Rotation.ZW.m128d_f64[1] = dVar5;
  local_258.Translation.XY.m128d_f64[0] = dVar4;
  local_258.Translation.XY.m128d_f64[1] = dVar5;
  local_258.Translation.ZW.m128d_f64[0] = dVar3;
  local_258.Translation.ZW.m128d_f64[1] = dVar28;
  lVar20 = (longlong)(int)local_6c0 * 0x60;
  local_258.Scale3D.XY.m128d_f64[0] = dVar4;
  local_258.Scale3D.XY.m128d_f64[1] = dVar5;
  local_258.Scale3D.ZW.m128d_f64[0] = dVar3;
  local_258.Scale3D.ZW.m128d_f64[1] = dVar28;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_2b8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_2b8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_2b8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_2b8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_2b8.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_2b8.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_2b8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_2b8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_2b8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_2b8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_2b8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_2b8.Scale3D.ZW.m128d_f64[1];
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_258) &&
      (&local_258 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  iVar13 = (int)local_6c0 + 1;
  local_1f8.Rotation.XY.m128d_f64[0] = dVar4;
  local_1f8.Rotation.XY.m128d_f64[1] = dVar5;
  local_1f8.Rotation.ZW.m128d_f64[0] = dVar4;
  local_1f8.Rotation.ZW.m128d_f64[1] = dVar5;
  local_1f8.Translation.XY.m128d_f64[0] = dVar4;
  local_1f8.Translation.XY.m128d_f64[1] = dVar5;
  local_1f8.Translation.ZW.m128d_f64[0] = dVar3;
  local_1f8.Translation.ZW.m128d_f64[1] = dVar28;
  lVar20 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_258.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_258.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_258.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_258.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_258.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_258.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_258.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_258.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_258.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_258.Scale3D.XY.m128d_f64[1];
  local_1f8.Scale3D.XY.m128d_f64[1] = _UNK_1516fe368;
  local_1f8.Scale3D.XY.m128d_f64[0] = ___xmm_40768000000000004076800000000000;
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_258.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_258.Scale3D.ZW.m128d_f64[1];
  local_1f8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000004076800000000000;
  local_1f8.Scale3D.ZW.m128d_f64[1] = _UNK_1516fe2e8;
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_1f8) &&
      (&local_1f8 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  iVar13 = (int)local_6c0 + 1;
  local_198.Rotation.XY.m128d_f64[0] = dVar4;
  local_198.Rotation.XY.m128d_f64[1] = dVar5;
  local_198.Rotation.ZW.m128d_f64[0] = dVar4;
  local_198.Rotation.ZW.m128d_f64[1] = dVar5;
  local_198.Translation.XY.m128d_f64[0] = dVar4;
  local_198.Translation.XY.m128d_f64[1] = dVar5;
  local_198.Translation.ZW.m128d_f64[0] = dVar3;
  local_198.Translation.ZW.m128d_f64[1] = dVar28;
  lVar20 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_1f8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_1f8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_1f8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_1f8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_1f8.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_1f8.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_1f8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_1f8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_1f8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_1f8.Scale3D.XY.m128d_f64[1];
  local_198.Scale3D.XY.m128d_f64[1] = _UNK_1516fe378;
  local_198.Scale3D.XY.m128d_f64[0] = ___xmm_40c194000000000040c1940000000000;
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_1f8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_1f8.Scale3D.ZW.m128d_f64[1];
  local_198.Scale3D.ZW.m128d_f64[0] = ___xmm_000000000000000040c1940000000000;
  local_198.Scale3D.ZW.m128d_f64[1] = _UNK_1516fe308;
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_198) &&
      (&local_198 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  iVar13 = (int)local_6c0 + 1;
  local_138.Rotation.XY.m128d_f64[0] = dVar4;
  local_138.Rotation.XY.m128d_f64[1] = dVar5;
  local_138.Rotation.ZW.m128d_f64[0] = dVar4;
  local_138.Rotation.ZW.m128d_f64[1] = dVar5;
  local_138.Translation.XY.m128d_f64[0] = dVar4;
  local_138.Translation.XY.m128d_f64[1] = dVar5;
  local_138.Translation.ZW.m128d_f64[0] = dVar3;
  local_138.Translation.ZW.m128d_f64[1] = dVar28;
  lVar20 = (longlong)(int)local_6c0 * 0x60;
  local_138.Scale3D.ZW.m128d_f64[0] = dVar3;
  local_138.Scale3D.ZW.m128d_f64[1] = dVar28;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_198.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_198.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_198.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_198.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_198.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_198.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_198.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_198.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_198.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_198.Scale3D.XY.m128d_f64[1];
  local_138.Scale3D.XY.m128d_f64[1] = _UNK_1516fe398;
  local_138.Scale3D.XY.m128d_f64[0] = ___xmm_c066800000000000c046800000000000;
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_198.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_198.Scale3D.ZW.m128d_f64[1];
  local_6c0._0_4_ = iVar13;
  if (((local_6c8.Data <= &local_138) &&
      (&local_138 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  iVar13 = (int)local_6c0;
  if ((int)local_6c0 == local_6c0._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  FVar21.Data = local_6c8.Data;
  local_660 = iVar13 + 1;
  local_6c0 = CONCAT44(local_6c0._4_4_,local_660);
  lVar20 = (longlong)iVar13 * 0x60;
  *(double *)&local_6c8.Data[lVar20].field_0x0 = local_138.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 8) = local_138.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x10) = local_138.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x10 + 8) = local_138.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x20) = local_138.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x20 + 8) = local_138.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x30) = local_138.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x30 + 8) = local_138.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x40) = local_138.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x40 + 8) = local_138.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar20 + 0x50) = local_138.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar20 + 0x50 + 8) = local_138.Scale3D.ZW.m128d_f64[1];
  lVar20 = (longlong)local_660;
  local_668.Data = (FScriptContainerElement *)0x0;
  if (local_660 == 0) {
    local_65c = 0;
    local_5b8.ArrayNum = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_660,0,&local_668,local_660,&local_65c);
    memcpy(local_668.Data,FVar21.Data,lVar20 * 0x60);
    local_5b8.ArrayNum = (int)local_6c0;
  }
  local_5b8.DataPtr = (TTransform<double> *)local_6c8.Data;
  if ((local_5b8.ArrayNum < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  iVar13 = local_660;
  local_588.DataPtr = (TTransform<double> *)local_668.Data;
  if ((local_660 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  local_588.ArrayNum = iVar13;
  local_6b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b8.ArrayNum = 0;
  local_6b8.ArrayMax = 0;
  local_5a8 = 0;
  iVar12 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_6b8.AllocatorInstance,&local_6b8.ArrayMax);
  local_678 = 1;
  uStack_674 = 1;
  iVar13 = iVar12 + 1;
  *(undefined8 *)(local_6b8.AllocatorInstance.Data + (longlong)iVar12 * 8) = 0;
  local_6b8.ArrayNum = iVar13;
  if (((local_6b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_678) &&
      ((FScriptContainerElement *)&local_678 <
       local_6b8.AllocatorInstance.Data + (longlong)local_6b8.ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if (local_6b8.ArrayNum == local_6b8.ArrayMax) {
    local_6b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_6b8.AllocatorInstance,&local_6b8.ArrayMax);
  }
  iVar13 = local_6b8.ArrayNum + 1;
  local_670 = 2;
  uStack_66c = 2;
  *(ulonglong *)(local_6b8.AllocatorInstance.Data + (longlong)local_6b8.ArrayNum * 8) =
       CONCAT44(uStack_674,local_678);
  local_6b8.ArrayNum = iVar13;
  if (((local_6b8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_670) &&
      ((FScriptContainerElement *)&local_670 <
       local_6b8.AllocatorInstance.Data + (longlong)local_6b8.ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  iVar13 = local_6b8.ArrayNum;
  if (local_6b8.ArrayNum == local_6b8.ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_6b8.AllocatorInstance,&local_6b8.ArrayMax);
  }
  local_6b8.ArrayNum = iVar13 + 1;
  *(ulonglong *)(local_6b8.AllocatorInstance.Data + (longlong)iVar13 * 8) =
       CONCAT44(uStack_66c,local_670);
  local_6a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a0.ArrayNum = 0;
  local_6a0.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,400,&local_6a0.AllocatorInstance,&local_6a0.ArrayNum,&local_6a0.ArrayMax);
  uVar14 = 0;
  if (0 < local_6a0.ArrayNum) {
    lVar20 = 2;
    uVar22 = 2;
    do {
      uVar15 = 0;
      if ((int)(uVar22 - 2) < local_6a0.ArrayNum) {
        uVar15 = ~(uVar22 - 2) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      local_6a0.AllocatorInstance.Data[lVar20 + -2] = (FScriptContainerElement)0x0;
      uVar15 = uVar14;
      if ((int)(uVar22 - 1) < local_6a0.ArrayNum) {
        uVar15 = ~(uVar22 - 1) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      local_6a0.AllocatorInstance.Data[lVar20 + -1] = (FScriptContainerElement)0x60;
      uVar15 = uVar14;
      if ((int)uVar22 < local_6a0.ArrayNum) {
        uVar15 = ~uVar22 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      local_6a0.AllocatorInstance.Data[lVar20] = (FScriptContainerElement)0x0;
      uVar15 = uVar14;
      if ((int)(uVar22 + 1) < local_6a0.ArrayNum) {
        uVar15 = ~(uVar22 + 1) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      local_6a0.AllocatorInstance.Data[lVar20 + 1] = (FScriptContainerElement)0x0;
      lVar20 = lVar20 + 4;
      iVar13 = uVar22 + 2;
      uVar22 = uVar22 + 4;
    } while (iVar13 < local_6a0.ArrayNum);
  }
  local_690.Data = (FScriptContainerElement *)0x0;
  lVar20 = 100;
  local_684[0] = 0;
  local_684[1] = 2;
  local_6a8 = 0x1e;
  local_688 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_690,0,local_684);
  lVar26 = 100;
  do {
    if (((local_690.Data <= (FScriptContainerElement *)&local_6a8) &&
        ((FScriptContainerElement *)&local_6a8 < local_690.Data + (longlong)local_684[0] * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    if (local_688 == local_684[0]) {
      local_688 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_690,local_684);
    }
    iVar13 = local_688 + 1;
    *(undefined4 *)(local_690.Data + (longlong)local_688 * 4) = local_6a8;
    lVar26 = lVar26 + -1;
    local_688 = iVar13;
  } while (lVar26 != 0);
  local_618.Data = (FScriptContainerElement *)0x0;
  local_628._0_8_ = &___7FUECompressedAnimDataMutable__6B_;
  local_610 = 0;
  iStack_60c = 0;
  local_608.Data = (FScriptContainerElement *)0x0;
  local_600 = 0;
  local_5f8 = 2;
  local_5f0.Data = (FScriptContainerElement *)0x0;
  local_5e8 = 0;
  local_5e0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_6a4 = 0x1e;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_618,0,&iStack_60c);
  do {
    if (((local_618.Data <= (FScriptContainerElement *)&local_6a4) &&
        ((FScriptContainerElement *)&local_6a4 < local_618.Data + (longlong)iStack_60c * 4)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar2 = (code *)swi(3);
      uVar10 = (*pcVar2)();
      return (bool)uVar10;
    }
    if (local_610 == iStack_60c) {
      local_610 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_618,&iStack_60c);
    }
    iVar13 = local_688;
    FVar21.Data = local_690.Data;
    lVar26 = (longlong)local_610;
    local_610 = local_610 + 1;
    *(undefined4 *)(local_618.Data + lVar26 * 4) = local_6a4;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  lVar20 = (longlong)local_688;
  local_600._0_4_ = local_688;
  if ((local_688 == 0) && (local_600._4_4_ == 0)) {
    local_600 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_688,local_600._4_4_,&local_608,local_688,(int *)((longlong)&local_600 + 4))
    ;
    if (iVar13 != 0) {
      memcpy(local_608.Data,FVar21.Data,lVar20 << 2);
    }
  }
  FVar21.Data = local_6a0.AllocatorInstance.Data;
  iVar13 = local_6a0.ArrayNum;
  _Size = (size_t)local_6a0.ArrayNum;
  local_5f8 = local_684[1];
  local_5e8 = CONCAT44(local_5e8._4_4_,local_6a0.ArrayNum);
  if ((local_6a0.ArrayNum == 0) && (local_5e8._4_4_ == 0)) {
    local_5e8 = local_6a0._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_6a0.ArrayNum,local_5e8._4_4_,&local_5f0,local_6a0.ArrayNum,
               (int *)((longlong)&local_5e8 + 4));
    if (iVar13 != 0) {
      memcpy(local_5f0.Data,FVar21.Data,_Size);
    }
  }
  local_5c8 = 0x600000002;
  uStack_5c0 = 0x600000006;
  FUECompressedAnimDataMutable::BuildFinalBuffer
            ((FUECompressedAnimDataMutable *)local_628,&local_6a0);
  ::FName::FName(&local_590,L"");
  pUVar8 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar18 = GetGlobalLogSingleton();
  pFVar19 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::RunTest'::__l2::<lambda_1>::
            operator()(&local_658,&local_448,true);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar27 = L"";
  }
  else {
    pwVar27 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar8->_padding_,0,pwVar27,pFVar18);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  dVar3 = __real_3ef179ec9cbd821e;
  local_570 = (AEFPerTrackCompressionCodec)&___7AEFPerTrackCompressionCodec__6B_;
  local_578 = 1;
  local_528.AnimName = local_590;
  local_528.CompressedAnimData = (ICompressedAnimData *)local_628;
  local_528.RefPoses.DataPtr = (TTransform<double> *)local_6c8.Data;
  local_5a0 = 1;
  local_528.Interpolation = Linear;
  local_528.Time = 0.0;
  local_528.RelativePos = 0.0;
  local_528.RefPoses.ArrayNum = (int)local_6c0;
  local_528.SequenceLength = (float)(__real_3ef179ec9cbd821e * 1.0);
  if (((int)local_6c0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
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
  AEFPerTrackCompressionCodec::GetPoseScales(&local_570,&local_5b8,&local_6b8,&local_528);
  pUVar8 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar18 = GetGlobalLogSingleton();
  pFVar19 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::RunTest'::__l2::<lambda_1>::
            operator()(&local_658,&local_438,false);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar27 = L"";
  }
  else {
    pwVar27 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar8->_padding_,0,pwVar27,pFVar18);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  local_550 = (AEFPerTrackCompressionCodec)&___7AEFPerTrackCompressionCodec__6B_;
  local_568 = 1;
  local_4b8.AnimName = local_590;
  local_4b8.CompressedAnimData = (ICompressedAnimData *)local_628;
  local_4b8.RefPoses.DataPtr = (TTransform<double> *)local_668.Data;
  local_598 = 1;
  local_4b8.Interpolation = Linear;
  local_4b8.Time = 0.0;
  local_4b8.RelativePos = 0.0;
  local_4b8.RefPoses.ArrayNum = local_660;
  local_4b8.SequenceLength = (float)(dVar3 * 1.0);
  if ((local_660 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
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
  AEFPerTrackCompressionCodec::GetPoseScales(&local_550,&local_588,&local_6b8,&local_4b8);
  pUVar8 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  GetGlobalLogSingleton();
  pFVar19 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::RunTest'::__l2::<lambda_1>::
            operator()(&local_658,&local_428,bVar9);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar27 = L"";
  }
  else {
    pwVar27 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar8->_padding_,0,pwVar27);
  if (local_428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.Data.AllocatorInstance.Data);
  }
  dVar3 = __real_3f1a36e2e0000000;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar22 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = uVar24;
  if (0 < local_5b8.ArrayNum) {
    do {
      uVar23 = (uint)uVar24;
      FStringFormatArg::FStringFormatArg(&local_418,uVar23);
      local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_648.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_648.AllocatorInstance,1,&local_648.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_648.AllocatorInstance.Data,&local_418,1);
      ::FString::FormatImpl(&local_560,L"Scale {0}",&local_648);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_648.AllocatorInstance.Data,local_648.ArrayNum);
      if ((FStringFormatArg *)local_648.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_648.AllocatorInstance.Data);
      }
      if (local_418.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_418.StringValue.Data.AllocatorInstance.Data);
      }
      uVar16 = uVar14;
      if ((int)uVar23 < local_5b8.ArrayNum) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      pdVar1 = (double *)((longlong)((local_5b8.DataPtr)->Scale3D).XY.m128d_f64 + uVar25);
      local_548 = *pdVar1;
      dStack_540 = pdVar1[1];
      local_538 = *(double *)((longlong)((local_5b8.DataPtr)->Scale3D).ZW.m128d_f64 + uVar25);
      uVar16 = uVar14;
      if ((int)uVar23 < local_588.ArrayNum) {
        uVar16 = ~uVar23 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        uVar10 = (*pcVar2)();
        return (bool)uVar10;
      }
      pdVar1 = (double *)((longlong)((local_588.DataPtr)->Scale3D).XY.m128d_f64 + uVar25);
      local_3e8 = *(double *)((longlong)((local_588.DataPtr)->Scale3D).ZW.m128d_f64 + uVar25);
      dVar28 = local_548 - *pdVar1;
      if (((dVar3 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                     SUB84(dVar28,0) & uVar22)) ||
          (dVar28 = dStack_540 - pdVar1[1],
          dVar3 < (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) & uVar15,
                                   SUB84(dVar28,0) & uVar22))) ||
         (bVar9 = true,
         dVar3 < (double)CONCAT44((uint)((ulonglong)(local_538 - local_3e8) >> 0x20) & uVar15,
                                  SUB84(local_538 - local_3e8,0) & uVar22))) {
        bVar9 = false;
      }
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_560.Data.ArrayNum != 0) {
        FVar21.Data = local_560.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar21.Data,bVar9);
      if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.Data.AllocatorInstance.Data);
      }
      uVar24 = (ulonglong)(uVar23 + 1);
      uVar25 = uVar25 + 0x60;
    } while ((int)(uVar23 + 1) < local_5b8.ArrayNum);
  }
  if (local_5f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data);
  }
  if (local_608.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data);
  }
  if (local_618.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data);
  }
  local_628._0_8_ = &___7ICompressedAnimData__6B_;
  if (local_690.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.Data);
  }
  if (local_6a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.AllocatorInstance.Data);
  }
  if (local_6b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.AllocatorInstance.Data);
  }
  if (local_668.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data);
  }
  if ((TTransform<double> *)local_6c8.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_6c8.Data);
  }
  if (local_658.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data);
  }
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 147522350

FString * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::GetBeautifiedTestName
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseScales *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Animation.PerTrackCompression.GetPoseScales");
  return __return_storage_ptr__;
}

// operator() @ 14753cdc0

FString * __thiscall
`FIspcTestAnimEncodingPerTrackCompressionGetPoseScales::RunTest'::__l2::<lambda_1>::operator()
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

