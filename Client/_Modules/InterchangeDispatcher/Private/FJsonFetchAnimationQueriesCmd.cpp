// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 5

// FromJson @ 14e663550

bool __thiscall
UE::Interchange::FJsonFetchAnimationQueriesCmd::FromJson
          (FJsonFetchAnimationQueriesCmd *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar8;
  FString *pFVar9;
  undefined8 *puVar10;
  FJsonObject *pFVar11;
  bool bVar12;
  TSharedPtr<FJsonObject,1> *local_res18 [2];
  TSharedPtr<FJsonObject,1> local_188;
  FString local_178;
  StackState local_168;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  void *local_a8 [2];
  TStringView<wchar_t> local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  pTVar8 = TJsonStringReader<wchar_t>::Create(&local_d8,param_1);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  bVar12 = false;
  local_168.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Identifier.Data.ArrayNum = 0;
  local_168.Identifier.Data.ArrayMax = 0;
  local_168.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.Object = (FJsonObject *)0x0;
  local_188.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_168.Array.ArrayNum = 0;
  local_168.Array.ArrayMax = 0;
  local_168.Object.Object = (FJsonObject *)0x0;
  local_168.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_168,None);
  if (bVar4) {
    bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_168,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data,
               local_168.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_168.Array.AllocatorInstance.Data);
    }
    if (local_168.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_188.Object != (FJsonObject *)0x0)) {
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      if ((local_188.Object == (FJsonObject *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar11 = local_188.Object;
      pFVar9 = IJsonCmdBase::GetCommandIDJsonKey(&local_b8);
      local_128 = (pFVar9->Data).AllocatorInstance.Data;
      iVar7 = (pFVar9->Data).ArrayNum;
      iVar6 = 0;
      iStack_120 = iVar7 + -1;
      if (iVar7 == 0) {
        iStack_120 = iVar6;
      }
      local_c8._12_4_ = uStack_11c;
      local_c8.Size = iStack_120;
      local_c8.DataPtr = (wchar_t *)local_128;
      bVar4 = FJsonObject::TryGetStringField(pFVar11,&local_c8,&local_178);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_a8);
        if (local_178.Data.ArrayNum == *(int *)(puVar10 + 1)) {
          if (1 < local_178.Data.ArrayNum) {
            iVar7 = wcscmp((wchar_t *)local_178.Data.AllocatorInstance.Data,(wchar_t *)*puVar10);
            bVar12 = iVar7 != 0;
          }
        }
        else {
          bVar12 = local_178.Data.ArrayNum + *(int *)(puVar10 + 1) != 1;
        }
        if (local_a8[0] != (void *)0x0) {
          FMemory::Free(local_a8[0]);
        }
        if (bVar12) goto LAB_14e663947;
        if ((local_188.Object == (FJsonObject *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = local_188.Object;
        pFVar9 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_88);
        local_118 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_110 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_110 = iVar6;
        }
        local_98._12_4_ = uStack_10c;
        local_98.Size = iStack_110;
        local_98.DataPtr = (wchar_t *)local_118;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_98,(FString *)&this->_padding_);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e663947;
        local_res18[0] = (TSharedPtr<FJsonObject,1> *)0x0;
        if ((local_188.Object == (FJsonObject *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar11 = local_188.Object;
        pFVar9 = IJsonCmdBase::GetCommandDataJsonKey(&local_68);
        local_108 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_100 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_100 = iVar6;
        }
        local_78._12_4_ = uStack_fc;
        local_78.Size = iStack_100;
        local_78.DataPtr = (wchar_t *)local_108;
        bVar12 = FJsonObject::TryGetObjectField(pFVar11,&local_78,local_res18);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e663947;
        pFVar11 = TSharedPtr<FJsonObject,1>::operator->(local_res18[0]);
        pFVar9 = FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(&local_48);
        local_f8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_f0 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_f0 = iVar6;
        }
        local_58._12_4_ = uStack_ec;
        local_58.Size = iStack_f0;
        local_58.DataPtr = (wchar_t *)local_f8;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_58,(FString *)&this->_padding_);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e663947;
        pFVar11 = TSharedPtr<FJsonObject,1>::operator->(local_res18[0]);
        pFVar9 = GetQueriesJsonStringKey(&local_28);
        local_e8 = (pFVar9->Data).AllocatorInstance.Data;
        iVar7 = (pFVar9->Data).ArrayNum;
        iStack_e0 = iVar7 + -1;
        if (iVar7 == 0) {
          iStack_e0 = iVar6;
        }
        local_38._12_4_ = uStack_dc;
        local_38.Size = iStack_e0;
        local_38.DataPtr = (wchar_t *)local_e8;
        bVar12 = FJsonObject::TryGetStringField(pFVar11,&local_38,&this->QueriesJsonString);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (!bVar12) goto LAB_14e663947;
        *(undefined1 *)&this->_padding_ = 1;
        bVar12 = true;
      }
      else {
LAB_14e663947:
        bVar12 = false;
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      goto LAB_14e663604;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data,
               local_168.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_168.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_168.Array.AllocatorInstance.Data);
    }
    if (local_168.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Identifier.Data.AllocatorInstance.Data);
    }
  }
  bVar12 = false;
