// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 2

// DumpToLog @ 146d4ad70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNetFastCategoryBaseState::DumpToLog(FNetFastCategoryBaseState *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->CategoryStates).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->CategoryStates).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->CategoryStates).AllocatorInstance.Data;
      if (5 < (byte)LogGameplayDebugReplication._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  (&`public:_void___cdecl_FNetFastCategoryBaseState::DumpToLog(void)___ptr64'::__l5
                    ::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
      }
      uVar5 = 0;
      if (0 < *(int *)(pFVar1 + lVar7 + 0x10)) {
        do {
          uVar4 = 0;
          if ((int)uVar5 < *(int *)(pFVar1 + lVar7 + 0x10)) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (5 < (byte)LogGameplayDebugReplication._0_1_) {
            UE::Logging::Private::BasicLog<6>
                      (&`public:_void___cdecl_FNetFastCategoryBaseState::DumpToLog(void)___ptr64'::
                        __l25::LOG_Static,(FLogCategoryBase *)&LogGameplayDebugReplication);
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < *(int *)(pFVar1 + lVar7 + 0x10));
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
    } while ((int)uVar6 < (this->CategoryStates).ArrayNum);
  }
  return;
}

// IsStateEqual @ 146d4f740

bool __thiscall
FNetFastCategoryBaseState::IsStateEqual(FNetFastCategoryBaseState *this,INetDeltaBaseState *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->CategoryStates).ArrayNum;
  if (iVar1 == (int)param_1[1]._padding_) {
    bVar2 = CompareItems<FNetFastCategoryBaseState::FCategoryState,int>
                      ((FCategoryState *)(this->CategoryStates).AllocatorInstance.Data,
                       (FCategoryState *)param_1[1]._padding_,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

