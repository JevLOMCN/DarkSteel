// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147a0dab0

UScriptStruct * __cdecl FDataDrivenConsoleVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataDrivenConsoleVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDataDrivenConsoleVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataDrivenConsoleVariable,(UObject *)pUVar1,
                         L"DataDrivenConsoleVariable");
  }
  return Z_Registration_Info_UScriptStruct_FDataDrivenConsoleVariable.OuterSingleton;
}

// ~FDataDrivenConsoleVariable @ 147a29800

void __thiscall
FDataDrivenConsoleVariable::~FDataDrivenConsoleVariable(FDataDrivenConsoleVariable *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  IConsoleManager *pIVar5;
  wchar_t *pwVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (1 < (this->Name).Data.ArrayNum) {
    pwVar6 = L"";
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->Name).Data.ArrayNum != 0) {
      pwVar6 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
    }
    plVar4 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar6,1);
    if (plVar4 != (longlong *)0x0) {
      local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_30.Data = (FScriptContainerElement *)0x0;
      local_28 = 0;
      (**(code **)(*plVar4 + 0xe0))(plVar4,&local_38);
      pIVar5 = IConsoleManager::Get();
      (**(code **)((longlong)*pIVar5 + 0xb8))(pIVar5,plVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_20);
      if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_20.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    }
  }
  pFVar1 = (this->ShadowToolTip).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShadowName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ToolTip).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// Register @ 147a778f0

void __thiscall FDataDrivenConsoleVariable::Register(FDataDrivenConsoleVariable *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  IConsoleManager *pIVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (1 < (this->Name).Data.ArrayNum) {
    pwVar7 = L"";
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->Name).Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
    }
    plVar3 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar10);
    if (plVar3 == (longlong *)0x0) {
      if (this->Type == CVarInt) {
        pIVar4 = IConsoleManager::Get();
        if ((this->ToolTip).Data.ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(this->ToolTip).Data.AllocatorInstance.Data;
        }
        if ((this->Name).Data.ArrayNum != 0) {
          pwVar7 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
        }
        plVar3 = (longlong *)
                 (**(code **)((longlong)*pIVar4 + 0x18))
                           (pIVar4,pwVar7,this->DefaultValueInt,pwVar10,0x40);
      }
      else if (this->Type == CVarBool) {
        pIVar4 = IConsoleManager::Get();
        if ((this->ToolTip).Data.ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(this->ToolTip).Data.AllocatorInstance.Data;
        }
        if ((this->Name).Data.ArrayNum != 0) {
          pwVar7 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
        }
        plVar3 = (longlong *)
                 (**(code **)((longlong)*pIVar4 + 0x20))
                           (pIVar4,pwVar7,this->DefaultValueBool,pwVar10,0x40);
      }
      else {
        pIVar4 = IConsoleManager::Get();
        if ((this->ToolTip).Data.ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(this->ToolTip).Data.AllocatorInstance.Data;
        }
        if ((this->Name).Data.ArrayNum != 0) {
          pwVar7 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
        }
        plVar3 = (longlong *)
                 (**(code **)((longlong)*pIVar4 + 0x10))
                           (pIVar4,pwVar7,this->DefaultValueFloat,pwVar10,0x40);
      }
    }
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    pcVar1 = *(code **)(*plVar3 + 0xe0);
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_38);
    local_20 = &local_60;
    puVar5 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar5[3] = UDataDrivenConsoleVariableSettings::OnDataDrivenChange;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    (*pcVar1)(plVar3,&local_68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    iVar9 = (this->Name).Data.ArrayNum;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    ::FString::AssignRange
              (&this->ShadowName,(wchar_t *)(this->Name).Data.AllocatorInstance.Data,iVar8);
    iVar8 = (this->ToolTip).Data.ArrayNum;
    iVar9 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar9 = 0;
    }
    ::FString::AssignRange
              (&this->ShadowToolTip,(wchar_t *)(this->ToolTip).Data.AllocatorInstance.Data,iVar9);
    this->ShadowType = this->Type;
  }
  return;
}

// UnRegister @ 147a99290

void __thiscall
FDataDrivenConsoleVariable::UnRegister(FDataDrivenConsoleVariable *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  IConsoleManager *pIVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  FDataDrivenCVarType *pFVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  lVar6 = 0x38;
  if (!param_1) {
    lVar6 = 8;
  }
  pFVar7 = &this->Type + lVar6;
  if (1 < *(int *)&(((FString *)(pFVar7 + 8))->Data).AllocatorInstance.Data) {
    pwVar5 = L"";
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Singleton != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x4fb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)&(((FString *)(pFVar7 + 8))->Data).AllocatorInstance.Data != 0) {
      pwVar5 = *(wchar_t **)pFVar7;
    }
    plVar3 = (longlong *)
             (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                       (IConsoleManager::Singleton,pwVar5,1);
    if (plVar3 != (longlong *)0x0) {
      local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_30.Data = (FScriptContainerElement *)0x0;
      local_28 = 0;
      (**(code **)(*plVar3 + 0xe0))(plVar3,&local_38);
      pIVar4 = IConsoleManager::Get();
      (**(code **)((longlong)*pIVar4 + 0xb8))(pIVar4,plVar3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_20);
      if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_20.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
      }
      if (local_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
    }
  }
  return;
}

