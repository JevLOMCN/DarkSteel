// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 11

// GetTestFlags @ 14a167fe0

EAutomationTestFlags __thiscall
FRigVMFunction_TimeOffsetFloatTest::GetTestFlags(FRigVMFunction_TimeOffsetFloatTest *this)

{
  return EngineFilter|EditorContext;
}

// IsStressTest @ 14a167ff0

bool __thiscall
FRigVMFunction_TimeOffsetFloatTest::IsStressTest(FRigVMFunction_TimeOffsetFloatTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 14a168000

uint __thiscall
FRigVMFunction_TimeOffsetFloatTest::GetRequiredDeviceNum(FRigVMFunction_TimeOffsetFloatTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 14a168010

FString * __thiscall
FRigVMFunction_TimeOffsetFloatTest::GetTestSourceFileName
          (FRigVMFunction_TimeOffsetFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMFunctions\\Simulation\\RigVMFunction_TimeOffset.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14a168040

int __thiscall
FRigVMFunction_TimeOffsetFloatTest::GetTestSourceFileLine(FRigVMFunction_TimeOffsetFloatTest *this)

{
  return 0x151;
}

// GetTests @ 14a168100

/* WARNING: Removing unreachable block (ram,0x00014a1681ed) */
/* WARNING: Removing unreachable block (ram,0x00014a1682b8) */

void __thiscall
FRigVMFunction_TimeOffsetFloatTest::GetTests
          (FRigVMFunction_TimeOffsetFloatTest *this,
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
  
  ::FString::FString(&local_18,L"RigVM.RigVMFunctions.FRigVMFunction_TimeOffsetFloat");
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

// RunTest @ 14a1682e0

bool __thiscall
FRigVMFunction_TimeOffsetFloatTest::RunTest
          (FRigVMFunction_TimeOffsetFloatTest *this,FString *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined1 uVar3;
  undefined8 local_38 [2];
  undefined8 local_28 [4];
  
  (**(code **)(*(longlong *)this + 0x100))();
  (this->Unit).SecondsAgo = 0.5;
  (this->Unit).Value = 0.0;
  pTVar1 = &(this->Unit).Buffer;
  (this->Unit).BufferSize = 0x10;
  (this->Unit).TimeRange = 1.0;
  (this->Unit).Result = 0.0;
  if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_38) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).Buffer.ArrayNum = 0;
    (this->Unit).Buffer.ArrayMax = 0;
  }
  pTVar1 = &(this->Unit).DeltaTimes;
  if (pTVar1 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_28) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Unit).DeltaTimes.ArrayNum = 0;
    (this->Unit).DeltaTimes.ArrayMax = 0;
  }
  (this->Unit).LastInsertIndex = 0;
  (this->Unit).UpperBound = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a168399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*(longlong *)this + 0x110))(this,param_1);
  return (bool)uVar3;
}

// RunRigVMStructTest @ 14a1683b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FRigVMFunction_TimeOffsetFloatTest::RunRigVMStructTest
          (FRigVMFunction_TimeOffsetFloatTest *this,FString *param_1)

{
  code *pcVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  FString local_48 [4];
  
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0x3ff0000000000000;
  (this->Unit).SecondsAgo = 0.5;
  (this->Unit).TimeRange = 5.0;
  (this->Unit).BufferSize = 0x10;
  (this->Unit).Value = 2.0;
  InitAndExecute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  fVar4 = __real_40000000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40000000) &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  InitAndExecute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - fVar4) & uVar3) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 4.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40400000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 6.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40a00000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 8.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40e00000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 10.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41100000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 12.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41300000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0;
  (this->Unit).SecondsAgo = 1.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41100000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 2.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40e00000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 3.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40a00000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 4.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40400000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0x3ff0000000000000;
  (this->Unit).SecondsAgo = 0.5;
  (this->Unit).Value = 14.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41500000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 16.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41700000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 18.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41880000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 20.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41980000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 22.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41a80000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 24.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - ___real_41b80000) & uVar3) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 26.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41c80000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 28.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41d80000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 30.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - ___real_41e80000) & uVar3) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 32.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41f80000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 34.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_42040000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 36.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_420c0000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0;
  (this->Unit).SecondsAgo = 1.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_42040000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 2.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41f80000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 3.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - ___real_41e80000) & uVar3) <= fVar2,local_48,0
           );
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 4.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_41d80000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0x3ff0000000000000;
  (this->Unit).TimeRange = 8.0;
  (this->Unit).BufferSize = 3;
  (this->Unit).SecondsAgo = 0.5;
  (this->Unit).Value = 2.0;
  InitAndExecute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - fVar4) & uVar3) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 4.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40400000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).Value = 6.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40a00000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  *(undefined8 *)(*(longlong *)&this->field_0x370 + 0x20) = 0;
  (this->Unit).SecondsAgo = 1.5;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - __real_40800000) & uVar3) <= fVar2,local_48,0)
  ;
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 2.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - ___real_40555547) & uVar3) <= __real_3a83126f,
            local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  (this->Unit).SecondsAgo = 3.0;
  Execute(this);
  pcVar1 = *(code **)(*(longlong *)this + 0x30);
  ::FString::FString(local_48,L"unexpected previous result");
  (*pcVar1)(this,(float)((uint)((this->Unit).Result - fVar4) & uVar3) <= fVar2,local_48,0);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  return true;
}

// GetBeautifiedTestName @ 14a169110

FString * __thiscall
FRigVMFunction_TimeOffsetFloatTest::GetBeautifiedTestName
          (FRigVMFunction_TimeOffsetFloatTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"RigVM.RigVMFunctions.FRigVMFunction_TimeOffsetFloat");
  return __return_storage_ptr__;
}

// Execute @ 14a1a4190

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
FRigVMFunction_TimeOffsetFloatTest::Execute(FRigVMFunction_TimeOffsetFloatTest *this)

{
  FRigVMFunction_TimeOffsetFloat::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,(this->Unit).Value,(this->Unit).SecondsAgo
             ,(this->Unit).BufferSize,(this->Unit).TimeRange,&(this->Unit).Result,
             &(this->Unit).Buffer,&(this->Unit).DeltaTimes,&(this->Unit).LastInsertIndex,
             &(this->Unit).UpperBound);
  return;
}

// InitAndExecute @ 14a1ae190

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
FRigVMFunction_TimeOffsetFloatTest::InitAndExecute(FRigVMFunction_TimeOffsetFloatTest *this)

{
  (**(code **)((this->Unit)._padding_ + 0x38))();
  FRigVMFunction_TimeOffsetFloat::StaticExecute
            (*(FRigVMExecuteContext **)&this->field_0x370,(this->Unit).Value,(this->Unit).SecondsAgo
             ,(this->Unit).BufferSize,(this->Unit).TimeRange,&(this->Unit).Result,
             &(this->Unit).Buffer,&(this->Unit).DeltaTimes,&(this->Unit).LastInsertIndex,
             &(this->Unit).UpperBound);
  return;
}

