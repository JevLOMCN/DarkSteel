// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 5

// StaticStruct @ 14a8735f0

UScriptStruct * __cdecl FMultiEnumColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMultiEnumColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FMultiEnumColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMultiEnumColumn,(UObject *)pUVar1,
                         L"MultiEnumColumn");
  }
  return Z_Registration_Info_UScriptStruct_FMultiEnumColumn.OuterSingleton;
}

// FMultiEnumColumn @ 14a87d3b0

FMultiEnumColumn * __thiscall FMultiEnumColumn::FMultiEnumColumn(FMultiEnumColumn *this)

{
  this->_padding_ = (longlong)&___7FMultiEnumColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  return this;
}

// Filter @ 14a888a30

void __thiscall
FMultiEnumColumn::Filter
          (FMultiEnumColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  uint uVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FChooserParameterEnumBase *pFVar10;
  FChooserParameterBase *pFVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  FIndexData *pFVar14;
  byte local_res8 [8];
  void *local_28 [2];
  
  local_res8[0] = 0;
  puVar3 = (this->InputValue).StructMemory;
  if ((puVar3 != (uchar *)0x0) &&
     (pUVar4 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0))
  {
    pFVar10 = UE::StructUtils::GetStructRef<FChooserParameterEnumBase>(pUVar4,puVar3);
    cVar7 = (**(code **)((longlong)*pFVar10 + 0x40))(pFVar10,param_1,local_res8);
    if (cVar7 != '\0') {
      pFVar11 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar12 = (undefined8 *)(**(code **)*pFVar11)(pFVar11,local_28);
      if (*(int *)(puVar12 + 1) == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)*puVar12;
      }
      FChooserTrace::OutputChooserValue<unsigned_char>(param_1,pwVar13,local_res8);
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
      pFVar14 = param_2->Data;
      bVar6 = local_res8[0] & 0x1f;
      pFVar1 = pFVar14 + param_2->Size;
      do {
        if (pFVar14 == pFVar1) {
          return;
        }
        uVar2 = pFVar14->Index;
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
          uVar2 = *(uint *)((this->RowValues).AllocatorInstance.Data + (longlong)(int)uVar2 * 4);
          if ((uVar2 == 0) || ((1 << bVar6 & uVar2) != 0)) {
            if ((param_3->MaxSize <= param_3->Size) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Size < MaxSize",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                   ,0x26,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            param_3->Data[param_3->Size] = *pFVar14;
            param_3->Size = param_3->Size + 1;
          }
        }
        pFVar14 = pFVar14 + 1;
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

// GetInputValue @ 14a88a530

FChooserParameterBase * __thiscall FMultiEnumColumn::GetInputValue(FMultiEnumColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// PostLoad @ 14a88cca0

void __thiscall FMultiEnumColumn::PostLoad(FMultiEnumColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88ccc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

