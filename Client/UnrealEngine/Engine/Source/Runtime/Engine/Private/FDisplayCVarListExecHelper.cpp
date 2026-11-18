// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Exec_Dev @ 148b05880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FDisplayCVarListExecHelper::Exec_Dev
          (FDisplayCVarListExecHelper *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  TMap<FString,IConsoleVariable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleVariable_*,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  IConsoleManager *pIVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *local_res18;
  FOutputDevice *local_res20;
  undefined1 local_128;
  undefined1 local_127 [3];
  uint local_124;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  FDelegateAllocation local_118;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FDelegateAllocation local_100;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e0;
  FString local_d0;
  FString local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  
  local_res18 = param_2;
  local_res20 = param_3;
  bVar5 = FParse::Command(&local_res18,L"DisplayCVarList",true);
  if (bVar5) {
    this_00 = &this->ConsoleVariablesToVisualize;
    bVar5 = 1 < *(int *)&(this->ConsoleVariablesToVisualize).field_0x48;
    if (!bVar5) {
      TSet<TTuple<FString,IConsoleVariable_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleVariable_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,IConsoleVariable_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleVariable_*,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,IConsoleVariable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,IConsoleVariable_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ConsoleVariablesToVisualize).field_0x8);
    puVar1 = &(this->ConsoleVariablesToVisualize).field_0xc;
    *(undefined4 *)&(this->ConsoleVariablesToVisualize).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ConsoleVariablesToVisualize).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ConsoleVariablesToVisualize).field_0x34 = 0;
    iVar2 = *(int *)&(this->ConsoleVariablesToVisualize).field_0x2c;
    *(undefined4 *)&(this->ConsoleVariablesToVisualize).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->ConsoleVariablesToVisualize).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ConsoleVariablesToVisualize).field_0x10,0);
    }
    if (bVar5) {
      *(undefined4 *)&(this->ConsoleVariablesToVisualize).field_0x48 = 1;
      TSet<TTuple<FString,IConsoleVariable_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleVariable_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,IConsoleVariable_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleVariable_*,0>,FDefaultSetAllocator>
                *)this_00);
    }
    ::FString::FString(&local_d0,local_res18);
    local_c0.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
    if (1 < local_d0.Data.ArrayNum) {
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.ArrayNum = 0;
      local_f0.ArrayMax = 0;
      ::FString::ParseIntoArray(&local_d0,&local_f0,L",",true);
      uVar7 = (ulonglong)local_f0.ArrayNum;
      pFVar11 = local_f0.AllocatorInstance.Data + uVar7 * 0x10;
      local_124 = local_f0.ArrayNum;
      FVar10.Data = local_f0.AllocatorInstance.Data;
      while( true ) {
        if (local_f0.ArrayNum != (int)uVar7) {
          local_128 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_128);
        }
        if (FVar10.Data == pFVar11) break;
        ::FString::TrimStartAndEndInline((FString *)FVar10.Data);
        if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
            (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Singleton != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x4fb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pIVar4 = IConsoleManager::Singleton;
        pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0xd8);
        local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_118.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_118.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_120,(FWriteAccessScope *)&local_80);
        local_68 = &local_118;
        puVar8 = UE::Core::Private::DelegateAllocate(0x20,&local_118);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseFunctorDelegateInstance___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy__V<lambda_1>__M___Exec_Dev_FDisplayCVarListExecHelper__EEAA_NPEAVUWorld__0AEAVFOutputDevice___Z___V__6B_
          ;
          puVar8[3] = this;
        }
        if (local_80.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        }
        (*pcVar3)(pIVar4,&local_120);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_120,(FWriteAccessScope *)&local_b0);
        if ((local_118.DelegateSize != 0) &&
           (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_118.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_118,0,0,0x10);
          local_118.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_118.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_118.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
        uVar7 = (ulonglong)local_124;
        FVar10.Data = FVar10.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_f0.AllocatorInstance.Data,local_f0.ArrayNum);
      local_c0.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
        local_c0.Data.AllocatorInstance.Data = local_d0.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    bVar5 = FParse::Command(&local_res18,L"LogCVarList",true);
    if (!bVar5) {
      return false;
    }
    ::FString::FString(&local_c0,local_res18);
    if (1 < local_c0.Data.ArrayNum) {
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      ::FString::ParseIntoArray(&local_c0,&local_e0,L",",true);
      FOutputDevice::Log(param_3,L"Name, Value");
      uVar7 = (ulonglong)local_e0.ArrayNum;
      pFVar11 = local_e0.AllocatorInstance.Data + uVar7 * 0x10;
      local_124 = local_e0.ArrayNum;
      FVar10.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if (local_e0.ArrayNum != (int)uVar7) {
          local_127[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_127);
        }
        if (FVar10.Data == pFVar11) break;
        ::FString::TrimStartAndEndInline((FString *)FVar10.Data);
        if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
            (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0
            )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Singleton != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                      ,0x4fb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pIVar4 = IConsoleManager::Singleton;
        pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0xd8);
        local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_100.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_108,(FWriteAccessScope *)&local_60);
        local_48 = &local_100;
        puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar9 = FDelegateHandle::GenerateNewID();
          puVar8[2] = uVar9;
          *puVar8 = &
                    ___7__TBaseFunctorDelegateInstance___A6AXPEB_WPEAVIConsoleObject___ZUFDefaultDelegateUserPolicy__V<lambda_2>__BH___Exec_Dev_FDisplayCVarListExecHelper__EEAA_NPEAVUWorld__0AEAVFOutputDevice___Z___V__6B_
          ;
          puVar8[3] = this;
          puVar8[4] = local_res20;
        }
        if (local_60.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
        }
        (*pcVar3)(pIVar4,&local_108);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_108,(FWriteAccessScope *)&local_98);
        if ((local_100.DelegateSize != 0) &&
           (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_100,0,0,0x10);
          local_100.DelegateSize = 0;
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_100.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
        uVar7 = (ulonglong)local_124;
        FVar10.Data = FVar10.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
    }
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 148b22ae0

