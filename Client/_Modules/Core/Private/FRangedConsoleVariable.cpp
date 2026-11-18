// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// FRangedConsoleVariable<int> @ 141619270

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FRangedConsoleVariable<int> * __thiscall
FRangedConsoleVariable<int>::FRangedConsoleVariable<int>
          (FRangedConsoleVariable<int> *this,FString *param_1,int param_2,int param_3,int param_4,
          wchar_t *param_5,EConsoleVariableFlags param_6,IConsoleVariable *param_7)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FRangedConsoleVariable<int> *pFVar4;
  IConsoleVariable *pIVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  int local_res18 [2];
  int local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  FDelegateAllocation local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  local_res18[0] = param_2;
  local_res20 = param_3;
  FConsoleVariableExtendedData<int>::FConsoleVariableExtendedData<int>
            ((FConsoleVariableExtendedData<int> *)this,local_res18,param_5,param_6);
  *(int *)&this->_padding_ = param_2;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  this->_padding_ = (longlong)param_7;
  this->_padding_ = (longlong)&___7__FRangedConsoleVariable_H__6B_;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRangedConsoleVariable<int> *)(*pcVar1)();
    return pFVar4;
  }
  pIVar2 = IConsoleManager::Singleton;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x18);
  ::FString::PrintfImpl(&local_f8,L"The min value for CVar %s");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar9.Data = local_f8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_c8,".min");
  ::FString::ConcatFF(&local_108,param_1,&local_c8);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar8.Data = local_108.Data.AllocatorInstance.Data;
  }
  pIVar5 = (IConsoleVariable *)(*pcVar1)(pIVar2,FVar8.Data,local_res20,FVar9.Data,param_6);
  this->Min = pIVar5;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x18);
  ::FString::PrintfImpl(&local_d8,L"The max value for CVar %s");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar9.Data = local_d8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_b8,".max");
  ::FString::ConcatFF(&local_e8,param_1,&local_b8);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar8.Data = local_e8.Data.AllocatorInstance.Data;
  }
  pIVar5 = (IConsoleVariable *)(*pcVar1)(pIVar2,FVar8.Data,param_4,FVar9.Data,param_6);
  this->Max = pIVar5;
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  pIVar5 = this->Min;
  local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_130.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_130.DelegateSize = 0;
  pcVar1 = *(code **)(*(longlong *)pIVar5 + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_78);
  local_60 = &local_130;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_130);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  (*pcVar1)(pIVar5,&local_138);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_138,(FWriteAccessScope *)&local_a8);
  if ((local_130.DelegateSize != 0) &&
     (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_130.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_130,0,0,0x10);
    local_130.DelegateSize = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_130.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_130.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_138.AccessDetector);
  pIVar5 = this->Max;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_118.DelegateSize = 0;
  pcVar1 = *(code **)(*(longlong *)pIVar5 + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_58);
  local_40 = &local_118;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_118);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_H__QEAA_AEBVFString__HHHPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  (*pcVar1)(pIVar5,&local_120);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_90);
  if ((local_118.DelegateSize != 0) &&
     (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_118,0,0,0x10);
    local_118.DelegateSize = 0;
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_118.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  return this;
}

// FRangedConsoleVariable<float> @ 1416196a0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

FRangedConsoleVariable<float> * __thiscall
FRangedConsoleVariable<float>::FRangedConsoleVariable<float>
          (FRangedConsoleVariable<float> *this,FString *param_1,float param_2,float param_3,
          float param_4,wchar_t *param_5,EConsoleVariableFlags param_6,IConsoleVariable *param_7)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FRangedConsoleVariable<float> *pFVar4;
  IConsoleVariable *pIVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  float local_res18 [2];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  FDelegateAllocation local_140;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  local_res18[0] = param_2;
  FConsoleVariableExtendedData<float>::FConsoleVariableExtendedData<float>
            ((FConsoleVariableExtendedData<float> *)this,local_res18,param_5,param_6);
  *(float *)&this->_padding_ = param_2;
  *(float *)((longlong)&this->_padding_ + 4) = param_2;
  this->_padding_ = (longlong)param_7;
  this->_padding_ = (longlong)&___7__FRangedConsoleVariable_M__6B_;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FRangedConsoleVariable<float> *)(*pcVar1)();
    return pFVar4;
  }
  pIVar2 = IConsoleManager::Singleton;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x10);
  ::FString::PrintfImpl(&local_108,L"The min value for CVar %s");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar9.Data = local_108.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_d8,".min");
  ::FString::ConcatFF(&local_118,param_1,&local_d8);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_118.Data.ArrayNum != 0) {
    FVar8.Data = local_118.Data.AllocatorInstance.Data;
  }
  pIVar5 = (IConsoleVariable *)(*pcVar1)(pIVar2,FVar8.Data,param_3,FVar9.Data,param_6);
  this->Min = pIVar5;
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x10);
  ::FString::PrintfImpl(&local_e8,L"The max value for CVar %s");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_e8.Data.ArrayNum != 0) {
    FVar9.Data = local_e8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_c8,".max");
  ::FString::ConcatFF(&local_f8,param_1,&local_c8);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_f8.Data.ArrayNum != 0) {
    FVar8.Data = local_f8.Data.AllocatorInstance.Data;
  }
  pIVar5 = (IConsoleVariable *)(*pcVar1)(pIVar2,FVar8.Data,param_4,FVar9.Data,param_6);
  this->Max = pIVar5;
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  pIVar5 = this->Min;
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_140.DelegateSize = 0;
  pcVar1 = *(code **)(*(longlong *)pIVar5 + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_88);
  local_70 = &local_140;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_140);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  (*pcVar1)(pIVar5,&local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_b8);
  if ((local_140.DelegateSize != 0) &&
     (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_140,0,0,0x10);
    local_140.DelegateSize = 0;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_140.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  pIVar5 = this->Max;
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128.DelegateSize = 0;
  pcVar1 = *(code **)(*(longlong *)pIVar5 + 0xe0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_68);
  local_50 = &local_128;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_128);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseFunctorDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy__V<lambda_2>__1___0__FRangedConsoleVariable_M__QEAA_AEBVFString__MMMPEB_WW4EConsoleVariableFlags__0_Z___V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  (*pcVar1)(pIVar5,&local_130);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_a0);
  if ((local_128.DelegateSize != 0) &&
     (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_128,0,0,0x10);
    local_128.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_128.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  return this;
}

