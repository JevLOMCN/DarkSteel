// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 11

// Exec_Dev @ 148c4af50

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
FAutomationExecCmd::Exec_Dev
          (FAutomationExecCmd *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  IAutomationControllerManager *pIVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  longlong *plVar12;
  undefined8 uVar13;
  FAutomationTestFramework *this_00;
  uint uVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  undefined7 uVar19;
  wchar_t *local_res18;
  bool local_158;
  FScriptContainerElement local_157;
  FScriptContainerElement local_156;
  FScriptContainerElement local_155;
  FScriptContainerElement local_154;
  FScriptContainerElement local_153;
  FScriptContainerElement local_152 [2];
  wchar_t *local_150;
  FString local_148;
  longlong local_138;
  uint local_130;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 local_80;
  FString local_78;
  FString local_68;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [24];
  
  bVar7 = false;
  local_res18 = param_2;
  bVar6 = FParse::Command(&local_res18,L"Automation",true);
  if (bVar6) {
    pFVar11 = ::FString::FString(&local_78,local_res18);
    bVar7 = ::FString::StartsWith(pFVar11,L".",1,IgnoreCase);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      return false;
    }
    ::FString::FString(&local_148,"");
    uVar18 = 0;
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    pFVar11 = ::FString::FString(&local_68,local_res18);
    ::FString::ParseIntoArray(pFVar11,&local_128,L";",true);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    Init(this);
    local_158 = true;
    local_130 = 0;
    bVar7 = true;
    if (0 < local_128.ArrayNum) {
      local_138 = 0;
      do {
        lVar16 = local_138;
        uVar14 = 0;
        uVar10 = uVar14;
        if ((int)(uint)uVar18 < local_128.ArrayNum) {
          uVar10 = ~(uint)uVar18 >> 0x1f;
        }
        if (uVar10 == 0) {
          uVar18 = 0x447;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
        }
        if (*(int *)(local_128.AllocatorInstance.Data + lVar16 * 0x10 + 8) == 0) {
          local_150 = L"";
        }
        else {
          local_150 = *(wchar_t **)(local_128.AllocatorInstance.Data + lVar16 * 0x10);
        }
        uVar19 = (undefined7)(uVar18 >> 8);
        bVar7 = FParse::Command(&local_150,L"StartRemoteSession",true);
        if (bVar7) {
          ::FString::FString(&local_f0,local_150);
          bVar7 = FGuid::Parse(&local_f0,&this->SessionID);
          if (!bVar7) {
            FOutputDevice::LogfImpl(param_3,L"Automation: %s is not a valid session guid!");
            bVar7 = false;
            if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.Data.AllocatorInstance.Data);
            }
            break;
          }
          if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f0.Data.AllocatorInstance.Data);
          }
        }
        else {
          bVar7 = FParse::Command(&local_150,L"List",true);
          if (bVar7) {
            pFVar2 = (this->AutomationCommandQueue).AllocatorInstance.Data;
            local_157 = (FScriptContainerElement)0x0;
            if (((pFVar2 <= &local_157) &&
                (&local_157 < pFVar2 + (this->AutomationCommandQueue).ArrayMax)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            iVar9 = (this->AutomationCommandQueue).ArrayNum;
            piVar1 = &(this->AutomationCommandQueue).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x101,&(this->AutomationCommandQueue).AllocatorInstance,piVar1);
            }
            (this->AutomationCommandQueue).ArrayNum = iVar9 + 1;
            (this->AutomationCommandQueue).AllocatorInstance.Data[iVar9] = local_157;
          }
          else {
            bVar7 = FParse::Command(&local_150,L"Now",true);
            if (bVar7) {
              this->DelayTimer = 0.0;
            }
            else {
              bVar7 = FParse::Command(&local_150,L"RunTests",true);
              if ((bVar7) || (bVar7 = FParse::Command(&local_150,L"RunTest",true), bVar7)) {
                bVar7 = FParse::Command(&local_150,L"Now",true);
                if (bVar7) {
                  this->DelayTimer = 0.0;
                }
                else {
                  bVar7 = IsRunTestQueued(this);
                  if (bVar7) {
                    if ((this->StringCommand).Data.ArrayNum == 0) goto LAB_148c4b79e;
                    FOutputDevice::LogfImpl
                              (param_3,
                               L"Automation: A test run is already Queued: %s. Only one run is supported at a time."
                              );
                  }
                  else {
                    ::FString::operator=(&this->StringCommand,local_150);
                    FOutputDevice::LogfImpl(param_3,L"Automation: RunTests=\'%s\' Queued.");
                    pFVar2 = (this->AutomationCommandQueue).AllocatorInstance.Data;
                    local_152[0] = (FScriptContainerElement)0x1;
                    if (((pFVar2 <= local_152) &&
                        (local_152 < pFVar2 + (this->AutomationCommandQueue).ArrayMax)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      uVar8 = (*pcVar5)();
                      return (bool)uVar8;
                    }
                    iVar9 = (this->AutomationCommandQueue).ArrayNum;
                    piVar1 = &(this->AutomationCommandQueue).ArrayMax;
                    if (iVar9 == *piVar1) {
                      iVar9 = UE::Core::Private::
                              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (0x101,&(this->AutomationCommandQueue).AllocatorInstance,
                                         piVar1);
                    }
                    (this->AutomationCommandQueue).ArrayNum = iVar9 + 1;
                    (this->AutomationCommandQueue).AllocatorInstance.Data[iVar9] = local_152[0];
                  }
                }
              }
              else {
                bVar7 = FParse::Command(&local_150,L"SetMinimumPriority",true);
                if (bVar7) {
                  ::FString::operator=(&local_148,local_150);
                  FOutputDevice::LogfImpl
                            (param_3,L"Automation: Setting minimum priority of cases to run to: %s")
                  ;
                  iVar9 = ::FString::Find(&local_148,L"Low",3,IgnoreCase,FromStart,-1);
                  if (iVar9 == -1) {
                    iVar9 = ::FString::Find(&local_148,L"Medium",6,IgnoreCase,FromStart,-1);
                    if (iVar9 == -1) {
                      iVar9 = ::FString::Find(&local_148,L"High",4,IgnoreCase,FromStart,-1);
                      if (iVar9 == -1) {
                        iVar9 = ::FString::Find(&local_148,L"Critical",8,IgnoreCase,FromStart,-1);
                        if (iVar9 == -1) {
                          iVar9 = ::FString::Find(&local_148,L"None",4,IgnoreCase,FromStart,-1);
                          if (iVar9 == -1) {
                            FOutputDevice::LogfImpl
                                      (param_3,
                                       L"Automation: %s is not a valid priority!\nValid priorities are Critical, High, Medium, Low, None"
                                      );
                          }
                          else {
LAB_148c4b48b:
                            if (((this->AutomationController).Object ==
                                 (IAutomationControllerManager *)0x0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValid()",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                              pcVar5 = (code *)swi(3);
                              uVar8 = (*pcVar5)();
                              return (bool)uVar8;
                            }
                            pIVar3 = (this->AutomationController).Object;
                            (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0);
                          }
                        }
                        else {
                          if (((this->AutomationController).Object ==
                               (IAutomationControllerManager *)0x0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsValid()",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                 ,0x458,L""), bVar7)) {
                            pcVar5 = (code *)swi(3);
                            uVar8 = (*pcVar5)();
                            return (bool)uVar8;
                          }
                          pIVar3 = (this->AutomationController).Object;
                          (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0x100000);
                        }
                      }
                      else {
                        if (((this->AutomationController).Object ==
                             (IAutomationControllerManager *)0x0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValid()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                               ,0x458,L""), bVar7)) {
                          pcVar5 = (code *)swi(3);
                          uVar8 = (*pcVar5)();
                          return (bool)uVar8;
                        }
                        pIVar3 = (this->AutomationController).Object;
                        (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0x300000);
                      }
                    }
                    else {
                      if (((this->AutomationController).Object ==
                           (IAutomationControllerManager *)0x0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        uVar8 = (*pcVar5)();
                        return (bool)uVar8;
                      }
                      pIVar3 = (this->AutomationController).Object;
                      (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0x700000);
                    }
                  }
                  else {
                    if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0)
                       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar7)) {
                      pcVar5 = (code *)swi(3);
                      uVar8 = (*pcVar5)();
                      return (bool)uVar8;
                    }
                    pIVar3 = (this->AutomationController).Object;
                    (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0xf00000);
                  }
                }
                else {
                  bVar7 = FParse::Command(&local_150,L"SetPriority",true);
                  if (bVar7) {
                    ::FString::operator=(&local_148,local_150);
                    FOutputDevice::LogfImpl
                              (param_3,L"Setting explicit priority of cases to run to: %s");
                    iVar9 = ::FString::Find(&local_148,L"Low",3,IgnoreCase,FromStart,-1);
                    if (iVar9 == -1) {
                      iVar9 = ::FString::Find(&local_148,L"Medium",6,IgnoreCase,FromStart,-1);
                      if (iVar9 == -1) {
                        iVar9 = ::FString::Find(&local_148,L"High",4,IgnoreCase,FromStart,-1);
                        if (iVar9 == -1) {
                          iVar9 = ::FString::Find(&local_148,L"Critical",8,IgnoreCase,FromStart,-1);
                          if (iVar9 == -1) {
                            iVar9 = ::FString::Find(&local_148,L"None",4,IgnoreCase,FromStart,-1);
                            if (iVar9 != -1) goto LAB_148c4b48b;
                            if ((this->StringCommand).Data.ArrayNum == 0) {
                              FOutputDevice::LogfImpl
                                        (param_3,
                                         L"Automation: %s is not a valid priority!\nValid priorities are Critical, High, Medium, Low, None"
                                        );
                            }
                            else {
                              FOutputDevice::LogfImpl
                                        (param_3,
                                         L"Automation: %s is not a valid priority!\nValid priorities are Critical, High, Medium, Low, None"
                                        );
                            }
                          }
                          else {
                            if (((this->AutomationController).Object ==
                                 (IAutomationControllerManager *)0x0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValid()",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                              pcVar5 = (code *)swi(3);
                              uVar8 = (*pcVar5)();
                              return (bool)uVar8;
                            }
                            pIVar3 = (this->AutomationController).Object;
                            (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0x100000);
                          }
                        }
                        else {
                          if (((this->AutomationController).Object ==
                               (IAutomationControllerManager *)0x0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsValid()",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                 ,0x458,L""), bVar7)) {
                            pcVar5 = (code *)swi(3);
                            uVar8 = (*pcVar5)();
                            return (bool)uVar8;
                          }
                          pIVar3 = (this->AutomationController).Object;
                          (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0x200000);
                        }
                      }
                      else {
                        if (((this->AutomationController).Object ==
                             (IAutomationControllerManager *)0x0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValid()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                               ,0x458,L""), bVar7)) {
                          pcVar5 = (code *)swi(3);
                          uVar8 = (*pcVar5)();
                          return (bool)uVar8;
                        }
                        pIVar3 = (this->AutomationController).Object;
                        (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0x400000);
                      }
                    }
                    else {
                      if (((this->AutomationController).Object ==
                           (IAutomationControllerManager *)0x0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        uVar8 = (*pcVar5)();
                        return (bool)uVar8;
                      }
                      pIVar3 = (this->AutomationController).Object;
                      (**(code **)((longlong)*pIVar3 + 0x108))(pIVar3,0x800000);
                    }
                  }
                  else {
                    bVar7 = FParse::Command(&local_150,L"RunFilter",true);
                    if (bVar7) {
                      bVar7 = IsRunTestQueued(this);
                      if (bVar7) {
                        if ((this->StringCommand).Data.ArrayNum == 0) {
LAB_148c4b79e:
                          FOutputDevice::LogfImpl
                                    (param_3,
                                     L"Automation: A test run is already Queued: %s. Only one run is supported at a time."
                                    );
                        }
                        else {
                          FOutputDevice::LogfImpl
                                    (param_3,
                                     L"Automation: A test run is already Queued: %s. Only one run is supported at a time."
                                    );
                        }
                        goto LAB_148c4bab6;
                      }
                      ::FString::operator=(&local_148,local_150);
                      ::FString::operator=(&this->StringCommand,local_150);
                      if (local_148.Data.ArrayNum == 0) {
                        pwVar15 = L"";
                      }
                      else {
                        uVar14 = local_148.Data.ArrayNum - 1;
                        pwVar15 = (wchar_t *)local_148.Data.AllocatorInstance.Data;
                      }
                      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar14,pwVar15);
                      iVar9 = TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
                              ::FindIndexByHash<FString>(&this->FilterMaps,uVar10,&local_148);
                      if (iVar9 != -1) {
                        if (((this->AutomationController).Object ==
                             (IAutomationControllerManager *)0x0) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValid()",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                               ,0x458,L""), bVar7)) {
                          pcVar5 = (code *)swi(3);
                          uVar8 = (*pcVar5)();
                          return (bool)uVar8;
                        }
                        pIVar3 = (this->AutomationController).Object;
                        pcVar5 = *(code **)((longlong)*pIVar3 + 0x108);
                        if (local_148.Data.ArrayNum == 0) {
                          pwVar15 = L"";
                          iVar9 = 0;
                        }
                        else {
                          iVar9 = local_148.Data.ArrayNum + -1;
                          pwVar15 = (wchar_t *)local_148.Data.AllocatorInstance.Data;
                        }
                        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar15);
                        iVar9 = TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
                                ::FindIndexByHash<FString>(&this->FilterMaps,uVar10,&local_148);
                        if (iVar9 == -1) {
                          lVar16 = 0;
LAB_148c4b88b:
                          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Pair != nullptr",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                             ,0x288,L"");
                          if (bVar7) {
                            pcVar5 = (code *)swi(3);
                            uVar8 = (*pcVar5)();
                            return (bool)uVar8;
                          }
                        }
                        else {
                          lVar16 = (longlong)iVar9 * 0x20 + *(longlong *)&this->FilterMaps;
                          if (lVar16 == 0) goto LAB_148c4b88b;
                        }
                        (*pcVar5)(pIVar3,*(undefined4 *)(lVar16 + 0x10));
                        FOutputDevice::LogfImpl(param_3,L"Automation: RunFilter=\'%s\' Queued.");
                        lVar16 = local_138;
                      }
                      pFVar2 = (this->AutomationCommandQueue).AllocatorInstance.Data;
                      local_156 = (FScriptContainerElement)0x3;
                      if (((pFVar2 <= &local_156) &&
                          (&local_156 < pFVar2 + (this->AutomationCommandQueue).ArrayMax)) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        uVar8 = (*pcVar5)();
                        return (bool)uVar8;
                      }
                      iVar9 = (this->AutomationCommandQueue).ArrayNum;
                      piVar1 = &(this->AutomationCommandQueue).ArrayMax;
                      if (iVar9 == *piVar1) {
                        iVar9 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x101,&(this->AutomationCommandQueue).AllocatorInstance,
                                           piVar1);
                      }
                      (this->AutomationCommandQueue).ArrayNum = iVar9 + 1;
                      (this->AutomationCommandQueue).AllocatorInstance.Data[iVar9] = local_156;
                    }
                    else {
                      bVar7 = FParse::Command(&local_150,L"SetFilter",true);
                      if (!bVar7) {
                        bVar7 = FParse::Command(&local_150,L"RunAll",true);
                        if (bVar7) {
                          bVar7 = IsRunTestQueued(this);
                          if (bVar7) {
                            if ((this->StringCommand).Data.ArrayNum == 0) goto LAB_148c4b79e;
                            FOutputDevice::LogfImpl
                                      (param_3,
                                       L"Automation: A test run is already Queued: %s. Only one run is supported at a time."
                                      );
                          }
                          else {
                            pFVar2 = (this->AutomationCommandQueue).AllocatorInstance.Data;
                            local_155 = (FScriptContainerElement)0x2;
                            if (((pFVar2 <= &local_155) &&
                                (&local_155 < pFVar2 + (this->AutomationCommandQueue).ArrayMax)) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar7)) {
                              pcVar5 = (code *)swi(3);
                              uVar8 = (*pcVar5)();
                              return (bool)uVar8;
                            }
                            iVar9 = (this->AutomationCommandQueue).ArrayNum;
                            piVar1 = &(this->AutomationCommandQueue).ArrayMax;
                            if (iVar9 == *piVar1) {
                              iVar9 = UE::Core::Private::
                                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                (0x101,&(this->AutomationCommandQueue).
                                                        AllocatorInstance,piVar1);
                            }
                            (this->AutomationCommandQueue).ArrayNum = iVar9 + 1;
                            (this->AutomationCommandQueue).AllocatorInstance.Data[iVar9] = local_155
                            ;
                            if (((this->AutomationController).Object ==
                                 (IAutomationControllerManager *)0x0) &&
                               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("IsValid()",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar7)) {
                              pcVar5 = (code *)swi(3);
                              uVar8 = (*pcVar5)();
                              return (bool)uVar8;
                            }
                            pIVar3 = (this->AutomationController).Object;
                            pcVar5 = *(code **)((longlong)*pIVar3 + 0x108);
                            ::FString::FString(&local_e0,"All");
                            if (local_e0.Data.ArrayNum == 0) {
                              pwVar15 = L"";
                              iVar9 = 0;
                            }
                            else {
                              iVar9 = local_e0.Data.ArrayNum + -1;
                              pwVar15 = (wchar_t *)local_e0.Data.AllocatorInstance.Data;
                            }
                            uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar15);
                            iVar9 = TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
                                    ::FindIndexByHash<FString>(&this->FilterMaps,uVar10,&local_e0);
                            if (iVar9 == -1) {
                              lVar16 = 0;
LAB_148c4bc56:
                              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Pair != nullptr",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                                 ,0x288,L"");
                              if (bVar7) {
                                pcVar5 = (code *)swi(3);
                                uVar8 = (*pcVar5)();
                                return (bool)uVar8;
                              }
                            }
                            else {
                              lVar16 = (longlong)iVar9 * 0x20 + *(longlong *)&this->FilterMaps;
                              if (lVar16 == 0) goto LAB_148c4bc56;
                            }
                            (*pcVar5)(pIVar3,*(undefined4 *)(lVar16 + 0x10));
                            if (local_e0.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                            }
                            FOutputDevice::Log(param_3,
                                               L"Automation: RunAll Queued. NOTE: This may take a while."
                                              );
                            lVar16 = local_138;
                          }
                        }
                        else {
                          bVar7 = FParse::Command(&local_150,L"Quit",true);
                          if (bVar7) {
                            bVar7 = IsQuitQueued(this);
                            if (bVar7) {
                              FOutputDevice::Log(param_3,
                                                 L"Automation: Quit command is already Queued.");
                            }
                            else {
                              pFVar2 = (this->AutomationCommandQueue).AllocatorInstance.Data;
                              local_154 = (FScriptContainerElement)0x4;
                              if (((pFVar2 <= &local_154) &&
                                  (&local_154 < pFVar2 + (this->AutomationCommandQueue).ArrayMax))
                                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                       (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar7)) {
                                pcVar5 = (code *)swi(3);
                                uVar8 = (*pcVar5)();
                                return (bool)uVar8;
                              }
                              iVar9 = (this->AutomationCommandQueue).ArrayNum;
                              piVar1 = &(this->AutomationCommandQueue).ArrayMax;
                              if (iVar9 == *piVar1) {
                                iVar9 = UE::Core::Private::
                                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                  (0x101,&(this->AutomationCommandQueue).
                                                          AllocatorInstance,piVar1);
                              }
                              (this->AutomationCommandQueue).ArrayNum = iVar9 + 1;
                              (this->AutomationCommandQueue).AllocatorInstance.Data[iVar9] =
                                   local_154;
                              FOutputDevice::Log(param_3,L"Automation: Quit Command Queued.");
                            }
                          }
                          else {
                            bVar7 = FParse::Command(&local_150,L"SoftQuit",true);
                            if (bVar7) {
                              bVar7 = IsQuitQueued(this);
                              if (bVar7) {
                                FOutputDevice::Log(param_3,
                                                  L"Automation: Quit command is already Queued.");
                              }
                              else {
                                pFVar2 = (this->AutomationCommandQueue).AllocatorInstance.Data;
                                local_153 = (FScriptContainerElement)0x5;
                                if (((pFVar2 <= &local_153) &&
                                    (&local_153 < pFVar2 + (this->AutomationCommandQueue).ArrayMax))
                                   && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                         (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar7)) {
                                  pcVar5 = (code *)swi(3);
                                  uVar8 = (*pcVar5)();
                                  return (bool)uVar8;
                                }
                                iVar9 = (this->AutomationCommandQueue).ArrayNum;
                                piVar1 = &(this->AutomationCommandQueue).ArrayMax;
                                if (iVar9 == *piVar1) {
                                  iVar9 = UE::Core::Private::
                                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                    (0x101,&(this->AutomationCommandQueue).
                                                            AllocatorInstance,piVar1);
                                }
                                (this->AutomationCommandQueue).ArrayNum = iVar9 + 1;
                                (this->AutomationCommandQueue).AllocatorInstance.Data[iVar9] =
                                     local_153;
                                FOutputDevice::Log(param_3,L"Automation: SoftQuit Command Queued.");
                              }
                            }
                            else {
                              bVar7 = FParse::Command(&local_150,L"IgnoreLogEvents",true);
                              if (bVar7) {
                                if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                                   (IConsoleManager::SetupSingleton(),
                                   IConsoleManager::Singleton == (IConsoleManager *)0x0)) {
                                  uVar19 = 4;
                                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                    ("Singleton != nullptr",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                                  ,0x4fb,L"");
                                  if (bVar7) {
                                    pcVar5 = (code *)swi(3);
                                    uVar8 = (*pcVar5)();
                                    return (bool)uVar8;
                                  }
                                }
                                plVar12 = (longlong *)
                                          (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0)
                                          )(IConsoleManager::Singleton,
                                            L"Automation.CaptureLogEvents",CONCAT71(uVar19,1));
                                if (plVar12 != (longlong *)0x0) {
                                  FOutputDevice::Log(param_3,L"Automation: Suppressing Log Events");
                                  lVar4 = *plVar12;
                                  local_118 = 0;
                                  local_c8 = 0;
                                  local_d0 = 0xe000000;
                                  local_cc = 0;
                                  local_c0 = 0;
                                  local_bc = 0xf000000;
                                  local_b8 = 0x1000000;
                                  uVar13 = (**(code **)(lVar4 + 0xa8))(plVar12,local_58,&local_d0);
                                  (**(code **)(lVar4 + 0xb0))(plVar12,&u_0,uVar13);
                                }
                              }
                              else {
                                bVar7 = FParse::Command(&local_150,L"EnableStereoTests",true);
                                if (bVar7) {
                                  if ((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                                     (IConsoleManager::SetupSingleton(),
                                     IConsoleManager::Singleton == (IConsoleManager *)0x0)) {
                                    uVar19 = 4;
                                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("Singleton != nullptr",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                                  ,0x4fb,L"");
                                    if (bVar7) {
                                      pcVar5 = (code *)swi(3);
                                      uVar8 = (*pcVar5)();
                                      return (bool)uVar8;
                                    }
                                  }
                                  plVar12 = (longlong *)
                                            (**(code **)((longlong)*IConsoleManager::Singleton +
                                                        0xc0))(IConsoleManager::Singleton,
                                                                                                                              
                                                  L"Automation.EnableStereoTestVariants",
                                                  CONCAT71(uVar19,1));
                                  if (plVar12 != (longlong *)0x0) {
                                    FOutputDevice::Log(param_3,
                                                  L"Automation: Enabling Stereo Test Variants");
                                    lVar4 = *plVar12;
                                    local_110 = 0;
                                    local_ac = 0;
                                    local_b4 = 0xe000000;
                                    local_b0 = 0;
                                    local_a4 = 0;
                                    local_a0 = 0xf000000;
                                    local_9c = 0x1000000;
                                    uVar13 = (**(code **)(lVar4 + 0xa8))(plVar12,local_4c,&local_b4)
                                    ;
                                    (**(code **)(lVar4 + 0xb0))(plVar12,&u_1,uVar13);
                                  }
                                }
                                else {
                                  bVar7 = FParse::Command(&local_150,L"SetTagFilter",true);
                                  if (bVar7) {
                                    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
                                        (IConsoleManager::SetupSingleton(),
                                        IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
                                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                          ("Singleton != nullptr",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                                  ,0x4fb,L""), bVar7)) {
                                      pcVar5 = (code *)swi(3);
                                      uVar8 = (*pcVar5)();
                                      return (bool)uVar8;
                                    }
                                    plVar12 = (longlong *)
                                              (**(code **)((longlong)*IConsoleManager::Singleton +
                                                          0xc0))(IConsoleManager::Singleton,
                                                                 L"Automation.TestTagGlobalFilter",1
                                                                );
                                    lVar16 = local_138;
                                    if (plVar12 != (longlong *)0x0) {
                                      this_00 = FAutomationTestFramework::Get();
                                      FAutomationTestFramework::LoadTestTagMappings(this_00);
                                      ::FString::FString(&local_100,local_150);
                                      FOutputDevice::LogfImpl
                                                (param_3,
                                                 L"Automation: Setting test tag global filter to: \'%s\'"
                                                );
                                      lVar16 = *plVar12;
                                      local_108 = 0;
                                      FVar17.Data = (FScriptContainerElement *)L"";
                                      if (local_100.Data.ArrayNum != 0) {
                                        FVar17.Data = local_100.Data.AllocatorInstance.Data;
                                      }
                                      local_90 = 0;
                                      local_98 = 0xe000000;
                                      local_94 = 0;
                                      local_88 = 0;
                                      local_84 = 0xf000000;
                                      local_80 = 0x1000000;
                                      uVar13 = (**(code **)(lVar16 + 0xa8))
                                                         (plVar12,local_40,&local_98);
                                      (**(code **)(lVar16 + 0xb0))(plVar12,FVar17.Data,uVar13);
                                      lVar16 = local_138;
                                      if (local_100.Data.AllocatorInstance.Data !=
                                          (FScriptContainerElement *)0x0) {
                                        FMemory::Free(local_100.Data.AllocatorInstance.Data);
                                        lVar16 = local_138;
                                      }
                                    }
                                  }
                                  else {
                                    bVar7 = FParse::Command(&local_150,L"Help",true);
                                    if (bVar7) {
                                      FOutputDevice::Log(param_3,L"Supported commands are: ");
                                      FOutputDevice::Log(param_3,
                                                  L"\tAutomation StartRemoteSession <sessionid>");
                                      FOutputDevice::Log(param_3,L"\tAutomation List");
                                      FOutputDevice::Log(param_3,
                                                  L"\tAutomation RunTests <test string>");
                                      FOutputDevice::Log(param_3,L"\tAutomation RunAll");
                                      FOutputDevice::Log(param_3,
                                                  L"\tAutomation RunFilter <filter name>");
                                      FOutputDevice::Log(param_3,
                                                  L"\tAutomation SetFilter <filter name>");
                                      FOutputDevice::Log(param_3,
                                                  L"\tAutomation SetMinimumPriority <minimum priority>"
                                                  );
                                      FOutputDevice::Log(param_3,
                                                  L"\tAutomation SetPriority <priority>");
                                      FOutputDevice::Log(param_3,L"\tAutomation Now");
                                      FOutputDevice::Log(param_3,L"\tAutomation Quit");
                                      FOutputDevice::Log(param_3,L"\tAutomation SoftQuit");
                                      FOutputDevice::Log(param_3,L"\tAutomation IgnoreLogEvents");
                                      FOutputDevice::Log(param_3,L"\tAutomation EnableStereoTests");
                                      FOutputDevice::Log(param_3,L"\tAutomation SetTagFilter");
                                      local_158 = false;
                                    }
                                    else {
                                      FOutputDevice::LogfImpl
                                                (param_3,
                                                 L"Unknown Automation command \'%s\'! Use Help command for a detailed list."
                                                );
                                      local_158 = false;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto LAB_148c4bab6;
                      }
                      ::FString::operator=(&local_148,local_150);
                      if (local_148.Data.ArrayNum == 0) {
                        pwVar15 = L"";
                      }
                      else {
                        uVar14 = local_148.Data.ArrayNum - 1;
                        pwVar15 = (wchar_t *)local_148.Data.AllocatorInstance.Data;
                      }
                      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar14,pwVar15);
                      iVar9 = TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
                              ::FindIndexByHash<FString>(&this->FilterMaps,uVar10,&local_148);
                      if (iVar9 == -1) goto LAB_148c4bab6;
                      if (((this->AutomationController).Object ==
                           (IAutomationControllerManager *)0x0) &&
                         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar7)) {
                        pcVar5 = (code *)swi(3);
                        uVar8 = (*pcVar5)();
                        return (bool)uVar8;
                      }
                      pIVar3 = (this->AutomationController).Object;
                      pcVar5 = *(code **)((longlong)*pIVar3 + 0x108);
                      if (local_148.Data.ArrayNum == 0) {
                        pwVar15 = L"";
                        iVar9 = 0;
                      }
                      else {
                        iVar9 = local_148.Data.ArrayNum + -1;
                        pwVar15 = (wchar_t *)local_148.Data.AllocatorInstance.Data;
                      }
                      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar15);
                      iVar9 = TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
                              ::FindIndexByHash<FString>(&this->FilterMaps,uVar10,&local_148);
                      if (iVar9 == -1) {
                        lVar16 = 0;
LAB_148c4ba64:
                        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Pair != nullptr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                           ,0x288,L"");
                        if (bVar7) {
                          pcVar5 = (code *)swi(3);
                          uVar8 = (*pcVar5)();
                          return (bool)uVar8;
                        }
                      }
                      else {
                        lVar16 = (longlong)iVar9 * 0x20 + *(longlong *)&this->FilterMaps;
                        if (lVar16 == 0) goto LAB_148c4ba64;
                      }
                      (*pcVar5)(pIVar3,*(undefined4 *)(lVar16 + 0x10));
                      FOutputDevice::LogfImpl(param_3,L"Automation: Setting test filter: %s");
                      lVar16 = local_138;
                    }
                  }
                }
              }
            }
          }
        }
