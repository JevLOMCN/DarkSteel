// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// OnAchievementsUnlocked @ 14ecbe4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestAchievementsInterface::OnAchievementsUnlocked
          (FTestAchievementsInterface *this,FUniqueNetId *param_1,FString *param_2)

{
  FString local_18;
  
  if (3 < (byte)LogOnlineAchievements._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Achievement Unlocked - %s");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnAchievementsWritten @ 14ecbe560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestAchievementsInterface::OnAchievementsWritten
          (FTestAchievementsInterface *this,FUniqueNetId *param_1,bool param_2)

{
  TSharedPtr<FOnlineAchievementsWrite,1> *this_00;
  IOnlineAchievements *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FOnlineAchievementsWrite *pFVar5;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (3 < (byte)LogOnlineAchievements._0_1_) {
    ::FString::PrintfImpl
              (&local_48,L"FTestAchievementsInterface::OnAchievementsWritten( bWasSuccessful = %s )"
              );
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar1 = (this->OnlineAchievements).Object;
  (**(code **)(pIVar1->_padding_ + 0x48))(pIVar1,&this->OnAchievementUnlockedDelegateHandle);
  this_00 = &this->WriteObject;
  if (param_2) {
    if ((this_00->Object == (FOnlineAchievementsWrite *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (this_00->Object->WriteState != Done) goto LAB_14ecbe6ec;
    if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar1 = (this->OnlineAchievements).Object;
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,(this->UserId).Object);
    if ((byte)LogOnlineAchievements._0_1_ < 4) goto LAB_14ecbe7e7;
    ::FString::PrintfImpl(&local_38,L"TEST COMPLETED SUCCESSFULLY.");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
  }
  else {
LAB_14ecbe6ec:
    if ((this_00->Object == (FOnlineAchievementsWrite *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_00->Object->WriteState != Done) && (2 < (byte)LogOnlineAchievements._0_1_)) {
      pFVar5 = TSharedPtr<FOnlineAchievementsWrite,1>::operator->(this_00);
      EOnlineAsyncTaskState::ToString(pFVar5->WriteState);
      EOnlineAsyncTaskState::ToString(Done);
      ::FString::PrintfImpl
                (&local_28,
                 L"TEST FAILED: WriteObject->WriteState is not in state %s, but instead %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((param_2) || ((byte)LogOnlineAchievements._0_1_ < 3)) goto LAB_14ecbe7e7;
    ::FString::PrintfImpl(&local_18,L"TEST FAILED: Write did not complete successfully");
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
    local_38.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14ecbe7e7:
  if (this != (FTestAchievementsInterface *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->WriteObject).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->UserId).SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementUnlockedDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementsWrittenDelegate);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
    pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this,0x78);
    return;
  }
  return;
}

// OnQueryAchievementDescriptionsComplete @ 14ecbfab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestAchievementsInterface::OnQueryAchievementDescriptionsComplete
          (FTestAchievementsInterface *this,FUniqueNetId *param_1,bool param_2)

{
  IOnlineAchievements *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_res18;
  longlong local_res20;
  FOnlineAchievement *local_118;
  undefined8 local_110;
  longlong local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FText local_88;
  FText local_78;
  FText local_68;
  FDateTime local_50;
  FString local_48;
  
  if (3 < (byte)LogOnlineAchievements._0_1_) {
    ::FString::PrintfImpl
              (&local_100,L"FTestAchievementsInterface::OnQueryAchievementDescriptionsComplete");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    if (3 < (byte)LogOnlineAchievements._0_1_) {
      ::FString::PrintfImpl(&local_f0,L"Loaded Achievement descriptions");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
    local_118 = (FOnlineAchievement *)0x0;
    local_110 = 0;
    if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar1 = (this->OnlineAchievements).Object;
    iVar5 = (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,(this->UserId).Object,&local_118);
    if ((iVar5 == 0) && ((int)local_110 != 0)) {
      local_res18 = 0;
      if (0 < (int)local_110) {
        local_108 = 0;
        local_res20 = 0;
        do {
          FText::FText(&local_88);
          FText::FText(&local_78);
          FText::FText(&local_68);
          local_50.Ticks = 0;
          if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pIVar1 = (this->OnlineAchievements).Object;
          uVar7 = ~local_res18 >> 0x1f;
          pcVar3 = *(code **)(pIVar1->_padding_ + 0x30);
          uVar6 = 0;
          if ((int)local_res18 < (int)local_110) {
            uVar6 = uVar7;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = (*pcVar3)(pIVar1,(longlong)&(local_118->Id).Data.AllocatorInstance.Data +
                                   local_res20,&local_88);
          if (iVar5 != 0) {
            if (2 < (byte)LogOnlineAchievements._0_1_) {
              uVar6 = 0;
              if ((int)local_res18 < (int)local_110) {
                uVar6 = uVar7;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              ::FString::PrintfImpl
                        (&local_c0,
                         L"Failed to GetCachedAchievementDescription() for achievement \'%s\'");
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((this->WriteObject).SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((this->UserId).SharedReferenceCount.ReferenceController);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &this->OnAchievementUnlockedDelegate);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &this->OnAchievementsWrittenDelegate);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
            pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            ::operator_delete(this,0x78);
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
            }
            if (local_78.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
            }
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
            goto LAB_14ecbfeaa;
          }
          if (3 < (byte)LogOnlineAchievements._0_1_) {
            FDateTime::ToString(&local_50,&local_48);
            FText::ToString(&local_68);
            FText::ToString(&local_78);
            FText::ToString(&local_88);
            ::FString::PrintfImpl
                      (&local_d0,
                       L"Title=\'%s\', LockedDesc=\'%s\', UnlockedDesc=\'%s\', bIsHidden=%s, UnlockTime=%s"
                      );
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            uVar6 = 0;
            if ((int)local_res18 < (int)local_110) {
              uVar6 = uVar7;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ::FString::PrintfImpl(&local_e0,L" Descriptor for achievement \'%s\': %s");
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.Data.AllocatorInstance.Data);
            }
          }
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
          }
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          if (local_88.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
          }
          local_108 = local_108 + 1;
          local_res18 = local_res18 + 1;
          local_res20 = local_res20 + 0x18;
        } while ((int)local_res18 < (int)local_110);
      }
      WriteAchievements(this);
    }
    else {
      if (2 < (byte)LogOnlineAchievements._0_1_) {
        ::FString::PrintfImpl
                  (&local_b0,
                   L"TEST FAILED: Either GetCachedAchievements() failed or number of achievements is 0"
                  );
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WriteObject).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->UserId).SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementUnlockedDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementsWrittenDelegate);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
      pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(this,0x78);
    }
LAB_14ecbfeaa:
    DestructItems<FOnlineAchievement,int>(local_118,(int)local_110);
    if (local_118 != (FOnlineAchievement *)0x0) {
      FMemory::Free(local_118);
    }
  }
  else {
    if (2 < (byte)LogOnlineAchievements._0_1_) {
      ::FString::PrintfImpl(&local_a0,L"TEST FAILED: Failed to Load Achievement descriptions");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if (this != (FTestAchievementsInterface *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WriteObject).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->UserId).SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementUnlockedDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementsWrittenDelegate);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
      pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(this,0x78);
      return;
    }
  }
  return;
}

// OnQueryAchievementsComplete @ 14ecc0170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestAchievementsInterface::OnQueryAchievementsComplete
          (FTestAchievementsInterface *this,FUniqueNetId *param_1,bool param_2)

{
  IOnlineAchievements *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  uint uVar9;
  FOnlineAchievement *local_e8;
  undefined8 local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (3 < (byte)LogOnlineAchievements._0_1_) {
    ::FString::PrintfImpl(&local_c0,L"FTestAchievementsInterface::OnQueryAchievementsComplete");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  if (param_2) {
    if (3 < (byte)LogOnlineAchievements._0_1_) {
      ::FString::PrintfImpl(&local_b0,L"Loaded Achievements");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    uVar9 = 0;
    local_e8 = (FOnlineAchievement *)0x0;
    local_e0 = 0;
    if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar1 = (this->OnlineAchievements).Object;
    iVar5 = (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,(this->UserId).Object,&local_e8);
    if ((iVar5 == 0) && ((int)local_e0 != 0)) {
      if (3 < (byte)LogOnlineAchievements._0_1_) {
        ::FString::PrintfImpl(&local_a0,L"Number of Achievements: %d");
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      iVar5 = (int)local_e0;
      if (0 < (int)local_e0) {
        do {
          if (3 < (byte)LogOnlineAchievements._0_1_) {
            uVar6 = 0;
            if ((int)uVar9 < iVar5) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            ::FString::PrintfImpl(&local_80,L"Id=\'%s\', Progress=%f");
            ::FString::PrintfImpl(&local_90,L" Achievement %d: %s");
            UE::Logging::Private::BasicLog<4>
                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
            if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            iVar5 = (int)local_e0;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < iVar5);
      }
      if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar1 = (this->OnlineAchievements).Object;
      local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_d0.DelegateSize = 0;
      pcVar3 = *(code **)(pIVar1->_padding_ + 0x18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_38);
      local_20 = &local_d0;
      puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        *puVar7 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestAchievementsInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar7[4] = OnQueryAchievementDescriptionsComplete;
        puVar7[3] = this;
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      (*pcVar3)(pIVar1,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_d8,(FWriteAccessScope *)&local_50);
      if ((local_d0.DelegateSize != 0) &&
         (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_d0,0,0,0x10);
        local_d0.DelegateSize = 0;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
    }
    else {
      if (2 < (byte)LogOnlineAchievements._0_1_) {
        ::FString::PrintfImpl
                  (&local_70,
                   L"TEST FAILED: Either GetCachedAchievements() failed or number of achievements is 0"
                  );
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WriteObject).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->UserId).SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementUnlockedDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementsWrittenDelegate);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
      pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(this,0x78);
    }
    DestructItems<FOnlineAchievement,int>(local_e8,(int)local_e0);
    if (local_e8 != (FOnlineAchievement *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  else {
    if (3 < (byte)LogOnlineAchievements._0_1_) {
      ::FString::PrintfImpl(&local_60,L"TEST FAILED: Failed to Load Achievements");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    if (this != (FTestAchievementsInterface *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->WriteObject).SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->UserId).SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementUnlockedDelegate);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementsWrittenDelegate);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
      pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(this,0x78);
    }
  }
  return;
}

// QueryAchievementDescriptions @ 14ecc46a0

void __thiscall
FTestAchievementsInterface::QueryAchievementDescriptions
          (FTestAchievementsInterface *this,FUniqueNetId *param_1)

{
  IOnlineAchievements *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if ((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->OnlineAchievements).Object;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestAchievementsInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnQueryAchievementDescriptionsComplete;
    puVar4[3] = this;
    if (this == (FTestAchievementsInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  (*pcVar2)(pIVar1,param_1);
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
  return;
}

// ReadAchievements @ 14ecc49c0

void __thiscall FTestAchievementsInterface::ReadAchievements(FTestAchievementsInterface *this)

{
  IOnlineAchievements *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if ((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->OnlineAchievements).Object;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestAchievementsInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnQueryAchievementsComplete;
    puVar4[3] = this;
    if (this == (FTestAchievementsInterface *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  (*pcVar2)(pIVar1,(this->UserId).Object);
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
  return;
}

// Test @ 14ecca760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTestAchievementsInterface::Test(FTestAchievementsInterface *this,UWorld *param_1)

{
  longlong lVar1;
  IOnlineAchievements *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  wchar_t *pwVar11;
  FName local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  FString local_c0;
  FString local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  if (3 < (byte)LogOnlineAchievements._0_1_) {
    ::FString::PrintfImpl(&local_c0,L"FTestAchievementsInterface::Test");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  if ((this->SubsystemName).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,pwVar11);
  pIVar7 = IOnlineSubsystem::Get(pFVar6);
  if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnlineSub",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestAchievementsInterface.cpp"
                         ,0x17,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_68);
  lVar1 = *plVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  if (lVar1 != 0) {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_48);
    if ((*plVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar9 = (undefined8 *)
             (**(code **)(*(longlong *)*plVar8 + 0x110))((longlong *)*plVar8,local_58,0);
    if (&this->UserId != (TSharedPtr<FUniqueNetId_const_,1> *)puVar9) {
      (this->UserId).Object = (FUniqueNetId *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UserId).SharedReferenceCount,(FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    puVar9 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0xa8))(pIVar7,local_38);
    if (&this->OnlineAchievements != (TSharedPtr<IOnlineAchievements,1> *)puVar9) {
      (this->OnlineAchievements).Object = (IOnlineAchievements *)*puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->OnlineAchievements).SharedReferenceCount,
                 (FSharedReferencer<1> *)(puVar9 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  pIVar2 = (this->OnlineAchievements).Object;
  if ((pIVar2 == (IOnlineAchievements *)0x0) || ((this->UserId).Object == (FUniqueNetId *)0x0)) {
    if (2 < (byte)LogOnlineAchievements._0_1_) {
      ::FString::PrintfImpl
                (&local_b0,
                 L"TEST FAILED: OSS [%s] does not have a valid achievement interface or identity interface for this test to run."
                );
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->WriteObject).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->UserId).SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementUnlockedDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementsWrittenDelegate);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
    pFVar3 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(this,0x78);
  }
  else {
    local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_d0.DelegateSize = 0;
    pcVar4 = *(code **)(pIVar2->_padding_ + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_88);
    local_70 = &local_d0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestAchievementsInterface____A6AXAEBVFUniqueNetId___N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar9[4] = OnQueryAchievementsComplete;
      puVar9[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    (*pcVar4)(pIVar2,(this->UserId).Object);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d8,(FWriteAccessScope *)&local_a0);
    if ((local_d0.DelegateSize != 0) &&
       (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_d0,0,0,0x10);
      local_d0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_d0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  }
  return;
}

// WriteAchievements @ 14ecd2140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestAchievementsInterface::WriteAchievements(FTestAchievementsInterface *this)

{
  IOnlineAchievements *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  FOnlineAchievementsWrite *pFVar7;
  ulong64 *puVar8;
  uint uVar9;
  FOnlineAchievementsWrite *pFVar10;
  uint uVar11;
  TRawPtrProxy<FOnlineAchievementsWrite> local_res8;
  undefined1 local_res10 [8];
  FOnlineAchievement *local_78;
  undefined8 local_70;
  FString local_68;
  TSharedRef<FOnlineAchievementsWrite,1> local_58 [2];
  
  pFVar7 = ::operator_new(0x60);
  pFVar10 = (FOnlineAchievementsWrite *)0x0;
  local_res8.Object = pFVar10;
  if (pFVar7 != (FOnlineAchievementsWrite *)0x0) {
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = 0;
    *(undefined4 *)&pFVar7->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar7->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0;
    pFVar7->_padding_ = 0;
    *(undefined4 *)&pFVar7->_padding_ = 0;
    pFVar7->_padding_ = (longlong)&___7FOnlineAchievementsWrite__6B_;
    pFVar7->WriteState = NotStarted;
    local_res8.Object = pFVar7;
  }
  TSharedPtr<FOnlineAchievementsWrite,1>::operator=<FOnlineAchievementsWrite>
            (&this->WriteObject,&local_res8);
  TSharedPtr<FOnlineAchievementsWrite,1>::ToSharedRef(&this->WriteObject,local_58);
  local_78 = (FOnlineAchievement *)0x0;
  local_70 = 0;
  if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar1 = (this->OnlineAchievements).Object;
  iVar6 = (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,(this->UserId).Object,&local_78);
  uVar4 = __real_42480000;
  if ((iVar6 == 0) && ((int)local_70 != 0)) {
    if ((int)local_70 < 3) {
      if (0 < (int)local_70) {
        do {
          iVar6 = (int)local_70;
          if ((this->WriteObject).Object == (FOnlineAchievementsWrite *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar6 = (int)local_70;
          }
          pFVar7 = (this->WriteObject).Object;
          uVar11 = (uint)pFVar10;
          pcVar3 = *(code **)pFVar7->_padding_;
          uVar9 = 0;
          if ((int)uVar11 < iVar6) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (*pcVar3)(pFVar7,local_78 + (int)uVar11,uVar4);
          pFVar10 = (FOnlineAchievementsWrite *)(ulonglong)(uVar11 + 1);
        } while ((int)(uVar11 + 1) < (int)local_70);
      }
    }
    else {
      pFVar7 = TSharedPtr<FOnlineAchievementsWrite,1>::operator->(&this->WriteObject);
      pcVar3 = *(code **)pFVar7->_padding_;
      if (((int)local_70 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(pFVar7,local_78,__real_3f800000);
      pFVar7 = TSharedPtr<FOnlineAchievementsWrite,1>::operator->(&this->WriteObject);
      uVar11 = (int)local_70 - 1;
      pcVar3 = *(code **)pFVar7->_padding_;
      uVar9 = 0;
      if ((int)uVar11 < (int)local_70) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(pFVar7,local_78 + (int)uVar11,__real_42480000);
      pFVar7 = TSharedPtr<FOnlineAchievementsWrite,1>::operator->(&this->WriteObject);
      pcVar3 = *(code **)pFVar7->_padding_;
      uVar11 = (int)local_70 / 2;
      uVar9 = 0;
      if ((int)uVar11 < (int)local_70) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*pcVar3)(pFVar7,local_78 + (int)uVar11,__real_42c80000);
    }
    if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar1 = (this->OnlineAchievements).Object;
    puVar8 = (ulong64 *)
             (**(code **)(pIVar1->_padding_ + 0x40))
                       (pIVar1,local_res10,&this->OnAchievementUnlockedDelegate);
    (this->OnAchievementUnlockedDelegateHandle).ID = *puVar8;
    if (((this->OnlineAchievements).Object == (IOnlineAchievements *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar1 = (this->OnlineAchievements).Object;
    (**(code **)(pIVar1->_padding_ + 8))
              (pIVar1,(this->UserId).Object,local_58,&this->OnAchievementsWrittenDelegate);
  }
  else {
    if (2 < (byte)LogOnlineAchievements._0_1_) {
      ::FString::PrintfImpl
                (&local_68,
                 L"TEST FAILED: Either GetCachedAchievements() failed or number of achievements is 0"
                );
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineAchievements);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->WriteObject).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->UserId).SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementUnlockedDelegate);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAchievementsWrittenDelegate);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->OnlineAchievements).SharedReferenceCount.ReferenceController);
    pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this,0x78);
  }
  DestructItems<FOnlineAchievement,int>(local_78,(int)local_70);
  if (local_78 != (FOnlineAchievement *)0x0) {
    FMemory::Free(local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58[0].SharedReferenceCount.ReferenceController);
  return;
}

