// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149fd50b0

EAutomationTestFlags __thiscall
FPCGParseStringTests_Vector2D::GetTestFlags(FPCGParseStringTests_Vector2D *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149fd50c0

bool __thiscall FPCGParseStringTests_Vector2D::IsStressTest(FPCGParseStringTests_Vector2D *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149fd50d0

uint __thiscall
FPCGParseStringTests_Vector2D::GetRequiredDeviceNum(FPCGParseStringTests_Vector2D *this)

{
  return 1;
}

// GetTestSourceFileName @ 149fd50e0

FString * __thiscall
FPCGParseStringTests_Vector2D::GetTestSourceFileName
          (FPCGParseStringTests_Vector2D *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGParseStringTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149fd5110

int __thiscall
FPCGParseStringTests_Vector2D::GetTestSourceFileLine(FPCGParseStringTests_Vector2D *this)

{
  return 0x48;
}

// GetTests @ 149fd5120

/* WARNING: Removing unreachable block (ram,0x000149fd520d) */
/* WARNING: Removing unreachable block (ram,0x000149fd52d8) */

void __thiscall
FPCGParseStringTests_Vector2D::GetTests
          (FPCGParseStringTests_Vector2D *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"Plugins.PCG.ParseString.Vector2D");
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

// RunTest @ 149fd5300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGParseStringTests_Vector2D::RunTest(FPCGParseStringTests_Vector2D *this,FString *param_1)

{
  TVector2<double>_u_0 *pTVar1;
  bool bVar2;
  TVector2<double>_u_0 *pTVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  TArrayView<UE::Math::TVector2<double>_const_,int> local_f8;
  TArrayView<FString_const_,int> local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TVector2<double>_u_0 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.DataPtr = (TVector2<double> *)&local_78;
  local_78._s_0.X = ___xmm_3fc999999999999a3fb999999999999a;
  local_78._s_0.Y = _UNK_15076b6f8;
  local_58 = ___xmm_3fe66666666666663fe0000000000000;
  uStack_50 = _UNK_15202fea8;
  lVar4 = 6;
  local_68 = ___xmm_40000000000000003ff0000000000000;
  uStack_60 = _UNK_150744178;
  local_38 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_28 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_48 = ___xmm_40106666666666664020000000000000;
  uStack_40 = _UNK_15202ff28;
  local_f8.ArrayNum = 6;
  ::FString::FString(&local_d8,"0.1,0.2");
  ::FString::FString(&local_c8,"1.0,    2.0");
  ::FString::FString(&local_b8,"X=0.5 Y=0.7");
  ::FString::FString(&local_a8,"X=8.0,            Y=4.1");
  ::FString::FString(&local_98,"Bla");
  ::FString::FString(&local_88,"0.1;0.2");
  local_e8.DataPtr = &local_d8;
  local_e8.ArrayNum = 6;
  bVar2 = FPCGParseStringTestsBase::RunTestInternal<UE::Math::TVector2<double>_>
                    ((FPCGParseStringTestsBase *)this,&local_e8,&local_f8);
  pTVar3 = &local_78;
  do {
    pTVar1 = pTVar3 + -1;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    if ((void *)(pTVar1->_s_0).X != (void *)0x0) {
      FMemory::Free((void *)(pTVar1->_s_0).X);
    }
  } while (lVar4 != 0);
  return bVar2;
}

// GetBeautifiedTestName @ 149fd5480

FString * __thiscall
FPCGParseStringTests_Vector2D::GetBeautifiedTestName
          (FPCGParseStringTests_Vector2D *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.ParseString.Vector2D");
  return __return_storage_ptr__;
}

