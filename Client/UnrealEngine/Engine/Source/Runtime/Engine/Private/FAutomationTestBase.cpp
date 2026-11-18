// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// TestNotSamePtr<FString> @ 148803a10

bool __thiscall
FAutomationTestBase::TestNotSamePtr<FString>
          (FAutomationTestBase *this,FString *param_1,FString *param_2,FString *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (FString *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x48);
    ::FString::PrintfImpl(&local_18,L"%s: Actual value is nullptr.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_3 == (FString *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x48);
    ::FString::PrintfImpl
              (&local_18,
               L"%s: Expected value is nullptr, which may be unintended. If intentional consider instead using TestNotNull()."
              );
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2 == param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two pointers are the same.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestSamePtr<int> @ 148803b30

bool __thiscall
FAutomationTestBase::TestSamePtr<int>
          (FAutomationTestBase *this,FString *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (int *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x48);
    ::FString::PrintfImpl(&local_18,L"%s: Actual value is nullptr.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_3 == (int *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x48);
    ::FString::PrintfImpl
              (&local_18,
               L"%s: Expected value is nullptr, which may be unintended. If intentional consider instead using TestNull()."
              );
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2 != param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two pointers are not the same.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestSamePtr<UWorld> @ 148803c50

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
FAutomationTestBase::TestSamePtr<UWorld>
          (FAutomationTestBase *this,FString *param_1,UWorld *param_2,UWorld *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2 == (UWorld *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x48);
    ::FString::PrintfImpl(&local_18,L"%s: Actual value is nullptr.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_3 == (UWorld *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x48);
    ::FString::PrintfImpl
              (&local_18,
               L"%s: Expected value is nullptr, which may be unintended. If intentional consider instead using TestNull()."
              );
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (param_2 != param_3) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two pointers are not the same.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// AddCommand @ 148817fc0

void __thiscall
FAutomationTestBase::AddCommand(FAutomationTestBase *this,IAutomationLatentCommand *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FAutomationTestFramework *this_00;
  TSharedPtr<IAutomationLatentCommand,1> local_18;
  
  if ((((param_1 != (IAutomationLatentCommand *)0x0) && (param_1->_padding_ != 0)) &&
      (param_1->_padding_ != 0)) && (0 < *(int *)(param_1->_padding_ + 8))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VIAutomationLatentCommand__U__DefaultDeleter_VIAutomationLatentCommand___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  if (param_1 == (IAutomationLatentCommand *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  this_00 = FAutomationTestFramework::Get();
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = param_1;
  local_18.SharedReferenceCount.ReferenceController = pTVar6;
  FAutomationTestFramework::EnqueueLatentCommand(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

