// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// OnConsoleVariable @ 14896a930

void __cdecl
FConsoleVariableAutoCompleteVisitor::OnConsoleVariable
          (wchar_t *param_1,IConsoleObject *param_2,
          TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_> *param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  UClass *this;
  wchar_t *pwVar7;
  FString *this_00;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *this_01;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  uVar6 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
  if ((uVar6 & 8) == 0) {
    this = Z_Construct_UClass_UConsoleSettings_NoRegister();
    if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this);
    }
    pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
    uVar4 = param_3->ArrayNum;
    if (uVar4 == param_3->ArrayMax) {
      uVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = uVar4 + 1;
    DefaultConstructItems<FAutoCompleteCommand,int>
              ((param_3->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x28,1);
    uVar9 = 0;
    if ((int)uVar4 < param_3->ArrayNum) {
      uVar9 = ~uVar4 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_01 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x28;
    ::FString::operator=((FString *)this_01,param_1);
    if (pUVar1[2].field_0x5 != '\0') {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      pwVar7 = (wchar_t *)(**(code **)(param_2->_padding_ + 8))(param_2);
      this_00 = ::FString::FString(&local_38,pwVar7);
      ::FString::ParseIntoArrayLines(this_00,&local_48,true);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar10 = 0;
      if (local_48.ArrayNum != 0) {
        if (local_48.ArrayNum < 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar4 = *(int *)(local_48.AllocatorInstance.Data + 8) - 1;
        if (*(int *)(local_48.AllocatorInstance.Data + 8) == 0) {
          uVar4 = 0;
        }
        ::FString::AssignRange
                  ((FString *)(this_01 + 0x10),*(wchar_t **)local_48.AllocatorInstance.Data,uVar4);
        iVar10 = local_48.ArrayNum;
      }
      DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,iVar10);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
    lVar8 = (**(code **)(param_2->_padding_ + 0x38))(param_2);
    if (lVar8 == 0) {
      uVar5 = *(undefined4 *)&pUVar1[2].field_0x10;
    }
    else {
      uVar6 = (**(code **)(param_2->_padding_ + 0x18))(param_2);
      lVar8 = 0x68;
      if ((uVar6 & 4) == 0) {
        lVar8 = 100;
      }
      uVar5 = *(undefined4 *)(&pUVar1->field_0x0 + lVar8);
    }
    *(undefined4 *)
     &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&this_01[0x20].field_0x0)->AllocatorInstance)
      .Data = uVar5;
  }
  return;
}

