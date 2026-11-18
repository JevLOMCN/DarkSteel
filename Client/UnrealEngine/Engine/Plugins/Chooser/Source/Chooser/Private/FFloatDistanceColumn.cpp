// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 7

// StaticStruct @ 14a86b910

UScriptStruct * __cdecl FFloatDistanceColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatDistanceColumn.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FFloatDistanceColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatDistanceColumn,(UObject *)pUVar1,
                         L"FloatDistanceColumn");
  }
  return Z_Registration_Info_UScriptStruct_FFloatDistanceColumn.OuterSingleton;
}

// FFloatDistanceColumn @ 14a87d140

FFloatDistanceColumn * __thiscall
FFloatDistanceColumn::FFloatDistanceColumn(FFloatDistanceColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FFloatDistanceColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  this->CostMultiplier = 1.0;
  this->MaxDistance = 100.0;
  this->MinValue = -180.0;
  this->MaxValue = 180.0;
  (this->RowValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValues).ArrayNum = 0;
  (this->RowValues).ArrayMax = 0;
  this->bFilterOverMaxDistance = false;
  this->bWrapInput = false;
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

// Filter @ 14a887e50

void __thiscall
FFloatDistanceColumn::Filter
          (FFloatDistanceColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2
          ,FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  UScriptStruct *pUVar8;
  code *pcVar9;
  FIndexData FVar10;
  FIndexData FVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  FChooserParameterFloatBase *pFVar16;
  FChooserParameterBase *pFVar17;
  undefined8 *puVar18;
  wchar_t *pwVar19;
  FIndexData *pFVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar25;
  double local_res8;
  void *local_70 [11];
  double dVar24;
  
  puVar7 = (this->InputValue).StructMemory;
  local_res8 = 0.0;
  if ((puVar7 != (uchar *)0x0) &&
     (pUVar8 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar8 != (UScriptStruct *)0x0))
  {
    pFVar16 = UE::StructUtils::GetStructRef<FChooserParameterFloatBase>(pUVar8,puVar7);
    cVar13 = (**(code **)((longlong)*pFVar16 + 0x40))(pFVar16,param_1,&local_res8);
    if (cVar13 != '\0') {
      pFVar17 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar18 = (undefined8 *)(**(code **)*pFVar17)(pFVar17,local_70);
      if (*(int *)(puVar18 + 1) == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)*puVar18;
      }
      FChooserTrace::OutputChooserValue<double>(param_1,pwVar19,&local_res8);
      if (local_70[0] != (void *)0x0) {
        FMemory::Free(local_70[0]);
      }
      uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar4 = __real_3ff0000000000000;
      if (this->bWrapInput != false) {
        dVar4 = this->MinValue;
        dVar22 = this->MaxValue;
        uVar23 = SUB84(dVar22,0);
        uVar25 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar21 = dVar22 - dVar4;
        if (dVar21 != 0.0) {
          if (dVar4 <= local_res8) {
            dVar24 = local_res8;
            if ((dVar22 < local_res8) &&
               (dVar21 = FGenericPlatformMath::Fmod(local_res8 - dVar22,dVar21), dVar24 = dVar22,
               dVar21 != 0.0)) {
              dVar24 = dVar21 + dVar4;
            }
          }
          else {
            dVar21 = FGenericPlatformMath::Fmod(dVar4 - local_res8,dVar21);
            dVar24 = dVar4;
            if (dVar21 != 0.0) {
              dVar24 = dVar22 - dVar21;
            }
          }
          uVar23 = SUB84(dVar24,0);
          uVar25 = (undefined4)((ulonglong)dVar24 >> 0x20);
        }
        uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        dVar22 = __real_3fe0000000000000;
        dVar4 = __real_3ff0000000000000;
        pFVar20 = param_2->Data;
        pFVar1 = pFVar20 + param_2->Size;
        do {
          if (pFVar20 == pFVar1) {
            return;
          }
          uVar5 = pFVar20->Index;
          if ((int)uVar5 < (this->RowValues).ArrayNum) {
            if (((int)uVar5 < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            dVar21 = (double)CONCAT44(uVar25,uVar23) -
                     (double)*(float *)((this->RowValues).AllocatorInstance.Data +
                                       (longlong)(int)uVar5 * 4);
            dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar12,
                                      SUB84(dVar21,0) & uVar6);
            if (this->MaxValue * dVar22 - this->MinValue < dVar21) {
              dVar21 = (this->MaxValue - this->MinValue) - dVar21;
            }
            if ((this->bFilterOverMaxDistance == false) || (dVar21 < this->MaxDistance)) {
              dVar21 = dVar21 / this->MaxDistance;
              uVar5 = pFVar20->Index;
              if (dVar4 <= dVar21) {
                dVar21 = dVar4;
              }
              fVar2 = this->CostMultiplier;
              fVar3 = pFVar20->Cost;
              if ((param_3->MaxSize <= param_3->Size) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Size < MaxSize",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                      ,0x26,L""), bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar10.Cost = (float)dVar21 * fVar2 + fVar3;
              FVar10.Index = uVar5;
              param_3->Data[param_3->Size] = FVar10;
              param_3->Size = param_3->Size + 1;
            }
          }
          pFVar20 = pFVar20 + 1;
        } while( true );
      }
      pFVar20 = param_2->Data;
      pFVar1 = pFVar20 + param_2->Size;
      do {
        if (pFVar20 == pFVar1) {
          return;
        }
        uVar5 = pFVar20->Index;
        if ((-1 < (int)uVar5) && ((int)uVar5 < (this->RowValues).ArrayNum)) {
          uVar15 = 0;
          if ((int)uVar5 < (this->RowValues).ArrayNum) {
            uVar15 = ~uVar5 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          dVar22 = local_res8 -
                   (double)*(float *)((this->RowValues).AllocatorInstance.Data +
                                     (longlong)(int)uVar5 * 4);
          dVar22 = (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & uVar12,
                                    SUB84(dVar22,0) & uVar6);
          if ((this->bFilterOverMaxDistance == false) || (dVar22 < this->MaxDistance)) {
            dVar22 = dVar22 / this->MaxDistance;
            uVar5 = pFVar20->Index;
            if (dVar4 <= dVar22) {
              dVar22 = dVar4;
            }
            fVar2 = this->CostMultiplier;
            fVar3 = pFVar20->Cost;
            if ((param_3->MaxSize <= param_3->Size) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Size < MaxSize",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                    ,0x26,L""), bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar11.Cost = (float)dVar22 * fVar2 + fVar3;
            FVar11.Index = uVar5;
            param_3->Data[param_3->Size] = FVar11;
            param_3->Size = param_3->Size + 1;
          }
        }
        pFVar20 = pFVar20 + 1;
      } while( true );
    }
  }
  if ((param_3->MaxSize < param_2->Size) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaxSize >= Other.Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                          ,0x48,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = param_2->Size;
  param_3->Size = uVar6;
  memcpy(param_3->Data,param_2->Data,(ulonglong)uVar6 << 3);
  return;
}

// GetInputValue @ 14a88a4f0

FChooserParameterBase * __thiscall FFloatDistanceColumn::GetInputValue(FFloatDistanceColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// HasCosts @ 14a88b8e0

bool __thiscall FFloatDistanceColumn::HasCosts(FFloatDistanceColumn *this)

{
  return true;
}

// HasFilters @ 14a88b900

bool __thiscall FFloatDistanceColumn::HasFilters(FFloatDistanceColumn *this)

{
  return true;
}

// PostLoad @ 14a88cba0

void __thiscall FFloatDistanceColumn::PostLoad(FFloatDistanceColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88cbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

