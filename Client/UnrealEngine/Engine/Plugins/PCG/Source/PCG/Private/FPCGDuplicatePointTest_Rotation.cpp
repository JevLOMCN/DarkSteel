// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd9e90

EAutomationTestFlags __thiscall
FPCGDuplicatePointTest_Rotation::GetTestFlags(FPCGDuplicatePointTest_Rotation *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd9ea0

bool __thiscall FPCGDuplicatePointTest_Rotation::IsStressTest(FPCGDuplicatePointTest_Rotation *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd9eb0

uint __thiscall
FPCGDuplicatePointTest_Rotation::GetRequiredDeviceNum(FPCGDuplicatePointTest_Rotation *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd9ec0

FString * __thiscall
FPCGDuplicatePointTest_Rotation::GetTestSourceFileName
          (FPCGDuplicatePointTest_Rotation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDuplicatePointTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd9ef0

int __thiscall
FPCGDuplicatePointTest_Rotation::GetTestSourceFileLine(FPCGDuplicatePointTest_Rotation *this)

{
  return 0x10e;
}

// GetTests @ 149fd9f00

/* WARNING: Removing unreachable block (ram,0x000149fd9fed) */
/* WARNING: Removing unreachable block (ram,0x000149fda0b8) */

void __thiscall
FPCGDuplicatePointTest_Rotation::GetTests
          (FPCGDuplicatePointTest_Rotation *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.DuplicatePoint.Rotation");
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

// RunTest @ 149fda0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGDuplicatePointTest_Rotation::RunTest(FPCGDuplicatePointTest_Rotation *this,FString *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  TQuat<double> *pTVar5;
  TRotator<double> local_1b8;
  int local_198;
  undefined4 uStack_194;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  bool local_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined2 uStack_104;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined8 uStack_100;
  TQuat<double> local_f8;
  FTestParameters local_d8;
  
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_198 = 2;
  dStack_188 = ___xmm_3ff00000000000000000000000000000;
  dStack_180 = _UNK_15061cbc8;
  local_1b8.Pitch = ___xmm_00000000000000004034000000000000;
  local_1b8.Yaw = _UNK_151444f48;
  local_178 = true;
  dStack_190 = 0.0;
  local_1b8.Roll = 0.0;
  pTVar5 = UE::Math::TRotator<double>::Quaternion(&local_1b8,&local_f8);
  local_108 = 3;
  uStack_104 = 0x100;
  uStack_102 = 0;
  local_158 = pTVar5->Z;
  dStack_150 = pTVar5->W;
  local_168 = pTVar5->X;
  dStack_160 = pTVar5->Y;
  local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_130 = 0;
  local_128 = (double)uVar1;
  dStack_120 = (double)uVar2;
  local_118 = (double)uVar3;
  uStack_110 = 0;
  local_d8._4_4_ = uStack_194;
  local_d8.Iterations = local_198;
  local_d8.Direction.field0_0x0._s_0.X = dStack_190;
  local_d8._33_7_ = uStack_177;
  local_d8.IncludeSource = local_178;
  local_d8.Direction.field0_0x0._s_0.Y = dStack_188;
  local_d8.Direction.field0_0x0._s_0.Z = dStack_180;
  local_d8._40_8_ = uStack_170;
  local_d8.PtTransform.Translation.XY.m128d_f64[0] =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_d8.PtTransform.Translation.XY.m128d_f64[1] =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8.PtTransform.Translation.ZW.m128d_f64[0] =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_d8.PtTransform.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.PtTransform.Scale3D.XY.m128d_f64[0] = (double)uVar1;
  local_d8.PtTransform.Scale3D.XY.m128d_f64[1] = (double)uVar2;
  local_d8._151_1_ = uStack_101;
  local_d8.ExpectedPointCount = 3;
  local_d8.bCheckLocation = false;
  local_d8.bCheckRotation = true;
  local_d8.bCheckScale = false;
  local_d8.PtTransform.Scale3D.ZW.m128d_f64[0] = (double)uVar3;
  local_d8.PtTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_d8._152_8_ = uStack_100;
  local_d8.PtTransform.Rotation.XY.m128d_f64[0] = local_168;
  local_d8.PtTransform.Rotation.XY.m128d_f64[1] = dStack_160;
  local_d8.PtTransform.Rotation.ZW.m128d_f64[0] = local_158;
  local_d8.PtTransform.Rotation.ZW.m128d_f64[1] = dStack_150;
  bVar4 = DuplicatePointTestBase::GenerateTestDataRunAndValidate
                    ((DuplicatePointTestBase *)this,&local_d8);
  return bVar4;
}

// GetBeautifiedTestName @ 149fda260

FString * __thiscall
FPCGDuplicatePointTest_Rotation::GetBeautifiedTestName
          (FPCGDuplicatePointTest_Rotation *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.DuplicatePoint.Rotation");
  return __return_storage_ptr__;
}

