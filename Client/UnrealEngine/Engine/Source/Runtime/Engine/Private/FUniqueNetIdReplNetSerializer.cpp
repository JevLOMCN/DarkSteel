// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// CloneDynamicState @ 147bcc980

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  uint *puVar1;
  ulong64 uVar2;
  FNetCloneDynamicStateArgs local_38;
  
  puVar1 = (uint *)param_2->Source;
  uVar2 = param_2->Target;
  if ((*puVar1 & 1) != 0) {
    if ((*puVar1 & 2) != 0) {
      local_38._padding_ = 0;
      local_38._padding_._0_4_ = 0;
      local_38._padding_ = (longlong)&StructNetSerializerConfigForString;
      local_38.Source = (ulong64)(puVar1 + 4);
      local_38.Target = uVar2 + 0x10;
      (*StructNetSerializer->CloneDynamicState)(param_1,&local_38);
    }
    if (((byte)*puVar1 & 0x7c) == 0x7c) {
      local_38._padding_ = 0;
      local_38._padding_ = (longlong)&StructNetSerializerConfigForName;
      local_38._padding_._0_4_ = 0;
      local_38.Source = (ulong64)(puVar1 + 8);
      local_38.Target = uVar2 + 0x20;
      (*StructNetSerializer->CloneDynamicState)(param_1,&local_38);
    }
  }
  return;
}

// CollectNetReferences @ 147bcce20

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  return;
}

// Dequantize @ 147bd5550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  uint *puVar1;
  FUniqueNetIdRepl *this;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  UOnlineEngineInterface *pUVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_178 [32];
  longlong local_158;
  FString local_150;
  FNetDequantizeArgs local_140;
  FNetDequantizeArgs local_118;
  TSharedPtr<FUniqueNetId_const_,1> local_f0;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  FUniqueNetIdRepl local_d0;
  FUniqueNetIdWrapper local_a0;
  wchar_t local_78 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  puVar1 = (uint *)param_2->Source;
  this = (FUniqueNetIdRepl *)param_2->Target;
  if ((*puVar1 & 1) == 0) {
    local_d0._padding_._0_1_ = 0;
    local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    local_d0.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0._padding_ = 0;
    local_d0._padding_ = 0;
    local_d0.ReplicationBytes.ArrayNum = 0;
    local_d0.ReplicationBytes.ArrayMax = 0;
    FUniqueNetIdRepl::operator=(this,&local_d0);
    local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
    if (local_d0.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.ReplicationBytes.AllocatorInstance.Data);
    }
    uVar8 = (ulonglong)(byte)local_d0._padding_;
    if ((1 < (byte)local_d0._padding_) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_d0._padding_);
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar8])(&local_d0._padding_);
    return;
  }
  local_158 = 0;
  uVar9 = *puVar1 >> 2 & 0x1f;
  if (uVar9 == 0) {
    pUVar6 = UOnlineEngineInterface::Get();
    plVar7 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,local_e0);
