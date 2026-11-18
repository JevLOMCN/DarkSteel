// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_> @ 1468e00c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001468e02f4) */
/* WARNING: Removing unreachable block (ram,0x0001468e02fa) */
/* WARNING: Removing unreachable block (ram,0x0001468e02ff) */
/* WARNING: Removing unreachable block (ram,0x0001468e0311) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar8;
  byte bVar9;
  undefined8 *****pppppuVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined8 ****local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 ****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_28 = local_28 & 0xfc;
  local_68 = FMemory::Malloc(0xf8,8);
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00_01_02_03_04_05_06_07_08__U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___34_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___34_U634_U634_U634_U634_U634_U634_UFAdd_34__MovieScene_UE__6B_
  ;
  Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
  ::
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)(pppppuVar10 + 1),
             (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::FAdd>
              *)&param_1->field_0x8);
  *(undefined1 *)(pppppuVar10 + 0x1e) = param_1->field_0xf0;
  *pppppuVar10 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAdd_UFMovieScenePropertyBinding___MovieScene_UE__U__TAddConditional_UFGuid___23_U__TAddConditional_UFSourceFloatChannel_MovieScene_UE___23_U523_U523_U523_U523_U523_U523_UFAdd_23__MovieScene_UE__6B_
  ;
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar10 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar10 = (undefined8 *****)local_68;
  }
  if (((local_28 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pppppuVar7 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar7 = (undefined8 *****)local_68;
  }
  if ((pppppuVar10 != pppppuVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar8 = FVar3;
  }
  if ((ulonglong)FVar8 <= &local_68) {
    lVar11 = (longlong)(this->Builders).ArrayMax;
    FVar8 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar8 = FVar3;
    }
    if (&local_68 < (undefined8 *****)((longlong)FVar8 + lVar11 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar3;
      }
      local_98 = &local_68;
      local_88 = lVar11;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  iVar6 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar6 + 1;
  FVar3 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar3;
  }
  puVar2 = (undefined8 *)((longlong)this + (longlong)iVar6 * 0x48);
  bVar9 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar6 * 0x48] & 0xfe;
  *(byte *)(puVar2 + 8) = bVar9 | 2;
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar2 + 8) = bVar9 | 3;
    *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) ^ (local_28 & 0xfe ^ *(byte *)(puVar2 + 8)) & 2;
    *puVar2 = local_68;
    puVar2[1] = uStack_60;
    puVar2[2] = local_58;
    puVar2[3] = uStack_50;
    *(undefined4 *)(puVar2 + 4) = local_48;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_44;
    *(undefined4 *)(puVar2 + 5) = uStack_40;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_3c;
    *(undefined4 *)(puVar2 + 6) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_34;
    *(undefined4 *)(puVar2 + 7) = uStack_30;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_2c;
  }
  return;
}

// AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>_> @ 1468e0340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001468e058b) */
/* WARNING: Removing unreachable block (ram,0x0001468e0591) */
/* WARNING: Removing unreachable block (ram,0x0001468e0596) */
/* WARNING: Removing unreachable block (ram,0x0001468e05a8) */

void __thiscall
UE::MovieScene::FImportedEntity::
AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>_>
          (FImportedEntity *this,
          TEntityBuilder<UE::MovieScene::TAdd<UE::MovieScene::FWidgetMaterialPath>,UE::MovieScene::FAddConditional>
          *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *****pppppuVar8;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> FVar9;
  byte bVar10;
  undefined8 *****pppppuVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined8 ****local_98;
  ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 ****local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_28 = local_28 & 0xfc;
  local_68 = FMemory::Malloc(0x48,8);
  pppppuVar11 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar11 = (undefined8 *****)local_68;
  }
  local_28 = local_28 | 1;
  *pppppuVar11 = (undefined8 ****)
                 &
                 ___7__TEntityBuilderImpl_U__TIntegerSequence_H_0A__00__U__TAdd_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__UFAddConditional_34__MovieScene_UE__6B_
  ;
  *(undefined2 *)(pppppuVar11 + 1) = *(undefined2 *)&param_1->field_0x8;
  *(undefined1 *)(pppppuVar11 + 6) = 0;
  cVar3 = param_1->field_0x30;
  *(char *)(pppppuVar11 + 6) = cVar3;
  if (cVar3 != '\0') {
    FWidgetMaterialPath::FWidgetMaterialPath
              ((FWidgetMaterialPath *)(pppppuVar11 + 2),(FWidgetMaterialPath *)&param_1->field_0x10)
    ;
  }
  *(undefined4 *)(pppppuVar11 + 7) = *(undefined4 *)&param_1->field_0x38;
  *(undefined1 *)(pppppuVar11 + 8) = param_1->field_0x40;
  *pppppuVar11 = (undefined8 ****)
                 &
                 ___7__TEntityBuilder_U__TAdd_UFWidgetMaterialPath_MovieScene_UE___MovieScene_UE__UFAddConditional_23__MovieScene_UE__6B_
  ;
  if (((local_28 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pppppuVar11 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar11 = (undefined8 *****)local_68;
  }
  if (((local_28 & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pppppuVar8 = &local_68;
  if ((local_28 & 2) == 0) {
    pppppuVar8 = (undefined8 *****)local_68;
  }
  if ((pppppuVar11 != pppppuVar8) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0xce,L"TInlineValue cannot operate with multiple inheritance objects."),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar4 = (this->Builders).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
  if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    FVar9 = FVar4;
  }
  if ((ulonglong)FVar9 <= &local_68) {
    lVar12 = (longlong)(this->Builders).ArrayMax;
    FVar9 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
    if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
      FVar9 = FVar4;
    }
    if (&local_68 < (undefined8 *****)((longlong)FVar9 + lVar12 * 0x48)) {
      local_80 = (longlong)(this->Builders).ArrayNum;
      local_78 = 0x48;
      local_90 = (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)this;
      if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
        local_90 = FVar4;
      }
      local_98 = &local_68;
      local_88 = lVar12;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  iVar7 = (this->Builders).ArrayNum;
  piVar1 = &(this->Builders).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>_>
                      (0x848,(ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_> *)
                             this,piVar1);
  }
  (this->Builders).ArrayNum = iVar7 + 1;
  FVar4 = (this->Builders).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TInlineValue<UE::MovieScene::IEntityBuilder,64,8>_>)0x0) {
    this = (FImportedEntity *)FVar4;
  }
  puVar2 = (undefined8 *)((longlong)this + (longlong)iVar7 * 0x48);
  bVar10 = ((uchar *)((longlong)this + 0x40))[(longlong)iVar7 * 0x48] & 0xfe;
  *(byte *)(puVar2 + 8) = bVar10 | 2;
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar2 + 8) = bVar10 | 3;
    *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) ^ (local_28 & 0xfe ^ *(byte *)(puVar2 + 8)) & 2;
    *puVar2 = local_68;
    puVar2[1] = uStack_60;
    puVar2[2] = local_58;
    puVar2[3] = uStack_50;
    *(undefined4 *)(puVar2 + 4) = local_48;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_44;
    *(undefined4 *)(puVar2 + 5) = uStack_40;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_3c;
    *(undefined4 *)(puVar2 + 6) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uStack_34;
    *(undefined4 *)(puVar2 + 7) = uStack_30;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uStack_2c;
  }
  return;
}

