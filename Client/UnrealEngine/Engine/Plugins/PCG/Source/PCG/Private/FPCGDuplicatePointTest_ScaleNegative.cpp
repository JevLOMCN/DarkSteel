// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd9a80

EAutomationTestFlags __thiscall
FPCGDuplicatePointTest_ScaleNegative::GetTestFlags(FPCGDuplicatePointTest_ScaleNegative *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd9a90

bool __thiscall
FPCGDuplicatePointTest_ScaleNegative::IsStressTest(FPCGDuplicatePointTest_ScaleNegative *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd9aa0

uint __thiscall
FPCGDuplicatePointTest_ScaleNegative::GetRequiredDeviceNum
          (FPCGDuplicatePointTest_ScaleNegative *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd9ab0

FString * __thiscall
FPCGDuplicatePointTest_ScaleNegative::GetTestSourceFileName
          (FPCGDuplicatePointTest_ScaleNegative *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDuplicatePointTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd9ae0

int __thiscall
FPCGDuplicatePointTest_ScaleNegative::GetTestSourceFileLine
          (FPCGDuplicatePointTest_ScaleNegative *this)

{
  return 0xfc;
}

// GetTests @ 149fd9af0

/* WARNING: Removing unreachable block (ram,0x000149fd9bdd) */
/* WARNING: Removing unreachable block (ram,0x000149fd9ca8) */

void __thiscall
FPCGDuplicatePointTest_ScaleNegative::GetTests
          (FPCGDuplicatePointTest_ScaleNegative *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.DuplicatePoint.ScaleNegative");
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

// RunTest @ 149fd9cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGDuplicatePointTest_ScaleNegative::RunTest
          (FPCGDuplicatePointTest_ScaleNegative *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  TQuat<double> *pTVar4;
  undefined4 uStack_174;
  undefined7 uStack_157;
  undefined1 uStack_e1;
  TQuat<double> local_d8;
  FTestParameters local_b8;
  
  dVar2 = _UNK_15061cbc8;
  dVar1 = ___xmm_3ff00000000000000000000000000000;
  pTVar4 = UE::Math::TRotator<double>::Quaternion
                     (&UE::Math::TRotator<double>::ZeroRotator,&local_d8);
  local_b8.PtTransform.Rotation.ZW.m128d_f64[0] = pTVar4->Z;
  local_b8.PtTransform.Rotation.ZW.m128d_f64[1] = pTVar4->W;
  local_b8.PtTransform.Rotation.XY.m128d_f64[0] = pTVar4->X;
  local_b8.PtTransform.Rotation.XY.m128d_f64[1] = pTVar4->Y;
  local_b8._4_4_ = uStack_174;
  local_b8.Iterations = 2;
  local_b8.Direction.field0_0x0._s_0.X = 0.0;
  local_b8._33_7_ = uStack_157;
  local_b8.IncludeSource = true;
  local_b8.Direction.field0_0x0._s_0.Y = dVar1;
  local_b8.Direction.field0_0x0._s_0.Z = dVar2;
  local_b8.PtTransform.Translation.XY.m128d_f64[0] =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8.PtTransform.Translation.XY.m128d_f64[1] =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8.PtTransform.Translation.ZW.m128d_f64[0] =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_b8.PtTransform.Translation.ZW.m128d_f64[1] = 0.0;
  local_b8.PtTransform.Scale3D.XY.m128d_f64[0] = ___xmm_bff0000000000000bff0000000000000;
  local_b8.PtTransform.Scale3D.XY.m128d_f64[1] = _UNK_15076c718;
  local_b8._151_1_ = uStack_e1;
  local_b8.ExpectedPointCount = 3;
  local_b8.bCheckLocation = false;
  local_b8.bCheckRotation = false;
  local_b8.bCheckScale = true;
  local_b8.PtTransform.Scale3D.ZW.m128d_f64[0] = ___xmm_0000000000000000bff0000000000000;
  local_b8.PtTransform.Scale3D.ZW.m128d_f64[1] = _UNK_15076ad98;
  bVar3 = DuplicatePointTestBase::GenerateTestDataRunAndValidate
                    ((DuplicatePointTestBase *)this,&local_b8);
  return bVar3;
}

// GetBeautifiedTestName @ 149fd9e20

FString * __thiscall
FPCGDuplicatePointTest_ScaleNegative::GetBeautifiedTestName
          (FPCGDuplicatePointTest_ScaleNegative *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.DuplicatePoint.ScaleNegative");
  return __return_storage_ptr__;
}