LAB_147bd56cf:
    local_158 = *plVar7;
  }
  else {
    if (uVar9 != 0x1f) {
      pUVar6 = UOnlineEngineInterface::Get();
      plVar7 = (longlong *)(**(code **)(*(longlong *)pUVar6 + 0x2f0))(pUVar6,local_d8,uVar9);
      goto LAB_147bd56cf;
    }
    local_140._padding_ = 0;
    local_140._padding_ = (longlong)&StructNetSerializerConfigForName;
    local_140._padding_._0_4_ = 0;
    local_140.Source = (ulong64)(puVar1 + 8);
    local_140.Target = (ulong64)&local_158;
    (*StructNetSerializer->Dequantize)(param_1,&local_140);
    if ((param_1->ErrorContext).Error != (FName)0x0) {
      return;
    }
  }
  FVar3 = GNetError_InvalidValue;
  if (local_158 == 0) {
    FNetSerializationContext::SetBitStreamOverflow(param_1);
    FNetErrorContext::SetError(&param_1->ErrorContext,FVar3);
    return;
  }
  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Data.ArrayNum = 0;
  local_150.Data.ArrayMax = 0;
  if ((*puVar1 & 2) == 0) {
    iVar5 = TCString<wchar_t>::SprintfImpl(local_78,L"%llu");
    ::FString::AppendChars(&local_150,local_78,iVar5);
  }
  else {
    local_118._padding_ = 0;
    local_118._padding_ = (longlong)&StructNetSerializerConfigForString;
    local_118._padding_._0_4_ = 0;
    local_118.Source = (ulong64)(puVar1 + 4);
    local_118.Target = (ulong64)&local_150;
    (*StructNetSerializer->Dequantize)(param_1,&local_118);
    if ((param_1->ErrorContext).Error != (FName)0x0) goto LAB_147bd580a;
  }
  pUVar6 = UOnlineEngineInterface::Get();
  (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6,&local_a0,&local_150,local_158);
  pcVar2 = *(code **)(this->_padding_ + 8);
  FUniqueNetIdWrapper::GetV1(&local_a0,&local_f0);
  (*pcVar2)(this,&local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  if ((1 < local_a0.Variant.TypeIndex) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_a0.Variant.TypeIndex])(&local_a0.Variant);
LAB_147bd580a:
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return;
}

// Deserialize @ 147bd6270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  FNetBitStreamReader *this;
  FQuantizedType *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_b8 [32];
  FNetDeserializeArgs local_98;
  undefined8 local_78;
  ulong64 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = param_1->BitStreamReader;
  pFVar1 = (FQuantizedType *)param_2->Target;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & 0xfffffffe | uVar2 & 1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,1);
    local_78._0_4_ = (uVar2 & 1) * 2 | (uint)local_78 & 0xfffffffd;
    uVar3 = FNetBitStreamReader::ReadBits(this,5);
    uVar2 = (uint)local_78;
    local_78 = CONCAT44(local_78._4_4_,(uVar3 & 0x1f) << 2 | (uint)local_78 & 0xffffff83);
    if ((uVar2 & 2) == 0) {
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
      uStack_70 = CONCAT44(uVar3,uVar2);
    }
    else {
      local_98._padding_ = 0;
      local_98._padding_ = (longlong)&StructNetSerializerConfigForString;
      local_98.Target = (ulong64)&local_68;
      local_98._padding_._0_4_ = 0;
      (*StructNetSerializer->Deserialize)(param_1,&local_98);
    }
    if (((byte)local_78 & 0x7c) == 0x7c) {
      local_98._padding_ = 0;
      local_98._padding_ = (longlong)&StructNetSerializerConfigForName;
      local_98.Target = (ulong64)&local_58;
      local_98._padding_._0_4_ = 0;
      (*StructNetSerializer->Deserialize)(param_1,&local_98);
    }
  }
  FreeDynamicState(param_1,pFVar1);
  *(undefined8 *)pFVar1 = local_78;
  pFVar1->Number = uStack_70;
  *(undefined8 *)pFVar1->QuantizedStringID = local_68;
  *(undefined8 *)(pFVar1->QuantizedStringID + 8) = uStack_60;
  *(undefined8 *)pFVar1->QuantizedTypeName = local_58;
  *(undefined8 *)(pFVar1->QuantizedTypeName + 8) = uStack_50;
  *(undefined8 *)(pFVar1->QuantizedTypeName + 0x10) = local_48;
  *(undefined8 *)(pFVar1->QuantizedTypeName + 0x18) = uStack_40;
  return;
}

