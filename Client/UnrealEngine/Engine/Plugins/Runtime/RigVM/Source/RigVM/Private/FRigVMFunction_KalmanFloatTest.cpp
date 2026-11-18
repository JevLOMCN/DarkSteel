// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 9

// GetTestFlags @ 14a14eba0

EAutomationTestFlags __thiscall
FRigVMFunction_KalmanFloatTest::GetTestFlags(FRigVMFunction_KalmanFloatTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a14ebb0

bool __thiscall FRigVMFunction_KalmanFloatTest::IsStressTest(FRigVMFunction_KalmanFloatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a14ebc0

uint __thiscall
FRigVMFunction_KalmanFloatTest::GetRequiredDeviceNum(FRigVMFunction_KalmanFloatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a14ebd0

FString * __thiscall
FRigVMFunction_KalmanFloatTest::GetTestSourceFileName
          (FRigVMFunction_KalmanFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_Kalman.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a14ec00

int __thiscall
FRigVMFunction_KalmanFloatTest::GetTestSourceFileLine(FRigVMFunction_KalmanFloatTest *this)

{
  return 0xaa;
}

// GetTests @ 14a14ed90

/* WARNING: Removing unreachable block (ram,0x00014a14ee7d) */
/* WARNING: Removing unreachable block (ram,0x00014a14ef48) */

void __thiscall
FRigVMFunction_KalmanFloatTest::GetTests
          (FRigVMFunction_KalmanFloatTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_KalmanFloat");
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

// RunTest @ 14a14efd0

bool __thiscall
FRigVMFunction_KalmanFloatTest::RunTest(FRigVMFunction_KalmanFloatTest *this,FString *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined1 uVar3;
  undefined8 local_20 [3];
  
  (**(code **)(this->_padding_ + 0x100))();
  (this->Unit).BufferSize = 0x10;
  (this->Unit).Result = 0.0;
  (this->Unit).Value = 0.0;
  pTVar1 = &(this->Unit).Buffer;
  if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_20) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Buffer.ArrayNum = 0;
    (this->Unit).Buffer.ArrayMax = 0;
  }
  (this->Unit).LastInsertIndex = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a14f04e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->_padding_ + 0x110))(this,param_1);
  return (bool)uVar3;
}

// RunRigVMStructTest @ 14a14f060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRigVMFunction_KalmanFloatTest::RunRigVMStructTest
          (FRigVMFunction_KalmanFloatTest *this,FString *param_1)

{
  int *piVar1;
  float *pfVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  FRigVMExecuteContext *pFVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  FString local_58 [4];
  
  (this->Unit).Value = 1.0;
  (this->Unit).BufferSize = 4;
  (**(code **)((this->Unit)._padding_ + 0x38))(&this->Unit);
  piVar1 = &(this->Unit).LastInsertIndex;
  pfVar2 = &(this->Unit).Result;
  pTVar3 = &(this->Unit).Buffer;
  FRigVMFunction_KalmanFloat::StaticExecute
            ((FRigVMExecuteContext *)this->_padding_,(this->Unit).Value,(this->Unit).BufferSize,
             pfVar2,pTVar3,piVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_58,L"unexpected average result");
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  (*pcVar4)(this,(float)((uint)(*pfVar2 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)
                 <= __real_322bcc77,local_58,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  (**(code **)((this->Unit)._padding_ + 0x38))(&this->Unit);
  FRigVMFunction_KalmanFloat::StaticExecute
            ((FRigVMExecuteContext *)this->_padding_,(this->Unit).Value,(this->Unit).BufferSize,
             pfVar2,pTVar3,piVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_58,L"unexpected average result");
  (*pcVar4)(this,(float)((uint)(*pfVar2 - fVar7) & uVar8) <= fVar6,local_58,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  FRigVMFunction_KalmanFloat::StaticExecute
            ((FRigVMExecuteContext *)this->_padding_,(this->Unit).Value,(this->Unit).BufferSize,
             pfVar2,pTVar3,piVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_58,L"unexpected average result");
  (*pcVar4)(this,(float)((uint)(*pfVar2 - fVar7) & uVar8) <= fVar6,local_58,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  fVar7 = __real_40800000;
  pFVar5 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Value = 4.0;
  FRigVMFunction_KalmanFloat::StaticExecute
            (pFVar5,fVar7,(this->Unit).BufferSize,pfVar2,pTVar3,piVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_58,L"unexpected average result");
  (*pcVar4)(this,(float)((uint)(*pfVar2 - __real_40000000) & uVar8) <= fVar6,local_58,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  fVar9 = __real_40c00000;
  pFVar5 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Value = 6.0;
  FRigVMFunction_KalmanFloat::StaticExecute
            (pFVar5,fVar9,(this->Unit).BufferSize,pfVar2,pTVar3,piVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_58,L"unexpected average result");
  (*pcVar4)(this,(float)((uint)(*pfVar2 - __real_40400000) & uVar8) <= fVar6,local_58,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  fVar9 = __real_40a00000;
  pFVar5 = (FRigVMExecuteContext *)this->_padding_;
  (this->Unit).Value = 5.0;
  FRigVMFunction_KalmanFloat::StaticExecute
            (pFVar5,fVar9,(this->Unit).BufferSize,pfVar2,pTVar3,piVar1);
  pcVar4 = *(code **)(this->_padding_ + 0x30);
  ::FString::FString(local_58,L"unexpected average result");
  (*pcVar4)(this,(float)((uint)(*pfVar2 - fVar7) & uVar8) <= fVar6,local_58,0);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a14f3e0

FString * __thiscall
FRigVMFunction_KalmanFloatTest::GetBeautifiedTestName
          (FRigVMFunction_KalmanFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_KalmanFloat");
  return __return_storage_ptr__;
}

