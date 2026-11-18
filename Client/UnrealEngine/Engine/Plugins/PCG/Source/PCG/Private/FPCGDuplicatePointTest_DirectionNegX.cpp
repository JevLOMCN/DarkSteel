// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd82e0

EAutomationTestFlags __thiscall
FPCGDuplicatePointTest_DirectionNegX::GetTestFlags(FPCGDuplicatePointTest_DirectionNegX *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd82f0

bool __thiscall
FPCGDuplicatePointTest_DirectionNegX::IsStressTest(FPCGDuplicatePointTest_DirectionNegX *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd8300

uint __thiscall
FPCGDuplicatePointTest_DirectionNegX::GetRequiredDeviceNum
          (FPCGDuplicatePointTest_DirectionNegX *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd8310

FString * __thiscall
FPCGDuplicatePointTest_DirectionNegX::GetTestSourceFileName
          (FPCGDuplicatePointTest_DirectionNegX *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDuplicatePointTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd8340

int __thiscall
FPCGDuplicatePointTest_DirectionNegX::GetTestSourceFileLine
          (FPCGDuplicatePointTest_DirectionNegX *this)

{
  return 0x90;
}

// GetTests @ 149fd8350

/* WARNING: Removing unreachable block (ram,0x000149fd843d) */
/* WARNING: Removing unreachable block (ram,0x000149fd8508) */

void __thiscall
FPCGDuplicatePointTest_DirectionNegX::GetTests
          (FPCGDuplicatePointTest_DirectionNegX *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.DuplicatePoint.DirectionNegX");
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

// RunTest @ 149fd8530

bool __thiscall
FPCGDuplicatePointTest_DirectionNegX::RunTest
          (FPCGDuplicatePointTest_DirectionNegX *this,FString *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  undefined4 uStack_144;
  undefined7 uStack_127;
  double dStack_110;
  double dStack_100;
  double dStack_f0;
  double dStack_e0;
  double dStack_d0;
  double dStack_c0;
  undefined1 uStack_b1;
  FTestParameters local_a8;
  
  local_a8.PtTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar1._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar1._0_8_ = local_a8.PtTransform.Rotation.XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.PtTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  auVar2._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar2._0_8_ = local_a8.PtTransform.Rotation.ZW.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.PtTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = local_a8.PtTransform.Translation.XY.m128d_f64[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.PtTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.PtTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar6._0_8_ = local_a8.PtTransform.Scale3D.XY.m128d_f64[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  auVar3._0_8_ = local_a8.PtTransform.Translation.ZW.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.PtTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  auVar4._0_8_ = local_a8.PtTransform.Scale3D.ZW.m128d_f64[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_a8._4_4_ = uStack_144;
  local_a8.Iterations = 2;
  local_a8.Direction.field0_0x0._s_0.X = __real_bff0000000000000;
  local_a8._33_7_ = uStack_127;
  local_a8.IncludeSource = true;
  local_a8.Direction.field0_0x0._s_0.Y = 0.0;
  local_a8.Direction.field0_0x0._s_0.Z = 0.0;
  dStack_110 = auVar1._8_8_;
  dStack_100 = auVar2._8_8_;
  local_a8.PtTransform.Rotation.XY.m128d_f64[1] = dStack_110;
  dStack_f0 = auVar5._8_8_;
  local_a8.PtTransform.Rotation.ZW.m128d_f64[1] = dStack_100;
  dStack_e0 = auVar3._8_8_;
  local_a8.PtTransform.Translation.XY.m128d_f64[1] = dStack_f0;
  dStack_c0 = auVar4._8_8_;
  local_a8.PtTransform.Translation.ZW.m128d_f64[1] = dStack_e0;
  dStack_d0 = auVar6._8_8_;
  local_a8.PtTransform.Scale3D.XY.m128d_f64[1] = dStack_d0;
  local_a8._151_1_ = uStack_b1;
  local_a8.ExpectedPointCount = 3;
  local_a8.bCheckLocation = true;
  local_a8.bCheckRotation = false;
  local_a8.bCheckScale = false;
  local_a8.PtTransform.Scale3D.ZW.m128d_f64[1] = dStack_c0;
  bVar7 = DuplicatePointTestBase::GenerateTestDataRunAndValidate
                    ((DuplicatePointTestBase *)this,&local_a8);
  return bVar7;
}

// GetBeautifiedTestName @ 149fd8660

FString * __thiscall
FPCGDuplicatePointTest_DirectionNegX::GetBeautifiedTestName
          (FPCGDuplicatePointTest_DirectionNegX *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.DuplicatePoint.DirectionNegX");
  return __return_storage_ptr__;
}

