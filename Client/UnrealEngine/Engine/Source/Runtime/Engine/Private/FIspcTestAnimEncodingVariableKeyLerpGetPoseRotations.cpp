// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 147506ce0

EAutomationTestFlags __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::GetTestFlags
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 147506cf0

bool __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::IsStressTest
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this)

{
  return false;
}

// GetRequiredDeviceNum @ 147506d00

uint __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::GetRequiredDeviceNum
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this)

{
  return 1;
}

// GetTestSourceFileName @ 147506d10

FString * __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::GetTestSourceFileName
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingVariableKeyLerp.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 147506d40

int __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::GetTestSourceFileLine
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this)

{
  return 10;
}

// GetTests @ 147506d60

/* WARNING: Removing unreachable block (ram,0x000147506e4d) */
/* WARNING: Removing unreachable block (ram,0x000147506f18) */

void __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::GetTests
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this,
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
  
  ::FString::FString(&local_18,"Ispc.Animation.VariableKeyLerp.GetPoseRotations");
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

// RunTest @ 147506f40

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
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::RunTest
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this,FString *param_1)

{
  double *pdVar1;
  double *pdVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  UEngine *pUVar18;
  bool bVar19;
  undefined1 uVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong *plVar25;
  FOutputDeviceRedirector *pFVar26;
  FString *pFVar27;
  uint uVar28;
  longlong lVar29;
  ForAnyElementType FVar30;
  uint uVar31;
  size_t _Size;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  wchar_t *pwVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  double dVar51;
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  double dVar55;
  double dVar56;
  undefined1 auStackY_718 [32];
  ForAnyElementType local_6c8;
  undefined8 local_6c0;
  FScriptContainerElement local_6b8 [8];
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> local_6b0;
  undefined4 local_6a0;
  undefined4 local_69c;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_698;
  ForAnyElementType local_688;
  int local_680;
  int local_67c [3];
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 local_668;
  undefined4 uStack_664;
  ForAnyElementType local_660;
  int local_658;
  int local_654;
  ForAnyElementType local_650;
  int local_644;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_640;
  FString local_630;
  TArrayView<UE::Math::TTransform<double>,int> local_620;
  undefined1 local_608 [16];
  ForAnyElementType local_5f8;
  int local_5f0;
  int iStack_5ec;
  ForAnyElementType local_5e8;
  undefined8 local_5e0;
  undefined4 local_5d8;
  ForAnyElementType local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined1 *local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  FName local_580;
  TArrayView<UE::Math::TTransform<double>,int> local_578;
  undefined8 local_568;
  AEFVariableKeyLerp<6> local_560;
  undefined8 local_558;
  AEFVariableKeyLerp<6> local_550;
  FString local_548;
  FAnimSequenceDecompressionContext local_538;
  FAnimSequenceDecompressionContext local_4c8;
  FString local_458;
  FString local_448;
  FString local_438;
  double local_428;
  FStringFormatArg local_420;
  TTransform<double> local_3f8;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_718;
  ::FString::FString(&local_630,L"a.VariableKeyLerp.ISPC");
  iVar23 = local_630.Data.ArrayNum;
  FVar30.Data = local_630.Data.AllocatorInstance.Data;
  uVar32 = 0;
  local_650.Data = (FScriptContainerElement *)0x0;
  if (local_630.Data.ArrayNum == 0) {
    local_644 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_630.Data.ArrayNum,0,&local_650,local_630.Data.ArrayNum,&local_644);
    memcpy(local_650.Data,FVar30.Data,(longlong)iVar23 * 2);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  FVar30.Data = (FScriptContainerElement *)L"";
  if (local_630.Data.ArrayNum != 0) {
    FVar30.Data = local_630.Data.AllocatorInstance.Data;
  }
  plVar25 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,FVar30.Data,1);
  bVar19 = (bool)(**(code **)(*plVar25 + 0xc0))(plVar25);
  if ((GEngine == (UEngine *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingVariableKeyLerp.cpp"
                          ,0x14,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  uVar17 = _UNK_1516fe2d8;
  uVar16 = ___xmm_00000000000000004046800000000000;
  dVar56 = _UNK_15061cbc8;
  dVar55 = ___xmm_3ff00000000000000000000000000000;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[0];
  uVar53 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar54 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_6c8.Data = (FScriptContainerElement *)0x0;
  local_6c0 = 0;
  dVar51 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar52 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar49 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar50 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar42 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar43 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  iVar22 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  iVar23 = iVar22 + 1;
  local_3f8.Rotation.ZW.m128d_f64[0] = ___xmm_40450000000000004079000000000000;
  local_3f8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe328;
  lVar29 = (longlong)iVar22 * 0x60;
  local_3f8.Rotation.XY.m128d_f64[0] = ___xmm_4066800000000000c07c200000000000;
  local_3f8.Rotation.XY.m128d_f64[1] = _UNK_1516fe358;
  local_f8 = uVar16;
  uStack_f0 = uVar17;
  local_e8 = dVar55;
  dStack_e0 = dVar56;
  *(undefined8 *)&local_6c8.Data[lVar29].field_0x0 = uVar16;
  *(undefined8 *)(local_6c8.Data + lVar29 + 8) = uVar17;
  *(double *)(local_6c8.Data + lVar29 + 0x10) = dVar55;
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = dVar56;
  auVar11._8_4_ = uVar53;
  auVar11._0_8_ = (double)fVar6;
  auVar11._12_4_ = uVar54;
  *(undefined1 (*) [16])(local_6c8.Data + lVar29 + 0x20) = auVar11;
  auVar9._8_4_ = uVar49;
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = uVar50;
  *(undefined1 (*) [16])(local_6c8.Data + lVar29 + 0x30) = auVar9;
  *(double *)(local_6c8.Data + lVar29 + 0x40) = dVar51;
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = dVar52;
  auVar8._8_4_ = uVar42;
  auVar8._0_8_ = (double)fVar5;
  auVar8._12_4_ = uVar43;
  *(undefined1 (*) [16])(local_6c8.Data + lVar29 + 0x50) = auVar8;
  local_d8._8_4_ = uVar53;
  local_d8._0_8_ = (double)fVar6;
  local_d8._12_4_ = uVar54;
  local_c8._8_4_ = uVar49;
  local_c8._0_8_ = (double)fVar4;
  local_c8._12_4_ = uVar50;
  local_a8._8_4_ = uVar42;
  local_a8._0_8_ = (double)fVar5;
  local_a8._12_4_ = uVar43;
  local_3f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_3f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_3f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_3f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8 = dVar51;
  dStack_b0 = dVar52;
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_3f8) &&
      (&local_3f8 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), dVar55 = ___xmm_3ff00000000000000000000000000000,
     dVar56 = _UNK_15061cbc8, bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  local_398.Rotation.ZW.m128d_f64[0] = dVar55;
  local_398.Rotation.ZW.m128d_f64[1] = dVar56;
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
    local_398.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_398.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  iVar23 = (int)local_6c0 + 1;
  lVar29 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_3f8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_3f8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_3f8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_3f8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_3f8.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_3f8.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_3f8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_3f8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_3f8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_3f8.Scale3D.XY.m128d_f64[1];
  local_398.Rotation.XY.m128d_f64[1] = _UNK_1516fe348;
  local_398.Rotation.XY.m128d_f64[0] = ___xmm_40668000000000004056800000000000;
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_3f8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_3f8.Scale3D.ZW.m128d_f64[1];
  local_398.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_398.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_398.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_398.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_398.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_398.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_398.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_398.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_278.Rotation.ZW.m128d_f64[0] = local_398.Rotation.ZW.m128d_f64[0];
  local_278.Rotation.ZW.m128d_f64[1] = local_398.Rotation.ZW.m128d_f64[1];
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_398) &&
      (&local_398 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000,
     local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8, bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
    local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  local_2d8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318;
  local_2d8.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000;
  iVar23 = (int)local_6c0 + 1;
  local_338.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000;
  local_338.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318;
  lVar29 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_398.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_398.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_398.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_398.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_398.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_398.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_398.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_398.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_398.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_398.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_398.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_398.Scale3D.ZW.m128d_f64[1];
  local_338.Rotation.XY.m128d_f64[0] = 0.0;
  local_338.Rotation.XY.m128d_f64[1] = 0.0;
  local_338.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_338.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_338.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_338.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_338.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_338.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_338.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_338.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_338) &&
      (&local_338 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_2d8.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000,
     local_2d8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318,
     local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000,
     local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8, bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
    local_2d8.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000;
    local_2d8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318;
    local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  iVar23 = (int)local_6c0 + 1;
  lVar29 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_338.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_338.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_338.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_338.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_338.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_338.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_338.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_338.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_338.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_338.Scale3D.XY.m128d_f64[1];
  local_2d8.Rotation.XY.m128d_f64[1] = _UNK_1512468d8;
  local_2d8.Rotation.XY.m128d_f64[0] = ___xmm_40590000000000004059000000000000;
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_338.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_338.Scale3D.ZW.m128d_f64[1];
  local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_2d8) &&
      (&local_2d8 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000,
     local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8, bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
    local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  iVar23 = (int)local_6c0 + 1;
  lVar29 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_2d8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_2d8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_2d8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_2d8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_2d8.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_2d8.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_2d8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_2d8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_2d8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_2d8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_2d8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_2d8.Scale3D.ZW.m128d_f64[1];
  local_278.Rotation.XY.m128d_f64[0] = 0.0;
  local_278.Rotation.XY.m128d_f64[1] = 0.0;
  local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_278.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_278.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_278.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_278) &&
      (&local_278 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  iVar23 = (int)local_6c0 + 1;
  local_218.Rotation.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_218.Rotation.XY.m128d_f64[1] = _UNK_150689688;
  local_218.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_218.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  lVar29 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_278.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_278.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_278.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_278.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_278.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_278.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_278.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_278.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_278.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_278.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_278.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_278.Scale3D.ZW.m128d_f64[1];
  local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_218.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_218.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_218.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_218.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_218) &&
      (&local_218 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000,
     local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688, bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
    local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  }
  iVar23 = (int)local_6c0 + 1;
  lVar29 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_218.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_218.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_218.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_218.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_218.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_218.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_218.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_218.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_218.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_218.Scale3D.XY.m128d_f64[1];
  local_1b8.Rotation.XY.m128d_f64[1] = _UNK_15076b868;
  local_1b8.Rotation.XY.m128d_f64[0] = ___xmm_3ff0000000000000bff0000000000000;
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_218.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_218.Scale3D.ZW.m128d_f64[1];
  local_1b8.Rotation.ZW.m128d_f64[0] = local_1b8.Rotation.XY.m128d_f64[0];
  local_1b8.Rotation.ZW.m128d_f64[1] = local_1b8.Rotation.XY.m128d_f64[1];
  local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_1b8) &&
      (&local_1b8 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000,
     local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688, bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  if ((int)local_6c0 == local_6c0._4_4_) {
    local_6c0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
    local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  }
  iVar23 = (int)local_6c0 + 1;
  lVar29 = (longlong)(int)local_6c0 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_1b8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_1b8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_1b8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_1b8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_1b8.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_1b8.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_1b8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_1b8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_1b8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_1b8.Scale3D.XY.m128d_f64[1];
  local_158.Rotation.XY.m128d_f64[1] = _UNK_15076c6f8;
  local_158.Rotation.XY.m128d_f64[0] = ___xmm_bff00000000000003ff0000000000000;
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_1b8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_1b8.Scale3D.ZW.m128d_f64[1];
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6c0._0_4_ = iVar23;
  if (((local_6c8.Data <= &local_158) &&
      (&local_158 < (TTransform<double> *)(local_6c8.Data + (longlong)local_6c0._4_4_ * 0x60))) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  iVar23 = (int)local_6c0;
  if ((int)local_6c0 == local_6c0._4_4_) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&local_6c8,(int *)((longlong)&local_6c0 + 4));
  }
  FVar30.Data = local_6c8.Data;
  local_658 = iVar23 + 1;
  local_6c0 = CONCAT44(local_6c0._4_4_,local_658);
  lVar29 = (longlong)iVar23 * 0x60;
  *(double *)&local_6c8.Data[lVar29].field_0x0 = local_158.Rotation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 8) = local_158.Rotation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x10) = local_158.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x10 + 8) = local_158.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x20) = local_158.Translation.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x20 + 8) = local_158.Translation.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x30) = local_158.Translation.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x30 + 8) = local_158.Translation.ZW.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x40) = local_158.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x40 + 8) = local_158.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6c8.Data + lVar29 + 0x50) = local_158.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6c8.Data + lVar29 + 0x50 + 8) = local_158.Scale3D.ZW.m128d_f64[1];
  lVar29 = (longlong)local_658;
  local_660.Data = (FScriptContainerElement *)0x0;
  if (local_658 == 0) {
    local_654 = 0;
    local_620.ArrayNum = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_658,0,&local_660,local_658,&local_654);
    memcpy(local_660.Data,FVar30.Data,lVar29 * 0x60);
    local_620.ArrayNum = (int)local_6c0;
  }
  local_620.DataPtr = (TTransform<double> *)local_6c8.Data;
  if ((local_620.ArrayNum < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  iVar23 = local_658;
  local_578.DataPtr = (TTransform<double> *)local_660.Data;
  if ((local_658 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  local_578.ArrayNum = iVar23;
  local_6b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b0.ArrayNum = 0;
  local_6b0.ArrayMax = 0;
  local_598 = 0;
  iVar22 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_6b0.AllocatorInstance,&local_6b0.ArrayMax);
  local_670 = 1;
  uStack_66c = 1;
  iVar23 = iVar22 + 1;
  *(undefined8 *)(local_6b0.AllocatorInstance.Data + (longlong)iVar22 * 8) = 0;
  local_6b0.ArrayNum = iVar23;
  if (((local_6b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_670) &&
      ((FScriptContainerElement *)&local_670 <
       local_6b0.AllocatorInstance.Data + (longlong)local_6b0.ArrayMax * 8)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  if (local_6b0.ArrayNum == local_6b0.ArrayMax) {
    local_6b0.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_6b0.AllocatorInstance,&local_6b0.ArrayMax);
  }
  iVar23 = local_6b0.ArrayNum + 1;
  local_668 = 2;
  uStack_664 = 2;
  *(ulonglong *)(local_6b0.AllocatorInstance.Data + (longlong)local_6b0.ArrayNum * 8) =
       CONCAT44(uStack_66c,local_670);
  local_6b0.ArrayNum = iVar23;
  if (((local_6b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_668) &&
      ((FScriptContainerElement *)&local_668 <
       local_6b0.AllocatorInstance.Data + (longlong)local_6b0.ArrayMax * 8)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  iVar23 = local_6b0.ArrayNum;
  if (local_6b0.ArrayNum == local_6b0.ArrayMax) {
    iVar23 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_6b0.AllocatorInstance,&local_6b0.ArrayMax);
  }
  local_6b8[0] = (FScriptContainerElement)0xa;
  local_6b0.ArrayNum = iVar23 + 1;
  lVar29 = 100;
  *(ulonglong *)(local_6b0.AllocatorInstance.Data + (longlong)iVar23 * 8) =
       CONCAT44(uStack_664,local_668);
  local_698.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_698.ArrayNum = 0;
  local_698.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,100,&local_698.AllocatorInstance,0,&local_698.ArrayMax);
  lVar34 = 100;
  do {
    if (((local_698.AllocatorInstance.Data <= local_6b8) &&
        (local_6b8 < local_698.AllocatorInstance.Data + local_698.ArrayMax)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar3 = (code *)swi(3);
      uVar20 = (*pcVar3)();
      return (bool)uVar20;
    }
    if (local_698.ArrayNum == local_698.ArrayMax) {
      local_698.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x101,&local_698.AllocatorInstance,&local_698.ArrayMax);
    }
    iVar23 = local_698.ArrayNum + 1;
    local_698.AllocatorInstance.Data[local_698.ArrayNum] = local_6b8[0];
    lVar34 = lVar34 + -1;
    local_698.ArrayNum = iVar23;
  } while (lVar34 != 0);
  local_688.Data = (FScriptContainerElement *)0x0;
  local_67c[0] = 0;
  local_67c[1] = 2;
  local_6a0 = 0x1e;
  local_680 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_688,0,local_67c);
  lVar34 = 100;
  do {
    if (((local_688.Data <= (FScriptContainerElement *)&local_6a0) &&
        ((FScriptContainerElement *)&local_6a0 < local_688.Data + (longlong)local_67c[0] * 4)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar3 = (code *)swi(3);
      uVar20 = (*pcVar3)();
      return (bool)uVar20;
    }
    if (local_680 == local_67c[0]) {
      local_680 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_688,local_67c);
    }
    iVar23 = local_680 + 1;
    *(undefined4 *)(local_688.Data + (longlong)local_680 * 4) = local_6a0;
    lVar34 = lVar34 + -1;
    local_680 = iVar23;
  } while (lVar34 != 0);
  local_5f8.Data = (FScriptContainerElement *)0x0;
  local_608._0_8_ = &___7FUECompressedAnimDataMutable__6B_;
  local_5f0 = 0;
  iStack_5ec = 0;
  local_5e8.Data = (FScriptContainerElement *)0x0;
  local_5e0 = 0;
  local_5d8 = 2;
  local_5d0.Data = (FScriptContainerElement *)0x0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = (undefined1 *)0x0;
  uStack_5a0 = 0;
  local_69c = 0x1e;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_5f8,0,&iStack_5ec);
  do {
    if (((local_5f8.Data <= (FScriptContainerElement *)&local_69c) &&
        ((FScriptContainerElement *)&local_69c < local_5f8.Data + (longlong)iStack_5ec * 4)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar3 = (code *)swi(3);
      uVar20 = (*pcVar3)();
      return (bool)uVar20;
    }
    if (local_5f0 == iStack_5ec) {
      local_5f0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_5f8,&iStack_5ec);
    }
    iVar23 = local_680;
    FVar30.Data = local_688.Data;
    lVar34 = (longlong)local_5f0;
    local_5f0 = local_5f0 + 1;
    *(undefined4 *)(local_5f8.Data + lVar34 * 4) = local_69c;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  lVar29 = (longlong)local_680;
  local_5e0._0_4_ = local_680;
  if ((local_680 == 0) && (local_5e0._4_4_ == 0)) {
    local_5e0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_680,local_5e0._4_4_,&local_5e8,local_680,(int *)((longlong)&local_5e0 + 4))
    ;
    if (iVar23 != 0) {
      memcpy(local_5e8.Data,FVar30.Data,lVar29 << 2);
    }
  }
  iVar23 = local_698.ArrayNum;
  FVar30.Data = local_698.AllocatorInstance.Data;
  _Size = (size_t)local_698.ArrayNum;
  local_5d8 = local_67c[1];
  local_5c8._0_4_ = local_698.ArrayNum;
  if ((local_698.ArrayNum == 0) && (local_5c8._4_4_ == 0)) {
    local_5c8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_698.ArrayNum,local_5c8._4_4_,&local_5d0,local_698.ArrayNum,
               (int *)((longlong)&local_5c8 + 4));
    if (iVar23 != 0) {
      memcpy(local_5d0.Data,FVar30.Data,_Size);
    }
  }
  local_5a8 = &DAT_600000001;
  uStack_5a0 = 0x600000006;
  FUECompressedAnimDataMutable::BuildFinalBuffer
            ((FUECompressedAnimDataMutable *)local_608,&local_698);
  ::FName::FName(&local_580,L"");
  pUVar18 = GEngine;
  pcVar3 = *(code **)(GEngine->_padding_ + 8);
  pFVar26 = GetGlobalLogSingleton();
  pFVar27 = `FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::RunTest'::__l2::<lambda_1>::
            operator()(&local_650,&local_458,true);
  if ((pFVar27->Data).ArrayNum == 0) {
    pwVar35 = L"";
  }
  else {
    pwVar35 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(&pUVar18->_padding_,0,pwVar35,pFVar26);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  dVar55 = __real_3ef179ec9cbd821e;
  local_560 = (AEFVariableKeyLerp<6>)&___7__AEFVariableKeyLerp__05__6B_;
  local_568 = 1;
  local_538.AnimName = local_580;
  local_538.CompressedAnimData = (ICompressedAnimData *)local_608;
  local_538.RefPoses.DataPtr = (TTransform<double> *)local_6c8.Data;
  local_590 = 1;
  local_538.Interpolation = Linear;
  local_538.Time = 0.0;
  local_538.RelativePos = 0.0;
  local_538.RefPoses.ArrayNum = (int)local_6c0;
  local_538.SequenceLength = (float)(__real_3ef179ec9cbd821e * 1.0);
  if (((int)local_6c0 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  local_538.TrackToSkeletonMap.DataPtr = (FTrackToSkeletonMap *)0x0;
  local_538.TrackToSkeletonMap.ArrayNum = 0;
  local_538.SamplingRate.Numerator = 60000;
  local_538.SamplingRate.Denominator = 1;
  local_538.SamplingTime.FrameNumber.Value = 0;
  local_538.SamplingTime.SubFrame = 0.0;
  local_538.NumberOfFrames = 1;
  local_538.SourceSkeleton = (USkeleton *)0x0;
  local_538.AdditiveType = AAT_None;
  local_538.bAdditiveAnimation = false;
  AEFVariableKeyLerp<6>::GetPoseRotations(&local_560,&local_620,&local_6b0,&local_538);
  pUVar18 = GEngine;
  pcVar3 = *(code **)(GEngine->_padding_ + 8);
  pFVar26 = GetGlobalLogSingleton();
  pFVar27 = `FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::RunTest'::__l2::<lambda_1>::
            operator()(&local_650,&local_448,false);
  if ((pFVar27->Data).ArrayNum == 0) {
    pwVar35 = L"";
  }
  else {
    pwVar35 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(&pUVar18->_padding_,0,pwVar35,pFVar26);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  local_550 = (AEFVariableKeyLerp<6>)&___7__AEFVariableKeyLerp__05__6B_;
  local_558 = 1;
  local_4c8.AnimName = local_580;
  local_4c8.CompressedAnimData = (ICompressedAnimData *)local_608;
  local_4c8.RefPoses.DataPtr = (TTransform<double> *)local_660.Data;
  local_588 = 1;
  local_4c8.Interpolation = Linear;
  local_4c8.Time = 0.0;
  local_4c8.RelativePos = 0.0;
  local_4c8.RefPoses.ArrayNum = local_658;
  local_4c8.SequenceLength = (float)(dVar55 * 1.0);
  if ((local_658 < 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar21)) {
    pcVar3 = (code *)swi(3);
    uVar20 = (*pcVar3)();
    return (bool)uVar20;
  }
  local_4c8.TrackToSkeletonMap.DataPtr = (FTrackToSkeletonMap *)0x0;
  local_4c8.TrackToSkeletonMap.ArrayNum = 0;
  local_4c8.SamplingRate.Numerator = 60000;
  local_4c8.SamplingRate.Denominator = 1;
  local_4c8.SamplingTime.FrameNumber.Value = 0;
  local_4c8.SamplingTime.SubFrame = 0.0;
  local_4c8.NumberOfFrames = 1;
  local_4c8.SourceSkeleton = (USkeleton *)0x0;
  local_4c8.AdditiveType = AAT_None;
  local_4c8.bAdditiveAnimation = false;
  AEFVariableKeyLerp<6>::GetPoseRotations(&local_550,&local_578,&local_6b0,&local_4c8);
  pUVar18 = GEngine;
  pcVar3 = *(code **)(GEngine->_padding_ + 8);
  GetGlobalLogSingleton();
  pFVar27 = `FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::RunTest'::__l2::<lambda_1>::
            operator()(&local_650,&local_438,bVar19);
  if ((pFVar27->Data).ArrayNum == 0) {
    pwVar35 = L"";
  }
  else {
    pwVar35 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(&pUVar18->_padding_,0,pwVar35);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  dVar55 = __real_3f1a36e2e0000000;
  uVar15 = _UNK_15061cc8c;
  uVar14 = _UNK_15061cc88;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar33 = uVar32;
  if (0 < local_620.ArrayNum) {
    do {
      uVar31 = (uint)uVar32;
      FStringFormatArg::FStringFormatArg(&local_420,uVar31);
      local_640.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_640.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_640.AllocatorInstance,1,&local_640.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_640.AllocatorInstance.Data,&local_420,1);
      ::FString::FormatImpl(&local_548,L"Quat {0}",&local_640);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_640.AllocatorInstance.Data,local_640.ArrayNum);
      if ((FStringFormatArg *)local_640.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_640.AllocatorInstance.Data);
      }
      if (local_420.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.StringValue.Data.AllocatorInstance.Data);
      }
      uVar24 = 0;
      if ((int)uVar31 < local_620.ArrayNum) {
        uVar24 = ~uVar31 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        uVar20 = (*pcVar3)();
        return (bool)uVar20;
      }
      pdVar1 = (double *)((longlong)((local_620.DataPtr)->Rotation).XY.m128d_f64 + uVar33);
      dVar56 = *pdVar1;
      dVar51 = pdVar1[1];
      pdVar1 = (double *)((longlong)((local_620.DataPtr)->Rotation).ZW.m128d_f64 + uVar33);
      dVar52 = *pdVar1;
      dVar10 = pdVar1[1];
      uVar24 = 0;
      if ((int)uVar31 < local_578.ArrayNum) {
        uVar24 = ~uVar31 >> 0x1f;
      }
      iVar23 = local_578.ArrayNum;
      if (uVar24 == 0) {
        iVar23 = 0x506106c8;
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar19) {
          pcVar3 = (code *)swi(3);
          uVar20 = (*pcVar3)();
          return (bool)uVar20;
        }
      }
      uVar42 = SUB84(dVar55,0);
      uVar43 = (undefined4)((ulonglong)dVar55 >> 0x20);
      auVar36._8_4_ = uVar42;
      auVar36._0_8_ = dVar55;
      auVar36._12_4_ = uVar43;
      local_428 = dVar55;
      pdVar2 = (double *)((longlong)((local_578.DataPtr)->Rotation).ZW.m128d_f64 + uVar33);
      pdVar1 = (double *)((longlong)((local_578.DataPtr)->Rotation).XY.m128d_f64 + uVar33);
      dVar47 = *pdVar2 + dVar52;
      dVar48 = pdVar2[1] + dVar10;
      pdVar2 = (double *)((longlong)((local_578.DataPtr)->Rotation).ZW.m128d_f64 + uVar33);
      dVar52 = dVar52 - *pdVar2;
      dVar10 = dVar10 - pdVar2[1];
      dVar44 = *pdVar1 + dVar56;
      dVar46 = pdVar1[1] + dVar51;
      pdVar1 = (double *)((longlong)((local_578.DataPtr)->Rotation).XY.m128d_f64 + uVar33);
      dVar56 = dVar56 - *pdVar1;
      dVar51 = dVar51 - pdVar1[1];
      auVar45._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar13,SUB84(dVar44,0) & uVar12);
      auVar45._8_4_ = SUB84(dVar46,0) & uVar14;
      auVar45._12_4_ = (uint)((ulonglong)dVar46 >> 0x20) & uVar15;
      auVar37._8_8_ =
           -(ulonglong)
            (auVar36._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar15,SUB84(dVar10,0) & uVar14));
      auVar37._0_8_ =
           -(ulonglong)
            (dVar55 < (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar13,
                                       SUB84(dVar52,0) & uVar12));
      iVar23 = movmskpd(iVar23,auVar37);
      auVar38._8_4_ = uVar42;
      auVar38._0_8_ = dVar55;
      auVar38._12_4_ = uVar43;
      auVar39._8_8_ =
           -(ulonglong)
            (auVar38._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & uVar15,SUB84(dVar51,0) & uVar14));
      auVar39._0_8_ =
           -(ulonglong)
            (dVar55 < (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) & uVar13,
                                       SUB84(dVar56,0) & uVar12));
      uVar24 = movmskpd((int)local_578.DataPtr,auVar39);
      uVar28 = iVar23 << 2 | uVar24;
      bVar19 = true;
      if (uVar28 != 0) {
        auVar40._8_4_ = uVar42;
        auVar40._0_8_ = dVar55;
        auVar40._12_4_ = uVar43;
        auVar41._8_8_ =
             -(ulonglong)
              (auVar40._8_8_ <
              (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar15,SUB84(dVar48,0) & uVar14))
        ;
        auVar41._0_8_ =
             -(ulonglong)
              (dVar55 < (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) & uVar13,
                                         SUB84(dVar47,0) & uVar12));
        uVar28 = movmskpd(uVar28,auVar41);
        lVar29 = -(ulonglong)(dVar55 < auVar45._8_8_);
        auVar7._8_4_ = (int)lVar29;
        auVar7._0_8_ = -(ulonglong)(dVar55 < auVar45._0_8_);
        auVar7._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
        iVar23 = movmskpd(uVar24,auVar7);
        if ((uVar28 & 0x3fffffff) != 0 || iVar23 != 0) {
          bVar19 = false;
        }
      }
      FVar30.Data = (FScriptContainerElement *)L"";
      if (local_548.Data.ArrayNum != 0) {
        FVar30.Data = local_548.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar30.Data,bVar19);
      if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.Data.AllocatorInstance.Data);
      }
      uVar32 = (ulonglong)(uVar31 + 1);
      uVar33 = uVar33 + 0x60;
    } while ((int)(uVar31 + 1) < local_620.ArrayNum);
  }
  if (local_5d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data);
  }
  if (local_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data);
  }
  if (local_5f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data);
  }
  local_608._0_8_ = &___7ICompressedAnimData__6B_;
  if (local_688.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.Data);
  }
  if (local_698.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.AllocatorInstance.Data);
  }
  if (local_6b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.AllocatorInstance.Data);
  }
  if (local_660.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_660.Data);
  }
  if ((TTransform<double> *)local_6c8.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_6c8.Data);
  }
  if (local_650.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_650.Data);
  }
  if (local_630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_630.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 147508920

FString * __thiscall
FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::GetBeautifiedTestName
          (FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Animation.VariableKeyLerp.GetPoseRotations");
  return __return_storage_ptr__;
}

// operator() @ 14753cfe0

FString * __thiscall
`FIspcTestAnimEncodingVariableKeyLerpGetPoseRotations::RunTest'::__l2::<lambda_1>::operator()
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

