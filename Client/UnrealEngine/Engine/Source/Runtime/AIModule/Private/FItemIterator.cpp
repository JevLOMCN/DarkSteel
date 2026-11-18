// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// FItemIterator @ 146f29770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FItemIterator * __thiscall
FEnvQueryInstance::FItemIterator::FItemIterator
          (FItemIterator *this,UEnvQueryTest *param_1,FEnvQueryInstance *param_2,int param_3)

{
  uchar uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  FItemIterator *pFVar7;
  double dVar8;
  LARGE_INTEGER local_res8;
  
  this->_padding_ = (longlong)param_2;
  if (param_3 == -1) {
    *(int *)&this->_padding_ = param_2->CurrentTestStartingItem;
    iVar2 = param_2->CurrentTestStartingItem;
    *(int *)&this->_padding_ = iVar2;
    if ((-1 < iVar2) && (iVar2 < (int)param_2->_padding_)) {
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FItemIterator *)(*pcVar4)();
        return pFVar7;
      }
      uVar3 = *(uint *)(param_2->_padding_ + 4 + (longlong)iVar2 * 8);
      if (((uVar3 >> 0x1e & 1) == 0) && (-1 < (int)uVar3)) goto LAB_146f29812;
    }
    FConstItemIterator::operator++((FConstItemIterator *)this);
  }
  else {
    *(int *)&this->_padding_ = param_3;
  }