// DeserializeDelta @ 147bd70c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetBitStreamReader *this;
  FQuantizedType *pFVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_b8 [32];
  FNetDeserializeArgs FStack_98;
  undefined8 uStack_78;
  ulong64 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = param_1->BitStreamReader;
  pFVar1 = (FQuantizedType *)param_2->_padding_;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uVar2 = FNetBitStreamReader::ReadBits(this,1);
  uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & 0xfffffffe | uVar2 & 1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FNetBitStreamReader::ReadBits(this,1);
    uStack_78._0_4_ = (uVar2 & 1) * 2 | (uint)uStack_78 & 0xfffffffd;
    uVar3 = FNetBitStreamReader::ReadBits(this,5);
    uVar2 = (uint)uStack_78;
    uStack_78 = CONCAT44(uStack_78._4_4_,(uVar3 & 0x1f) << 2 | (uint)uStack_78 & 0xffffff83);
    if ((uVar2 & 2) == 0) {
      uVar2 = FNetBitStreamReader::ReadBits(this,0x20);
      uVar3 = FNetBitStreamReader::ReadBits(this,0x20);
      uStack_70 = CONCAT44(uVar3,uVar2);
    }
    else {
      FStack_98._padding_ = 0;
      FStack_98._padding_ = (longlong)&StructNetSerializerConfigForString;
      FStack_98.Target = (ulong64)&uStack_68;
      FStack_98._padding_._0_4_ = 0;
      (*StructNetSerializer->Deserialize)(param_1,&FStack_98);
    }
    if (((byte)uStack_78 & 0x7c) == 0x7c) {
      FStack_98._padding_ = 0;
      FStack_98._padding_ = (longlong)&StructNetSerializerConfigForName;
      FStack_98.Target = (ulong64)&uStack_58;
      FStack_98._padding_._0_4_ = 0;
      (*StructNetSerializer->Deserialize)(param_1,&FStack_98);
    }
  }
  FreeDynamicState(param_1,pFVar1);
  *(undefined8 *)pFVar1 = uStack_78;
  pFVar1->Number = uStack_70;
  *(undefined8 *)pFVar1->QuantizedStringID = uStack_68;
  *(undefined8 *)(pFVar1->QuantizedStringID + 8) = uStack_60;
  *(undefined8 *)pFVar1->QuantizedTypeName = uStack_58;
  *(undefined8 *)(pFVar1->QuantizedTypeName + 8) = uStack_50;
  *(undefined8 *)(pFVar1->QuantizedTypeName + 0x10) = uStack_48;
  *(undefined8 *)(pFVar1->QuantizedTypeName + 0x18) = uStack_40;
  return;
}

// FreeDynamicState @ 147bdd830

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FQuantizedType *param_2)

{
  FNetFreeDynamicStateArgs local_28;
  
  if (param_2->bIsValid != 0) {
    if (param_2->bIsString != 0) {
      local_28._padding_ = 0;
      local_28._padding_ = (longlong)&StructNetSerializerConfigForString;
      local_28.Source = (ulong64)param_2->QuantizedStringID;
      local_28._padding_._0_4_ = 0;
      (*StructNetSerializer->FreeDynamicState)(param_1,&local_28);
    }
    if (param_2->TypeHash == 0x1f) {
      local_28._padding_ = 0;
      local_28._padding_ = (longlong)&StructNetSerializerConfigForName;
      local_28.Source = (ulong64)param_2->QuantizedTypeName;
      local_28._padding_._0_4_ = 0;
      (*StructNetSerializer->FreeDynamicState)(param_1,&local_28);
    }
  }
  return;
}

// FreeDynamicState @ 147bdd8e0

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  FreeDynamicState(param_1,(FQuantizedType *)param_2->Source);
  return;
}

// IsEqual @ 147bf0e80

