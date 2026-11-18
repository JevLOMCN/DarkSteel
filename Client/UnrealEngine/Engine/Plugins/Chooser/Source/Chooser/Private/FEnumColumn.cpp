// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 5

// StaticStruct @ 14a873f30

UScriptStruct * __cdecl FEnumColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumColumn,(UObject *)pUVar1,L"EnumColumn");
  }
  return Z_Registration_Info_UScriptStruct_FEnumColumn.OuterSingleton;
}

// FEnumColumn @ 14a87d100

FEnumColumn * __thiscall FEnumColumn::FEnumColumn(FEnumColumn *this)

{
  this->_padding_ = (longlong)&___7FEnumColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  return this;
}

// Filter @ 14a887c40

void __thiscall
FEnumColumn::Filter(FEnumColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2
                   ,FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  FChooserParameterEnumBase *pFVar11;
  FChooserParameterBase *pFVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  FIndexData *pFVar16;
  FScriptContainerElement local_res8 [8];
  void *local_28 [2];
  
  local_res8[0] = (FScriptContainerElement)0x0;
  puVar4 = (this->InputValue).StructMemory;
  if ((puVar4 != (uchar *)0x0) &&
     (pUVar5 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar5 != (UScriptStruct *)0x0))
  {
    pFVar11 = UE::StructUtils::GetStructRef<FChooserParameterEnumBase>(pUVar5,puVar4);
    cVar8 = (**(code **)((longlong)*pFVar11 + 0x40))(pFVar11,param_1,local_res8);
    if (cVar8 != '\0') {
      pFVar12 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar13 = (undefined8 *)(**(code **)*pFVar12)(pFVar12,local_28);
      if (*(int *)(puVar13 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar13;
      }
      FChooserTrace::OutputChooserValue<unsigned_char>(param_1,pwVar14,(uchar *)local_res8);
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
      pFVar16 = param_2->Data;
      pFVar1 = pFVar16 + param_2->Size;
      do {
        if (pFVar16 == pFVar1) {
          return;
        }
        uVar2 = pFVar16->Index;
        lVar15 = (longlong)(int)uVar2;
        if ((-1 < (int)uVar2) && ((int)uVar2 < (this->RowValues).ArrayNum)) {
          uVar10 = 0;
          if ((int)uVar2 < (this->RowValues).ArrayNum) {
            uVar10 = ~uVar2 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (this->RowValues).AllocatorInstance.Data;
          iVar3 = *(int *)(pFVar6 + lVar15 * 8);
          if (iVar3 == 0) {
            bVar9 = local_res8[0] == pFVar6[lVar15 * 8 + 4];
LAB_14a887d8d:
            if (!bVar9) goto LAB_14a887dcf;
          }
          else {
            if (iVar3 == 1) {
              bVar9 = local_res8[0] != pFVar6[lVar15 * 8 + 4];
              goto LAB_14a887d8d;
            }
            if (iVar3 != 2) goto LAB_14a887dcf;
          }
          if ((param_3->MaxSize <= param_3->Size) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size < MaxSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                 ,0x26,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          param_3->Data[param_3->Size] = *pFVar16;
          param_3->Size = param_3->Size + 1;
        }
LAB_14a887dcf:
        pFVar16 = pFVar16 + 1;
      } while( true );
    }
  }
  if ((param_3->MaxSize < param_2->Size) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxSize >= Other.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                         ,0x48,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar2 = param_2->Size;
  param_3->Size = uVar2;
  memcpy(param_3->Data,param_2->Data,(ulonglong)uVar2 << 3);
  return;
}

// GetInputValue @ 14a88a4e0

FChooserParameterBase * __thiscall FEnumColumn::GetInputValue(FEnumColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// PostLoad @ 14a88cb60

void __thiscall FEnumColumn::PostLoad(FEnumColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88cb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