LAB_146f29812:
  if ((param_1 == (UEnvQueryTest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("QueryTest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                         ,0x248,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FItemIterator *)(*pcVar4)();
    return pFVar7;
  }
  this->CachedFilterOp = (param_1->MultipleContextFilterOp).Value;
  this->CachedScoreOp = (param_1->MultipleContextScoreOp).Value;
  uVar1 = (param_1->TestPurpose).Value;
  if ((uVar1 == '\0') || (uVar1 == '\x02')) {
    bVar6 = 4;
  }
  else {
    bVar6 = 0;
  }
  this->bIsFiltering = '\0';
  this->field_0x22 = this->field_0x22 | bVar6;
  dVar8 = __real_bff0000000000000;
  if (0.0 < param_2->CurrentStepTimeLimit) {
    QueryPerformanceCounter(&local_res8);
    dVar8 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            param_2->CurrentStepTimeLimit + __real_4170000000000000;
  }
  this->Deadline = dVar8;
  this->ItemScore = 0.0;
  this->NumPassedForItem = 0;
  this->NumTestsForItem = 0;
  this->bPassed = '\x01';
  this->bForced = '\0';
  return this;
}

// HandleFailedTestResult @ 146f5ae10

void __thiscall FEnvQueryInstance::FItemIterator::HandleFailedTestResult(FItemIterator *this)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  
  uVar3 = (uint)this->_padding_;
  plVar5 = (longlong *)this->_padding_;
  this->ItemScore = -1.0;
  uVar9 = 0;
  if ((int)uVar3 < (int)plVar5[1]) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  puVar2 = (uint *)(*plVar5 + 4 + (longlong)(int)uVar3 * 8);
  *puVar2 = *puVar2 | 0x80000000;
  uVar3 = (uint)this->_padding_;
  lVar6 = this->_padding_;
  uVar4 = *(undefined4 *)(lVar6 + 0xe8);
  uVar9 = 0;
  if ((int)uVar3 < *(int *)(lVar6 + 0xf8)) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  *(undefined4 *)((longlong)(int)uVar3 * 0x38 + 0x20 + *(longlong *)(lVar6 + 0xf0)) = uVar4;
  piVar1 = (int *)(this->_padding_ + 0x100);
  *piVar1 = *piVar1 + -1;
  return;
}

// SetScore @ 146f74e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEnvQueryInstance::FItemIterator::SetScore
          (FItemIterator *this,Type param_1,Type param_2,float param_3,float param_4,float param_5)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->bForced != '\0') {
    return;
  }
  if (param_1 != Score) {
    if (param_2 == Minimum) {
      if (param_3 < param_4) {
        ::FString::PrintfImpl(&local_18,L"Value %f is below minimum value set to %f");
        uVar1 = (uint)this->_padding_;
        lVar2 = this->_padding_;
        uVar5 = 0;
        if ((int)uVar1 < *(int *)(lVar2 + 0xf8)) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::operator=
                  ((FString *)((longlong)(int)uVar1 * 0x38 + *(longlong *)(lVar2 + 0xf0) + 0x28),
                   &local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        goto LAB_146f7525f;
      }
    }
    else if (param_2 == Maximum) {
      if (param_5 < param_3) {
        ::FString::PrintfImpl(&local_28,L"Value %f is above maximum value set to %f");
        uVar1 = (uint)this->_padding_;
        lVar2 = this->_padding_;
        uVar5 = 0;
        if ((int)uVar1 < *(int *)(lVar2 + 0xf8)) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::operator=
                  ((FString *)((longlong)(int)uVar1 * 0x38 + *(longlong *)(lVar2 + 0xf0) + 0x28),
                   &local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        goto LAB_146f7525f;
      }
    }
    else {
      if (param_2 != Range) {
        if (param_2 == Match) {
          if (1 < (byte)LogEQS._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_void___cdecl_FEnvQueryInstance::FItemIterator::SetScore(EEnvTestPurpose::Type,EEnvTestFilterType::Type,float,float,float)___ptr64'
                        ::__l20::LOG_Static,(FLogCategoryBase *)&LogEQS);
          }
          ::FString::PrintfImpl
                    (&local_48,
                     L"Filtering Type set to \'Match\' for floating point test.  Will consider test as failed in all cases."
                    );
          uVar1 = (uint)this->_padding_;
          lVar2 = this->_padding_;
          uVar5 = 0;
          if ((int)uVar1 < *(int *)(lVar2 + 0xf8)) {
            uVar5 = ~uVar1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          ::FString::operator=
                    ((FString *)((longlong)(int)uVar1 * 0x38 + *(longlong *)(lVar2 + 0xf0) + 0x28),
                     &local_48);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        else {
          if (1 < (byte)LogEQS._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&`public:_void___cdecl_FEnvQueryInstance::FItemIterator::SetScore(EEnvTestPurpose::Type,EEnvTestFilterType::Type,float,float,float)___ptr64'
                        ::__l41::LOG_Static,(FLogCategoryBase *)&LogEQS);
          }
          ::FString::PrintfImpl
                    (&local_58,
                     L"Filtering Type set to invalid value for floating point test.  Will consider test as failed in all cases."
                    );
          uVar1 = (uint)this->_padding_;
          lVar2 = this->_padding_;
          uVar5 = 0;
          if ((int)uVar1 < *(int *)(lVar2 + 0xf8)) {
            uVar5 = ~uVar1 >> 0x1f;
          }
          if ((uVar5 == 0) &&
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
          ::FString::operator=
                    ((FString *)((longlong)(int)uVar1 * 0x38 + *(longlong *)(lVar2 + 0xf0) + 0x28),
                     &local_58);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_146f7525f;
      }
      if ((param_3 < param_4) || (param_5 < param_3)) {
        ::FString::PrintfImpl(&local_38,L"Value %f is out of range set to (%f, %f)");
        uVar1 = (uint)this->_padding_;
        lVar2 = this->_padding_;
        uVar5 = 0;
        if ((int)uVar1 < *(int *)(lVar2 + 0xf8)) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ::FString::operator=
                  ((FString *)((longlong)(int)uVar1 * 0x38 + *(longlong *)(lVar2 + 0xf0) + 0x28),
                   &local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        goto LAB_146f7525f;
      }
    }
  }
  SetScoreInternal(this,param_3);
  this->NumPassedForItem = this->NumPassedForItem + 1;
LAB_146f7525f:
  this->NumTestsForItem = this->NumTestsForItem + 1;
  return;
}

// SetScore @ 146f75290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEnvQueryInstance::FItemIterator::SetScore
          (FItemIterator *this,Type param_1,Type param_2,bool param_3,bool param_4)

{
  uchar uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->bForced != '\0') {
    return;
  }
  if (param_2 == Minimum) {
    if (1 < (byte)LogEQS._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_void___cdecl_FEnvQueryInstance::FItemIterator::SetScore(EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,bool)___ptr64'
                  ::__l32::LOG_Static,(FLogCategoryBase *)&LogEQS);
    }
    ::FString::PrintfImpl
              (&local_18,
               L"Filtering Type set to \'Minimum\' for boolean test.  Will consider test as failed in all cases."
              );
    uVar2 = (uint)this->_padding_;
    lVar3 = this->_padding_;
    uVar6 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0xf8)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::FString::operator=
              ((FString *)((longlong)(int)uVar2 * 0x38 + *(longlong *)(lVar3 + 0xf0) + 0x28),
               &local_18);
    local_58.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
LAB_146f75628:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (this->bIsFiltering != '\0') goto LAB_146f7568c;
    fVar7 = 0.0;
  }
  else {
    if (param_2 == Maximum) {
      if (1 < (byte)LogEQS._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FEnvQueryInstance::FItemIterator::SetScore(EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,bool)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogEQS);
      }
      ::FString::PrintfImpl
                (&local_28,
                 L"Filtering Type set to \'Maximum\' for boolean test.  Will consider test as failed in all cases."
                );
      uVar2 = (uint)this->_padding_;
      lVar3 = this->_padding_;
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0xf8)) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::operator=
                ((FString *)((longlong)(int)uVar2 * 0x38 + *(longlong *)(lVar3 + 0xf0) + 0x28),
                 &local_28);
      local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      goto LAB_146f75628;
    }
    if (param_2 == Range) {
      if (1 < (byte)LogEQS._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FEnvQueryInstance::FItemIterator::SetScore(EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,bool)___ptr64'
                    ::__l53::LOG_Static,(FLogCategoryBase *)&LogEQS);
      }
      ::FString::PrintfImpl
                (&local_38,
                 L"Filtering Type set to \'Range\' for boolean test.  Will consider test as failed in all cases."
                );
      uVar2 = (uint)this->_padding_;
      lVar3 = this->_padding_;
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0xf8)) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::operator=
                ((FString *)((longlong)(int)uVar2 * 0x38 + *(longlong *)(lVar3 + 0xf0) + 0x28),
                 &local_38);
      local_58.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      goto LAB_146f75628;
    }
    if (param_2 != Match) {
      if (1 < (byte)LogEQS._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FEnvQueryInstance::FItemIterator::SetScore(EEnvTestPurpose::Type,EEnvTestFilterType::Type,bool,bool)___ptr64'
                    ::__l74::LOG_Static,(FLogCategoryBase *)&LogEQS);
      }
      ::FString::PrintfImpl
                (&local_58,
                 L"Filtering Type set to invalid value for boolean test.  Will consider test as failed in all cases."
                );
      uVar2 = (uint)this->_padding_;
      lVar3 = this->_padding_;
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0xf8)) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::operator=
                ((FString *)((longlong)(int)uVar2 * 0x38 + *(longlong *)(lVar3 + 0xf0) + 0x28),
                 &local_58);
      goto LAB_146f75628;
    }
    fVar7 = __real_3f800000;
    if (param_3 != param_4) {
      ::FString::PrintfImpl(&local_48,L"Boolean score doesn\'t match (expected %s and got %s)");
      uVar2 = (uint)this->_padding_;
      lVar3 = this->_padding_;
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0xf8)) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::operator=
                ((FString *)((longlong)(int)uVar2 * 0x38 + *(longlong *)(lVar3 + 0xf0) + 0x28),
                 &local_48);
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      goto LAB_146f75628;
    }
  }
  uVar1 = this->CachedScoreOp;
  if (uVar1 == '\0') {
    fVar7 = fVar7 + this->ItemScore;
LAB_146f75683:
    this->ItemScore = fVar7;
  }
  else {
    if (uVar1 == '\x01') {
      if ((this->NumPassedForItem != 0) && (this->ItemScore <= fVar7)) goto LAB_146f75688;
      goto LAB_146f75683;
    }
    if (uVar1 == '\x02') {
      if ((this->NumPassedForItem == 0) || (this->ItemScore <= fVar7 && fVar7 != this->ItemScore))
      goto LAB_146f75683;
    }
    else if (uVar1 == '\x03') {
      if (this->NumTestsForItem != 0) {
        fVar7 = fVar7 * this->ItemScore;
      }
      goto LAB_146f75683;
    }
  }
LAB_146f75688:
  this->NumPassedForItem = this->NumPassedForItem + 1;
LAB_146f7568c:
  this->NumTestsForItem = this->NumTestsForItem + 1;
  return;
}

// SetScoreInternal @ 146f756b0

void __thiscall
FEnvQueryInstance::FItemIterator::SetScoreInternal(FItemIterator *this,float param_1)

{
  uchar uVar1;
  
  uVar1 = this->CachedScoreOp;
  if (uVar1 == '\0') {
    param_1 = param_1 + this->ItemScore;
  }
  else if (uVar1 == '\x01') {
    if (this->NumPassedForItem != 0) {
      if (this->ItemScore <= param_1) {
        return;
      }
      this->ItemScore = param_1;
      return;
    }
  }
  else if (uVar1 == '\x02') {
    if (this->NumPassedForItem != 0) {
      if (param_1 < this->ItemScore || param_1 == this->ItemScore) {
        return;
      }
      this->ItemScore = param_1;
      return;
    }
  }
  else {
    if (uVar1 != '\x03') {
      return;
    }
    if (this->NumTestsForItem != 0) {
      this->ItemScore = param_1 * this->ItemScore;
      return;
    }
  }
  this->ItemScore = param_1;
  return;
}

// StoreTestResult @ 146f78000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::FItemIterator::StoreTestResult(FItemIterator *this)

{
  undefined1 *puVar1;
  int *piVar2;
  byte *pbVar3;
  float fVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  
  puVar1 = &this->field_0x22;
  uVar5 = *puVar1;
  if (this->bForced != '\0') goto LAB_146f7806c;
  if (this->NumTestsForItem == 0) {
    this->field_0x22 = uVar5 & 0xfe;
    goto LAB_146f7806c;
  }
  if (this->bIsFiltering == '\0') {
    this->field_0x22 = uVar5 | 1;
    goto LAB_146f7806c;
  }
  bVar11 = this->bPassed;
  if (this->CachedFilterOp == '\0') {
    if ((bVar11 == 0) || (this->NumPassedForItem != this->NumTestsForItem)) {
LAB_146f78063:
      bVar11 = 0;
    }
    else {
      bVar11 = 1;
    }
  }
  else {
    if ((bVar11 == 0) || (this->NumPassedForItem < 1)) goto LAB_146f78063;
    bVar11 = 1;
  }
  this->field_0x22 = uVar5 & 0xfe | bVar11;
LAB_146f7806c:
  iVar10 = _isnan((double)this->ItemScore);
  if (iVar10 != 0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1516865557117271457>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                       ,0x25f,"FMath::IsNaN(ItemScore) == false");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar14 = &this->ItemScore;
  piVar2 = (int *)(this->_padding_ + 0x108);
  *piVar2 = *piVar2 + 1;
  lVar7 = this->_padding_;
  if ((*(byte *)(lVar7 + 0x10c) & 4) == 0) {
    if (this->bPassed == '\0' && this->bIsFiltering == '\x01') {
      HandleFailedTestResult(this);
    }
    else if ((this->CachedScoreOp == '\0') && (this->bForced == '\0')) {
      if (this->NumPassedForItem == 0) {
        *pfVar14 = 0.0;
      }
      else {
        *pfVar14 = *pfVar14 / (float)(int)this->NumPassedForItem;
      }
    }
    fVar4 = *pfVar14;
    uVar6 = (uint)this->_padding_;
    lVar7 = this->_padding_;
    uVar12 = 0;
    if ((int)uVar6 < *(int *)(lVar7 + 0xf8)) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0xf0);
    uVar12 = *(uint *)(this->_padding_ + 0xe8);
    uVar13 = 0;
    if ((int)uVar12 < *(int *)((longlong)(int)uVar6 * 0x38 + 8 + lVar7)) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(float *)(*(longlong *)((longlong)(int)uVar6 * 0x38 + lVar7) + (longlong)(int)uVar12 * 4) =
         fVar4;
  }
  else if (this->bPassed == 0) {
    HandleFailedTestResult(this);
  }
  else {
    if (this->bForced != '\0') {
      uVar6 = (uint)this->_padding_;
      fVar4 = this->ItemScore;
      uVar12 = 0;
      if ((int)uVar6 < *(int *)(lVar7 + 0xf8)) {
        uVar12 = ~uVar6 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar7 = *(longlong *)(lVar7 + 0xf0);
      uVar12 = *(uint *)(this->_padding_ + 0xe8);
      uVar13 = 0;
      if ((int)uVar12 < *(int *)((longlong)(int)uVar6 * 0x38 + 8 + lVar7)) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(float *)(*(longlong *)((longlong)(int)uVar6 * 0x38 + lVar7) + (longlong)(int)uVar12 * 4) =
           fVar4;
    }
    PickSingleItem((FEnvQueryInstance *)this->_padding_,(int)this->_padding_);
    pbVar3 = (byte *)(this->_padding_ + 0x10c);
    *pbVar3 = *pbVar3 | 2;
  }
  return;
}