LAB_148c4bab6:
        local_138 = lVar16 + 1;
        local_130 = local_130 + 1;
        uVar18 = (ulonglong)local_130;
        bVar7 = local_158;
      } while ((int)local_130 < local_128.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return bVar7;
}

// ~FAutomationExecCmd @ 148c540b0

void __thiscall FAutomationExecCmd::~FAutomationExecCmd(FAutomationExecCmd *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  DestructItems<FString,int>
            ((FString *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar3 = (this->Errors).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->FilterMaps).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FilterMaps).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_EAutomationTestFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_EAutomationTestFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->FilterMaps);
  pFVar3 = (this->StringCommand).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar5 = (this->TickHandler).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar3 = (this->AutomationCommandQueue).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AutomationController).SharedReferenceCount.ReferenceController);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  return;
}

// ApplyCVarTagFilter @ 148c579f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationExecCmd::ApplyCVarTagFilter
          (FAutomationExecCmd *this,
          TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  FAutomationTestFramework *this_01;
  TReferenceControllerBase<1> *pTVar9;
  FAutomatedTestTagFilter *pFVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  ForAnyElementType local_68;
  undefined8 local_60;
  FString local_58;
  TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1> local_48;
  FAutomatedTestTagFilter local_38;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar8 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"Automation.TestTagGlobalFilter",1);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0xd8))(plVar8,&local_58);
    if (1 < local_58.Data.ArrayNum) {
      this_01 = FAutomationTestFramework::Get();
      FAutomationTestFramework::LoadTestTagMappings(this_01);
      if (3 < (byte)LogAutomationCommandLine._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FAutomationExecCmd::ApplyCVarTagFilter(TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const&___ptr64>,1>)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
      }
      pTVar9 = ::operator_new(0x48);
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      pTVar13 = pTVar12;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x0;
        pTVar9->WeakReferenceCount = (atomic<int>)0x0;
        pTVar9->_padding_ = (longlong)&___7FAutomationGroupFilter__6B_;
        pTVar9[1]._padding_ = 0;
        pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[2]._padding_ = 2;
        pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[3]._padding_ = 0;
        pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[4]._padding_ = 0;
        pTVar13 = pTVar9;
      }
      local_68.Data = (FScriptContainerElement *)0x0;
      local_60 = 0;
      pFVar10 = FAutomatedTestTagFilter::FAutomatedTestTagFilter(&local_38,&local_58);
      if (((local_68.Data <= pFVar10) &&
          (pFVar10 < (FAutomatedTestTagFilter *)(local_68.Data + (longlong)local_60._4_4_ * 0x18)))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = (int)local_60;
      if ((int)local_60 == local_60._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_68,(int *)((longlong)&local_60 + 4));
      }
      lVar11 = (longlong)iVar7;
      local_60 = CONCAT44(local_60._4_4_,iVar7 + 1);
      *(undefined ***)&local_68.Data[lVar11 * 0x18].field_0x0 = &___7FAutomatedTestTagFilter__6B_;
      *(FTextFilterExpressionEvaluator **)(local_68.Data + lVar11 * 0x18 + 8) =
           (pFVar10->TagFilter).Object;
      pTVar9 = (pFVar10->TagFilter).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(local_68.Data + lVar11 * 0x18 + 0x10) = pTVar9;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38._padding_ = (longlong)&___7FAutomatedTestTagFilter__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.TagFilter.SharedReferenceCount.ReferenceController);
      paVar1 = &pTVar13[3].SharedReferenceCount;
      if (paVar1 != (atomic<int> *)&local_68) {
        DestructItems<FAutomatedTestTagFilter,int>
                  (*(FAutomatedTestTagFilter **)paVar1,(int)pTVar13[4]._padding_);
        FVar4.Data = local_68.Data;
        iVar5 = (int)local_60;
        piVar2 = (int *)((longlong)&pTVar13[4]._padding_ + 4);
        iVar7 = *piVar2;
        *(int *)&pTVar13[4]._padding_ = (int)local_60;
        if (((int)local_60 == 0) && (iVar7 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(int)local_60,iVar7,(ForAnyElementType *)paVar1,(int)local_60,piVar2);
          ConstructItems<FAutomatedTestTagFilter,FAutomatedTestTagFilter,int>
                    (*(void **)paVar1,(FAutomatedTestTagFilter *)FVar4.Data,iVar5);
        }
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pTVar13->SharedReferenceCount);
      if ((param_1->Object == (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_1->Object;
      local_48.Object = (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *)pTVar13;
      pTVar9 = ::operator_new(0x18);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFAutomationGroupFilter__U__DefaultDeleter_VFAutomationGroupFilter___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9[1]._padding_ = (longlong)pTVar13;
        pTVar12 = pTVar9;
      }
      local_48.SharedReferenceCount.ReferenceController = pTVar12;
      TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>::Add(this_00,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      DestructItems<FAutomatedTestTagFilter,int>
                ((FAutomatedTestTagFilter *)local_68.Data,(int)local_60);
      if ((FAutomatedTestTagFilter *)local_68.Data != (FAutomatedTestTagFilter *)0x0) {
        FMemory::Free(local_68.Data);
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GenerateTestNamesFromCommandLine @ 148c5bc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutomationExecCmd::GenerateTestNamesFromCommandLine
          (FAutomationExecCmd *this,
          TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *this_00;
  IAutomationControllerManager *pIVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *this_01;
  UAutomationControllerSettings *pUVar8;
  IFilter<TSharedPtr<IAutomationReport,1>_const_&> *pIVar9;
  FString *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong lVar13;
  int iVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  IFilter<TSharedPtr<IAutomationReport,1>_const_&> *pIVar19;
  IFilter<TSharedPtr<IAutomationReport,1>_const_&> *pIVar20;
  undefined1 uVar21;
  uint local_res20;
  ForAnyElementType local_1d8;
  int local_1d0;
  int local_1cc;
  FString local_1c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  undefined1 local_168 [24];
  undefined2 local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  ForAnyElementType local_138;
  undefined8 local_130;
  undefined1 local_128 [24];
  undefined1 local_110;
  undefined1 local_10f;
  ForAnyElementType local_108;
  undefined8 local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TSharedPtr<IFilter<TSharedPtr<IAutomationReport,1>_const_&>,1> local_a8;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *local_98;
  TReferenceControllerBase<1> *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pIVar19 = (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *)0x0;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  ::FString::ParseIntoArray(&this->StringCommand,&local_1b8,L"+",true);
  this_01 = UAutomationControllerSettings::StaticClass();
  pUVar8 = UClass::GetDefaultObject<UAutomationControllerSettings>(this_01);
  pIVar9 = ::operator_new(0x48);
  pIVar20 = pIVar19;
  if (pIVar9 != (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
    pIVar9[1] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x0;
    *pIVar9 = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)&___7FAutomationGroupFilter__6B_;
    pIVar9[2] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x0;
    pIVar9[3] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x0;
    pIVar9[4] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x2;
    pIVar9[5] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x0;
    pIVar9[6] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x0;
    pIVar9[7] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x0;
    pIVar9[8] = (IFilter<TSharedPtr<IAutomationReport,1>_const_&>)0x0;
    pIVar20 = pIVar9;
  }
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  local_1cc = 0;
  local_res20 = 0;
  if (0 < local_1b8.ArrayNum) {
    do {
      ::FString::FString(&local_d8,L"Group:");
      ::FString::FString(&local_e8,L"StartsWith:");
      uVar17 = (uint)pIVar19;
      uVar18 = 0;
      if ((int)uVar17 < local_1b8.ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FString::TrimStartAndEnd
                ((FString *)(local_1b8.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10),
                 &local_1c8);
      iVar6 = local_e8.Data.ArrayNum;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (iVar6 != 0) {
        FVar15.Data = local_e8.Data.AllocatorInstance.Data;
      }
      iVar14 = 0;
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = iVar14;
      }
      bVar4 = ::FString::StartsWith(&local_1c8,(wchar_t *)FVar15.Data,iVar7,IgnoreCase);
      if (bVar4) {
        iVar6 = local_e8.Data.ArrayNum + -1;
        if (local_e8.Data.ArrayNum == 0) {
          iVar6 = iVar14;
        }
        pFVar10 = ::FString::RightChop(&local_1c8,&local_88,iVar6);
        ::FString::TrimStart(pFVar10,&local_178);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        bVar4 = ::FString::EndsWith(&local_178,L".",1,IgnoreCase);
        if (!bVar4) {
          ::FString::AppendChars(&local_178,L".",1);
        }
        FVar15.Data = local_178.Data.AllocatorInstance.Data;
        local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar6 = local_178.Data.ArrayNum;
        local_1a8.Data.ArrayNum = iVar6;
        if (iVar6 == 0) {
          local_1a8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,0,(ForAnyElementType *)&local_1a8,iVar6,&local_1a8.Data.ArrayMax);
          memcpy(local_1a8.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar6 * 2);
        }
        pFVar10 = ::FString::FString(&local_68,&local_1a8);
        local_168._0_8_ = &___7FAutomatedTestFilterBase__6B_;
        ::FString::FString((FString *)(local_168 + 8),pFVar10);
        local_150 = 1;
        pFVar16 = (pFVar10->Data).AllocatorInstance.Data;
        if (pFVar16 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar16);
        }
        local_168._0_8_ = &___7FAutomatedTestFilter__6B_;
        local_148.Data = (FScriptContainerElement *)0x0;
        local_140._0_4_ = 0;
        local_140._4_4_ = 0;
        local_138.Data = (FScriptContainerElement *)0x0;
        local_130._0_4_ = 0;
        local_130._4_4_ = 0;
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (((local_1d8.Data <= (FAutomatedTestFilter *)local_168) &&
            ((FScriptContainerElement *)local_168 < local_1d8.Data + (longlong)local_1cc * 0x40)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_1d0 == local_1cc) {
          local_1d0 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x840,&local_1d8,&local_1cc);
        }
        lVar13 = (longlong)local_1d0;
        local_1d0 = local_1d0 + 1;
        FAutomatedTestFilter::FAutomatedTestFilter
                  ((FAutomatedTestFilter *)(local_1d8.Data + lVar13 * 0x40),
                   (FAutomatedTestFilter *)local_168);
        DestructItems<FAutomatedTestTagFilter,int>
                  ((FAutomatedTestTagFilter *)local_138.Data,(int)local_130);
        if ((FAutomatedTestTagFilter *)local_138.Data != (FAutomatedTestTagFilter *)0x0) {
          FMemory::Free(local_138.Data);
        }
        DestructItems<FAutomatedTestFilterBase,int>
                  ((FAutomatedTestFilterBase *)local_148.Data,(int)local_140);
        if ((FAutomatedTestFilterBase *)local_148.Data != (FAutomatedTestFilterBase *)0x0) {
          FMemory::Free(local_148.Data);
        }
        local_168._0_8_ = &___7FAutomatedTestFilterBase__6B_;
        if ((void *)local_168._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_168._8_8_);
        }
        local_res20 = uVar17;
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
      }
      else {
        iVar6 = local_d8.Data.ArrayNum + -1;
        FVar15.Data = local_d8.Data.AllocatorInstance.Data;
        if (local_d8.Data.ArrayNum == 0) {
          iVar6 = iVar14;
          FVar15.Data = (FScriptContainerElement *)L"";
        }
        bVar4 = ::FString::StartsWith(&local_1c8,(wchar_t *)FVar15.Data,iVar6,IgnoreCase);
        if (bVar4) {
          iVar6 = local_d8.Data.ArrayNum + -1;
          if (local_d8.Data.ArrayNum == 0) {
            iVar6 = iVar14;
          }
          pFVar10 = ::FString::RightChop(&local_1c8,&local_78,iVar6);
          ::FString::TrimStart(pFVar10,&local_198);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          bVar4 = false;
          uVar18 = 0;
          if ((pUVar8->Groups).ArrayNum < 1) {
LAB_148c5c25f:
            if (1 < (byte)LogAutomationCommandLine._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&`public:_void___cdecl_FAutomationExecCmd::GenerateTestNamesFromCommandLine(TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const&___ptr64>,1>,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                          ::__l46::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
            }
          }
          else {
            lVar13 = 0;
            do {
              uVar17 = 0;
              if ((int)uVar18 < (pUVar8->Groups).ArrayNum) {
                uVar17 = ~uVar18 >> 0x1f;
              }
              if ((uVar17 == 0) &&
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
              pFVar16 = (pUVar8->Groups).AllocatorInstance.Data + lVar13;
              if (pFVar16 != (FScriptContainerElement *)0x0) {
                iVar6 = *(int *)(pFVar16 + 8);
                if (iVar6 == local_198.Data.ArrayNum) {
                  if (1 < iVar6) {
                    iVar6 = FGenericPlatformStricmp::Stricmp
                                      (*(wchar_t **)pFVar16,
                                       (wchar_t *)local_198.Data.AllocatorInstance.Data);
                    bVar5 = iVar6 == 0;
                    goto LAB_148c5c18b;
                  }
                }
                else {
                  bVar5 = iVar6 + local_198.Data.ArrayNum == 1;
LAB_148c5c18b:
                  if (!bVar5) goto LAB_148c5c24a;
                }
                bVar4 = true;
                if (*(int *)(pFVar16 + 0x18) < 1) {
                  if (2 < (byte)LogAutomationCommandLine._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&`public:_void___cdecl_FAutomationExecCmd::GenerateTestNamesFromCommandLine(TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const&___ptr64>,1>,TArray<FString,TSizedDefaultAllocator<32>_>&___ptr64)___ptr64'
                                ::__l25::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
                  }
                }
                else {
                  if (((FScriptContainerElement *)&local_1d8 == pFVar16 + 0x10) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(void*)this != (void*)&Source",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x96e,L""), bVar5)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar6 = *(int *)(pFVar16 + 0x18);
                  if (iVar6 != 0) {
                    iVar7 = UE::Core::Private::
                            ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x40,8,iVar6,&local_1d8,&local_1d0,&local_1cc);
                    ConstructItems<FAutomatedTestFilter,FAutomatedTestFilter,int>
                              (local_1d8.Data + (longlong)iVar7 * 0x40,
                               *(FAutomatedTestFilter **)(pFVar16 + 0x10),iVar6);
                  }
                }
              }
LAB_148c5c24a:
              uVar18 = uVar18 + 1;
              lVar13 = lVar13 + 0x20;
            } while ((int)uVar18 < (pUVar8->Groups).ArrayNum);
            if (!bVar4) goto LAB_148c5c25f;
          }
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
        }
        else {
          uVar21 = 0;
          ::FString::FString(&local_c8,"^");
          iVar6 = local_c8.Data.ArrayNum;
          FVar15.Data = (FScriptContainerElement *)L"";
          if (iVar6 != 0) {
            FVar15.Data = local_c8.Data.AllocatorInstance.Data;
          }
          iVar7 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar7 = 0;
          }
          bVar4 = ::FString::StartsWith(&local_1c8,(wchar_t *)FVar15.Data,iVar7,IgnoreCase);
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            ::FString::RemoveAt(&local_1c8,0,1,Default);
          }
          ::FString::FString(&local_b8,"$");
          iVar6 = local_b8.Data.ArrayNum + -1;
          FVar15.Data = local_b8.Data.AllocatorInstance.Data;
          if (local_b8.Data.ArrayNum == 0) {
            iVar6 = 0;
            FVar15.Data = (FScriptContainerElement *)L"";
          }
          bVar5 = ::FString::EndsWith(&local_1c8,(wchar_t *)FVar15.Data,iVar6,IgnoreCase);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            uVar21 = 1;
            iVar6 = local_1c8.Data.ArrayNum + -1;
            if (local_1c8.Data.ArrayNum == 0) {
              iVar6 = 0;
            }
            if (iVar6 + -1 < iVar6) {
              iVar6 = iVar6 + -1;
            }
            if (0 < iVar6) {
              iVar14 = iVar6;
            }
            ::FString::RemoveAt(&local_1c8,iVar14,1,Default);
          }
          FVar15.Data = local_1c8.Data.AllocatorInstance.Data;
          local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar6 = local_1c8.Data.ArrayNum;
          local_188.Data.ArrayNum = iVar6;
          if (iVar6 == 0) {
            local_188.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar6,0,(ForAnyElementType *)&local_188,iVar6,&local_188.Data.ArrayMax);
            memcpy(local_188.Data.AllocatorInstance.Data,FVar15.Data,(longlong)iVar6 * 2);
          }
          pFVar10 = ::FString::FString(&local_58,&local_188);
          local_128._0_8_ = &___7FAutomatedTestFilterBase__6B_;
          ::FString::FString((FString *)(local_128 + 8),pFVar10);
          pFVar16 = (pFVar10->Data).AllocatorInstance.Data;
          local_110 = bVar4;
          local_10f = uVar21;
          if (pFVar16 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar16);
          }
          local_128._0_8_ = &___7FAutomatedTestFilter__6B_;
          local_108.Data = (FScriptContainerElement *)0x0;
          local_100._0_4_ = 0;
          local_100._4_4_ = 0;
          local_f8.Data = (FScriptContainerElement *)0x0;
          local_f0._0_4_ = 0;
          local_f0._4_4_ = 0;
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (((local_1d8.Data <= (FAutomatedTestFilter *)local_128) &&
              ((FAutomatedTestFilter *)local_128 <
               (FAutomatedTestFilter *)(local_1d8.Data + (longlong)local_1cc * 0x40))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_1d0 == local_1cc) {
            local_1d0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x840,&local_1d8,&local_1cc);
          }
          lVar13 = (longlong)local_1d0;
          local_1d0 = local_1d0 + 1;
          FAutomatedTestFilter::FAutomatedTestFilter
                    ((FAutomatedTestFilter *)(local_1d8.Data + lVar13 * 0x40),
                     (FAutomatedTestFilter *)local_128);
          DestructItems<FAutomatedTestTagFilter,int>
                    ((FAutomatedTestTagFilter *)local_f8.Data,(int)local_f0);
          if ((FAutomatedTestTagFilter *)local_f8.Data != (FAutomatedTestTagFilter *)0x0) {
            FMemory::Free(local_f8.Data);
          }
          DestructItems<FAutomatedTestFilterBase,int>
                    ((FAutomatedTestFilterBase *)local_108.Data,(int)local_100);
          if ((FAutomatedTestFilterBase *)local_108.Data != (FAutomatedTestFilterBase *)0x0) {
            FMemory::Free(local_108.Data);
          }
          local_128._0_8_ = &___7FAutomatedTestFilterBase__6B_;
          if ((void *)local_128._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_128._8_8_);
          }
        }
      }
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_res20 = local_res20 + 1;
      pIVar19 = (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *)(ulonglong)local_res20;
    } while ((int)local_res20 < local_1b8.ArrayNum);
    if (local_1d0 != 0) {
      pIVar19 = pIVar20 + 5;
      if (pIVar19 != (IFilter<TSharedPtr<IAutomationReport,1>_const_&> *)&local_1d8) {
        DestructItems<FAutomatedTestFilter,int>
                  ((FAutomatedTestFilter *)*(FScriptContainerElement **)pIVar19,
                   *(int *)(pIVar20 + 6));
        iVar7 = local_1d0;
        FVar15.Data = local_1d8.Data;
        puVar1 = &pIVar20[6].field_0x4;
        iVar6 = *(int *)puVar1;
        *(int *)(pIVar20 + 6) = local_1d0;
        if ((local_1d0 == 0) && (iVar6 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,local_1d0,iVar6,(ForAnyElementType *)pIVar19,local_1d0,(int *)puVar1);
          ConstructItems<FAutomatedTestFilter,FAutomatedTestFilter,int>
                    (*(FScriptContainerElement **)pIVar19,(FAutomatedTestFilter *)FVar15.Data,iVar7)
          ;
        }
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pIVar20 + 1))
      ;
      if ((param_1->Object == (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = param_1->Object;
      local_a8.Object = pIVar20;
      pTVar11 = ::operator_new(0x18);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        pTVar11->SharedReferenceCount = (atomic<int>)0x1;
        pTVar11->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VFAutomationGroupFilter__U__DefaultDeleter_VFAutomationGroupFilter___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        pTVar11->WeakReferenceCount = (atomic<int>)0x1;
        pTVar11[1]._padding_ = (longlong)pIVar20;
        pTVar12 = pTVar11;
      }
      local_a8.SharedReferenceCount.ReferenceController = pTVar12;
      TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>::Add(this_00,&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar2 = (this->AutomationController).Object;
      pcVar3 = *(code **)((longlong)*pIVar2 + 0x70);
      local_98 = param_1->Object;
      local_90 = (param_1->SharedReferenceCount).ReferenceController;
      if (local_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar3)(pIVar2,&local_98);
      if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar2 = (this->AutomationController).Object;
      (**(code **)((longlong)*pIVar2 + 0xe0))(pIVar2,param_2);
    }
  }
  DestructItems<FAutomatedTestFilter,int>((FAutomatedTestFilter *)local_1d8.Data,local_1d0);
  if ((FAutomatedTestFilter *)local_1d8.Data != (FAutomatedTestFilter *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  DestructItems<FString,int>((FString *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleRefreshTestCallback @ 148c621e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationExecCmd::HandleRefreshTestCallback(FAutomationExecCmd *this)

{
  EAutomationCommand EVar1;
  int iVar2;
  IAutomationControllerManager *pIVar3;
  ulong64 uVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar10;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  ulong64 *puVar11;
  wchar_t *pwVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18;
  TRawPtrProxy<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_> local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> local_c8;
  FDestructionSentinel local_b8;
  FString local_a0;
  TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> local_88;
  TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1> local_68 [2];
  
  pTVar15 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (**(code **)((longlong)*(this->AutomationController).Object + 0x90))();
  if ((iVar8 == 0) || (this->AutomationTestState != RequestTests)) {
    if (4 < (byte)LogAutomationCommandLine._0_1_) {
      if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)((longlong)*(this->AutomationController).Object + 0x90))();
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
    }
    goto LAB_148c6298f;
  }
  pTVar10 = ::operator_new(0x40);
  local_res20.Object = pTVar15;
  if (pTVar10 != (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)0x0) {
    pTVar10->_padding_ = 0;
    pTVar10->_padding_ = 0;
    (pTVar10->ChildFilters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar10->ChildFilters).ArrayNum = 0;
    (pTVar10->ChildFilters).ArrayMax = 0;
    *(undefined8 *)&pTVar10->ChangedEvent = 0;
    *(undefined8 *)&(pTVar10->ChangedEvent).field_0x8 = 0;
    *(undefined8 *)&(pTVar10->ChangedEvent).field_0x10 = 0;
    *(undefined8 *)&(pTVar10->ChangedEvent).field_0x18 = 2;
    local_res20.Object = pTVar10;
  }
  TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1>::
  TSharedPtr<TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>,1><TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&>_>
            (&local_c8,&local_res20);
  FVar6.ReferenceController = local_c8.SharedReferenceCount.ReferenceController;
  local_88.Object = local_c8.Object;
  local_88.SharedReferenceCount.ReferenceController =
       local_c8.SharedReferenceCount.ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ApplyCVarTagFilter(this,&local_88);
  if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar3 = (this->AutomationController).Object;
  local_78 = local_c8.Object;
  pTStack_70 = FVar6.ReferenceController;
  pcVar5 = *(code **)((longlong)*pIVar3 + 0x70);
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar5)(pIVar3,&local_78);
  if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar3 = (this->AutomationController).Object;
  (**(code **)((longlong)*pIVar3 + 200))(pIVar3,1);
  if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pIVar3 = (this->AutomationController).Object;
  (**(code **)((longlong)*pIVar3 + 0xd8))(pIVar3,&local_e8);
  EVar1 = this->AutomationCommand;
  iVar8 = 0;
  if (EVar1 == ListAllTests) {
    if (3 < (byte)LogAutomationCommandLine._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
    }
    iVar8 = local_e8.ArrayNum;
    pFVar16 = local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x10;
    FVar14.Data = local_e8.AllocatorInstance.Data;
    while( true ) {
      if (local_e8.ArrayNum != iVar8) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar14.Data == pFVar16) break;
      if (3 < (byte)LogAutomationCommandLine._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                    ::__l49::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
      }
      FVar14.Data = FVar14.Data + 0x10;
    }
LAB_148c625d4:
    this->AutomationTestState = Complete;
  }
  else {
    if (EVar1 == RunCommandLineTests) {
      local_68[0].Object = local_c8.Object;
      local_68[0].SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      GenerateTestNamesFromCommandLine(this,local_68,&local_e8);
      if (local_e8.ArrayNum == 0) {
        ::FString::PrintfImpl(&local_a0,L"No automation tests matched \'%s\'");
        LogCommandLineError(this,&local_a0);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
      else if (3 < (byte)LogAutomationCommandLine._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                    ::__l76::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
      }
      iVar8 = local_e8.ArrayNum;
      pFVar16 = local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x10;
      FVar14.Data = local_e8.AllocatorInstance.Data;
      while( true ) {
        if (local_e8.ArrayNum != iVar8) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar14.Data == pFVar16) break;
        if (3 < (byte)LogAutomationCommandLine._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                      ::__l98::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
        }
        FVar14.Data = FVar14.Data + 0x10;
      }
      if (local_e8.ArrayNum != 0) goto LAB_148c626fa;
      goto LAB_148c625d4;
    }
    if (EVar1 == RunFilter) {
      iVar2 = (this->StringCommand).Data.ArrayNum;
      if (iVar2 == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)(this->StringCommand).Data.AllocatorInstance.Data;
        iVar8 = iVar2 + -1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar12);
      iVar8 = TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(&this->FilterMaps,uVar9,&this->StringCommand);
      if (iVar8 == -1) {
        this->AutomationTestState = Complete;
        if (3 < (byte)LogAutomationCommandLine._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    (&`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                      ::__l153::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
        }
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = 0;
        local_d8.ArrayMax = 0;
        TMapBase<FString,enum_EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>_>
        ::GetKeys<TSizedDefaultAllocator<32>_>(&this->FilterMaps,&local_d8);
        iVar8 = local_d8.ArrayNum;
        if (0 < local_d8.ArrayNum) {
          do {
            uVar9 = (uint)pTVar15;
            if (3 < (byte)LogAutomationCommandLine._0_1_) {
              uVar13 = 0;
              if ((int)uVar9 < iVar8) {
                uVar13 = ~uVar9 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              UE::Logging::Private::BasicLog<4>
                        (&`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                          ::__l173::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
              iVar8 = local_d8.ArrayNum;
            }
            pTVar15 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
                      (ulonglong)(uVar9 + 1);
          } while ((int)(uVar9 + 1) < iVar8);
        }
        DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,iVar8);
        if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
      }
      else {
        if (3 < (byte)LogAutomationCommandLine._0_1_) {
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTestCallback(void)___ptr64'
                      ::A::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
        }
        if (local_e8.ArrayNum < 1) goto LAB_148c625d4;
LAB_148c626fa:
        if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)((longlong)*(this->AutomationController).Object + 0x20))();
        if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pIVar3 = (this->AutomationController).Object;
        (**(code **)((longlong)*pIVar3 + 0xe8))(pIVar3,&local_e8);
        this->TestCount = local_e8.ArrayNum;
        if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                  (**(code **)((longlong)*(this->AutomationController).Object + 0x198))();
        uVar4 = (this->TestsRefreshedHandle).ID;
        if (uVar4 != 0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                     (FWriteAccessScope *)&local_b8);
          pTVar10 = pTVar15;
          if (0 < (this_00->InvocationList).ArrayNum) {
            do {
              uVar13 = (uint)pTVar15;
              uVar9 = 0;
              if ((int)uVar13 < (this_00->InvocationList).ArrayNum) {
                uVar9 = ~uVar13 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar16 = (FScriptContainerElement *)
                        ((longlong)&pTVar10->_padding_ +
                        (longlong)(this_00->InvocationList).AllocatorInstance.Data);
              if (((*(int *)&pFVar16[8].field_0x0 != 0) &&
                  (*(longlong **)&pFVar16->field_0x0 != (longlong *)0x0)) &&
                 (puVar11 = (ulong64 *)(**(code **)(**(longlong **)&pFVar16->field_0x0 + 0x40))(),
                 *puVar11 == uVar4)) {
                local_res18 = 0;
                if ((*(int *)&pFVar16[8].field_0x0 != 0) &&
                   (*(undefined8 **)&pFVar16->field_0x0 != (undefined8 *)0x0)) {
                  (**(code **)**(undefined8 **)&pFVar16->field_0x0)();
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            ((ForAnyElementType *)pFVar16,0,0,0x10);
                  *(undefined4 *)&pFVar16[8].field_0x0 = 0;
                }
                TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                          (this_00,false);
                break;
              }
              pTVar15 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
                        (ulonglong)(uVar13 + 1);
              pTVar10 = (TFilterCollection<TSharedPtr<IAutomationReport,1>_const_&> *)
                        &pTVar10->ChildFilters;
            } while ((int)(uVar13 + 1) < (this_00->InvocationList).ArrayNum);
          }
          if (local_b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
          }
        }
        (this->TestsRefreshedHandle).ID = 0;
        if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pIVar3 = (this->AutomationController).Object;
        (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,0);
        this->AutomationTestState = DoingRequestedWork;
      }
    }
    else if (EVar1 == RunAll) goto LAB_148c626fa;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
