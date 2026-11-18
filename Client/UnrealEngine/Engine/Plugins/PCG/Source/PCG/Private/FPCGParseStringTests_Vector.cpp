// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd6030

EAutomationTestFlags __thiscall
FPCGParseStringTests_Vector::GetTestFlags(FPCGParseStringTests_Vector *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd6040

bool __thiscall FPCGParseStringTests_Vector::IsStressTest(FPCGParseStringTests_Vector *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd6050

uint __thiscall FPCGParseStringTests_Vector::GetRequiredDeviceNum(FPCGParseStringTests_Vector *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd60a0

FString * __thiscall
FPCGParseStringTests_Vector::GetTestSourceFileName
          (FPCGParseStringTests_Vector *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd60d0

int __thiscall FPCGParseStringTests_Vector::GetTestSourceFileLine(FPCGParseStringTests_Vector *this)

{
  return 0x49;
}

// GetTests @ 149fd60e0

/* WARNING: Removing unreachable block (ram,0x000149fd61cd) */
/* WARNING: Removing unreachable block (ram,0x000149fd6298) */

void __thiscall
FPCGParseStringTests_Vector::GetTests
          (FPCGParseStringTests_Vector *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Vector");
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

// RunTest @ 149fd62c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGParseStringTests_Vector::RunTest(FPCGParseStringTests_Vector *this,FString *param_1)

{
  TVector<double>_u_0 *pTVar1;
  bool bVar2;
  TVector<double>_u_0 *pTVar3;
  longlong lVar4;
  undefined1 auStack_148 [32];
  TArrayView<UE::Math::TVector<double>_const_,int> local_128;
  TArrayView<FString_const_,int> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_128.DataPtr = (TVector<double> *)&local_a8;
  lVar4 = 6;
  local_a8._s_0.X = ___xmm_3fc999999999999a3fb999999999999a;
  local_a8._s_0.Y = _UNK_15076b6f8;
  local_88 = __xmm_40080000000000004000000000000000;
  uStack_80 = DAT_15076bae8;
  local_a8._s_0.Z = ___xmm_3ff00000000000003fd3333333333333;
  uStack_90 = _UNK_15202feb8;
  local_68 = ___xmm_40200000000000004012000000000000;
  uStack_60 = _UNK_15202ffa8;
  local_78 = ___xmm_3fe66666666666663fe0000000000000;
  uStack_70 = _UNK_15202fea8;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_58 = ___xmm_4022cccccccccccd4010666666666666;
  uStack_50 = _UNK_15202ffd8;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_128.ArrayNum = 6;
  ::FString::FString(&local_108,"0.1,0.2,0.3");
  ::FString::FString(&local_f8,"1.0,   2.0,    3.0");
  ::FString::FString(&local_e8,"X=0.5 Y=0.7 Z=4.5");
  ::FString::FString(&local_d8,"X=8.0,            Y=4.1,         Z=9.4");
  ::FString::FString(&local_c8,"Bla");
  ::FString::FString(&local_b8,"0.1;0.2;0.3");
  local_118.DataPtr = &local_108;
  local_118.ArrayNum = 6;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<UE::Math::TVector<double>_>
                    ((FPCGParseStringTestsBase *)this,&local_118,&local_128);
  pTVar3 = &local_a8;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = (TVector<double>_u_0 *)&pTVar3[-1]._s_0.Y;
    lVar4 = lVar4 + -1;
    if ((void *)(pTVar1->_s_0).Y != (void *)0x0) {
      FMemory::Free((void *)(pTVar1->_s_0).Y);
    }
  } while (lVar4 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149fd6460

FString * __thiscall
FPCGParseStringTests_Vector::GetBeautifiedTestName
          (FPCGParseStringTests_Vector *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Vector");
  return __return_storage_ptr__;
}

