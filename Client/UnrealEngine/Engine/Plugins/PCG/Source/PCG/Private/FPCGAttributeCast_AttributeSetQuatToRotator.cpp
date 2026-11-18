// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f771e0

EAutomationTestFlags __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::GetTestFlags
          (FPCGAttributeCast_AttributeSetQuatToRotator *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f771f0

bool __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::IsStressTest
          (FPCGAttributeCast_AttributeSetQuatToRotator *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f77200

uint __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::GetRequiredDeviceNum
          (FPCGAttributeCast_AttributeSetQuatToRotator *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f77210

FString * __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::GetTestSourceFileName
          (FPCGAttributeCast_AttributeSetQuatToRotator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f77240

int __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::GetTestSourceFileLine
          (FPCGAttributeCast_AttributeSetQuatToRotator *this)

{
  return 0x6b;
}

// GetTests @ 149f77250

/* WARNING: Removing unreachable block (ram,0x000149f7733d) */
/* WARNING: Removing unreachable block (ram,0x000149f77408) */

void __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::GetTests
          (FPCGAttributeCast_AttributeSetQuatToRotator *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.AttributeSetQuatToRotator");
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

// RunTest @ 149f77430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::RunTest
          (FPCGAttributeCast_AttributeSetQuatToRotator *this,FString *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  ForElementType<UE::Math::TRotator<double>_> FVar20;
  ForElementType<UE::Math::TQuat<double>_> FVar21;
  undefined1 auStackY_358 [32];
  undefined4 uStack_30c;
  undefined4 uStack_2fc;
  TArrayView<UE::Math::TRotator<double>_const_,int> local_2f8;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_2e8;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double>_u_0 local_2a8;
  double local_288;
  double dStack_280;
  double local_278;
  TRotator<double> TStack_270;
  TRotator<double> local_258;
  TRotator<double> TStack_240;
  ForElementType<UE::Math::TRotator<double>_> local_228;
  int local_1c0;
  int local_1bc;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  ForElementType<UE::Math::TQuat<double>_> local_138;
  int local_a8;
  int local_a4 [3];
  ulonglong local_98;
  
  dVar15 = UE::Math::TQuat<double>::Identity.W;
  dVar14 = UE::Math::TQuat<double>::Identity.Z;
  dVar13 = UE::Math::TQuat<double>::Identity.Y;
  dVar12 = UE::Math::TQuat<double>::Identity.X;
  dVar11 = _UNK_15201e908;
  dVar10 = ___xmm_bfd87de2a6aea9630000000000000000;
  dVar9 = _UNK_15201e898;
  dVar8 = ___xmm_3feee8dd4748bf163fd0907dc1930691;
  dVar7 = _UNK_15201e888;
  dVar6 = ___xmm_3fed906bcf328d450000000000000000;
  dVar5 = _UNK_15201e878;
  dVar4 = ___xmm_3fe6a09e667f3bce0000000000000000;
  dVar3 = _UNK_15201e848;
  dVar2 = ___xmm_0000000000000000bfe6a09e667f3bcd;
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_138.SecondaryData = (ForElementType<UE::Math::TQuat<double>_>)0x0;
  local_a8 = 4;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TQuat<double>_>_>
            (0x20,0x10,4,0,&local_138,4,local_a4);
  local_1b8 = dVar12;
  dStack_1b0 = dVar13;
  local_1a8 = dVar14;
  dStack_1a0 = dVar15;
  FVar21 = (ForElementType<UE::Math::TQuat<double>_>)&local_138;
  if (local_138.SecondaryData != (ForElementType<UE::Math::TQuat<double>_>)0x0) {
    FVar21 = local_138.SecondaryData;
  }
  local_198 = dVar2;
  dStack_190 = dVar3;
  local_188 = dVar4;
  dStack_180 = dVar5;
  local_178 = dVar10;
  dStack_170 = dVar11;
  local_168 = dVar6;
  dStack_160 = dVar7;
  *(double *)FVar21 = dVar12;
  *(double *)((longlong)FVar21 + 8) = dVar13;
  *(double *)((longlong)FVar21 + 0x10) = dVar14;
  *(double *)((longlong)FVar21 + 0x18) = dVar15;
  *(double *)((longlong)FVar21 + 0x20) = dVar2;
  *(double *)((longlong)FVar21 + 0x28) = dVar3;
  *(double *)((longlong)FVar21 + 0x30) = dVar4;
  *(double *)((longlong)FVar21 + 0x38) = dVar5;
  *(double *)((longlong)FVar21 + 0x40) = dVar10;
  *(double *)((longlong)FVar21 + 0x48) = dVar11;
  *(double *)((longlong)FVar21 + 0x50) = dVar6;
  *(double *)((longlong)FVar21 + 0x58) = dVar7;
  *(double *)((longlong)FVar21 + 0x60) = 0.0;
  *(double *)((longlong)FVar21 + 0x68) = 0.0;
  *(double *)((longlong)FVar21 + 0x70) = dVar8;
  *(double *)((longlong)FVar21 + 0x78) = dVar9;
  local_158 = 0;
  uStack_150 = 0;
  local_288 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_280 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_278 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_2d8._s_0.Z = 0.0;
  local_148 = dVar8;
  dStack_140 = dVar9;
  local_2d8._s_0.X = ___xmm_00000000000000004056800000000000;
  local_2d8._s_0.Y = _UNK_150b45b78;
  UE::Math::TRotator<double>::MakeFromEuler(&TStack_270,(TVector<double> *)&local_2d8._s_0);
  local_2c0._s_0.Z = 0.0;
  local_2c0._s_0.X = ___xmm_40468000000000000000000000000000;
  local_2c0._s_0.Y = _UNK_151ba6428;
  UE::Math::TRotator<double>::MakeFromEuler(&local_258,(TVector<double> *)&local_2c0._s_0);
  local_2a8._s_0.X = 0.0;
  local_2a8._s_0.Y = 0.0;
  local_2a8._s_0.Z = __real_403e000000000000;
  UE::Math::TRotator<double>::MakeFromEuler(&TStack_240,(TVector<double> *)&local_2a8._s_0);
  local_228.SecondaryData = (ForElementType<UE::Math::TRotator<double>_>)0x0;
  local_1c0 = 4;
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TRotator<double>_>_>
            (0x18,8,4,0,&local_228,4,&local_1bc);
  FVar20 = (ForElementType<UE::Math::TRotator<double>_>)&local_228;
  if (local_228.SecondaryData != (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    FVar20 = local_228.SecondaryData;
  }
  *(double *)FVar20 = local_288;
  *(double *)((longlong)FVar20 + 8) = dStack_280;
  *(double *)((longlong)FVar20 + 0x10) = local_278;
  *(double *)((longlong)FVar20 + 0x18) = TStack_270.Pitch;
  *(double *)((longlong)FVar20 + 0x20) = TStack_270.Yaw;
  *(double *)((longlong)FVar20 + 0x28) = TStack_270.Roll;
  *(double *)((longlong)FVar20 + 0x30) = local_258.Pitch;
  *(double *)((longlong)FVar20 + 0x38) = local_258.Yaw;
  *(double *)((longlong)FVar20 + 0x40) = local_258.Roll;
  *(double *)((longlong)FVar20 + 0x48) = TStack_240.Pitch;
  *(double *)((longlong)FVar20 + 0x50) = TStack_240.Yaw;
  *(double *)((longlong)FVar20 + 0x58) = TStack_240.Roll;
  iVar16 = local_1c0;
  FVar20 = (ForElementType<UE::Math::TRotator<double>_>)&local_228;
  if (local_228.SecondaryData != (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    FVar20 = local_228.SecondaryData;
  }
  if (local_1c0 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      uVar19 = (*pcVar1)();
      return (bool)uVar19;
    }
  }
  iVar17 = local_a8;
  FVar21 = (ForElementType<UE::Math::TQuat<double>_>)&local_138;
  if (local_138.SecondaryData != (ForElementType<UE::Math::TQuat<double>_>)0x0) {
    FVar21 = local_138.SecondaryData;
  }
  if (local_a8 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      uVar19 = (*pcVar1)();
      return (bool)uVar19;
    }
  }
  local_2f8._12_4_ = uStack_30c;
  local_2f8.ArrayNum = iVar16;
  local_2e8._12_4_ = uStack_2fc;
  local_2e8.ArrayNum = iVar17;
  local_2f8.DataPtr = (TRotator<double> *)FVar20;
  local_2e8.DataPtr = (TQuat<double> *)FVar21;
  bVar18 = FPCGAttributeCastTestBase::
           RunTestInternal<UE::Math::TQuat<double>,UE::Math::TRotator<double>,UPCGParamData>
                     ((FPCGAttributeCastTestBase *)this,&local_2e8,&local_2f8);
  if (local_228.SecondaryData != (ForElementType<UE::Math::TRotator<double>_>)0x0) {
    FMemory::Free((void *)local_228.SecondaryData);
  }
  if (local_138.SecondaryData != (ForElementType<UE::Math::TQuat<double>_>)0x0) {
    FMemory::Free((void *)local_138.SecondaryData);
  }
  return bVar18;
}

// GetBeautifiedTestName @ 149f777d0

FString * __thiscall
FPCGAttributeCast_AttributeSetQuatToRotator::GetBeautifiedTestName
          (FPCGAttributeCast_AttributeSetQuatToRotator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.AttributeSetQuatToRotator");
  return __return_storage_ptr__;
}