bool __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  uint uVar1;
  uint uVar2;
  FUniqueNetIdWrapper *pFVar3;
  FUniqueNetIdWrapper *pFVar4;
  bool bVar5;
  uint uVar6;
  FNetIsEqualArgs local_38;
  
  pFVar3 = (FUniqueNetIdWrapper *)param_2->Source0;
  pFVar4 = (FUniqueNetIdWrapper *)param_2->Source1;
  if (param_2->bStateIsQuantized == false) {
    bVar5 = ::operator==(pFVar3,pFVar4);
    return bVar5;
  }
  uVar1 = (uint)pFVar4->_padding_;
  uVar2 = (uint)pFVar3->_padding_;
  uVar6 = uVar1 ^ uVar2;
  uVar6 = (uVar6 >> 1 | uVar6) & 1;
  if ((pFVar3->Variant)._padding_ != (pFVar4->Variant)._padding_) {
    uVar6 = 1;
  }
  if (uVar6 == 0 && ((uVar1 ^ uVar2) & 0x7c) == 0) {
    if ((uVar2 & 2) != 0) {
      local_38._padding_ = param_2->_padding_;
      local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_38.bStateIsQuantized = param_2->bStateIsQuantized;
      local_38._41_3_ = *(undefined3 *)&param_2->field_0x29;
      local_38._44_4_ = *(undefined4 *)&param_2->field_0x2c;
      local_38._padding_ = (longlong)&StructNetSerializerConfigForString;
      local_38.Source0 = (ulong64)&(pFVar3->Variant)._padding_;
      local_38.Source1 = (ulong64)&(pFVar4->Variant)._padding_;
      bVar5 = (*StructNetSerializer->IsEqual)(param_1,&local_38);
      if (!bVar5) goto LAB_147bf0f9e;
    }
    if (((byte)(int)pFVar3->_padding_ & 0x7c) == 0x7c) {
      local_38._padding_ = param_2->_padding_;
      local_38._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_38._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_38._padding_ = (longlong)&StructNetSerializerConfigForName;
      local_38.Source0 = (ulong64)(pFVar3 + 1);
      local_38.bStateIsQuantized = param_2->bStateIsQuantized;
      local_38._41_3_ = *(undefined3 *)&param_2->field_0x29;
      local_38._44_4_ = *(undefined4 *)&param_2->field_0x2c;
      local_38.Source1 = (ulong64)(pFVar4 + 1);
      bVar5 = (*StructNetSerializer->IsEqual)(param_1,&local_38);
    }
    else {
      bVar5 = true;
    }
  }
  else {
LAB_147bf0f9e:
    bVar5 = false;
  }
  return bVar5;
}

