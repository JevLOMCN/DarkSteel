// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 6

// FTestUserInterface @ 14ecd8bb0

/* WARNING: Enum "Type": Some values do not have unique names */

FTestUserInterface * __thiscall
FTestUserInterface::FTestUserInterface(FTestUserInterface *this,FString *param_1)

{
  FString local_18;
  
  this->bQueryUserInfo = true;
  (this->SubsystemName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsystemName).Data.ArrayNum = 0;
  (this->SubsystemName).Data.ArrayMax = 0;
  this->OnlineSub = (IOnlineSubsystem *)0x0;
  *(undefined8 *)&this->OnQueryUserInfoCompleteDelegate = 0;
  *(undefined8 *)&(this->OnQueryUserInfoCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnQueryUserInfoCompleteDelegate).field_0x10 = 0;
  (this->OnQueryUserInfoCompleteDelegateHandle).ID = 0;
  (this->QueryUserIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryUserIds).ArrayNum = 0;
  (this->QueryUserIds).ArrayMax = 0;
  if (3 < (byte)LogOnlineUser._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestUserInterface::FTestUserInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::operator=(&this->SubsystemName,param_1);
  return this;
}

// ~FTestUserInterface @ 14ecdb7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestUserInterface::~FTestUserInterface(FTestUserInterface *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FString local_18;
  
  if (3 < (byte)LogOnlineUser._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestUserInterface::~FTestUserInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)(this->QueryUserIds).AllocatorInstance.Data,
             (this->QueryUserIds).ArrayNum);
  pFVar1 = (this->QueryUserIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryUserInfoCompleteDelegate);
  pvVar2 = *(void **)&(this->OnQueryUserInfoCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryUserInfoCompleteDelegate);
  pFVar1 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// FinishTest @ 14ece6dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestUserInterface::FinishTest(FTestUserInterface *this)

{
  IOnlineSubsystem *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  FString local_38;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar6 = false;
  pIVar1 = this->OnlineSub;
  if (pIVar1 != (IOnlineSubsystem *)0x0) {
    plVar7 = (longlong *)(**(code **)(pIVar1->_padding_ + 0xb8))(pIVar1,local_28);
    bVar6 = true;
    if (*plVar7 != 0) {
      bVar5 = true;
      goto LAB_14ece6e02;
    }
  }
  bVar5 = false;
LAB_14ece6e02:
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  if (bVar5) {
    plVar7 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xb8))(this->OnlineSub,local_18);
    if ((*plVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*(longlong *)*plVar7 + 0x18))
              ((longlong *)*plVar7,0,&this->OnQueryUserInfoCompleteDelegateHandle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  if (3 < (byte)LogOnlineUser._0_1_) {
    ::FString::PrintfImpl(&local_38,L"FTestUserInterface::~FTestUserInterface");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)(this->QueryUserIds).AllocatorInstance.Data,
             (this->QueryUserIds).ArrayNum);
  pFVar2 = (this->QueryUserIds).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryUserInfoCompleteDelegate);
  pvVar3 = *(void **)&(this->OnQueryUserInfoCompleteDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryUserInfoCompleteDelegate);
  pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ::operator_delete(this,0x50);
  return;
}

