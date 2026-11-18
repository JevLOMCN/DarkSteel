// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// DiagnosticMessage @ 14a8f2d00

FString * __thiscall
UE::PoseSearch::FInteractionIsland::FPreTickFunction::DiagnosticMessage
          (FPreTickFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UE::PoseSearch::FInteractionIsland::FPreTickFunction")
  ;
  return __return_storage_ptr__;
}

// ExecuteTick @ 14a8f5840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FInteractionIsland::FPreTickFunction::ExecuteTick
          (FPreTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int iVar1;
  FInteractionIsland *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  IPoseHistory *pIVar7;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar8;
  int iVar9;
  uint uVar10;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> this_00;
  ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> FVar11;
  undefined1 local_res8 [8];
  FInteractionValidator local_48 [2];
  
  if (this->Island == (FInteractionIsland *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                       ,0x1cf,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->Island->bHasTickDependencies != false) {
    FInteractionValidator::FInteractionValidator(local_48,this->Island);
    pFVar2 = this->Island;
    iVar1 = (pFVar2->SearchContexts).ArrayNum;
    this_00 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)
              (pFVar2->SearchContexts).AllocatorInstance.Data;
    FVar11 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)
             ((longlong)iVar1 * 0x1e0 + (longlong)this_00);
    while( true ) {
      if ((pFVar2->SearchContexts).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::PoseSearch::FInteractionSearchContext,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (this_00 == FVar11) break;
      iVar9 = *(int *)((longlong)this_00 + 0x28);
      uVar10 = 0;
      if (0 < iVar9) {
        do {
          uVar5 = 0;
          if ((int)uVar10 < iVar9) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          FVar8 = this_00;
          if (*(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
               ((longlong)this_00 + 0x20) !=
              (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)0x0) {
            FVar8 = *(ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> *)
                     ((longlong)this_00 + 0x20);
          }
          pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                       ((longlong)FVar8 + (longlong)(int)uVar10 * 8));
          if (pUVar6 != (UObject *)0x0) {
            pIVar7 = FInteractionSearchContextBase::GetPoseHistory
                               ((FInteractionSearchContextBase *)this_00,uVar10);
            if (pIVar7 == (IPoseHistory *)0x0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("PoseHistory",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionIsland.cpp"
                                 ,0x1dc,L"");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            (**(code **)(*(longlong *)pIVar7 + 0x28))(pIVar7,pUVar6,param_1);
          }
          iVar9 = *(int *)((longlong)this_00 + 0x28);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar9);
      }
      this_00 = (ForElementType<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>)
                ((longlong)this_00 + 0x1e0);
    }
    if (this->Island->bPreTickFunctionExecuted == false) {
      if (this->Island->bPostTickFunctionExecuted != false) {
        if (1 < (byte)LogPoseSearch._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        }
        LogTickDependencies(this->Island);
      }
      this->Island->bPreTickFunctionExecuted = true;
    }
    else if (2 < (byte)LogPoseSearch._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    FInteractionValidator::~FInteractionValidator(local_48);
  }
  return;
}

