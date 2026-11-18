// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// FAIResourceLock @ 146e802d0

FAIResourceLock * __thiscall FAIResourceLock::FAIResourceLock(FAIResourceLock *this)

{
  (this->ResourceLockCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResourceLockCount).ArrayNum = 0;
  (this->ResourceLockCount).ArrayMax = 0;
  this->Locks = 0;
  this->bUseResourceLockCount = false;
  return this;
}

// ClearLock @ 146e869a0

void __thiscall FAIResourceLock::ClearLock(FAIResourceLock *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  
  if (this->bUseResourceLockCount == false) {
    this->Locks = this->Locks & ~(ushort)(1 << (param_1 & 0x1f));
  }
  else {
    TVar4 = param_1 & 0xff;
    if ((this->ResourceLockCount).ArrayNum <= (int)TVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ResourceLockCount).AllocatorInstance.Data[TVar4] == (FScriptContainerElement)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2855491809696546776>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\AITypes.cpp"
                         ,0x28,"ResourceLockCount[ResourceLockCountIndex] > 0");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ResourceLockCount).ArrayNum <= (int)TVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ResourceLockCount).AllocatorInstance.Data + TVar4;
    *pFVar1 = (FScriptContainerElement)((char)*pFVar1 + -1);
    if ((this->ResourceLockCount).ArrayNum <= (int)TVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((this->ResourceLockCount).AllocatorInstance.Data[TVar4] == (FScriptContainerElement)0x0) {
      this->Locks = this->Locks & ~(ushort)(1 << (param_1 & 0x1f));
      return;
    }
  }
  return;
}

// ForceClearAllLocks @ 146e8d260

void __thiscall FAIResourceLock::ForceClearAllLocks(FAIResourceLock *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->ResourceLockCount).ArrayMax;
  this->Locks = 0;
  piVar2 = &(this->ResourceLockCount).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (this->bUseResourceLockCount != false) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x10,(ForAnyElementType *)this,piVar2,piVar1);
    pFVar4 = (this->ResourceLockCount).AllocatorInstance.Data + iVar3;
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)(pFVar4 + 8) = 0;
  }
  return;
}

// GetLockPriorityName @ 146e8e270

FString * __thiscall
FAIResourceLock::GetLockPriorityName(FAIResourceLock *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton == (UEnum *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_AIModule();
      Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_AIModule_EAIRequestPriority,(UObject *)pUVar1,
                         L"EAIRequestPriority");
    }
    SourceEnum = Z_Registration_Info_UEnum_EAIRequestPriority.OuterSingleton;
    _Init_thread_footer(&::_TSS0);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if ((this->Locks != 0) && ((this->Locks & 1) != 0)) {
    UEnum::GetNameStringByValue(SourceEnum,&local_18,0);
    ::FString::PrintfImpl(&local_28,L"%s, ");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Locks != 0) && ((this->Locks & 2) != 0)) {
    UEnum::GetNameStringByValue(SourceEnum,&local_18,1);
    ::FString::PrintfImpl(&local_28,L"%s, ");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Locks != 0) && ((this->Locks & 4) != 0)) {
    UEnum::GetNameStringByValue(SourceEnum,&local_18,2);
    ::FString::PrintfImpl(&local_28,L"%s, ");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Locks != 0) && ((this->Locks & 8) != 0)) {
    UEnum::GetNameStringByValue(SourceEnum,&local_18,3);
    ::FString::PrintfImpl(&local_28,L"%s, ");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((this->Locks != 0) && ((this->Locks & 0x10) != 0)) {
    UEnum::GetNameStringByValue(SourceEnum,&local_18,4);
    ::FString::PrintfImpl(&local_28,L"%s, ");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// SetLock @ 146e9f0f0

void __thiscall FAIResourceLock::SetLock(FAIResourceLock *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bUseResourceLockCount != false) {
    if ((this->ResourceLockCount).ArrayNum <= (int)(param_1 & 0xff)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->ResourceLockCount).AllocatorInstance.Data + (param_1 & 0xff);
    *pFVar1 = (FScriptContainerElement)((char)*pFVar1 + '\x01');
  }
  this->Locks = this->Locks | (ushort)(1 << (param_1 & 0x1f));
  return;
}

// SetUseResourceLockCount @ 146e9f450

void __thiscall FAIResourceLock::SetUseResourceLockCount(FAIResourceLock *this,bool param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->bUseResourceLockCount = param_1;
  piVar1 = &(this->ResourceLockCount).ArrayMax;
  piVar2 = &(this->ResourceLockCount).ArrayNum;
  this->Locks = 0;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,piVar1);
  }
  if (this->bUseResourceLockCount != false) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x10,(ForAnyElementType *)this,piVar2,piVar1);
    pFVar4 = (this->ResourceLockCount).AllocatorInstance.Data + iVar3;
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)(pFVar4 + 8) = 0;
  }
  return;
}

