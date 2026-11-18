// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 19

// ~FTestCloudInterface @ 14ec563c0

void __thiscall FTestCloudInterface::~FTestCloudInterface(FTestCloudInterface *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FTestCloudInterface__6B_;
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->UserCloud != (TSharedPtr<IOnlineUserCloud,1> *)&local_28) {
    (this->UserCloud).Object = (IOnlineUserCloud *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->UserCloud).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SharedCloud != (TSharedPtr<IOnlineSharedCloud,1> *)&local_18) {
    (this->SharedCloud).Object = (IOnlineSharedCloud *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SharedCloud).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TSharedRef<FSharedContentHandle,1>,int>
            ((TSharedRef<FSharedContentHandle,1> *)
             (this->RandomSharedFileHandles).AllocatorInstance.Data,
             (this->RandomSharedFileHandles).ArrayNum);
  pFVar1 = (this->RandomSharedFileHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FSharedContentHandle,1>,int>
            ((TSharedRef<FSharedContentHandle,1> *)(this->CloudFileHandles).AllocatorInstance.Data,
             (this->CloudFileHandles).ArrayNum);
  pFVar1 = (this->CloudFileHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserId).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnReadEnumerateSharedFileCompleteDelegate);
  pvVar2 = *(void **)&(this->OnReadEnumerateSharedFileCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReadEnumerateSharedFileCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnWriteSharedCloudFileCompleteDelegate);
  pvVar2 = *(void **)&(this->OnWriteSharedCloudFileCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteSharedCloudFileCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDeleteEnumeratedUserFilesCompleteDelegate);
  pvVar2 = *(void **)&(this->OnDeleteEnumeratedUserFilesCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDeleteEnumeratedUserFilesCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnReadEnumeratedUserFilesCompleteDelegate);
  pvVar2 = *(void **)&(this->OnReadEnumeratedUserFilesCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReadEnumeratedUserFilesCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWriteUserFileCanceledDelegate);
  pvVar2 = *(void **)&(this->OnWriteUserFileCanceledDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteUserFileCanceledDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnWriteUserCloudFileCompleteDelegate);
  pvVar2 = *(void **)&(this->OnWriteUserCloudFileCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWriteUserCloudFileCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EnumerationDelegate);
  pvVar2 = *(void **)&(this->EnumerationDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EnumerationDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedCloud).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserCloud).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Subsystem).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// CancelWriteNUserCloudFiles @ 14ecb0bc0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FTestCloudInterface::CancelWriteNUserCloudFiles
          (FTestCloudInterface *this,FUniqueNetId *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  bool bVar3;
  FDelegateHandle FVar4;
  int iVar5;
  undefined4 in_register_0000008c;
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_98,L"------------------------------------------------");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)((param_2->Data).AllocatorInstance.Data + 0x38))(param_2,local_68);
    ::FString::PrintfImpl(&local_88,L"Cancelling %d write operations for user %s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
  }
  this->WriteUserFileCanceledCount = (int)param_4;
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4.ID = (*pcVar2)();
    return (FDelegateHandle)FVar4.ID;
  }
  pIVar1 = (this->UserCloud).Object;
  (**(code **)(pIVar1->_padding_ + 200))(pIVar1,param_1);
  iVar5 = 0;
  if ((int)param_4 < 1) {
    return (FDelegateHandle)(ulong64)param_1;
  }
  do {
    if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar4.ID = (*pcVar2)();
      return (FDelegateHandle)FVar4.ID;
    }
    pIVar1 = (this->UserCloud).Object;
    pcVar2 = *(code **)(pIVar1->_padding_ + 0xc0);
    FPaths::GetExtension(&local_48,(FString *)CONCAT44(in_register_0000008c,param_3),false);
    FPaths::GetBaseFilename(&local_58,(FString *)CONCAT44(in_register_0000008c,param_3),true);
    ::FString::PrintfImpl(&local_78,L"%s%d.%s");
    (*pcVar2)(pIVar1,param_2);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < (int)param_4);
  return (FDelegateHandle)(ulong64)param_1;
}

// Cleanup @ 14ecb0fc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestCloudInterface::Cleanup(FTestCloudInterface *this)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  IOnlineSharedCloud *pIVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  FString local_28;
  FString local_18;
  
  pIVar1 = (this->UserCloud).Object;
  bVar7 = true;
  if (pIVar1 != (IOnlineUserCloud *)0x0) {
    pcVar2 = *(code **)(pIVar1->_padding_ + 0x10);
    if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    cVar6 = (*pcVar2)(pIVar1,(this->UserId).Object);
    if (cVar6 == '\0') {
      if (4 < (byte)LogOnlineCloud._0_1_) {
        ::FString::PrintfImpl(&local_28,L"Failed to cleanup user files");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      bVar7 = false;
    }
  }
  pIVar3 = (this->SharedCloud).Object;
  if ((pIVar3 != (IOnlineSharedCloud *)0x0) &&
     (cVar6 = (**(code **)(pIVar3->_padding_ + 0x10))(), cVar6 == '\0')) {
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_18,L"Failed to cleanup shared files");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  return bVar7;
}

