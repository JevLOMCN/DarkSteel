// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 4

// GetStateHandle @ 14d4bfdd0

FStateTreeStateHandle __thiscall
FStateTreeTraceStateEvent::GetStateHandle(FStateTreeTraceStateEvent *this)

{
  undefined2 *in_RDX;
  
  *in_RDX = *(undefined2 *)&this->field_0x10;
  return (FStateTreeStateHandle)(ushort)in_RDX;
}

// GetTypeString @ 14d4c0580

FString * __thiscall
FStateTreeTraceStateEvent::GetTypeString
          (FStateTreeTraceStateEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"State");
  return __return_storage_ptr__;
}

// GetValueString @ 14d4c1270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FString * __thiscall
FStateTreeTraceStateEvent::GetValueString
          (FStateTreeTraceStateEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FCompactStateTreeState *pFVar8;
  ForElementType<FString> FVar9;
  FString *pFVar10;
  longlong lVar11;
  ForElementType<FString> FVar12;
  int iVar13;
  undefined1 auStack_158 [32];
  ForElementType<FString> local_138;
  ForElementType<FString> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [4];
  FStateTreeStateHandle local_104 [2];
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  ForElementType<FString> local_c0;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_104[0].Index = *(ushort *)&this->field_0x10;
  pFVar8 = UStateTree::GetStateFromHandle(param_1,local_104[0]);
  if (pFVar8 == (FCompactStateTreeState *)0x0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_d0,(UObject *)0x0,None);
    FStateTreeStateHandle::Describe(local_104,&local_e0);
    ::FString::PrintfImpl(__return_storage_ptr__,L"Invalid State Index %s for \'%s\'");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_c0.SecondaryData = (ForElementType<FString>)0x0;
    local_38 = 0;
    local_34 = 8;
    FVar9 = (ForElementType<FString>)UE::StateTreeTrace::GetStateName(&local_100,param_1,pFVar8);
    FVar12 = (ForElementType<FString>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
      FVar12 = local_c0.SecondaryData;
    }
    if ((ulonglong)FVar12 <= (ulonglong)FVar9) {
      FVar12 = (ForElementType<FString>)&local_c0;
      if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
        FVar12 = local_c0.SecondaryData;
      }
      if ((ulonglong)FVar9 < (ulonglong)((longlong)local_34 * 0x10 + (longlong)FVar12)) {
        local_120 = (longlong)local_38;
        local_118 = 0x10;
        local_130 = (ForElementType<FString>)&local_c0;
        if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
          local_130 = local_c0.SecondaryData;
        }
        local_138 = FVar9;
        local_128 = (longlong)local_34;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar2)();
          return pFVar10;
        }
      }
    }
    iVar7 = local_38;
    if (local_38 == local_34) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                        (0x810,&local_c0,&local_34);
    }
    local_38 = iVar7 + 1;
    FVar12 = (ForElementType<FString>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
      FVar12 = local_c0.SecondaryData;
    }
    pFVar10 = (FString *)((longlong)iVar7 * 0x10 + (longlong)FVar12);
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->Data).AllocatorInstance.Data = *(FScriptContainerElement **)FVar9;
    *(undefined8 *)FVar9 = 0;
    (pFVar10->Data).ArrayNum = *(int *)((longlong)FVar9 + 8);
    (pFVar10->Data).ArrayMax = *(int *)((longlong)FVar9 + 0xc);
    *(undefined8 *)((longlong)FVar9 + 8) = 0;
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    uVar1 = (pFVar8->Parent).Index;
    FVar12 = local_130;
    while ((local_130 = FVar12, uVar1 != 0xffff && ((int)(uint)uVar1 < (param_1->States).ArrayNum)))
    {
      iVar7 = (param_1->States).ArrayNum;
      local_130 = (ForElementType<FString>)(longlong)iVar7;
      if (iVar7 <= (int)(uint)uVar1) {
        local_138._2_6_ = 0;
        local_138._0_2_ = uVar1;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        FVar12 = local_130;
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          pFVar10 = (FString *)(*pcVar2)();
          return pFVar10;
        }
      }
      local_130 = FVar12;
      pFVar8 = (FCompactStateTreeState *)
               ((param_1->States).AllocatorInstance.Data + (ulonglong)uVar1 * 0x78);
      if (pFVar8 == (FCompactStateTreeState *)0x0) break;
      FVar9 = (ForElementType<FString>)UE::StateTreeTrace::GetStateName(&local_f0,param_1,pFVar8);
      FVar12 = (ForElementType<FString>)&local_c0;
      if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
        FVar12 = local_c0.SecondaryData;
      }
      if ((ulonglong)FVar12 <= (ulonglong)FVar9) {
        FVar12 = (ForElementType<FString>)&local_c0;
        if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
          FVar12 = local_c0.SecondaryData;
        }
        if ((ulonglong)FVar9 < (ulonglong)((longlong)local_34 * 0x10 + (longlong)FVar12)) {
          local_120 = (longlong)local_38;
          local_118 = 0x10;
          local_130 = (ForElementType<FString>)&local_c0;
          if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
            local_130 = local_c0.SecondaryData;
          }
          local_138 = FVar9;
          local_128 = (longlong)local_34;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            pFVar10 = (FString *)(*pcVar2)();
            return pFVar10;
          }
        }
      }
      iVar7 = local_38;
      if (local_38 == local_34) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                          (0x810,&local_c0,&local_34);
      }
      local_38 = iVar7 + 1;
      FVar12 = (ForElementType<FString>)&local_c0;
      if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
        FVar12 = local_c0.SecondaryData;
      }
      pFVar10 = (FString *)((longlong)iVar7 * 0x10 + (longlong)FVar12);
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->Data).AllocatorInstance.Data = *(FScriptContainerElement **)FVar9;
      *(undefined8 *)FVar9 = 0;
      (pFVar10->Data).ArrayNum = *(int *)((longlong)FVar9 + 8);
      (pFVar10->Data).ArrayMax = *(int *)((longlong)FVar9 + 0xc);
      *(undefined8 *)((longlong)FVar9 + 8) = 0;
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      FVar12 = local_130;
      uVar1 = (pFVar8->Parent).Index;
    }
    FVar12 = (ForElementType<FString>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
      FVar12 = local_c0.SecondaryData;
    }
    lVar11 = (longlong)(local_38 / 2);
    if (0 < local_38 / 2) {
      pFVar10 = (FString *)((longlong)(local_38 + -1) * 0x10 + (longlong)FVar12);
      do {
        uVar3 = *(undefined8 *)&(pFVar10->Data).ArrayNum;
        pFVar4 = *(FScriptContainerElement **)FVar12;
        uVar5 = *(undefined8 *)((longlong)FVar12 + 8);
        *(FScriptContainerElement **)FVar12 = (pFVar10->Data).AllocatorInstance.Data;
        *(undefined8 *)((longlong)FVar12 + 8) = uVar3;
        FVar12 = (ForElementType<FString>)((longlong)FVar12 + 0x10);
        (pFVar10->Data).AllocatorInstance.Data = pFVar4;
        *(undefined8 *)&(pFVar10->Data).ArrayNum = uVar5;
        lVar11 = lVar11 + -1;
        pFVar10 = pFVar10 + -1;
      } while (lVar11 != 0);
    }
    iVar7 = local_38;
    lVar11 = (longlong)local_38;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar12 = (ForElementType<FString>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
      FVar12 = local_c0.SecondaryData;
    }
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    FVar9 = (ForElementType<FString>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
      FVar9 = local_c0.SecondaryData;
    }
    bVar6 = true;
    while( true ) {
      if (local_38 != iVar7) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_108);
      }
      if (FVar12 == (ForElementType<FString>)(lVar11 * 0x10 + (longlong)FVar9)) break;
      if (bVar6) {
        bVar6 = false;
      }
      else {
        ::FString::AppendChars(__return_storage_ptr__,L".",1);
      }
      iVar13 = *(int *)((longlong)FVar12 + 8) + -1;
      if (*(int *)((longlong)FVar12 + 8) == 0) {
        iVar13 = 0;
      }
      ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar12,iVar13);
      FVar12 = (ForElementType<FString>)((longlong)FVar12 + 0x10);
    }
    FVar12 = (ForElementType<FString>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<FString>)0x0) {
      FVar12 = local_c0.SecondaryData;
    }
    DestructItems<FString,int>((FString *)FVar12,local_38);
    local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_c0.SecondaryData;
  }
  if ((ForElementType<FString>)local_d0.Data.AllocatorInstance.Data != (ForElementType<FString>)0x0)
  {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToFullString @ 14d4d1f40

/* WARNING: Enum "EStateTreeStateSelectionBehavior": Some values do not have unique names */

FString * __thiscall
FStateTreeTraceStateEvent::ToFullString
          (FStateTreeTraceStateEvent *this,FString *__return_storage_ptr__,UStateTree *param_1)

{
  EStateTreeStateSelectionBehavior EVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  FCompactStateTreeState *pFVar5;
  UEnum *pUVar6;
  FString *pFVar7;
  UPackage *pUVar8;
  FText local_68;
  FText local_58;
  FText local_48;
  FString local_38;
  FString local_28;
  
  pFVar5 = UStateTree::GetStateFromHandle
                     (param_1,(FStateTreeStateHandle)*(ushort *)&this->field_0x10);
  if ((pFVar5 == (FCompactStateTreeState *)0x0) ||
     (EVar1 = pFVar5->SelectionBehavior, EVar1 == None)) {
    GetValueString(this,&local_28,param_1);
    bVar2 = this->field_0x8;
    pUVar6 = Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton;
    if (Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton == (UEnum *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_StateTreeModule();
      pUVar6 = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType,
                             (UObject *)pUVar8,L"EStateTreeTraceEventType");
      Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton = pUVar6;
      if ((pUVar6 == (UEnum *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
    }
    UEnum::GetDisplayNameTextByValue(pUVar6,&local_48,(ulonglong)bVar2);
    FText::ToString(&local_48);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s \'%s\'");
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar6 = StaticEnum<enum_EStateTreeStateSelectionBehavior>();
    if ((pUVar6 == (UEnum *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    UEnum::GetDisplayNameTextByValue(pUVar6,&local_58,(ulonglong)EVar1);
    FText::ToString(&local_58);
    GetValueString(this,&local_38,param_1);
    bVar2 = this->field_0x8;
    pUVar6 = Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton;
    if (Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton == (UEnum *)0x0) {
      pUVar8 = Z_Construct_UPackage__Script_StateTreeModule();
      pUVar6 = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeTraceEventType,
                             (UObject *)pUVar8,L"EStateTreeTraceEventType");
      Z_Registration_Info_UEnum_EStateTreeTraceEventType.OuterSingleton = pUVar6;
      if ((pUVar6 == (UEnum *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("EnumClass != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xd13,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
    }
    UEnum::GetDisplayNameTextByValue(pUVar6,&local_68,(ulonglong)bVar2);
    FText::ToString(&local_68);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s \'%s\' (%s)");
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