LAB_148c6298f:
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// Init @ 148c64150

void __thiscall FAutomationExecCmd::Init(FAutomationExecCmd *this)

{
  TSharedPtr<IAutomationControllerManager,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  IAutomationControllerManager *pIVar6;
  code *pcVar7;
  FGuid FVar8;
  bool bVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FDelegateHandle FVar14;
  FTSTicker *this_02;
  ulong64 uVar15;
  TWeakPtr<FTSTicker::FElement,1> *pTVar16;
  int local_res8 [2];
  FName local_res10 [2];
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  IAutomationControllerManager *local_90;
  FSharedReferencer<1> local_88;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TWeakPtr<FTSTicker::FElement,1> local_38;
  
  FVar8 = FApp::SessionId;
  this->AutomationTestState = Initializing;
  this->DelayTimer = 5.0;
  this->SessionID = FVar8;
  pFVar10 = ::FName::FName(local_res10,"AutomationController");
  FVar4 = *pFVar10;
  this_00 = FModuleManager::Get();
  pIVar11 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar11 + 0x40))(pIVar11,local_48);
  local_88.ReferenceController = (TReferenceControllerBase<1> *)puVar12[1];
  local_90 = (IAutomationControllerManager *)*puVar12;
  if (local_88.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_88.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->AutomationController;
  if (pTVar1 != (TSharedPtr<IAutomationControllerManager,1> *)&local_90) {
    pTVar1->Object = local_90;
    local_90 = (IAutomationControllerManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AutomationController).SharedReferenceCount,&local_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  if (pTVar1->Object == (IAutomationControllerManager *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  (**(code **)((longlong)*pTVar1->Object + 0x28))();
  pwVar13 = FCommandLine::Get();
  FParse::Param(pwVar13,L"FullSizeScreenshots");
  pwVar13 = FCommandLine::Get();
  FParse::Param(pwVar13,L"SendAutomationAnalytics");
  if ((this->TestsRefreshedHandle).ID == 0) {
    if (pTVar1->Object == (IAutomationControllerManager *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    this_01 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pTVar1->Object + 0x198))();
    FVar14 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
             AddRaw<FAutomationExecCmd>
                       (this_01,(FAutomationExecCmd *)(local_res10 + 1),(pmf_f87bdd76)this);
                    /* WARNING: Load size is inaccurate */
    (this->TestsRefreshedHandle).ID = *FVar14.ID;
  }
  if ((((this->TickHandler).Object == (FElement *)0x0) ||
      (pTVar5 = (this->TickHandler).WeakReferenceCount.ReferenceController,
      pTVar5 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar5->SharedReferenceCount < 1)) {
    this_02 = FTSTicker::GetCoreTicker();
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_a0;
    puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar12[2] = uVar15;
      *puVar12 = &
                 ___7__TBaseRawMethodDelegateInstance__0A_VFAutomationExecCmd____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar12[4] = Tick;
      puVar12[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pTVar16 = FTSTicker::AddTicker
                        (this_02,&local_38,
                         (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_a8,0.0);
    if (&this->TickHandler != pTVar16) {
      (this->TickHandler).Object = pTVar16->Object;
      pTVar16->Object = (FElement *)0x0;
      pTVar5 = (this->TickHandler).WeakReferenceCount.ReferenceController;
      (this->TickHandler).WeakReferenceCount.ReferenceController =
           (pTVar16->WeakReferenceCount).ReferenceController;
      (pTVar16->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar5->WeakReferenceCount;
        aVar3 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
    }
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_38.WeakReferenceCount.ReferenceController,1);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_80);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
  }
  local_res8[0] = 1;
  pwVar13 = FCommandLine::Get();
  FParse::Value(pwVar13,L"TestLoops=",local_res8);
  if ((this->AutomationController).Object == (IAutomationControllerManager *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pIVar6 = (this->AutomationController).Object;
  (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6,local_res8[0]);
  SetUpFilterMapping(this);
  return;
}

// IsQuitQueued @ 148c64960

bool __thiscall FAutomationExecCmd::IsQuitQueued(FAutomationExecCmd *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->AutomationCommandQueue).AllocatorInstance.Data;
  iVar2 = (this->AutomationCommandQueue).ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->AutomationCommandQueue).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EAutomationCommand,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*pFVar3 == (FScriptContainerElement)0x4) || (*pFVar3 == (FScriptContainerElement)0x5)) {
      return true;
    }
    pFVar3 = pFVar3 + 1;
  }
  return false;
}

// IsRunTestQueued @ 148c64a30

bool __thiscall FAutomationExecCmd::IsRunTestQueued(FAutomationExecCmd *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->AutomationCommandQueue).AllocatorInstance.Data;
  iVar2 = (this->AutomationCommandQueue).ArrayNum;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if ((this->AutomationCommandQueue).ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_EAutomationCommand,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*pFVar3 == (FScriptContainerElement)0x1) || ((byte)((char)*pFVar3 - 2U) < 2)) {
      return true;
    }
    pFVar3 = pFVar3 + 1;
  }
  return false;
}

