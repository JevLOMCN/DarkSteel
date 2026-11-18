// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetTestFlags @ 14751e220

EAutomationTestFlags __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::GetTestFlags
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14751e230

bool __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::IsStressTest
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14751e280

uint __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::GetRequiredDeviceNum
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this)

{
  return 1;
}

// GetTestSourceFileName @ 14751e290

FString * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::GetTestSourceFileName
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingPerTrackCompression.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14751e2c0

int __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::GetTestSourceFileLine
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this)

{
  return 0x70;
}

// GetTests @ 14751e360

/* WARNING: Removing unreachable block (ram,0x00014751e44d) */
/* WARNING: Removing unreachable block (ram,0x00014751e518) */

void __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::GetTests
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this,
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
  
  ::FString::FString(&local_18,"Ispc.Animation.PerTrackCompression.GetPoseTranslations");
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

// RunTest @ 14751e600

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
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::RunTest
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this,FString *param_1)

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
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  UEngine *pUVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  FOutputDeviceRedirector *pFVar24;
  FString *pFVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  uint uVar28;
  uint uVar29;
  size_t _Size;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  wchar_t *pwVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_738 [32];
  ForAnyElementType local_6e8;
  undefined8 local_6e0;
  TArray<BoneTrackPair,TSizedDefaultAllocator<32>_> local_6d8;
  undefined4 local_6c8;
  undefined4 local_6c4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_6c0;
  ForAnyElementType local_6b0;
  int local_6a8;
  int local_6a4 [3];
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 local_690;
  undefined4 uStack_68c;
  ForAnyElementType local_688;
  int local_680;
  int local_67c;
  ForAnyElementType local_678;
  int local_66c;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_668;
  FString local_658;
  undefined1 local_648 [16];
  ForAnyElementType local_638;
  int local_630;
  int iStack_62c;
  ForAnyElementType local_628;
  undefined8 local_620;
  undefined4 local_618;
  ForAnyElementType local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  TArrayView<UE::Math::TTransform<double>,int> local_5d8;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  FName local_5b0;
  TArrayView<UE::Math::TTransform<double>,int> local_5a8;
  undefined8 local_598;
  AEFPerTrackCompressionCodec local_590;
  undefined8 local_588;
  FString local_580;
  AEFPerTrackCompressionCodec local_570;
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
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_738;
  ::FString::FString(&local_658,L"a.PerTrackCompression.ISPC");
  iVar19 = local_658.Data.ArrayNum;
  FVar27.Data = local_658.Data.AllocatorInstance.Data;
  uVar30 = 0;
  local_678.Data = (FScriptContainerElement *)0x0;
  if (local_658.Data.ArrayNum == 0) {
    local_66c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_658.Data.ArrayNum,0,&local_678,local_658.Data.ArrayNum,&local_66c);
    memcpy(local_678.Data,FVar27.Data,(longlong)iVar19 * 2);
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Singleton != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x4fb,L""), bVar15)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  FVar27.Data = (FScriptContainerElement *)L"";
  if (local_658.Data.ArrayNum != 0) {
    FVar27.Data = local_658.Data.AllocatorInstance.Data;
  }
  plVar23 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,FVar27.Data,1);
  bVar15 = (bool)(**(code **)(*plVar23 + 0xc0))(plVar23);
  if ((GEngine == (UEngine *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("GEngine",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\IspcTestAnimEncodingPerTrackCompression.cpp"
                          ,0x7a,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  uVar13 = _UNK_1516fe2d8;
  uVar12 = ___xmm_00000000000000004046800000000000;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar39 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar40 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_6e8.Data = (FScriptContainerElement *)0x0;
  local_6e0 = 0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  uVar35 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar36 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
  uVar41 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar42 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  uVar37 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar38 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  iVar18 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  iVar19 = iVar18 + 1;
  local_f8._8_4_ = uVar39;
  local_f8._0_8_ = (double)fVar5;
  local_f8._12_4_ = uVar40;
  local_e8._8_4_ = uVar35;
  local_e8._0_8_ = (double)fVar3;
  local_e8._12_4_ = uVar36;
  local_d8 = uVar12;
  uStack_d0 = uVar13;
  lVar26 = (longlong)iVar18 * 0x60;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8._8_4_ = uVar41;
  local_b8._0_8_ = (double)fVar6;
  local_b8._12_4_ = uVar42;
  local_a8._8_4_ = uVar37;
  local_a8._0_8_ = (double)fVar4;
  local_a8._12_4_ = uVar38;
  auVar9._8_4_ = uVar39;
  auVar9._0_8_ = (double)fVar5;
  auVar9._12_4_ = uVar40;
  *(undefined1 (*) [16])&local_6e8.Data[lVar26].field_0x0 = auVar9;
  auVar7._8_4_ = uVar35;
  auVar7._0_8_ = (double)fVar3;
  auVar7._12_4_ = uVar36;
  *(undefined1 (*) [16])(local_6e8.Data + lVar26 + 0x10) = auVar7;
  *(undefined8 *)(local_6e8.Data + lVar26 + 0x20) = uVar12;
  *(undefined8 *)(local_6e8.Data + lVar26 + 0x20 + 8) = uVar13;
  *(undefined8 *)(local_6e8.Data + lVar26 + 0x30) = 0;
  *(undefined8 *)(local_6e8.Data + lVar26 + 0x30 + 8) = 0;
  auVar10._8_4_ = uVar41;
  auVar10._0_8_ = (double)fVar6;
  auVar10._12_4_ = uVar42;
  *(undefined1 (*) [16])(local_6e8.Data + lVar26 + 0x40) = auVar10;
  auVar8._8_4_ = uVar37;
  auVar8._0_8_ = (double)fVar4;
  auVar8._12_4_ = uVar38;
  *(undefined1 (*) [16])(local_6e8.Data + lVar26 + 0x50) = auVar8;
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
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_3f8) &&
      (&local_3f8 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if ((int)local_6e0 == local_6e0._4_4_) {
    local_6e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  iVar19 = (int)local_6e0 + 1;
  local_398.Translation.ZW.m128d_f64[0] = 0.0;
  local_398.Translation.ZW.m128d_f64[1] = 0.0;
  lVar26 = (longlong)(int)local_6e0 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_3f8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_3f8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_3f8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_3f8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_3f8.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_3f8.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_3f8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_3f8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_3f8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_3f8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_3f8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_3f8.Scale3D.ZW.m128d_f64[1];
  local_398.Translation.XY.m128d_f64[0] = ___xmm_40668000000000004056800000000000;
  local_398.Translation.XY.m128d_f64[1] = _UNK_1516fe348;
  local_398.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_398.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_398.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_398.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_398.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_398.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_398.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_398.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_398) &&
      (&local_398 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if ((int)local_6e0 == local_6e0._4_4_) {
    local_6e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  dVar34 = _UNK_150f34e18;
  dVar11 = ___xmm_00000000000000004059000000000000;
  iVar19 = (int)local_6e0 + 1;
  local_338.Translation.XY.m128d_f64[0] = 0.0;
  local_338.Translation.XY.m128d_f64[1] = 0.0;
  local_338.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004059000000000000;
  local_338.Translation.ZW.m128d_f64[1] = _UNK_150f34e18;
  lVar26 = (longlong)(int)local_6e0 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_398.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_398.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_398.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_398.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_398.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_398.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_398.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_398.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_398.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_398.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_398.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_398.Scale3D.ZW.m128d_f64[1];
  local_338.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_338.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_338.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_338.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_338.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_338.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_338.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_338.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_338) &&
      (&local_338 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if ((int)local_6e0 == local_6e0._4_4_) {
    local_6e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  iVar19 = (int)local_6e0 + 1;
  local_2d8.Translation.ZW.m128d_f64[0] = dVar11;
  local_2d8.Translation.ZW.m128d_f64[1] = dVar34;
  lVar26 = (longlong)(int)local_6e0 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_338.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_338.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_338.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_338.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_338.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_338.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_338.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_338.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_338.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_338.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_338.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_338.Scale3D.ZW.m128d_f64[1];
  local_2d8.Translation.XY.m128d_f64[0] = ___xmm_40590000000000004059000000000000;
  local_2d8.Translation.XY.m128d_f64[1] = _UNK_1512468d8;
  local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_2d8) &&
      (&local_2d8 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if ((int)local_6e0 == local_6e0._4_4_) {
    local_6e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  iVar19 = (int)local_6e0 + 1;
  local_278.Translation.XY.m128d_f64[0] = 0.0;
  local_278.Translation.XY.m128d_f64[1] = 0.0;
  local_278.Translation.ZW.m128d_f64[0] = 0.0;
  local_278.Translation.ZW.m128d_f64[1] = 0.0;
  lVar26 = (longlong)(int)local_6e0 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_2d8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_2d8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_2d8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_2d8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_2d8.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_2d8.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_2d8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_2d8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_2d8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_2d8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_2d8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_2d8.Scale3D.ZW.m128d_f64[1];
  local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_278.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_278.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_278.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_278) &&
      (&local_278 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if ((int)local_6e0 == local_6e0._4_4_) {
    local_6e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  dVar34 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  iVar19 = (int)local_6e0 + 1;
  local_218.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_218.Translation.ZW.m128d_f64[1] = _UNK_150689518;
  lVar26 = (longlong)(int)local_6e0 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_278.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_278.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_278.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_278.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_278.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_278.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_278.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_278.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_278.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_278.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_278.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_278.Scale3D.ZW.m128d_f64[1];
  local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_218.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_218.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_218.Translation.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_218.Translation.XY.m128d_f64[1] = _UNK_150689688;
  local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_218.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_218.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_218) &&
      (&local_218 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if ((int)local_6e0 == local_6e0._4_4_) {
    local_6e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  iVar19 = (int)local_6e0 + 1;
  lVar26 = (longlong)(int)local_6e0 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_218.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_218.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_218.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_218.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_218.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_218.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_218.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_218.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_218.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_218.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_218.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_218.Scale3D.ZW.m128d_f64[1];
  local_1b8.Translation.XY.m128d_f64[0] = ___xmm_3ff0000000000000bff0000000000000;
  local_1b8.Translation.XY.m128d_f64[1] = _UNK_15076b868;
  local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1b8.Translation.ZW.m128d_f64[0] = ___xmm_0000000000000000bff0000000000000;
  local_1b8.Translation.ZW.m128d_f64[1] = _UNK_15076ad98;
  local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_1b8) &&
      (&local_1b8 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if ((int)local_6e0 == local_6e0._4_4_) {
    local_6e0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  iVar19 = (int)local_6e0 + 1;
  local_158.Translation.ZW.m128d_f64[0] = dVar11;
  local_158.Translation.ZW.m128d_f64[1] = dVar34;
  lVar26 = (longlong)(int)local_6e0 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_1b8.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_1b8.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_1b8.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_1b8.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_1b8.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_1b8.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_1b8.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_1b8.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_1b8.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_1b8.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_1b8.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_1b8.Scale3D.ZW.m128d_f64[1];
  local_158.Translation.XY.m128d_f64[0] = ___xmm_bff00000000000003ff0000000000000;
  local_158.Translation.XY.m128d_f64[1] = _UNK_15076c6f8;
  local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_6e0._0_4_ = iVar19;
  if (((local_6e8.Data <= &local_158) &&
      (&local_158 < (TTransform<double> *)(local_6e8.Data + (longlong)local_6e0._4_4_ * 0x60))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  iVar19 = (int)local_6e0;
  if ((int)local_6e0 == local_6e0._4_4_) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1060,&local_6e8,(int *)((longlong)&local_6e0 + 4));
  }
  FVar27.Data = local_6e8.Data;
  local_680 = iVar19 + 1;
  local_6e0 = CONCAT44(local_6e0._4_4_,local_680);
  lVar26 = (longlong)iVar19 * 0x60;
  *(double *)&local_6e8.Data[lVar26].field_0x0 = local_158.Rotation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 8) = local_158.Rotation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x10) = local_158.Rotation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x10 + 8) = local_158.Rotation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x20) = local_158.Translation.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x20 + 8) = local_158.Translation.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x30) = local_158.Translation.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x30 + 8) = local_158.Translation.ZW.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x40) = local_158.Scale3D.XY.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x40 + 8) = local_158.Scale3D.XY.m128d_f64[1];
  *(double *)(local_6e8.Data + lVar26 + 0x50) = local_158.Scale3D.ZW.m128d_f64[0];
  *(double *)(local_6e8.Data + lVar26 + 0x50 + 8) = local_158.Scale3D.ZW.m128d_f64[1];
  lVar26 = (longlong)local_680;
  local_688.Data = (FScriptContainerElement *)0x0;
  if (local_680 == 0) {
    local_67c = 0;
    local_5d8.ArrayNum = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,local_680,0,&local_688,local_680,&local_67c);
    memcpy(local_688.Data,FVar27.Data,lVar26 * 0x60);
    local_5d8.ArrayNum = (int)local_6e0;
  }
  local_5d8.DataPtr = (TTransform<double> *)local_6e8.Data;
  if ((local_5d8.ArrayNum < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  iVar19 = local_680;
  local_5a8.DataPtr = (TTransform<double> *)local_688.Data;
  if ((local_680 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  local_5a8.ArrayNum = iVar19;
  local_6d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d8.ArrayNum = 0;
  local_6d8.ArrayMax = 0;
  local_5c8 = 0;
  iVar18 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_6d8.AllocatorInstance,&local_6d8.ArrayMax);
  local_698 = 1;
  uStack_694 = 1;
  iVar19 = iVar18 + 1;
  *(undefined8 *)(local_6d8.AllocatorInstance.Data + (longlong)iVar18 * 8) = 0;
  local_6d8.ArrayNum = iVar19;
  if (((local_6d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_698) &&
      ((FScriptContainerElement *)&local_698 <
       local_6d8.AllocatorInstance.Data + (longlong)local_6d8.ArrayMax * 8)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  if (local_6d8.ArrayNum == local_6d8.ArrayMax) {
    local_6d8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_6d8.AllocatorInstance,&local_6d8.ArrayMax);
  }
  iVar19 = local_6d8.ArrayNum + 1;
  local_690 = 2;
  uStack_68c = 2;
  *(ulonglong *)(local_6d8.AllocatorInstance.Data + (longlong)local_6d8.ArrayNum * 8) =
       CONCAT44(uStack_694,local_698);
  local_6d8.ArrayNum = iVar19;
  if (((local_6d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_690) &&
      ((FScriptContainerElement *)&local_690 <
       local_6d8.AllocatorInstance.Data + (longlong)local_6d8.ArrayMax * 8)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
  }
  iVar19 = local_6d8.ArrayNum;
  if (local_6d8.ArrayNum == local_6d8.ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_6d8.AllocatorInstance,&local_6d8.ArrayMax);
  }
  local_6d8.ArrayNum = iVar19 + 1;
  *(ulonglong *)(local_6d8.AllocatorInstance.Data + (longlong)iVar19 * 8) =
       CONCAT44(uStack_68c,local_690);
  local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6c0.ArrayNum = 0;
  local_6c0.ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,400,&local_6c0.AllocatorInstance,&local_6c0.ArrayNum,&local_6c0.ArrayMax);
  uVar20 = 0;
  if (0 < local_6c0.ArrayNum) {
    lVar26 = 2;
    uVar28 = 2;
    do {
      uVar21 = 0;
      if ((int)(uVar28 - 2) < local_6c0.ArrayNum) {
        uVar21 = ~(uVar28 - 2) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        uVar16 = (*pcVar2)();
        return (bool)uVar16;
      }
      local_6c0.AllocatorInstance.Data[lVar26 + -2] = (FScriptContainerElement)0x0;
      uVar21 = uVar20;
      if ((int)(uVar28 - 1) < local_6c0.ArrayNum) {
        uVar21 = ~(uVar28 - 1) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        uVar16 = (*pcVar2)();
        return (bool)uVar16;
      }
      local_6c0.AllocatorInstance.Data[lVar26 + -1] = (FScriptContainerElement)0x60;
      uVar21 = uVar20;
      if ((int)uVar28 < local_6c0.ArrayNum) {
        uVar21 = ~uVar28 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        uVar16 = (*pcVar2)();
        return (bool)uVar16;
      }
      local_6c0.AllocatorInstance.Data[lVar26] = (FScriptContainerElement)0x0;
      uVar21 = uVar20;
      if ((int)(uVar28 + 1) < local_6c0.ArrayNum) {
        uVar21 = ~(uVar28 + 1) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        uVar16 = (*pcVar2)();
        return (bool)uVar16;
      }
      local_6c0.AllocatorInstance.Data[lVar26 + 1] = (FScriptContainerElement)0x0;
      lVar26 = lVar26 + 4;
      iVar19 = uVar28 + 2;
      uVar28 = uVar28 + 4;
    } while (iVar19 < local_6c0.ArrayNum);
  }
  local_6b0.Data = (FScriptContainerElement *)0x0;
  lVar26 = 100;
  local_6a4[0] = 0;
  local_6a4[1] = 2;
  local_6c8 = 0x1e;
  local_6a8 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_6b0,0,local_6a4);
  lVar32 = 100;
  do {
    if (((local_6b0.Data <= (FScriptContainerElement *)&local_6c8) &&
        ((FScriptContainerElement *)&local_6c8 < local_6b0.Data + (longlong)local_6a4[0] * 4)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar2 = (code *)swi(3);
      uVar16 = (*pcVar2)();
      return (bool)uVar16;
    }
    if (local_6a8 == local_6a4[0]) {
      local_6a8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_6b0,local_6a4);
    }
    iVar19 = local_6a8 + 1;
    *(undefined4 *)(local_6b0.Data + (longlong)local_6a8 * 4) = local_6c8;
    lVar32 = lVar32 + -1;
    local_6a8 = iVar19;
  } while (lVar32 != 0);
  local_638.Data = (FScriptContainerElement *)0x0;
  local_648._0_8_ = &___7FUECompressedAnimDataMutable__6B_;
  local_630 = 0;
  iStack_62c = 0;
  local_628.Data = (FScriptContainerElement *)0x0;
  local_620 = 0;
  local_618 = 2;
  local_610.Data = (FScriptContainerElement *)0x0;
  local_608 = 0;
  local_600 = 0;
  local_5f8 = 0;
  uStack_5f0 = 0;
  local_5e8 = 0;
  uStack_5e0 = 0;
  local_6c4 = 0x1e;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,100,&local_638,0,&iStack_62c);
  do {
    if (((local_638.Data <= (FScriptContainerElement *)&local_6c4) &&
        ((FScriptContainerElement *)&local_6c4 < local_638.Data + (longlong)iStack_62c * 4)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar2 = (code *)swi(3);
      uVar16 = (*pcVar2)();
      return (bool)uVar16;
    }
    if (local_630 == iStack_62c) {
      local_630 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_638,&iStack_62c);
    }
    iVar19 = local_6a8;
    FVar27.Data = local_6b0.Data;
    lVar32 = (longlong)local_630;
    local_630 = local_630 + 1;
    *(undefined4 *)(local_638.Data + lVar32 * 4) = local_6c4;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  lVar26 = (longlong)local_6a8;
  local_620._0_4_ = local_6a8;
  if ((local_6a8 == 0) && (local_620._4_4_ == 0)) {
    local_620 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_6a8,local_620._4_4_,&local_628,local_6a8,(int *)((longlong)&local_620 + 4))
    ;
    if (iVar19 != 0) {
      memcpy(local_628.Data,FVar27.Data,lVar26 << 2);
    }
  }
  FVar27.Data = local_6c0.AllocatorInstance.Data;
  iVar19 = local_6c0.ArrayNum;
  _Size = (size_t)local_6c0.ArrayNum;
  local_618 = local_6a4[1];
  local_608 = CONCAT44(local_608._4_4_,local_6c0.ArrayNum);
  if ((local_6c0.ArrayNum == 0) && (local_608._4_4_ == 0)) {
    local_608 = local_6c0._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_6c0.ArrayNum,local_608._4_4_,&local_610,local_6c0.ArrayNum,
               (int *)((longlong)&local_608 + 4));
    if (iVar19 != 0) {
      memcpy(local_610.Data,FVar27.Data,_Size);
    }
  }
  local_5e8 = 0x600000002;
  uStack_5e0 = 0x600000006;
  FUECompressedAnimDataMutable::BuildFinalBuffer
            ((FUECompressedAnimDataMutable *)local_648,&local_6c0);
  ::FName::FName(&local_5b0,L"");
  pUVar14 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar24 = GetGlobalLogSingleton();
  pFVar25 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::RunTest'::__l2::<lambda_1>
            ::operator()(&local_678,&local_468,true);
  if ((pFVar25->Data).ArrayNum == 0) {
    pwVar33 = L"";
  }
  else {
    pwVar33 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar14->_padding_,0,pwVar33,pFVar24);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  dVar11 = __real_3ef179ec9cbd821e;
  local_590 = (AEFPerTrackCompressionCodec)&___7AEFPerTrackCompressionCodec__6B_;
  local_598 = 1;
  local_548.AnimName = local_5b0;
  local_548.CompressedAnimData = (ICompressedAnimData *)local_648;
  local_548.RefPoses.DataPtr = (TTransform<double> *)local_6e8.Data;
  local_5c0 = 1;
  local_548.Interpolation = Linear;
  local_548.Time = 0.0;
  local_548.RelativePos = 0.0;
  local_548.RefPoses.ArrayNum = (int)local_6e0;
  local_548.SequenceLength = (float)(__real_3ef179ec9cbd821e * 1.0);
  if (((int)local_6e0 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
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
  AEFPerTrackCompressionCodec::GetPoseTranslations(&local_590,&local_5d8,&local_6d8,&local_548);
  pUVar14 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  pFVar24 = GetGlobalLogSingleton();
  pFVar25 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::RunTest'::__l2::<lambda_1>
            ::operator()(&local_678,&local_458,false);
  if ((pFVar25->Data).ArrayNum == 0) {
    pwVar33 = L"";
  }
  else {
    pwVar33 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar14->_padding_,0,pwVar33,pFVar24);
  if (local_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.Data.AllocatorInstance.Data);
  }
  local_570 = (AEFPerTrackCompressionCodec)&___7AEFPerTrackCompressionCodec__6B_;
  local_588 = 1;
  local_4d8.AnimName = local_5b0;
  local_4d8.CompressedAnimData = (ICompressedAnimData *)local_648;
  local_4d8.RefPoses.DataPtr = (TTransform<double> *)local_688.Data;
  local_5b8 = 1;
  local_4d8.Interpolation = Linear;
  local_4d8.Time = 0.0;
  local_4d8.RelativePos = 0.0;
  local_4d8.RefPoses.ArrayNum = local_680;
  local_4d8.SequenceLength = (float)(dVar11 * 1.0);
  if ((local_680 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar17)) {
    pcVar2 = (code *)swi(3);
    uVar16 = (*pcVar2)();
    return (bool)uVar16;
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
  AEFPerTrackCompressionCodec::GetPoseTranslations(&local_570,&local_5a8,&local_6d8,&local_4d8);
  pUVar14 = GEngine;
  pcVar2 = *(code **)(GEngine->_padding_ + 8);
  GetGlobalLogSingleton();
  pFVar25 = `FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::RunTest'::__l2::<lambda_1>
            ::operator()(&local_678,&local_448,bVar15);
  if ((pFVar25->Data).ArrayNum == 0) {
    pwVar33 = L"";
  }
  else {
    pwVar33 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
  }
  (*pcVar2)(&pUVar14->_padding_,0,pwVar33);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  dVar11 = __real_3f1a36e2e0000000;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar28 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar31 = uVar30;
  if (0 < local_5d8.ArrayNum) {
    do {
      uVar29 = (uint)uVar30;
      FStringFormatArg::FStringFormatArg(&local_438,uVar29);
      local_668.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_668.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_668.AllocatorInstance,1,&local_668.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_668.AllocatorInstance.Data,&local_438,1);
      ::FString::FormatImpl(&local_580,L"Translation {0}",&local_668);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_668.AllocatorInstance.Data,local_668.ArrayNum);
      if ((FStringFormatArg *)local_668.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_668.AllocatorInstance.Data);
      }
      if (local_438.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.StringValue.Data.AllocatorInstance.Data);
      }
      uVar22 = uVar20;
      if ((int)uVar29 < local_5d8.ArrayNum) {
        uVar22 = ~uVar29 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        uVar16 = (*pcVar2)();
        return (bool)uVar16;
      }
      pdVar1 = (double *)((longlong)((local_5d8.DataPtr)->Translation).XY.m128d_f64 + uVar31);
      local_568 = *pdVar1;
      dStack_560 = pdVar1[1];
      local_558 = *(double *)((longlong)((local_5d8.DataPtr)->Translation).ZW.m128d_f64 + uVar31);
      uVar22 = uVar20;
      if ((int)uVar29 < local_5a8.ArrayNum) {
        uVar22 = ~uVar29 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar2 = (code *)swi(3);
        uVar16 = (*pcVar2)();
        return (bool)uVar16;
      }
      pdVar1 = (double *)((longlong)((local_5a8.DataPtr)->Translation).XY.m128d_f64 + uVar31);
      local_408 = *(double *)((longlong)((local_5a8.DataPtr)->Translation).ZW.m128d_f64 + uVar31);
      dVar34 = local_568 - *pdVar1;
      if (((dVar11 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar21,
                                      SUB84(dVar34,0) & uVar28)) ||
          (dVar34 = dStack_560 - pdVar1[1],
          dVar11 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar21,
                                    SUB84(dVar34,0) & uVar28))) ||
         (bVar15 = true,
         dVar11 < (double)CONCAT44((uint)((ulonglong)(local_558 - local_408) >> 0x20) & uVar21,
                                   SUB84(local_558 - local_408,0) & uVar28))) {
        bVar15 = false;
      }
      FVar27.Data = (FScriptContainerElement *)L"";
      if (local_580.Data.ArrayNum != 0) {
        FVar27.Data = local_580.Data.AllocatorInstance.Data;
      }
      FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar27.Data,bVar15);
      if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data.AllocatorInstance.Data);
      }
      uVar30 = (ulonglong)(uVar29 + 1);
      uVar31 = uVar31 + 0x60;
    } while ((int)(uVar29 + 1) < local_5d8.ArrayNum);
  }
  if (local_610.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.Data);
  }
  if (local_628.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data);
  }
  if (local_638.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data);
  }
  local_648._0_8_ = &___7ICompressedAnimData__6B_;
  if (local_6b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Data);
  }
  if (local_6c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c0.AllocatorInstance.Data);
  }
  if (local_6d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.AllocatorInstance.Data);
  }
  if (local_688.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.Data);
  }
  if ((TTransform<double> *)local_6e8.Data != (TTransform<double> *)0x0) {
    FMemory::Free(local_6e8.Data);
  }
  if (local_678.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.Data);
  }
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 147520000

FString * __thiscall
FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::GetBeautifiedTestName
          (FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Ispc.Animation.PerTrackCompression.GetPoseTranslations"
                    );
  return __return_storage_ptr__;
}

// operator() @ 14753ced0

FString * __thiscall
`FIspcTestAnimEncodingPerTrackCompressionGetPoseTranslations::RunTest'::__l2::<lambda_1>::operator()
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

