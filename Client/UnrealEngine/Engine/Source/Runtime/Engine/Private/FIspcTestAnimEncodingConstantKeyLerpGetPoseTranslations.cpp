// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 147517610

EAutomationTestFlags __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::GetTestFlags
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 147517620

bool __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::IsStressTest
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147517630

uint __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::GetRequiredDeviceNum
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this)

{
  return 1;
}

// GetTestSourceFileName @ 147517640

FString * __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::GetTestSourceFileName
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingConstantKeyLerp.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147517670

int __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::GetTestSourceFileLine
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this)

{
  return 0x68;
}

// GetTests @ 147517680

/* WARNING: Removing unreachable block (ram,0x00014751776d) */
/* WARNING: Removing unreachable block (ram,0x000147517838) */

void __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::GetTests
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this,
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
  
  ::FString::FString(&local_18,"Ispc.Animation.ConstantKeyLerp.GetPoseTranslations");
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

// RunTest @ 147517860

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
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::RunTest
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this,FString *param_1)

{
  double *pdVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  UEngine *pUVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong *plVar23;
  FOutputDeviceRedirector *pFVar24;
  FString *pFVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  size_t _Size;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  wchar_t *pwVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_748 [32];
  ForAnyElementType local_6f8;
  undefined8 local_6f0;
  FScriptContainerElement local_6e8 [8];
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> local_6e0;
  undefined4 local_6d0;
  undefined4 local_6cc;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_6c8;
  ForAnyElementType local_6b8;
  int local_6b0;
  int local_6ac [3];
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 local_698;
  undefined4 uStack_694;
  ForAnyElementType local_690;
  int local_688;
  int local_684;
  ForAnyElementType local_680;
  int local_674;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_670;
  FString local_660;
  TArrayView<UE::Math::TTransform<double>,int> local_650;
  undefined1 local_638 [16];
  ForAnyElementType local_628;
  int local_620;
  int iStack_61c;
  ForAnyElementType local_618;
  undefined8 local_610;
  undefined4 local_608;
  ForAnyElementType local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  FName local_5b8;
  undefined8 local_5b0;
  TArrayView<UE::Math::TTransform<double>,int> local_5a8;
  undefined8 local_598;
  AEFConstantKeyLerp<6> local_590;
  undefined8 local_588;
  FString local_580;
  AEFConstantKeyLerp<6> local_570;
  double local_568;
  double dStack_560;
  double local_558;
  FAnimSequenceDecompressionContext local_548;
  FAnimSequenceDecompressionContext local_4d8;
  FString local_468;
  FString local_458;
  FString local_448;
  FStringFormatArg local_438;
  double local_408;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_748;
  ::FString::FString(&local_660,L"a.ConstantKeyLerp.ISPC");
  iVar21 = local_660.Data.ArrayNum;
  FVar27.Data = local_660.Data.AllocatorInstance.Data;
  uVar29 = 0;
  local_680.Data = (FScriptContainerElement *)0x0;
  if (local_660.Data.ArrayNum == 0) {
    local_674 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_660.Data.ArrayNum,0,&local_680,local_660.Data.ArrayNum,&local_674);
    memcpy(local_680.Data,FVar27.Data,(longlong)iVar21 * 2);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_660.Data.ArrayNum != 0) {
    FVar27.Data = local_660.Data.AllocatorInstance.Data;
  }
  plVar23 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,FVar27.Data,1);
  bVar17 = (bool)(**(code **)(*plVar23 + 0xc0))(plVar23);
  if ((GEngine == (UEngine *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingConstantKeyLerp.cpp"
                          ,0x72,L""), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  uVar15 = _UNK_1516fe2d8;
  uVar14 = ___xmm_00000000000000004046800000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar38 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar39 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_6f8.Data = (FScriptContainerElement *)0x0;
  local_6f0 = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar34 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar35 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar40 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar41 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar36 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar37 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  iVar20 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  iVar21 = iVar20 + 1;
  local_f8._8_4_ = uVar38;
  local_f8._0_8_ = (double)fVar5;
  local_f8._12_4_ = uVar39;
  local_e8._8_4_ = uVar34;
  local_e8._0_8_ = (double)fVar3;
  local_e8._12_4_ = uVar35;
  local_d8 = uVar14;
  uStack_d0 = uVar15;
  lVar26 = (longlong)iVar20 * 0x60;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8._8_4_ = uVar40;
  local_b8._0_8_ = (double)fVar6;
  local_b8._12_4_ = uVar41;
  local_a8._8_4_ = uVar36;
  local_a8._0_8_ = (double)fVar4;
  local_a8._12_4_ = uVar37;
  auVar9._8_4_ = uVar38;
  auVar9._0_8_ = (double)fVar5;
  auVar9._12_4_ = uVar39;
  *(undefined1 (*) [16])&local_6f8.Data[lVar26].field_0x0 = auVar9;
  auVar7._8_4_ = uVar34;
  auVar7._0_8_ = (double)fVar3;
  auVar7._12_4_ = uVar35;
  *(undefined1 (*) [16])(local_6f8.Data + lVar26 + 0x10) = auVar7;
  *(undefined8 *)(local_6f8.Data + lVar26 + 0x20) = uVar14;
  *(undefined8 *)(local_6f8.Data + lVar26 + 0x20 + 8) = uVar15;
  *(undefined8 *)(local_6f8.Data + lVar26 + 0x30) = 0;
  *(undefined8 *)(local_6f8.Data + lVar26 + 0x30 + 8) = 0;
  auVar10._8_4_ = uVar40;
  auVar10._0_8_ = (double)fVar6;
  auVar10._12_4_ = uVar41;
  *(undefined1 (*) [16])(local_6f8.Data + lVar26 + 0x40) = auVar10;
  auVar8._8_4_ = uVar36;
  auVar8._0_8_ = (double)fVar4;
  auVar8._12_4_ = uVar37;
  *(undefined1 (*) [16])(local_6f8.Data + lVar26 + 0x50) = auVar8;
  local_3f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_3f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_3f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_3f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_3f8.Translation.XY.m128d_f64[0] = ___xmm_4066800000000000c07c200000000000;
  local_3f8.Translation.XY.m128d_f64[1] = _UNK_1516fe358;
  local_3f8.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004079000000000000;
  local_3f8.Translation.ZW.m128d_f64[1] = _UNK_1516fe2f8;
  local_3f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_3f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_3f8) &&
      (&local_3f8 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if ((int)local_6f0 == local_6f0._4_4_) {
    local_6f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  iVar21 = (int)local_6f0 + 1;
  local_218.Translation.ZW.m128d_f64[0] = 0.0;
  local_218.Translation.ZW.m128d_f64[1] = 0.0;
  lVar26 = (longlong)(int)local_6f0 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_3f8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_3f8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_3f8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_3f8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_3f8.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_3f8.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_3f8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_3f8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_3f8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_3f8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_3f8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_3f8.Scale3D.ZW.m128d_f64[1];
  local_218.Translation.XY.m128d_f64[0] = ___xmm_40668000000000004056800000000000;
  local_218.Translation.XY.m128d_f64[1] = _UNK_1516fe348;
  local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_218.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_218.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_218.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_218.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_218) &&
      (&local_218 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if ((int)local_6f0 == local_6f0._4_4_) {
    local_6f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  dVar33 = _UNK_150f34e18;
  dVar13 = ___xmm_00000000000000004059000000000000;
  iVar21 = (int)local_6f0 + 1;
  local_398.Translation.XY.m128d_f64[0] = 0.0;
  local_398.Translation.XY.m128d_f64[1] = 0.0;
  local_398.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004059000000000000;
  local_398.Translation.ZW.m128d_f64[1] = _UNK_150f34e18;
  lVar26 = (longlong)(int)local_6f0 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_218.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_218.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_218.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_218.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_218.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_218.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_218.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_218.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_218.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_218.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_218.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_218.Scale3D.ZW.m128d_f64[1];
  local_398.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_398.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_398.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_398.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_398.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_398.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_398.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_398.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_398) &&
      (&local_398 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if ((int)local_6f0 == local_6f0._4_4_) {
    local_6f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  iVar21 = (int)local_6f0 + 1;
  local_338.Translation.ZW.m128d_f64[0] = dVar13;
  local_338.Translation.ZW.m128d_f64[1] = dVar33;
  lVar26 = (longlong)(int)local_6f0 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_398.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_398.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_398.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_398.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_398.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_398.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_398.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_398.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_398.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_398.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_398.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_398.Scale3D.ZW.m128d_f64[1];
  local_338.Translation.XY.m128d_f64[0] = ___xmm_40590000000000004059000000000000;
  local_338.Translation.XY.m128d_f64[1] = _UNK_1512468d8;
  local_338.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_338.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_338.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_338.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_338.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_338.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_338.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_338.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_338) &&
      (&local_338 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if ((int)local_6f0 == local_6f0._4_4_) {
    local_6f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  iVar21 = (int)local_6f0 + 1;
  local_2d8.Translation.XY.m128d_f64[0] = 0.0;
  local_2d8.Translation.XY.m128d_f64[1] = 0.0;
  local_2d8.Translation.ZW.m128d_f64[0] = 0.0;
  local_2d8.Translation.ZW.m128d_f64[1] = 0.0;
  lVar26 = (longlong)(int)local_6f0 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_338.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_338.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_338.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_338.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_338.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_338.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_338.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_338.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_338.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_338.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_338.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_338.Scale3D.ZW.m128d_f64[1];
  local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_2d8) &&
      (&local_2d8 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if ((int)local_6f0 == local_6f0._4_4_) {
    local_6f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  dVar33 = _UNK_150689518;
  dVar13 = ___xmm_00000000000000003ff0000000000000;
  iVar21 = (int)local_6f0 + 1;
  local_278.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_278.Translation.ZW.m128d_f64[1] = _UNK_150689518;
  lVar26 = (longlong)(int)local_6f0 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_2d8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_2d8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_2d8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_2d8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_2d8.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_2d8.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_2d8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_2d8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_2d8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_2d8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_2d8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_2d8.Scale3D.ZW.m128d_f64[1];
  local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_278.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_278.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_278.Translation.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_278.Translation.XY.m128d_f64[1] = _UNK_150689688;
  local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_278.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_278) &&
      (&local_278 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if ((int)local_6f0 == local_6f0._4_4_) {
    local_6f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  iVar21 = (int)local_6f0 + 1;
  lVar26 = (longlong)(int)local_6f0 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_278.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_278.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_278.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_278.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_278.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_278.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_278.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_278.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_278.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_278.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_278.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_278.Scale3D.ZW.m128d_f64[1];
  local_158.Translation.XY.m128d_f64[0] = ___xmm_3ff0000000000000bff0000000000000;
  local_158.Translation.XY.m128d_f64[1] = _UNK_15076b868;
  local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_158.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000bff0000000000000;
  local_158.Translation.ZW.m128d_f64[1] = _UNK_15076ad98;
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_158) &&
      (&local_158 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if ((int)local_6f0 == local_6f0._4_4_) {
    local_6f0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  iVar21 = (int)local_6f0 + 1;
  local_1b8.Translation.ZW.m128d_f64[0] = dVar13;
  local_1b8.Translation.ZW.m128d_f64[1] = dVar33;
  lVar26 = (longlong)(int)local_6f0 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_158.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_158.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_158.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_158.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_158.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_158.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_158.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_158.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_158.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_158.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_158.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_158.Scale3D.ZW.m128d_f64[1];
  local_1b8.Translation.XY.m128d_f64[0] = ___xmm_bff00000000000003ff0000000000000;
  local_1b8.Translation.XY.m128d_f64[1] = _UNK_15076c6f8;
  local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6f0._0_4_ = iVar21;
  if (((local_6f8.Data <= &local_1b8) &&
      (&local_1b8 < (TTransform<double> *)(local_6f8.Data + (longlong)local_6f0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  iVar21 = (int)local_6f0;
  if ((int)local_6f0 == local_6f0._4_4_) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&local_6f8,(int *)((longlong)&local_6f0 + 4));
  }
  FVar27.Data = local_6f8.Data;
  local_688 = iVar21 + 1;
  local_6f0 = CONCAT44(local_6f0._4_4_,local_688);
  lVar26 = (longlong)iVar21 * 0x60;
  *(double *)&local_6f8.Data[lVar26].field_0x0 = local_1b8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 8) = local_1b8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x10) = local_1b8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x10 + 8) = local_1b8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x20) = local_1b8.Translation.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x20 + 8) = local_1b8.Translation.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x30) = local_1b8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x30 + 8) = local_1b8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x40) = local_1b8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x40 + 8) = local_1b8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6f8.Data + lVar26 + 0x50) = local_1b8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6f8.Data + lVar26 + 0x50 + 8) = local_1b8.Scale3D.ZW.m128d_f64[1];
  lVar26 = (longlong)local_688;
  local_690.Data = (FScriptContainerElement *)0x0;
  if (local_688 == 0) {
    local_684 = 0;
    local_650.ArrayNum = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_688,0,&local_690,local_688,&local_684);
    memcpy(local_690.Data,FVar27.Data,lVar26 * 0x60);
    local_650.ArrayNum = (int)local_6f0;
  }
  local_650.DataPtr = (TTransform<double> *)local_6f8.Data;
  if ((local_650.ArrayNum < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  iVar21 = local_688;
  local_5a8.DataPtr = (TTransform<double> *)local_690.Data;
  if ((local_688 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  local_5a8.ArrayNum = iVar21;
  local_6e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e0.ArrayNum = 0;
  local_6e0.ArrayMax = 0;
  local_5b0 = 0;
  iVar20 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_6e0.AllocatorInstance,&local_6e0.ArrayMax);
  local_6a0 = 1;
  uStack_69c = 1;
  iVar21 = iVar20 + 1;
  *(undefined8 *)(local_6e0.AllocatorInstance.Data + (longlong)iVar20 * 8) = 0;
  local_6e0.ArrayNum = iVar21;
  if (((local_6e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_6a0) &&
      ((FScriptContainerElement *)&local_6a0 <
       local_6e0.AllocatorInstance.Data + (longlong)local_6e0.ArrayMax * 8)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  if (local_6e0.ArrayNum == local_6e0.ArrayMax) {
    local_6e0.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_6e0.AllocatorInstance,&local_6e0.ArrayMax);
  }
  iVar21 = local_6e0.ArrayNum + 1;
  local_698 = 2;
  uStack_694 = 2;
  *(ulonglong *)(local_6e0.AllocatorInstance.Data + (longlong)local_6e0.ArrayNum * 8) =
       CONCAT44(uStack_69c,local_6a0);
  local_6e0.ArrayNum = iVar21;
  if (((local_6e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_698) &&
      ((FScriptContainerElement *)&local_698 <
       local_6e0.AllocatorInstance.Data + (longlong)local_6e0.ArrayMax * 8)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  iVar21 = local_6e0.ArrayNum;
  if (local_6e0.ArrayNum == local_6e0.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_6e0.AllocatorInstance,&local_6e0.ArrayMax);
  }
  local_6e8[0] = (FScriptContainerElement)0xa;
  local_6e0.ArrayNum = iVar21 + 1;
  lVar26 = 100;
  *(ulonglong *)(local_6e0.AllocatorInstance.Data + (longlong)iVar21 * 8) =
       CONCAT44(uStack_694,local_698);
  local_6c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6c8.ArrayNum = 0;
  local_6c8.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,100,&local_6c8.AllocatorInstance,0,&local_6c8.ArrayMax);
  lVar31 = 100;
  do {
    if (((local_6c8.AllocatorInstance.Data <= local_6e8) &&
        (local_6e8 < local_6c8.AllocatorInstance.Data + local_6c8.ArrayMax)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar2 = (code *)swi(3);
      uVar18 = (*pcVar2)();
      return (bool)uVar18;
    }
    if (local_6c8.ArrayNum == local_6c8.ArrayMax) {
      local_6c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_6c8.AllocatorInstance,&local_6c8.ArrayMax);
    }
    iVar21 = local_6c8.ArrayNum + 1;
    local_6c8.AllocatorInstance.Data[local_6c8.ArrayNum] = local_6e8[0];
    lVar31 = lVar31 + -1;
    local_6c8.ArrayNum = iVar21;
  } while (lVar31 != 0);
  local_6b8.Data = (FScriptContainerElement *)0x0;
  local_6ac[0] = 0;
  local_6ac[1] = 2;
  local_6d0 = 0x1e;
  local_6b0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_6b8,0,local_6ac);
  lVar31 = 100;
  do {
    if (((local_6b8.Data <= (FScriptContainerElement *)&local_6d0) &&
        ((FScriptContainerElement *)&local_6d0 < local_6b8.Data + (longlong)local_6ac[0] * 4)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar2 = (code *)swi(3);
      uVar18 = (*pcVar2)();
      return (bool)uVar18;
    }
    if (local_6b0 == local_6ac[0]) {
      local_6b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_6b8,local_6ac);
    }
    iVar21 = local_6b0 + 1;
    *(undefined4 *)(local_6b8.Data + (longlong)local_6b0 * 4) = local_6d0;
    lVar31 = lVar31 + -1;
    local_6b0 = iVar21;
  } while (lVar31 != 0);
  local_628.Data = (FScriptContainerElement *)0x0;
  local_638._0_8_ = &___7FUECompressedAnimDataMutable__6B_;
  local_620 = 0;
  iStack_61c = 0;
  local_618.Data = (FScriptContainerElement *)0x0;
  local_610 = 0;
  local_608 = 2;
  local_600.Data = (FScriptContainerElement *)0x0;
  local_5f8 = 0;
  local_5f0 = 0;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_5d8 = 0;
  uStack_5d0 = 0;
  local_6cc = 0x1e;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_628,0,&iStack_61c);
  do {
    if (((local_628.Data <= (FScriptContainerElement *)&local_6cc) &&
        ((FScriptContainerElement *)&local_6cc < local_628.Data + (longlong)iStack_61c * 4)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar2 = (code *)swi(3);
      uVar18 = (*pcVar2)();
      return (bool)uVar18;
    }
    if (local_620 == iStack_61c) {
      local_620 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_628,&iStack_61c);
    }
    iVar21 = local_6b0;
    FVar27.Data = local_6b8.Data;
    lVar31 = (longlong)local_620;
    local_620 = local_620 + 1;
    *(undefined4 *)(local_628.Data + lVar31 * 4) = local_6cc;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  lVar26 = (longlong)local_6b0;
  local_610._0_4_ = local_6b0;
  if ((local_6b0 == 0) && (local_610._4_4_ == 0)) {
    local_610 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_6b0,local_610._4_4_,&local_618,local_6b0,(int *)((longlong)&local_610 + 4))
    ;
    if (iVar21 != 0) {
      memcpy(local_618.Data,FVar27.Data,lVar26 << 2);
    }
  }
  iVar21 = local_6c8.ArrayNum;
  FVar27.Data = local_6c8.AllocatorInstance.Data;
  _Size = (size_t)local_6c8.ArrayNum;
  local_608 = local_6ac[1];
  local_5f8._0_4_ = local_6c8.ArrayNum;
  if ((local_6c8.ArrayNum == 0) && (local_5f8._4_4_ == 0)) {
    local_5f8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_6c8.ArrayNum,local_5f8._4_4_,&local_600,local_6c8.ArrayNum,
               (int *)((longlong)&local_5f8 + 4));
    if (iVar21 != 0) {
      memcpy(local_600.Data,FVar27.Data,_Size);
    }
  }
  local_5d8 = 0x600000000;
  uStack_5d0 = 0x600000006;
  FUECompressedAnimDataMutable::BuildFinalBuffer
            ((FUECompressedAnimDataMutable *)local_638,&local_6c8);
  ::FName::FName(&local_5b8,L"");
  pUVar16 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar24 = GetGlobalLogSingleton();
  pFVar25 = `FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::RunTest'::__l2::<lambda_1>::
            operator()(&local_680,&local_468,true);
  if ((pFVar25->Data).ArrayNum == 0) {
    pwVar32 = L"";
  }
  else {
    pwVar32 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar16->_padding_,0,pwVar32,pFVar24);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  dVar13 = __real_3ef179ec9cbd821e;
  local_590 = (AEFConstantKeyLerp<6>)&___7__AEFConstantKeyLerp__05__6B_;
  local_598 = 1;
  local_548.AnimName = local_5b8;
  local_548.CompressedAnimData = (ICompressedAnimData *)local_638;
  local_548.RefPoses.DataPtr = (TTransform<double> *)local_6f8.Data;
  local_5c8 = 1;
  local_548.Interpolation = Linear;
  local_548.Time = 0.0;
  local_548.RelativePos = 0.0;
  local_548.RefPoses.ArrayNum = (int)local_6f0;
  local_548.SequenceLength = (float)(__real_3ef179ec9cbd821e * 1.0);
  if (((int)local_6f0 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  local_548.TrackToSkeletonMap.DataPtr = (FTrackToSkeletonMap *)0x0;
  local_548.TrackToSkeletonMap.ArrayNum = 0;
  local_548.SamplingRate.Numerator = 60000;
  local_548.SamplingRate.Denominator = 1;
  local_548.SamplingTime.FrameNumber.Value = 0;
  local_548.SamplingTime.SubFrame = 0.0;
  local_548.NumberOfFrames = 1;
  local_548.SourceSkeleton = (USkeleton *)0x0;
  local_548.AdditiveType = AAT_None;
  local_548.bAdditiveAnimation = false;
  AEFConstantKeyLerp<6>::GetPoseTranslations(&local_590,&local_650,&local_6e0,&local_548);
  pUVar16 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar24 = GetGlobalLogSingleton();
  pFVar25 = `FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::RunTest'::__l2::<lambda_1>::
            operator()(&local_680,&local_458,false);
  if ((pFVar25->Data).ArrayNum == 0) {
    pwVar32 = L"";
  }
  else {
    pwVar32 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar16->_padding_,0,pwVar32,pFVar24);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  local_570 = (AEFConstantKeyLerp<6>)&___7__AEFConstantKeyLerp__05__6B_;
  local_588 = 1;
  local_4d8.AnimName = local_5b8;
  local_4d8.CompressedAnimData = (ICompressedAnimData *)local_638;
  local_4d8.RefPoses.DataPtr = (TTransform<double> *)local_690.Data;
  local_5c0 = 1;
  local_4d8.Interpolation = Linear;
  local_4d8.Time = 0.0;
  local_4d8.RelativePos = 0.0;
  local_4d8.RefPoses.ArrayNum = local_688;
  local_4d8.SequenceLength = (float)(dVar13 * 1.0);
  if ((local_688 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar2 = (code *)swi(3);
    uVar18 = (*pcVar2)();
    return (bool)uVar18;
  }
  local_4d8.TrackToSkeletonMap.DataPtr = (FTrackToSkeletonMap *)0x0;
  local_4d8.TrackToSkeletonMap.ArrayNum = 0;
  local_4d8.SamplingRate.Numerator = 60000;
  local_4d8.SamplingRate.Denominator = 1;
  local_4d8.SamplingTime.FrameNumber.Value = 0;
  local_4d8.SamplingTime.SubFrame = 0.0;
  local_4d8.NumberOfFrames = 1;
  local_4d8.SourceSkeleton = (USkeleton *)0x0;
  local_4d8.AdditiveType = AAT_None;
  local_4d8.bAdditiveAnimation = false;
  AEFConstantKeyLerp<6>::GetPoseTranslations(&local_570,&local_5a8,&local_6e0,&local_4d8);
  pUVar16 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  GetGlobalLogSingleton();
  pFVar25 = `FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::RunTest'::__l2::<lambda_1>::
            operator()(&local_680,&local_448,bVar17);
  if ((pFVar25->Data).ArrayNum == 0) {
    pwVar32 = L"";
  }
  else {
    pwVar32 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar16->_padding_,0,pwVar32);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  dVar13 = __real_3f1a36e2e0000000;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar30 = uVar29;
  if (0 < local_650.ArrayNum) {
    do {
      uVar28 = (uint)uVar29;
      FStringFormatArg::FStringFormatArg(&local_438,uVar28);
      local_670.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_670.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_670.AllocatorInstance,1,&local_670.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_670.AllocatorInstance.Data,&local_438,1);
      ::FString::FormatImpl(&local_580,L"Translation {0}",&local_670);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_670.AllocatorInstance.Data,local_670.ArrayNum);
      if ((FStringFormatArg *)local_670.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_670.AllocatorInstance.Data);
      }
      if (local_438.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.StringValue.Data.AllocatorInstance.Data);
      }
      uVar22 = 0;
      if ((int)uVar28 < local_650.ArrayNum) {
        uVar22 = ~uVar28 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        uVar18 = (*pcVar2)();
        return (bool)uVar18;
      }
      pdVar1 = (double *)((longlong)((local_650.DataPtr)->Translation).XY.m128d_f64 + uVar30);
      local_568 = *pdVar1;
      dStack_560 = pdVar1[1];
      local_558 = *(double *)((longlong)((local_650.DataPtr)->Translation).ZW.m128d_f64 + uVar30);
      uVar22 = 0;
      if ((int)uVar28 < local_5a8.ArrayNum) {
        uVar22 = ~uVar28 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        uVar18 = (*pcVar2)();
        return (bool)uVar18;
      }
      pdVar1 = (double *)((longlong)((local_5a8.DataPtr)->Translation).XY.m128d_f64 + uVar30);
      local_408 = *(double *)((longlong)((local_5a8.DataPtr)->Translation).ZW.m128d_f64 + uVar30);
      dVar33 = local_568 - *pdVar1;
      if (((dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar12,
                                      SUB84(dVar33,0) & uVar11)) ||
          (dVar33 = dStack_560 - pdVar1[1],
          dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar12,
                                    SUB84(dVar33,0) & uVar11))) ||
         (bVar17 = true,
         dVar13 < (double)CONCAT44((uint)((ulonglong)(local_558 - local_408) >> 0x20) & uVar12,
                                   SUB84(local_558 - local_408,0) & uVar11))) {
        bVar17 = false;
      }
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_580.Data.ArrayNum != 0) {
        FVar27.Data = local_580.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,bVar17);
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      uVar29 = (ulonglong)(uVar28 + 1);
      uVar30 = uVar30 + 0x60;
    } while ((int)(uVar28 + 1) < local_650.ArrayNum);
  }
  if (local_600.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data);
  }
  if (local_618.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data);
  }
  if (local_628.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data);
  }
  local_638._0_8_ = &___7ICompressedAnimData__6B_;
  if (local_6b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data);
  }
  if (local_6c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.AllocatorInstance.Data);
  }
  if (local_6e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.AllocatorInstance.Data);
  }
  if (local_690.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.Data);
  }
  if ((TTransform<double> *)local_6f8.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_6f8.Data);
  }
  if (local_680.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_680.Data);
  }
  if (local_660.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 147519180

FString * __thiscall
FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::GetBeautifiedTestName
          (FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Animation.ConstantKeyLerp.GetPoseTranslations");
  return __return_storage_ptr__;
}

// operator() @ 14753cba0

FString * __thiscall
`FIspcTestAnimEncodingConstantKeyLerpGetPoseTranslations::RunTest'::__l2::<lambda_1>::operator()
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

