// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 2

// FEventLock @ 146ced750

FEventLock * __thiscall
UGameplayTasksComponent::FEventLock::FEventLock(FEventLock *this,UGameplayTasksComponent *param_1)

{
  this->Owner = param_1;
  if (param_1 != (UGameplayTasksComponent *)0x0) {
    param_1->EventLockCounter = param_1->EventLockCounter + 1;
  }
  return this;
}

// ~FEventLock @ 146cee010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGameplayTasksComponent::FEventLock::~FEventLock(FEventLock *this)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  UGameplayTasksComponent *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FName FStackX_10;
  FName FStackX_18;
  FString FStack_58;
  FString FStack_48;
  
  if (this->Owner != (UGameplayTasksComponent *)0x0) {
    piVar1 = &this->Owner->EventLockCounter;
    *piVar1 = *piVar1 + -1;
    this_00 = this->Owner;
    if ((((this_00->TaskEvents).ArrayNum != 0) && (this_00->bInEventProcessingInProgress == 0)) &&
       (this_00->EventLockCounter == 0)) {
      this_00->bInEventProcessingInProgress = '\x01';
      uVar15 = 0;
      iVar3 = (this_00->TaskEvents).ArrayNum;
      uVar11 = uVar15;
      do {
        if (iVar3 < 1) {
LAB_146cf680a:
          this_00->bInEventProcessingInProgress = '\0';
          return;
        }
        pTVar13 = &this_00->TaskEvents;
        uVar14 = (int)uVar11 + 1;
        if (0x10 < (int)uVar14) {
          if (FVisualLogger::bIsRecording != 0) {
            FVisualLogger::CategorizedLogfImpl
                      ((UObject *)this_00,(FName *)&LogGameplayTasks.field_0x4,Error,
                       L"UGameplayTasksComponent::ProcessTaskEvents has exceeded allowes number of iterations. Check your GameplayTasks for logic loops!"
                      );
          }
          (this_00->TaskEvents).ArrayNum = 0;
          if ((this_00->TaskEvents).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&pTVar13->AllocatorInstance,0,&(this_00->TaskEvents).ArrayMax);
          }
          goto LAB_146cf680a;
        }
        uVar11 = uVar15;
        uVar16 = uVar15;
        if (iVar3 != 0) {
          do {
            uVar10 = (uint)uVar11;
            uVar9 = 0;
            if (FVisualLogger::bIsRecording != 0) {
              uVar7 = 0;
              if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar7 = uVar9;
              if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FStackX_10 = *(FName *)(*(longlong *)((pTVar13->AllocatorInstance).Data + uVar16 + 8)
                                     + 0x18);
              ::FName::ToString(&FStackX_10,&FStack_58);
              FVisualLogger::CategorizedLogfImpl
                        ((UObject *)this_00,(FName *)&LogGameplayTasks.field_0x4,Verbose,
                         L"UGameplayTasksComponent::ProcessTaskEvents: %s event %s");
              if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
              }
            }
            uVar12 = ~uVar10 >> 0x1f;
            uVar7 = uVar9;
            if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
              uVar7 = uVar12;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar4 = *(longlong *)((pTVar13->AllocatorInstance).Data + uVar16 + 8);
            uVar7 = 0;
            if ((lVar4 == 0) || ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0)) {
              if (FVisualLogger::bIsRecording != 0) {
                if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
                  uVar9 = uVar12;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FStackX_18 = *(FName *)(*(longlong *)
                                         ((pTVar13->AllocatorInstance).Data + uVar16 + 8) + 0x18);
                ::FName::ToString(&FStackX_18,&FStack_48);
                FVisualLogger::CategorizedLogfImpl
                          ((UObject *)this_00,(FName *)&LogGameplayTasks.field_0x4,Verbose,
                           L"%s is invalid");
                if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
                }
              }
LAB_146cf66dc:
              if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
                uVar7 = uVar12;
              }
              if ((uVar7 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              RemoveTaskFromPriorityQueue
                        (this_00,*(UGameplayTask **)((pTVar13->AllocatorInstance).Data + uVar16 + 8)
                        );
            }
            else {
              uVar8 = uVar7;
              if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
                uVar8 = uVar12;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar2 = (pTVar13->AllocatorInstance).Data[uVar16];
              if (FVar2 == (FScriptContainerElement)0x0) {
                if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
                  uVar7 = uVar12;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(char *)(*(longlong *)((pTVar13->AllocatorInstance).Data + uVar16 + 8) + 0x39)
                    == '\x04') {
                  if (FVisualLogger::bIsRecording != 0) {
                    FVisualLogger::CategorizedLogfImpl
                              ((UObject *)this_00,(FName *)&LogGameplayTasks.field_0x4,Error,
                               L"UGameplayTasksComponent::ProcessTaskEvents trying to add a finished task to priority queue!"
                              );
                  }
                }
                else {
                  if ((int)uVar10 < (this_00->TaskEvents).ArrayNum) {
                    uVar9 = uVar12;
                  }
                  if ((uVar9 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  AddTaskToPriorityQueue
                            (this_00,*(UGameplayTask **)
                                      ((pTVar13->AllocatorInstance).Data + uVar16 + 8));
                }
              }
              else {
                if (FVar2 == (FScriptContainerElement)0x1) goto LAB_146cf66dc;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!\"Enclosing block should never be called\"",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksComponent.cpp"
                                   ,0x1cd,L"");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
            }
            uVar11 = (ulonglong)(uVar10 + 1);
            uVar16 = uVar16 + 0x10;
          } while ((int)(uVar10 + 1) < (this_00->TaskEvents).ArrayNum);
        }
        uVar11 = (ulonglong)uVar14;
        (this_00->TaskEvents).ArrayNum = 0;
        if ((this_00->TaskEvents).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this_00->TaskEvents).AllocatorInstance,0,
                     &(this_00->TaskEvents).ArrayMax);
        }
        UpdateTaskActivations(this_00);
        iVar3 = (this_00->TaskEvents).ArrayNum;
      } while( true );
    }
  }
  return;
}