// DeleteEnumeratedUserFiles @ 14ecb5a90

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FTestCloudInterface::DeleteEnumeratedUserFiles
          (FTestCloudInterface *this,bool param_1,bool param_2,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  int iVar1;
  IOnlineUserCloud *pIVar2;
  FUniqueNetId *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  FCloudFileHeader *pFVar6;
  bool bVar7;
  uint uVar8;
  FDelegateHandle FVar9;
  undefined8 *puVar10;
  undefined7 in_register_00000011;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined1 local_res18;
  undefined1 local_res20;
  undefined8 in_stack_00000028;
  FCloudFileHeader *local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58 [3];
  
  puVar11 = (undefined8 *)CONCAT71(in_register_00000011,param_1);
  local_res20 = SUB81(param_3,0);
  local_98 = (FCloudFileHeader *)0x0;
  local_90 = 0;
  local_res10 = puVar11;
  local_res18 = param_2;
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    FVar9.ID = (*pcVar4)();
    return (FDelegateHandle)FVar9.ID;
  }
  pIVar2 = (this->UserCloud).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x48);
  if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    FVar9.ID = (*pcVar4)();
    return (FDelegateHandle)FVar9.ID;
  }
  (*pcVar4)(pIVar2,(this->UserId).Object,&local_98);
  this->DeleteUserFileCount = (int)local_90;
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_88,L"------------------------------------------------");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlineCloud._0_1_) {
      if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        FVar9.ID = (*pcVar4)();
        return (FDelegateHandle)FVar9.ID;
      }
      pFVar3 = (this->UserId).Object;
      (**(code **)(*(longlong *)pFVar3 + 0x38))(pFVar3,local_58);
      ::FString::PrintfImpl
                (&local_78,L"Deleting %d files from the cloud for user %s CLOUD: %s LOCAL: %s");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
  }
  iVar1 = this->DeleteUserFileCount;
  *puVar11 = 0;
  if (iVar1 < 1) {
    EnumerateUserFiles(this);
  }
  else {
    if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      FVar9.ID = (*pcVar4)();
      return (FDelegateHandle)FVar9.ID;
    }
    pIVar2 = (this->UserCloud).Object;
    puVar10 = (undefined8 *)
              (**(code **)(pIVar2->_padding_ + 0xf0))(pIVar2,local_res8,in_stack_00000028);
    uVar5 = local_res20;
    uVar12 = 0;
    *puVar11 = *puVar10;
    if (0 < this->DeleteUserFileCount) {
      do {
        if (4 < (byte)LogOnlineCloud._0_1_) {
          uVar8 = 0;
          if ((int)uVar12 < (int)local_90) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              FVar9.ID = (*pcVar4)();
              return (FDelegateHandle)FVar9.ID;
            }
          }
          uVar8 = 0;
          if ((int)uVar12 < (int)local_90) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            FVar9.ID = (*pcVar4)();
            return (FDelegateHandle)FVar9.ID;
          }
          ::FString::PrintfImpl(&local_68,L"\tFileName:%s Size:%d");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          FVar9.ID = (*pcVar4)();
          return (FDelegateHandle)FVar9.ID;
        }
        pIVar2 = (this->UserCloud).Object;
        pcVar4 = *(code **)(pIVar2->_padding_ + 0xe8);
        uVar8 = 0;
        if ((int)uVar12 < (int)local_90) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          FVar9.ID = (*pcVar4)();
          return (FDelegateHandle)FVar9.ID;
        }
        pFVar6 = local_98;
        if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          FVar9.ID = (*pcVar4)();
          return (FDelegateHandle)FVar9.ID;
        }
        (*pcVar4)(pIVar2,(this->UserId).Object,&pFVar6[(int)uVar12].FileName,local_res18,uVar5);
        uVar12 = uVar12 + 1;
        puVar11 = local_res10;
      } while ((int)uVar12 < this->DeleteUserFileCount);
    }
  }
  DestructItems<FCloudFileHeader,int>(local_98,(int)local_90);
  if (local_98 != (FCloudFileHeader *)0x0) {
    FMemory::Free(local_98);
  }
  return (FDelegateHandle)(ulong64)puVar11;
}

// EnumerateUserFiles @ 14ecb7890

void __thiscall FTestCloudInterface::EnumerateUserFiles(FTestCloudInterface *this)

{
  IOnlineUserCloud *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  ulong64 *puVar3;
  undefined1 local_res8 [8];
  
  if ((this->UserCloud).Object == (IOnlineUserCloud *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pIVar1 = (this->UserCloud).Object;
  puVar3 = (ulong64 *)
           (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,local_res8,&this->EnumerationDelegate);
  (this->EnumerationDelegateHandle).ID = *puVar3;
  if ((this->UserCloud).Object == (IOnlineUserCloud *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pIVar1 = (this->UserCloud).Object;
  UNRECOVERED_JUMPTABLE = *(code **)(pIVar1->_padding_ + 0x20);
  if ((this->UserId).Object == (FUniqueNetId *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014ecb7970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pIVar1,(this->UserId).Object);
  return;
}

// OnCancelWriteUserCloudFileComplete @ 14ecbe860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestCloudInterface::OnCancelWriteUserCloudFileComplete
          (FTestCloudInterface *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_18);
    ::FString::PrintfImpl
              (&local_48,
               L"Cancellation of user file writing complete Success:%d UserId:%s FileName:%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if ((this->bOverallSuccess == false) || (!param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  NumCancelledWriteCount = NumCancelledWriteCount + 1;
  this->bOverallSuccess = bVar3;
  if (NumCancelledWriteCount == this->WriteUserFileCanceledCount) {
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_38,L"Cancel %d User File Writings Complete!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogOnlineCloud._0_1_) {
        ::FString::PrintfImpl(&local_28,L"------------------------------------------------");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->UserCloud).Object;
    (**(code **)(pIVar1->_padding_ + 0xd0))(pIVar1,&this->OnWriteUserFileCanceledDelegateHandle);
    NumCancelledWriteCount = 0;
  }
  return;
}

// OnDeleteEnumeratedUserFilesComplete @ 14ecbec60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestCloudInterface::OnDeleteEnumeratedUserFilesComplete
          (FTestCloudInterface *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_18);
    ::FString::PrintfImpl(&local_48,L"Delete user file complete Success:%d UserId:%s FileName:%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if ((this->bOverallSuccess == false) || (!param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  NumDeletedCount = NumDeletedCount + 1;
  this->bOverallSuccess = bVar3;
  if (NumDeletedCount != this->DeleteUserFileCount) {
    return;
  }
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_38,L"Delete %d User Files Complete!");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_28,L"------------------------------------------------");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->UserCloud).Object;
  (**(code **)(pIVar1->_padding_ + 0xf8))
            (pIVar1,&this->OnDeleteEnumeratedUserFilesCompleteDelegateHandle);
  NumDeletedCount = 0;
  EnumerateUserFiles(this);
  return;
}

// OnEnumerateUserFilesComplete @ 14ecbf030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestCloudInterface::OnEnumerateUserFilesComplete
          (FTestCloudInterface *this,bool param_1,FUniqueNetId *param_2)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  EUserCloudTestPhase EVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FCloudFileHeader *local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_68,L"------------------------------------------------");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlineCloud._0_1_) {
      (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_38);
      ::FString::PrintfImpl(&local_58,L"OnEnumerateUserFilesComplete Success:%d UserId:%s");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
  }
  if ((this->bOverallSuccess == false) || (!param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bOverallSuccess = bVar3;
  local_78 = (FCloudFileHeader *)0x0;
  local_70 = 0;
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->UserCloud).Object;
  (**(code **)(pIVar1->_padding_ + 0x48))(pIVar1,param_2,&local_78);
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->UserCloud).Object;
  (**(code **)(pIVar1->_padding_ + 0x30))(pIVar1,&this->EnumerationDelegateHandle);
  uVar7 = 0;
  iVar6 = (int)local_70;
  if (0 < (int)local_70) {
    do {
      if (4 < (byte)LogOnlineCloud._0_1_) {
        uVar8 = ~uVar7 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = uVar8;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = (int)local_70;
        }
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = uVar8;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = (int)local_70;
        }
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = uVar8;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = (int)local_70;
        }
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::PrintfImpl(&local_48,L"\t%d FileName:%s DLName:%s Hash:%s Size:%d");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        iVar6 = (int)local_70;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  EVar5 = this->CurrentTestPhase + EnumerateFiles;
  if (0xc < (int)EVar5) {
    EVar5 = End;
  }
  this->CurrentTestPhase = EVar5;
  DestructItems<FCloudFileHeader,int>(local_78,iVar6);
  if (local_78 != (FCloudFileHeader *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// OnReadEnumeratedSharedFileCompleteDelegate @ 14ecc10d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestCloudInterface::OnReadEnumeratedSharedFileCompleteDelegate
          (FTestCloudInterface *this,bool param_1,FSharedContentHandle *param_2)

{
  IOnlineSharedCloud *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)((longlong)*param_2 + 0x30))(param_2,local_18);
    ::FString::PrintfImpl(&local_48,L"Read shared file complete Success:%d SharedHandle:%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if ((this->bOverallSuccess == false) || (!param_1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  NumReadCount = NumReadCount + 1;
  this->bOverallSuccess = bVar3;
  if (NumReadCount == this->ReadSharedFileCount) {
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_38,L"Read %d Shared Files Complete!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogOnlineCloud._0_1_) {
        ::FString::PrintfImpl(&local_28,L"------------------------------------------------");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->SharedCloud).Object;
    (**(code **)(pIVar1->_padding_ + 0x30))
              (pIVar1,&this->OnReadEnumerateSharedFileCompleteDelegateHandle);
    NumReadCount = 0;
    EnumerateUserFiles(this);
  }
  return;
}