// GetBool @ 14163ea60

bool __thiscall FRangedConsoleVariable<int>::GetBool(FRangedConsoleVariable<int> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                     ,0x7a0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// GetBool @ 14163eaa0

bool __thiscall FRangedConsoleVariable<float>::GetBool(FRangedConsoleVariable<float> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ConsoleManager.cpp"
                     ,0x7a0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// GetFloat @ 141642300

float __thiscall FRangedConsoleVariable<int>::GetFloat(FRangedConsoleVariable<int> *this)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)(**(code **)(*(longlong *)this->Max + 0xd0))();
  fVar4 = (float)(**(code **)(*(longlong *)this->Min + 0xd0))();
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_141642355;
  }
  lVar2 = 0xb8;
LAB_141642355:
  fVar5 = (float)*(int *)((longlong)&this->_padding_ + lVar2);
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  return fVar5;
}

// GetFloat @ 141642380

float __thiscall FRangedConsoleVariable<float>::GetFloat(FRangedConsoleVariable<float> *this)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)(**(code **)(*(longlong *)this->Max + 0xd0))();
  fVar4 = (float)(**(code **)(*(longlong *)this->Min + 0xd0))();
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar2 = 0xbc;
    if (!bVar1) goto LAB_1416423d5;
  }
  lVar2 = 0xb8;
LAB_1416423d5:
  fVar5 = (float)(int)*(float *)((longlong)&this->_padding_ + lVar2);
  if (fVar3 <= fVar5) {
    fVar5 = fVar3;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  return fVar5;
}

// GetInt @ 141642d90

int __thiscall FRangedConsoleVariable<int>::GetInt(FRangedConsoleVariable<int> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = (**(code **)(*(longlong *)this->Max + 200))();
  iVar3 = (**(code **)(*(longlong *)this->Min + 200))();
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar4 = 0xbc;
    if (!bVar1) goto LAB_141642de2;
  }
  lVar4 = 0xb8;
LAB_141642de2:
  if (*(int *)((longlong)&this->_padding_ + lVar4) < iVar2) {
    iVar2 = *(int *)((longlong)&this->_padding_ + lVar4);
  }
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  return iVar3;
}

// GetInt @ 141642e10

int __thiscall FRangedConsoleVariable<float>::GetInt(FRangedConsoleVariable<float> *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(*(longlong *)this->Max + 200))();
  iVar3 = (**(code **)(*(longlong *)this->Min + 200))();
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    lVar5 = 0xbc;
    if (!bVar1) goto LAB_141642e62;
  }
  lVar5 = 0xb8;
LAB_141642e62:
  iVar4 = (int)*(float *)((longlong)&this->_padding_ + lVar5);
  if (iVar4 < iVar2) {
    iVar2 = iVar4;
  }
  if (iVar3 < iVar2) {
    iVar3 = iVar2;
  }
  return iVar3;
}

// GetString @ 141646a00

FString * __thiscall
FRangedConsoleVariable<int>::GetString
          (FRangedConsoleVariable<int> *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 200))();
  (**(code **)(*(longlong *)this->Min + 200))();
  (**(code **)(*(longlong *)this->Max + 200))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetString @ 141646a90

FString * __thiscall
FRangedConsoleVariable<float>::GetString
          (FRangedConsoleVariable<float> *this,FString *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0xd0))();
  (**(code **)(*(longlong *)this->Min + 0xd0))();
  (**(code **)(*(longlong *)this->Max + 0xd0))();
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