LAB_14e663604:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return bVar12;
}

// FromJson @ 14e664570

bool __thiscall
UE::Interchange::FJsonFetchAnimationQueriesCmd::JsonAnimationQueriesResultParser::FromJson
          (JsonAnimationQueriesResultParser *this,FString *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  FJsonObject *pFVar7;
  FJsonObject *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  TSharedPtr<FJsonObject,1> local_148;
  StackState local_138;
  TPairInitializer<FString_const_&,FString_&&> local_100;
  FJsonObject *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  FJsonObject *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  longlong local_90;
  FString *local_88;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_80;
  FString local_70 [2];
  undefined4 local_44;
  
  bVar9 = 1 < *(int *)&(this->HashToFilenames).field_0x48;
  if (!bVar9) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->HashToFilenames).field_0x8);
  bVar14 = false;
  puVar1 = &(this->HashToFilenames).field_0xc;
  iVar15 = 0;
  *(undefined4 *)&(this->HashToFilenames).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->HashToFilenames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HashToFilenames).field_0x34 = 0;
  iVar3 = *(int *)&(this->HashToFilenames).field_0x2c;
  *(undefined4 *)&(this->HashToFilenames).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->HashToFilenames).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->HashToFilenames).field_0x10,0);
  }
  uVar11 = 1;
  if (bVar9) {
    *(undefined4 *)&(this->HashToFilenames).field_0x48 = 1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this);
  }
  pTVar12 = TJsonStringReader<wchar_t>::Create(&local_80,param_1);
  pTVar4 = pTVar12->Object;
  local_100.Value = (FString *)(pTVar12->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_100.Value != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_100.Value)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_100.Value)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.SharedReferenceCount.ReferenceController);
  local_138.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Identifier.Data.ArrayNum = 0;
  local_138.Identifier.Data.ArrayMax = 0;
  local_138.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Array.ArrayNum = 0;
  local_138.Array.ArrayMax = 0;
  local_148.Object = (FJsonObject *)0x0;
  local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_138.Object.Object = (FJsonObject *)0x0;
  local_138.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar9 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar4,&local_138,None);
  if (bVar9) {
    bVar9 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_138,&local_148);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
               local_138.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_138.Array.AllocatorInstance.Data);
    }
    if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar9) && (bVar14 = false, local_148.Object != (FJsonObject *)0x0)) {
      if ((local_148.Object == (FJsonObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)this,*(int *)&((local_148.Object)->Values).field_0x8 -
                        *(int *)&((local_148.Object)->Values).field_0x34);
      if ((local_148.Object == (FJsonObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar7 = local_148.Object;
      iVar3 = *(int *)&((local_148.Object)->Values).field_0x28;
      puVar1 = &((local_148.Object)->Values).field_0x10;
      local_d0 = 0;
      iStack_d4 = iVar15;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&((local_148.Object)->Values).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)puVar1;
        }
        uVar17 = *puVar19;
        local_d0 = 0;
        iVar15 = 0;
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar15;
          local_d0 = local_d0 + 0x20;
          iVar15 = iVar15 + 1;
          iStack_d4 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14e664821;
          uVar17 = puVar19[lVar13 + 1];
        }
        uVar11 = -uVar17 & uVar17;
        uVar2 = (ulonglong)uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iStack_d4 = local_d0 + -1 + (int)lVar13;
        if (iVar3 < iStack_d4) {
          iStack_d4 = iVar3;
        }
      }
LAB_14e664821:
      uStack_cc = local_44;
      iStack_c8 = *(int *)&((local_148.Object)->Values).field_0x8 -
                  *(int *)&((local_148.Object)->Values).field_0x34;
      uVar17 = *(uint *)&((local_148.Object)->Values).field_0x28;
      uStack_d8 = 0xffffffff;
      local_f0 = local_148.Object;
      TStack_b8._padding_ = CONCAT44(uVar11,iVar15);
      uVar20 = uVar17 & 0xffffffe0;
      TStack_b8.CurrentBitIndex = iStack_d4;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      local_c0 = local_148.Object;
      iVar16 = (int)uVar17 >> 5;
      TStack_b8._28_4_ = local_44;
      TStack_b8.BaseBitIndex = local_d0;
      uStack_98 = CONCAT44(uStack_c4,iStack_c8);
      iStack_e8 = iVar15;
      uStack_e4 = uVar11;
      local_e0 = puVar1;
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      uVar11 = *(uint *)&(pFVar7->Values).field_0x28;
      if (uVar17 != uVar11) {
        puVar18 = *(undefined1 **)&(pFVar7->Values).field_0x20;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = puVar1;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar16;
          uVar20 = uVar20 + 0x20;
          iVar16 = iVar16 + 1;
          uVar17 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14e664930;
          uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar17 = (int)lVar13 + -1 + uVar20;
        if ((int)uVar11 < (int)uVar17) {
          uVar17 = uVar11;
        }
      }
LAB_14e664930:
      while( true ) {
        pFVar8 = local_c0;
        if (*(int *)&(local_c0->Values).field_0x8 - *(int *)&(local_c0->Values).field_0x34 !=
            (int)uStack_98) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_b8.CurrentBitIndex == uVar17) &&
            (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pFVar8 == pFVar7)) break;
        lVar5 = *(longlong *)&pFVar8->Values;
        lVar13 = lVar5 + (longlong)TStack_b8.CurrentBitIndex * 0x28;
        if ((*(longlong *)(lVar5 + 0x10 + (longlong)TStack_b8.CurrentBitIndex * 0x28) == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        local_90 = lVar13;
        local_88 = FJsonValue::AsString(*(FJsonValue **)(lVar13 + 0x10),local_70);
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                  ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    *)this,&local_100,(bool *)&local_90);
        if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      }
      bVar14 = true;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data,
               local_138.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_138.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_138.Array.AllocatorInstance.Data);
    }
    if (local_138.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Identifier.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_100.Value);
  return bVar14;
}

