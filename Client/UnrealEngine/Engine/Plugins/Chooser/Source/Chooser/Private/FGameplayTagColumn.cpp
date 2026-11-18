// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// StaticStruct @ 14a86f330

UScriptStruct * __cdecl FGameplayTagColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FGameplayTagColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagColumn,(UObject *)pUVar1,
                         L"GameplayTagColumn");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayTagColumn.OuterSingleton;
}

// FGameplayTagColumn @ 14a87d2a0

FGameplayTagColumn * __thiscall FGameplayTagColumn::FGameplayTagColumn(FGameplayTagColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FGameplayTagColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  this->TagMatchType = Any;
  this->TagMatchDirection = RowValueInInput;
  this->bMatchExact = false;
  this->bInvertMatchingLogic = false;
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

// Filter @ 14a888650

void __thiscall
FGameplayTagColumn::Filter
          (FGameplayTagColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  uint uVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FChooserParameterGameplayTagBase *pFVar8;
  FString *pFVar9;
  FChooserParameterBase *pFVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  FIndexData *pFVar13;
  FGameplayTagContainer *local_res8;
  void *local_38 [2];
  FString local_28;
  
  local_res8 = (FGameplayTagContainer *)0x0;
  puVar3 = (this->InputValue).StructMemory;
  if ((puVar3 != (uchar *)0x0) &&
     (pUVar4 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0))
  {
    pFVar8 = UE::StructUtils::GetStructRef<FChooserParameterGameplayTagBase>(pUVar4,puVar3);
    cVar6 = (**(code **)((longlong)*pFVar8 + 0x40))(pFVar8,param_1,&local_res8);
    if (cVar6 != '\0') {
      pFVar9 = FGameplayTagContainer::ToString(local_res8,&local_28);
      pFVar10 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar11 = (undefined8 *)(**(code **)*pFVar10)(pFVar10,local_38);
      if (*(int *)(puVar11 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar11;
      }
      FChooserTrace::OutputChooserValue<FString>(param_1,pwVar12,pFVar9);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pFVar13 = param_2->Data;
      pFVar1 = pFVar13 + param_2->Size;
      if (pFVar13 == pFVar1) {
        return;
      }
      do {
        bVar7 = TestRow(this,pFVar13->Index,local_res8);
        if (bVar7) {
          if ((param_3->MaxSize <= param_3->Size) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size < MaxSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                 ,0x26,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          param_3->Data[param_3->Size] = *pFVar13;
          param_3->Size = param_3->Size + 1;
        }
        pFVar13 = pFVar13 + 1;
        if (pFVar13 == pFVar1) {
          return;
        }
      } while( true );
    }
  }
  if ((param_3->MaxSize < param_2->Size) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxSize >= Other.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                         ,0x48,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = param_2->Size;
  param_3->Size = uVar2;
  memcpy(param_3->Data,param_2->Data,(ulonglong)uVar2 << 3);
  return;
}

// GetInputValue @ 14a88a510

FChooserParameterBase * __thiscall FGameplayTagColumn::GetInputValue(FGameplayTagColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// PostLoad @ 14a88cc20

void __thiscall FGameplayTagColumn::PostLoad(FGameplayTagColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88cc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

// TestRow @ 14a88ff40

bool __thiscall
FGameplayTagColumn::TestRow(FGameplayTagColumn *this,int param_1,FGameplayTagContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FGameplayTagContainer *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  if ((param_1 < 0) || ((this->RowValues).ArrayNum <= param_1)) {
    return false;
  }
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < (this->RowValues).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar11 = (longlong)param_1 * 0x20;
  bVar5 = false;
  if (*(int *)((this->RowValues).AllocatorInstance.Data + lVar11 + 8) == 0) {
    bVar5 = this->bInvertMatchingLogic == false;
    goto LAB_14a890260;
  }
  iVar3 = (this->RowValues).ArrayNum;
  if (this->TagMatchDirection == RowValueInInput) {
    uVar8 = 0;
    if (param_1 < iVar3) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar10 = param_2;
    param_2 = (FGameplayTagContainer *)((this->RowValues).AllocatorInstance.Data + lVar11);
  }
  else {
    uVar8 = 0;
    if (param_1 < iVar3) {
      uVar8 = uVar13;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar10 = (FGameplayTagContainer *)((this->RowValues).AllocatorInstance.Data + lVar11);
  }
  iVar3 = (param_2->GameplayTags).ArrayNum;
  lVar11 = (longlong)iVar3;
  if (this->TagMatchType == All) {
    if (this->bMatchExact == false) {
      if (iVar3 != 0) {
        pFVar12 = (param_2->GameplayTags).AllocatorInstance.Data;
        pFVar1 = pFVar12 + lVar11 * 8;
        while( true ) {
          if ((param_2->GameplayTags).ArrayNum != iVar3) {
            `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar12 == pFVar1) break;
          pFVar9 = (pFVar10->GameplayTags).AllocatorInstance.Data;
          pFVar2 = pFVar9 + (longlong)(pFVar10->GameplayTags).ArrayNum * 8;
          if (pFVar9 != pFVar2) {
            do {
              if (*(longlong *)pFVar9 == *(longlong *)pFVar12) goto LAB_14a890167;
              pFVar9 = pFVar9 + 8;
            } while (pFVar9 != pFVar2);
          }
          pFVar9 = (pFVar10->ParentTags).AllocatorInstance.Data;
          pFVar2 = pFVar9 + (longlong)(pFVar10->ParentTags).ArrayNum * 8;
          if (pFVar9 == pFVar2) goto LAB_14a8900e4;
          while (*(longlong *)pFVar9 != *(longlong *)pFVar12) {
            pFVar9 = pFVar9 + 8;
            if (pFVar9 == pFVar2) {
              bVar5 = false;
              goto LAB_14a890260;
            }
          }
LAB_14a890167:
          pFVar12 = pFVar12 + 8;
        }
      }
    }
    else if (iVar3 != 0) {
      pFVar12 = (param_2->GameplayTags).AllocatorInstance.Data;
      pFVar1 = pFVar12 + lVar11 * 8;
      while( true ) {
        if ((param_2->GameplayTags).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar12 == pFVar1) goto LAB_14a89016d;
        pFVar9 = (pFVar10->GameplayTags).AllocatorInstance.Data;
        pFVar2 = pFVar9 + (longlong)(pFVar10->GameplayTags).ArrayNum * 8;
        if (pFVar9 == pFVar2) break;
        while (*(longlong *)pFVar9 != *(longlong *)pFVar12) {
          pFVar9 = pFVar9 + 8;
          if (pFVar9 == pFVar2) goto LAB_14a8900e4;
        }
        pFVar12 = pFVar12 + 8;
      }
LAB_14a8900e4:
      bVar5 = false;
      goto LAB_14a890260;
    }
LAB_14a89016d:
    bVar5 = true;
    goto LAB_14a890260;
  }
  if (this->bMatchExact == false) {
    if (iVar3 != 0) {
      pFVar12 = (param_2->GameplayTags).AllocatorInstance.Data;
      pFVar1 = pFVar12 + lVar11 * 8;
      while( true ) {
        if ((param_2->GameplayTags).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_48);
        }
        if (pFVar12 == pFVar1) break;
        pFVar9 = (pFVar10->GameplayTags).AllocatorInstance.Data;
        pFVar2 = pFVar9 + (longlong)(pFVar10->GameplayTags).ArrayNum * 8;
        if (pFVar9 != pFVar2) {
          do {
            if (*(longlong *)pFVar9 == *(longlong *)pFVar12) goto LAB_14a890244;
            pFVar9 = pFVar9 + 8;
          } while (pFVar9 != pFVar2);
        }
        pFVar9 = (pFVar10->ParentTags).AllocatorInstance.Data;
        pFVar2 = pFVar9 + (longlong)(pFVar10->ParentTags).ArrayNum * 8;
        if (pFVar9 != pFVar2) {
          do {
            if (*(longlong *)pFVar9 == *(longlong *)pFVar12) goto LAB_14a890244;
            pFVar9 = pFVar9 + 8;
          } while (pFVar9 != pFVar2);
        }
        pFVar12 = pFVar12 + 8;
      }
    }
  }
  else if (iVar3 != 0) {
    pFVar12 = (param_2->GameplayTags).AllocatorInstance.Data;
    pFVar1 = pFVar12 + lVar11 * 8;
    while( true ) {
      if ((param_2->GameplayTags).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FGameplayTag_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar12 == pFVar1) break;
      pFVar9 = (pFVar10->GameplayTags).AllocatorInstance.Data;
      pFVar2 = pFVar9 + (longlong)(pFVar10->GameplayTags).ArrayNum * 8;
      if (pFVar9 != pFVar2) {
        do {
          if (*(longlong *)pFVar9 == *(longlong *)pFVar12) goto LAB_14a890244;
          pFVar9 = pFVar9 + 8;
        } while (pFVar9 != pFVar2);
      }
      pFVar12 = pFVar12 + 8;
    }
  }
  bVar7 = false;
LAB_14a89024a:
  if (bVar7) {
    bVar5 = true;
  }
LAB_14a890260:
  bVar7 = (bool)(bVar5 ^ 1);
  if (this->bInvertMatchingLogic == false) {
    bVar7 = bVar5;
  }
  return bVar7;
LAB_14a890244:
  bVar7 = true;
  goto LAB_14a89024a;
}

