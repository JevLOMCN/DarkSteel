// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a86bce0

UScriptStruct * __cdecl FObjectClassColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FObjectClassColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FObjectClassColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObjectClassColumn,(UObject *)pUVar1,
                         L"ObjectClassColumn");
  }
  return Z_Registration_Info_UScriptStruct_FObjectClassColumn.OuterSingleton;
}

// FObjectClassColumn @ 14a87d410

FObjectClassColumn * __thiscall FObjectClassColumn::FObjectClassColumn(FObjectClassColumn *this)

{
  this->_padding_ = (longlong)&___7FObjectClassColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  return this;
}

// Filter @ 14a888c30

/* WARNING: Removing unreachable block (ram,0x00014a888d9a) */
/* WARNING: Removing unreachable block (ram,0x00014a888dfb) */
/* WARNING: Removing unreachable block (ram,0x00014a888da1) */
/* WARNING: Removing unreachable block (ram,0x00014a888df2) */
/* WARNING: Removing unreachable block (ram,0x00014a888da6) */
/* WARNING: Removing unreachable block (ram,0x00014a888dd3) */
/* WARNING: Removing unreachable block (ram,0x00014a888de4) */
/* WARNING: Removing unreachable block (ram,0x00014a888dab) */
/* WARNING: Removing unreachable block (ram,0x00014a888db4) */
/* WARNING: Removing unreachable block (ram,0x00014a888dc5) */
/* WARNING: Removing unreachable block (ram,0x00014a888dee) */
/* WARNING: Removing unreachable block (ram,0x00014a888dcf) */
/* WARNING: Removing unreachable block (ram,0x00014a888e02) */

void __thiscall
FObjectClassColumn::Filter
          (FObjectClassColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  uint uVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  FChooserParameterObjectBase *pFVar9;
  FString *pFVar10;
  FChooserParameterBase *pFVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  FIndexData *pFVar14;
  void *local_38 [2];
  FString local_28;
  
  puVar3 = (this->InputValue).StructMemory;
  if ((puVar3 != (uchar *)0x0) &&
     (pUVar4 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0))
  {
    pFVar9 = UE::StructUtils::GetStructRef<FChooserParameterObjectBase>(pUVar4,puVar3);
    cVar6 = (**(code **)((longlong)*pFVar9 + 0x40))(pFVar9,param_1);
    if (cVar6 != '\0') {
      pFVar10 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)0x0,&local_28,(UObject *)0x0);
      pFVar11 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar12 = (undefined8 *)(**(code **)*pFVar11)(pFVar11,local_38);
      if (*(int *)(puVar12 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar12;
      }
      FChooserTrace::OutputChooserValue<FString>(param_1,pwVar13,pFVar10);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pFVar14 = param_2->Data;
      pFVar1 = pFVar14 + param_2->Size;
      do {
        if (pFVar14 == pFVar1) {
          return;
        }
        uVar2 = pFVar14->Index;
        if ((-1 < (int)uVar2) && ((int)uVar2 < (this->RowValues).ArrayNum)) {
          uVar8 = 0;
          if ((int)uVar2 < (this->RowValues).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
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
          if ((param_3->MaxSize <= param_3->Size) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size < MaxSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                 ,0x26,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          param_3->Data[param_3->Size] = *pFVar14;
          param_3->Size = param_3->Size + 1;
        }
        pFVar14 = pFVar14 + 1;
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

// GetInputValue @ 14a88a540

FChooserParameterBase * __thiscall FObjectClassColumn::GetInputValue(FObjectClassColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