// OnReadEnumeratedUserFilesComplete @ 14ecc12b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestCloudInterface::OnReadEnumeratedUserFilesComplete
          (FTestCloudInterface *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *local_68;
  undefined8 local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  cVar4 = '\0';
  if (param_1) {
    local_68 = (void *)0x0;
    local_60 = 0;
    if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->UserCloud).Object;
    cVar4 = (**(code **)(pIVar1->_padding_ + 8))(pIVar1,param_2,param_3,&local_68);
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_28);
    ::FString::PrintfImpl
              (&local_58,L"Read user file complete Success:%d UserId:%s FileName:%s Size:%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  if ((this->bOverallSuccess == false) || (cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  NumReadCount = NumReadCount + 1;
  this->bOverallSuccess = bVar3;
  if (NumReadCount == this->ReadUserFileCount) {
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_48,L"Read %d User Files Complete!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogOnlineCloud._0_1_) {
        ::FString::PrintfImpl(&local_38,L"------------------------------------------------");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
    if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->UserCloud).Object;
    (**(code **)(pIVar1->_padding_ + 0x60))
              (pIVar1,&this->OnReadEnumeratedUserFilesCompleteDelegateHandle);
    NumReadCount = 0;
    EnumerateUserFiles(this);
  }
  return;
}

// OnWriteSharedCloudFileComplete @ 14ecc2410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestCloudInterface::OnWriteSharedCloudFileComplete
          (FTestCloudInterface *this,bool param_1,FUniqueNetId *param_2,FString *param_3,
          TSharedRef<FSharedContentHandle,1> *param_4)

{
  int *piVar1;
  TArray<TSharedRef<FSharedContentHandle,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<FSharedContentHandle,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  IOnlineSharedCloud *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  void *local_28 [2];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)((longlong)*param_4->Object + 0x30))(param_4->Object,local_28);
    (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_38);
    ::FString::PrintfImpl
              (&local_68,
               L"Write shared file complete Success:%d UserId:%s FileName:%s SharedHandle:%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  if ((this->bOverallSuccess == false) || (!param_1)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  pTVar2 = &this->CloudFileHandles;
  this->bOverallSuccess = bVar7;
  pTVar3 = (TSharedRef<FSharedContentHandle,1> *)(pTVar2->AllocatorInstance).Data;
  if (((pTVar3 <= param_4) && (param_4 < pTVar3 + (this->CloudFileHandles).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->CloudFileHandles).ArrayNum;
  piVar1 = &(this->CloudFileHandles).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->CloudFileHandles).ArrayNum = iVar8 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  *(FSharedContentHandle **)pFVar9 = param_4->Object;
  pTVar4 = (param_4->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  NumWrittenCount = NumWrittenCount + 1;
  if (NumWrittenCount == this->WriteSharedCloudFileCount) {
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_58,L"Write %d Shared Files Complete!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogOnlineCloud._0_1_) {
        ::FString::PrintfImpl(&local_48,L"------------------------------------------------");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar5 = (this->SharedCloud).Object;
    (**(code **)(pIVar5->_padding_ + 0x58))
              (pIVar5,&this->OnWriteSharedCloudFileCompleteDelegateHandle);
    NumWrittenCount = 0;
    EnumerateUserFiles(this);
  }
  return;
}

// OnWriteUserCloudFileComplete @ 14ecc2740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestCloudInterface::OnWriteUserCloudFileComplete
          (FTestCloudInterface *this,bool param_1,FUniqueNetId *param_2,FString *param_3)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)(*(longlong *)param_2 + 0x38))(param_2,local_18);
    ::FString::PrintfImpl(&local_48,L"Write user file complete Success:%d UserId:%s FileName:%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  if ((this->bOverallSuccess == false) || ((!param_1 && (this->bIsFailureExpected == false)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  NumWrittenCount = NumWrittenCount + 1;
  this->bOverallSuccess = bVar3;
  if (NumWrittenCount != this->WriteUserCloudFileCount) {
    return;
  }
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_38,L"Write %d User Files Complete!");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_28,L"------------------------------------------------");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->UserCloud).Object;
  (**(code **)(pIVar1->_padding_ + 0xa8))(pIVar1,&this->OnWriteUserCloudFileCompleteDelegateHandle);
  NumWrittenCount = 0;
  this->bIsFailureExpected = false;
  EnumerateUserFiles(this);
  return;
}

