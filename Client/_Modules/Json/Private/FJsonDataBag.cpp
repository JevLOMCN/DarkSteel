// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 6

// GetBool @ 141dd52e0

bool __thiscall FJsonDataBag::GetBool(FJsonDataBag *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 local_res18 [16];
  TSharedPtr<FJsonValue_const_,1> local_28;
  FString local_18;
  
  GetField(this,&local_28,param_1);
  if (local_28.Object == (FJsonValue *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_28.Object == (FJsonValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res18[0] = 0;
  cVar4 = (**(code **)((local_28.Object)->_padding_ + 0x68))(local_28.Object,local_res18);
  if (cVar4 == '\0') {
    ::FString::FString(&local_18,L"Boolean");
    FJsonValue::ErrorMessage(local_28.Object,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar3 = local_res18[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// GetDouble @ 141dd5a80

double __thiscall FJsonDataBag::GetDouble(FJsonDataBag *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  TSharedPtr<FJsonValue_const_,1> local_28 [2];
  
  GetField(this,local_28,param_1);
  if (local_28[0].Object == (FJsonValue *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    if (local_28[0].Object == (FJsonValue *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        dVar3 = (double)(*pcVar1)();
        return dVar3;
      }
    }
    dVar3 = FJsonValue::AsNumber(local_28[0].Object);
    uVar4 = SUB84(dVar3,0);
    uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return (double)CONCAT44(uVar5,uVar4);
}

// GetField @ 141dd5bd0

TSharedPtr<FJsonValue_const_,1> * __thiscall
FJsonDataBag::GetField
          (FJsonDataBag *this,TSharedPtr<FJsonValue_const_,1> *__return_storage_ptr__,
          FString *param_1)

{
  int iVar1;
  TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *this_00;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 local_28 [16];
  
  this_00 = (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
             *)(this->JsonObject).Object;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  iVar7 = 0;
  if (this_00 ==
      (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
       *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  iVar1 = (param_1->Data).ArrayNum;
  local_28._0_8_ = (param_1->Data).AllocatorInstance.Data;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = iVar7;
  }
  local_28._8_4_ = iVar5;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)local_28._0_8_);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>(this_00,uVar3,(TStringView<wchar_t> *)local_28);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) ||
     (pTVar8 = (TReferenceControllerBase<1> *)pTVar4->Object,
     pTVar8 == (TReferenceControllerBase<1> *)0x0)) {
    bVar2 = true;
    pTVar8 = pTVar6;
    pTVar9 = (TReferenceControllerBase<1> *)local_28._8_8_;
    pTVar10 = pTVar6;
LAB_141dd5c80:
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
    if (iVar7 == 0) goto LAB_141dd5c95;
  }
  else {
    pTVar9 = (pTVar4->SharedReferenceCount).ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + Null);
      UNLOCK();
    }
    bVar2 = false;
    iVar7 = 1;
    pTVar6 = (TReferenceControllerBase<1> *)local_28._8_8_;
    pTVar10 = pTVar9;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_141dd5c80;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + Null);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_141dd5c95:
  __return_storage_ptr__->Object = (FJsonValue *)pTVar8;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// GetString @ 141dd6ce0

FString * __thiscall
FJsonDataBag::GetString(FJsonDataBag *this,FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement **ppFVar7;
  FScriptContainerElement *local_48;
  undefined8 local_40;
  FScriptContainerElement *local_38;
  undefined8 local_30;
  TSharedPtr<FJsonValue_const_,1> local_28;
  FString local_18;
  
  pFVar6 = (FScriptContainerElement *)0x0;
  GetField(this,&local_28,param_1);
  if (local_28.Object == (FJsonValue *)0x0) {
    local_30 = 0;
    ppFVar7 = &local_38;
    bVar2 = false;
    bVar3 = true;
  }
  else {
    if (local_28.Object == (FJsonValue *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
    }
    local_48 = (FScriptContainerElement *)0x0;
    local_40 = 0;
    cVar4 = (**(code **)((local_28.Object)->_padding_ + 0x58))(local_28.Object,&local_48);
    if (cVar4 == '\0') {
      ::FString::FString(&local_18,L"String");
      FJsonValue::ErrorMessage(local_28.Object,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ppFVar7 = &local_48;
    bVar2 = true;
    bVar3 = false;
    pFVar6 = local_48;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = pFVar6;
  *ppFVar7 = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)(ppFVar7 + 1);
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)ppFVar7 + 0xc);
  ppFVar7[1] = (FScriptContainerElement *)0x0;
  if (bVar3) {
    if (local_38 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if ((bVar2) && (local_48 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Serialize @ 141de0960

void __thiscall
FJsonDataBag::Serialize(FJsonDataBag *this,FJsonSerializerBase *param_1,bool param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  EJson EVar5;
  FJsonObject *pFVar6;
  longlong lVar7;
  TReferenceControllerBase<1> *pTVar8;
  FJsonValue *this_00;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  byte bVar18;
  longlong lVar19;
  FSharedReferencer<1> FVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  int iVar23;
  undefined1 *puVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 local_res10 [8];
  char local_res18;
  undefined1 local_res20 [8];
  FString local_320;
  FString local_310;
  int local_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f8;
  uint local_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  TBitArray<FDefaultBitArrayAllocator> *local_2d8;
  FScriptContainerElement *local_2d0;
  undefined8 local_2c8;
  FJsonObject *local_2c0;
  int iStack_2b8;
  uint uStack_2b4;
  undefined1 *local_2b0;
  undefined4 uStack_2a8;
  int iStack_2a4;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  undefined4 uStack_294;
  int local_290;
  int local_28c;
  FJsonObject *local_288;
  undefined8 local_280;
  undefined8 local_278;
  int iStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  int iStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  int iStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  int iStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  int iStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  int iStack_210;
  undefined4 uStack_20c;
  FJsonObject *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  TSharedPtr<FJsonObject,1> local_1d8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_1c8;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_1b8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_1a8;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_198;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_188;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  TSharedPtr<FJsonObject,1> local_138;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_128;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [8];
  TReferenceControllerBase<1> *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  size_t sVar16;
  
  local_res18 = param_2;
  cVar11 = (**(code **)*param_1)(param_1);
  if (cVar11 != '\0') {
    puVar14 = (undefined8 *)(**(code **)((longlong)*param_1 + 0xf8))(param_1,local_b8);
    if (&this->JsonObject != (TSharedPtr<FJsonObject,1> *)puVar14) {
      (this->JsonObject).Object = (FJsonObject *)*puVar14;
      *puVar14 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->JsonObject).SharedReferenceCount,(FSharedReferencer<1> *)(puVar14 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    return;
  }
  if (!param_2) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1);
  }
  pFVar6 = (this->JsonObject).Object;
  local_288 = pFVar6;
  if (pFVar6 != (FJsonObject *)0x0) {
    iVar13 = *(int *)&(pFVar6->Values).field_0x28;
    iStack_2b8 = 0;
    iVar23 = 0;
    local_2a0 = 0;
    puVar2 = &(pFVar6->Values).field_0x10;
    uStack_2b4 = 1;
    iStack_2a4 = local_2a0;
    if (iVar13 != 0) {
      puVar26 = *(uint **)&(pFVar6->Values).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)puVar2;
      }
      uStack_2b4 = *puVar26;
      local_2a0 = iVar23;
      while (uStack_2b4 == 0) {
        lVar19 = (longlong)iStack_2b8;
        local_2a0 = local_2a0 + 0x20;
        iStack_2b8 = iStack_2b8 + 1;
        uStack_2b4 = 1;
        iStack_2a4 = iVar13;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2b8)
        goto LAB_141de0aad;
        uStack_2b4 = puVar26[lVar19 + 1];
      }
      uStack_2b4 = -uStack_2b4 & uStack_2b4;
      uVar1 = (ulonglong)uStack_2b4 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_290 = (int)lVar19;
      iStack_2a4 = local_290 + -1 + local_2a0;
      if (iVar13 < iStack_2a4) {
        iStack_2a4 = iVar13;
      }
    }
LAB_141de0aad:
    iStack_298 = *(int *)&(pFVar6->Values).field_0x8 - *(int *)&(pFVar6->Values).field_0x34;
    uVar3 = *(uint *)&(pFVar6->Values).field_0x28;
    iVar25 = (int)uVar3 >> 5;
    bVar18 = (byte)uVar3 & 0x1f;
    TStack_200._padding_ = CONCAT44(uStack_2b4,iStack_2b8);
    uStack_2fc = 1 << bVar18;
    uVar22 = uVar3 & 0xffffffe0;
    uVar27 = -1 << bVar18;
    uStack_2a8 = 0xffffffff;
    TStack_200.CurrentBitIndex = iStack_2a4;
    TStack_200.UnvisitedBitMask = 0xffffffff;
    TStack_200._28_4_ = iStack_2a4;
    TStack_200.BaseBitIndex = local_2a0;
    uStack_1e0 = CONCAT44(uStack_294,iStack_298);
    local_300 = iVar25;
    pTStack_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    local_2f0 = uVar27;
    uStack_2ec = uVar3;
    uStack_2e8 = uVar22;
    local_2c0 = pFVar6;
    local_2b0 = puVar2;
    iStack_29c = iStack_2a4;
    local_208 = pFVar6;
    TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar3 < 0) || (iVar13 < (int)uVar3)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar4 = *(uint *)&(pFVar6->Values).field_0x28;
    if (uVar3 != uVar4) {
      puVar24 = *(undefined1 **)&(pFVar6->Values).field_0x20;
      if (puVar24 == (undefined1 *)0x0) {
        puVar24 = puVar2;
      }
      uVar27 = uVar27 & *(uint *)(puVar24 + (longlong)iVar25 * 4);
      while (uVar27 == 0) {
        uStack_2e8 = uVar22 + 0x20;
        local_300 = iVar25 + 1;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_300)
        goto LAB_141de0c00;
        uVar27 = *(uint *)(puVar24 + (longlong)iVar25 * 4 + 4);
        local_2f0 = 0xffffffff;
        iVar25 = local_300;
        uVar22 = uStack_2e8;
      }
      uStack_2fc = -uVar27 & uVar27;
      uVar1 = (ulonglong)uStack_2fc * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      local_28c = (int)lVar19;
      uStack_2ec = (uVar22 - 1) + local_28c;
      if ((int)uVar4 < (int)uStack_2ec) {
LAB_141de0c00:
        uStack_2ec = uVar4;
      }
    }
    uVar3 = uStack_2ec;
    local_80 = CONCAT44(uStack_2fc,local_300);
    local_70 = CONCAT44(uStack_2ec,local_2f0);
    uStack_68 = CONCAT44(uStack_2e4,uStack_2e8);
    pTStack_78 = pTStack_2f8;
    local_2d8 = pTStack_2f8;
    while( true ) {
      pFVar6 = local_208;
      if (*(int *)&(local_208->Values).field_0x8 - *(int *)&(local_208->Values).field_0x34 !=
          (int)uStack_1e0) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      lVar19 = (longlong)TStack_200.CurrentBitIndex;
      if (((TStack_200.CurrentBitIndex == uVar3) && (TStack_200.Array == local_2d8)) &&
         (param_2 = (bool)local_res18, pFVar6 == local_288)) break;
      lVar7 = *(longlong *)&pFVar6->Values;
      pTVar8 = *(TReferenceControllerBase<1> **)(lVar7 + 0x18 + lVar19 * 0x28);
      this_00 = *(FJsonValue **)(lVar7 + 0x10 + lVar19 * 0x28);
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FJsonValue *)0x0) {
        EVar5 = this_00->Type;
        if (EVar5 == String) {
          local_2d0 = (FScriptContainerElement *)0x0;
          local_2c8 = 0;
          cVar11 = (**(code **)(this_00->_padding_ + 0x58))(this_00,&local_2d0);
          if (cVar11 == '\0') {
            ::FString::FString(&local_148,L"String");
            FJsonValue::ErrorMessage(this_00,&local_148);
            if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data.AllocatorInstance.Data);
            }
          }
          pcVar10 = *(code **)((longlong)*param_1 + 0x70);
          if (*(int *)(lVar7 + 8 + lVar19 * 0x28) == 0) {
            local_218 = L"";
LAB_141de1295:
            sVar16 = wcslen(local_218);
            iVar13 = (int)sVar16;
          }
          else {
            local_218 = *(wchar_t **)(lVar7 + lVar19 * 0x28);
            iVar13 = iVar23;
            if (local_218 != (wchar_t *)0x0) goto LAB_141de1295;
          }
          local_c8 = (undefined4)local_218;
          uStack_c4 = local_218._4_4_;
          uStack_bc = uStack_20c;
          iStack_210 = iVar13;
          iStack_c0 = iVar13;
          (*pcVar10)(param_1,&local_c8);
          FVar21.Data = local_2d0;
        }
        else {
          if (EVar5 == Number) {
            local_2e0 = 0;
            cVar11 = (**(code **)(this_00->_padding_ + 0x50))(this_00,&local_2e0);
            if (cVar11 == '\0') {
              ::FString::FString(&local_158,L"Number");
              FJsonValue::ErrorMessage(this_00,&local_158);
              if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.Data.AllocatorInstance.Data);
              }
            }
            local_280 = local_2e0;
            pcVar10 = *(code **)((longlong)*param_1 + 0x50);
            if (*(int *)(lVar7 + 8 + lVar19 * 0x28) == 0) {
              local_228 = L"";
LAB_141de11f4:
              sVar16 = wcslen(local_228);
              iVar13 = (int)sVar16;
            }
            else {
              local_228 = *(wchar_t **)(lVar7 + lVar19 * 0x28);
              iVar13 = iVar23;
              if (local_228 != (wchar_t *)0x0) goto LAB_141de11f4;
            }
            local_d8 = (undefined4)local_228;
            uStack_d4 = local_228._4_4_;
            uStack_cc = uStack_21c;
            iStack_220 = iVar13;
            iStack_d0 = iVar13;
            (*pcVar10)(param_1,&local_d8);
            goto LAB_141de12c9;
          }
          if (EVar5 == Boolean) {
            local_res10[0] = 0;
            cVar11 = (**(code **)(this_00->_padding_ + 0x68))(this_00,local_res10);
            if (cVar11 == '\0') {
              ::FString::FString(&local_168,L"Boolean");
              FJsonValue::ErrorMessage(this_00,&local_168);
              if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.Data.AllocatorInstance.Data);
              }
            }
            pcVar10 = *(code **)((longlong)*param_1 + 0x78);
            if (*(int *)(lVar7 + 8 + lVar19 * 0x28) == 0) {
              local_238 = L"";
LAB_141de114a:
              sVar16 = wcslen(local_238);
              iVar13 = (int)sVar16;
            }
            else {
              local_238 = *(wchar_t **)(lVar7 + lVar19 * 0x28);
              iVar13 = iVar23;
              if (local_238 != (wchar_t *)0x0) goto LAB_141de114a;
            }
            local_e8 = (undefined4)local_238;
            uStack_e4 = local_238._4_4_;
            uStack_dc = uStack_22c;
            iStack_230 = iVar13;
            iStack_e0 = iVar13;
            (*pcVar10)(param_1,&local_e8);
            goto LAB_141de12c9;
          }
          if (EVar5 == Array) {
            local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_310.Data.ArrayNum = 0;
            local_310.Data.ArrayMax = 0;
            if ((this->NumPrintIndents).bIsSet == false) {
              TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
                        (&local_178,&local_310,0);
              pTVar17 = FJsonValue::AsArray(this_00);
              MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
                        (&local_188,pTVar17);
              TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                        (&local_188,local_178.Object,true);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_188.SharedReferenceCount.ReferenceController);
              FVar20.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
            }
            else {
              TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                        (&local_198,&local_310,(this->NumPrintIndents).TypedValue);
              pTVar17 = FJsonValue::AsArray(this_00);
              MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_const_&>
                        (&local_1a8,pTVar17);
              TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_1a8,local_198.Object,true);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1a8.SharedReferenceCount.ReferenceController);
              FVar20.ReferenceController = local_198.SharedReferenceCount.ReferenceController;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar20.ReferenceController);
            pcVar10 = *(code **)((longlong)*param_1 + 0x100);
            if (*(int *)(lVar7 + 8 + lVar19 * 0x28) == 0) {
              local_258 = L"";
LAB_141de1050:
              sVar16 = wcslen(local_258);
              iVar13 = (int)sVar16;
            }
            else {
              local_258 = *(wchar_t **)(lVar7 + lVar19 * 0x28);
              iVar13 = iVar23;
              if (local_258 != (wchar_t *)0x0) goto LAB_141de1050;
            }
            local_108 = (undefined4)local_258;
            uStack_104 = local_258._4_4_;
            uStack_fc = uStack_24c;
            iStack_250 = iVar13;
            iStack_100 = iVar13;
            (*pcVar10)(param_1,&local_108);
            pcVar10 = *(code **)((longlong)*param_1 + 0x110);
            if (local_310.Data.ArrayNum == 0) {
              local_248 = L"";
LAB_141de109d:
              sVar16 = wcslen(local_248);
              iVar13 = (int)sVar16;
            }
            else {
              local_248 = (wchar_t *)local_310.Data.AllocatorInstance.Data;
              iVar13 = iVar23;
              if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_141de109d;
            }
            local_f8 = (undefined4)local_248;
            uStack_f4 = local_248._4_4_;
            uStack_ec = uStack_23c;
            iStack_240 = iVar13;
            iStack_f0 = iVar13;
            (*pcVar10)(param_1,&local_f8);
            FVar21.Data = local_310.Data.AllocatorInstance.Data;
          }
          else {
            if (EVar5 != Object) goto LAB_141de12c9;
            local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_320.Data.ArrayNum = 0;
            local_320.Data.ArrayMax = 0;
            if ((this->NumPrintIndents).bIsSet == false) {
              TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
                        (&local_1b8,&local_320,0);
              plVar15 = (longlong *)(**(code **)this_00->_padding_)(this_00);
              if ((*plVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar6 = (FJsonObject *)*plVar15;
              pTVar9 = (TReferenceControllerBase<1> *)plVar15[1];
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((pFVar6 == (FJsonObject *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_1d8.Object = pFVar6;
              local_1d8.SharedReferenceCount.ReferenceController = pTVar9;
              MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
                        (&local_1c8,&local_1d8);
              TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>
                        (&local_1c8,local_1b8.Object,true);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1c8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar9);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar9);
              FVar20.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
            }
            else {
              TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create
                        (&local_118,&local_320,(this->NumPrintIndents).TypedValue);
              plVar15 = (longlong *)(**(code **)this_00->_padding_)(this_00);
              if ((*plVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar6 = (FJsonObject *)*plVar15;
              pTVar9 = (TReferenceControllerBase<1> *)plVar15[1];
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((pFVar6 == (FJsonObject *)0x0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_138.Object = pFVar6;
              local_138.SharedReferenceCount.ReferenceController = pTVar9;
              MakeShared<FJsonSerializerPolicy_JsonObject::FElement,1,TSharedPtr<FJsonObject,1>_const_&>
                        (&local_128,&local_138);
              TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_128,local_118.Object,true);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_128.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar9);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar9);
              FVar20.ReferenceController = local_118.SharedReferenceCount.ReferenceController;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar20.ReferenceController);
            pcVar10 = *(code **)((longlong)*param_1 + 0x100);
            if (*(int *)(lVar7 + 8 + lVar19 * 0x28) == 0) {
              local_278 = L"";
LAB_141de0eea:
              sVar16 = wcslen(local_278);
              iVar13 = (int)sVar16;
            }
            else {
              local_278 = *(wchar_t **)(lVar7 + lVar19 * 0x28);
              iVar13 = iVar23;
              if (local_278 != (wchar_t *)0x0) goto LAB_141de0eea;
            }
            local_a8 = (undefined4)local_278;
            uStack_a4 = local_278._4_4_;
            uStack_9c = uStack_26c;
            iStack_270 = iVar13;
            iStack_a0 = iVar13;
            (*pcVar10)(param_1,&local_a8);
            pcVar10 = *(code **)((longlong)*param_1 + 0x110);
            if (local_320.Data.ArrayNum == 0) {
              local_268 = L"";
LAB_141de0f37:
              sVar16 = wcslen(local_268);
              iVar13 = (int)sVar16;
            }
            else {
              local_268 = (wchar_t *)local_320.Data.AllocatorInstance.Data;
              iVar13 = iVar23;
              if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              goto LAB_141de0f37;
            }
            local_98 = (undefined4)local_268;
            uStack_94 = local_268._4_4_;
            uStack_8c = uStack_25c;
            iStack_260 = iVar13;
            iStack_90 = iVar13;
            (*pcVar10)(param_1,&local_98);
            FVar21.Data = local_320.Data.AllocatorInstance.Data;
          }
        }
        if (FVar21.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar21.Data);
        }
      }
LAB_141de12c9:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
    }
  }
  if (param_2 == false) {
    (**(code **)((longlong)*param_1 + 0x20))(param_1);
  }
  return;
}

// SetFieldJson @ 141dead70

void __thiscall
FJsonDataBag::SetFieldJson(FJsonDataBag *this,FString *param_1,TSharedPtr<FJsonValue,1> *param_2)

{
  TSharedPtr<FJsonObject,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FJsonObject,1> *pTVar4;
  FJsonObject *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FJsonObject,1> local_18;
  
  pTVar1 = &this->JsonObject;
  if ((this->JsonObject).Object == (FJsonObject *)0x0) {
    pTVar4 = MakeShared<FJsonObject,1>(&local_18);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_28 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FJsonObject,1> *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (FJsonObject *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->JsonObject).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar1->Object == (FJsonObject *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FJsonObject::SetField(pTVar1->Object,param_1,param_2);
  return;
}

