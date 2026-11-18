// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 11

// CloneDynamicState @ 144328b50

void __cdecl
UE::Net::FSoftObjectNetSerializer::CloneDynamicState
          (FNetSerializationContext *param_1,FNetCloneDynamicStateArgs *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *_Dst;
  
  puVar2 = (undefined8 *)param_2->Source;
  puVar3 = (undefined8 *)param_2->Target;
  uVar4 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  uVar4 = puVar2[3];
  puVar3[2] = puVar2[2];
  puVar3[3] = uVar4;
  uVar4 = puVar2[5];
  puVar3[4] = puVar2[4];
  puVar3[5] = uVar4;
  if (*(char *)(puVar2 + 5) == '\0') {
    uVar4 = puVar2[1];
    _Dst = (void *)0x0;
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    if (*(ushort *)((longlong)puVar2 + 6) != 0) {
      _Dst = FMemory::Malloc((ulonglong)*(ushort *)((longlong)puVar2 + 6) + 3 & 0xfffffffffffffffc,4
                            );
      memcpy(_Dst,(void *)puVar2[1],(ulonglong)*(ushort *)((longlong)puVar2 + 6));
    }
    *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar2 + 6);
    uVar1 = *(undefined2 *)((longlong)puVar2 + 6);
    puVar3[1] = _Dst;
    *(undefined2 *)((longlong)puVar3 + 6) = uVar1;
  }
  return;
}

// CollectNetReferences @ 144328f80

void __cdecl
UE::Net::FSoftObjectNetSerializer::CollectNetReferences
          (FNetSerializationContext *param_1,FNetCollectReferencesArgs *param_2)

{
  FNetReferenceInfo local_res10 [12];
  
  if (*(char *)(param_2->Source + 0x28) != '\0') {
    local_res10[0].ResolveType = ResolveOnClient;
    local_res10[0].Padding = '\0';
    FNetReferenceCollector::Add
              ((FNetReferenceCollector *)param_2->Collector,local_res10,
               (FQuantizedObjectReference *)(param_2->Source + 0x10),
               (FNetSerializerChangeMaskParam *)&param_2->_padding_);
  }
  return;
}

// Dequantize @ 14432af70

void __cdecl
UE::Net::FSoftObjectNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  FSoftObjectPtr *this;
  UObject *local_res10;
  UObject *local_res18;
  FString local_58;
  undefined1 local_48 [16];
  FNetDequantizeArgs local_38;
  
  this = (FSoftObjectPtr *)param_2->Target;
  if (*(char *)(param_2->Source + 0x28) == '\0') {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    Net::Private::FStringNetSerializerBase::Dequantize(param_1,param_2,&local_58);
    *(undefined8 *)this = 0;
    local_48._8_4_ = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      local_48._8_4_ = 0;
    }
    local_48._0_8_ = local_58.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath((FSoftObjectPath *)&this->field_0x8,(TStringView<wchar_t> *)local_48);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_38._padding_ = param_2->_padding_;
    local_38._padding_ = param_2->_padding_;
    local_res10 = (UObject *)0x0;
    local_38._padding_ = (longlong)ObjectNetSerializerConfig;
    local_38.Source = param_2->Source + 0x10;
    local_38.Target = (ulong64)&local_res10;
    (*ObjectNetSerializer->Dequantize)(param_1,&local_38);
    local_res18 = local_res10;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
      GC::MarkAsReachable(local_res10);
    }
    FSoftObjectPtr::operator=(this,(FObjectPtr)&local_res18);
  }
  local_48._8_8_ = &FSoftObjectPath_DefaultPreFixupForPIEFunction;
  local_48._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<FSoftObjectPath_DefaultPreFixupForPIEFunction::<lambda>_const_,void,int,FSoftObjectPath_&>
       ::Call;
  FSoftObjectPath::FixupForPIE
            ((FSoftObjectPath *)&this->field_0x8,
             (TFunctionRef<void___cdecl(int,FSoftObjectPath_&)> *)local_48);
  return;
}