// GetQueriesJsonStringKey @ 14e665ae0

FString * __cdecl
UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey
          (FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
                          ::__l2::Key,L"QueriesJsonString");
      atexit(`UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey'::__l2::
             _dynamic_atexit_destructor_for__Key__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
          ::__l2::Key.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
         ::__l2::Key.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
          ::__l2::Key.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::FJsonFetchAnimationQueriesCmd::GetQueriesJsonStringKey(void)'
       ::__l2::Key.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// ToJson @ 14e668dc0

FString * __thiscall
UE::Interchange::FJsonFetchAnimationQueriesCmd::ToJson
          (FJsonFetchAnimationQueriesCmd *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  void *_Src;
  code *pcVar2;
  FJsonObject *pFVar3;
  bool bVar4;
  FString *pFVar5;
  TSharedRef<FJsonObject,1> *pTVar6;
  FString *pFVar7;
  longlong lVar8;
  FString local_108;
  TSharedPtr<FJsonObject,1> local_f8;
  FString local_e8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_d8;
  TSharedPtr<FJsonObject,1> local_c8;
  TSharedRef<FJsonObject,1> local_b8;
  TSharedRef<FJsonObject,1> local_a8;
  FString local_98;
  void *local_88 [2];
  FString local_78;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  if ((char)this->_padding_ == '\0') {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7654341662386159926>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Private\\InterchangeDispatcherTask.cpp"
                       ,0x136,"bIsDataInitialize");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar6 = MakeShared<FJsonObject,1>(&local_b8);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  this_00 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  pTVar6 = MakeShared<FJsonObject,1>(&local_a8);
  local_f8.Object = pTVar6->Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 8))(this,local_88);
  pFVar7 = IJsonCmdBase::GetCommandIDJsonKey(&local_98);
  FJsonObject::SetStringField(this_00,pFVar7,pFVar5);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88[0] != (void *)0x0) {
    FMemory::Free(local_88[0]);
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = (FString *)(**(code **)(this->_padding_ + 0x10))(this,local_68);
  pFVar7 = IJsonCmdBase::GetTranslatorIDJsonKey(&local_78);
  FJsonObject::SetStringField(this_00,pFVar7,pFVar5);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68[0] != (void *)0x0) {
    FMemory::Free(local_68[0]);
  }
  if (local_f8.Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar3 = local_f8.Object;
  if ((char)this->_padding_ == '\0') {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3563086482006605615>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherTask.h"
                       ,0xd1,"bIsDataInitialize");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_e8.Data.ArrayNum = (int)this->_padding_;
  lVar8 = (longlong)local_e8.Data.ArrayNum;
  _Src = (void *)this->_padding_;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_e8.Data.ArrayNum == 0) {
    local_e8.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,local_e8.Data.ArrayNum,
               &local_e8.Data.ArrayMax);
    memcpy(local_e8.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  pFVar5 = FJsonFetchPayloadCmd::GetPayloadKeyJsonKey(&local_58);
  FJsonObject::SetStringField(pFVar3,pFVar5,&local_e8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_f8.Object == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar3 = local_f8.Object;
  pFVar5 = GetQueriesJsonStringKey(&local_48);
  FJsonObject::SetStringField(pFVar3,pFVar5,&this->QueriesJsonString);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = IJsonCmdBase::GetCommandDataJsonKey(&local_38);
  FJsonObject::SetObjectField(this_00,pFVar5,&local_f8);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_d8,&local_108,0);
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8.Object = this_00;
  local_c8.SharedReferenceCount.ReferenceController = pTVar1;
  bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_c8,&local_d8,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_108.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_108.Data.ArrayMax;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ToJson @ 14e669e10

FString * __thiscall
UE::Interchange::FJsonFetchAnimationQueriesCmd::JsonAnimationQueriesResultParser::ToJson
          (JsonAnimationQueriesResultParser *this,FString *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FJsonObject *this_00;
  code *pcVar6;
  JsonAnimationQueriesResultParser *pJVar7;
  bool bVar8;
  TSharedRef<FJsonObject,1> *pTVar9;
  FString *pFVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_f8;
  JsonAnimationQueriesResultParser *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_b0;
  JsonAnimationQueriesResultParser *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  TSharedPtr<FJsonObject,1> local_70;
  TSharedRef<FJsonObject,1> local_60 [2];
  
  pTVar9 = MakeShared<FJsonObject,1>(local_60);
  pTVar5 = (pTVar9->SharedReferenceCount).ReferenceController;
  this_00 = pTVar9->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60[0].SharedReferenceCount.ReferenceController);
  iVar3 = *(int *)&(this->HashToFilenames).field_0x28;
  puVar1 = &(this->HashToFilenames).field_0x10;
  iStack_e0 = 0;
  local_c8 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->HashToFilenames).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14e669edd;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_res20;
    if (iVar3 < iStack_cc) {
      iStack_cc = iVar3;
    }
  }
LAB_14e669edd:
  uVar13 = *(uint *)&(this->HashToFilenames).field_0x28;
  iStack_c0 = *(int *)&(this->HashToFilenames).field_0x8 -
              *(int *)&(this->HashToFilenames).field_0x34;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uStack_dc,iStack_e0);
  uStack_d0 = 0xffffffff;
  TStack_98.CurrentBitIndex = iStack_cc;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_98._28_4_ = iStack_cc;
  TStack_98.BaseBitIndex = local_c8;
  uStack_78 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = this;
  local_d8 = puVar1;
  iStack_c4 = iStack_cc;
  local_a0 = this;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar6)();
    return pFVar10;
  }
  uVar4 = *(uint *)&(this->HashToFilenames).field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&(this->HashToFilenames).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14e669ff0;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_b8 = (int)lVar11;
    uVar13 = local_b8 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_14e669ff0:
  while( true ) {
    pJVar7 = local_a0;
    if (*(int *)&(local_a0->HashToFilenames).field_0x8 -
        *(int *)&(local_a0->HashToFilenames).field_0x34 != (int)uStack_78) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pJVar7 == this))
    break;
    pFVar10 = (FString *)
              (*(longlong *)&pJVar7->HashToFilenames + (longlong)TStack_98.CurrentBitIndex * 0x28);
    if ((this_00 == (FJsonObject *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar6)();
      return pFVar10;
    }
    FJsonObject::SetStringField(this_00,pFVar10,pFVar10 + 1);
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_b0,&local_f8,0);
  if ((this_00 == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar6)();
    return pFVar10;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (FJsonObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FString *)(*pcVar6)();
    return pFVar10;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70.Object = this_00;
  local_70.SharedReferenceCount.ReferenceController = pTVar5;
  bVar8 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
          Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_70,&local_b0,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (bVar8) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_f8.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_f8.Data.ArrayMax;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