// OnQueryUserInfoComplete @ 14ecf05e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestUserInterface::OnQueryUserInfoComplete
          (FTestUserInterface *this,int param_1,bool param_2,
          TArray<TSharedRef<FUniqueNetId_const_,1>,TSizedDefaultAllocator<32>_> *param_3,
          FString *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  void *pvVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong *local_108;
  TReferenceControllerBase<1> *local_100;
  void *local_f8;
  undefined8 local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  void *local_78 [2];
  void *local_68 [2];
  void *local_58 [2];
  void *local_48 [2];
  
  if (4 < (byte)LogOnlineUser._0_1_) {
    ::FString::PrintfImpl(&local_e8,L"GetUserInterface() for player (%d) was success=%d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    uVar8 = 0;
    if (0 < param_3->ArrayNum) {
      lVar7 = 0;
      do {
        plVar4 = (longlong *)
                 (**(code **)(this->OnlineSub->_padding_ + 0xb8))(this->OnlineSub,local_88);
        if ((*plVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        plVar4 = (longlong *)*plVar4;
        uVar6 = ~uVar8 >> 0x1f;
        pcVar1 = *(code **)(*plVar4 + 0x38);
        uVar3 = 0;
        if ((int)uVar8 < param_3->ArrayNum) {
          uVar3 = uVar6;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (*pcVar1)(plVar4,&local_108,param_1,
                  *(undefined8 *)((param_3->AllocatorInstance).Data + lVar7));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
        if (local_108 == (longlong *)0x0) {
          if (4 < (byte)LogOnlineUser._0_1_) {
            uVar3 = 0;
            if ((int)uVar8 < param_3->ArrayNum) {
              uVar3 = uVar6;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            plVar4 = *(longlong **)((param_3->AllocatorInstance).Data + lVar7);
            (**(code **)(*plVar4 + 0x38))(plVar4,local_48);
            ::FString::PrintfImpl(&local_a8,L"PlayerId=%s not found");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
            pvVar5 = local_48[0];
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              pvVar5 = local_48[0];
            }
LAB_14ecf0a48:
            if (pvVar5 != (void *)0x0) {
              FMemory::Free(pvVar5);
            }
          }
        }
        else if (4 < (byte)LogOnlineUser._0_1_) {
          uVar3 = 0;
          if ((int)uVar8 < param_3->ArrayNum) {
            uVar3 = uVar6;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar4 = *(longlong **)((param_3->AllocatorInstance).Data + lVar7);
          (**(code **)(*plVar4 + 0x38))(plVar4,local_78);
          ::FString::PrintfImpl(&local_d8,L"PlayerId=%s found");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (local_78[0] != (void *)0x0) {
            FMemory::Free(local_78[0]);
          }
          if (4 < (byte)LogOnlineUser._0_1_) {
            if ((local_108 == (longlong *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_f8 = (void *)0x0;
            local_f0 = 0;
            (**(code **)(*local_108 + 0x18))(local_108,local_68,&local_f8);
            ::FString::PrintfImpl(&local_c8,L"\tDisplayName=%s");
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (local_68[0] != (void *)0x0) {
              FMemory::Free(local_68[0]);
            }
            if (local_f8 != (void *)0x0) {
              FMemory::Free(local_f8);
            }
            if (4 < (byte)LogOnlineUser._0_1_) {
              if ((local_108 == (longlong *)0x0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              (**(code **)(*local_108 + 0x10))(local_108,local_58);
              ::FString::PrintfImpl(&local_b8,L"\tRealName=%s");
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
              pvVar5 = local_58[0];
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                pvVar5 = local_58[0];
              }
              goto LAB_14ecf0a48;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_100);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar8 < param_3->ArrayNum);
    }
  }
  else if (1 < (byte)LogOnlineUser._0_1_) {
    ::FString::PrintfImpl(&local_98,L"GetUserInterface() failure. Error = %s");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  this->bQueryUserInfo = false;
  FinishTest(this);
  return;
}

// StartNextTest @ 14ecfb580

void __thiscall FTestUserInterface::StartNextTest(FTestUserInterface *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this->bQueryUserInfo == false) {
    FinishTest(this);
    return;
  }
  plVar3 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xb8))(this->OnlineSub,local_18);
  if (*plVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)*plVar3 + 8))((longlong *)*plVar3,0,&this->QueryUserIds);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return;
}

// Test @ 14ed01150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestUserInterface::Test
          (FTestUserInterface *this,UWorld *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FName *pFVar8;
  IOnlineSubsystem *pIVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  ulong64 *puVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  uint uVar17;
  uint uVar18;
  FName local_res8;
  FName local_res20;
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  longlong local_128;
  TReferenceControllerBase<1> *pTStack_120;
  longlong local_118;
  FName FStack_110;
  longlong local_108;
  FName FStack_100;
  FString local_f8;
  longlong local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  FString local_d8;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  uVar18 = 0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (3 < (byte)LogOnlineUser._0_1_) {
    ::FString::PrintfImpl(&local_f8,L"FTestUserInterface::Test");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  iVar7 = (this->SubsystemName).Data.ArrayNum;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar8 = &local_res8;
  }
  else if (iVar7 == 0) {
    pFVar8 = ::FName::FName(&local_res20,L"",FNAME_Find);
  }
  else {
    pFVar8 = ::FName::FName(&local_res20,
                            (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,FNAME_Find)
    ;
  }
  pIVar9 = IOnlineSubsystem::Get(pFVar8);
  this->OnlineSub = pIVar9;
  uVar17 = uVar18;
  if (pIVar9 != (IOnlineSubsystem *)0x0) {
    uVar17 = 1;
    plVar10 = (longlong *)(**(code **)(pIVar9->_padding_ + 0x80))(pIVar9,local_78);
    if (*plVar10 != 0) {
      uVar17 = 3;
      plVar10 = (longlong *)
                (**(code **)(this->OnlineSub->_padding_ + 0xb8))(this->OnlineSub,local_88);
      if (*plVar10 != 0) {
        bVar5 = true;
        goto LAB_14ed0126b;
      }
    }
  }
  bVar5 = false;
LAB_14ed0126b:
  if ((uVar17 & 2) != 0) {
    uVar17 = uVar17 & 0xfffffffd;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  if ((uVar17 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  bVar3 = false;
  if (bVar5) {
    local_148 = (undefined1  [8])0x0;
    local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_140.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_b0);
    local_98 = &local_140;
    puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_140);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXH_NAEBV__TArray_V__TSharedRef___CBVFUniqueNetId___00__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_VFTestUserInterface____A6AXH_NAEBV__TArray_V__TSharedRef___CBVFUniqueNetId___00__V__TSizedDefaultAllocator__0CA_____AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar11[4] = OnQueryUserInfoComplete;
      puVar11[3] = this;
    }
    if (local_b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryUserInfoCompleteDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
               (FWriteAccessScope *)&local_c8);
    if ((local_140.DelegateSize != 0) &&
       (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_140,0,0,0x10);
      local_140.DelegateSize = 0;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_140.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_148);
    plVar10 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0xb8))(this->OnlineSub,local_68)
    ;
    if ((*plVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar13 = (ulong64 *)
              (**(code **)(*(longlong *)*plVar10 + 0x10))
                        ((longlong *)*plVar10,local_90,0,&this->OnQueryUserInfoCompleteDelegate);
    (this->OnQueryUserInfoCompleteDelegateHandle).ID = *puVar13;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    if (0 < param_2->ArrayNum) {
      do {
        plVar10 = (longlong *)
                  (**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_58);
        if ((*plVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar10 = (longlong *)*plVar10;
        pcVar2 = *(code **)(*plVar10 + 0x120);
        uVar17 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (*pcVar2)(plVar10,&local_e8,(param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x10
                 );
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        if (local_e8 != 0) {
          if ((local_e8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_128 = local_e8;
          pTStack_120 = pTStack_e0;
          if (pTStack_e0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_e0->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_e0->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_e8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar15 = (this->QueryUserIds).AllocatorInstance.Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 <
               pFVar15 + (longlong)(this->QueryUserIds).ArrayMax * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = (this->QueryUserIds).ArrayNum;
          piVar1 = &(this->QueryUserIds).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this->QueryUserIds).AllocatorInstance,piVar1);
          }
          (this->QueryUserIds).ArrayNum = iVar7 + 1;
          pFVar15 = (this->QueryUserIds).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
          *(longlong *)pFVar15 = local_128;
          *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTStack_120;
          if (pTStack_120 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_120->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_120->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_120);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_e0);
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < param_2->ArrayNum);
    }
    plVar10 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_48)
    ;
    if ((*plVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)*plVar10 + 0x110))((longlong *)*plVar10,&local_108,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    FVar16 = local_res8;
    if (local_108 == 0) {
LAB_14ed0170c:
      bVar5 = false;
    }
    else {
      bVar3 = true;
      if ((local_108 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar16 = FStack_100;
      lVar4 = local_108;
      if (FStack_100 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FStack_100 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FStack_100 + 8) + 1);
        UNLOCK();
      }
      if ((local_108 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = (this->QueryUserIds).AllocatorInstance.Data;
      pFVar14 = pFVar15 + (longlong)(this->QueryUserIds).ArrayNum * 0x10;
      for (; pFVar15 != pFVar14; pFVar15 = pFVar15 + 0x10) {
        if (*(longlong *)pFVar15 == lVar4) goto LAB_14ed0170c;
      }
      bVar5 = true;
    }
    if (bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar16);
    }
    if (bVar5) {
      if ((local_108 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_118 = local_108;
      FStack_110 = FStack_100;
      if (FStack_100 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FStack_100 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FStack_100 + 8) + 1);
        UNLOCK();
      }
      if ((local_108 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar15 = (this->QueryUserIds).AllocatorInstance.Data;
      if (((pFVar15 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 <
           pFVar15 + (longlong)(this->QueryUserIds).ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = (this->QueryUserIds).ArrayNum;
      piVar1 = &(this->QueryUserIds).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->QueryUserIds).AllocatorInstance,piVar1);
      }
      pFVar15 = (this->QueryUserIds).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      (this->QueryUserIds).ArrayNum = iVar7 + 1;
      *(longlong *)pFVar15 = local_118;
      *(FName *)(pFVar15 + 8) = FStack_110;
      if (FStack_110 != (FName)0x0) {
        LOCK();
        *(atomic<int> *)((longlong)FStack_110 + 8) =
             (atomic<int>)((int)*(atomic<int> *)((longlong)FStack_110 + 8) + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FStack_110);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FStack_100);
    StartNextTest(this);
  }
  else {
    if (2 < (byte)LogOnlineUser._0_1_) {
      ::FString::PrintfImpl(&local_d8,L"Failed to get user interface for %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineUser);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
    FinishTest(this);
  }
  return;
}

