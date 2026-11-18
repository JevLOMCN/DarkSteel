// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetFNameForStatId @ 147707330

FName __thiscall
FCharacterMovementComponentAsyncCallback::GetFNameForStatId
          (FCharacterMovementComponentAsyncCallback *this)

{
  FName in_RDX;
  
  FLazyName::Resolve(&::StaticName);
  return in_RDX;
}

// OnPreSimulate_Internal @ 14771c920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FCharacterMovementComponentAsyncCallback::OnPreSimulate_Internal
          (FCharacterMovementComponentAsyncCallback *this)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FCharacterMovementComponentAsyncOutput *pFVar7;
  FCharacterMovementComponentAsyncOutput *pFVar8;
  
  plVar3 = *(longlong **)&this->field_0x28;
  if ((plVar3 != (longlong *)0x0) && ((char)plVar3[2] != '\0')) {
    if (plVar3[0x80] == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = plVar3[0x80];
    *(char *)(lVar4 + 0x12d) = (char)plVar3[0x82];
    if (*(char *)((longlong)plVar3 + 0x411) != '\0') {
      *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)((longlong)plVar3 + 0x414);
    }
    *(char *)(*(longlong *)(lVar4 + 0x358) + 0x31) = (char)plVar3[0x83];
    if (plVar3[0x80] == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = plVar3[0x80];
    if (*(char *)(*(longlong *)(lVar4 + 0x358) + 0x32) != '\0') {
      if ((char)plVar3[0x83] == '\0') {
        if (lVar4 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined1 *)(*(longlong *)(plVar3[0x80] + 0x358) + 0x32) = 0;
      }
      else {
        if (lVar4 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        *(undefined1 *)(*(longlong *)(plVar3[0x80] + 0x358) + 0x31) = 0;
      }
    }
    if (plVar3[0x80] == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(float *)(plVar3[0x80] + 0x2e0) = (float)*(double *)&this->field_0x38;
    iVar2 = *(int *)(plVar3[0x55] + 0x10);
    if (iVar2 < 2) {
      if (iVar2 == 1) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2137651385527697346>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                           ,0x3e,"false");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    else if (*(char *)(plVar3[0x55] + 0x18) != '\0') {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    pFVar8 = *(FCharacterMovementComponentAsyncOutput **)&this->field_0x20;
    if (pFVar8 == (FCharacterMovementComponentAsyncOutput *)0x0) {
      uVar1 = *(undefined8 *)&this->field_0x30;
      pFVar7 = Chaos::
               TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
               ::NewDataHelper<FCharacterMovementComponentAsyncOutput>
                         ((TSimCallbackObject<FCharacterMovementComponentAsyncInput,FCharacterMovementComponentAsyncOutput,1>
                           *)this,(TArray<TUniquePtr<FCharacterMovementComponentAsyncOutput,TDefaultDelete<FCharacterMovementComponentAsyncOutput>_>,TSizedDefaultAllocator<32>_>
                                   *)&this->field_0xa8,
                          (TTransactionallySafeSpscQueue<FCharacterMovementComponentAsyncOutput_*,FMemory>
                           *)&this->field_0x80);
      *(undefined8 *)&pFVar7->field_0x10 = uVar1;
      pFVar8 = (FCharacterMovementComponentAsyncOutput *)&pFVar7->field_0x10;
      if (pFVar7 == (FCharacterMovementComponentAsyncOutput *)0x0) {
        pFVar8 = (FCharacterMovementComponentAsyncOutput *)0x0;
      }
      *(FCharacterMovementComponentAsyncOutput **)&this->field_0x20 = pFVar8;
    }
    pFVar7 = (FCharacterMovementComponentAsyncOutput *)&pFVar8[-1].bIsValid;
    if (pFVar8 == (FCharacterMovementComponentAsyncOutput *)0x0) {
      pFVar7 = (FCharacterMovementComponentAsyncOutput *)0x0;
    }
    if (plVar3[0x80] == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FCharacterMovementComponentAsyncOutput::Copy
              (pFVar7,(FCharacterMovementComponentAsyncOutput *)plVar3[0x80]);
  }
  return;
}

