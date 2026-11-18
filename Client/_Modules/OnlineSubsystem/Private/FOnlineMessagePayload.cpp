// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 8

// FromBytes @ 14ebf9290

void __thiscall
FOnlineMessagePayload::FromBytes
          (FOnlineMessagePayload *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *local_28;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  local_28 = (param_1->AllocatorInstance).Data;
  local_20 = param_1->ArrayNum;
  local_1c = 0;
  local_18 = 0;
  operator>><FString,FVariantData>((FNboSerializeFromBufferOSS *)&local_28,&this->KeyValData);
  return;
}

// FromJson @ 14ebf92d0

void __thiscall FOnlineMessagePayload::FromJson(FOnlineMessagePayload *this,FJsonObject *param_1)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  int iVar4;
  FJsonObject *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FJsonObject *pFVar8;
  bool bVar9;
  uint uVar10;
  TSharedPtr<FJsonValue,1> *pTVar11;
  TSharedPtr<FJsonObject,1> *pTVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FString local_158;
  FVariantData local_148;
  undefined1 local_128 [16];
  TReferenceControllerBase<1> *local_118;
  FJsonObject *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  FJsonObject *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  wchar_t *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  wchar_t *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FString *local_88;
  FVariantData *local_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68 [2];
  undefined4 local_3c;
  
  uStack_a0 = 10;
  local_a8 = L"Properties";
  local_78._12_4_ = uStack_9c;
  local_78.Size = 10;
  local_78.DataPtr = L"Properties";
  uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(10,L"Properties");
  pTVar11 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
            ::FindByHash<TStringView<wchar_t>_>
                      ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)param_1,uVar10,&local_78);
  if (((pTVar11 != (TSharedPtr<FJsonValue,1> *)0x0) && (pTVar11->Object != (FJsonValue *)0x0)) &&
     (pTVar11->Object->Type == Object)) {
    bVar9 = 1 < *(int *)&(this->KeyValData).field_0x48;
    if (!bVar9) {
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->KeyValData).field_0x8);
    puVar1 = &(this->KeyValData).field_0xc;
    iVar16 = 0;
    *(undefined4 *)&(this->KeyValData).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->KeyValData).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->KeyValData).field_0x34 = 0;
    iVar4 = *(int *)&(this->KeyValData).field_0x2c;
    *(undefined4 *)&(this->KeyValData).field_0x28 = 0;
    if ((iVar4 < 0) || (0x80 < iVar4)) {
      *(undefined4 *)&(this->KeyValData).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->KeyValData).field_0x10,0);
    }
    uVar10 = 1;
    if (bVar9) {
      *(undefined4 *)&(this->KeyValData).field_0x48 = 1;
      TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                *)this);
    }
    local_98 = L"Properties";
    uStack_90 = 10;
    local_68[0]._12_4_ = uStack_8c;
    local_68[0].Size = 10;
    local_68[0].DataPtr = L"Properties";
    pTVar12 = FJsonObject::GetObjectField(param_1,local_68);
    if ((pTVar12->Object == (FJsonObject *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = pTVar12->Object;
    iVar4 = *(int *)&(pFVar5->Values).field_0x28;
    puVar1 = &(pFVar5->Values).field_0x10;
    local_f0 = 0;
    iStack_f4 = local_f0;
    if (iVar4 != 0) {
      puVar18 = *(uint **)&(pFVar5->Values).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar15 = *puVar18;
      local_f0 = 0;
      iVar16 = 0;
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar16;
        local_f0 = local_f0 + 0x20;
        iVar16 = iVar16 + 1;
        iStack_f4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ebf94c1;
        uVar15 = puVar18[lVar13 + 1];
      }
      uVar10 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iStack_f4 = local_f0 + -1 + local_res18;
      if (iVar4 < iStack_f4) {
        iStack_f4 = iVar4;
      }
    }
LAB_14ebf94c1:
    uVar15 = *(uint *)&(pFVar5->Values).field_0x28;
    uStack_ec = local_3c;
    iStack_e8 = *(int *)&(pFVar5->Values).field_0x8 - *(int *)&(pFVar5->Values).field_0x34;
    uVar19 = uVar15 & 0xffffffe0;
    uStack_f8 = 0xffffffff;
    TStack_d8._padding_ = CONCAT44(uVar10,iVar16);
    TStack_d8.CurrentBitIndex = iStack_f4;
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar15 >> 5;
    TStack_d8._28_4_ = local_3c;
    TStack_d8.BaseBitIndex = local_f0;
    uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
    local_110 = pFVar5;
    iStack_108 = iVar16;
    uStack_104 = uVar10;
    local_100 = puVar1;
    local_e0 = pFVar5;
    TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pFVar5->Values).field_0x28;
    if (uVar15 != uVar10) {
      puVar17 = *(undefined1 **)&(pFVar5->Values).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar14 * 4);
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar14;
        uVar19 = uVar19 + 0x20;
        iVar14 = iVar14 + 1;
        uVar15 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14ebf95d0;
        uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar15 = local_res20 + -1 + uVar19;
      if ((int)uVar10 < (int)uVar15) {
        uVar15 = uVar10;
      }
    }
