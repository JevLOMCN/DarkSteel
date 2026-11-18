// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FTextFormatArgumentModifier_GenderForm @ 1417355a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextFormatArgumentModifier_GenderForm * __thiscall
FTextFormatArgumentModifier_GenderForm::FTextFormatArgumentModifier_GenderForm
          (FTextFormatArgumentModifier_GenderForm *this,FTextFormat *param_1,FTextFormat *param_2,
          FTextFormat *param_3,int param_4,bool param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FTextFormatArgumentModifier_GenderForm__6B_;
  this->LongestGenderFormStringLen = param_4;
  this->bDoGenderFormsUseFormatArgs = param_5;
  (this->MasculineForm).TextFormatData.Object = (param_1->TextFormatData).Object;
  pTVar1 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  (this->MasculineForm).TextFormatData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->FeminineForm).TextFormatData.Object = (param_2->TextFormatData).Object;
  pTVar1 = (param_2->TextFormatData).SharedReferenceCount.ReferenceController;
  (this->FeminineForm).TextFormatData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->NeuterForm).TextFormatData.Object = (param_3->TextFormatData).Object;
  pTVar1 = (param_3->TextFormatData).SharedReferenceCount.ReferenceController;
  (this->NeuterForm).TextFormatData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// Create @ 14174dd50