// ReadEnumeratedSharedFiles @ 14ecc4b60

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FTestCloudInterface::ReadEnumeratedSharedFiles
          (FTestCloudInterface *this,bool param_1,
          TDelegate<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  FDelegateHandle FVar5;
  undefined8 *puVar6;
  undefined7 in_register_00000011;
  undefined8 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  IOnlineSharedCloud *pIVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  void *local_38 [2];
  
  puVar7 = (undefined8 *)CONCAT71(in_register_00000011,param_1);
  this->ReadSharedFileCount = (&this->CloudFileHandles)[(ulonglong)param_2 & 0xff].ArrayNum;
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_88,L"------------------------------------------------");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_78,L"Reading %d enumerated shared files");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = this->ReadSharedFileCount;
  *puVar7 = 0;
  if (iVar1 < 1) {
    EnumerateUserFiles(this);
  }
  else {
    if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar9 = (code *)swi(3);
      FVar5.ID = (*pcVar9)();
      return (FDelegateHandle)FVar5.ID;
    }
    pIVar10 = (this->SharedCloud).Object;
    puVar6 = (undefined8 *)(**(code **)(pIVar10->_padding_ + 0x28))(pIVar10,local_res8);
    uVar11 = 0;
    *puVar7 = *puVar6;
    if (0 < this->ReadSharedFileCount) {
      lVar12 = 0;
      do {
        if ((char)param_2 == '\0') {
          if (4 < (byte)LogOnlineCloud._0_1_) {
            uVar4 = 0;
            if ((int)uVar11 < (this->CloudFileHandles).ArrayNum) {
              uVar4 = ~uVar11 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar9 = (code *)swi(3);
              FVar5.ID = (*pcVar9)();
              return (FDelegateHandle)FVar5.ID;
            }
            plVar2 = *(longlong **)((this->CloudFileHandles).AllocatorInstance.Data + lVar12);
            (**(code **)(*plVar2 + 0x30))(plVar2,local_38);
            ::FString::PrintfImpl(&local_58,L"\tHandle:%s");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_38[0] != (void *)0x0) {
              FMemory::Free(local_38[0]);
            }
          }
          if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar9 = (code *)swi(3);
            FVar5.ID = (*pcVar9)();
            return (FDelegateHandle)FVar5.ID;
          }
          pIVar10 = (this->SharedCloud).Object;
          pcVar9 = *(code **)(pIVar10->_padding_ + 0x20);
          uVar4 = 0;
          if ((int)uVar11 < (this->CloudFileHandles).ArrayNum) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar9 = (code *)swi(3);
            FVar5.ID = (*pcVar9)();
            return (FDelegateHandle)FVar5.ID;
          }
          uVar8 = *(undefined8 *)((this->CloudFileHandles).AllocatorInstance.Data + lVar12);
        }
        else {
          if (4 < (byte)LogOnlineCloud._0_1_) {
            uVar4 = 0;
            if ((int)uVar11 < (this->RandomSharedFileHandles).ArrayNum) {
              uVar4 = ~uVar11 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar9 = (code *)swi(3);
              FVar5.ID = (*pcVar9)();
              return (FDelegateHandle)FVar5.ID;
            }
            plVar2 = *(longlong **)((this->RandomSharedFileHandles).AllocatorInstance.Data + lVar12)
            ;
            (**(code **)(*plVar2 + 0x30))(plVar2,local_48);
            ::FString::PrintfImpl(&local_68,L"\tHandle:%s");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (local_48[0] != (void *)0x0) {
              FMemory::Free(local_48[0]);
            }
          }
          if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar9 = (code *)swi(3);
            FVar5.ID = (*pcVar9)();
            return (FDelegateHandle)FVar5.ID;
          }
          pIVar10 = (this->SharedCloud).Object;
          pcVar9 = *(code **)(pIVar10->_padding_ + 0x20);
          uVar4 = 0;
          if ((int)uVar11 < (this->RandomSharedFileHandles).ArrayNum) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar9 = (code *)swi(3);
            FVar5.ID = (*pcVar9)();
            return (FDelegateHandle)FVar5.ID;
          }
          uVar8 = *(undefined8 *)((this->RandomSharedFileHandles).AllocatorInstance.Data + lVar12);
        }
        (*pcVar9)(pIVar10,uVar8);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x10;
        if (this->ReadSharedFileCount <= (int)uVar11) {
          return (FDelegateHandle)(ulong64)puVar7;
        }
      } while( true );
    }
  }
  return (FDelegateHandle)(ulong64)puVar7;
}

