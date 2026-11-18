// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a876800

UScriptStruct * __cdecl FObjectColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FObjectColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FObjectColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObjectColumn,(UObject *)pUVar1,L"ObjectColumn");
  }
  return Z_Registration_Info_UScriptStruct_FObjectColumn.OuterSingleton;
}

// FObjectColumn @ 14a87d450

FObjectColumn * __thiscall FObjectColumn::FObjectColumn(FObjectColumn *this)

{
  this->_padding_ = (longlong)&___7FObjectColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  return this;
}

// Filter @ 14a888ed0

void __thiscall
FObjectColumn::Filter
          (FObjectColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FChooserParameterObjectBase *pFVar10;
  FString *pFVar11;
  FChooserParameterBase *pFVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  FIndexData *pFVar16;
  void *local_58 [2];
  FString local_48;
  FSoftObjectPath local_38;
  
  puVar4 = (this->InputValue).StructMemory;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  if ((puVar4 != (uchar *)0x0) &&
     (pUVar5 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar5 != (UScriptStruct *)0x0))
  {
    pFVar10 = UE::StructUtils::GetStructRef<FChooserParameterObjectBase>(pUVar5,puVar4);
    cVar7 = (**(code **)((longlong)*pFVar10 + 0x48))(pFVar10,param_1,&local_38);
    if (cVar7 != '\0') {
      pFVar11 = FSoftObjectPath::ToString(&local_38,&local_48);
      pFVar12 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar13 = (undefined8 *)(**(code **)*pFVar12)(pFVar12,local_58);
      if (*(int *)(puVar13 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar13;
      }
      FChooserTrace::OutputChooserValue<FString>(param_1,pwVar14,pFVar11);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      pFVar16 = param_2->Data;
      pFVar1 = pFVar16 + param_2->Size;
      for (; pFVar16 != pFVar1; pFVar16 = pFVar16 + 1) {
        uVar2 = pFVar16->Index;
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
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = (this->RowValues).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x30;
          iVar3 = *(int *)pFVar15;
          if (iVar3 == 0) {
            bVar8 = FSoftObjectPath::operator==(&local_38,(FSoftObjectPath *)(pFVar15 + 0x10));
LAB_14a889069:
            if (bVar8 == false) goto LAB_14a8890ab;
          }
          else {
            if (iVar3 == 1) {
              bVar8 = FSoftObjectPath::operator==(&local_38,(FSoftObjectPath *)(pFVar15 + 0x10));
              bVar8 = !bVar8;
              goto LAB_14a889069;
            }
            if (iVar3 != 2) goto LAB_14a8890ab;
          }
          if ((param_3->MaxSize <= param_3->Size) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size < MaxSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                 ,0x26,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          param_3->Data[param_3->Size] = *pFVar16;
          param_3->Size = param_3->Size + 1;
        }
LAB_14a8890ab:
      }
      goto LAB_14a889100;
    }
  }
  if ((param_3->MaxSize < param_2->Size) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxSize >= Other.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                         ,0x48,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = param_2->Size;
  param_3->Size = uVar2;
  memcpy(param_3->Data,param_2->Data,(ulonglong)uVar2 << 3);
LAB_14a889100:
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// GetInputValue @ 14a88a550

FChooserParameterBase * __thiscall FObjectColumn::GetInputValue(FObjectColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