// Deserialize @ 14432d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FSoftObjectNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  FNetDeserializeArgs local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte bStack_30;
  undefined4 uStack_2f;
  undefined2 uStack_2b;
  undefined1 uStack_29;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)param_2->Target;
  bStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_2f = 0;
  uStack_2b = 0;
  uStack_29 = 0;
  uVar2 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  bStack_30 = (byte)uVar2 & 1;
  if ((uVar2 & 1) == 0) {
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    local_78.Target = (ulong64)&local_58;
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = 0;
    Net::Private::FStringNetSerializerBase::Deserialize(param_1,&local_78);
  }
  else {
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = param_2->_padding_;
    local_78._padding_ = (longlong)ObjectNetSerializerConfig;
    local_78.Target = (ulong64)&local_48;
    (*ObjectNetSerializer->Deserialize)(param_1,&local_78);
    if (*(char *)(puVar1 + 5) == '\0') {
      FMemory::Free((void *)puVar1[1]);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
  }
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  puVar1[2] = local_48;
  puVar1[3] = uStack_40;
  puVar1[4] = local_38;
  puVar1[5] = CONCAT17(uStack_29,CONCAT25(uStack_2b,CONCAT41(uStack_2f,bStack_30)));
  return;
}

// DeserializeDelta @ 14432efe0

void __cdecl
UE::Net::FSoftObjectNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  void *_Dst;
  
  uVar5 = FNetBitStreamReader::ReadBits(param_1->BitStreamReader,1);
  if ((uVar5 & 1) == 0) {
    Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  }
  else {
    puVar2 = (undefined8 *)param_2->_padding_;
    if (*(char *)(puVar2 + 5) == '\0') {
      FMemory::Free((void *)puVar2[1]);
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    uVar4 = puVar2[3];
    puVar3[2] = puVar2[2];
    puVar3[3] = uVar4;
    uVar4 = puVar2[5];
    puVar3[4] = puVar2[4];
    puVar3[5] = uVar4;
    puVar2 = (undefined8 *)param_2->Prev;
    puVar3 = (undefined8 *)param_2->_padding_;
    uVar4 = puVar2[1];
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    uVar4 = puVar2[3];
    puVar3[2] = puVar2[2];
    puVar3[3] = uVar4;
    uVar4 = puVar2[5];
    puVar3[4] = puVar2[4];
    puVar3[5] = uVar4;
    if (*(char *)(puVar2 + 5) == '\0') {
      uVar4 = puVar2[1];
      _Dst = (void *)0x0;
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      if (*(ushort *)((longlong)puVar2 + 6) != 0) {
        _Dst = FMemory::Malloc((ulonglong)*(ushort *)((longlong)puVar2 + 6) + 3 & 0xfffffffffffffffc
                               ,4);
        memcpy(_Dst,(void *)puVar2[1],(ulonglong)*(ushort *)((longlong)puVar2 + 6));
      }
      *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar2 + 6);
      uVar1 = *(undefined2 *)((longlong)puVar2 + 6);
      puVar3[1] = _Dst;
      *(undefined2 *)((longlong)puVar3 + 6) = uVar1;
      return;
    }
  }
  return;
}

// FreeDynamicState @ 14432ff70