// LogCommandLineError @ 148c65120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationExecCmd::LogCommandLineError(FAutomationExecCmd *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  
  if (1 < (byte)LogAutomationCommandLine._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`private:_void___cdecl_FAutomationExecCmd::LogCommandLineError(FString_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
  }
  pTVar6 = &this->Errors;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Errors).ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->Errors).ArrayNum;
  piVar1 = &(this->Errors).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->Errors).ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 0x10),param_1)
  ;
  return;
}

// SetUpFilterMapping @ 148c6c130

void __thiscall FAutomationExecCmd::SetUpFilterMapping(FAutomationExecCmd *this)

{
  undefined1 *puVar1;
  TMap<FString,EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EAutomationTestFlags,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  TPairInitializer<FString_&&,EAutomationTestFlags_const_&> local_res8;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  this_00 = &this->FilterMaps;
  bVar3 = 1 < *(int *)&(this->FilterMaps).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_EAutomationTestFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this_00,0,*(int *)&(this->FilterMaps).field_0x8);
  puVar1 = &(this->FilterMaps).field_0xc;
  *(undefined4 *)&(this->FilterMaps).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->FilterMaps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilterMaps).field_0x34 = 0;
  iVar2 = *(int *)&(this->FilterMaps).field_0x2c;
  *(undefined4 *)&(this->FilterMaps).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->FilterMaps).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->FilterMaps).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->FilterMaps).field_0x48 = 1;
    TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  local_res8.Key._0_4_ = 0x2000000;
  ::FString::FString((FString *)local_28,"Engine");
  local_38._0_8_ = local_28;
  local_38._8_8_ = &local_res8;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_&&>_>
            (this_00,(TPairInitializer<FString_&&,EAutomationTestFlags_&&> *)&local_res8.Value,
             (bool *)local_38);
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  local_res8.Key._0_4_ = 0x1000000;
  ::FString::FString((FString *)local_38,"Smoke");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_res8;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_&&>_>
            (this_00,(TPairInitializer<FString_&&,EAutomationTestFlags_&&> *)&local_res8.Value,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  local_res8.Key._0_4_ = 0x10000000;
  ::FString::FString((FString *)local_38,"Stress");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_res8;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_&&>_>
            (this_00,(TPairInitializer<FString_&&,EAutomationTestFlags_&&> *)&local_res8.Value,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  local_res8.Key._0_4_ = 0x8000000;
  ::FString::FString((FString *)local_38,"Perf");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_res8;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_&&>_>
            (this_00,(TPairInitializer<FString_&&,EAutomationTestFlags_&&> *)&local_res8.Value,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  local_res8.Key._0_4_ = 0x4000000;
  ::FString::FString((FString *)local_38,"Product");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_res8;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_&&>_>
            (this_00,(TPairInitializer<FString_&&,EAutomationTestFlags_&&> *)&local_res8.Value,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  local_res8.Key._0_4_ = 0xf000000;
  ::FString::FString((FString *)local_38,"Standard");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_res8;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_&&>_>
            (this_00,(TPairInitializer<FString_&&,EAutomationTestFlags_&&> *)&local_res8.Value,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  local_res8.Key._0_4_ = 0x20000000;
  ::FString::FString((FString *)local_38,"Negative");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_res8;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_&&>_>
            (this_00,(TPairInitializer<FString_&&,EAutomationTestFlags_&&> *)&local_res8.Value,
             (bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  ::FString::FString((FString *)local_38,"All");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &EAutomationTestFlags_FilterMask;
  TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,enum_EAutomationTestFlags_const_&>_>
            (this_00,&local_res8,(bool *)local_28);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return;
}

// Tick @ 148c6dec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationExecCmd::Tick(FAutomationExecCmd *this,float param_1)

{
  EAutomationCommand *pEVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  EAutomationCommand EVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  FName *pFVar16;
  TStatIdData *pTVar17;
  UClass *this_00;
  IAutomationControllerManager *pIVar18;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  FDelegateHandle FVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  float fVar23;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_88;
  FName local_80;
  FName local_78;
  FString local_68;
  undefined8 local_58 [4];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l2::
                           _thread_safe_static_guard_0__),
     `public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FAutomationExecCmd_Tick = (TStatIdData *)0x0;
    pFVar16 = ::FName::FName(&local_88,"STAT_FAutomationExecCmd_Tick");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l2::
                StatPtr_STAT_FAutomationExecCmd_Tick,*pFVar16,L"STAT_FAutomationExecCmd_Tick",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l2::
                         _thread_safe_static_guard_0__);
  }
  pTVar17 = _StatPtr_STAT_FAutomationExecCmd_Tick;
  if (_StatPtr_STAT_FAutomationExecCmd_Tick == (TStatIdData *)0x0) {
    pFVar16 = ::FName::FName(&local_80,"STAT_FAutomationExecCmd_Tick");
    pTVar17 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l2::
                          StatPtr_STAT_FAutomationExecCmd_Tick,*pFVar16,
                         L"STAT_FAutomationExecCmd_Tick","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)&pTVar17->Name;
  bVar9 = false;
  bVar11 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value == 0) && (uVar20 == 0)) {
LAB_148c6e046:
    bVar10 = false;
    FVar22 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar17->StatDescriptionAnsi).Ptr);
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar21.Value;
        local_res18.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(pTVar17->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationCommandline.cpp"
                   ,0x197);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148c6e046;
    local_res20 = FVar21.Value;
    uStackX_24 = uVar20;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar10 = true;
  }
  if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  (**(code **)((longlong)*(this->AutomationController).Object + 0x38))();
  switch(this->AutomationTestState) {
  default:
    iVar15 = (this->AutomationCommandQueue).ArrayNum;
    if (iVar15 != 0) {
      if ((iVar15 < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pEVar1 = &this->AutomationCommand;
      *pEVar1 = (EAutomationCommand)*(this->AutomationCommandQueue).AllocatorInstance.Data;
      if (((this->AutomationCommandQueue).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pFVar6 = (this->AutomationCommandQueue).AllocatorInstance.Data;
      iVar15 = (this->AutomationCommandQueue).ArrayNum + -1;
      if (iVar15 != 0) {
        memmove(pFVar6,pFVar6 + 1,(longlong)iVar15);
      }
      piVar2 = &(this->AutomationCommandQueue).ArrayNum;
      *piVar2 = *piVar2 + -1;
      piVar2 = &(this->AutomationCommandQueue).ArrayMax;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&(this->AutomationCommandQueue).AllocatorInstance,
                 (this->AutomationCommandQueue).ArrayNum,piVar2);
      if ((((*pEVar1 == Quit) || (*pEVar1 == SoftQuit)) &&
          (0 < (this->AutomationCommandQueue).ArrayNum)) && (bVar12 = IsQuitQueued(this), !bVar12))
      {
        pFVar6 = (this->AutomationCommandQueue).AllocatorInstance.Data;
        if (((pFVar6 <= pEVar1) && (pEVar1 < pFVar6 + *piVar2)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar15 = (this->AutomationCommandQueue).ArrayNum;
        if (iVar15 == *piVar2) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&(this->AutomationCommandQueue).AllocatorInstance,piVar2);
        }
        (this->AutomationCommandQueue).ArrayNum = iVar15 + 1;
        (this->AutomationCommandQueue).AllocatorInstance.Data[iVar15] =
             (FScriptContainerElement)*pEVar1;
        break;
      }
      this->AutomationTestState = FindWorkers;
    }
    EVar5 = this->AutomationCommand;
    if ((EVar5 == Quit) || (EVar5 == SoftQuit)) {
      if (GIsCriticalError == false) {
        if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        cVar14 = (**(code **)((longlong)*(this->AutomationController).Object + 0x118))();
        if ((cVar14 != '\0') || ((this->Errors).ArrayNum != 0)) {
          if (3 < (byte)LogAutomationCommandLine._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      (&`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l49::
                        LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
          }
          GIsCriticalError = true;
        }
      }
      if (4 < (byte)LogAutomationCommandLine._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l67::
                    LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
      }
      if (3 < (byte)LogAutomationCommandLine._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l85::
                    LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
      }
      FWindowsPlatformMisc::RequestExitWithStatus
                (this->AutomationCommand != SoftQuit,-(GIsCriticalError != false),(wchar_t *)0x0);
      this->AutomationTestState = Complete;
    }
    else if ((2 < (byte)(EVar5 - RunCommandLineTests)) && ((this->TestsRefreshedHandle).ID == 0)) {
      pIVar18 = TSharedPtr<IAutomationControllerManager,1>::operator->(&this->AutomationController);
      this_01 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                (**(code **)((longlong)*pIVar18 + 0x198))(pIVar18);
      FVar19 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
               AddRaw<FAutomationExecCmd>
                         (this_01,(FAutomationExecCmd *)&local_res20,(pmf_f87bdd76)this);
                    /* WARNING: Load size is inaccurate */
      (this->TestsRefreshedHandle).ID = *FVar19.ID;
    }
    break;
  case Initializing:
    pIVar18 = TSharedPtr<IAutomationControllerManager,1>::operator->(&this->AutomationController);
    cVar14 = (**(code **)((longlong)*pIVar18 + 8))(pIVar18);
    if ((cVar14 != '\0') &&
       (this->AutomationTestState = Idle, 3 < (byte)LogAutomationCommandLine._0_1_)) {
      UE::Logging::Private::BasicLog<4>
                (&`public:_bool___cdecl_FAutomationExecCmd::Tick(float)___ptr64'::__l9::LOG_Static,
                 (FLogCategoryBase *)&LogAutomationCommandLine);
    }
    this->FindWorkerAttempts = 0;
    break;
  case FindWorkers:
    fVar23 = this->DelayTimer - param_1;
    this->DelayTimer = fVar23;
    if (fVar23 <= 0.0) {
      if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pIVar18 = (this->AutomationController).Object;
      (**(code **)*pIVar18)(pIVar18,&this->SessionID);
      this->FindWorkerAttempts = this->FindWorkerAttempts + 1;
      this->AutomationTestState = RequestTests;
      this->FindWorkersTimeout = 30.0;
    }
    break;
  case RequestTests:
    fVar23 = this->FindWorkersTimeout - param_1;
    this->FindWorkersTimeout = fVar23;
    if (0.0 < fVar23) break;
    this_00 = UAutomationControllerSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    if ((float)this->FindWorkerAttempts * __real_41f00000 <
        *(float *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0xc) {
      if (4 < (byte)LogAutomationCommandLine._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_FAutomationExecCmd::HandleRefreshTimeout(void)___ptr64'::
                    __l8::LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
      }
      this->AutomationTestState = FindWorkers;
      break;
    }
    ::FString::PrintfImpl(&local_68,L"Failed to find workers after %.02f seconds. Giving up");
    LogCommandLineError(this,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      this->AutomationTestState = Complete;
      break;
    }
    goto LAB_148c6e24b;
  case DoingRequestedWork:
    if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    iVar15 = (**(code **)((longlong)*(this->AutomationController).Object + 0xf0))();
    if (iVar15 == 1) break;
LAB_148c6e24b:
    this->AutomationTestState = Complete;
  }
  if (((this->AutomationController).Object == (IAutomationControllerManager *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  iVar15 = (**(code **)((longlong)*(this->AutomationController).Object + 0xf0))();
  if (((iVar15 == 1) || (this->AutomationTestState != Complete)) ||
     ((this->AutomationCommandQueue).ArrayNum != 0)) {
    bVar12 = true;
  }
  else {
    if (3 < (byte)LogAutomationCommandLine._0_1_) {
      UE::Logging::Private::BasicLog<4>
                ((FStaticBasicLogRecord *)
                 &`public:_bool___cdecl_FAutomationExecCmd::IsTestingComplete(void)___ptr64'::__l6::
                  LOG_Static,(FLogCategoryBase *)&LogAutomationCommandLine);
    }
    this->TestCount = 0;
    this->AutomationTestState = Idle;
    if (&this->TickHandler != (TWeakPtr<FTSTicker::FElement,1> *)local_58) {
      pTVar7 = (this->TickHandler).WeakReferenceCount.ReferenceController;
      (this->TickHandler).Object = (FElement *)0x0;
      (this->TickHandler).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar3 = &pTVar7->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        }
      }
    }
    bVar12 = false;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return bVar12;
}

