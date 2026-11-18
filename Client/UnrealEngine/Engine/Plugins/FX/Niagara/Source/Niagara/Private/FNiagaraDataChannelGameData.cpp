// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 14

// FNiagaraDataChannelGameData @ 1490b10f0

FNiagaraDataChannelGameData * __thiscall
FNiagaraDataChannelGameData::FNiagaraDataChannelGameData
          (FNiagaraDataChannelGameData *this,TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->VariableData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableData).ArrayNum = 0;
  (this->VariableData).ArrayMax = 0;
  this->NumElements = 0;
  this->MaxElements = 0;
  this->PrevNumElements = 0;
  (this->LayoutInfo).Object = (FNiagaraDataChannelLayoutInfo *)0x0;
  (this->LayoutInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  Init(this,param_1);
  return this;
}

// operator() @ 1490bee70

void __thiscall
`FNiagaraDataChannelGameData::AppendFromDataSet'::__l6::<lambda_1>::operator()
          (void *this,UScriptStruct *param_1,UScriptStruct *param_2,uchar *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  FFieldClass *pFVar10;
  int *piVar11;
  int *piVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
  FField *pFVar16;
  double dVar17;
  FField *pFVar18;
  bool bVar19;
  longlong lVar20;
  FFieldClass *pFVar21;
  FField *pFVar22;
  undefined8 uVar23;
  int iVar24;
  FField *pFVar25;
  longlong *plVar26;
  uchar *puVar27;
  float *pfVar28;
  undefined4 *puVar29;
  undefined2 *puVar30;
  float *pfVar31;
  longlong lVar32;
  uint uVar33;
  FField *pFVar34;
  double dVar35;
  uchar *local_res10 [2];
  uchar *local_res20;
  FFieldObjectUnion local_98;
  FFieldObjectUnion local_90;
  FString local_88;
  FString local_78;
  TFieldIterator<FProperty> local_68;
  TFieldIterator<FProperty> local_50;
  
  pFVar34 = (FField *)0x0;
  if (param_1 == FNiagaraTypeDefinition::PositionStruct) {
    lVar32 = **(longlong **)this;
    iVar24 = **(int **)((longlong)this + 8);
    **(int **)((longlong)this + 8) = iVar24 + 1;
    lVar20 = **(longlong **)this;
    iVar7 = **(int **)((longlong)this + 8);
    pfVar28 = (float *)((ulonglong)(uint)(iVar24 * *(int *)(lVar32 + 300)) +
                       *(longlong *)(lVar32 + 0x18));
    **(int **)((longlong)this + 8) = iVar7 + 1;
    iVar24 = *(int *)(lVar20 + 300);
    iVar8 = **(int **)((longlong)this + 8);
    lVar32 = *(longlong *)(lVar20 + 0x18);
    lVar20 = **(longlong **)this;
    **(int **)((longlong)this + 8) = iVar8 + 1;
    dVar17 = __real_4140000000000000;
    pfVar31 = (float *)((ulonglong)(uint)(iVar8 * *(int *)(lVar20 + 300)) +
                       *(longlong *)(lVar20 + 0x18));
    if (0 < **(int **)((longlong)this + 0x10)) {
      lVar32 = ((ulonglong)(uint)(iVar7 * iVar24) + lVar32) - (longlong)pfVar28;
      do {
        pfVar9 = *(float **)((longlong)this + 0x20);
        iVar24 = (int)pFVar34;
        pfVar1 = (float *)(lVar32 + (longlong)pfVar28);
        uVar33 = iVar24 + 1;
        pFVar34 = (FField *)(ulonglong)uVar33;
        fVar2 = *pfVar28;
        pfVar28 = pfVar28 + 1;
        fVar3 = *pfVar31;
        pfVar31 = pfVar31 + 1;
        dVar35 = (double)pfVar9[1] * dVar17 + (double)*pfVar1;
        fVar4 = pfVar9[2];
        lVar20 = (longlong)(iVar24 * **(int **)((longlong)this + 0x18));
        auVar15._8_4_ = SUB84(dVar35,0);
        auVar15._0_8_ = (double)*pfVar9 * dVar17 + (double)fVar2;
        auVar15._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        *(undefined1 (*) [16])(param_3 + lVar20) = auVar15;
        *(double *)(param_3 + lVar20 + 0x10) = (double)fVar4 * dVar17 + (double)fVar3;
      } while ((int)uVar33 < **(int **)((longlong)this + 0x10));
      return;
    }
  }
  else {
    if (param_1 == (UScriptStruct *)0x0) {
      local_50.Field = (FField *)0x0;
    }
    else {
      local_50.Field = (FField *)param_1->_padding_;
    }
    local_50.InterfaceIndex = -1;
    local_50.bIncludeSuper = true;
    local_50.bIncludeDeprecated = true;
    local_50.bIncludeInterface = false;
    local_res20 = param_3;
    local_50.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_50);
    if (param_2 == (UScriptStruct *)0x0) {
      local_68.Field = (FField *)0x0;
    }
    else {
      local_68.Field = (FField *)param_2->_padding_;
    }
    local_68.InterfaceIndex = -1;
    local_68.bIncludeSuper = true;
    local_68.bIncludeDeprecated = true;
    local_68.bIncludeInterface = false;
    local_68.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_68);
    pFVar25 = local_68.Field;
    pFVar16 = local_50.Field;
    while (pFVar16 != (FField *)0x0) {
      puVar27 = param_3 + *(int *)((longlong)&pFVar25[1].Owner.Container + 4);
      local_68.Field = pFVar25;
      local_50.Field = pFVar16;
      pFVar21 = FDoubleProperty::StaticClass();
      if ((pFVar21 == (FFieldClass *)0x0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("FieldType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x2dd,L""), bVar19)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar22 = local_68.Field;
      pFVar10 = pFVar25->ClassPrivate;
      if (pFVar21->Id == CASTCLASS_None) {
        for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
          if (pFVar10 == pFVar21) {
            bVar19 = true;
            goto LAB_1490bf0a0;
          }
        }
        bVar19 = false;
      }
      else {
        bVar19 = (pFVar10->CastFlags & pFVar21->Id) != CASTCLASS_None;
      }
LAB_1490bf0a0:
      if (bVar19) {
        iVar24 = **(int **)((longlong)this + 8);
        lVar32 = **(longlong **)this;
        **(int **)((longlong)this + 8) = iVar24 + 1;
        piVar11 = *(int **)((longlong)this + 0x10);
        pfVar28 = (float *)((ulonglong)(uint)(iVar24 * *(int *)(lVar32 + 300)) +
                           *(longlong *)(lVar32 + 0x18));
        if (0 < *piVar11) {
          piVar12 = *(int **)((longlong)this + 0x18);
          pFVar25 = pFVar34;
          do {
            fVar2 = *pfVar28;
            pfVar28 = pfVar28 + 1;
            iVar24 = (int)pFVar25;
            uVar33 = iVar24 + 1;
            pFVar25 = (FField *)(ulonglong)uVar33;
            *(double *)(puVar27 + iVar24 * *piVar12) = (double)fVar2;
          } while ((int)uVar33 < *piVar11);
        }
      }
      else {
        pFVar21 = FFloatProperty::StaticClass();
        if ((pFVar21 == (FFieldClass *)0x0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("FieldType",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                ,0x2dd,L""), bVar19)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar18 = local_68.Field;
        pFVar10 = pFVar22->ClassPrivate;
        if (pFVar21->Id == CASTCLASS_None) {
          for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
            if (pFVar10 == pFVar21) {
              bVar19 = true;
              goto LAB_1490bf170;
            }
          }
          bVar19 = false;
        }
        else {
          bVar19 = (pFVar10->CastFlags & pFVar21->Id) != CASTCLASS_None;
        }
LAB_1490bf170:
        if (bVar19) {
          iVar24 = **(int **)((longlong)this + 8);
          lVar32 = **(longlong **)this;
          **(int **)((longlong)this + 8) = iVar24 + 1;
          piVar11 = *(int **)((longlong)this + 0x10);
          puVar29 = (undefined4 *)
                    ((ulonglong)(uint)(iVar24 * *(int *)(lVar32 + 300)) +
                    *(longlong *)(lVar32 + 0x18));
          param_3 = local_res20;
          if (0 < *piVar11) {
            piVar12 = *(int **)((longlong)this + 0x18);
            pFVar25 = pFVar34;
            do {
              uVar5 = *puVar29;
              puVar29 = puVar29 + 1;
              iVar24 = (int)pFVar25;
              uVar33 = iVar24 + 1;
              pFVar25 = (FField *)(ulonglong)uVar33;
              *(undefined4 *)(puVar27 + iVar24 * *piVar12) = uVar5;
            } while ((int)uVar33 < *piVar11);
          }
        }
        else {
          pFVar21 = FUInt16Property::StaticClass();
          if ((pFVar21 == (FFieldClass *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FieldType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x2dd,L""), bVar19)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar22 = local_68.Field;
          pFVar10 = pFVar18->ClassPrivate;
          if (pFVar21->Id == CASTCLASS_None) {
            for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
              if (pFVar10 == pFVar21) {
                bVar19 = true;
                goto LAB_1490bf237;
              }
            }
            bVar19 = false;
          }
          else {
            bVar19 = (pFVar10->CastFlags & pFVar21->Id) != CASTCLASS_None;
          }
LAB_1490bf237:
          if (bVar19) {
            lVar32 = **(longlong **)this;
            iVar24 = **(int **)((longlong)this + 0x28);
            **(int **)((longlong)this + 0x28) = iVar24 + 1;
            puVar30 = (undefined2 *)
                      ((ulonglong)(uint)(iVar24 * *(int *)(lVar32 + 0x134)) +
                      *(longlong *)(lVar32 + 0x38));
            pFVar25 = pFVar34;
            param_3 = local_res20;
            if (0 < **(int **)((longlong)this + 0x10)) {
              do {
                uVar6 = *puVar30;
                puVar30 = puVar30 + 1;
                uVar33 = (int)pFVar25 + 1;
                *(undefined2 *)(puVar27 + (int)pFVar25 * **(int **)((longlong)this + 0x18)) = uVar6;
                pFVar25 = (FField *)(ulonglong)uVar33;
              } while ((int)uVar33 < **(int **)((longlong)this + 0x10));
            }
          }
          else {
            pFVar21 = FIntProperty::StaticClass();
            if ((pFVar21 == (FFieldClass *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FieldType",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                    ,0x2dd,L""), bVar19)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pFVar18 = local_68.Field;
            pFVar10 = pFVar22->ClassPrivate;
            if (pFVar21->Id == CASTCLASS_None) {
              for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
                if (pFVar10 == pFVar21) {
                  bVar19 = true;
                  goto LAB_1490bf300;
                }
              }
              bVar19 = false;
            }
            else {
              bVar19 = (pFVar10->CastFlags & pFVar21->Id) != CASTCLASS_None;
            }
LAB_1490bf300:
            if (!bVar19) {
              pFVar21 = FBoolProperty::StaticClass();
              if ((pFVar21 == (FFieldClass *)0x0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FieldType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                      ,0x2dd,L""), bVar19)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              pFVar10 = pFVar18->ClassPrivate;
              if (pFVar21->Id == CASTCLASS_None) {
                for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
                  if (pFVar10 == pFVar21) {
                    bVar19 = true;
                    goto LAB_1490bf374;
                  }
                }
                bVar19 = false;
              }
              else {
                bVar19 = (pFVar10->CastFlags & pFVar21->Id) != CASTCLASS_None;
              }
LAB_1490bf374:
              if (!bVar19) {
                if ((pFVar16 == (FField *)0x0) ||
                   (((uint)(int)pFVar16->ClassPrivate->CastFlags >> 0x14 & 1) == 0)) {
                  ::FName::ToString(&pFVar16->ClassPrivate->Name,&local_78);
                  bVar19 = IsThisNotNull(pFVar16,"FField::GetName");
                  if (bVar19) {
                    ::FName::ToString(&pFVar16->NamePrivate,&local_88);
                  }
                  else {
                    ::FString::FString(&local_88,L"None");
                  }
                  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelGameData.cpp"
                                      ,0x189,L"Property(%s) Class(%s) is not a supported type");
                  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_88.Data.AllocatorInstance.Data);
                  }
                  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_78.Data.AllocatorInstance.Data);
                  }
                  param_3 = local_res20;
                  if (bVar19) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                else {
                  puVar13 = *(undefined8 **)((longlong)this + 0x38);
                  pFVar22 = pFVar34;
                  if (((uint)(int)pFVar25->ClassPrivate->CastFlags >> 0x14 & 1) != 0) {
                    pFVar22 = pFVar25;
                  }
                  local_98 = pFVar22[2].Owner.Container;
                  local_90 = pFVar16[2].Owner.Container;
                  local_res10[0] = puVar27;
                  UE::Core::Private::Function::CheckCallable((void *)*puVar13);
                  pcVar14 = (code *)*puVar13;
                  plVar26 = (longlong *)puVar13[5];
                  if ((longlong *)puVar13[5] == (longlong *)0x0) {
                    plVar26 = puVar13 + 2;
                  }
                  uVar23 = (**(code **)(*plVar26 + 8))();
                  (*pcVar14)(uVar23,&local_90,&local_98,local_res10);
                  param_3 = local_res20;
                }
                goto LAB_1490bf507;
              }
            }
            lVar32 = **(longlong **)this;
            iVar24 = **(int **)((longlong)this + 0x30);
            **(int **)((longlong)this + 0x30) = iVar24 + 1;
            puVar29 = (undefined4 *)
                      ((ulonglong)(uint)(iVar24 * *(int *)(lVar32 + 0x130)) +
                      *(longlong *)(lVar32 + 0x28));
            pFVar25 = pFVar34;
            param_3 = local_res20;
            if (0 < **(int **)((longlong)this + 0x10)) {
              do {
                uVar5 = *puVar29;
                puVar29 = puVar29 + 1;
                uVar33 = (int)pFVar25 + 1;
                *(undefined4 *)(puVar27 + (int)pFVar25 * **(int **)((longlong)this + 0x18)) = uVar5;
                pFVar25 = (FField *)(ulonglong)uVar33;
              } while ((int)uVar33 < **(int **)((longlong)this + 0x10));
            }
          }
        }
      }
LAB_1490bf507:
      local_50.Field = (local_50.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_50);
      local_68.Field = (local_68.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_68);
      pFVar25 = local_68.Field;
      pFVar16 = local_50.Field;
    }
  }
  return;
}

// operator() @ 1490bf7b0

void __thiscall
`FNiagaraDataChannelGameData::WriteToDataSet'::__l9::<lambda_1>::operator()
          (void *this,UScriptStruct *param_1,UScriptStruct *param_2,uchar *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  FFieldClass *pFVar10;
  FName this_00;
  undefined8 *puVar11;
  code *pcVar12;
  FName FVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  FFieldClass *pFVar17;
  FName FVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar23;
  uchar *puVar24;
  float *pfVar25;
  undefined2 *puVar26;
  undefined4 *puVar27;
  float *pfVar28;
  float *pfVar29;
  int iVar30;
  FField *pFVar31;
  FField *pFVar32;
  uchar *local_res18;
  FFieldObjectUnion local_res20;
  FFieldObjectUnion local_98;
  FString local_90;
  FString local_80;
  TFieldIterator<FProperty> local_70;
  TFieldIterator<FProperty> local_58;
  FField *pFVar22;
  
  if (param_2 == FNiagaraTypeDefinition::PositionStruct) {
    iVar30 = 0;
    iVar16 = **(int **)((longlong)this + 8);
    lVar21 = **(longlong **)this;
    uVar20 = **(uint **)((longlong)this + 0x10);
    **(int **)((longlong)this + 8) = iVar16 + 1;
    lVar6 = **(longlong **)this;
    pfVar28 = (float *)((ulonglong)(uint)(iVar16 * *(int *)(lVar21 + 300)) + (ulonglong)uVar20 * 4 +
                       *(longlong *)(lVar21 + 0x18));
    uVar20 = **(uint **)((longlong)this + 0x10);
    iVar16 = **(int **)((longlong)this + 8);
    **(int **)((longlong)this + 8) = iVar16 + 1;
    iVar5 = **(int **)((longlong)this + 8);
    pfVar29 = (float *)((ulonglong)(uint)(iVar16 * *(int *)(lVar6 + 300)) + (ulonglong)uVar20 * 4 +
                       *(longlong *)(lVar6 + 0x18));
    lVar21 = **(longlong **)this;
    uVar20 = **(uint **)((longlong)this + 0x10);
    **(int **)((longlong)this + 8) = iVar5 + 1;
    fVar14 = __real_4a000000;
    piVar7 = *(int **)((longlong)this + 0x18);
    pfVar25 = (float *)((ulonglong)(uint)(iVar5 * *(int *)(lVar21 + 300)) + (ulonglong)uVar20 * 4 +
                       *(longlong *)(lVar21 + 0x18));
    if (0 < *piVar7) {
      piVar8 = *(int **)((longlong)this + 0x20);
      pfVar9 = *(float **)((longlong)this + 0x28);
      do {
        fVar1 = pfVar9[1];
        iVar16 = iVar30 * *piVar8;
        iVar30 = iVar30 + 1;
        lVar21 = (longlong)iVar16;
        fVar2 = pfVar9[2];
        dVar3 = *(double *)(param_3 + lVar21 + 8);
        dVar4 = *(double *)(param_3 + lVar21 + 0x10);
        *pfVar28 = (float)(*(double *)(param_3 + lVar21) - (double)(*pfVar9 * fVar14));
        pfVar28 = pfVar28 + 1;
        *pfVar29 = (float)(dVar3 - (double)(fVar1 * fVar14));
        pfVar29 = pfVar29 + 1;
        *pfVar25 = (float)(dVar4 - (double)(fVar2 * fVar14));
        pfVar25 = pfVar25 + 1;
      } while (iVar30 < *piVar7);
      return;
    }
  }
  else {
    pFVar31 = (FField *)0x0;
    if (param_1 == (UScriptStruct *)0x0) {
      local_70.Field = (FField *)0x0;
    }
    else {
      local_70.Field = (FField *)param_1->_padding_;
    }
    local_70.InterfaceIndex = -1;
    local_70.bIncludeSuper = true;
    local_70.bIncludeDeprecated = true;
    local_70.bIncludeInterface = false;
    local_70.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_70);
    if (param_2 == (UScriptStruct *)0x0) {
      local_58.Field = (FField *)0x0;
    }
    else {
      local_58.Field = (FField *)param_2->_padding_;
    }
    local_58.InterfaceIndex = -1;
    local_58.bIncludeSuper = true;
    local_58.bIncludeDeprecated = true;
    local_58.bIncludeInterface = false;
    local_58.Struct = (UStruct *)param_2;
    TFieldIterator<FProperty>::IterateToNext(&local_58);
    pFVar22 = local_70.Field;
    pFVar32 = local_58.Field;
    while (pFVar22 != (FField *)0x0) {
      puVar24 = param_3 + *(int *)((longlong)&pFVar22[1].Owner.Container + 4);
      local_70.Field = pFVar22;
      local_58.Field = pFVar32;
      pFVar17 = FDoubleProperty::StaticClass();
      if ((pFVar17 == (FFieldClass *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("FieldType",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                              ,0x2dd,L""), bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = pFVar22->ClassPrivate;
      if (pFVar17->Id == CASTCLASS_None) {
        for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
          if (pFVar10 == pFVar17) {
            bVar15 = true;
            goto LAB_1490bfa10;
          }
        }
        bVar15 = false;
      }
      else {
        bVar15 = (pFVar10->CastFlags & pFVar17->Id) != CASTCLASS_None;
      }
LAB_1490bfa10:
      if (bVar15) {
        pFVar17 = FFloatProperty::StaticClass();
        if ((pFVar17 == (FFieldClass *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("FieldType",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                ,0x2dd,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = pFVar32->ClassPrivate;
        if (pFVar17->Id == CASTCLASS_None) {
          for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
            if (pFVar10 == pFVar17) {
              bVar15 = true;
              goto LAB_1490bfa84;
            }
          }
          bVar15 = false;
        }
        else {
          bVar15 = (pFVar10->CastFlags & pFVar17->Id) != CASTCLASS_None;
        }
LAB_1490bfa84:
        if ((!bVar15) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("DestProperty->IsA(FFloatProperty::StaticClass())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelGameData.cpp"
                                ,0xc0,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar21 = **(longlong **)this;
        iVar16 = **(int **)((longlong)this + 8);
        uVar20 = **(uint **)((longlong)this + 0x10);
        **(int **)((longlong)this + 8) = iVar16 + 1;
        piVar7 = *(int **)((longlong)this + 0x18);
        if (0 < *piVar7) {
          piVar8 = *(int **)((longlong)this + 0x20);
          pFVar22 = pFVar31;
          pfVar25 = (float *)((ulonglong)(uint)(iVar16 * *(int *)(lVar21 + 300)) +
                              (ulonglong)uVar20 * 4 + *(longlong *)(lVar21 + 0x18));
          do {
            iVar16 = (int)pFVar22;
            uVar20 = iVar16 + 1;
            pFVar22 = (FField *)(ulonglong)uVar20;
            *pfVar25 = (float)*(double *)(puVar24 + iVar16 * *piVar8);
            pfVar25 = pfVar25 + 1;
          } while ((int)uVar20 < *piVar7);
        }
      }
      else {
        pFVar17 = FFloatProperty::StaticClass();
        if ((pFVar17 == (FFieldClass *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("FieldType",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                ,0x2dd,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = pFVar22->ClassPrivate;
        if (pFVar17->Id == CASTCLASS_None) {
          for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
            if (pFVar10 == pFVar17) {
              bVar15 = true;
              goto LAB_1490bfb80;
            }
          }
          bVar15 = false;
        }
        else {
          bVar15 = (pFVar10->CastFlags & pFVar17->Id) != CASTCLASS_None;
        }
LAB_1490bfb80:
        if (bVar15) {
          lVar21 = **(longlong **)this;
          iVar16 = **(int **)((longlong)this + 8);
          uVar20 = **(uint **)((longlong)this + 0x10);
          **(int **)((longlong)this + 8) = iVar16 + 1;
          piVar7 = *(int **)((longlong)this + 0x18);
          if (0 < *piVar7) {
            piVar8 = *(int **)((longlong)this + 0x20);
            pFVar22 = pFVar31;
            puVar27 = (undefined4 *)
                      ((ulonglong)(uint)(iVar16 * *(int *)(lVar21 + 300)) + (ulonglong)uVar20 * 4 +
                      *(longlong *)(lVar21 + 0x18));
            do {
              iVar16 = (int)pFVar22;
              uVar20 = iVar16 + 1;
              pFVar22 = (FField *)(ulonglong)uVar20;
              *puVar27 = *(undefined4 *)(puVar24 + iVar16 * *piVar8);
              puVar27 = puVar27 + 1;
            } while ((int)uVar20 < *piVar7);
          }
        }
        else {
          pFVar17 = FUInt16Property::StaticClass();
          if ((pFVar17 == (FFieldClass *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FieldType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x2dd,L""), bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar10 = pFVar22->ClassPrivate;
          if (pFVar17->Id == CASTCLASS_None) {
            for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
              if (pFVar10 == pFVar17) {
                bVar15 = true;
                goto LAB_1490bfc41;
              }
            }
            bVar15 = false;
          }
          else {
            bVar15 = (pFVar10->CastFlags & pFVar17->Id) != CASTCLASS_None;
          }
LAB_1490bfc41:
          if (bVar15) {
            lVar21 = **(longlong **)this;
            iVar16 = **(int **)((longlong)this + 0x30);
            uVar20 = **(uint **)((longlong)this + 0x10);
            **(int **)((longlong)this + 0x30) = iVar16 + 1;
            pFVar22 = pFVar31;
            puVar26 = (undefined2 *)
                      ((ulonglong)(uint)(iVar16 * *(int *)(lVar21 + 0x134)) + (ulonglong)uVar20 * 2
                      + *(longlong *)(lVar21 + 0x38));
            if (0 < **(int **)((longlong)this + 0x18)) {
              do {
                iVar16 = (int)pFVar22;
                uVar20 = iVar16 + 1;
                pFVar22 = (FField *)(ulonglong)uVar20;
                *puVar26 = *(undefined2 *)(puVar24 + iVar16 * **(int **)((longlong)this + 0x20));
                puVar26 = puVar26 + 1;
              } while ((int)uVar20 < **(int **)((longlong)this + 0x18));
            }
          }
          else {
            pFVar17 = FIntProperty::StaticClass();
            if ((pFVar17 == (FFieldClass *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("FieldType",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                    ,0x2dd,L""), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = pFVar22->ClassPrivate;
            if (pFVar17->Id == CASTCLASS_None) {
              for (; pFVar10 != (FFieldClass *)0x0; pFVar10 = pFVar10->SuperClass) {
                if (pFVar10 == pFVar17) {
                  bVar15 = true;
                  goto LAB_1490bfd10;
                }
              }
              bVar15 = false;
            }
            else {
              bVar15 = (pFVar10->CastFlags & pFVar17->Id) != CASTCLASS_None;
            }
LAB_1490bfd10:
            if (!bVar15) {
              FVar18 = (FName)FBoolProperty::StaticClass();
              if ((FVar18 == (FName)0x0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FieldType",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                      ,0x2dd,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              this_00 = (FName)pFVar22->ClassPrivate;
              FVar13 = this_00;
              if (*(ulonglong *)((longlong)FVar18 + 0x10) == 0) {
                for (; FVar13 != (FName)0x0; FVar13 = *(FName *)((longlong)FVar13 + 0x20)) {
                  if (FVar13 == FVar18) {
                    bVar15 = true;
                    goto LAB_1490bfd84;
                  }
                }
                bVar15 = false;
              }
              else {
                bVar15 = ((ulonglong)*(FName *)((longlong)this_00 + 0x18) &
                         *(ulonglong *)((longlong)FVar18 + 0x10)) != 0;
              }
LAB_1490bfd84:
              if (!bVar15) {
                if ((((((FName *)((longlong)this_00 + 0x18))->ComparisonIndex).Value >> 0x14 & 1) ==
                     0) || (pFVar22 == (FField *)0x0)) {
                  ::FName::ToString((FName *)this_00,&local_80);
                  bVar15 = IsThisNotNull(pFVar22,"FField::GetName");
                  if (bVar15) {
                    ::FName::ToString(&pFVar22->NamePrivate,&local_90);
                  }
                  else {
                    ::FString::FString(&local_90,L"None");
                  }
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("false",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelGameData.cpp"
                                      ,0xf2,L"Property(%s) Class(%s) is not a supported type");
                  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_90.Data.AllocatorInstance.Data);
                  }
                  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_80.Data.AllocatorInstance.Data);
                  }
                  if (bVar15) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                }
                else {
                  if ((pFVar32 == (FField *)0x0) ||
                     (((uint)(int)pFVar32->ClassPrivate->CastFlags >> 0x14 & 1) == 0)) {
                    pFVar32 = pFVar31;
                  }
                  local_res20 = pFVar32[2].Owner.Container;
                  puVar11 = *(undefined8 **)((longlong)this + 0x40);
                  local_98 = pFVar22[2].Owner.Container;
                  local_res18 = puVar24;
                  UE::Core::Private::Function::CheckCallable((void *)*puVar11);
                  pcVar12 = (code *)*puVar11;
                  plVar23 = (longlong *)puVar11[5];
                  if ((longlong *)puVar11[5] == (longlong *)0x0) {
                    plVar23 = puVar11 + 2;
                  }
                  uVar19 = (**(code **)(*plVar23 + 8))();
                  (*pcVar12)(uVar19,&local_98,&local_res20,&local_res18);
                }
                goto LAB_1490bff11;
              }
            }
            lVar21 = **(longlong **)this;
            iVar16 = **(int **)((longlong)this + 0x38);
            uVar20 = **(uint **)((longlong)this + 0x10);
            **(int **)((longlong)this + 0x38) = iVar16 + 1;
            pFVar22 = pFVar31;
            puVar27 = (undefined4 *)
                      ((ulonglong)(uint)(iVar16 * *(int *)(lVar21 + 0x130)) + (ulonglong)uVar20 * 4
                      + *(longlong *)(lVar21 + 0x28));
            if (0 < **(int **)((longlong)this + 0x18)) {
              do {
                iVar16 = (int)pFVar22;
                uVar20 = iVar16 + 1;
                pFVar22 = (FField *)(ulonglong)uVar20;
                *puVar27 = *(undefined4 *)(puVar24 + iVar16 * **(int **)((longlong)this + 0x20));
                puVar27 = puVar27 + 1;
              } while ((int)uVar20 < **(int **)((longlong)this + 0x18));
            }
          }
        }
      }
LAB_1490bff11:
      local_70.Field = (local_70.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_70);
      local_58.Field = (local_58.Field)->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_58);
      pFVar22 = local_70.Field;
      pFVar32 = local_58.Field;
    }
  }
  return;
}

// AppendFromDataSet @ 1490cbbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelGameData::AppendFromDataSet
          (FNiagaraDataChannelGameData *this,FNiagaraDataBuffer *param_1,TVector<float> *param_2)

{
  undefined1 *puVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  ulonglong uVar2;
  FNiagaraDataSet *pFVar3;
  FNiagaraDataChannelLayoutInfo *pFVar4;
  undefined1 *puVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  FNiagaraDataChannelGameDataLayout *pFVar9;
  FNiagaraDataSetCompiledData *pFVar10;
  FNiagaraDataChannelGameDataLayout *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint uVar17;
  longlong lVar18;
  FNiagaraTypeDefinition *pFVar19;
  UClass *pUVar20;
  longlong *plVar21;
  code *pcVar22;
  undefined8 uVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  int iVar27;
  longlong lVar28;
  UScriptStruct *pUVar29;
  TObjectPtr<UObject>_u_0 TVar30;
  uint uVar31;
  uint uVar32;
  TObjectPtr<UObject>_u_0 TVar33;
  undefined1 *puVar34;
  uint *puVar35;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined1 local_218 [8];
  longlong local_210;
  FNiagaraTypeDefinitionHandle local_208 [2];
  FNiagaraTypeDefinitionHandle local_200;
  FNiagaraTypeDefinitionHandle local_1fc;
  int local_1f8;
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  uint local_1e8;
  uint local_1e4;
  longlong local_1e0;
  FNiagaraTypeDefinitionHandle local_1d8 [2];
  TObjectPtr<UObject>_u_0 local_1d0;
  FNiagaraDataBuffer *local_1c8;
  TObjectPtr<UObject>_u_0 local_1c0;
  undefined2 local_1b8;
  undefined1 local_1b6;
  undefined8 local_1b4;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  FNiagaraDataChannelGameDataLayout *local_1a0;
  TObjectPtr<UObject>_u_0 *local_198;
  FNiagaraDataSetCompiledData *local_190;
  TVector<float> *local_188;
  FScriptContainerElement *local_180;
  TObjectPtr<UObject>_u_0 local_178;
  TObjectPtr<UObject>_u_0 local_170;
  FNiagaraDataChannelGameDataLayout *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  FNiagaraDataChannelGameDataLayout *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FNiagaraDataBuffer **local_108;
  uint *puStack_100;
  uint *local_f8;
  int *piStack_f0;
  TVector<float> *local_e8;
  uint *puStack_e0;
  uint *local_d8;
  code **ppcStack_d0;
  undefined4 local_ac;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_248;
  pFVar3 = param_1->Owner;
  local_1c8 = param_1;
  local_188 = param_2;
  if (((pFVar3->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompiledData.Get() != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x169,L""), bVar16)) {
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  local_190 = (pFVar3->CompiledData).StructPtr;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FNiagaraDataChannelGameData::AppendFromDataSet'::__l2::
           _dynamic_atexit_destructor_for__LWCConversionBuffer__);
    _Init_thread_footer(&::_TSS0);
  }
  local_1f0 = local_1c8->NumInstances;
  local_1f8 = this->NumElements;
  this->NumElements = local_1f8 + local_1f0;
  if (((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pFVar4 = (this->LayoutInfo).Object;
  iStack_160 = 0;
  local_1a0 = &pFVar4->GameDataLayout;
  iVar24 = *(int *)&(pFVar4->GameDataLayout).VariableIndices.field_0x28;
  puVar1 = &(pFVar4->GameDataLayout).VariableIndices.field_0x10;
  local_148 = 0;
  uStack_15c = 1;
  iStack_14c = 0;
  if (iVar24 != 0) {
    puVar35 = *(uint **)&(pFVar4->GameDataLayout).VariableIndices.field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)puVar1;
    }
    uVar32 = *puVar35;
    while (uVar32 == 0) {
      iStack_160 = iStack_160 + 1;
      local_148 = local_148 + 0x20;
      iStack_14c = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160) goto LAB_1490cbd60;
      uVar32 = puVar35[iStack_160];
    }
    uStack_15c = ~(uVar32 - 1) & uVar32;
    uVar2 = (ulonglong)uStack_15c * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1a8 = (int)lVar18;
    iStack_14c = local_1a8 + -1 + local_148;
    if (iVar24 < iStack_14c) {
      iStack_14c = iVar24;
    }
  }
LAB_1490cbd60:
  uVar32 = *(uint *)&(pFVar4->GameDataLayout).VariableIndices.field_0x28;
  uStack_144 = local_ac;
  uVar31 = uVar32 & 0xffffffe0;
  iStack_140 = *(int *)&(pFVar4->GameDataLayout).VariableIndices.field_0x8 -
               *(int *)&(pFVar4->GameDataLayout).VariableIndices.field_0x34;
  TStack_130._padding_ = CONCAT44(uStack_15c,iStack_160);
  uStack_150 = 0xffffffff;
  TStack_130.CurrentBitIndex = iStack_14c;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar27 = (int)uVar32 >> 5;
  TStack_130._28_4_ = local_ac;
  TStack_130.BaseBitIndex = local_148;
  uStack_110 = CONCAT44(uStack_13c,iStack_140);
  local_168 = local_1a0;
  local_158 = puVar1;
  local_138 = local_1a0;
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar32 < 0) || (iVar24 < (int)uVar32)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pFVar9 = local_1a0;
  uVar17 = *(uint *)&(pFVar4->GameDataLayout).VariableIndices.field_0x28;
  if (uVar32 != uVar17) {
    puVar5 = *(undefined1 **)&(pFVar4->GameDataLayout).VariableIndices.field_0x20;
    puVar34 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar34 = puVar5;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar27 * 4);
    while (uVar32 == 0) {
      iVar27 = iVar27 + 1;
      uVar31 = uVar31 + 0x20;
      uVar32 = uVar17;
      if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < iVar27)
      goto LAB_1490cbe70;
      uVar32 = *(uint *)(puVar34 + (longlong)iVar27 * 4);
    }
    uVar2 = (ulonglong)(~(uVar32 - 1) & uVar32) * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    local_1a4 = (int)lVar18;
    uVar32 = local_1a4 + -1 + uVar31;
    if ((int)uVar17 < (int)uVar32) {
      uVar32 = uVar17;
    }
  }
LAB_1490cbe70:
  do {
    pFVar11 = local_138;
    if (*(int *)&(local_138->VariableIndices).field_0x8 -
        *(int *)&(local_138->VariableIndices).field_0x34 != (int)uStack_110) {
      local_218[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_218);
    }
    lVar18 = (longlong)TStack_130.CurrentBitIndex;
    if (((TStack_130.CurrentBitIndex == uVar32) &&
        (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar11 == pFVar9)
       ) {
      return;
    }
    lVar6 = *(longlong *)&pFVar11->VariableIndices;
    uVar31 = *(uint *)(lVar6 + 0xc + lVar18 * 0x18);
    lVar28 = (longlong)(int)uVar31;
    local_208[0].RegisteredTypeIndex = *(int *)(lVar6 + 8 + lVar18 * 0x18);
    local_210 = *(longlong *)(lVar6 + lVar18 * 0x18);
    iVar24 = (this->VariableData).ArrayNum;
    uVar17 = 0;
    if ((int)uVar31 < iVar24) {
      uVar17 = ~uVar31 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_228 = lVar28, local_220 = (longlong)iVar24,
       bVar16 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    pFVar7 = (this->VariableData).AllocatorInstance.Data;
    this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pFVar7 + lVar28 * 0x28);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this_00,*(int *)(pFVar7 + lVar28 * 0x28 + 0x20) * this->NumElements,Default);
    local_1e0 = local_210;
    local_1d8[0].RegisteredTypeIndex = local_208[0].RegisteredTypeIndex;
    pFVar19 = FNiagaraTypeDefinitionHandle::Resolve(local_208);
    bVar16 = FNiagaraTypeHelper::IsLWCType(pFVar19);
    if (bVar16) {
      pFVar19 = FNiagaraTypeDefinitionHandle::Resolve(local_208);
      pUVar29 = FNiagaraTypeDefinition::IntStruct;
      if (pFVar19->UnderlyingType != 3) {
        if ((pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          pUVar20 = Z_Construct_UClass_UStruct_NoRegister();
          bVar16 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar20);
          if (bVar16) {
            pUVar29 = (UScriptStruct *)(pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr;
            goto LAB_1490cbf9a;
          }
        }
        pUVar29 = (UScriptStruct *)0x0;
      }
LAB_1490cbf9a:
      if (pUVar29 == (UScriptStruct *)0x0) {
LAB_1490cbfc2:
        pUVar29 = (UScriptStruct *)0x0;
      }
      else {
        pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar24 = (int)pUVar20->_padding_;
        if ((*(int *)(pUVar29->_padding_ + 0x38) < iVar24) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
            &pUVar20->_padding_)) goto LAB_1490cbfc2;
      }
      local_1d0.DebugPtr =
           (UObject *)FNiagaraTypeHelper::FindNiagaraFriendlyTopLevelStruct(pUVar29,Simulation);
      local_1c0.DebugPtr = local_1d0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)local_1d0.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(local_1d0.DebugPtr);
      }
      local_1b6 = 0;
      local_1b8 = 2;
      local_1b4 = 0xffffffffffffffff;
      local_1ac = 0xffffffff;
      bVar16 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                         ((UScriptStruct *)local_1d0.DebugPtr,UserFacing);
      if (!bVar16) {
        local_198 = &local_1d0;
        `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_198);
      }
      FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_1c0.ObjectPtr);
      local_200.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&local_200,(FNiagaraTypeDefinition *)&local_1c0.ObjectPtr);
      local_1d8[0].RegisteredTypeIndex = local_200.RegisteredTypeIndex;
    }
    pFVar19 = FNiagaraTypeDefinitionHandle::Resolve(local_208);
    if ((((TObjectPtr<UObject>_u_0)(pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
        (pFVar19->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
       (pFVar19->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
      local_208[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_1fc,&FNiagaraTypeHelper::VectorDef);
      local_1fc.RegisteredTypeIndex = local_208[0].RegisteredTypeIndex;
    }
    pFVar19 = FNiagaraTypeDefinitionHandle::Resolve(local_208);
    local_1ec = FNiagaraTypeDefinition::GetSize(pFVar19);
    pFVar10 = local_190;
    iVar24 = local_1f8 * local_1ec;
    pFVar7 = (this_00->AllocatorInstance).Data;
    pFVar26 = (local_190->Variables).AllocatorInstance.Data;
    for (pFVar25 = pFVar26; pFVar25 != pFVar26 + (longlong)(local_190->Variables).ArrayNum * 0xc;
        pFVar25 = pFVar25 + 0xc) {
      if ((*(longlong *)pFVar25 == local_1e0) &&
         (*(int *)(pFVar25 + 8) == local_1d8[0].RegisteredTypeIndex)) {
        lVar18 = ((longlong)pFVar25 - (longlong)pFVar26) / 6 +
                 ((longlong)pFVar25 - (longlong)pFVar26 >> 0x3f);
        uVar31 = (int)(lVar18 >> 1) - (int)(lVar18 >> 0x3f);
        if (uVar31 != 0xffffffff) {
          iVar27 = (local_190->VariableLayouts).ArrayNum;
          uVar17 = 0;
          if ((int)uVar31 < iVar27) {
            uVar17 = ~uVar31 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_228 = (longlong)(int)uVar31;
            local_220 = (longlong)iVar27;
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar22 = (code *)swi(3);
              (*pcVar22)();
              return;
            }
          }
          TVar30.DebugPtr = (UObject *)0x0;
          pFVar26 = (pFVar10->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x20
          ;
          local_78 = (code *)0x0;
          plStack_50 = (longlong *)0x0;
          local_1f4 = (uint)*(ushort *)pFVar26;
          local_1e4 = (uint)*(ushort *)(pFVar26 + 2);
          local_1e8 = (uint)*(ushort *)(pFVar26 + 4);
          local_108 = &local_1c8;
          puStack_100 = &local_1f4;
          local_f8 = &local_1f0;
          piStack_f0 = &local_1ec;
          local_e8 = local_188;
          puStack_e0 = &local_1e8;
          local_d8 = &local_1e4;
          ppcStack_d0 = &local_a8;
          local_a8 = (code *)0x0;
          plStack_80 = (longlong *)0x0;
          plVar21 = FMemory::Malloc(0x48,8);
          plStack_50 = plStack_80;
          uVar15 = uStack_8c;
          uVar14 = uStack_90;
          uVar13 = uStack_94;
          uVar12 = local_98;
          uVar23 = uStack_a0;
          *plVar21 = (longlong)
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FNiagaraDataChannelGameData::AppendFromDataSet'::`6'::<lambda_1>,0,1>
                      ::_vftable_;
          plVar21[1] = (longlong)local_108;
          plVar21[2] = (longlong)puStack_100;
          plVar21[3] = (longlong)local_f8;
          plVar21[4] = (longlong)piStack_f0;
          plVar21[5] = (longlong)local_e8;
          plVar21[6] = (longlong)puStack_e0;
          plVar21[7] = (longlong)local_d8;
          plVar21[8] = (longlong)ppcStack_d0;
          pcVar22 = local_78;
          if (plVar21 + 1 != (longlong *)0x0) {
            pcVar22 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FNiagaraDataChannelGameData::AppendFromDataSet'::__l6::<lambda_1>,void,UScriptStruct_*,UScriptStruct_*,unsigned_char_*>
                      ::Call;
          }
          uVar8 = CONCAT44(uStack_84,local_88);
          uStack_a0 = uStack_70;
          local_88 = (undefined4)local_58;
          uStack_84 = local_58._4_4_;
          plStack_80 = plVar21;
          local_98 = local_68;
          uStack_94 = uStack_64;
          uStack_90 = uStack_60;
          uStack_8c = uStack_5c;
          local_78 = local_a8;
          uStack_70 = uVar23;
          local_68 = uVar12;
          uStack_64 = uVar13;
          uStack_60 = uVar14;
          uStack_5c = uVar15;
          local_58 = uVar8;
          bVar16 = local_a8 != (code *)0x0;
          local_a8 = pcVar22;
          if (bVar16) {
            plVar21 = (longlong *)&local_68;
            if (plStack_50 != (longlong *)0x0) {
              plVar21 = plStack_50;
            }
            (**(code **)(*plVar21 + 0x10))();
          }
          pFVar19 = FNiagaraTypeDefinitionHandle::Resolve(local_208);
          TVar33 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
          if ((pFVar19->UnderlyingType != 3) &&
             (TVar33.DebugPtr = TVar30.DebugPtr,
             (pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
            pUVar20 = Z_Construct_UClass_UStruct_NoRegister();
            bVar16 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar20);
            if (bVar16) {
              TVar33.DebugPtr = (pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr;
            }
          }
          if ((UScriptStruct *)TVar33.DebugPtr == (UScriptStruct *)0x0) {
LAB_1490cc333:
            TVar33.DebugPtr = TVar30.DebugPtr;
          }
          else {
            pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar27 = (int)pUVar20->_padding_;
            if ((*(int *)(*(longlong *)&(TVar33.DebugPtr)->field_0x10 + 0x38) < iVar27) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar33.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar27 * 8) != &pUVar20->_padding_)) goto LAB_1490cc333;
          }
          pFVar19 = FNiagaraTypeDefinitionHandle::Resolve(local_1d8);
          TVar30 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
          if (pFVar19->UnderlyingType != 3) {
            if ((pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
              pUVar20 = Z_Construct_UClass_UStruct_NoRegister();
              bVar16 = FObjectPtr::IsA((FObjectPtr *)pFVar19,pUVar20);
              if (bVar16) {
                TVar30.DebugPtr = (pFVar19->ClassStructOrEnum).field0_0x0.DebugPtr;
                goto LAB_1490cc374;
              }
            }
            TVar30.DebugPtr = (UObject *)0x0;
          }
LAB_1490cc374:
          if ((UScriptStruct *)TVar30.DebugPtr == (UScriptStruct *)0x0) {
LAB_1490cc39c:
            TVar30.DebugPtr = (UObject *)0x0;
          }
          else {
            pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar27 = (int)pUVar20->_padding_;
            if ((*(int *)(*(longlong *)&(TVar30.DebugPtr)->field_0x10 + 0x38) < iVar27) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar30.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar27 * 8) != &pUVar20->_padding_)) goto LAB_1490cc39c;
          }
          local_180 = pFVar7 + iVar24;
          local_178 = TVar33;
          local_170 = TVar30;
          UE::Core::Private::Function::CheckCallable(local_a8);
          pcVar22 = local_a8;
          plVar21 = (longlong *)&local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar21 = plStack_80;
          }
          uVar23 = (**(code **)(*plVar21 + 8))();
          (*pcVar22)(uVar23,&local_170,&local_178,&local_180);
          if (local_a8 != (code *)0x0) {
            plVar21 = (longlong *)&local_98;
            if (plStack_80 != (longlong *)0x0) {
              plVar21 = plStack_80;
            }
            (**(code **)(*plVar21 + 0x10))();
          }
        }
        break;
      }
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  } while( true );
}

// AppendFromGameData @ 1490cc490

void __thiscall
FNiagaraDataChannelGameData::AppendFromGameData
          (FNiagaraDataChannelGameData *this,FNiagaraDataChannelGameData *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  if (((this->LayoutInfo).Object != (param_1->LayoutInfo).Object) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLayoutInfo() == GameData.GetLayoutInfo()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelGameData.cpp"
                         ,0xfc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->NumElements = this->NumElements + param_1->NumElements;
  iVar1 = (param_1->VariableData).ArrayNum;
  pFVar3 = (param_1->VariableData).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = 0;
  pFVar8 = pFVar3;
  if (0 < iVar1) {
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->VariableData).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = pFVar8 + ((longlong)(this->VariableData).AllocatorInstance.Data - (longlong)pFVar3);
      if ((pFVar9 == pFVar8) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = *(int *)&pFVar8[8].field_0x0;
      if (iVar2 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (1,1,iVar2,(ForAnyElementType *)pFVar9,(int *)(pFVar9 + 8),
                           (int *)(pFVar9 + 0xc));
        memcpy((void *)(*(longlong *)&pFVar9->field_0x0 + (longlong)iVar7),
               *(void **)&pFVar8->field_0x0,(longlong)iVar2);
      }
      uVar10 = uVar10 + 1;
      pFVar8 = pFVar8 + 0x28;
    } while ((int)uVar10 < iVar1);
  }
  return;
}

// BeginFrame @ 1490cd6c0

void __thiscall FNiagaraDataChannelGameData::BeginFrame(FNiagaraDataChannelGameData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  bVar6 = ((this->LayoutInfo).Object)->bKeepPreviousFrameData;
  if (bVar6 == false) {
    iVar7 = 0;
  }
  else {
    iVar7 = this->NumElements;
  }
  this->PrevNumElements = iVar7;
  this->NumElements = 0;
  iVar7 = (this->VariableData).ArrayNum;
  pFVar8 = (this->VariableData).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar7 * 0x28;
  while( true ) {
    if ((this->VariableData).ArrayNum != iVar7) {
      `TCheckedPointerIterator<FNiagaraDataChannelVariableBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    if (bVar6 != false) {
      uVar4 = *(undefined8 *)&pFVar8->field_0x0;
      uVar5 = *(undefined8 *)&pFVar8[8].field_0x0;
      *(undefined8 *)&pFVar8->field_0x0 = *(undefined8 *)&pFVar8[0x10].field_0x0;
      *(undefined8 *)&pFVar8[8].field_0x0 = *(undefined8 *)&pFVar8[0x18].field_0x0;
      *(undefined8 *)&pFVar8[0x10].field_0x0 = uVar4;
      *(undefined8 *)&pFVar8[0x18].field_0x0 = uVar5;
    }
    iVar2 = *(int *)(pFVar8 + 0xc);
    *(undefined4 *)&pFVar8[8].field_0x0 = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)pFVar8,0,(int *)(pFVar8 + 0xc));
    }
    pFVar8 = pFVar8 + 0x28;
  }
  return;
}

// Empty @ 1490ef430

void __thiscall FNiagaraDataChannelGameData::Empty(FNiagaraDataChannelGameData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this->NumElements = 0;
  this->MaxElements = 0;
  this->PrevNumElements = 0;
  iVar2 = (this->VariableData).ArrayNum;
  pFVar4 = (this->VariableData).AllocatorInstance.Data;
  pFVar3 = pFVar4 + 0x1c;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->VariableData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraDataChannelVariableBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    *(undefined4 *)(pFVar3 + -4) = 0;
    if (*(int *)pFVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(pFVar3 + -0xc),0,(int *)pFVar3);
    }
    *(undefined4 *)(pFVar3 + -0x14) = 0;
    if (*(int *)(pFVar3 + -0x10) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)pFVar4,0,(int *)(pFVar3 + -0x10));
    }
    pFVar4 = pFVar4 + 0x28;
    pFVar3 = pFVar3 + 0x28;
  }
  return;
}

// FindVariableBuffer @ 1490fa360

/* WARNING: Type propagation algorithm not settling */

FNiagaraDataChannelVariableBuffer * __thiscall
FNiagaraDataChannelGameData::FindVariableBuffer
          (FNiagaraDataChannelGameData *this,FNiagaraVariableBase *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  FNiagaraDataChannelLayoutInfo *pFVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FNiagaraDataChannelVariableBuffer *pFVar11;
  FNiagaraTypeDefinition *pFVar12;
  FNiagaraTypeDefinition *pFVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if (((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FNiagaraDataChannelVariableBuffer *)(*pcVar7)();
    return pFVar11;
  }
  pFVar5 = (this->LayoutInfo).Object;
  pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
  puVar1 = &(pFVar5->GameDataLayout).VariableIndices.field_0x10;
  iVar4 = *(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x28;
  iVar16 = 0;
  uVar9 = 1;
  iVar18 = 0;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(pFVar5->GameDataLayout).VariableIndices.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar15 = *puVar19;
    iVar18 = 0;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar16;
      iVar18 = iVar18 + 0x20;
      iVar16 = iVar16 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1490fa44d;
      uVar15 = puVar19[lVar14 + 1];
    }
    uVar9 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    iVar10 = iVar18 + -1 + local_res20;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_1490fa44d:
  uVar15 = *(uint *)&(pFVar5->GameDataLayout).VariableIndices.field_0x28;
  uVar20 = uVar15 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar9,iVar16);
  TStack_98.CurrentBitIndex = iVar10;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = iVar18;
  uStack_78 = CONCAT44(uStack_a4,
                       *(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x8 -
                       *(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FNiagaraDataChannelVariableBuffer *)(*pcVar7)();
    return pFVar11;
  }
  uVar9 = *(uint *)&(pFVar5->GameDataLayout).VariableIndices.field_0x28;
  if (uVar15 != uVar9) {
    puVar17 = *(undefined1 **)&(pFVar5->GameDataLayout).VariableIndices.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1490fa560;
      uVar15 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = (int)lVar14 + -1 + uVar20;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_1490fa560:
  while( true ) {
    if (*(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x8 -
        *(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x34 != (int)uStack_78) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_98.CurrentBitIndex == uVar15) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return (FNiagaraDataChannelVariableBuffer *)0x0;
    }
    pFVar2 = (FName *)(*(longlong *)&(pFVar5->GameDataLayout).VariableIndices +
                      (longlong)TStack_98.CurrentBitIndex * 0x18);
    pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar2 + 1));
    uVar9 = pFVar2[1].Number;
    if ((param_1->Name == *pFVar2) &&
       ((((TVar6.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr
          , TVar6.DebugPtr == (pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr &&
          (pFVar12->UnderlyingType == pFVar13->UnderlyingType)) &&
         (pFVar12->Flags == pFVar13->Flags)) ||
        ((((pFVar13->UnderlyingType == 3 &&
           ((TObjectPtr<UObject>_u_0)TVar6.DebugPtr ==
            FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0)) &&
          (pFVar12->UnderlyingType == FNiagaraTypeDefinition::IntDef.UnderlyingType)) &&
         (pFVar12->Flags == FNiagaraTypeDefinition::IntDef.Flags)))))) break;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  uVar15 = 0;
  if ((int)uVar9 < (this->VariableData).ArrayNum) {
    uVar15 = ~uVar9 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar11 = (FNiagaraDataChannelVariableBuffer *)(*pcVar7)();
    return pFVar11;
  }
  return (FNiagaraDataChannelVariableBuffer *)
         ((this->VariableData).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x28);
}

// Init @ 149113610

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FNiagaraDataChannelGameData::Init
          (FNiagaraDataChannelGameData *this,TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *param_1)

{
  TArray<FNiagaraDataChannelVariableBuffer,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  TReferenceControllerBase<1> *pTVar5;
  FNiagaraDataChannelLayoutInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FNiagaraTypeDefinition *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  FNiagaraDataChannelGameDataLayout *local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FNiagaraDataChannelLayoutInfo *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined4 local_4c;
  
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar6 = param_1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->LayoutInfo).Object;
  pTStack_70 = (this->LayoutInfo).SharedReferenceCount.ReferenceController;
  (this->LayoutInfo).Object = pFVar6;
  (this->LayoutInfo).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  if (((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar6 = (this->LayoutInfo).Object;
  this_00 = &this->VariableData;
  piVar3 = &(this->VariableData).ArrayNum;
  local_res20 = &pFVar6->GameDataLayout;
  DestructItems<FNiagaraDataChannelVariableBuffer,int>
            ((FNiagaraDataChannelVariableBuffer *)(this_00->AllocatorInstance).Data,
             (this->VariableData).ArrayNum);
  piVar4 = &(this->VariableData).ArrayMax;
  *piVar3 = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&this_00->AllocatorInstance,0,piVar4);
  }
  uVar15 = *(int *)&(pFVar6->GameDataLayout).VariableIndices.field_0x8 -
           *(int *)&(pFVar6->GameDataLayout).VariableIndices.field_0x34;
  iVar12 = *piVar3;
  if (iVar12 < (int)uVar15) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,uVar15 - iVar12,&this_00->AllocatorInstance,piVar3,piVar4);
    DefaultConstructItems<FNiagaraDataChannelVariableBuffer,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar10 * 0x28,uVar15 - iVar12);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar12) {
      uVar17 = iVar12 - uVar15;
      if (((int)(uVar15 | uVar17) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar17 != 0) {
        TArray<FNiagaraDataChannelVariableBuffer,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,uVar15,uVar17);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,&this_00->AllocatorInstance,*piVar3,piVar4);
      }
    }
  }
  iVar10 = 0;
  puVar1 = &(pFVar6->GameDataLayout).VariableIndices.field_0x10;
  iVar19 = 0;
  iVar12 = *(int *)&(pFVar6->GameDataLayout).VariableIndices.field_0x28;
  uVar15 = 1;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar20 = *(uint **)&(pFVar6->GameDataLayout).VariableIndices.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar17 = *puVar20;
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar10;
      iVar19 = iVar19 + 0x20;
      iVar10 = iVar10 + 1;
      iVar11 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14911383d;
      uVar17 = puVar20[lVar14 + 1];
    }
    uVar15 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iVar11 = iVar19 + -1 + local_res10;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_14911383d:
  uVar17 = *(uint *)&(pFVar6->GameDataLayout).VariableIndices.field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar15,iVar10);
  TStack_a0.CurrentBitIndex = iVar11;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar17 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar19;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(pFVar6->GameDataLayout).VariableIndices.field_0x8 -
                       *(int *)&(pFVar6->GameDataLayout).VariableIndices.field_0x34);
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar15 = *(uint *)&(pFVar6->GameDataLayout).VariableIndices.field_0x28;
  if (uVar17 != uVar15) {
    puVar18 = *(undefined1 **)&(pFVar6->GameDataLayout).VariableIndices.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar10 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar17 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_149113950;
      uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar17 = local_res18 + -1 + uVar16;
    if ((int)uVar15 < (int)uVar17) {
      uVar17 = uVar15;
    }
  }
LAB_149113950:
  while( true ) {
    if (*(int *)&(pFVar6->GameDataLayout).VariableIndices.field_0x8 -
        *(int *)&(pFVar6->GameDataLayout).VariableIndices.field_0x34 != (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar17) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (&pFVar6->GameDataLayout == local_res20)) {
      return;
    }
    lVar14 = *(longlong *)&(pFVar6->GameDataLayout).VariableIndices;
    uVar15 = *(uint *)(lVar14 + 0xc + (longlong)TStack_a0.CurrentBitIndex * 0x18);
    lVar14 = lVar14 + (longlong)TStack_a0.CurrentBitIndex * 0x18;
    uVar16 = 0;
    if ((int)uVar15 < *piVar3) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    pFVar7 = (this_00->AllocatorInstance).Data;
    pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(lVar14 + 8));
    if ((((TObjectPtr<UObject>_u_0)(pFVar13->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
        (pFVar13->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
       (pFVar13->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
      pFVar13 = &FNiagaraTypeHelper::VectorDef;
    }
    else {
      pFVar13 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(lVar14 + 8));
    }
    iVar12 = FNiagaraTypeDefinition::GetSize(pFVar13);
    *(int *)(pFVar7 + (longlong)(int)uVar15 * 0x28 + 0x20) = iVar12;
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// Reserve @ 14912b200

void __thiscall FNiagaraDataChannelGameData::Reserve(FNiagaraDataChannelGameData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  iVar2 = this->MaxElements;
  if (this->MaxElements < param_1) {
    iVar2 = param_1;
  }
  this->MaxElements = iVar2;
  pFVar4 = (this->VariableData).AllocatorInstance.Data;
  iVar2 = (this->VariableData).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->VariableData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraDataChannelVariableBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    uVar3 = param_1 * *(int *)&pFVar4[0x20].field_0x0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*(int *)(pFVar4 + 0xc) < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,(ForAnyElementType *)pFVar4,*(int *)&pFVar4[8].field_0x0,
                 (int *)(pFVar4 + 0xc));
    }
    pFVar4 = pFVar4 + 0x28;
  }
  return;
}

// Reset @ 14912b7c0

void __thiscall FNiagaraDataChannelGameData::Reset(FNiagaraDataChannelGameData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->NumElements = 0;
  this->PrevNumElements = 0;
  iVar2 = (this->VariableData).ArrayNum;
  pFVar5 = (this->VariableData).AllocatorInstance.Data;
  pFVar4 = pFVar5 + 0x18;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->VariableData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraDataChannelVariableBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    *(undefined4 *)&pFVar4->field_0x0 = 0;
    if (*(int *)(pFVar4 + 4) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(pFVar4 + -8),0,(int *)(pFVar4 + 4));
    }
    iVar3 = *(int *)(pFVar4 + -0xc);
    *(undefined4 *)&pFVar4[-0x10].field_0x0 = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)pFVar5,0,(int *)(pFVar4 + -0xc));
    }
    pFVar5 = pFVar5 + 0x28;
    pFVar4 = pFVar4 + 0x28;
  }
  return;
}

// SetFromSimCache @ 14912d4d0

void __thiscall
FNiagaraDataChannelGameData::SetFromSimCache
          (FNiagaraDataChannelGameData *this,FNiagaraVariableBase *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar7 = (uint *)TMapBase<FNiagaraVariableBase,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>_>
                   ::Find((TMapBase<FNiagaraVariableBase,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>_>
                           *)&((this->LayoutInfo).Object)->GameDataLayout,param_1);
  if (puVar7 != (uint *)0x0) {
    uVar1 = *puVar7;
    uVar6 = 0;
    if ((int)uVar1 < (this->VariableData).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(int *)((this->VariableData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x28 + 0x20)
        == param_3) {
      uVar1 = *puVar7;
      uVar6 = 0;
      if ((int)uVar1 < (this->VariableData).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (this->VariableData).AllocatorInstance.Data;
      iVar2 = param_2->ArrayNum;
      *(int *)(pFVar3 + (longlong)(int)uVar1 * 0x28 + 8) = iVar2;
      pFVar3 = pFVar3 + (longlong)(int)uVar1 * 0x28;
      if ((iVar2 == 0) && (*(int *)(pFVar3 + 0xc) == 0)) {
        *(int *)(pFVar3 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar2,*(int *)(pFVar3 + 0xc),(ForAnyElementType *)pFVar3,iVar2,
                   (int *)(pFVar3 + 0xc));
        if (iVar2 != 0) {
          memcpy(*(FScriptContainerElement **)&pFVar3->field_0x0,param_2->DataPtr,(longlong)iVar2);
        }
      }
    }
  }
  return;
}

// SetNum @ 149130930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FNiagaraDataChannelGameData::SetNum(FNiagaraDataChannelGameData *this,int param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  undefined1 local_res10 [8];
  
  this->NumElements = param_1;
  iVar2 = this->MaxElements;
  if (this->MaxElements < param_1) {
    iVar2 = param_1;
  }
  this->MaxElements = iVar2;
  this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
            (this->VariableData).AllocatorInstance.Data;
  iVar2 = (this->VariableData).ArrayNum;
  pTVar1 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
           ((longlong)this_00 + (longlong)iVar2 * 0x28);
  while( true ) {
    if ((this->VariableData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraDataChannelVariableBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_00 == pTVar1) break;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (this_00,param_1 * *(int *)&this_00[2].AllocatorInstance.Data,Default);
    this_00 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this_00[2].ArrayNum;
  }
  return;
}

// WriteToDataSet @ 14914b910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelGameData::WriteToDataSet
          (FNiagaraDataChannelGameData *this,FNiagaraDataBuffer *param_1,int param_2,
          TVector<float> *param_3)

{
  ulonglong uVar1;
  int iVar2;
  FNiagaraDataSet *pFVar3;
  FNiagaraDataSetCompiledData *pFVar4;
  FNiagaraDataChannelLayoutInfo *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  FNiagaraDataBuffer *pFVar8;
  FNiagaraDataChannelGameDataLayout *pFVar9;
  FNiagaraDataChannelGameData *pFVar10;
  FNiagaraDataChannelGameDataLayout *pFVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  uint uVar18;
  longlong lVar19;
  FNiagaraTypeDefinition *pFVar20;
  UClass *pUVar21;
  longlong *plVar22;
  code *pcVar23;
  undefined8 uVar24;
  FString *pFVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  int iVar29;
  UScriptStruct *pUVar30;
  TObjectPtr<UObject>_u_0 TVar31;
  uint uVar32;
  TObjectPtr<UObject>_u_0 TVar33;
  wchar_t *pwVar34;
  ForElementType<unsigned_int> FVar35;
  uint *puVar36;
  wchar_t *pwVar37;
  int local_res18 [2];
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  undefined1 local_258 [8];
  ForElementType<unsigned_int> local_250;
  longlong local_248;
  FNiagaraTypeDefinitionHandle local_240 [2];
  longlong local_238;
  FNiagaraTypeDefinitionHandle local_230 [2];
  FNiagaraTypeDefinitionHandle local_228;
  FNiagaraTypeDefinitionHandle local_224;
  uint local_220;
  int local_21c;
  int local_218;
  uint local_214;
  uint local_210 [2];
  TObjectPtr<UObject>_u_0 local_208;
  FNiagaraDataBuffer *local_200;
  TObjectPtr<UObject>_u_0 local_1f8;
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined8 local_1ec;
  undefined4 local_1e4;
  int local_1e0;
  int local_1dc;
  FNiagaraDataChannelGameDataLayout *local_1d8;
  FNiagaraDataChannelGameData *local_1d0;
  TObjectPtr<UObject>_u_0 *local_1c8;
  TVector<float> *local_1c0;
  undefined8 local_1b8;
  TObjectPtr<UObject>_u_0 local_1b0;
  TObjectPtr<UObject>_u_0 local_1a8;
  FNiagaraDataChannelGameDataLayout *local_1a0;
  int iStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  int iStack_184;
  int local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  FNiagaraDataChannelGameDataLayout *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FNiagaraDataBuffer **local_140;
  uint *puStack_138;
  int *local_130;
  int *piStack_128;
  int *local_120;
  TVector<float> *pTStack_118;
  uint *local_110;
  uint *puStack_108;
  code **local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8 [2];
  undefined4 local_ac;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_288;
  pwVar37 = L"";
  pFVar3 = param_1->Owner;
  local_res18[0] = param_2;
  local_200 = param_1;
  local_1d0 = this;
  local_1c0 = param_3;
  if (((pFVar3->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompiledData.Get() != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x169,L""), bVar17)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  pFVar4 = (pFVar3->CompiledData).StructPtr;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FNiagaraDataChannelGameData::WriteToDataSet'::__l2::
           _dynamic_atexit_destructor_for__LWCConversionBuffer__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar8 = local_200;
  local_21c = this->NumElements;
  if (local_21c == 0) {
    return;
  }
  uVar28 = local_res18[0] + local_21c;
  if ((local_200->NumInstancesAllocated < uVar28) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNumInstances <= NumInstancesAllocated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x9c,L""), bVar17)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  pFVar8->NumInstances = uVar28;
  if (((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  pFVar5 = (this->LayoutInfo).Object;
  iStack_198 = 0;
  local_1d8 = &pFVar5->GameDataLayout;
  iVar2 = *(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x28;
  local_250 = (ForElementType<unsigned_int>)&(pFVar5->GameDataLayout).VariableIndices.field_0x10;
  local_180 = 0;
  uStack_194 = 1;
  iStack_184 = 0;
  if (iVar2 != 0) {
    puVar36 = *(uint **)&(pFVar5->GameDataLayout).VariableIndices.field_0x20;
    if (puVar36 == (uint *)0x0) {
      puVar36 = (uint *)local_250;
    }
    uVar28 = *puVar36;
    while (uVar28 == 0) {
      iStack_198 = iStack_198 + 1;
      local_180 = local_180 + 0x20;
      iStack_184 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_198) goto LAB_14914bad4;
      uVar28 = puVar36[iStack_198];
    }
    uStack_194 = ~(uVar28 - 1) & uVar28;
    uVar1 = (ulonglong)uStack_194 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1e0 = (int)lVar19;
    iStack_184 = local_1e0 + -1 + local_180;
    if (iVar2 < iStack_184) {
      iStack_184 = iVar2;
    }
  }
LAB_14914bad4:
  uVar28 = *(uint *)&(pFVar5->GameDataLayout).VariableIndices.field_0x28;
  uStack_17c = local_ac;
  uVar32 = uVar28 & 0xffffffe0;
  iStack_178 = *(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x8 -
               *(int *)&(pFVar5->GameDataLayout).VariableIndices.field_0x34;
  TStack_168._padding_ = CONCAT44(uStack_194,iStack_198);
  uStack_188 = 0xffffffff;
  TStack_168.CurrentBitIndex = iStack_184;
  TStack_168.UnvisitedBitMask = 0xffffffff;
  iVar29 = (int)uVar28 >> 5;
  TStack_168._28_4_ = local_ac;
  TStack_168.BaseBitIndex = local_180;
  uStack_148 = CONCAT44(uStack_174,iStack_178);
  local_1a0 = local_1d8;
  local_190 = (undefined1 *)local_250;
  local_170 = local_1d8;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_250;
  if ((((int)uVar28 < 0) || (iVar2 < (int)uVar28)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  pFVar9 = local_1d8;
  uVar18 = *(int *)((longlong)local_250 + 0x18);
  if (uVar28 != uVar18) {
    FVar35 = local_250;
    if (*(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar35 = *(ForElementType<unsigned_int> *)((longlong)local_250 + 0x10);
    }
    uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)((longlong)FVar35 + (longlong)iVar29 * 4);
    while (uVar28 == 0) {
      iVar29 = iVar29 + 1;
      uVar32 = uVar32 + 0x20;
      uVar28 = uVar18;
      if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar29)
      goto LAB_14914bbe0;
      uVar28 = *(uint *)((longlong)FVar35 + (longlong)iVar29 * 4);
    }
    uVar1 = (ulonglong)(~(uVar28 - 1) & uVar28) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_1dc = (int)lVar19;
    uVar28 = local_1dc + -1 + uVar32;
    if ((int)uVar18 < (int)uVar28) {
      uVar28 = uVar18;
    }
  }
LAB_14914bbe0:
  do {
    pFVar11 = local_170;
    if (*(int *)&(local_170->VariableIndices).field_0x8 -
        *(int *)&(local_170->VariableIndices).field_0x34 != (int)uStack_148) {
      local_258[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
    }
    pFVar10 = local_1d0;
    lVar19 = (longlong)TStack_168.CurrentBitIndex;
    if (((TStack_168.CurrentBitIndex == uVar28) &&
        ((ForElementType<unsigned_int>)TStack_168.Array == local_250)) && (pFVar11 == pFVar9)) {
      return;
    }
    lVar6 = *(longlong *)&pFVar11->VariableIndices;
    uVar32 = *(uint *)(lVar6 + 0xc + lVar19 * 0x18);
    local_240[0].RegisteredTypeIndex = *(int *)(lVar6 + 8 + lVar19 * 0x18);
    local_248 = *(longlong *)(lVar6 + lVar19 * 0x18);
    iVar2 = (local_1d0->VariableData).ArrayNum;
    uVar18 = 0;
    if ((int)uVar32 < iVar2) {
      uVar18 = ~uVar32 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (local_268 = (longlong)(int)uVar32, local_260 = (longlong)iVar2,
       bVar17 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    uVar24 = *(undefined8 *)
              ((pFVar10->VariableData).AllocatorInstance.Data + (longlong)(int)uVar32 * 0x28);
    local_230[0].RegisteredTypeIndex = local_240[0].RegisteredTypeIndex;
    local_238 = local_248;
    pFVar20 = FNiagaraTypeDefinitionHandle::Resolve(local_240);
    bVar17 = FNiagaraTypeHelper::IsLWCType(pFVar20);
    if (bVar17) {
      pFVar20 = FNiagaraTypeDefinitionHandle::Resolve(local_240);
      pUVar30 = FNiagaraTypeDefinition::IntStruct;
      if (pFVar20->UnderlyingType != 3) {
        if ((pFVar20->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          pUVar21 = Z_Construct_UClass_UStruct_NoRegister();
          bVar17 = FObjectPtr::IsA((FObjectPtr *)pFVar20,pUVar21);
          if (bVar17) {
            pUVar30 = (UScriptStruct *)(pFVar20->ClassStructOrEnum).field0_0x0.DebugPtr;
            goto LAB_14914bcff;
          }
        }
        pUVar30 = (UScriptStruct *)0x0;
      }
LAB_14914bcff:
      if (pUVar30 == (UScriptStruct *)0x0) {
        pFVar25 = GetTypeName<UScriptStruct>(local_d8);
        if ((pFVar25->Data).ArrayNum != 0) {
          pwVar37 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar37);
      }
      pUVar21 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar2 = (int)pUVar21->_padding_;
      if ((*(int *)(pUVar30->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar30->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar21->_padding_)) {
        pFVar25 = GetTypeName<UScriptStruct>(&local_f8);
        if ((pFVar25->Data).ArrayNum == 0) {
          pwVar34 = L"";
        }
        else {
          pwVar34 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
        pFVar25 = GetFullNameForCastLogError<UStruct>(&local_e8,(UStruct *)pUVar30);
        if ((pFVar25->Data).ArrayNum != 0) {
          pwVar37 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar37,pwVar34);
      }
      local_208.DebugPtr =
           (UObject *)FNiagaraTypeHelper::FindNiagaraFriendlyTopLevelStruct(pUVar30,Simulation);
      local_1f8.DebugPtr = local_208.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UScriptStruct *)local_208.DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable(local_208.DebugPtr);
      }
      local_1ee = 0;
      local_1f0 = 2;
      local_1ec = 0xffffffffffffffff;
      local_1e4 = 0xffffffff;
      bVar17 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                         ((UScriptStruct *)local_208.DebugPtr,UserFacing);
      if (!bVar17) {
        local_1c8 = &local_208;
        `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_1c8);
      }
      FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_1f8.ObjectPtr);
      local_230[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&local_228,(FNiagaraTypeDefinition *)&local_1f8.ObjectPtr);
      local_228.RegisteredTypeIndex = local_230[0].RegisteredTypeIndex;
    }
    pFVar20 = FNiagaraTypeDefinitionHandle::Resolve(local_240);
    if ((((TObjectPtr<UObject>_u_0)(pFVar20->ClassStructOrEnum).field0_0x0.DebugPtr ==
          FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
        (pFVar20->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType)) &&
       (pFVar20->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
      local_240[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_224,&FNiagaraTypeHelper::VectorDef);
      local_224.RegisteredTypeIndex = local_240[0].RegisteredTypeIndex;
    }
    pFVar27 = (pFVar4->Variables).AllocatorInstance.Data;
    for (pFVar26 = pFVar27; pFVar26 != pFVar27 + (longlong)(pFVar4->Variables).ArrayNum * 0xc;
        pFVar26 = pFVar26 + 0xc) {
      if ((*(longlong *)pFVar26 == local_238) &&
         (*(int *)(pFVar26 + 8) == local_230[0].RegisteredTypeIndex)) {
        lVar19 = ((longlong)pFVar26 - (longlong)pFVar27) / 6 +
                 ((longlong)pFVar26 - (longlong)pFVar27 >> 0x3f);
        uVar32 = (int)(lVar19 >> 1) - (int)(lVar19 >> 0x3f);
        if (uVar32 != 0xffffffff) {
          pFVar20 = FNiagaraTypeDefinitionHandle::Resolve(local_240);
          local_218 = FNiagaraTypeDefinition::GetSize(pFVar20);
          pFVar20 = FNiagaraTypeDefinitionHandle::Resolve(local_230);
          FNiagaraTypeDefinition::GetSize(pFVar20);
          iVar2 = (pFVar4->VariableLayouts).ArrayNum;
          uVar18 = 0;
          if ((int)uVar32 < iVar2) {
            uVar18 = ~uVar32 >> 0x1f;
          }
          if (uVar18 == 0) {
            local_268 = (longlong)(int)uVar32;
            local_260 = (longlong)iVar2;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar23 = (code *)swi(3);
              (*pcVar23)();
              return;
            }
          }
          TVar31.DebugPtr = (UObject *)0x0;
          pFVar27 = (pFVar4->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar32 * 0x20;
          local_78 = (code *)0x0;
          plStack_50 = (longlong *)0x0;
          local_220 = (uint)*(ushort *)pFVar27;
          local_210[0] = (uint)*(ushort *)(pFVar27 + 2);
          local_214 = (uint)*(ushort *)(pFVar27 + 4);
          local_140 = &local_200;
          puStack_138 = &local_220;
          local_130 = local_res18;
          piStack_128 = &local_21c;
          local_120 = &local_218;
          pTStack_118 = local_1c0;
          local_110 = &local_214;
          puStack_108 = local_210;
          local_100 = &local_a8;
          local_a8 = (code *)0x0;
          plStack_80 = (longlong *)0x0;
          plVar22 = FMemory::Malloc(0x50,8);
          plStack_50 = plStack_80;
          uVar16 = uStack_8c;
          uVar15 = uStack_90;
          uVar14 = uStack_94;
          uVar13 = local_98;
          uVar12 = uStack_a0;
          *plVar22 = (longlong)
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<`FNiagaraDataChannelGameData::WriteToDataSet'::`9'::<lambda_1>,0,1>
                      ::_vftable_;
          plVar22[1] = (longlong)local_140;
          plVar22[2] = (longlong)puStack_138;
          plVar22[3] = (longlong)local_130;
          plVar22[4] = (longlong)piStack_128;
          plVar22[5] = (longlong)local_120;
          plVar22[6] = (longlong)pTStack_118;
          plVar22[7] = (longlong)local_110;
          plVar22[8] = (longlong)puStack_108;
          plVar22[9] = (longlong)local_100;
          pcVar23 = local_78;
          if (plVar22 + 1 != (longlong *)0x0) {
            pcVar23 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FNiagaraDataChannelGameData::WriteToDataSet'::__l9::<lambda_1>,void,UScriptStruct_*,UScriptStruct_*,unsigned_char_*>
                      ::Call;
          }
          uVar7 = CONCAT44(uStack_84,local_88);
          uStack_a0 = uStack_70;
          local_88 = (undefined4)local_58;
          uStack_84 = local_58._4_4_;
          plStack_80 = plVar22;
          local_98 = local_68;
          uStack_94 = uStack_64;
          uStack_90 = uStack_60;
          uStack_8c = uStack_5c;
          local_78 = local_a8;
          uStack_70 = uVar12;
          local_68 = uVar13;
          uStack_64 = uVar14;
          uStack_60 = uVar15;
          uStack_5c = uVar16;
          local_58 = uVar7;
          bVar17 = local_a8 != (code *)0x0;
          local_a8 = pcVar23;
          if (bVar17) {
            plVar22 = (longlong *)&local_68;
            if (plStack_50 != (longlong *)0x0) {
              plVar22 = plStack_50;
            }
            (**(code **)(*plVar22 + 0x10))();
          }
          pFVar20 = FNiagaraTypeDefinitionHandle::Resolve(local_230);
          TVar33 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
          if ((pFVar20->UnderlyingType != 3) &&
             (TVar33.DebugPtr = TVar31.DebugPtr,
             (pFVar20->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
            pUVar21 = Z_Construct_UClass_UStruct_NoRegister();
            bVar17 = FObjectPtr::IsA((FObjectPtr *)pFVar20,pUVar21);
            if (bVar17) {
              TVar33.DebugPtr = (pFVar20->ClassStructOrEnum).field0_0x0.DebugPtr;
            }
          }
          if ((UScriptStruct *)TVar33.DebugPtr == (UScriptStruct *)0x0) {
LAB_14914c0bf:
            TVar33.DebugPtr = TVar31.DebugPtr;
          }
          else {
            pUVar21 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar2 = (int)pUVar21->_padding_;
            if ((*(int *)(*(longlong *)&(TVar33.DebugPtr)->field_0x10 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar33.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar2 * 8) != &pUVar21->_padding_)) goto LAB_14914c0bf;
          }
          pFVar20 = FNiagaraTypeDefinitionHandle::Resolve(local_240);
          TVar31 = (TObjectPtr<UObject>_u_0)FNiagaraTypeDefinition::IntStruct;
          if (pFVar20->UnderlyingType != 3) {
            if ((pFVar20->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
              pUVar21 = Z_Construct_UClass_UStruct_NoRegister();
              bVar17 = FObjectPtr::IsA((FObjectPtr *)pFVar20,pUVar21);
              if (bVar17) {
                TVar31.DebugPtr = (pFVar20->ClassStructOrEnum).field0_0x0.DebugPtr;
                goto LAB_14914c100;
              }
            }
            TVar31.DebugPtr = (UObject *)0x0;
          }
LAB_14914c100:
          if ((UScriptStruct *)TVar31.DebugPtr == (UScriptStruct *)0x0) {
LAB_14914c128:
            TVar31.DebugPtr = (UObject *)0x0;
          }
          else {
            pUVar21 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar2 = (int)pUVar21->_padding_;
            if ((*(int *)(*(longlong *)&(TVar31.DebugPtr)->field_0x10 + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar31.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar2 * 8) != &pUVar21->_padding_)) goto LAB_14914c128;
          }
          local_1b8 = uVar24;
          local_1b0 = TVar33;
          local_1a8 = TVar31;
          UE::Core::Private::Function::CheckCallable(local_a8);
          pcVar23 = local_a8;
          plVar22 = (longlong *)&local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar22 = plStack_80;
          }
          uVar24 = (**(code **)(*plVar22 + 8))();
          (*pcVar23)(uVar24,&local_1a8,&local_1b0,&local_1b8);
          if (local_a8 != (code *)0x0) {
            plVar22 = (longlong *)&local_98;
            if (plStack_80 != (longlong *)0x0) {
              plVar22 = plStack_80;
            }
            (**(code **)(*plVar22 + 0x10))();
          }
        }
        break;
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