void __cdecl
UE::Net::FSoftObjectNetSerializer::FreeDynamicState
          (FNetSerializationContext *param_1,FNetFreeDynamicStateArgs *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_2->Source;
  if (*(char *)(puVar1 + 5) == '\0') {
    FMemory::Free((void *)puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

// IsEqual @ 144334300

bool __cdecl
UE::Net::FSoftObjectNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  ulong64 uVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  FString local_58;
  FString local_48;
  FNetIsEqualArgs local_38;
  
  if (param_2->bStateIsQuantized == false) {
    uVar1 = param_2->Source1;
    FSoftObjectPath::ToString((FSoftObjectPath *)(param_2->Source0 + 8),&local_48);
    FSoftObjectPath::ToString((FSoftObjectPath *)(uVar1 + 8),&local_58);
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == local_58.Data.ArrayNum) {
      if (local_48.Data.ArrayNum < 2) {
        bVar2 = true;
      }
      else {
        iVar3 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                       (wchar_t *)local_58.Data.AllocatorInstance.Data);
        bVar2 = iVar3 == 0;
      }
    }
    else {
      bVar2 = local_48.Data.ArrayNum + local_58.Data.ArrayNum == 1;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    return bVar2;
  }
  local_38.Source0 = param_2->Source0;
  local_38.Source1 = param_2->Source1;
  if (*(char *)(local_38.Source0 + 0x28) != *(char *)(local_38.Source1 + 0x28)) {
    return false;
  }
  if (*(char *)(local_38.Source0 + 0x28) != '\0') {
    local_38._padding_ = param_2->_padding_;
    local_38._padding_ = param_2->_padding_;
    local_38._padding_ = (longlong)ObjectNetSerializerConfig;
    local_38.bStateIsQuantized = param_2->bStateIsQuantized;
    local_38._41_7_ = *(undefined7 *)&param_2->field_0x29;
    bVar2 = (*ObjectNetSerializer->IsEqual)(param_1,&local_38);
    return bVar2;
  }
  bVar2 = Net::Private::FStringNetSerializerBase::IsQuantizedEqual(param_1,param_2);
  return bVar2;
}

// Quantize @ 144337090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FSoftObjectNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  FWeakObjectPtr *this;
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  UObject *pUVar4;
  FUObjectItem *pFVar5;
  undefined1 auStack_c8 [32];
  FNetQuantizeArgs local_a8;
  FString local_80;
  UObject *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char cStack_40;
  undefined4 uStack_3f;
  undefined2 uStack_3b;
  undefined1 uStack_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this = (FWeakObjectPtr *)param_2->Source;
  puVar1 = (undefined8 *)param_2->Target;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  cStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_3f = 0;
  uStack_3b = 0;
  uStack_39 = 0;
  local_70 = FWeakObjectPtr::Get(this);
  if ((local_70 == (UObject *)0x0) && (this[1] != (FWeakObjectPtr)0x0)) {
    pUVar4 = FSoftObjectPath::ResolveObject((FSoftObjectPath *)(this + 1));
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar4);
    }
    bVar2 = (*IsInAsyncLoadingThread)();
    if ((bVar2) && (pUVar4 != (UObject *)0x0)) {
      pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc);
      if (((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_14433715c;
LAB_144337187:
      bVar2 = true;
      if ((*(uint *)&pUVar4->field_0x8 >> 0x1e & 1) != 0) goto LAB_144337195;
    }
    else {
LAB_14433715c:
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)pUVar4;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(this,(FObjectPtr)&local_80);
      if (pUVar4 != (UObject *)0x0) goto LAB_144337187;
LAB_144337195:
      bVar2 = false;
    }
    local_70 = (UObject *)0x0;
    if (bVar2) {
      local_70 = pUVar4;
    }
  }
  if (local_70 != (UObject *)0x0) {
    cVar3 = (**(code **)(*(longlong *)local_70 + 0x208))();
    if (cVar3 == '\0') {
      cVar3 = '\x01';
      if (*(char *)(puVar1 + 5) == '\0') {
        FMemory::Free((void *)puVar1[1]);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      goto LAB_1443371d2;
    }
  }
  cVar3 = '\0';
LAB_1443371d2:
  cStack_40 = cVar3;
  if (cVar3 == '\0') {
    FSoftObjectPath::ToString((FSoftObjectPath *)(this + 1),&local_80);
    local_a8._padding_ = param_2->_padding_;
    local_a8.Target = (ulong64)&local_68;
    local_a8._padding_ = param_2->_padding_;
    local_a8._padding_ = param_2->_padding_;
    local_a8.Source = 0;
    Net::Private::FStringNetSerializerBase::Quantize(param_1,&local_a8,&local_80);
    if ((UObject *)local_80.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  else {
    local_a8._padding_ = param_2->_padding_;
    local_a8._padding_ = param_2->_padding_;
    local_a8._padding_ = (longlong)ObjectNetSerializerConfig;
    local_a8.Source = (ulong64)&local_70;
    local_a8.Target = (ulong64)&local_58;
    (*ObjectNetSerializer->Quantize)(param_1,&local_a8);
  }
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  puVar1[2] = local_58;
  puVar1[3] = uStack_50;
  puVar1[4] = local_48;
  puVar1[5] = CONCAT17(uStack_39,CONCAT25(uStack_3b,CONCAT41(uStack_3f,cStack_40)));
  return;
}

// Serialize @ 14433c9d0

void __cdecl
UE::Net::FSoftObjectNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  char cVar1;
  ulong64 uVar2;
  FNetSerializeArgs local_28;
  
  uVar2 = param_2->Source;
  cVar1 = *(char *)(uVar2 + 0x28);
  FNetBitStreamWriter::WriteBits(param_1->BitStreamWriter,(uint)(cVar1 != '\0'),1);
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  if (cVar1 != '\0') {
    local_28._padding_ = (longlong)ObjectNetSerializerConfig;
    local_28.Source = uVar2 + 0x10;
    (*ObjectNetSerializer->Serialize)(param_1,&local_28);
    return;
  }
  local_28._padding_ = 0;
  local_28.Source = uVar2;
  Net::Private::FStringNetSerializerBase::Serialize(param_1,&local_28);
  return;
}

// SerializeDelta @ 14433def0

void __cdecl
UE::Net::FSoftObjectNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNetBitStreamWriter *this;
  bool bVar3;
  uint uVar4;
  int iVar5;
  bool bStack_50;
  undefined3 uStack_4f;
  FNetIsEqualArgs local_48;
  
  puVar1 = (uint *)param_2->_padding_;
  puVar2 = (uint *)param_2->Prev;
  this = param_1->BitStreamWriter;
  if ((char)puVar1[10] == (char)puVar2[10]) {
    if ((char)puVar1[10] == '\0') {
      uVar4 = (*puVar2 ^ *puVar1) & 1;
      if (*(ushort *)((longlong)puVar1 + 6) != *(ushort *)((longlong)puVar2 + 6)) {
        uVar4 = 1;
      }
      if (uVar4 == 0) {
        iVar5 = memcmp(*(void **)(puVar1 + 2),*(void **)(puVar2 + 2),
                       (ulonglong)*(ushort *)((longlong)puVar1 + 6));
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = false;
      }
    }
    else {
      local_48._padding_ = 0;
      local_48._padding_ = (longlong)ObjectNetSerializerConfig;
      local_48._padding_._0_4_ = 0;
      local_48.bStateIsQuantized = true;
      local_48._41_3_ = uStack_4f;
      local_48.Source0 = (ulong64)puVar1;
      local_48.Source1 = (ulong64)puVar2;
      bVar3 = (*ObjectNetSerializer->IsEqual)(param_1,&local_48);
    }
  }
  else {
    bVar3 = false;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)(bVar3 != false),1);
  if (bVar3 == false) {
    Serialize(param_1,(FNetSerializeArgs *)param_2);
  }
  return;
}

// Validate @ 14433f880

bool __cdecl
UE::Net::FSoftObjectNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  int iVar1;
  FString local_18;
  
  FSoftObjectPath::ToString((FSoftObjectPath *)(param_2->Source + 8),&local_18);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (uint)((iVar1 + 1) * 3) < 0x10000;
}

