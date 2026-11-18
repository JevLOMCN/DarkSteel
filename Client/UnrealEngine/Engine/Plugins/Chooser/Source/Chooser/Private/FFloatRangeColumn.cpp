// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 5

// StaticStruct @ 14a86c6d0

UScriptStruct * __cdecl FFloatRangeColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatRangeColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatRangeColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatRangeColumn,(UObject *)pUVar1,
                         L"FloatRangeColumn");
  }
  return Z_Registration_Info_UScriptStruct_FFloatRangeColumn.OuterSingleton;
}

// FFloatRangeColumn @ 14a87d200

FFloatRangeColumn * __thiscall FFloatRangeColumn::FFloatRangeColumn(FFloatRangeColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FFloatRangeColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  this->bWrapInput = false;
  this->MinValue = -180.0;
  this->MaxValue = 180.0;
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatContextProperty,(UObject *)pUVar1,
                         L"FloatContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,
             Z_Registration_Info_UScriptStruct_FFloatContextProperty.OuterSingleton,(uchar *)0x0);
  return this;
}

// Filter @ 14a888290

void __thiscall
FFloatRangeColumn::Filter
          (FFloatRangeColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2,
          FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  uchar *puVar5;
  UScriptStruct *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  FChooserParameterFloatBase *pFVar11;
  FChooserParameterBase *pFVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  FIndexData *pFVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 local_res8;
  void *local_58 [8];
  
  puVar5 = (this->InputValue).StructMemory;
  local_res8 = 0.0;
  if ((puVar5 != (uchar *)0x0) &&
     (pUVar6 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar6 != (UScriptStruct *)0x0))
  {
    pFVar11 = UE::StructUtils::GetStructRef<FChooserParameterFloatBase>(pUVar6,puVar5);
    cVar9 = (**(code **)((longlong)*pFVar11 + 0x40))(pFVar11,param_1,&local_res8);
    if (cVar9 != '\0') {
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
      FChooserTrace::OutputChooserValue<double>(param_1,pwVar14,(double *)&local_res8);
      if (local_58[0] != (void *)0x0) {
        FMemory::Free(local_58[0]);
      }
      if (this->bWrapInput == false) {
        pFVar16 = param_2->Data;
        pFVar1 = pFVar16 + param_2->Size;
        do {
          if (pFVar16 == pFVar1) {
            return;
          }
          uVar4 = pFVar16->Index;
          lVar15 = (longlong)(int)uVar4;
          if ((int)uVar4 < (this->RowValues).ArrayNum) {
            if (((int)uVar4 < 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (this->RowValues).AllocatorInstance.Data;
            if (((pFVar7[lVar15 * 0xc + 8] != (FScriptContainerElement)0x0) ||
                ((double)*(float *)(pFVar7 + lVar15 * 0xc) <= local_res8)) &&
               ((pFVar7[lVar15 * 0xc + 9] != (FScriptContainerElement)0x0 ||
                (local_res8 <= (double)*(float *)(pFVar7 + lVar15 * 0xc + 4))))) {
              if ((param_3->MaxSize <= param_3->Size) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Size < MaxSize",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                      ,0x26,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              param_3->Data[param_3->Size] = *pFVar16;
              param_3->Size = param_3->Size + 1;
            }
          }
          pFVar16 = pFVar16 + 1;
        } while( true );
      }
      dVar17 = this->MaxValue;
      uVar19 = SUB84(dVar17,0);
      uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar3 = this->MinValue;
      dVar18 = dVar17 - dVar3;
      if (dVar18 != 0.0) {
        if (dVar3 <= local_res8) {
          if ((dVar17 < local_res8) &&
             (dVar18 = FGenericPlatformMath::Fmod(local_res8 - dVar17,dVar18), local_res8 = dVar17,
             dVar18 != 0.0)) {
            local_res8 = dVar18 + dVar3;
          }
        }
        else {
          dVar18 = FGenericPlatformMath::Fmod(dVar3 - local_res8,dVar18);
          local_res8 = dVar3;
          if (dVar18 != 0.0) {
            local_res8 = dVar17 - dVar18;
          }
        }
        uVar19 = SUB84(local_res8,0);
        uVar20 = (undefined4)((ulonglong)local_res8 >> 0x20);
      }
      pFVar16 = param_2->Data;
      pFVar1 = pFVar16 + param_2->Size;
      local_res8._0_4_ = uVar19;
      local_res8._4_4_ = uVar20;
      do {
        if (pFVar16 == pFVar1) {
          return;
        }
        uVar4 = pFVar16->Index;
        lVar15 = (longlong)(int)uVar4;
        if ((int)uVar4 < (this->RowValues).ArrayNum) {
          if (((int)uVar4 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             uVar19 = (undefined4)local_res8, uVar20 = local_res8._4_4_, bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (this->RowValues).AllocatorInstance.Data;
          fVar2 = *(float *)(pFVar7 + lVar15 * 0xc);
          if (fVar2 <= *(float *)(pFVar7 + lVar15 * 0xc + 4)) {
            if ((pFVar7[lVar15 * 0xc + 8] != (FScriptContainerElement)0x0) ||
               ((double)fVar2 <= (double)CONCAT44(uVar20,uVar19))) goto LAB_14a888489;
          }
          else {
            if ((pFVar7[lVar15 * 0xc + 8] == (FScriptContainerElement)0x0) &&
               ((double)CONCAT44(uVar20,uVar19) < (double)fVar2)) {
LAB_14a888489:
              if ((pFVar7[lVar15 * 0xc + 9] == (FScriptContainerElement)0x0) &&
                 (dVar17 = (double)*(float *)(pFVar7 + lVar15 * 0xc + 4),
                 dVar17 <= (double)CONCAT44(uVar20,uVar19) &&
                 (double)CONCAT44(uVar20,uVar19) != dVar17)) goto LAB_14a8884e0;
            }
            if ((param_3->MaxSize <= param_3->Size) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Size < MaxSize",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                    ,0x26,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            param_3->Data[param_3->Size] = *pFVar16;
            param_3->Size = param_3->Size + 1;
            uVar19 = (undefined4)local_res8;
            uVar20 = local_res8._4_4_;
          }
        }
LAB_14a8884e0:
        pFVar16 = pFVar16 + 1;
      } while( true );
    }
  }
  if ((param_3->MaxSize < param_2->Size) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxSize >= Other.Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                          ,0x48,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = param_2->Size;
  param_3->Size = uVar4;
  memcpy(param_3->Data,param_2->Data,(ulonglong)uVar4 << 3);
  return;
}

// GetInputValue @ 14a88a500

FChooserParameterBase * __thiscall FFloatRangeColumn::GetInputValue(FFloatRangeColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// PostLoad @ 14a88cbe0

void __thiscall FFloatRangeColumn::PostLoad(FFloatRangeColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88cc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