// ReadEnumeratedUserFiles @ 14ecc5020

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FTestCloudInterface::ReadEnumeratedUserFiles
          (FTestCloudInterface *this,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  int iVar1;
  IOnlineUserCloud *pIVar2;
  FUniqueNetId *pFVar3;
  code *pcVar4;
  FCloudFileHeader *pFVar5;
  bool bVar6;
  uint uVar7;
  FDelegateHandle FVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  FCloudFileHeader *local_78;
  undefined8 local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  
  local_78 = (FCloudFileHeader *)0x0;
  local_70 = 0;
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar8.ID = (*pcVar4)();
    return (FDelegateHandle)FVar8.ID;
  }
  pIVar2 = (this->UserCloud).Object;
  pcVar4 = *(code **)(pIVar2->_padding_ + 0x48);
  if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    FVar8.ID = (*pcVar4)();
    return (FDelegateHandle)FVar8.ID;
  }
  (*pcVar4)(pIVar2,(this->UserId).Object,&local_78);
  this->ReadUserFileCount = (int)local_70;
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_68,L"------------------------------------------------");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogOnlineCloud._0_1_) {
      if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        FVar8.ID = (*pcVar4)();
        return (FDelegateHandle)FVar8.ID;
      }
      pFVar3 = (this->UserId).Object;
      (**(code **)(*(longlong *)pFVar3 + 0x38))(pFVar3,local_38);
      ::FString::PrintfImpl(&local_58,L"Reading %d enumerated files for user %s");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
  }
  iVar1 = this->ReadUserFileCount;
  *(undefined8 *)param_1 = 0;
  if (iVar1 < 1) {
    EnumerateUserFiles(this);
  }
  else {
    if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      FVar8.ID = (*pcVar4)();
      return (FDelegateHandle)FVar8.ID;
    }
    pIVar2 = (this->UserCloud).Object;
    puVar9 = (undefined8 *)(**(code **)(pIVar2->_padding_ + 0x58))(pIVar2,local_res8);
    uVar10 = 0;
    *(undefined8 *)param_1 = *puVar9;
    if (0 < this->ReadUserFileCount) {
      do {
        if (4 < (byte)LogOnlineCloud._0_1_) {
          uVar7 = 0;
          if ((int)uVar10 < (int)local_70) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              FVar8.ID = (*pcVar4)();
              return (FDelegateHandle)FVar8.ID;
            }
          }
          uVar7 = 0;
          if ((int)uVar10 < (int)local_70) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            FVar8.ID = (*pcVar4)();
            return (FDelegateHandle)FVar8.ID;
          }
          ::FString::PrintfImpl(&local_48,L"\tFileName:%s Size:%d");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar8.ID = (*pcVar4)();
          return (FDelegateHandle)FVar8.ID;
        }
        pIVar2 = (this->UserCloud).Object;
        pcVar4 = *(code **)(pIVar2->_padding_ + 0x50);
        uVar7 = 0;
        if ((int)uVar10 < (int)local_70) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar8.ID = (*pcVar4)();
          return (FDelegateHandle)FVar8.ID;
        }
        pFVar5 = local_78;
        if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          FVar8.ID = (*pcVar4)();
          return (FDelegateHandle)FVar8.ID;
        }
        (*pcVar4)(pIVar2,(this->UserId).Object,&pFVar5[(int)uVar10].FileName);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < this->ReadUserFileCount);
    }
  }
  DestructItems<FCloudFileHeader,int>(local_78,(int)local_70);
  if (local_78 != (FCloudFileHeader *)0x0) {
    FMemory::Free(local_78);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// Test @ 14eccaae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestCloudInterface::Test(FTestCloudInterface *this,UWorld *param_1)

{
  TSharedPtr<IOnlineUserCloud,1> *pTVar1;
  TSharedPtr<IOnlineSharedCloud,1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  IOnlineSharedCloud *pIVar11;
  wchar_t *pwVar12;
  FName local_res8;
  undefined1 local_2c8 [8];
  FDelegateAllocation local_2c0;
  undefined1 local_2b0 [8];
  FDelegateAllocation local_2a8;
  undefined1 local_298 [8];
  FDelegateAllocation local_290;
  undefined1 local_280 [8];
  FDelegateAllocation local_278;
  undefined1 local_268 [8];
  FDelegateAllocation local_260;
  undefined1 local_250 [8];
  FDelegateAllocation local_248;
  undefined1 local_238 [8];
  FDelegateAllocation local_230;
  FString local_220;
  FString local_210;
  FDestructionSentinel local_200;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDelegateAllocation *local_140;
  FDestructionSentinel local_138;
  FDelegateAllocation *local_120;
  FDestructionSentinel local_118;
  FDelegateAllocation *local_100;
  FDestructionSentinel local_f8;
  FDelegateAllocation *local_e0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if ((this->Subsystem).Data.ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(this->Subsystem).Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,pwVar12);
  pIVar7 = IOnlineSubsystem::Get(pFVar6);
  if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnlineSub",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestCloudInterface.cpp"
                         ,0xc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_78);
  lVar3 = *plVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  if (lVar3 != 0) {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_58);
    if ((*plVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar9 = (undefined8 *)(**(code **)(*(longlong *)*plVar8 + 0x110))((longlong *)*plVar8,local_68)
    ;
    if (&this->UserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar9) {
      (this->UserId).Object = (FUniqueNetId *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  if ((this->UserId).Object == (FUniqueNetId *)0x0) {
    if ((byte)LogOnlineCloud._0_1_ < 3) goto LAB_14eccb473;
    ::FString::PrintfImpl(&local_210,L"Cloud test failed.  No logged in user.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    local_220.Data.AllocatorInstance.Data = local_210.Data.AllocatorInstance.Data;
  }
  else {
    puVar9 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0x50))(pIVar7,local_48);
    pTVar1 = &this->UserCloud;
    if (pTVar1 != (TSharedPtr<IOnlineUserCloud,1> *)puVar9) {
      pTVar1->Object = (IOnlineUserCloud *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UserCloud).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    if (pTVar1->Object != (IOnlineUserCloud *)0x0) {
      local_2c8 = (undefined1  [8])0x0;
      local_2c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
                 (FWriteAccessScope *)&local_158);
      local_140 = &local_2c0;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_2c0);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AX_NAEBVFUniqueNetId___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestCloudInterface____A6AX_NAEBVFUniqueNetId___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[4] = OnEnumerateUserFilesComplete;
        puVar9[3] = this;
      }
      if (local_158.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EnumerationDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c8,
                 (FWriteAccessScope *)&local_200);
      if ((local_2c0.DelegateSize != 0) &&
         (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2c0,0,0,0x10);
        local_2c0.DelegateSize = 0;
      }
      if (local_200.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
      }
      if (local_2c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2c8);
      local_2b0 = (undefined1  [8])0x0;
      local_2a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2a8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
                 (FWriteAccessScope *)&local_138);
      local_120 = &local_2a8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_2a8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        puVar9[4] = OnWriteUserCloudFileComplete;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestCloudInterface____A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[3] = this;
      }
      if (local_138.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &this->OnWriteUserCloudFileCompleteDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
                 (FWriteAccessScope *)&local_1e8);
      if ((local_2a8.DelegateSize != 0) &&
         (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2a8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2a8,0,0,0x10);
        local_2a8.DelegateSize = 0;
      }
      if (local_1e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
      }
      if (local_2a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2a8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2b0);
      local_298 = (undefined1  [8])0x0;
      local_290.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_290.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_118);
      local_100 = &local_290;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_290);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        puVar9[4] = OnCancelWriteUserCloudFileComplete;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestCloudInterface____A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[3] = this;
      }
      if (local_118.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWriteUserFileCanceledDelegate
                 ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
                 (FWriteAccessScope *)&local_1d0);
      if ((local_290.DelegateSize != 0) &&
         (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_290.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_290,0,0,0x10);
        local_290.DelegateSize = 0;
      }
      if (local_1d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
      }
      if (local_290.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_290.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_298);
      local_280 = (undefined1  [8])0x0;
      local_278.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_278.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
                 (FWriteAccessScope *)&local_f8);
      local_e0 = &local_278;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_278);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        puVar9[4] = OnReadEnumeratedUserFilesComplete;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestCloudInterface____A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[3] = this;
      }
      if (local_f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &this->OnReadEnumeratedUserFilesCompleteDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_280);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_280,
                 (FWriteAccessScope *)&local_1b8);
      if ((local_278.DelegateSize != 0) &&
         (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_278.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_278,0,0,0x10);
        local_278.DelegateSize = 0;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (local_278.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_278.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_280);
      local_268 = (undefined1  [8])0x0;
      local_260.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_260.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
                 (FWriteAccessScope *)&local_d8);
      local_c0 = &local_260;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_260);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        puVar9[4] = OnDeleteEnumeratedUserFilesComplete;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestCloudInterface____A6AX_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[3] = this;
      }
      if (local_d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &this->OnDeleteEnumeratedUserFilesCompleteDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_268);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_268,
                 (FWriteAccessScope *)&local_1a0);
      if ((local_260.DelegateSize != 0) &&
         (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_260.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_260,0,0,0x10);
        local_260.DelegateSize = 0;
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
      if (local_260.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_260.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_268);
      puVar9 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0x48))(pIVar7,local_38);
      pTVar2 = &this->SharedCloud;
      if (pTVar2 != (TSharedPtr<IOnlineSharedCloud,1> *)puVar9) {
        pTVar2->Object = (IOnlineSharedCloud *)*puVar9;
        *puVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SharedCloud).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      if (pTVar2->Object == (IOnlineSharedCloud *)0x0) {
        return;
      }
      local_250 = (undefined1  [8])0x0;
      local_248.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_248.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
                 (FWriteAccessScope *)&local_b8);
      local_a0 = &local_248;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_248);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AX_NAEBVFUniqueNetId__AEBVFString__AEBV__TSharedRef_VFSharedContentHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestCloudInterface____A6AX_NAEBVFUniqueNetId__AEBVFString__AEBV__TSharedRef_VFSharedContentHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[4] = OnWriteSharedCloudFileComplete;
        puVar9[3] = this;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &this->OnWriteSharedCloudFileCompleteDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_250);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
                 (FWriteAccessScope *)&local_188);
      if ((local_248.DelegateSize != 0) &&
         (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_248.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_248,0,0,0x10);
        local_248.DelegateSize = 0;
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      if (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_248.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_250);
      local_238 = (undefined1  [8])0x0;
      local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_230.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                 (FWriteAccessScope *)&local_98);
      local_80 = &local_230;
      puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_230);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6AX_NAEBVFSharedContentHandle___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestCloudInterface____A6AX_NAEBVFSharedContentHandle___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar9[4] = OnReadEnumeratedSharedFileCompleteDelegate;
        puVar9[3] = this;
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &this->OnReadEnumerateSharedFileCompleteDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_238);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                 (FWriteAccessScope *)&local_170);
      if ((local_230.DelegateSize != 0) &&
         (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_230.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_230,0,0,0x10);
        local_230.DelegateSize = 0;
      }
      if (local_170.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
      }
      if (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_230.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_238);
      pIVar11 = TSharedPtr<IOnlineSharedCloud,1>::operator->(&this->SharedCloud);
      (**(code **)(pIVar11->_padding_ + 0x70))(pIVar11,&this->RandomSharedFileHandles);
      return;
    }
    if ((byte)LogOnlineCloud._0_1_ < 3) goto LAB_14eccb473;
    ::FString::PrintfImpl(&local_220,L"Cloud test failed.  Cloud API not supported.");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