void __thiscall
`FDisplayCVarListExecHelper::Exec_Dev'::__l12::<lambda_1>::operator()
          (void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  longlong lVar1;
  TPairInitializer<FString_&&,IConsoleVariable_*_const_&> local_res18;
  FString *local_28;
  IConsoleVariable ***local_20;
  FString local_18;
  
  local_res18.Value = (IConsoleVariable **)(**(code **)(param_2->_padding_ + 0x38))(param_2);
  if (local_res18.Value != (IConsoleVariable **)0x0) {
    lVar1 = *(longlong *)this;
    local_28 = ::FString::FString(&local_18,param_1);
    local_20 = &local_res18.Value;
    TSet<TTuple<FString,IConsoleVariable_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleVariable_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,IConsoleVariable_*_const_&>_>
              ((TSet<TTuple<FString,IConsoleVariable_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleVariable_*,0>,FDefaultSetAllocator>
                *)(lVar1 + 8),&local_res18,(bool *)&local_28);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 148b23060

void __thiscall
`FDisplayCVarListExecHelper::Exec_Dev'::__l23::<lambda_2>::operator()
          (void *this,wchar_t *param_1,IConsoleObject *param_2)

{
  FOutputDevice *this_00;
  longlong *plVar1;
  void *local_18 [2];
  
  plVar1 = (longlong *)(**(code **)(param_2->_padding_ + 0x38))(param_2);
  if (plVar1 != (longlong *)0x0) {
    this_00 = *(FOutputDevice **)((longlong)this + 8);
    (**(code **)(*plVar1 + 0xd8))(plVar1,local_18);
    FOutputDevice::LogfImpl(this_00,L"%s, %s");
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

