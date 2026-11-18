// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// GetTestFlags @ 149f76a70

EAutomationTestFlags __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::GetTestFlags
          (FPCGAttributeCast_AttributeSetBoolToDouble *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 149f76a80

bool __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::IsStressTest
          (FPCGAttributeCast_AttributeSetBoolToDouble *this)

{
  return false;
}

// GetRequiredDeviceNum @ 149f76a90

uint __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::GetRequiredDeviceNum
          (FPCGAttributeCast_AttributeSetBoolToDouble *this)

{
  return 1;
}

// GetTestSourceFileName @ 149f76aa0

FString * __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::GetTestSourceFileName
          (FPCGAttributeCast_AttributeSetBoolToDouble *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Tests\\Elements\\PCGAttributeCastTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 149f76ad0

int __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::GetTestSourceFileLine
          (FPCGAttributeCast_AttributeSetBoolToDouble *this)

{
  return 0x69;
}

// GetTests @ 149f76ae0

/* WARNING: Removing unreachable block (ram,0x000149f76bcd) */
/* WARNING: Removing unreachable block (ram,0x000149f76c98) */

void __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::GetTests
          (FPCGAttributeCast_AttributeSetBoolToDouble *this,
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
  
  ::FString::FString(&local_18,"Plugins.PCG.AttributeCast.AttributeSetBoolToDouble");
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

// RunTest @ 149f76cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::RunTest
          (FPCGAttributeCast_AttributeSetBoolToDouble *this,FString *param_1)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  TArrayView<double_const_,int> local_68;
  TArrayView<bool_const_,int> local_58;
  bool local_48 [8];
  double local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.DataPtr = &local_40;
  local_40 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_38 = _UNK_150689688;
  local_58.DataPtr = local_48;
  local_68.ArrayNum = 6;
  local_58.ArrayNum = 6;
  local_20 = ___xmm_3ff00000000000000000000000000000;
  uStack_18 = _UNK_15061cbc8;
  local_48[0] = true;
  local_48[1] = true;
  local_48[2] = true;
  local_48[3] = false;
  local_30 = ___xmm_00000000000000003ff0000000000000;
  uStack_28 = _UNK_150689518;
  local_48[4] = false;
  local_48[5] = true;
  bVar1 = FPCGAttributeCastTestBase::RunTestInternal<bool,double,UPCGParamData>
                    ((FPCGAttributeCastTestBase *)this,&local_58,&local_68);
  return bVar1;
}

// GetBeautifiedTestName @ 149f76d70

FString * __thiscall
FPCGAttributeCast_AttributeSetBoolToDouble::GetBeautifiedTestName
          (FPCGAttributeCast_AttributeSetBoolToDouble *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.PCG.AttributeCast.AttributeSetBoolToDouble");
  return __return_storage_ptr__;
}