LAB_14eccb473:
  (**(code **)this->_padding_)(this,1);
  return;
}

// Tick @ 14eccf2b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestCloudInterface::Tick(FTestCloudInterface *this,float param_1)

{
  int *piVar1;
  IOnlineUserCloud *pIVar2;
  code *pcVar3;
  IOnlineSharedCloud *pIVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  EUserCloudTestPhase EVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestCloudInterface::Tick(float)_::_2_::FStat_STAT_FTestCloudInterface_Tick>
  FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FDelegateHandle FVar15;
  FString *pFVar16;
  FUniqueNetId *pFVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  wchar_t *pwVar21;
  TDelegate<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy> *pTVar22;
  char *in_R9;
  undefined7 uVar24;
  TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
  *pTVar23;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar25;
  wchar_t *in_stack_fffffffffffffe70;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FStatMessage local_f8;
  FName local_e8;
  FName local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [16];
  FUniqueNetId local_a8;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTestCloudInterface_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestCloudInterface::Tick(float)_::_2_::FStat_STAT_FTestCloudInterface_Tick>
         )0x0) {
      pFVar13 = ::FName::FName(&local_e8,"STAT_FTestCloudInterface_Tick");
      in_R9 = "STATGROUP_Quick";
      in_stack_fffffffffffffe70 = L"Quick";
      uVar25 = 1;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestCloudInterface_Tick,*pFVar13,
                 L"STAT_FTestCloudInterface_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_FTestCloudInterface_Tick;
  if (StatPtr_STAT_FTestCloudInterface_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestCloudInterface::Tick(float)_::_2_::FStat_STAT_FTestCloudInterface_Tick>
       )0x0) {
    pFVar13 = ::FName::FName(&local_e0,"STAT_FTestCloudInterface_Tick");
    in_R9 = "STATGROUP_Quick";
    in_stack_fffffffffffffe70 = L"Quick";
    uVar25 = 1;
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FTestCloudInterface::Tick(float)_::_2_::FStat_STAT_FTestCloudInterface_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FTestCloudInterface_Tick,
                          *pFVar13,L"STAT_FTestCloudInterface_Tick","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar5 = false;
  bVar7 = false;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar18 == 0)) {
LAB_14eccf427:
    bVar6 = false;
    FVar20.ComparisonIndex.Value = 0;
    FVar20.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        in_R9 = (char *)0x0;
        local_res18.ComparisonIndex.Value = FVar19.Value;
        local_res18.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestCloudInterface.cpp"
                   ,0x38);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14eccf427;
    local_res20.s.LowPart = FVar19.Value;
    local_res20.s.HighPart = uVar18;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
  }
  pwVar21 = (wchar_t *)(ulonglong)this->LastTestPhase;
  EVar12 = this->CurrentTestPhase;
  if (EVar12 == this->LastTestPhase) goto LAB_14eccf75c;
  if (this->bOverallSuccess == false) {
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_148,L"Testing failed in phase %d");
      pwVar21 = L"OSS: ";
      in_R9 = (char *)L"";
      if (local_148.Data.ArrayNum != 0) {
        in_R9 = (char *)local_148.Data.AllocatorInstance.Data;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    this->CurrentTestPhase = End;
    EVar12 = End;
  }
  if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) && (6 < (int)EVar12)) {
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_138,L"Skipping shared cloud tests");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    this->CurrentTestPhase = End;
switchD_14eccf6e5_caseD_c:
    if (this->bOverallSuccess == false) {
LAB_14eccf648:
      bVar11 = false;
    }
    else {
      pIVar2 = (this->UserCloud).Object;
      bVar11 = true;
      if (pIVar2 != (IOnlineUserCloud *)0x0) {
        pcVar3 = *(code **)(pIVar2->_padding_ + 0x10);
        if (((this->UserId).Object == (FUniqueNetId *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        cVar10 = (*pcVar3)(pIVar2,(this->UserId).Object);
        if (cVar10 == '\0') {
          if (4 < (byte)LogOnlineCloud._0_1_) {
            ::FString::PrintfImpl(&local_128,L"Failed to cleanup user files");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
          }
          bVar11 = false;
        }
      }
      pIVar4 = (this->SharedCloud).Object;
      if ((pIVar4 != (IOnlineSharedCloud *)0x0) &&
         (cVar10 = (**(code **)(pIVar4->_padding_ + 0x10))(), cVar10 == '\0')) {
        if (4 < (byte)LogOnlineCloud._0_1_) {
          ::FString::PrintfImpl(&local_118,L"Failed to cleanup shared files");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14eccf648;
      }
      if (!bVar11) goto LAB_14eccf648;
      bVar11 = true;
    }
    this->bOverallSuccess = bVar11;
    if (4 < (byte)LogOnlineCloud._0_1_) {
      ::FString::PrintfImpl(&local_108,L"TESTING COMPLETE Success:%s!");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)this->_padding_)(this,1);
    bVar11 = false;
    goto LAB_14eccf75f;
  }
  uVar24 = (undefined7)((ulonglong)in_R9 >> 8);
  switch(EVar12) {
  case EnumerateFiles:
    EnumerateUserFiles(this);
    break;
  case WriteFiles:
    pFVar16 = ::FString::FString(&local_80,L"UserCloud.bin");
    pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(&this->UserId);
    FVar15 = WriteNUserCloudFiles
                       (this,(FUniqueNetId *)local_d8,(FString *)pFVar17,(int)pFVar16,true,
                        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                         *)((ulonglong)in_stack_fffffffffffffe70 & 0xffffffffffffff00));
                    /* WARNING: Load size is inaccurate */
    (this->OnWriteUserCloudFileCompleteDelegateHandle).ID = *FVar15.ID;
    local_50.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    goto LAB_14eccf746;
  case ReadFiles:
    FVar15 = ReadEnumeratedUserFiles
                       (this,(TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                              *)(local_d8 + 8));
                    /* WARNING: Load size is inaccurate */
    (this->OnReadEnumeratedUserFilesCompleteDelegateHandle).ID = *FVar15.ID;
    break;
  case DeleteFilesLocally:
    pTVar23 = (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
               *)CONCAT71(uVar24,1);
    cVar10 = (char)local_c8;
    bVar11 = false;
    goto LAB_14eccf86a;
  case DeleteFilesInCloud:
    pTVar23 = (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
               *)0x0;
    cVar10 = (char)local_c0;
    bVar11 = true;
    goto LAB_14eccf86a;
  case CancelWritingFiles:
    pFVar16 = ::FString::FString(&local_70,L"UserCloud.bin");
    pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(&this->UserId);
    FVar15 = WriteNUserCloudFiles
                       (this,(FUniqueNetId *)local_b8,(FString *)pFVar17,(int)pFVar16,true,
                        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                         *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe70 >> 8),1));
                    /* WARNING: Load size is inaccurate */
    (this->OnWriteUserCloudFileCompleteDelegateHandle).ID = *FVar15.ID;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    pFVar16 = ::FString::FString(&local_60,L"UserCloud.bin");
    pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(&this->UserId);
    FVar15 = CancelWriteNUserCloudFiles
                       (this,(FUniqueNetId *)(local_b8 + 8),(FString *)pFVar17,(int)pFVar16,
                        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                         *)CONCAT44(uVar25,5));
                    /* WARNING: Load size is inaccurate */
    (this->OnWriteUserFileCanceledDelegateHandle).ID = *FVar15.ID;
    local_50.Data.AllocatorInstance.Data = local_60.Data.AllocatorInstance.Data;
    goto LAB_14eccf746;
  case WriteSharedFiles:
    pFVar16 = ::FString::FString(&local_50,L"SharedCloud.bin");
    pFVar17 = TSharedPtr<FUniqueNetId_const_,1>::operator*<FUniqueNetId_const_>(&this->UserId);
    FVar15 = WriteNSharedCloudFiles
                       (this,&local_a8,(FString *)pFVar17,(int)pFVar16,
                        (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
                         *)CONCAT44(uVar25,0xf));
                    /* WARNING: Load size is inaccurate */
    (this->OnWriteSharedCloudFileCompleteDelegateHandle).ID = *FVar15.ID;