/* WARNING: Removing unreachable block (ram,0x00014174dfc2) */
/* WARNING: Removing unreachable block (ram,0x00014174dff5) */
/* WARNING: Removing unreachable block (ram,0x00014174dff6) */
/* WARNING: Removing unreachable block (ram,0x00014174e007) */
/* WARNING: Removing unreachable block (ram,0x00014174e03d) */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<ITextFormatArgumentModifier,1> * __cdecl
FTextFormatArgumentModifier_GenderForm::Create
          (TSharedPtr<ITextFormatArgumentModifier,1> *__return_storage_ptr__,
          FTextFormatString *param_1,TSharedRef<FTextFormatPatternDefinition_const_,1> *param_2)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextFormatPatternDefinition *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  FTextFormatData *pFVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  bool bVar10;
  EExpressionType EVar11;
  TSharedPtr<ITextFormatArgumentModifier,1> *pTVar12;
  FString *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ETextFormatFlags local_res20 [8];
  TArray<FTextFormatString,TSizedDefaultAllocator<32>_> local_108;
  ETextFormatFlags local_f8 [8];
  ETextFormatFlags local_f0 [24];
  FTextFormat local_d8;
  TSharedRef<FTextFormatData,1> local_c8;
  TSharedRef<FTextFormatData,1> local_b8;
  TRawPtrProxy<FTextFormatArgumentModifier_GenderForm> local_a8;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_a0;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_90;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_80;
  TSharedRef<FTextFormatData,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  bVar9 = ITextFormatArgumentModifier::ParseValueArgs(param_1,&local_108,L',');
  if ((bVar9) && (local_108.ArrayNum - 2U < 2)) {
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar4 = param_2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_108.ArrayNum < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
        return pTVar12;
      }
    }
    iVar15 = *(int *)(local_108.AllocatorInstance.Data + 8);
    if ((local_108.ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
      return pTVar12;
    }
    pFVar13 = ::FString::ConstructFromPtrSize
                        (&local_58,*(wchar_t **)local_108.AllocatorInstance.Data,iVar15);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res20[0] = Default;
    local_a0.Object = pFVar4;
    local_a0.SharedReferenceCount.ReferenceController = pTVar3;
    MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
              (&local_b8,pFVar13,local_res20,&local_a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    pFVar4 = param_2->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar9 = true;
    if (local_108.ArrayNum < 2) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
        return pTVar12;
      }
    }
    iVar15 = *(int *)(local_108.AllocatorInstance.Data + 0x28);
    if ((local_108.ArrayNum < 2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
      return pTVar12;
    }
    pFVar13 = ::FString::ConstructFromPtrSize
                        (&local_48,
                         ((FTextFormatString *)(local_108.AllocatorInstance.Data + 0x20))->StringPtr
                         ,iVar15);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_f8[0] = Default;
    local_90.Object = pFVar4;
    local_90.SharedReferenceCount.ReferenceController = pTVar3;
    MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
              (&local_c8,pFVar13,local_f8,&local_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FTextFormat::FTextFormat(&local_d8);
    if (local_108.ArrayNum == 3) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar13 = ::FString::ConstructFromPtrSize
                          (&local_38,
                           ((FTextFormatString *)(local_108.AllocatorInstance.Data + 0x40))->
                           StringPtr,*(int *)(local_108.AllocatorInstance.Data + 0x48));
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f0[0] = Default;
      local_80.Object = pFVar4;
      local_80.SharedReferenceCount.ReferenceController = pTVar3;
      MakeShared<FTextFormatData,1,FString,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                (&local_68,pFVar13,local_f0,&local_80);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FVar8.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      pFVar7 = local_68.Object;
      FVar6.ReferenceController = local_d8.TextFormatData.SharedReferenceCount.ReferenceController;
      local_68.Object = local_d8.TextFormatData.Object;
      local_68.SharedReferenceCount.ReferenceController =
           local_d8.TextFormatData.SharedReferenceCount.ReferenceController;
      local_d8.TextFormatData.Object = pFVar7;
      local_d8.TextFormatData.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar7 = local_b8.Object;
    pFVar1 = &(local_b8.Object)->CompiledDataMutex;
    if ((pFVar1 == (FMutex *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
      return pTVar12;
    }
    LOCK();
    bVar10 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar10) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar10) {
      UE::FMutex::LockSlow(pFVar1);
    }
    EVar11 = pFVar7->CompiledExpressionType;
    if (pFVar1 != (FMutex *)0x0) {
      LOCK();
      aVar2 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(pFVar1);
      }
    }
    pFVar7 = local_c8.Object;
    if (EVar11 != Invalid) {
      pFVar1 = &(local_c8.Object)->CompiledDataMutex;
      if ((pFVar1 == (FMutex *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
        return pTVar12;
      }
      LOCK();
      bVar10 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar10) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar10) {
        UE::FMutex::LockSlow(pFVar1);
      }
      EVar11 = pFVar7->CompiledExpressionType;
      if (pFVar1 != (FMutex *)0x0) {
        LOCK();
        aVar2 = pFVar1->State;
        pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(pFVar1);
        }
      }
      if (EVar11 != Invalid) {
        if (local_108.ArrayNum < 2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
            return pTVar12;
          }
        }
        iVar15 = *(int *)(local_108.AllocatorInstance.Data + 0x28);
        iVar14 = local_108.ArrayNum;
        if (local_108.ArrayNum < 1) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TSharedPtr<ITextFormatArgumentModifier,1> *)(*pcVar5)();
            return pTVar12;
          }
          iVar14 = local_108.ArrayNum;
        }
        if (iVar15 < *(int *)(local_108.AllocatorInstance.Data + 8)) {
          iVar15 = *(int *)(local_108.AllocatorInstance.Data + 8);
        }
        iVar16 = iVar15;
        if ((iVar14 == 3) &&
           (iVar16 = *(int *)(local_108.AllocatorInstance.Data + 0x48),
           *(int *)(local_108.AllocatorInstance.Data + 0x48) < iVar15)) {
          iVar16 = iVar15;
        }
        EVar11 = FTextFormat::GetExpressionType((FTextFormat *)&local_b8);
        if (((EVar11 != Complex) &&
            (EVar11 = FTextFormat::GetExpressionType((FTextFormat *)&local_c8), EVar11 != Complex))
           && (EVar11 = FTextFormat::GetExpressionType(&local_d8), EVar11 != Complex)) {
          bVar9 = false;
        }
        local_a8.Object = ::operator_new(0x40);
        FVar6.ReferenceController = local_d8.TextFormatData.SharedReferenceCount.ReferenceController
        ;
        if (local_a8.Object == (FTextFormatArgumentModifier_GenderForm *)0x0) {
          local_a8.Object = (FTextFormatArgumentModifier_GenderForm *)0x0;
        }
        else {
          (local_a8.Object)->_padding_ = (longlong)&___7FTextFormatArgumentModifier_GenderForm__6B_;
          ((local_a8.Object)->MasculineForm).TextFormatData.Object = local_b8.Object;
          (local_a8.Object)->LongestGenderFormStringLen = iVar16;
          (local_a8.Object)->bDoGenderFormsUseFormatArgs = bVar9;
          ((local_a8.Object)->MasculineForm).TextFormatData.SharedReferenceCount.ReferenceController
               = local_b8.SharedReferenceCount.ReferenceController;
          if (local_b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          ((local_a8.Object)->FeminineForm).TextFormatData.Object = local_c8.Object;
          ((local_a8.Object)->FeminineForm).TextFormatData.SharedReferenceCount.ReferenceController
               = local_c8.SharedReferenceCount.ReferenceController;
          if (local_c8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          ((local_a8.Object)->NeuterForm).TextFormatData.Object = local_d8.TextFormatData.Object;
          ((local_a8.Object)->NeuterForm).TextFormatData.SharedReferenceCount.ReferenceController =
               local_d8.TextFormatData.SharedReferenceCount.ReferenceController;
          if (local_d8.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(local_d8.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        TSharedPtr<ITextFormatArgumentModifier,1>::
        TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_GenderForm>
                  (__return_storage_ptr__,&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        iVar15 = local_108.ArrayNum;
        goto LAB_14174e330;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.TextFormatData.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
  }
  __return_storage_ptr__->Object = (ITextFormatArgumentModifier *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  iVar15 = local_108.ArrayNum;
LAB_14174e330:
  DestructItems<FTextFormatString,int>((FTextFormatString *)local_108.AllocatorInstance.Data,iVar15)
  ;
  if ((FTextFormatString *)local_108.AllocatorInstance.Data != (FTextFormatString *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// EstimateLength @ 141754580

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormatArgumentModifier_GenderForm::EstimateLength
          (FTextFormatArgumentModifier_GenderForm *this,int *param_1,bool *param_2)

{
  *param_1 = this->LongestGenderFormStringLen;
  *param_2 = this->bDoGenderFormsUseFormatArgs;
  return;
}

// Evaluate @ 1417545e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormatArgumentModifier_GenderForm::Evaluate
          (FTextFormatArgumentModifier_GenderForm *this,FFormatArgumentValue *param_1,
          FPrivateTextFormatArguments *param_2,FString *param_3)

{
  char cVar1;
  int iVar2;
  FString *pFVar3;
  FTextFormat *pFVar4;
  int iVar5;
  FString local_18;
  
  if (param_1->Type == Gender) {
    cVar1 = *(char *)&param_1->field1_0x8;
    if (cVar1 == '\0') {
      pFVar4 = &this->MasculineForm;
    }
    else if (cVar1 == '\x01') {
      pFVar4 = &this->FeminineForm;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      pFVar4 = &this->NeuterForm;
    }
    pFVar3 = FTextFormatter::Format(&local_18,pFVar4,param_2);
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar5 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(param_3,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar5);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetFormatArgumentNames @ 14175d2c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextFormatArgumentModifier_GenderForm::GetFormatArgumentNames
          (FTextFormatArgumentModifier_GenderForm *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FTextFormat::GetFormatArgumentNames(&this->MasculineForm,param_1);
  FTextFormat::GetFormatArgumentNames(&this->FeminineForm,param_1);
  FTextFormat::GetFormatArgumentNames(&this->NeuterForm,param_1);
  return;
}

// Validate @ 141782d80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FTextFormatArgumentModifier_GenderForm::Validate
          (FTextFormatArgumentModifier_GenderForm *this,TSharedRef<FCulture,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextFormatData *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  TSharedPtr<FCulture,1> local_58;
  TSharedPtr<FCulture,1> local_48;
  TSharedPtr<FCulture,1> local_38;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_58.Object = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = (this->MasculineForm).TextFormatData.Object;
  pFVar1 = &pFVar4->CompiledDataMutex;
  local_58.SharedReferenceCount.ReferenceController = pTVar3;
  if ((pFVar1 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  LOCK();
  bVar6 = pFVar1->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    pFVar1->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(pFVar1);
  }
  bVar6 = FTextFormatData::ValidatePattern_NoLock(pFVar4,&local_58,param_2);
  if (pFVar1 != (FMutex *)0x0) {
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  local_48.Object = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = (this->FeminineForm).TextFormatData.Object;
  pFVar1 = &pFVar4->CompiledDataMutex;
  local_48.SharedReferenceCount.ReferenceController = pTVar3;
  if ((pFVar1 == (FMutex *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  LOCK();
  bVar8 = pFVar1->State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    pFVar1->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    UE::FMutex::LockSlow(pFVar1);
  }
  bVar8 = FTextFormatData::ValidatePattern_NoLock(pFVar4,&local_48,param_2);
  if (pFVar1 != (FMutex *)0x0) {
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_38.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = (this->NeuterForm).TextFormatData.Object;
  pFVar1 = &pFVar4->CompiledDataMutex;
  local_38.SharedReferenceCount.ReferenceController = pTVar3;
  if ((pFVar1 == (FMutex *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  LOCK();
  bVar9 = pFVar1->State == (atomic<unsigned_char>)0x0;
  if (bVar9) {
    pFVar1->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar9) {
    UE::FMutex::LockSlow(pFVar1);
  }
  bVar9 = FTextFormatData::ValidatePattern_NoLock(pFVar4,&local_38,param_2);
  if (pFVar1 != (FMutex *)0x0) {
    LOCK();
    aVar2 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(pFVar1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return bVar9 && (bVar6 && bVar8);
}

