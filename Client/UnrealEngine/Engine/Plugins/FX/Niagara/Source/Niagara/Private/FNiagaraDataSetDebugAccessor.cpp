// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// StringAppend<TStringBuilderWithBuffer<wchar_t,1024>_> @ 149273840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataSetDebugAccessor::StringAppend<TStringBuilderWithBuffer<wchar_t,1024>_>
          (FNiagaraDataSetDebugAccessor *this,TStringBuilderWithBuffer<wchar_t,1024> *param_1,
          FNiagaraDataBuffer *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  UClass *pUVar3;
  FText *this_00;
  size_t sVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  UEnum *this_01;
  wchar_t *pwVar10;
  ulonglong uVar11;
  FText local_48;
  FString local_38;
  FString local_28;
  
  uVar11 = (ulonglong)param_3;
  if (this->bIsEnum == false) {
    if (this->bIsBool == false) {
      uVar9 = 0;
      uVar7 = 0;
      bVar2 = false;
      bVar1 = bVar2;
      if (this->NumComponentsInt32 != 0) {
        do {
          if (bVar2) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_1,L", ",2);
          }
          bVar2 = true;
          bVar1 = true;
          TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%d");
          uVar7 = uVar7 + 1;
        } while (uVar7 < this->NumComponentsInt32);
      }
      uVar7 = 0;
      bVar2 = bVar1;
      if (this->NumComponentsFloat != 0) {
        do {
          if (bVar1) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_1,L", ",2);
          }
          bVar1 = true;
          bVar2 = true;
          TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%.2f");
          uVar7 = uVar7 + 1;
        } while (uVar7 < this->NumComponentsFloat);
      }
      uVar7 = this->NumComponentsHalf;
      if (uVar7 != 0) {
        do {
          if (bVar2) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                      ((TStringBuilderBase<wchar_t> *)param_1,L", ",2);
            uVar7 = this->NumComponentsHalf;
          }
          bVar2 = true;
          if ((((param_2 != (FNiagaraDataBuffer *)0x0) && (this->ComponentIndexHalf != 0xffffffff))
              && (param_3 < param_2->NumInstances)) && (uVar9 < uVar7)) {
            FGenericPlatformMath::LoadHalf
                      ((ushort *)
                       ((param_2->HalfData).AllocatorInstance.Data +
                       (ulonglong)((this->ComponentIndexHalf + uVar9) * param_2->HalfStride) +
                       uVar11 * 2));
          }
          TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%.2f");
          uVar7 = this->NumComponentsHalf;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar7);
      }
    }
    else {
      if (((param_2 == (FNiagaraDataBuffer *)0x0) || (this->ComponentIndexInt32 == 0xffffffff)) ||
         ((param_2->NumInstances <= param_3 || (this->NumComponentsInt32 == 0)))) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)((param_2->Int32Data).AllocatorInstance.Data +
                        (ulonglong)(this->ComponentIndexInt32 * param_2->Int32Stride) + uVar11 * 4);
      }
      pwVar6 = L"false";
      if (iVar8 == -1) {
        pwVar6 = L"true";
      }
      sVar4 = wcslen(pwVar6);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)param_1,pwVar6,(int)sVar4);
    }
  }
  else {
    this_01 = (UEnum *)0x0;
    iVar8 = 0;
    if (((param_2 != (FNiagaraDataBuffer *)0x0) && (this->ComponentIndexInt32 != 0xffffffff)) &&
       ((param_3 < param_2->NumInstances && (this->NumComponentsInt32 != 0)))) {
      iVar8 = *(int *)((param_2->Int32Data).AllocatorInstance.Data +
                      (ulonglong)(this->ComponentIndexInt32 * param_2->Int32Stride) + uVar11 * 4);
    }
    if ((this->NiagaraType).UnderlyingType == 3) {
      if ((this->NiagaraType).ClassStructOrEnum.field0_0x0.DebugPtr == (UObject *)0x0) {
        pFVar5 = GetTypeName<UEnum>(&local_28);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar6);
      }
      pUVar3 = Z_Construct_UClass_UEnum_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->NiagaraType,pUVar3);
      if ((!bVar2) ||
         (this_01 = (UEnum *)(this->NiagaraType).ClassStructOrEnum.field0_0x0.DebugPtr,
         this_01 == (UEnum *)0x0)) {
        pFVar5 = GetTypeName<UEnum>(&local_38);
        pwVar6 = L"";
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = GetFullNameForCastLogError<UObject>
                           (&local_28,(this->NiagaraType).ClassStructOrEnum.field0_0x0.DebugPtr);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar6,pwVar10);
      }
    }
    this_00 = UEnum::GetDisplayNameTextByValue(this_01,&local_48,(longlong)iVar8);
    FText::ToString(this_00);
    TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%d (%s)");
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return;
}