LAB_14eccf746:
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    break;
  case ReadSharedFiles:
    pTVar22 = (TDelegate<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
               *)0x0;
    cVar10 = (char)&local_a8 + '\b';
    goto LAB_14eccf9af;
  case DeleteSharedFilesInCloud:
    pTVar23 = (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
               *)0x0;
    cVar10 = (char)&local_a8 + '\x10';
    bVar11 = true;
    goto LAB_14eccf86a;
  case ReadRandomSharedFiles:
    pTVar22 = (TDelegate<void___cdecl(bool,FSharedContentHandle_const_&),FDefaultDelegateUserPolicy>
               *)CONCAT71((int7)((ulonglong)pwVar21 >> 8),1);
    cVar10 = (char)local_90;
LAB_14eccf9af:
    FVar15 = ReadEnumeratedSharedFiles(this,(bool)cVar10,pTVar22);
                    /* WARNING: Load size is inaccurate */
    (this->OnReadEnumerateSharedFileCompleteDelegateHandle).ID = *FVar15.ID;
    break;
  case DeleteSharedFilesTotally:
    pTVar23 = (TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
               *)CONCAT71(uVar24,1);
    cVar10 = (char)local_88;
    bVar11 = true;
LAB_14eccf86a:
    FVar15 = DeleteEnumeratedUserFiles(this,(bool)cVar10,bVar11,pTVar23);
                    /* WARNING: Load size is inaccurate */
    (this->OnDeleteEnumeratedUserFilesCompleteDelegateHandle).ID = *FVar15.ID;
    break;
  case End:
    goto switchD_14eccf6e5_caseD_c;
  }
  this->LastTestPhase = this->CurrentTestPhase;
