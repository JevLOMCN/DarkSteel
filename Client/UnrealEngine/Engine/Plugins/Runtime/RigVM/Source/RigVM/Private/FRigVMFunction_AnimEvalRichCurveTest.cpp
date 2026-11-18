// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// GetTestFlags @ 14a167290

EAutomationTestFlags __thiscall
FRigVMFunction_AnimEvalRichCurveTest::GetTestFlags(FRigVMFunction_AnimEvalRichCurveTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a1672a0

bool __thiscall
FRigVMFunction_AnimEvalRichCurveTest::IsStressTest(FRigVMFunction_AnimEvalRichCurveTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a1672c0

uint __thiscall
FRigVMFunction_AnimEvalRichCurveTest::GetRequiredDeviceNum
          (FRigVMFunction_AnimEvalRichCurveTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a1672d0

FString * __thiscall
FRigVMFunction_AnimEvalRichCurveTest::GetTestSourceFileName
          (FRigVMFunction_AnimEvalRichCurveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Animation\\RigVMFunction_AnimEvalRichCurve.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a167360

int __thiscall
FRigVMFunction_AnimEvalRichCurveTest::GetTestSourceFileLine
          (FRigVMFunction_AnimEvalRichCurveTest *this)

{
  return 0x1c;
}

// GetTests @ 14a1674d0

/* WARNING: Removing unreachable block (ram,0x00014a1675bd) */
/* WARNING: Removing unreachable block (ram,0x00014a167688) */

void __thiscall
FRigVMFunction_AnimEvalRichCurveTest::GetTests
          (FRigVMFunction_AnimEvalRichCurveTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_AnimEvalRichCurve");
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

// RunTest @ 14a1676d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMFunction_AnimEvalRichCurveTest::RunTest
          (FRigVMFunction_AnimEvalRichCurveTest *this,FString *param_1)

{
  undefined1 uVar1;
  FRigVMFunction_AnimEvalRichCurve *pFVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [88];
  void *local_70;
  undefined4 local_68;
  void *local_60;
  ForAnyElementType local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  (**(code **)(this->_padding_ + 0x100))();
  pFVar2 = FRigVMFunction_AnimEvalRichCurve::FRigVMFunction_AnimEvalRichCurve
                     ((FRigVMFunction_AnimEvalRichCurve *)local_c8);
  (this->Unit).Value = pFVar2->Value;
  FRuntimeFloatCurve::operator=(&(this->Unit).Curve,&pFVar2->Curve);
  (this->Unit).SourceMinimum = pFVar2->SourceMinimum;
  (this->Unit).SourceMaximum = pFVar2->SourceMaximum;
  (this->Unit).TargetMinimum = pFVar2->TargetMinimum;
  (this->Unit).TargetMaximum = pFVar2->TargetMaximum;
  (this->Unit).Result = pFVar2->Result;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_c8._16_8_ = &___7FIndexedCurve__6B_;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_c8 + 0x18));
  uVar1 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar1;
}

// RunRigVMStructTest @ 14a167860

bool __thiscall
FRigVMFunction_AnimEvalRichCurveTest::RunRigVMStructTest
          (FRigVMFunction_AnimEvalRichCurveTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  FString local_28 [2];
  
  (this->Unit).Value = 0.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected curve result");
  fVar2 = __real_322bcc77;
  (*pcVar1)(this,(float)((uint)(this->Unit).Result & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                 __real_322bcc77,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 0.5;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected curve result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_3f000000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 1.0;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected curve result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_3f800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 1.5;
  Execute(this);
  pcVar1 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_28,L"unexpected curve result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_3f800000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar2,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a167a20

FString * __thiscall
FRigVMFunction_AnimEvalRichCurveTest::GetBeautifiedTestName
          (FRigVMFunction_AnimEvalRichCurveTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_AnimEvalRichCurve"
                    );
  return __return_storage_ptr__;
}

// Execute @ 14a19dfe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRigVMFunction_AnimEvalRichCurveTest::Execute(FRigVMFunction_AnimEvalRichCurveTest *this)

{
  FRigVMFunction_AnimEvalRichCurve::StaticExecute
            ((FRigVMExecuteContext *)this->_padding_,(this->Unit).Value,&(this->Unit).Curve,
             (this->Unit).SourceMinimum,(this->Unit).SourceMaximum,(this->Unit).TargetMinimum,
             (this->Unit).TargetMaximum,&(this->Unit).Result);
  return;
}