// Init @ 1492aa2f0

bool __thiscall
FNiagaraDataSetDebugAccessor::Init
          (FNiagaraDataSetDebugAccessor *this,FNiagaraDataSetCompiledData *param_1,FName param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FNiagaraTypeDefinition *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FName *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = 0;
  this->VariableName = param_2;
  this->NumComponentsInt32 = 0;
  this->NumComponentsFloat = 0;
  this->NumComponentsHalf = 0;
  this->bIsEnum = false;
  this->bIsBool = false;
  this->ComponentIndexInt32 = 0xffffffff;
  this->ComponentIndexFloat = 0xffffffff;
  this->ComponentIndexHalf = 0xffffffff;
  iVar7 = (param_1->Variables).ArrayNum;
  uVar12 = uVar11;
  if (0 < iVar7) {
    do {
      uVar10 = (uint)uVar11;
      uVar5 = 0;
      if ((int)uVar10 < iVar7) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar9 = (FName *)((param_1->Variables).AllocatorInstance.Data + uVar12);
      if (*pFVar9 == this->VariableName) {
        uVar5 = 0;
        if ((int)uVar10 < (param_1->VariableLayouts).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar9 = pFVar9 + 1;
        pFVar8 = (param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x20;
        this->NumComponentsInt32 = (uint)*(ushort *)(pFVar8 + 10);
        this->NumComponentsFloat = (uint)*(ushort *)(pFVar8 + 8);
        this->NumComponentsHalf = (uint)*(ushort *)(pFVar8 + 0xc);
        this->ComponentIndexInt32 = (uint)*(ushort *)(pFVar8 + 2);
        this->ComponentIndexFloat = (uint)*(ushort *)pFVar8;
        this->ComponentIndexHalf = (uint)*(ushort *)(pFVar8 + 4);
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar9);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar1 = (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        (this->NiagaraType).ClassStructOrEnum.field0_0x0 = (pFVar6->ClassStructOrEnum).field0_0x0;
        (this->NiagaraType).UnderlyingType = pFVar6->UnderlyingType;
        (this->NiagaraType).Flags = pFVar6->Flags;
        (this->NiagaraType).Size = pFVar6->Size;
        (this->NiagaraType).Alignment = pFVar6->Alignment;
        (this->NiagaraType).RegisteredTypeDefIndex = pFVar6->RegisteredTypeDefIndex;
        (this->NiagaraType).UnderlyingTypePathNameHash = pFVar6->UnderlyingTypePathNameHash;
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar9);
        if (((TObjectPtr<UObject>_u_0)(pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr ==
             FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) &&
           (pFVar6->UnderlyingType == FNiagaraTypeDefinition::BoolDef.UnderlyingType)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        this->bIsBool = bVar3;
        pFVar6 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar9);
        this->bIsEnum = pFVar6->UnderlyingType == 3;
        return this->NumComponentsFloat + this->NumComponentsHalf + this->NumComponentsInt32 != 0;
      }
      iVar7 = (param_1->Variables).ArrayNum;
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar12 = uVar12 + 0xc;
    } while ((int)(uVar10 + 1) < iVar7);
  }
  return false;
}

// ReadFloat @ 1492b1620

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FNiagaraDataSetDebugAccessor::ReadFloat
          (FNiagaraDataSetDebugAccessor *this,FNiagaraDataBuffer *param_1,uint param_2,uint param_3)

{
  if ((((param_1 != (FNiagaraDataBuffer *)0x0) && (this->ComponentIndexFloat != 0xffffffff)) &&
      (param_2 < param_1->NumInstances)) && (param_3 < this->NumComponentsFloat)) {
    return *(float *)((param_1->FloatData).AllocatorInstance.Data +
                     (ulonglong)((param_3 + this->ComponentIndexFloat) * param_1->FloatStride) +
                     (ulonglong)param_2 * 4);
  }
  return 0.0;
}

// ReadHalf @ 1492b1670

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FNiagaraDataSetDebugAccessor::ReadHalf
          (FNiagaraDataSetDebugAccessor *this,FNiagaraDataBuffer *param_1,uint param_2,uint param_3)

{
  float fVar1;
  
  if ((((param_1 != (FNiagaraDataBuffer *)0x0) && (this->ComponentIndexHalf != 0xffffffff)) &&
      (param_2 < param_1->NumInstances)) && (param_3 < this->NumComponentsHalf)) {
    fVar1 = FGenericPlatformMath::LoadHalf
                      ((ushort *)
                       ((param_1->HalfData).AllocatorInstance.Data +
                       (ulonglong)((param_3 + this->ComponentIndexHalf) * param_1->HalfStride) +
                       (ulonglong)param_2 * 2));
    return fVar1;
  }
  return 0.0;
}

// ReadInt @ 1492b16c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FNiagaraDataSetDebugAccessor::ReadInt
          (FNiagaraDataSetDebugAccessor *this,FNiagaraDataBuffer *param_1,uint param_2,uint param_3)

{
  if ((((param_1 != (FNiagaraDataBuffer *)0x0) && (this->ComponentIndexInt32 != 0xffffffff)) &&
      (param_2 < param_1->NumInstances)) && (param_3 < this->NumComponentsInt32)) {
    return *(int *)((param_1->Int32Data).AllocatorInstance.Data +
                   (ulonglong)((param_3 + this->ComponentIndexInt32) * param_1->Int32Stride) +
                   (ulonglong)param_2 * 4);
  }
  return 0;
}

// ValidateDataBuffer @ 1492c0180

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FNiagaraDataSetDebugAccessor::ValidateDataBuffer
          (FNiagaraDataSetCompiledData *param_1,FNiagaraDataBuffer *param_2,uint param_3,
          TFunction<void___cdecl(FNiagaraVariableBase_const_&,int)> *param_4)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  bool local_88;
  int local_68 [2];
  int local_60 [2];
  longlong local_58;
  
  bVar4 = true;
  local_88 = true;
  if (param_3 < param_2->NumInstances) {
    uVar12 = 0;
    if (0 < (param_1->Variables).ArrayNum) {
      local_58 = 0;
      do {
        lVar13 = local_58;
        uVar11 = ~uVar12 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar12 < (param_1->VariableLayouts).ArrayNum) {
          uVar6 = uVar11;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar14 = (param_1->VariableLayouts).ArrayNum;
        if (*(short *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar13 + 8) == 0) {
          uVar6 = 0;
          if ((int)uVar12 < iVar14) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(short *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar13 + 0xc) != 0) {
            uVar6 = 0;
            if ((int)uVar12 < (param_1->VariableLayouts).ArrayNum) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            uVar1 = *(ushort *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar13 + 4);
            uVar6 = 0;
            if ((int)uVar12 < (param_1->VariableLayouts).ArrayNum) {
              uVar6 = uVar11;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            iVar14 = 0;
            uVar2 = *(ushort *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar13 + 0xc);
            if (uVar2 != 0) {
              do {
                pFVar10 = (param_2->HalfData).AllocatorInstance.Data +
                          (iVar14 + (uint)uVar1) * param_2->HalfStride;
                if ((pFVar10 == (FScriptContainerElement *)0x0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("HalfData",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetDebugAccessor.cpp"
                                       ,0x6e,L""), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                fVar15 = FGenericPlatformMath::LoadHalf
                                   ((ushort *)(pFVar10 + (ulonglong)param_3 * 2));
                iVar7 = _finite((double)fVar15);
                if (iVar7 == 0) {
                  local_88 = false;
                  uVar6 = 0;
                  if ((int)uVar12 < (param_1->Variables).ArrayNum) {
                    uVar6 = uVar11;
                  }
                  if ((uVar6 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    uVar5 = (*pcVar3)();
                    return (bool)uVar5;
                  }
                  pFVar10 = (param_1->Variables).AllocatorInstance.Data;
                  local_60[0] = iVar14;
                  UE::Core::Private::Function::CheckCallable(*(void **)param_4);
                  pcVar3 = *(code **)param_4;
                  plVar9 = *(longlong **)&param_4->field_0x28;
                  if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
                    plVar9 = (longlong *)&param_4->field_0x10;
                  }
                  uVar8 = (**(code **)(*plVar9 + 8))();
                  (*pcVar3)(uVar8,pFVar10 + (longlong)(int)uVar12 * 0xc,local_60);
                }
                iVar14 = iVar14 + 1;
                lVar13 = local_58;
              } while (iVar14 < (int)(uint)uVar2);
            }
          }
        }
        else {
          uVar6 = 0;
          if ((int)uVar12 < iVar14) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar1 = *(ushort *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar13);
          uVar6 = 0;
          if ((int)uVar12 < (param_1->VariableLayouts).ArrayNum) {
            uVar6 = uVar11;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar14 = 0;
          uVar2 = *(ushort *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar13 + 8);
          if (uVar2 != 0) {
            do {
              pFVar10 = (param_2->FloatData).AllocatorInstance.Data +
                        (iVar14 + (uint)uVar1) * param_2->FloatStride;
              if ((pFVar10 == (FScriptContainerElement *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("FloatData",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetDebugAccessor.cpp"
                                     ,0x5d,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              iVar7 = _finite((double)*(float *)(pFVar10 + (ulonglong)param_3 * 4));
              if (iVar7 == 0) {
                local_88 = false;
                uVar6 = 0;
                if ((int)uVar12 < (param_1->Variables).ArrayNum) {
                  uVar6 = uVar11;
                }
                if ((uVar6 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                pFVar10 = (param_1->Variables).AllocatorInstance.Data;
                local_68[0] = iVar14;
                UE::Core::Private::Function::CheckCallable(*(void **)param_4);
                pcVar3 = *(code **)param_4;
                plVar9 = *(longlong **)&param_4->field_0x28;
                if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
                  plVar9 = (longlong *)&param_4->field_0x10;
                }
                uVar8 = (**(code **)(*plVar9 + 8))();
                (*pcVar3)(uVar8,pFVar10 + (longlong)(int)uVar12 * 0xc,local_68);
              }
              iVar14 = iVar14 + 1;
              lVar13 = local_58;
            } while (iVar14 < (int)(uint)uVar2);
          }
        }
        local_58 = lVar13 + 0x20;
        uVar12 = uVar12 + 1;
        bVar4 = local_88;
      } while ((int)uVar12 < (param_1->Variables).ArrayNum);
    }
    if (*(longlong *)param_4 != 0) {
      plVar9 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar9 = *(longlong **)&param_4->field_0x28;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  else if (*(longlong *)param_4 != 0) {
    plVar9 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return bVar4;
}

// ValidateDataBuffer @ 1492c0690

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FNiagaraDataSetDebugAccessor::ValidateDataBuffer
          (FNiagaraDataSetCompiledData *param_1,FNiagaraDataBuffer *param_2,
          TFunction<void___cdecl(FNiagaraVariableBase_const_&,unsigned_int,int)> *param_3)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  float fVar17;
  bool local_78;
  int local_60 [2];
  int local_58 [2];
  int local_50 [2];
  int local_48 [2];
  longlong local_40;
  
  uVar11 = 0;
  local_78 = true;
  bVar4 = true;
  if (0 < (param_1->Variables).ArrayNum) {
    local_40 = 0;
    do {
      lVar14 = local_40;
      uVar10 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (param_1->VariableLayouts).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar16 = (param_1->VariableLayouts).ArrayNum;
      if (*(short *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar14 + 8) == 0) {
        uVar6 = 0;
        if ((int)uVar11 < iVar16) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(short *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar14 + 0xc) != 0) {
          uVar6 = 0;
          if ((int)uVar11 < (param_1->VariableLayouts).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          uVar1 = *(ushort *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar14 + 4);
          uVar6 = 0;
          if ((int)uVar11 < (param_1->VariableLayouts).ArrayNum) {
            uVar6 = uVar10;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          iVar16 = 0;
          uVar6 = (uint)*(ushort *)
                         ((param_1->VariableLayouts).AllocatorInstance.Data + lVar14 + 0xc);
          if (uVar6 != 0) {
            do {
              pFVar15 = (param_2->HalfData).AllocatorInstance.Data +
                        ((uint)uVar1 + iVar16) * param_2->HalfStride;
              if ((pFVar15 == (FScriptContainerElement *)0x0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("HalfData",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetDebugAccessor.cpp"
                                     ,0xa1,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              uVar13 = 0;
              if (param_2->NumInstances != 0) {
                do {
                  fVar17 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar15 + uVar13 * 2));
                  iVar7 = _finite((double)fVar17);
                  if (iVar7 == 0) {
                    local_78 = false;
                    uVar12 = 0;
                    if ((int)uVar11 < (param_1->Variables).ArrayNum) {
                      uVar12 = uVar10;
                    }
                    if ((uVar12 == 0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar4)) {
                      pcVar3 = (code *)swi(3);
                      uVar5 = (*pcVar3)();
                      return (bool)uVar5;
                    }
                    pFVar2 = (param_1->Variables).AllocatorInstance.Data;
                    local_50[0] = iVar16;
                    local_48[0] = (int)uVar13;
                    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
                    pcVar3 = *(code **)param_3;
                    plVar9 = *(longlong **)&param_3->field_0x28;
                    if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
                      plVar9 = (longlong *)&param_3->field_0x10;
                    }
                    uVar8 = (**(code **)(*plVar9 + 8))();
                    (*pcVar3)(uVar8,pFVar2 + (longlong)(int)uVar11 * 0xc,local_48,local_50);
                  }
                  uVar12 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar12;
                } while (uVar12 < param_2->NumInstances);
              }
              iVar16 = iVar16 + 1;
              lVar14 = local_40;
            } while (iVar16 < (int)uVar6);
          }
        }
      }
      else {
        uVar6 = 0;
        if ((int)uVar11 < iVar16) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        uVar1 = *(ushort *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar14);
        uVar6 = 0;
        if ((int)uVar11 < (param_1->VariableLayouts).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar16 = 0;
        uVar6 = (uint)*(ushort *)((param_1->VariableLayouts).AllocatorInstance.Data + lVar14 + 8);
        if (uVar6 != 0) {
          do {
            pFVar15 = (param_2->FloatData).AllocatorInstance.Data +
                      ((uint)uVar1 + iVar16) * param_2->FloatStride;
            if ((pFVar15 == (FScriptContainerElement *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FloatData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetDebugAccessor.cpp"
                                   ,0x8d,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            uVar13 = 0;
            if (param_2->NumInstances != 0) {
              do {
                iVar7 = _finite((double)*(float *)(pFVar15 + uVar13 * 4));
                if (iVar7 == 0) {
                  local_78 = false;
                  uVar12 = 0;
                  if ((int)uVar11 < (param_1->Variables).ArrayNum) {
                    uVar12 = uVar10;
                  }
                  if ((uVar12 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    uVar5 = (*pcVar3)();
                    return (bool)uVar5;
                  }
                  pFVar2 = (param_1->Variables).AllocatorInstance.Data;
                  local_60[0] = iVar16;
                  local_58[0] = (int)uVar13;
                  UE::Core::Private::Function::CheckCallable(*(void **)param_3);
                  pcVar3 = *(code **)param_3;
                  plVar9 = *(longlong **)&param_3->field_0x28;
                  if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
                    plVar9 = (longlong *)&param_3->field_0x10;
                  }
                  uVar8 = (**(code **)(*plVar9 + 8))();
                  (*pcVar3)(uVar8,pFVar2 + (longlong)(int)uVar11 * 0xc,local_58,local_60);
                }
                uVar12 = (int)uVar13 + 1;
                uVar13 = (ulonglong)uVar12;
              } while (uVar12 < param_2->NumInstances);
            }
            iVar16 = iVar16 + 1;
            lVar14 = local_40;
          } while (iVar16 < (int)uVar6);
        }
      }
      local_40 = lVar14 + 0x20;
      uVar11 = uVar11 + 1;
      bVar4 = local_78;
    } while ((int)uVar11 < (param_1->Variables).ArrayNum);
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return bVar4;
}