LAB_14eccf75c:
  bVar11 = true;
LAB_14eccf75f:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f8.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_f8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_f8.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_f8.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_f8.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_f8.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_f8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar11;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar11;
}

// WriteNSharedCloudFiles @ 14ecd25e0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FTestCloudInterface::WriteNSharedCloudFiles
          (FTestCloudInterface *this,FUniqueNetId *param_1,FString *param_2,int param_3,
          TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&,TSharedRef<FSharedContentHandle,1>_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  void *_Src;
  IOnlineSharedCloud *pIVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FDelegateHandle FVar7;
  FString *pFVar8;
  int iVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined4 in_register_0000008c;
  undefined8 in_stack_00000030;
  FString local_d8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  void *local_88 [2];
  FString local_78;
  FString local_68 [3];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_b8,L"------------------------------------------------");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogOnlineCloud._0_1_) {
    (**(code **)((param_2->Data).AllocatorInstance.Data + 0x38))(param_2,local_88);
    ::FString::PrintfImpl(&local_a8,L"Writing %d files to the cloud and sharing for user %s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
  }
  local_d8.Data.ArrayNum = *(int *)((undefined8 *)CONCAT44(in_register_0000008c,param_3) + 1);
  lVar10 = (longlong)local_d8.Data.ArrayNum;
  iVar9 = 0;
  _Src = *(void **)CONCAT44(in_register_0000008c,param_3);
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d8.Data.ArrayNum == 0) {
    local_d8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,local_d8.Data.ArrayNum,
               &local_d8.Data.ArrayMax);
    memcpy(local_d8.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
  }
  this->WriteSharedCloudFileCount = (int)param_4;
  if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    FVar7.ID = (*pcVar2)();
    return (FDelegateHandle)FVar7.ID;
  }
  pIVar1 = (this->SharedCloud).Object;
  (**(code **)(pIVar1->_padding_ + 0x50))(pIVar1,param_1,in_stack_00000030);
  fVar4 = __real_4046018c;
  fVar3 = __real_44800000;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  if (0 < (int)param_4) {
    do {
      uVar6 = rand();
      WriteRandomFile(this,&local_c8,(int)((float)(uVar6 & 0x7fff) * fVar4 + fVar3));
      if (((this->SharedCloud).Object == (IOnlineSharedCloud *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        FVar7.ID = (*pcVar2)();
        return (FDelegateHandle)FVar7.ID;
      }
      pIVar1 = (this->SharedCloud).Object;
      pcVar2 = *(code **)(pIVar1->_padding_ + 0x48);
      pFVar8 = FPaths::GetExtension(local_68,&local_d8,false);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      FPaths::GetBaseFilename(&local_78,&local_d8,true);
      ::FString::PrintfImpl(&local_98,L"%s%d.%s");
      (*pcVar2)(pIVar1,param_2,&local_98,&local_c8,pwVar11);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_4);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// WriteNUserCloudFiles @ 14ecd2960

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FTestCloudInterface::WriteNUserCloudFiles
          (FTestCloudInterface *this,FUniqueNetId *param_1,FString *param_2,int param_3,bool param_4
          ,TDelegate<void___cdecl(bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
           *param_5)

{
  IOnlineUserCloud *pIVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FDelegateHandle FVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  undefined4 in_register_0000008c;
  undefined3 in_stack_00000029;
  undefined8 in_stack_00000038;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  void *local_88 [2];
  FString local_78;
  FString local_68 [3];
  
  if (4 < (byte)LogOnlineCloud._0_1_) {
    ::FString::PrintfImpl(&local_c8,L"------------------------------------------------");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  if (4 < (byte)LogOnlineCloud._0_1_) {
    pwVar9 = L"true";
    if (param_5._0_1_ == false) {
      pwVar9 = L"false";
    }
    ::FString::FString(&local_a8,pwVar9);
    (**(code **)((param_2->Data).AllocatorInstance.Data + 0x38))(param_2,local_88);
    ::FString::PrintfImpl(&local_b8,L"Writing %d files to the cloud for user %s. bCancelWrite=%s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineCloud);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  this->WriteUserCloudFileCount = _param_4;
  if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    FVar7.ID = (*pcVar2)();
    return (FDelegateHandle)FVar7.ID;
  }
  pIVar1 = (this->UserCloud).Object;
  (**(code **)(pIVar1->_padding_ + 0xa0))(pIVar1,param_1,in_stack_00000038);
  fVar4 = __real_3cc00180;
  fVar3 = __real_43800000;
  iVar10 = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  if (0 < _param_4) {
    do {
      uVar6 = rand();
      WriteRandomFile(this,&local_d8,(int)((float)(uVar6 & 0x7fff) * fVar4 + fVar3));
      if (((this->UserCloud).Object == (IOnlineUserCloud *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        FVar7.ID = (*pcVar2)();
        return (FDelegateHandle)FVar7.ID;
      }
      pIVar1 = (this->UserCloud).Object;
      pcVar2 = *(code **)(pIVar1->_padding_ + 0x78);
      pFVar8 = FPaths::GetExtension
                         (local_68,(FString *)CONCAT44(in_register_0000008c,param_3),false);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      FPaths::GetBaseFilename(&local_78,(FString *)CONCAT44(in_register_0000008c,param_3),true);
      ::FString::PrintfImpl(&local_98,L"%s%d.%s");
      (*pcVar2)(pIVar1,param_2,&local_98,&local_d8,(ulonglong)pwVar9 & 0xffffffffffffff00);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < _param_4);
  }
  this->bIsFailureExpected = param_5._0_1_;
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// WriteRandomFile @ 14ecd2cc0

void __thiscall
FTestCloudInterface::WriteRandomFile
          (FTestCloudInterface *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != param_2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_2,&param_1->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,param_2,&param_1->AllocatorInstance,piVar2,piVar1);
  uVar8 = 0;
  if (0 < param_2) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *piVar2) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar4 = (ulonglong)uVar8;
      cVar7 = (char)uVar8;
      uVar8 = uVar8 + 1;
      (param_1->AllocatorInstance).Data[lVar9] =
           (FScriptContainerElement)((char)(uVar4 / 0xff) + cVar7);
      lVar9 = lVar9 + 1;
    } while ((int)uVar8 < param_2);
  }
  return;
}

