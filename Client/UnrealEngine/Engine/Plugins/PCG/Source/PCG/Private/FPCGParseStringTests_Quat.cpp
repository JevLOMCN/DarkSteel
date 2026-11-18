// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd6dc0

EAutomationTestFlags __thiscall
FPCGParseStringTests_Quat::GetTestFlags(FPCGParseStringTests_Quat *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd6dd0

bool __thiscall FPCGParseStringTests_Quat::IsStressTest(FPCGParseStringTests_Quat *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd6de0

uint __thiscall FPCGParseStringTests_Quat::GetRequiredDeviceNum(FPCGParseStringTests_Quat *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd6df0

FString * __thiscall
FPCGParseStringTests_Quat::GetTestSourceFileName
          (FPCGParseStringTests_Quat *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd6e20

int __thiscall FPCGParseStringTests_Quat::GetTestSourceFileLine(FPCGParseStringTests_Quat *this)

{
  return 0x4c;
}

// GetTests @ 149fd6e30

/* WARNING: Removing unreachable block (ram,0x000149fd6f1d) */
/* WARNING: Removing unreachable block (ram,0x000149fd6fe8) */

void __thiscall
FPCGParseStringTests_Quat::GetTests
          (FPCGParseStringTests_Quat *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Quat");
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

// RunTest @ 149fd7010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FPCGParseStringTests_Quat::RunTest(FPCGParseStringTests_Quat *this,FString *param_1)

{
  TQuat<double> *pTVar1;
  bool bVar2;
  TQuat<double> *pTVar3;
  longlong lVar4;
  undefined1 auStack_178 [32];
  TArrayView<UE::Math::TQuat<double>_const_,int> local_158;
  TArrayView<FString_const_,int> local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TQuat<double> local_d8;
  undefined8 local_b8;
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
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158.DataPtr = &local_d8;
  local_d8.X = ___xmm_3fc999999999999a3fb999999999999a;
  local_d8.Y = _UNK_15076b6f8;
  lVar4 = 6;
  local_b8 = ___xmm_40000000000000003ff0000000000000;
  uStack_b0 = _UNK_150744178;
  local_d8.Z = ___xmm_3fd999999999999a3fd3333333333333;
  local_d8.W = _UNK_15202fe78;
  local_98 = ___xmm_3fe66666666666663fe0000000000000;
  uStack_90 = _UNK_15202fea8;
  local_a8 = ___xmm_40100000000000004008000000000000;
  uStack_a0 = _UNK_15076bb88;
  local_78 = ___xmm_40106666666666664020000000000000;
  uStack_70 = _UNK_15202ff28;
  local_88 = ___xmm_40186666666666664012000000000000;
  uStack_80 = _UNK_15202ff68;
  local_48 = UE::Math::TQuat<double>::Identity.Z;
  dStack_40 = UE::Math::TQuat<double>::Identity.W;
  local_28 = UE::Math::TQuat<double>::Identity.Z;
  dStack_20 = UE::Math::TQuat<double>::Identity.W;
  local_68 = ___xmm_401d3333333333334022cccccccccccd;
  uStack_60 = _UNK_15202ff98;
  local_58 = UE::Math::TQuat<double>::Identity.X;
  dStack_50 = UE::Math::TQuat<double>::Identity.Y;
  local_38 = UE::Math::TQuat<double>::Identity.X;
  dStack_30 = UE::Math::TQuat<double>::Identity.Y;
  local_158.ArrayNum = 6;
  ::FString::FString(&local_138,"0.1,0.2,0.3,0.4");
  ::FString::FString(&local_128,"1.0,   2.0,    3.0,    4.0");
  ::FString::FString(&local_118,"X=0.5 Y=0.7 Z=4.5 W=6.1");
  ::FString::FString(&local_108,"X=8.0,            Y=4.1,         Z=9.4,     W=7.3");
  ::FString::FString(&local_f8,"Bla");
  ::FString::FString(&local_e8,"0.1;0.2;0.3;0.4");
  local_148.DataPtr = &local_138;
  local_148.ArrayNum = 6;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<UE::Math::TQuat<double>_>
                    ((FPCGParseStringTestsBase *)this,&local_148,&local_158);
  pTVar3 = &local_d8;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = (TQuat<double> *)&pTVar3[-1].Z;
    lVar4 = lVar4 + -1;
    if ((void *)pTVar1->Z != (void *)0x0) {
      FMemory::Free((void *)pTVar1->Z);
    }
  } while (lVar4 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149fd71c0

FString * __thiscall
FPCGParseStringTests_Quat::GetBeautifiedTestName
          (FPCGParseStringTests_Quat *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Quat");
  return __return_storage_ptr__;
}

