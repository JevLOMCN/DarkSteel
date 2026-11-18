// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 14751b840

EAutomationTestFlags __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::GetTestFlags
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14751b890

bool __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::IsStressTest
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14751b8a0

uint __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::GetRequiredDeviceNum
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this)

{
  return 1;
}

// GetTestSourceFileName @ 14751b8b0

FString * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::GetTestSourceFileName
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingPerTrackCompression.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14751b8e0

int __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::GetTestSourceFileLine
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this)

{
  return 10;
}

// GetTests @ 14751b8f0

/* WARNING: Removing unreachable block (ram,0x00014751b9dd) */
/* WARNING: Removing unreachable block (ram,0x00014751baa8) */

void __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::GetTests
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this,
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
  
  ::FString::FString(&local_18,"Ispc.Animation.PerTrackCompression.GetPoseRotations");
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

// RunTest @ 14751bad0

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
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::RunTest
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this,FString *param_1)

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
  undefined8 uVar14;
  undefined8 uVar15;
  UEngine *pUVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong *plVar25;
  FOutputDeviceRedirector *pFVar26;
  FString *pFVar27;
  uint uVar28;
  longlong lVar29;
  ForAnyElementType FVar30;
  uint uVar31;
  uint uVar32;
  size_t _Size;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  wchar_t *pwVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar47;
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  double dVar56;
  double dVar57;
  undefined1 auStackY_708 [32];
  ForAnyElementType local_6b8;
  undefined8 local_6b0;
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> local_6a8;
  undefined4 local_698;
  undefined4 local_694;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_690;
  ForAnyElementType local_680;
  int local_678;
  int local_674 [3];
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 local_660;
  undefined4 uStack_65c;
  ForAnyElementType local_658;
  int local_650;
  int local_64c;
  ForAnyElementType local_648;
  int local_63c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_638;
  FString local_628;
  TArrayView<UE::Math::TTransform<double>,int> local_618;
  undefined **local_608 [2];
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
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  FName local_580;
  TArrayView<UE::Math::TTransform<double>,int> local_578;
  undefined8 local_568;
  AEFPerTrackCompressionCodec local_560;
  undefined8 local_558;
  AEFPerTrackCompressionCodec local_550;
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
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_708;
  ::FString::FString(&local_628,L"a.PerTrackCompression.ISPC");
  iVar21 = local_628.Data.ArrayNum;
  FVar30.Data = local_628.Data.AllocatorInstance.Data;
  uVar33 = 0;
  local_648.Data = (FScriptContainerElement *)0x0;
  if (local_628.Data.ArrayNum == 0) {
    local_63c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_628.Data.ArrayNum,0,&local_648,local_628.Data.ArrayNum,&local_63c);
    memcpy(local_648.Data,FVar30.Data,(longlong)iVar21 * 2);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar17)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  FVar30.Data = (FScriptContainerElement *)L"";
  if (local_628.Data.ArrayNum != 0) {
    FVar30.Data = local_628.Data.AllocatorInstance.Data;
  }
  plVar25 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,FVar30.Data,1);
  bVar17 = (bool)(**(code **)(*plVar25 + 0xc0))(plVar25);
  if ((GEngine == (UEngine *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingPerTrackCompression.cpp"
                          ,0x14,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  uVar15 = _UNK_1516fe2d8;
  uVar14 = ___xmm_00000000000000004046800000000000;
  dVar57 = _UNK_15061cbc8;
  dVar56 = ___xmm_3ff00000000000000000000000000000;
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[0];
  uVar54 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar55 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_6b8.Data = (FScriptContainerElement *)0x0;
  local_6b0 = 0;
  dVar52 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dVar53 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  uVar50 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar51 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar43 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar44 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  iVar20 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
  iVar21 = iVar20 + 1;
  local_3f8.Rotation.ZW.m128d_f64[0] = ___xmm_40450000000000004079000000000000;
  local_3f8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe328;
  lVar29 = (longlong)iVar20 * 0x60;
  local_3f8.Rotation.XY.m128d_f64[0] = ___xmm_4066800000000000c07c200000000000;
  local_3f8.Rotation.XY.m128d_f64[1] = _UNK_1516fe358;
  local_f8 = uVar14;
  uStack_f0 = uVar15;
  local_e8 = dVar56;
  dStack_e0 = dVar57;
  *(undefined8 *)&local_6b8.Data[lVar29].field_0x0 = uVar14;
  *(undefined8 *)(local_6b8.Data + lVar29 + 8) = uVar15;
  *(double *)(local_6b8.Data + lVar29 + 0x10) = dVar56;
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = dVar57;
  auVar11._8_4_ = uVar54;
  auVar11._0_8_ = (double)fVar6;
  auVar11._12_4_ = uVar55;
  *(undefined1 (*) [16])(local_6b8.Data + lVar29 + 0x20) = auVar11;
  auVar9._8_4_ = uVar50;
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = uVar51;
  *(undefined1 (*) [16])(local_6b8.Data + lVar29 + 0x30) = auVar9;
  *(double *)(local_6b8.Data + lVar29 + 0x40) = dVar52;
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = dVar53;
  auVar8._8_4_ = uVar43;
  auVar8._0_8_ = (double)fVar5;
  auVar8._12_4_ = uVar44;
  *(undefined1 (*) [16])(local_6b8.Data + lVar29 + 0x50) = auVar8;
  local_d8._8_4_ = uVar54;
  local_d8._0_8_ = (double)fVar6;
  local_d8._12_4_ = uVar55;
  local_c8._8_4_ = uVar50;
  local_c8._0_8_ = (double)fVar4;
  local_c8._12_4_ = uVar51;
  local_a8._8_4_ = uVar43;
  local_a8._0_8_ = (double)fVar5;
  local_a8._12_4_ = uVar44;
  local_3f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3f8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_3f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3f8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_3f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_3f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8 = dVar52;
  dStack_b0 = dVar53;
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_3f8) &&
      (&local_3f8 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), dVar56 = ___xmm_3ff00000000000000000000000000000,
     dVar57 = _UNK_15061cbc8, bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  local_398.Rotation.ZW.m128d_f64[0] = dVar56;
  local_398.Rotation.ZW.m128d_f64[1] = dVar57;
  if ((int)local_6b0 == local_6b0._4_4_) {
    local_6b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
    local_398.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_398.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  iVar21 = (int)local_6b0 + 1;
  lVar29 = (longlong)(int)local_6b0 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_3f8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_3f8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_3f8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_3f8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_3f8.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_3f8.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_3f8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_3f8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_3f8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_3f8.Scale3D.XY.m128d_f64[1];
  local_398.Rotation.XY.m128d_f64[1] = _UNK_1516fe348;
  local_398.Rotation.XY.m128d_f64[0] = ___xmm_40668000000000004056800000000000;
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_3f8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_3f8.Scale3D.ZW.m128d_f64[1];
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
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_398) &&
      (&local_398 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000,
     local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8, bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  if ((int)local_6b0 == local_6b0._4_4_) {
    local_6b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
    local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  local_2d8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318;
  local_2d8.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000;
  iVar21 = (int)local_6b0 + 1;
  local_338.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000;
  local_338.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318;
  lVar29 = (longlong)(int)local_6b0 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_398.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_398.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_398.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_398.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_398.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_398.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_398.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_398.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_398.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_398.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_398.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_398.Scale3D.ZW.m128d_f64[1];
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
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_338) &&
      (&local_338 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_2d8.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000,
     local_2d8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318,
     local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000,
     local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8, bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  if ((int)local_6b0 == local_6b0._4_4_) {
    local_6b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
    local_2d8.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000004059000000000000;
    local_2d8.Rotation.ZW.m128d_f64[1] = _UNK_1516fe318;
    local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  iVar21 = (int)local_6b0 + 1;
  lVar29 = (longlong)(int)local_6b0 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_338.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_338.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_338.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_338.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_338.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_338.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_338.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_338.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_338.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_338.Scale3D.XY.m128d_f64[1];
  local_2d8.Rotation.XY.m128d_f64[1] = _UNK_1512468d8;
  local_2d8.Rotation.XY.m128d_f64[0] = ___xmm_40590000000000004059000000000000;
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_338.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_338.Scale3D.ZW.m128d_f64[1];
  local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_2d8) &&
      (&local_2d8 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000,
     local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8, bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  if ((int)local_6b0 == local_6b0._4_4_) {
    local_6b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
    local_278.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000000000000000000000;
    local_278.Rotation.ZW.m128d_f64[1] = _UNK_15061cbc8;
  }
  iVar21 = (int)local_6b0 + 1;
  lVar29 = (longlong)(int)local_6b0 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_2d8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_2d8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_2d8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_2d8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_2d8.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_2d8.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_2d8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_2d8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_2d8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_2d8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_2d8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_2d8.Scale3D.ZW.m128d_f64[1];
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
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_278) &&
      (&local_278 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  if ((int)local_6b0 == local_6b0._4_4_) {
    local_6b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
  }
  local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  iVar21 = (int)local_6b0 + 1;
  local_218.Rotation.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_218.Rotation.XY.m128d_f64[1] = _UNK_150689688;
  local_218.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_218.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  lVar29 = (longlong)(int)local_6b0 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_278.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_278.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_278.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_278.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_278.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_278.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_278.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_278.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_278.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_278.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_278.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_278.Scale3D.ZW.m128d_f64[1];
  local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_218.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_218.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_218.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_218.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_218) &&
      (&local_218 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000,
     local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688, bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  if ((int)local_6b0 == local_6b0._4_4_) {
    local_6b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
    local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  }
  iVar21 = (int)local_6b0 + 1;
  lVar29 = (longlong)(int)local_6b0 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_218.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_218.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_218.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_218.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_218.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_218.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_218.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_218.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_218.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_218.Scale3D.XY.m128d_f64[1];
  local_1b8.Rotation.XY.m128d_f64[1] = _UNK_15076b868;
  local_1b8.Rotation.XY.m128d_f64[0] = ___xmm_3ff0000000000000bff0000000000000;
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_218.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_218.Scale3D.ZW.m128d_f64[1];
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
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_1b8) &&
      (&local_1b8 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ),
     local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000,
     local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688, bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  if ((int)local_6b0 == local_6b0._4_4_) {
    local_6b0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
    local_158.Rotation.ZW.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_158.Rotation.ZW.m128d_f64[1] = _UNK_150689688;
  }
  iVar21 = (int)local_6b0 + 1;
  lVar29 = (longlong)(int)local_6b0 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_1b8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_1b8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_1b8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_1b8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_1b8.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_1b8.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_1b8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_1b8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_1b8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_1b8.Scale3D.XY.m128d_f64[1];
  local_158.Rotation.XY.m128d_f64[1] = _UNK_15076c6f8;
  local_158.Rotation.XY.m128d_f64[0] = ___xmm_bff00000000000003ff0000000000000;
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_1b8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_1b8.Scale3D.ZW.m128d_f64[1];
  local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6b0._0_4_ = iVar21;
  if (((local_6b8.Data <= &local_158) &&
      (&local_158 < (TTransform<double> *)(local_6b8.Data + (longlong)local_6b0._4_4_ * 0x60))) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  iVar21 = (int)local_6b0;
  if ((int)local_6b0 == local_6b0._4_4_) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&local_6b8,(int *)((longlong)&local_6b0 + 4));
  }
  FVar30.Data = local_6b8.Data;
  local_650 = iVar21 + 1;
  local_6b0 = CONCAT44(local_6b0._4_4_,local_650);
  lVar29 = (longlong)iVar21 * 0x60;
  *(double *)&local_6b8.Data[lVar29].field_0x0 = local_158.Rotation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 8) = local_158.Rotation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x10) = local_158.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x10 + 8) = local_158.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x20) = local_158.Translation.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x20 + 8) = local_158.Translation.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x30) = local_158.Translation.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x30 + 8) = local_158.Translation.ZW.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x40) = local_158.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x40 + 8) = local_158.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6b8.Data + lVar29 + 0x50) = local_158.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6b8.Data + lVar29 + 0x50 + 8) = local_158.Scale3D.ZW.m128d_f64[1];
  lVar29 = (longlong)local_650;
  local_658.Data = (FScriptContainerElement *)0x0;
  if (local_650 == 0) {
    local_64c = 0;
    local_618.ArrayNum = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_650,0,&local_658,local_650,&local_64c);
    memcpy(local_658.Data,FVar30.Data,lVar29 * 0x60);
    local_618.ArrayNum = (int)local_6b0;
  }
  local_618.DataPtr = (TTransform<double> *)local_6b8.Data;
  if ((local_618.ArrayNum < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  iVar21 = local_650;
  local_578.DataPtr = (TTransform<double> *)local_658.Data;
  if ((local_650 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  local_578.ArrayNum = iVar21;
  local_6a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.ArrayNum = 0;
  local_6a8.ArrayMax = 0;
  local_598 = 0;
  iVar20 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_6a8.AllocatorInstance,&local_6a8.ArrayMax);
  local_668 = 1;
  uStack_664 = 1;
  iVar21 = iVar20 + 1;
  *(undefined8 *)(local_6a8.AllocatorInstance.Data + (longlong)iVar20 * 8) = 0;
  local_6a8.ArrayNum = iVar21;
  if (((local_6a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_668) &&
      ((FScriptContainerElement *)&local_668 <
       local_6a8.AllocatorInstance.Data + (longlong)local_6a8.ArrayMax * 8)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  if (local_6a8.ArrayNum == local_6a8.ArrayMax) {
    local_6a8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_6a8.AllocatorInstance,&local_6a8.ArrayMax);
  }
  iVar21 = local_6a8.ArrayNum + 1;
  local_660 = 2;
  uStack_65c = 2;
  *(ulonglong *)(local_6a8.AllocatorInstance.Data + (longlong)local_6a8.ArrayNum * 8) =
       CONCAT44(uStack_664,local_668);
  local_6a8.ArrayNum = iVar21;
  if (((local_6a8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_660) &&
      ((FScriptContainerElement *)&local_660 <
       local_6a8.AllocatorInstance.Data + (longlong)local_6a8.ArrayMax * 8)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
  }
  iVar21 = local_6a8.ArrayNum;
  if (local_6a8.ArrayNum == local_6a8.ArrayMax) {
    iVar21 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_6a8.AllocatorInstance,&local_6a8.ArrayMax);
  }
  local_6a8.ArrayNum = iVar21 + 1;
  *(ulonglong *)(local_6a8.AllocatorInstance.Data + (longlong)iVar21 * 8) =
       CONCAT44(uStack_65c,local_660);
  local_690.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_690.ArrayNum = 0;
  local_690.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,400,&local_690.AllocatorInstance,&local_690.ArrayNum,&local_690.ArrayMax);
  uVar22 = 0;
  if (0 < local_690.ArrayNum) {
    lVar29 = 2;
    uVar31 = 2;
    do {
      uVar23 = 0;
      if ((int)(uVar31 - 2) < local_690.ArrayNum) {
        uVar23 = ~(uVar31 - 2) >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      local_690.AllocatorInstance.Data[lVar29 + -2] = (FScriptContainerElement)0x0;
      uVar23 = uVar22;
      if ((int)(uVar31 - 1) < local_690.ArrayNum) {
        uVar23 = ~(uVar31 - 1) >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      local_690.AllocatorInstance.Data[lVar29 + -1] = (FScriptContainerElement)0x60;
      uVar23 = uVar22;
      if ((int)uVar31 < local_690.ArrayNum) {
        uVar23 = ~uVar31 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      local_690.AllocatorInstance.Data[lVar29] = (FScriptContainerElement)0x0;
      uVar23 = uVar22;
      if ((int)(uVar31 + 1) < local_690.ArrayNum) {
        uVar23 = ~(uVar31 + 1) >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      local_690.AllocatorInstance.Data[lVar29 + 1] = (FScriptContainerElement)0x0;
      lVar29 = lVar29 + 4;
      iVar21 = uVar31 + 2;
      uVar31 = uVar31 + 4;
    } while (iVar21 < local_690.ArrayNum);
  }
  local_680.Data = (FScriptContainerElement *)0x0;
  lVar29 = 100;
  local_674[0] = 0;
  local_674[1] = 2;
  local_698 = 0x1e;
  local_678 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_680,0,local_674);
  lVar35 = 100;
  do {
    if (((local_680.Data <= (FScriptContainerElement *)&local_698) &&
        ((FScriptContainerElement *)&local_698 < local_680.Data + (longlong)local_674[0] * 4)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar3 = (code *)swi(3);
      uVar18 = (*pcVar3)();
      return (bool)uVar18;
    }
    if (local_678 == local_674[0]) {
      local_678 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_680,local_674);
    }
    iVar21 = local_678 + 1;
    *(undefined4 *)(local_680.Data + (longlong)local_678 * 4) = local_698;
    lVar35 = lVar35 + -1;
    local_678 = iVar21;
  } while (lVar35 != 0);
  local_5f8.Data = (FScriptContainerElement *)0x0;
  local_608[0] = &___7FUECompressedAnimDataMutable__6B_;
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
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_694 = 0x1e;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_5f8,0,&iStack_5ec);
  do {
    if (((local_5f8.Data <= (FScriptContainerElement *)&local_694) &&
        ((FScriptContainerElement *)&local_694 < local_5f8.Data + (longlong)iStack_5ec * 4)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar3 = (code *)swi(3);
      uVar18 = (*pcVar3)();
      return (bool)uVar18;
    }
    if (local_5f0 == iStack_5ec) {
      local_5f0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_5f8,&iStack_5ec);
    }
    iVar21 = local_678;
    FVar30.Data = local_680.Data;
    lVar35 = (longlong)local_5f0;
    local_5f0 = local_5f0 + 1;
    *(undefined4 *)(local_5f8.Data + lVar35 * 4) = local_694;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  lVar29 = (longlong)local_678;
  local_5e0._0_4_ = local_678;
  if ((local_678 == 0) && (local_5e0._4_4_ == 0)) {
    local_5e0 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_678,local_5e0._4_4_,&local_5e8,local_678,(int *)((longlong)&local_5e0 + 4))
    ;
    if (iVar21 != 0) {
      memcpy(local_5e8.Data,FVar30.Data,lVar29 << 2);
    }
  }
  FVar30.Data = local_690.AllocatorInstance.Data;
  iVar21 = local_690.ArrayNum;
  _Size = (size_t)local_690.ArrayNum;
  local_5d8 = local_674[1];
  local_5c8 = CONCAT44(local_5c8._4_4_,local_690.ArrayNum);
  if ((local_690.ArrayNum == 0) && (local_5c8._4_4_ == 0)) {
    local_5c8 = local_690._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_690.ArrayNum,local_5c8._4_4_,&local_5d0,local_690.ArrayNum,
               (int *)((longlong)&local_5c8 + 4));
    if (iVar21 != 0) {
      memcpy(local_5d0.Data,FVar30.Data,_Size);
    }
  }
  local_5a8 = 0x600000002;
  uStack_5a0 = 0x600000006;
  FUECompressedAnimDataMutable::BuildFinalBuffer
            ((FUECompressedAnimDataMutable *)local_608,&local_690);
  ::FName::FName(&local_580,L"");
  pUVar16 = GEngine;
  pcVar3 = *(code **)(GEngine->_padding_ + 8);
  pFVar26 = GetGlobalLogSingleton();
  pFVar27 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::RunTest'::__l2::<lambda_1>::
            operator()(&local_648,&local_458,true);
  if ((pFVar27->Data).ArrayNum == 0) {
    pwVar36 = L"";
  }
  else {
    pwVar36 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(&pUVar16->_padding_,0,pwVar36,pFVar26);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  dVar56 = __real_3ef179ec9cbd821e;
  local_560 = (AEFPerTrackCompressionCodec)&___7AEFPerTrackCompressionCodec__6B_;
  local_568 = 1;
  local_538.AnimName = local_580;
  local_538.RefPoses.DataPtr = (TTransform<double> *)local_6b8.Data;
  local_590 = 1;
  local_538.Interpolation = Linear;
  local_538.Time = 0.0;
  local_538.RelativePos = 0.0;
  local_538.RefPoses.ArrayNum = (int)local_6b0;
  local_538.SequenceLength = (float)(__real_3ef179ec9cbd821e * 1.0);
  local_538.CompressedAnimData = (ICompressedAnimData *)local_608;
  if (((int)local_6b0 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
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
  AEFPerTrackCompressionCodec::GetPoseRotations(&local_560,&local_618,&local_6a8,&local_538);
  pUVar16 = GEngine;
  pcVar3 = *(code **)(GEngine->_padding_ + 8);
  pFVar26 = GetGlobalLogSingleton();
  pFVar27 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::RunTest'::__l2::<lambda_1>::
            operator()(&local_648,&local_448,false);
  if ((pFVar27->Data).ArrayNum == 0) {
    pwVar36 = L"";
  }
  else {
    pwVar36 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(&pUVar16->_padding_,0,pwVar36,pFVar26);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  local_550 = (AEFPerTrackCompressionCodec)&___7AEFPerTrackCompressionCodec__6B_;
  local_558 = 1;
  local_4c8.AnimName = local_580;
  local_4c8.RefPoses.DataPtr = (TTransform<double> *)local_658.Data;
  local_588 = 1;
  local_4c8.Interpolation = Linear;
  local_4c8.Time = 0.0;
  local_4c8.RelativePos = 0.0;
  local_4c8.RefPoses.ArrayNum = local_650;
  local_4c8.SequenceLength = (float)(dVar56 * 1.0);
  local_4c8.CompressedAnimData = (ICompressedAnimData *)local_608;
  if ((local_650 < 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar19)) {
    pcVar3 = (code *)swi(3);
    uVar18 = (*pcVar3)();
    return (bool)uVar18;
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
  AEFPerTrackCompressionCodec::GetPoseRotations(&local_550,&local_578,&local_6a8,&local_4c8);
  pUVar16 = GEngine;
  pcVar3 = *(code **)(GEngine->_padding_ + 8);
  GetGlobalLogSingleton();
  pFVar27 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::RunTest'::__l2::<lambda_1>::
            operator()(&local_648,&local_438,bVar17);
  if ((pFVar27->Data).ArrayNum == 0) {
    pwVar36 = L"";
  }
  else {
    pwVar36 = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(&pUVar16->_padding_,0,pwVar36);
  if (local_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.Data.AllocatorInstance.Data);
  }
  dVar56 = __real_3f1a36e2e0000000;
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar23 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar31 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar34 = uVar33;
  if (0 < local_618.ArrayNum) {
    do {
      uVar32 = (uint)uVar33;
      FStringFormatArg::FStringFormatArg(&local_420,uVar32);
      local_638.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_638.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_638.AllocatorInstance,1,&local_638.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_638.AllocatorInstance.Data,&local_420,1);
      ::FString::FormatImpl(&local_548,L"Quat {0}",&local_638);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_638.AllocatorInstance.Data,local_638.ArrayNum);
      if ((FStringFormatArg *)local_638.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_638.AllocatorInstance.Data);
      }
      if (local_420.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_420.StringValue.Data.AllocatorInstance.Data);
      }
      uVar24 = uVar22;
      if ((int)uVar32 < local_618.ArrayNum) {
        uVar24 = ~uVar32 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar3 = (code *)swi(3);
        uVar18 = (*pcVar3)();
        return (bool)uVar18;
      }
      pdVar1 = (double *)((longlong)((local_618.DataPtr)->Rotation).XY.m128d_f64 + uVar34);
      dVar57 = *pdVar1;
      dVar52 = pdVar1[1];
      pdVar1 = (double *)((longlong)((local_618.DataPtr)->Rotation).ZW.m128d_f64 + uVar34);
      dVar53 = *pdVar1;
      dVar10 = pdVar1[1];
      uVar24 = uVar22;
      if ((int)uVar32 < local_578.ArrayNum) {
        uVar24 = ~uVar32 >> 0x1f;
      }
      iVar21 = local_578.ArrayNum;
      if (uVar24 == 0) {
        iVar21 = 0x506106c8;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar17) {
          pcVar3 = (code *)swi(3);
          uVar18 = (*pcVar3)();
          return (bool)uVar18;
        }
      }
      uVar43 = SUB84(dVar56,0);
      uVar44 = (undefined4)((ulonglong)dVar56 >> 0x20);
      auVar37._8_4_ = uVar43;
      auVar37._0_8_ = dVar56;
      auVar37._12_4_ = uVar44;
      local_428 = dVar56;
      pdVar2 = (double *)((longlong)((local_578.DataPtr)->Rotation).ZW.m128d_f64 + uVar34);
      pdVar1 = (double *)((longlong)((local_578.DataPtr)->Rotation).XY.m128d_f64 + uVar34);
      dVar48 = *pdVar2 + dVar53;
      dVar49 = pdVar2[1] + dVar10;
      pdVar2 = (double *)((longlong)((local_578.DataPtr)->Rotation).ZW.m128d_f64 + uVar34);
      dVar53 = dVar53 - *pdVar2;
      dVar10 = dVar10 - pdVar2[1];
      dVar45 = *pdVar1 + dVar57;
      dVar47 = pdVar1[1] + dVar52;
      pdVar1 = (double *)((longlong)((local_578.DataPtr)->Rotation).XY.m128d_f64 + uVar34);
      dVar57 = dVar57 - *pdVar1;
      dVar52 = dVar52 - pdVar1[1];
      auVar46._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar23,SUB84(dVar45,0) & uVar31);
      auVar46._8_4_ = SUB84(dVar47,0) & uVar12;
      auVar46._12_4_ = (uint)((ulonglong)dVar47 >> 0x20) & uVar13;
      auVar38._8_8_ =
           -(ulonglong)
            (auVar37._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar13,SUB84(dVar10,0) & uVar12));
      auVar38._0_8_ =
           -(ulonglong)
            (dVar56 < (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) & uVar23,
                                       SUB84(dVar53,0) & uVar31));
      iVar21 = movmskpd(iVar21,auVar38);
      auVar39._8_4_ = uVar43;
      auVar39._0_8_ = dVar56;
      auVar39._12_4_ = uVar44;
      auVar40._8_8_ =
           -(ulonglong)
            (auVar39._8_8_ <
            (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) & uVar13,SUB84(dVar52,0) & uVar12));
      auVar40._0_8_ =
           -(ulonglong)
            (dVar56 < (double)CONCAT44((uint)((ulonglong)dVar57 >> 0x20) & uVar23,
                                       SUB84(dVar57,0) & uVar31));
      uVar24 = movmskpd((int)local_578.DataPtr,auVar40);
      uVar28 = iVar21 << 2 | uVar24;
      bVar17 = true;
      if (uVar28 != 0) {
        auVar41._8_4_ = uVar43;
        auVar41._0_8_ = dVar56;
        auVar41._12_4_ = uVar44;
        auVar42._8_8_ =
             -(ulonglong)
              (auVar41._8_8_ <
              (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) & uVar13,SUB84(dVar49,0) & uVar12))
        ;
        auVar42._0_8_ =
             -(ulonglong)
              (dVar56 < (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar23,
                                         SUB84(dVar48,0) & uVar31));
        uVar28 = movmskpd(uVar28,auVar42);
        lVar29 = -(ulonglong)(dVar56 < auVar46._8_8_);
        auVar7._8_4_ = (int)lVar29;
        auVar7._0_8_ = -(ulonglong)(dVar56 < auVar46._0_8_);
        auVar7._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
        iVar21 = movmskpd(uVar24,auVar7);
        if ((uVar28 & 0x3fffffff) != 0 || iVar21 != 0) {
          bVar17 = false;
        }
      }
      FVar30.Data = (FScriptContainerElement *)L"";
      if (local_548.Data.ArrayNum != 0) {
        FVar30.Data = local_548.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar30.Data,bVar17);
      if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.Data.AllocatorInstance.Data);
      }
      uVar33 = (ulonglong)(uVar32 + 1);
      uVar34 = uVar34 + 0x60;
    } while ((int)(uVar32 + 1) < local_618.ArrayNum);
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
  local_608[0] = &___7ICompressedAnimData__6B_;
  if (local_680.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_680.Data);
  }
  if (local_690.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_690.AllocatorInstance.Data);
  }
  if (local_6a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.AllocatorInstance.Data);
  }
  if (local_658.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data);
  }
  if ((TTransform<double> *)local_6b8.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_6b8.Data);
  }
  if (local_648.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data);
  }
  if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14751d550

FString * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::GetBeautifiedTestName
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Animation.PerTrackCompression.GetPoseRotations");
  return __return_storage_ptr__;
}

// operator() @ 14753ccb0

FString * __thiscall
`FIspcTestAnimEncodingPerTrackCompressionGetPoseRotations::RunTest'::__l2::<lambda_1>::operator()
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