LAB_14ebf95d0:
    while( true ) {
      pFVar8 = local_e0;
      if (*(int *)&(local_e0->Values).field_0x8 - *(int *)&(local_e0->Values).field_0x34 !=
          (int)uStack_b8) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_d8.CurrentBitIndex == uVar15) &&
          (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar8 == pFVar5)
         ) break;
      local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar2 = (FString *)
               (*(longlong *)&pFVar8->Values + (longlong)TStack_d8.CurrentBitIndex * 0x28);
      local_158.Data.ArrayNum = 0;
      local_158.Data.ArrayMax = 0;
      local_148.Type = Empty;
      local_148.Value.AsInt64 = 0;
      local_148.Value._8_8_ = 0;
      local_148.CachedEstimatedMaxEscapedStringSize = 0;
      if ((pFVar2[1].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = *(TReferenceControllerBase<1> **)&pFVar2[1].Data.ArrayNum;
      local_128._8_8_ = pFVar2[1].Data.AllocatorInstance.Data;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118 = pTVar6;
      if (((FVariantData *)local_128._8_8_ == (FVariantData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar9 = FVariantData::FromJsonValue
                        (&local_148,pFVar2,(TSharedRef<FJsonValue,1> *)(local_128 + 8),&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      if (bVar9) {
        local_88 = &local_158;
        local_80 = &local_148;
        TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
                  ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
                    *)this,(TPairInitializer<FString_const_&,FVariantData_const_&> *)local_128,
                   (bool *)&local_88);
      }
      if (((local_148.Type == String) || (local_148.Type == Blob)) || (local_148.Type == Json)) {
        operator_delete__(local_148.Value.AsTCHAR);
      }
      local_148.Type = Empty;
      local_148.CachedEstimatedMaxEscapedStringSize = 0;
      local_148.Value.AsInt64 = 0;
      local_148.Value._8_8_ = 0;
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
  }
  return;
}

// FromJsonStr @ 14ebfa560

void __thiscall FOnlineMessagePayload::FromJsonStr(FOnlineMessagePayload *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FJsonObject,1> local_68;
  TSharedRef<TJsonReader<wchar_t>,1> local_58;
  StackState local_48;
  
  local_68.Object = (FJsonObject *)0x0;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TJsonReaderFactory<wchar_t>::Create(&local_58,param_1);
  local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Identifier.Data.ArrayNum = 0;
  local_48.Identifier.Data.ArrayMax = 0;
  local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Array.ArrayNum = 0;
  local_48.Array.ArrayMax = 0;
  local_48.Object.Object = (FJsonObject *)0x0;
  local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    (local_58.Object,&local_48,None);
  if (bVar2) {
    bVar2 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_48,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_68.Object != (FJsonObject *)0x0)) {
      if ((local_68.Object == (FJsonObject *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FromJson(this,local_68.Object);
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
               local_48.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// GetAttribute @ 14ebfd8d0

bool __thiscall
FOnlineMessagePayload::GetAttribute
          (FOnlineMessagePayload *this,FString *param_1,FVariantData *param_2)

{
  FVariantData *pFVar1;
  
  pFVar1 = TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
           ::Find((TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
                   *)this,param_1);
  if (pFVar1 != (FVariantData *)0x0) {
    FVariantData::operator=(param_2,pFVar1);
    return true;
  }
  return false;
}

// SetAttribute @ 14ec11a40

void __thiscall
FOnlineMessagePayload::SetAttribute
          (FOnlineMessagePayload *this,FString *param_1,FVariantData *param_2)

{
  TPairInitializer<FString_const_&,FVariantData_const_&> local_res8 [2];
  FString *local_18;
  FVariantData *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FVariantData_const_&>_>
            ((TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// ToBytes @ 14ec14470

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FOnlineMessagePayload::ToBytes
          (FOnlineMessagePayload *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  undefined8 _Src;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FNboSerializeToBufferOSS local_38;
  
  local_38._0_8_ = (FScriptContainerElement *)0x0;
  local_38._12_8_ = 0;
  local_38._20_1_ = 0;
  local_38._8_4_ = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x1000,(ForAnyElementType *)&local_38,0,(int *)&local_38.field_0xc);
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x1000,(ForAnyElementType *)&local_38,(int *)((longlong)&local_38 + 8),
                     (int *)&local_38.field_0xc);
  memset((FScriptContainerElement *)(local_38._0_8_ + (longlong)iVar4),0,0x1000);
  operator<<<FString,FVariantData>(&local_38,&this->KeyValData);
  uVar2 = local_38._16_4_;
  lVar6 = (longlong)(int)local_38._16_4_;
  if ((uint)local_38._16_4_ < (uint)local_38._8_4_) {
    uVar5 = local_38._8_4_ - local_38._16_4_;
    if (((int)(uVar5 | local_38._16_4_) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0) {
      iVar4 = (local_38._8_4_ - uVar5) - uVar2;
      if (iVar4 != 0) {
        memmove((FScriptContainerElement *)(local_38._0_8_ + lVar6),
                (FScriptContainerElement *)(local_38._0_8_ + lVar6) + (int)uVar5,(longlong)iVar4);
      }
      local_38._8_4_ = local_38._8_4_ - uVar5;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,(ForAnyElementType *)&local_38,local_38._8_4_,(int *)&local_38.field_0xc);
    }
  }
  uVar2 = local_38._8_4_;
  _Src = local_38._0_8_;
  if (param_1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_38) {
    param_1->ArrayNum = local_38._8_4_;
    if ((local_38._8_4_ == 0) && (param_1->ArrayMax == 0)) {
      param_1->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_38._8_4_,param_1->ArrayMax,&param_1->AllocatorInstance,local_38._8_4_,
                 &param_1->ArrayMax);
      if (uVar2 != 0) {
        memcpy((param_1->AllocatorInstance).Data,(void *)_Src,(longlong)(int)uVar2);
      }
    }
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return;
}

// ToJson @ 14ec15680

void __thiscall FOnlineMessagePayload::ToJson(FOnlineMessagePayload *this,FJsonObject *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  FString *pFVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  TSharedRef<FJsonObject,1> local_68;
  FString local_58;
  TSharedPtr<FJsonObject,1> local_48;
  
  MakeShared<FJsonObject,1>(&local_68);
  iVar3 = *(int *)&(this->KeyValData).field_0x28;
  puVar1 = &(this->KeyValData).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->KeyValData).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar10 = *puVar15;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec1572d;
      uVar10 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar14;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ec1572d:
  uVar10 = *(uint *)&(this->KeyValData).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar6,iVar11);
  TStack_90.CurrentBitIndex = iVar7;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_90._28_4_ = iVar7;
  TStack_90.BaseBitIndex = iVar14;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(this->KeyValData).field_0x8 -
                       *(int *)&(this->KeyValData).field_0x34);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->KeyValData).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->KeyValData).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec15830;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14ec15830:
  while( true ) {
    if (*(int *)&(this->KeyValData).field_0x8 - *(int *)&(this->KeyValData).field_0x34 !=
        (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_90.CurrentBitIndex == uVar10) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar13 = (FString *)
              ((longlong)TStack_90.CurrentBitIndex * 0x38 + *(longlong *)&this->KeyValData);
    FVariantData::AddToJsonObject((FVariantData *)(pFVar13 + 1),&local_68,pFVar13,true);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  local_48.Object = local_68.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_58,L"Properties");
  FJsonObject::SetObjectField(param_1,&local_58,&local_48);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// ToJsonStr @ 14ec163c0

FString * __thiscall
FOnlineMessagePayload::ToJsonStr(FOnlineMessagePayload *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FString *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_28;
  TSharedPtr<FJsonObject,1> local_18;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pTVar3 = ::operator_new(0x50);
  pTVar5 = pTVar6;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)&pTVar3->_padding_ = 0;
    pTVar3->SharedReferenceCount = (atomic<int>)0x0;
    pTVar3->WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[3]._padding_ + 4) = 0;
    pTVar3[4]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonObject__U__DefaultDeleter_VFJsonObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)pTVar5;
    pTVar6 = pTVar3;
  }
  if ((pTVar5 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
  ToJson(this,(FJsonObject *)pTVar5);
  TJsonWriterFactory<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::Create
            (&local_28,__return_storage_ptr__,0);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (FJsonObject *)pTVar5;
  local_18.SharedReferenceCount.ReferenceController = pTVar6;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(&local_18,&local_28,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (**(code **)((local_28.Object)->_padding_ + 8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