// Quantize @ 147bf94a0

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ushort _C;
  uint *puVar1;
  FUniqueNetIdWrapper *this;
  FUniqueNetId *pFVar2;
  FName FVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar7;
  UOnlineEngineInterface *pUVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res10 [8];
  uint local_res18;
  ForAnyElementType local_res20;
  FString local_70;
  FNetQuantizeArgs local_60;
  
  puVar1 = (uint *)param_2->Target;
  this = (FUniqueNetIdWrapper *)param_2->Source;
  if ((*puVar1 & 2) != 0) {
    local_60._padding_ = (longlong)&StructNetSerializerConfigForString;
    local_60.Source = (ulong64)(puVar1 + 4);
    local_60._padding_ = 0;
    local_60._padding_._0_4_ = 0;
    (*StructNetSerializer->FreeDynamicState)(param_1,(FNetFreeDynamicStateArgs *)&local_60);
  }
  if (((byte)*puVar1 & 0x7c) == 0x7c) {
    local_60._padding_ = (longlong)&StructNetSerializerConfigForName;
    local_60.Source = (ulong64)(puVar1 + 8);
    local_60._padding_ = 0;
    local_60._padding_._0_4_ = 0;
    (*StructNetSerializer->FreeDynamicState)(param_1,(FNetFreeDynamicStateArgs *)&local_60);
  }
  *puVar1 = *puVar1 & 0xffffff80;
  puVar1[2] = 0;
  puVar1[3] = 0;
  bVar4 = FUniqueNetIdWrapper::IsValid(this);
  if (bVar4) {
    FUniqueNetIdWrapper::ToString(this,&local_70);
    uVar9 = local_70.Data.ArrayNum;
    if (1 < (int)uVar9) {
      uVar13 = (ulonglong)(int)uVar9;
      iVar6 = uVar9 - 1;
      if (uVar9 == 0) {
        iVar6 = 0;
      }
      bVar4 = 0 < iVar6;
      FVar10.Data = local_70.Data.AllocatorInstance.Data;
      uVar11 = 0;
      pFVar14 = local_70.Data.AllocatorInstance.Data + uVar13 * 2 + -2;
      local_res18 = uVar9;
      if (uVar9 == 0) {
        pFVar14 = local_70.Data.AllocatorInstance.Data + uVar13 * 2;
      }
      while( true ) {
        if (local_70.Data.ArrayNum != (int)uVar13) {
          `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        uVar12 = uVar11;
        if (FVar10.Data == pFVar14) goto LAB_147bf95f0;
        _C = *(ushort *)FVar10.Data;
        iVar6 = iswdigit(_C);
        bVar4 = iVar6 != 0;
        if (iVar6 == 0) goto LAB_147bf95f0;
        uVar12 = (ulonglong)_C + (uVar11 * 5 + -0x18) * 2;
        if (uVar12 <= uVar11) break;
        FVar10.Data = FVar10.Data + 2;
        uVar13 = (ulonglong)local_res18;
        uVar11 = uVar12;
      }
      bVar4 = false;
LAB_147bf95f0:
      pTVar7 = FUniqueNetIdWrapper::GetV1(this,(TSharedPtr<FUniqueNetId_const_,1> *)&local_60);
      pFVar2 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_60._padding_);
      (**(code **)(*(longlong *)pFVar2 + 0x10))(pFVar2,&local_res20);
      pUVar8 = UOnlineEngineInterface::Get();
      bVar5 = (**(code **)(*(longlong *)pUVar8 + 0x2e8))(pUVar8,local_res20.Data);
      FVar3 = GNetError_InvalidValue;
      if (bVar5 < 0x1f) {
        if ((bVar5 == 0) && (local_res20.Data != (FScriptContainerElement *)0x0)) {
          bVar5 = 0x1f;
        }
        *puVar1 = (bVar4 ^ 1) * 2 | *puVar1 & 0xfffffffd | 1;
        if (bVar4 == false) {
          local_60._padding_ = 0;
          local_60._padding_ = (longlong)&StructNetSerializerConfigForString;
          local_60._padding_._0_4_ = 0;
          local_60.Source = (ulong64)&local_70;
          local_60.Target = (ulong64)(puVar1 + 4);
          (*StructNetSerializer->Quantize)(param_1,&local_60);
        }
        else {
          *(ulonglong *)(puVar1 + 2) = uVar12;
        }
        *puVar1 = *puVar1 ^ ((uint)bVar5 * 4 ^ *puVar1) & 0x7c;
        if ((bVar5 & 0x1f) == 0x1f) {
          local_60._padding_ = 0;
          local_60._padding_ = (longlong)&StructNetSerializerConfigForName;
          local_60._padding_._0_4_ = 0;
          local_60.Source = (ulong64)&local_res20;
          local_60.Target = (ulong64)(puVar1 + 8);
          (*StructNetSerializer->Quantize)(param_1,&local_60);
        }
      }
      else {
        FNetSerializationContext::SetBitStreamOverflow(param_1);
        FNetErrorContext::SetError(&param_1->ErrorContext,FVar3);
      }
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 147bff3f0

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  undefined8 uVar2;
  byte bVar3;
  FNetSerializeArgs local_38;
  
  puVar1 = (uint *)param_2->Source;
  this = param_1->BitStreamWriter;
  bVar3 = (byte)*puVar1 & 1;
  FNetBitStreamWriter::WriteBits(this,(uint)(bVar3 != 0),1);
  if (bVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this,*puVar1 >> 1 & 1,1);
    FNetBitStreamWriter::WriteBits(this,*puVar1 >> 2 & 0x1f,5);
    if ((*puVar1 & 2) == 0) {
      uVar2 = *(undefined8 *)(puVar1 + 2);
      FNetBitStreamWriter::WriteBits(this,(uint)uVar2,0x20);
      FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)uVar2 >> 0x20),0x20);
    }
    else {
      local_38._padding_ = 0;
      local_38._padding_ = (longlong)&StructNetSerializerConfigForString;
      local_38.Source = (ulong64)(puVar1 + 4);
      local_38._padding_._0_4_ = 0;
      (*StructNetSerializer->Serialize)(param_1,&local_38);
    }
    if (((byte)*puVar1 & 0x7c) == 0x7c) {
      local_38._padding_ = 0;
      local_38._padding_ = (longlong)&StructNetSerializerConfigForName;
      local_38.Source = (ulong64)(puVar1 + 8);
      local_38._padding_._0_4_ = 0;
      (*StructNetSerializer->Serialize)(param_1,&local_38);
    }
  }
  return;
}

// SerializeDelta @ 147c004b0

void __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamWriter *this;
  undefined8 uVar2;
  byte bVar3;
  FNetSerializeArgs FStack_38;
  
  puVar1 = (uint *)param_2->_padding_;
  this = param_1->BitStreamWriter;
  bVar3 = (byte)*puVar1 & 1;
  FNetBitStreamWriter::WriteBits(this,(uint)(bVar3 != 0),1);
  if (bVar3 != 0) {
    FNetBitStreamWriter::WriteBits(this,*puVar1 >> 1 & 1,1);
    FNetBitStreamWriter::WriteBits(this,*puVar1 >> 2 & 0x1f,5);
    if ((*puVar1 & 2) == 0) {
      uVar2 = *(undefined8 *)(puVar1 + 2);
      FNetBitStreamWriter::WriteBits(this,(uint)uVar2,0x20);
      FNetBitStreamWriter::WriteBits(this,(uint)((ulonglong)uVar2 >> 0x20),0x20);
    }
    else {
      FStack_38._padding_ = 0;
      FStack_38._padding_ = (longlong)&StructNetSerializerConfigForString;
      FStack_38.Source = (ulong64)(puVar1 + 4);
      FStack_38._padding_._0_4_ = 0;
      (*StructNetSerializer->Serialize)(param_1,&FStack_38);
    }
    if (((byte)*puVar1 & 0x7c) == 0x7c) {
      FStack_38._padding_ = 0;
      FStack_38._padding_ = (longlong)&StructNetSerializerConfigForName;
      FStack_38.Source = (ulong64)(puVar1 + 8);
      FStack_38._padding_._0_4_ = 0;
      (*StructNetSerializer->Serialize)(param_1,&FStack_38);
    }
  }
  return;
}

// Validate @ 147c0c060

bool __cdecl
UE::Net::FUniqueNetIdReplNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  FUniqueNetIdWrapper *this;
  FUniqueNetId *pFVar1;
  bool bVar2;
  byte bVar3;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar4;
  UOnlineEngineInterface *pUVar5;
  undefined8 local_res10;
  void *local_38;
  int local_30;
  FNetValidateArgs local_28;
  
  this = (FUniqueNetIdWrapper *)param_2->Source;
  bVar2 = FUniqueNetIdWrapper::IsValid(this);
  if (!bVar2) {
    return true;
  }
  pTVar4 = FUniqueNetIdWrapper::GetV1(this,(TSharedPtr<FUniqueNetId_const_,1> *)&local_28);
  pFVar1 = pTVar4->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_28._padding_);
  (**(code **)(*(longlong *)pFVar1 + 0x30))(pFVar1,&local_38);
  if (1 < local_30) {
    pTVar4 = FUniqueNetIdWrapper::GetV1(this,(TSharedPtr<FUniqueNetId_const_,1> *)&local_28);
    pFVar1 = pTVar4->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_28._padding_);
    (**(code **)(*(longlong *)pFVar1 + 0x10))(pFVar1,&local_res10);
    pUVar5 = UOnlineEngineInterface::Get();
    bVar3 = (**(code **)(*(longlong *)pUVar5 + 0x2e8))(pUVar5,local_res10);
    if (0x1e < bVar3) {
      bVar2 = false;
      goto LAB_147c0c14d;
    }
    local_28._padding_ = 0;
    local_28._padding_._0_4_ = 0;
    local_28._padding_ = (longlong)&StructNetSerializerConfigForString;
    local_28.Source = (ulong64)&local_38;
    bVar2 = (*StructNetSerializer->Validate)(param_1,&local_28);
    if (!bVar2) {
      bVar2 = false;
      goto LAB_147c0c14d;
    }
  }
  bVar2 = true;
LAB_147c0c14d:
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return bVar2;
}

