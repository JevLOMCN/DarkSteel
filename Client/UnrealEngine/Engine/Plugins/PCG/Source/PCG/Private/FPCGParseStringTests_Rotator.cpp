// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd6940

EAutomationTestFlags __thiscall
FPCGParseStringTests_Rotator::GetTestFlags(FPCGParseStringTests_Rotator *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd6950

bool __thiscall FPCGParseStringTests_Rotator::IsStressTest(FPCGParseStringTests_Rotator *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd6960

uint __thiscall
FPCGParseStringTests_Rotator::GetRequiredDeviceNum(FPCGParseStringTests_Rotator *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd6970

FString * __thiscall
FPCGParseStringTests_Rotator::GetTestSourceFileName
          (FPCGParseStringTests_Rotator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd69a0

int __thiscall
FPCGParseStringTests_Rotator::GetTestSourceFileLine(FPCGParseStringTests_Rotator *this)

{
  return 0x4b;
}

// GetTests @ 149fd69b0

/* WARNING: Removing unreachable block (ram,0x000149fd6a9d) */
/* WARNING: Removing unreachable block (ram,0x000149fd6b68) */

void __thiscall
FPCGParseStringTests_Rotator::GetTests
          (FPCGParseStringTests_Rotator *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Rotator");
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

// RunTest @ 149fd6b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGParseStringTests_Rotator::RunTest(FPCGParseStringTests_Rotator *this,FString *param_1)

{
  TRotator<double> *pTVar1;
  bool bVar2;
  TRotator<double> *pTVar3;
  longlong lVar4;
  undefined1 auStack_178 [32];
  TArrayView<UE::Math::TRotator<double>_const_,int> local_158;
  TArrayView<FString_const_,int> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TRotator<double> local_c8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.DataPtr = &local_c8;
  local_c8.Pitch = ___xmm_4028cccccccccccd4034800000000000;
  local_c8.Yaw = _UNK_15202fff8;
  lVar4 = 7;
  local_a8 = ___xmm_405059999999999a4049a66666666666;
  uStack_a0 = _UNK_1520300a8;
  local_c8.Roll = ___xmm_402466666666666640091eb851eb851f;
  uStack_b0 = _UNK_15202ffe8;
  local_88 = ___xmm_404b59999999999a4056400000000000;
  uStack_80 = _UNK_152030098;
  local_78 = ___xmm_40564000000000004055c00000000000;
  uStack_70 = _UNK_1520300c8;
  local_58 = __real_4056400000000000;
  local_40 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_28 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_98 = ___xmm_4055c00000000000404b59999999999a;
  uStack_90 = _UNK_1520300b8;
  local_68 = ___xmm_4055c00000000000404b59999999999a;
  uStack_60 = _UNK_1520300b8;
  local_50 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_48 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_158.ArrayNum = 7;
  local_38 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_30 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  ::FString::FString(&local_138,"20.5,12.4,3.14");
  ::FString::FString(&local_128,"10.2,     51.3,    65.4");
  ::FString::FString(&local_118,"P=54.7 Y=87 R=89");
  ::FString::FString(&local_108,"Pitch=54.7 Yaw=87 Roll=89");
  ::FString::FString(&local_f8,"P=54.7     Y=87      R=89");
  ::FString::FString(&local_e8,"Bla");
  ::FString::FString(&local_d8,"25.1;21.4;98.3");
  local_148.DataPtr = &local_138;
  local_148.ArrayNum = 7;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<UE::Math::TRotator<double>_>
                    ((FPCGParseStringTestsBase *)this,&local_148,&local_158);
  pTVar3 = &local_c8;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = (TRotator<double> *)&pTVar3[-1].Yaw;
    lVar4 = lVar4 + -1;
    if ((void *)pTVar1->Yaw != (void *)0x0) {
      FMemory::Free((void *)pTVar1->Yaw);
    }
  } while (lVar4 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149fd6d50

FString * __thiscall
FPCGParseStringTests_Rotator::GetBeautifiedTestName
          (FPCGParseStringTests_Rotator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Rotator");
  return __return_storage_ptr__;
}

