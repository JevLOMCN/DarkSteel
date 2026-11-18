// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 8

// GetTestFlags @ 14ea31a40

EAutomationTestFlags __thiscall
FImgMediaLoaderUtilsTests::GetTestFlags(FImgMediaLoaderUtilsTests *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14ea31a50

bool __thiscall FImgMediaLoaderUtilsTests::IsStressTest(FImgMediaLoaderUtilsTests *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14ea31a60

uint __thiscall FImgMediaLoaderUtilsTests::GetRequiredDeviceNum(FImgMediaLoaderUtilsTests *this)

{
  return 1;
}

// GetTestSourceFileName @ 14ea31a70

FString * __thiscall
FImgMediaLoaderUtilsTests::GetTestSourceFileName
          (FImgMediaLoaderUtilsTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\ImgMedia\\Source\\ImgMedia\\Private\\Tests\\ImgMediaTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14ea31aa0

int __thiscall FImgMediaLoaderUtilsTests::GetTestSourceFileLine(FImgMediaLoaderUtilsTests *this)

{
  return 0x5e;
}

// GetTests @ 14ea31ab0

/* WARNING: Removing unreachable block (ram,0x00014ea31b9d) */
/* WARNING: Removing unreachable block (ram,0x00014ea31c68) */

void __thiscall
FImgMediaLoaderUtilsTests::GetTests
          (FImgMediaLoaderUtilsTests *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Plugins.ImgMedia.LoaderUtils");
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

// RunTest @ 14ea31c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FImgMediaLoaderUtilsTests::RunTest(FImgMediaLoaderUtilsTests *this,FString *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStackY_188 [32];
  undefined1 local_148 [8];
  FAutomationTestBase *local_140;
  ForAnyElementType local_138;
  uint local_130;
  int local_12c;
  uint local_128;
  uint local_124;
  longlong local_120;
  longlong local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  FScriptContainerElement *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8 [5];
  ulonglong local_78;
  
  uVar9 = _UNK_152fec548;
  uVar8 = ___xmm_000003e900007530000003e90000ea60;
  uVar7 = _UNK_152fec538;
  uVar6 = ___xmm_000000010000003c000003e900005dc0;
  uVar5 = _UNK_152fec528;
  uVar4 = ___xmm_0000000100000032000000010000001e;
  uVar3 = _UNK_152fec518;
  uVar2 = ___xmm_00000001000000180000000100000019;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_138.Data = (FScriptContainerElement *)0x0;
  local_130 = 8;
  local_140 = (FAutomationTestBase *)this;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,8,0,&local_138,8,&local_12c);
  *(undefined8 *)local_138.Data = uVar8;
  *(undefined8 *)(local_138.Data + 8) = uVar9;
  *(undefined8 *)(local_138.Data + 0x10) = uVar6;
  *(undefined8 *)(local_138.Data + 0x18) = uVar7;
  *(undefined8 *)(local_138.Data + 0x20) = uVar4;
  *(undefined8 *)(local_138.Data + 0x28) = uVar5;
  *(undefined8 *)(local_138.Data + 0x30) = uVar2;
  *(undefined8 *)(local_138.Data + 0x38) = uVar3;
  uVar14 = (ulonglong)(int)local_130;
  local_124 = local_130;
  local_100 = local_138.Data + uVar14 * 8;
  uVar15 = uVar14;
  FVar16.Data = local_138.Data;
  while( true ) {
    pFVar11 = local_100;
    local_110 = FVar16.Data;
    if ((int)uVar14 != (int)uVar15) {
      `TCheckedPointerIterator<FFrameRate,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_148);
    }
    if (FVar16.Data == pFVar11) break;
    lVar17 = (longlong)(int)*(undefined8 *)FVar16.Data;
    lVar20 = 0;
    local_118 = 0;
    lVar18 = (longlong)(int)((ulonglong)*(undefined8 *)FVar16.Data >> 0x20) * 10000000;
    uVar19 = 0;
    do {
      lVar13 = lVar20 / lVar17;
      if ((uint)((lVar17 * lVar13) / lVar18) != uVar19) {
        lVar13 = (lVar20 + -1 + lVar17) / lVar17;
      }
      lVar13 = (lVar17 * lVar13) / lVar18;
      pcVar1 = *(code **)(local_140->_padding_ + 0x30);
      ::FString::PrintfImpl
                (&local_f8,
                 L"FImgMediaLoaderUtilsTests: Frame Start Time %lld conversion at %f not reversible: Frame %i != %i"
                );
      (*pcVar1)(local_140,(uint)lVar13 == uVar19,&local_f8,0);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      pcVar1 = *(code **)(local_140->_padding_ + 0x30);
      ::FString::PrintfImpl
                (&local_e8,
                 L"FImgMediaLoaderUtilsTests: Unbound Frame Start Time %lld conversion at %f not reversible: Frame %i != %lld"
                );
      lVar10 = local_118;
      this = (FImgMediaLoaderUtilsTests *)local_140;
      (*pcVar1)(local_140,lVar13 == local_118,&local_e8,0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_108 = lVar10 + 1;
      local_128 = uVar19 + 1;
      lVar13 = (local_108 * lVar18) / lVar17;
      if ((uint)((lVar13 * lVar17) / lVar18) != local_128) {
        lVar13 = (lVar17 + -1 + local_108 * lVar18) / lVar17;
      }
      pcVar1 = *(code **)(((FAutomationTestBase *)this)->_padding_ + 0x30);
      local_120 = ((lVar13 + -1) * lVar17) / lVar18;
      ::FString::PrintfImpl
                (&local_d8,
                 L"FImgMediaLoaderUtilsTests: Frame End Time %lld conversion at %f not reversible: Frame %i != %i"
                );
      (*pcVar1)(this,(uint)local_120 == uVar19,&local_d8,0);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      pcVar1 = *(code **)(((FAutomationTestBase *)this)->_padding_ + 0x30);
      ::FString::PrintfImpl
                (local_c8,
                 L"FImgMediaLoaderUtilsTests: Unbound Frame End Time %lld conversion at %f not reversible: Frame %i != %lld"
                );
      (*pcVar1)(this,local_120 == local_118,local_c8,0);
      if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
      }
      lVar20 = lVar20 + lVar18;
      local_118 = local_108;
      uVar19 = local_128;
    } while (local_128 < 100);
    uVar14 = (ulonglong)local_130;
    FVar16.Data = local_110 + 8;
    uVar15 = (ulonglong)local_124;
  }
  bVar12 = FAutomationTestBase::HasAnyErrors((FAutomationTestBase *)this);
  if (local_138.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data);
  }
  return !bVar12;
}

// GetBeautifiedTestName @ 14ea32050

FString * __thiscall
FImgMediaLoaderUtilsTests::GetBeautifiedTestName
          (FImgMediaLoaderUtilsTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Plugins.ImgMedia.LoaderUtils");
  return __return_storage_ptr__;
}

