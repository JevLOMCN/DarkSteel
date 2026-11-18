// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd7230

EAutomationTestFlags __thiscall
FPCGParseStringTests_Transform::GetTestFlags(FPCGParseStringTests_Transform *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd7240

bool __thiscall FPCGParseStringTests_Transform::IsStressTest(FPCGParseStringTests_Transform *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd7250

uint __thiscall
FPCGParseStringTests_Transform::GetRequiredDeviceNum(FPCGParseStringTests_Transform *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd7260

FString * __thiscall
FPCGParseStringTests_Transform::GetTestSourceFileName
          (FPCGParseStringTests_Transform *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd7290

int __thiscall
FPCGParseStringTests_Transform::GetTestSourceFileLine(FPCGParseStringTests_Transform *this)

{
  return 0x4d;
}

// GetTests @ 149fd72a0

/* WARNING: Removing unreachable block (ram,0x000149fd738d) */
/* WARNING: Removing unreachable block (ram,0x000149fd7458) */

void __thiscall
FPCGParseStringTests_Transform::GetTests
          (FPCGParseStringTests_Transform *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Transform");
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

// RunTest @ 149fd7480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGParseStringTests_Transform::RunTest(FPCGParseStringTests_Transform *this,FString *param_1)

{
  void *pvVar1;
  bool bVar2;
  TQuat<double> *pTVar3;
  TTransform<double> *pTVar4;
  longlong lVar5;
  undefined1 auStack_1e8 [32];
  TArrayView<UE::Math::TTransform<double>_const_,int> local_1c8;
  TArrayView<FString_const_,int> local_1b8;
  TRotator<double> local_1a8;
  TQuat<double> local_188;
  FString local_168;
  FString local_158;
  FString local_148;
  TTransform<double> local_138;
  double local_d8 [2];
  double local_c8 [2];
  double local_b8 [2];
  double local_a8 [2];
  double local_98 [2];
  double local_88 [2];
  double local_78 [2];
  double local_68 [2];
  double local_58 [2];
  double local_48 [2];
  double local_38 [2];
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_1a8.Pitch = ___xmm_40468000000000004046800000000000;
  local_1a8.Yaw = _UNK_150b45bc8;
  local_1a8.Roll = __real_4047000000000000;
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_1a8,&local_188);
  lVar5 = 3;
  local_138.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
  local_138.Rotation.ZW.m128d_f64[1] = pTVar3->W;
  local_138.Rotation.XY.m128d_f64[0] = pTVar3->X;
  local_138.Rotation.XY.m128d_f64[1] = pTVar3->Y;
  local_1c8.DataPtr = &local_138;
  local_138.Translation.XY.m128d_f64[0] = ___xmm_40000000000000003ff0000000000000;
  local_138.Translation.XY.m128d_f64[1] = _UNK_150744178;
  local_138.Translation.ZW.m128d_f64[0] = ___xmm_00000000000000004008000000000000;
  local_138.Translation.ZW.m128d_f64[1] = _UNK_15076acf8;
  local_138.Scale3D.XY.m128d_f64[0] = ___xmm_40040000000000003ff8000000000000;
  local_138.Scale3D.XY.m128d_f64[1] = _UNK_15202fef8;
  local_138.Scale3D.ZW.m128d_f64[0] = ___xmm_0000000000000000400c000000000000;
  local_138.Scale3D.ZW.m128d_f64[1] = _UNK_15202fce8;
  local_98[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_98[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_88[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_88[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_38[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_38[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_28[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_28[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_78[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_78[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_68[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_68[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_58[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_58[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_48[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_48[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_1c8.ArrayNum = 3;
  ::FString::FString(&local_168,"1.0,2.0,3.0|45.0,45.0,46.0|1.5,2.5,3.5");
  ::FString::FString(&local_158,"Bla");
  ::FString::FString(&local_148,"1.0;2.0;3.0|45.0;45.0;46.0|1.5;2.5;3.5");
  local_1b8.DataPtr = &local_168;
  local_1b8.ArrayNum = 3;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<UE::Math::TTransform<double>_>
                    ((FPCGParseStringTestsBase *)this,&local_1b8,&local_1c8);
  pTVar4 = &local_138;
  do {
    pvVar1 = (void *)pTVar4[-1].Scale3D.ZW.m128d_f64[0];
    pTVar4 = (TTransform<double> *)&pTVar4[-1].Scale3D.ZW;
    lVar5 = lVar5 + -1;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
  } while (lVar5 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149fd7660

FString * __thiscall
FPCGParseStringTests_Transform::GetBeautifiedTestName
          (FPCGParseStringTests_Transform *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Transform");
  return __return_storage_ptr__;
}

