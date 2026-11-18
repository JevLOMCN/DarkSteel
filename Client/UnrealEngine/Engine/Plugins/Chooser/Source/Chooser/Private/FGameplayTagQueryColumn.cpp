// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a871940

UScriptStruct * __cdecl FGameplayTagQueryColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagQueryColumn.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FGameplayTagQueryColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQueryColumn,(UObject *)pUVar1,
                         L"GameplayTagQueryColumn");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagQueryColumn.OuterSingleton;
}

// FGameplayTagQueryColumn @ 14a87d330

FGameplayTagQueryColumn * __thiscall
FGameplayTagQueryColumn::FGameplayTagQueryColumn(FGameplayTagQueryColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FGameplayTagQueryColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContextProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FGameplayTagContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContextProperty,(UObject *)pUVar1,
                         L"GameplayTagContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,
             Z_Registration_Info_UScriptStruct_FGameplayTagContextProperty.OuterSingleton,
             (uchar *)0x0);
  return this;
}

// Filter @ 14a888800

void __thiscall
FGameplayTagQueryColumn::Filter
          (FGameplayTagQueryColumn *this,FChooserEvaluationContext *param_1,
          FChooserIndexArray *param_2,FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  uint uVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  FGameplayTagContainer *pFVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FChooserParameterGameplayTagBase *pFVar10;
  FString *pFVar11;
  FChooserParameterBase *pFVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  FIndexData *pFVar15;
  FGameplayTagContainer *local_res8;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = (FGameplayTagContainer *)0x0;
  puVar3 = (this->InputValue).StructMemory;
  if ((puVar3 != (uchar *)0x0) &&
     (pUVar4 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0))
  {
    pFVar10 = UE::StructUtils::GetStructRef<FChooserParameterGameplayTagBase>(pUVar4,puVar3);
    cVar7 = (**(code **)((longlong)*pFVar10 + 0x40))(pFVar10,param_1,&local_res8);
    if (cVar7 != '\0') {
      pFVar11 = FGameplayTagContainer::ToString(local_res8,&local_28);
      pFVar12 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar13 = (undefined8 *)(**(code **)*pFVar12)(pFVar12,local_38);
      if (*(int *)(puVar13 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar13;
      }
      FChooserTrace::OutputChooserValue<FString>(param_1,pwVar14,pFVar11);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pFVar15 = param_2->Data;
      pFVar1 = pFVar15 + param_2->Size;
      pFVar6 = local_res8;
      do {
        if (pFVar15 == pFVar1) {
          return;
        }
        uVar2 = pFVar15->Index;
        local_res8 = pFVar6;
        if ((-1 < (int)uVar2) && ((int)uVar2 < (this->RowValues).ArrayNum)) {
          uVar9 = 0;
          if ((int)uVar2 < (this->RowValues).ArrayNum) {
            uVar9 = ~uVar2 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar8 = FGameplayTagQuery::Matches
                            ((FGameplayTagQuery *)
                             ((this->RowValues).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x48
                             ),pFVar6);
          if (bVar8) {
            if ((param_3->MaxSize <= param_3->Size) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size < MaxSize",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                   ,0x26,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            param_3->Data[param_3->Size] = *pFVar15;
            param_3->Size = param_3->Size + 1;
          }
        }
        pFVar15 = pFVar15 + 1;
        pFVar6 = local_res8;
      } while( true );
    }
  }
  if ((param_3->MaxSize < param_2->Size) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxSize >= Other.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                         ,0x48,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = param_2->Size;
  param_3->Size = uVar2;
  memcpy(param_3->Data,param_2->Data,(ulonglong)uVar2 << 3);
  return;
}

// GetInputValue @ 14a88a520

FChooserParameterBase * __thiscall
FGameplayTagQueryColumn::GetInputValue(FGameplayTagQueryColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// PostLoad @ 14a88cc60

void __thiscall FGameplayTagQueryColumn::PostLoad(FGameplayTagQueryColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88cc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

// TestRow @ 14a8902b0

bool __thiscall
FGameplayTagQueryColumn::TestRow
          (FGameplayTagQueryColumn *this,int param_1,FGameplayTagContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->RowValues).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->RowValues).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = FGameplayTagQuery::Matches
                      ((FGameplayTagQuery *)
                       ((this->RowValues).AllocatorInstance.Data + (longlong)param_1 * 0x48),param_2
                      );
    return bVar2;
  }
  return false;
}

