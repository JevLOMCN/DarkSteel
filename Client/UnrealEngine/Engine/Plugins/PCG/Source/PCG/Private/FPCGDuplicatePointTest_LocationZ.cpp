// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fdbaf0

EAutomationTestFlags __thiscall
FPCGDuplicatePointTest_LocationZ::GetTestFlags(FPCGDuplicatePointTest_LocationZ *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fdbb00

bool __thiscall
FPCGDuplicatePointTest_LocationZ::IsStressTest(FPCGDuplicatePointTest_LocationZ *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fdbb10

uint __thiscall
FPCGDuplicatePointTest_LocationZ::GetRequiredDeviceNum(FPCGDuplicatePointTest_LocationZ *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fdbb20

FString * __thiscall
FPCGDuplicatePointTest_LocationZ::GetTestSourceFileName
          (FPCGDuplicatePointTest_LocationZ *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGDuplicatePointTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fdbb50

int __thiscall
FPCGDuplicatePointTest_LocationZ::GetTestSourceFileLine(FPCGDuplicatePointTest_LocationZ *this)

{
  return 0x144;
}

// GetTests @ 149fdbb60

/* WARNING: Removing unreachable block (ram,0x000149fdbc4d) */
/* WARNING: Removing unreachable block (ram,0x000149fdbd18) */

void __thiscall
FPCGDuplicatePointTest_LocationZ::GetTests
          (FPCGDuplicatePointTest_LocationZ *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.DuplicatePoint.LocationZ");
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

// RunTest @ 149fdbd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGDuplicatePointTest_LocationZ::RunTest(FPCGDuplicatePointTest_LocationZ *this,FString *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TQuat<double> *pTVar7;
  undefined4 uStack_194;
  undefined7 uStack_177;
  undefined1 uStack_101;
  TQuat<double> local_f8;
  FTestParameters local_d8;
  
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dVar2 = _UNK_15061cbc8;
  dVar1 = ___xmm_3ff00000000000000000000000000000;
  pTVar7 = UE::Math::TRotator<double>::Quaternion
                     (&UE::Math::TRotator<double>::ZeroRotator,&local_f8);
  local_d8.PtTransform.Rotation.ZW.m128d_f64[0] = pTVar7->Z;
  local_d8.PtTransform.Rotation.ZW.m128d_f64[1] = pTVar7->W;
  local_d8.PtTransform.Rotation.XY.m128d_f64[0] = pTVar7->X;
  local_d8.PtTransform.Rotation.XY.m128d_f64[1] = pTVar7->Y;
  local_d8._4_4_ = uStack_194;
  local_d8.Iterations = 2;
  local_d8.Direction.field0_0x0._s_0.X = 0.0;
  local_d8._33_7_ = uStack_177;
  local_d8.IncludeSource = true;
  local_d8.Direction.field0_0x0._s_0.Y = dVar1;
  local_d8.Direction.field0_0x0._s_0.Z = dVar2;
  local_d8.PtTransform.Translation.XY.m128d_f64[0] = 0.0;
  local_d8.PtTransform.Translation.XY.m128d_f64[1] = 0.0;
  local_d8.PtTransform.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004014000000000000;
  local_d8.PtTransform.Translation.ZW.m128d_f64[1] = _UNK_150925018;
  local_d8.PtTransform.Scale3D.XY.m128d_f64[0] = (double)uVar3;
  local_d8.PtTransform.Scale3D.XY.m128d_f64[1] = (double)uVar4;
  local_d8._151_1_ = uStack_101;
  local_d8.ExpectedPointCount = 3;
  local_d8.bCheckLocation = true;
  local_d8.bCheckRotation = false;
  local_d8.bCheckScale = false;
  local_d8.PtTransform.Scale3D.ZW.m128d_f64[0] = (double)uVar5;
  local_d8.PtTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
  bVar6 = DuplicatePointTestBase::GenerateTestDataRunAndValidate
                    ((DuplicatePointTestBase *)this,&local_d8);
  return bVar6;
}

// GetBeautifiedTestName @ 149fdbec0

FString * __thiscall
FPCGDuplicatePointTest_LocationZ::GetBeautifiedTestName
          (FPCGDuplicatePointTest_LocationZ *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.DuplicatePoint.LocationZ");
  return __return_storage_ptr__;
}

