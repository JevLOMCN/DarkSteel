// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// Apply @ 1484c3080

void __cdecl
UE::Net::FRepMovementNetSerializer::Apply(FNetSerializationContext *param_1,FNetApplyArgs *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  
  puVar1 = (undefined8 *)param_2->Source;
  puVar2 = (undefined8 *)param_2->Target;
  bVar4 = (*(byte *)(puVar2 + 0xf) ^ *(byte *)(puVar1 + 0xf)) & 1 ^ *(byte *)(puVar2 + 0xf);
  *(byte *)(puVar2 + 0xf) = bVar4;
  bVar4 = (bVar4 ^ *(byte *)(puVar1 + 0xf)) & 2 ^ bVar4;
  *(byte *)(puVar2 + 0xf) = bVar4;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = *(undefined4 *)((longlong)puVar1 + 0x7c);
  *(byte *)(puVar2 + 0xf) = (bVar4 ^ *(byte *)(puVar1 + 0xf)) & 4 ^ bVar4;
  if (*(int *)(puVar1 + 0x10) != -1) {
    *(int *)(puVar2 + 0x10) = *(int *)(puVar1 + 0x10);
  }
  uVar3 = puVar1[1];
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = puVar1[2];
  uVar3 = puVar1[7];
  puVar2[6] = puVar1[6];
  puVar2[7] = uVar3;
  puVar2[8] = puVar1[8];
  uVar3 = puVar1[10];
  puVar2[9] = puVar1[9];
  puVar2[10] = uVar3;
  puVar2[0xb] = puVar1[0xb];
  if ((*(byte *)(puVar1 + 0xf) & 2) != 0) {
    uVar3 = puVar1[4];
    puVar2[3] = puVar1[3];
    puVar2[4] = uVar3;
    puVar2[5] = puVar1[5];
  }
  if ((*(byte *)(puVar1 + 0xf) & 4) != 0) {
    uVar3 = puVar1[0xd];
    puVar2[0xc] = puVar1[0xc];
    puVar2[0xd] = uVar3;
    puVar2[0xe] = puVar1[0xe];
  }
  return;
}

// Dequantize @ 1484d2d30

void __cdecl
UE::Net::FRepMovementNetSerializer::Dequantize
          (FNetSerializationContext *param_1,FNetDequantizeArgs *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  FNetDequantizeArgs local_48;
  
  uVar1 = param_2->Source;
  uVar2 = param_2->Target;
  bVar5 = (*(byte *)(uVar2 + 0x78) ^ *(byte *)(uVar1 + 0x90)) & 1 ^ *(byte *)(uVar2 + 0x78);
  *(byte *)(uVar2 + 0x78) = bVar5;
  bVar5 = ((char)(*(ushort *)(uVar1 + 0x90) >> 1) * '\x02' ^ bVar5) & 2 ^ bVar5;
  *(byte *)(uVar2 + 0x78) = bVar5;
  if ((*(byte *)(uVar1 + 0x90) & 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(uVar1 + 0x88);
  }
  *(undefined4 *)(uVar2 + 0x7c) = uVar3;
  if ((*(byte *)(uVar1 + 0x90) & 8) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)(uVar1 + 0x8c);
  }
  *(undefined4 *)(uVar2 + 0x80) = uVar3;
  *(byte *)(uVar2 + 0x84) = *(byte *)(uVar1 + 0x90) >> 6;
  *(byte *)(uVar2 + 0x85) = *(byte *)(uVar1 + 0x90) >> 4 & 3;
  *(byte *)(uVar2 + 0x86) = *(byte *)(uVar1 + 0x91) & 1;
  *(byte *)(uVar2 + 0x78) =
       ((byte)((ushort)*(undefined2 *)(uVar1 + 0x90) >> 9) << 2 ^ bVar5) & 4 ^ bVar5;
  if ((*(ushort *)(uVar1 + 0x90) & 2) != 0) {
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar4 = *(ushort *)(uVar1 + 0x90) >> 4 & 3;
    local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
    local_48.Target = uVar2 + 0x18;
    local_48.Source = uVar1;
    (*VectorNetQuantizeNetSerializers[uVar4]->Dequantize)(param_1,&local_48);
  }
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar4 = *(ushort *)(uVar1 + 0x90) >> 4 & 3;
  local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
  local_48.Source = uVar1 + 0x20;
  local_48.Target = uVar2;
  (*VectorNetQuantizeNetSerializers[uVar4]->Dequantize)(param_1,&local_48);
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar4 = *(ushort *)(uVar1 + 0x90) >> 6 & 3;
  local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
  local_48.Source = uVar1 + 0x40;
  local_48.Target = uVar2 + 0x30;
  (*VectorNetQuantizeNetSerializers[uVar4]->Dequantize)(param_1,&local_48);
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar4 = *(byte *)(uVar1 + 0x91) & 1;
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_48._padding_ = (longlong)RotatorNetSerializerConfigs[uVar4];
  local_48.Source = uVar1 + 0x60;
  local_48.Target = uVar2 + 0x48;
  (*RotatorNetSerializers[uVar4]->Dequantize)(param_1,&local_48);
  if ((*(ushort *)(uVar1 + 0x90) >> 9 & 1) != 0) {
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar4 = *(ushort *)(uVar1 + 0x90) >> 4 & 3;
    local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
    local_48.Source = uVar1 + 0x68;
    local_48.Target = uVar2 + 0x60;
    (*VectorNetQuantizeNetSerializers[uVar4]->Dequantize)(param_1,&local_48);
  }
  return;
}

// Deserialize @ 1484d2fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FRepMovementNetSerializer::Deserialize
          (FNetSerializationContext *param_1,FNetDeserializeArgs *param_2)

{
  uint *puVar1;
  FNetBitStreamReader *this;
  undefined8 *puVar2;
  FName FVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FNetTracePacketContentEvent> FVar8;
  FNetTraceCollector *pFVar9;
  ushort uVar10;
  FNetTraceCollector *pFVar11;
  undefined1 auStack_128 [32];
  FNetDeserializeArgs local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  this = param_1->BitStreamReader;
  local_58 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uVar5 = FNetBitStreamReader::ReadBits(this,1);
  pFVar9 = (FNetTraceCollector *)0x0;
  if ((uVar5 & 1) != 0) {
    puVar1 = &this->BufferBitPosition;
    uVar5 = 0xffffffff;
    pFVar11 = pFVar9;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar11 = param_1->TraceCollector;
    }
    if (pFVar11 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,*puVar1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FlagsAndQuantizationLevels =
             CreatePersistentNetDebugName(L"FlagsAndQuantizationLevels",0x1a);
        _Init_thread_footer(&::_TSS0);
      }
      uVar6 = FNetTrace::TraceName(FlagsAndQuantizationLevels);
      FVar8 = (pFVar11->Events).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
      }
      *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    uVar6 = FNetBitStreamReader::ReadBits(this,9);
    FVar3 = GNetError_InvalidValue;
    uVar10 = ((((ushort)(uVar6 >> 8) & 1) << 2 | (ushort)(uVar6 >> 6) & 3) << 2 |
             (ushort)(uVar6 >> 4) & 3) << 4 | (ushort)local_58 & 0xfe00;
    local_58 = CONCAT62(local_58._2_6_,uVar10 | (ushort)uVar6 & 0xf);
    if ((VectorNetQuantizeNetSerializers[uVar10 >> 4 & 3] == (FNetSerializer *)0x0) ||
       (RotatorNetSerializers[uVar10 >> 8 & 1] == (FNetSerializer *)0x0)) {
      FNetSerializationContext::SetBitStreamOverflow(param_1);
      FNetErrorContext::SetError(&param_1->ErrorContext,FVar3);
      if (uVar5 == 0xffffffff) {
        return;
      }
      FNetTrace::EndPacketContentEvent(pFVar11,uVar5,*puVar1);
      return;
    }
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar11,uVar5,*puVar1);
    }
  }
  uVar4 = _tls_index;
  if ((local_58 & 2) != 0) {
    uVar5 = 0xffffffff;
    pFVar11 = pFVar9;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar11 = param_1->TraceCollector;
    }
    if (pFVar11 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,this->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar4 * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        AngularVelocity = CreatePersistentNetDebugName(L"AngularVelocity",0xf);
        _Init_thread_footer(&::_TSS0);
      }
      uVar6 = FNetTrace::TraceName(AngularVelocity);
      FVar8 = (pFVar11->Events).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
      }
      *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar6 = (uint)(local_58 >> 4) & 3;
    local_108._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
    local_108.Target = (ulong64)&local_e8;
    (*VectorNetQuantizeNetSerializers[uVar6]->Deserialize)(param_1,&local_108);
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar11,uVar5,this->BufferBitPosition);
    }
  }
  uVar5 = 0xffffffff;
  pFVar11 = pFVar9;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar11 = param_1->TraceCollector;
  }
  if (pFVar11 != (FNetTraceCollector *)0x0) {
    uVar5 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,this->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar4 * 8) + 0x9d4c
                 ) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      LinearVelocity = CreatePersistentNetDebugName(L"LinearVelocity",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(LinearVelocity);
    FVar8 = (pFVar11->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
  }
  local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar6 = (uint)(local_58 >> 4) & 3;
  local_108._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
  local_108.Target = (ulong64)&local_c8;
  (*VectorNetQuantizeNetSerializers[uVar6]->Deserialize)(param_1,&local_108);
  if (uVar5 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar11,uVar5,this->BufferBitPosition);
  }
  uVar5 = 0xffffffff;
  pFVar11 = pFVar9;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar11 = param_1->TraceCollector;
  }
  if (pFVar11 != (FNetTraceCollector *)0x0) {
    uVar5 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,this->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar4 * 8) + 0x9d4c
                 ) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Location = CreatePersistentNetDebugName(L"Location",8);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(Location);
    FVar8 = (pFVar11->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
  }
  local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar6 = (uint)(local_58 >> 6) & 3;
  local_108._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
  local_108.Target = (ulong64)&local_a8;
  (*VectorNetQuantizeNetSerializers[uVar6]->Deserialize)(param_1,&local_108);
  if (uVar5 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar11,uVar5,this->BufferBitPosition);
  }
  uVar5 = 0xffffffff;
  pFVar11 = pFVar9;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar11 = param_1->TraceCollector;
  }
  if (pFVar11 != (FNetTraceCollector *)0x0) {
    uVar5 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,this->BufferBitPosition);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar4 * 8) + 0x9d4c
                 ) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Rotation = CreatePersistentNetDebugName(L"Rotation",8);
      _Init_thread_footer(&::_TSS0);
    }
    uVar6 = FNetTrace::TraceName(Rotation);
    FVar8 = (pFVar11->Events).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
    }
    *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
  }
  local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar6 = (uint)(local_58 >> 8) & 1;
  local_108._padding_ = (longlong)RotatorNetSerializerConfigs[uVar6];
  local_108.Target = (ulong64)&local_88;
  (*RotatorNetSerializers[uVar6]->Deserialize)(param_1,&local_108);
  if (uVar5 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(pFVar11,uVar5,this->BufferBitPosition);
  }
  if ((local_58 & 4) == 0) {
    uStack_60 = uStack_60 & 0xffffffff00000000;
  }
  else {
    iVar7 = ReadPackedInt32(this);
    uStack_60 = CONCAT44(uStack_60._4_4_,iVar7);
  }
  if (((byte)local_58 & 8) == 0) {
    uStack_60 = CONCAT44(0xffffffff,(undefined4)uStack_60);
  }
  else {
    iVar7 = ReadPackedInt32(this);
    uStack_60 = CONCAT44(iVar7,(undefined4)uStack_60);
  }
  uVar5 = FNetBitStreamReader::ReadBits(this,1);
  local_58 = CONCAT62(local_58._2_6_,((ushort)uVar5 & 1) << 9 | (ushort)local_58 & 0xfdff);
  if ((uVar5 & 1) != 0) {
    uVar5 = 0xffffffff;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar9 = param_1->TraceCollector;
    }
    if (pFVar9 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar9,NameId,this->BufferBitPosition);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar4 * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Acceleration = CreatePersistentNetDebugName(L"Acceleration",0xc);
        _Init_thread_footer(&::_TSS0);
      }
      uVar6 = FNetTrace::TraceName(Acceleration);
      FVar8 = (pFVar9->Events).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar8 = (ForElementType<FNetTracePacketContentEvent>)&pFVar9->Events;
      }
      *(uint *)((longlong)FVar8 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_108._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_108._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar6 = (uint)(local_58 >> 4) & 3;
    local_108._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
    local_108.Target = (ulong64)&uStack_80;
    (*VectorNetQuantizeNetSerializers[uVar6]->Deserialize)(param_1,&local_108);
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar9,uVar5,this->BufferBitPosition);
    }
  }
  puVar2 = (undefined8 *)param_2->Target;
  *puVar2 = local_e8;
  puVar2[1] = uStack_e0;
  puVar2[2] = local_d8;
  puVar2[3] = uStack_d0;
  puVar2[4] = local_c8;
  puVar2[5] = uStack_c0;
  puVar2[6] = local_b8;
  puVar2[7] = uStack_b0;
  puVar2[8] = local_a8;
  puVar2[9] = uStack_a0;
  puVar2[10] = local_98;
  puVar2[0xb] = uStack_90;
  puVar2[0xc] = local_88;
  puVar2[0xd] = uStack_80;
  puVar2[0xe] = local_78;
  puVar2[0xf] = uStack_70;
  puVar2[0x10] = local_68;
  puVar2[0x11] = uStack_60;
  puVar2[0x12] = local_58;
  return;
}

// DeserializeDelta @ 1484d38f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FRepMovementNetSerializer::DeserializeDelta
          (FNetSerializationContext *param_1,FNetDeserializeDeltaArgs *param_2)

{
  FNetBitStreamReader *this;
  ulong64 uVar1;
  FNetSerializer *pFVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  _func___cdecl_void_FNetSerializationContext_ptr_FNetDeserializeDeltaArgs_ptr *p_Var8;
  ushort uVar9;
  ForElementType<FNetTracePacketContentEvent> FVar10;
  FNetTraceCollector *pFVar11;
  FNetTraceCollector *pFVar12;
  undefined1 auStackY_148 [32];
  FNetDeserializeDeltaArgs local_118;
  uint local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  this = param_1->BitStreamReader;
  uVar5 = FNetBitStreamReader::ReadBits(this,1);
  if ((uVar5 & 1) == 0) {
    Deserialize(param_1,(FNetDeserializeArgs *)param_2);
  }
  else {
    uVar1 = param_2->Prev;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = (ulonglong)*(ushort *)(uVar1 + 0x90) & 0xffffffffffff01f0;
    local_f0 = FNetBitStreamReader::ReadBits(this,4);
    pFVar11 = (FNetTraceCollector *)0x0;
    if ((local_f0 & 2) != 0) {
      uVar5 = 0xffffffff;
      pFVar12 = pFVar11;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar12 = param_1->TraceCollector;
      }
      if (pFVar12 != (FNetTraceCollector *)0x0) {
        uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,this->BufferBitPosition);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            AngularVelocity = CreatePersistentNetDebugName(L"AngularVelocity",0xf);
            _Init_thread_footer(&::_TSS0);
          }
        }
        uVar6 = FNetTrace::TraceName(AngularVelocity);
        FVar10 = (pFVar12->Events).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
        }
        *(uint *)((longlong)FVar10 + (ulonglong)uVar5 * 0x10) = uVar6;
      }
      local_118._padding_ = param_2->_padding_;
      local_118._padding_ = param_2->_padding_;
      uVar6 = (uint)(local_58 >> 4) & 3;
      local_118._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
      local_118._padding_ = (longlong)&local_e8;
      if ((*(byte *)(uVar1 + 0x90) & 2) == 0) {
        p_Var8 = (_func___cdecl_void_FNetSerializationContext_ptr_FNetDeserializeDeltaArgs_ptr *)
                 VectorNetQuantizeNetSerializers[uVar6]->Deserialize;
      }
      else {
        p_Var8 = VectorNetQuantizeNetSerializers[uVar6]->DeserializeDelta;
      }
      local_118.Prev = uVar1;
      (*p_Var8)(param_1,&local_118);
      if (uVar5 != 0xffffffff) {
        FNetTrace::EndPacketContentEvent(pFVar12,uVar5,this->BufferBitPosition);
      }
    }
    uVar5 = 0xffffffff;
    pFVar12 = pFVar11;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_1->TraceCollector;
    }
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,this->BufferBitPosition);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          LinearVelocity = CreatePersistentNetDebugName(L"LinearVelocity",0xe);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar6 = FNetTrace::TraceName(LinearVelocity);
      FVar10 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar10 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    local_118._padding_ = param_2->_padding_;
    local_118._padding_ = param_2->_padding_;
    uVar6 = (uint)(local_58 >> 4) & 3;
    local_118._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
    local_118._padding_ = (longlong)&local_c8;
    local_118.Prev = uVar1 + 0x20;
    (*VectorNetQuantizeNetSerializers[uVar6]->DeserializeDelta)(param_1,&local_118);
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar12,uVar5,this->BufferBitPosition);
    }
    uVar5 = 0xffffffff;
    pFVar12 = pFVar11;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_1->TraceCollector;
    }
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,this->BufferBitPosition);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          Location = CreatePersistentNetDebugName(L"Location",8);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar6 = FNetTrace::TraceName(Location);
      FVar10 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar10 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    local_118._padding_ = param_2->_padding_;
    local_118._padding_ = param_2->_padding_;
    uVar6 = (uint)(local_58 >> 6) & 3;
    local_118._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
    local_118._padding_ = (longlong)&local_a8;
    local_118.Prev = uVar1 + 0x40;
    (*VectorNetQuantizeNetSerializers[uVar6]->DeserializeDelta)(param_1,&local_118);
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar12,uVar5,this->BufferBitPosition);
    }
    uVar5 = 0xffffffff;
    pFVar12 = pFVar11;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_1->TraceCollector;
    }
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,this->BufferBitPosition);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          Rotation = CreatePersistentNetDebugName(L"Rotation",8);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar6 = FNetTrace::TraceName(Rotation);
      FVar10 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar10 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    local_118._padding_ = param_2->_padding_;
    local_118._padding_ = param_2->_padding_;
    uVar6 = (uint)(local_58 >> 8) & 1;
    local_118._padding_ = (longlong)RotatorNetSerializerConfigs[uVar6];
    local_118._padding_ = (longlong)&local_88;
    local_118.Prev = uVar1 + 0x60;
    (*RotatorNetSerializers[uVar6]->DeserializeDelta)(param_1,&local_118);
    if (uVar5 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar12,uVar5,this->BufferBitPosition);
    }
    uVar5 = local_f0;
    if ((local_f0 & 4) == 0) {
      uStack_60 = CONCAT44(uStack_60._4_4_,*(int *)(uVar1 + 0x88));
    }
    else {
      DeserializeIntDelta(this,(int *)&uStack_60,*(int *)(uVar1 + 0x88),"",3,' ');
    }
    iVar7 = *(int *)(uVar1 + 0x8c);
    if ((uVar5 & 8) == 0) {
      uStack_60 = CONCAT44(iVar7,(int)uStack_60);
    }
    else {
      DeserializeIntDelta(this,(int *)((longlong)&uStack_60 + 4),iVar7,"",3,' ');
      iVar7 = uStack_60._4_4_;
    }
    uVar4 = 0;
    uVar9 = uVar4;
    if (iVar7 != -1) {
      uVar9 = 8;
    }
    if (0 < (int)uStack_60) {
      uVar4 = 4;
    }
    uVar6 = 0xffffffff;
    local_58 = CONCAT62(local_58._2_6_,uVar9 | uVar4 | (ushort)uVar5 & 3 | (ushort)local_58 & 0xfff0
                       );
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar11 = param_1->TraceCollector;
    }
    if (pFVar11 != (FNetTraceCollector *)0x0) {
      uVar6 = FNetTrace::BeginPacketContentEvent(pFVar11,NameId,this->BufferBitPosition);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          Acceleration = CreatePersistentNetDebugName(L"Acceleration",0xc);
          _Init_thread_footer(&::_TSS0);
        }
      }
      uVar5 = FNetTrace::TraceName(Acceleration);
      FVar10 = (pFVar11->Events).AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar10 = (ForElementType<FNetTracePacketContentEvent>)&pFVar11->Events;
      }
      *(uint *)((longlong)FVar10 + (ulonglong)uVar6 * 0x10) = uVar5;
    }
    local_118._padding_ = param_2->_padding_;
    local_118._padding_ = param_2->_padding_;
    uVar5 = (uint)(local_58 >> 4) & 3;
    pFVar2 = VectorNetQuantizeNetSerializers[uVar5];
    local_118._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar5];
    local_118._padding_ = (longlong)&uStack_80;
    local_118.Prev = uVar1 + 0x68;
    uVar5 = FNetBitStreamReader::ReadBits(this,1);
    local_58 = CONCAT62(local_58._2_6_,((ushort)uVar5 & 1) << 9 | (ushort)local_58 & 0xfdff);
    if ((uVar5 & 1) != 0) {
      if ((*(ushort *)(uVar1 + 0x90) & 0x200) == 0) {
        p_Var8 = (_func___cdecl_void_FNetSerializationContext_ptr_FNetDeserializeDeltaArgs_ptr *)
                 pFVar2->Deserialize;
      }
      else {
        p_Var8 = pFVar2->DeserializeDelta;
      }
      (*p_Var8)(param_1,&local_118);
    }
    if (uVar6 != 0xffffffff) {
      FNetTrace::EndPacketContentEvent(pFVar11,uVar6,this->BufferBitPosition);
    }
    puVar3 = (undefined8 *)param_2->_padding_;
    *puVar3 = local_e8;
    puVar3[1] = uStack_e0;
    puVar3[2] = local_d8;
    puVar3[3] = uStack_d0;
    puVar3[4] = local_c8;
    puVar3[5] = uStack_c0;
    puVar3[6] = local_b8;
    puVar3[7] = uStack_b0;
    puVar3[8] = local_a8;
    puVar3[9] = uStack_a0;
    puVar3[10] = local_98;
    puVar3[0xb] = uStack_90;
    puVar3[0xc] = local_88;
    puVar3[0xd] = uStack_80;
    puVar3[0xe] = local_78;
    puVar3[0xf] = uStack_70;
    puVar3[0x10] = local_68;
    puVar3[0x11] = uStack_60;
    puVar3[0x12] = local_58;
  }
  return;
}

// IsEqual @ 1484e07f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Net::FRepMovementNetSerializer::IsEqual
          (FNetSerializationContext *param_1,FNetIsEqualArgs *param_2)

{
  int iVar1;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined1 auStack_1a8 [32];
  FNetQuantizeArgs local_188;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if (param_2->bStateIsQuantized == false) {
    local_28 = 0;
    local_c8 = 0;
    local_188._padding_ = 0;
    local_188._padding_._0_4_ = 0;
    local_188._padding_ = param_2->_padding_;
    local_188.Source = param_2->Source0;
    local_188.Target = (ulong64)&local_b8;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    Quantize(param_1,&local_188);
    local_188.Source = param_2->Source1;
    local_188.Target = (ulong64)&local_158;
    Quantize(param_1,&local_188);
    _Buf2 = &local_158;
    _Buf1 = &local_b8;
  }
  else {
    _Buf2 = (undefined8 *)param_2->Source1;
    _Buf1 = (undefined8 *)param_2->Source0;
  }
  iVar1 = memcmp(_Buf1,_Buf2,0x98);
  return iVar1 == 0;
}

// Quantize @ 1484e8030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Net::FRepMovementNetSerializer::Quantize
          (FNetSerializationContext *param_1,FNetQuantizeArgs *param_2)

{
  ulong64 uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 auStack_118 [32];
  FNetQuantizeArgs local_f8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  uVar1 = param_2->Source;
  local_48 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar4 = 0;
  uVar3 = ((((ushort)(*(byte *)(uVar1 + 0x86) & 1) << 2 | (ushort)(*(byte *)(uVar1 + 0x84) & 3)) <<
            2 | (ushort)(*(byte *)(uVar1 + 0x85) & 3)) << 3 |
          (ushort)(*(byte *)(uVar1 + 0x78) >> 1 & 1)) * 2;
  uVar5 = 0;
  if (*(int *)(uVar1 + 0x80) != -1) {
    uVar5 = 8;
  }
  if (0 < *(int *)(uVar1 + 0x7c)) {
    uVar4 = 4;
  }
  uStack_40 = *(undefined8 *)(uVar1 + 0x7c);
  uVar5 = (ushort)(*(byte *)(uVar1 + 0x78) >> 2 & 1) << 9 |
          uVar3 | *(byte *)(uVar1 + 0x78) & 1 | uVar5 | uVar4;
  local_38 = (ulonglong)uVar5;
  if ((uVar3 & 2) != 0) {
    local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar6 = uVar5 >> 4 & 3;
    local_f8._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
    local_f8.Source = uVar1 + 0x18;
    local_f8.Target = (ulong64)&local_c8;
    (*VectorNetQuantizeNetSerializers[uVar6]->Quantize)(param_1,&local_f8);
  }
  local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar6 = (uint)(local_38 >> 4) & 3;
  local_f8._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
  local_f8.Target = (ulong64)&local_a8;
  local_f8.Source = uVar1;
  (*VectorNetQuantizeNetSerializers[uVar6]->Quantize)(param_1,&local_f8);
  local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar6 = (uint)(local_38 >> 6) & 3;
  local_f8._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
  local_f8.Source = uVar1 + 0x30;
  local_f8.Target = (ulong64)&local_88;
  (*VectorNetQuantizeNetSerializers[uVar6]->Quantize)(param_1,&local_f8);
  local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar6 = (uint)(local_38 >> 8) & 1;
  local_f8._padding_ = (longlong)RotatorNetSerializerConfigs[uVar6];
  local_f8.Source = uVar1 + 0x48;
  local_f8.Target = (ulong64)&local_68;
  (*RotatorNetSerializers[uVar6]->Quantize)(param_1,&local_f8);
  if ((local_38 & 0x200) != 0) {
    local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_f8._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_f8._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar6 = (uint)(local_38 >> 4) & 3;
    local_f8._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
    local_f8.Source = uVar1 + 0x60;
    local_f8.Target = (ulong64)&uStack_60;
    (*VectorNetQuantizeNetSerializers[uVar6]->Quantize)(param_1,&local_f8);
  }
  puVar2 = (undefined8 *)param_2->Target;
  *puVar2 = local_c8;
  puVar2[1] = uStack_c0;
  puVar2[2] = local_b8;
  puVar2[3] = uStack_b0;
  puVar2[4] = local_a8;
  puVar2[5] = uStack_a0;
  puVar2[6] = local_98;
  puVar2[7] = uStack_90;
  puVar2[8] = local_88;
  puVar2[9] = uStack_80;
  puVar2[10] = local_78;
  puVar2[0xb] = uStack_70;
  puVar2[0xc] = local_68;
  puVar2[0xd] = uStack_60;
  puVar2[0xe] = local_58;
  puVar2[0xf] = uStack_50;
  puVar2[0x10] = local_48;
  puVar2[0x11] = uStack_40;
  puVar2[0x12] = local_38;
  return;
}

// Serialize @ 1484f8420

void __cdecl
UE::Net::FRepMovementNetSerializer::Serialize
          (FNetSerializationContext *param_1,FNetSerializeArgs *param_2)

{
  ushort uVar1;
  ulong64 uVar2;
  FNetBitStreamWriter *this;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<FNetTracePacketContentEvent> FVar6;
  FNetTraceCollector *pFVar7;
  ulonglong uVar8;
  uint uVar9;
  FNetSerializeArgs local_48;
  
  uVar2 = param_2->Source;
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)(uVar2 + 0x90);
  uVar9 = (((uVar1 >> 8 & 1) << 2 | uVar1 >> 6 & 3) << 2 | uVar1 >> 4 & 3) << 4 | uVar1 & 0xf;
  FNetBitStreamWriter::WriteBits(this,(uint)(uVar9 != 0),1);
  if (uVar9 != 0) {
    pFVar7 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar7 = param_1->TraceCollector;
    }
    if (pFVar7 == (FNetTraceCollector *)0x0) {
      FNetBitStreamWriter::WriteBits(this,uVar9,9);
    }
    else {
      uVar4 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar4 = 0;
      }
      uVar4 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar4);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        FlagsAndQuantizationLevels =
             CreatePersistentNetDebugName(L"FlagsAndQuantizationLevels",0x1a);
        _Init_thread_footer(&::_TSS0);
      }
      uVar5 = FNetTrace::TraceName(FlagsAndQuantizationLevels);
      FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
      }
      *(uint *)((longlong)FVar6 + (ulonglong)uVar4 * 0x10) = uVar5;
      FNetBitStreamWriter::WriteBits(this,uVar9,9);
      if (uVar4 != 0xffffffff) {
        uVar9 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar9 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar7,uVar4,uVar9);
      }
    }
  }
  if ((*(byte *)(uVar2 + 0x90) & 2) != 0) {
    uVar9 = 0xffffffff;
    pFVar7 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar7 = param_1->TraceCollector;
    }
    if (pFVar7 != (FNetTraceCollector *)0x0) {
      uVar9 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar9 = 0;
      }
      uVar9 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar9);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        AngularVelocity = CreatePersistentNetDebugName(L"AngularVelocity",0xf);
        _Init_thread_footer(&::_TSS0);
      }
      uVar4 = FNetTrace::TraceName(AngularVelocity);
      FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
      }
      *(uint *)((longlong)FVar6 + (ulonglong)uVar9 * 0x10) = uVar4;
    }
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar4 = *(ushort *)(uVar2 + 0x90) >> 4 & 3;
    local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
    local_48.Source = uVar2;
    (*VectorNetQuantizeNetSerializers[uVar4]->Serialize)(param_1,&local_48);
    if (uVar9 != 0xffffffff) {
      uVar4 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar4 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar7,uVar9,uVar4);
    }
  }
  uVar9 = 0xffffffff;
  pFVar7 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar7 = param_1->TraceCollector;
  }
  if (pFVar7 != (FNetTraceCollector *)0x0) {
    uVar9 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar9 = 0;
    }
    uVar9 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar9);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      LinearVelocity = CreatePersistentNetDebugName(L"LinearVelocity",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar4 = FNetTrace::TraceName(LinearVelocity);
    FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
    }
    *(uint *)((longlong)FVar6 + (ulonglong)uVar9 * 0x10) = uVar4;
  }
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar4 = *(ushort *)(uVar2 + 0x90) >> 4 & 3;
  local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
  local_48.Source = uVar2 + 0x20;
  (*VectorNetQuantizeNetSerializers[uVar4]->Serialize)(param_1,&local_48);
  if (uVar9 != 0xffffffff) {
    uVar4 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar4 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar7,uVar9,uVar4);
  }
  uVar9 = 0xffffffff;
  pFVar7 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar7 = param_1->TraceCollector;
  }
  if (pFVar7 != (FNetTraceCollector *)0x0) {
    uVar9 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar9 = 0;
    }
    uVar9 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar9);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Location = CreatePersistentNetDebugName(L"Location",8);
      _Init_thread_footer(&::_TSS0);
    }
    uVar4 = FNetTrace::TraceName(Location);
    FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
    }
    *(uint *)((longlong)FVar6 + (ulonglong)uVar9 * 0x10) = uVar4;
  }
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar4 = *(ushort *)(uVar2 + 0x90) >> 6 & 3;
  local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
  local_48.Source = uVar2 + 0x40;
  (*VectorNetQuantizeNetSerializers[uVar4]->Serialize)(param_1,&local_48);
  if (uVar9 != 0xffffffff) {
    uVar4 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar4 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar7,uVar9,uVar4);
  }
  pFVar7 = (FNetTraceCollector *)0x0;
  if (1 < GNetTraceRuntimeVerbosity) {
    pFVar7 = param_1->TraceCollector;
  }
  uVar9 = 0xffffffff;
  if (pFVar7 == (FNetTraceCollector *)0x0) {
    uVar8 = (ulonglong)_tls_index;
  }
  else {
    uVar9 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar9 = 0;
    }
    uVar9 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar9);
    uVar8 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      Rotation = CreatePersistentNetDebugName(L"Rotation",8);
      _Init_thread_footer(&::_TSS0);
    }
    uVar4 = FNetTrace::TraceName(Rotation);
    FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
    }
    *(uint *)((longlong)FVar6 + (ulonglong)uVar9 * 0x10) = uVar4;
  }
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  uVar4 = *(byte *)(uVar2 + 0x91) & 1;
  local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_48._padding_ = (longlong)RotatorNetSerializerConfigs[uVar4];
  local_48.Source = uVar2 + 0x60;
  (*RotatorNetSerializers[uVar4]->Serialize)(param_1,&local_48);
  if (uVar9 != 0xffffffff) {
    uVar4 = this->BufferBitPosition;
    if (this->OverflowBitCount != 0) {
      uVar4 = 0;
    }
    FNetTrace::EndPacketContentEvent(pFVar7,uVar9,uVar4);
  }
  if ((*(byte *)(uVar2 + 0x90) & 4) != 0) {
    WritePackedInt32(this,*(int *)(uVar2 + 0x88));
  }
  if ((*(byte *)(uVar2 + 0x90) & 8) != 0) {
    WritePackedInt32(this,*(int *)(uVar2 + 0x8c));
  }
  bVar3 = (byte)((ushort)*(undefined2 *)(uVar2 + 0x90) >> 9) & 1;
  FNetBitStreamWriter::WriteBits(this,(uint)(bVar3 != 0),1);
  if (bVar3 != 0) {
    uVar9 = 0xffffffff;
    pFVar7 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar7 = param_1->TraceCollector;
    }
    if (pFVar7 != (FNetTraceCollector *)0x0) {
      uVar9 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar9 = 0;
      }
      uVar9 = FNetTrace::BeginPacketContentEvent(pFVar7,NameId,uVar9);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
           ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Acceleration = CreatePersistentNetDebugName(L"Acceleration",0xc);
        _Init_thread_footer(&::_TSS0);
      }
      uVar4 = FNetTrace::TraceName(Acceleration);
      FVar6 = (pFVar7->Events).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar6 = (ForElementType<FNetTracePacketContentEvent>)&pFVar7->Events;
      }
      *(uint *)((longlong)FVar6 + (ulonglong)uVar9 * 0x10) = uVar4;
    }
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_48._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_48._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar4 = *(ushort *)(uVar2 + 0x90) >> 4 & 3;
    local_48._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar4];
    local_48.Source = uVar2 + 0x68;
    (*VectorNetQuantizeNetSerializers[uVar4]->Serialize)(param_1,&local_48);
    if (uVar9 != 0xffffffff) {
      uVar4 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar4 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar7,uVar9,uVar4);
    }
  }
  return;
}

// SerializeDelta @ 1484f90a0

void __cdecl
UE::Net::FRepMovementNetSerializer::SerializeDelta
          (FNetSerializationContext *param_1,FNetSerializeDeltaArgs *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong64 uVar3;
  longlong lVar4;
  FNetBitStreamWriter *this;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  _func___cdecl_void_FNetSerializationContext_ptr_FNetSerializeDeltaArgs_ptr *p_Var9;
  byte bVar10;
  ForElementType<FNetTracePacketContentEvent> FVar11;
  FNetTraceCollector *pFVar12;
  uint local_res8;
  FNetSerializeDeltaArgs local_78;
  
  uVar3 = param_2->Prev;
  lVar4 = param_2->_padding_;
  this = param_1->BitStreamWriter;
  uVar1 = *(ushort *)(uVar3 + 0x90);
  uVar2 = *(ushort *)(lVar4 + 0x90);
  bVar10 = 0;
  if (((uVar1 ^ uVar2) & 0x30) == 0) {
    bVar10 = (~(byte)(uVar1 >> 8) ^ (byte)(uVar2 >> 8)) & ((uVar1 ^ uVar2) & 0xc0) == 0;
  }
  FNetBitStreamWriter::WriteBits(this,(uint)(bVar10 != 0),1);
  if (bVar10 != 0) {
    uVar8 = 0;
    uVar7 = uVar8;
    if (*(int *)(lVar4 + 0x8c) != *(int *)(uVar3 + 0x8c)) {
      uVar7 = 8;
    }
    uVar1 = *(ushort *)(lVar4 + 0x90);
    if (*(int *)(lVar4 + 0x88) != *(int *)(uVar3 + 0x88)) {
      uVar8 = 4;
    }
    FNetBitStreamWriter::WriteBits(this,uVar7 | uVar8 | uVar1 & 3,4);
    if ((uVar1 & 2) != 0) {
      uVar5 = 0xffffffff;
      pFVar12 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar12 = param_1->TraceCollector;
      }
      if (pFVar12 != (FNetTraceCollector *)0x0) {
        uVar5 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar5 = 0;
        }
        uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar5);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          AngularVelocity = CreatePersistentNetDebugName(L"AngularVelocity",0xf);
          _Init_thread_footer(&::_TSS0);
        }
        uVar6 = FNetTrace::TraceName(AngularVelocity);
        FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
        }
        *(uint *)((longlong)FVar11 + (ulonglong)uVar5 * 0x10) = uVar6;
      }
      local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      uVar6 = *(ushort *)(lVar4 + 0x90) >> 4 & 3;
      local_78._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
      if ((*(byte *)(uVar3 + 0x90) & 2) == 0) {
        p_Var9 = (_func___cdecl_void_FNetSerializationContext_ptr_FNetSerializeDeltaArgs_ptr *)
                 VectorNetQuantizeNetSerializers[uVar6]->Serialize;
      }
      else {
        p_Var9 = VectorNetQuantizeNetSerializers[uVar6]->SerializeDelta;
      }
      local_78._padding_ = lVar4;
      local_78.Prev = uVar3;
      (*p_Var9)(param_1,&local_78);
      if (uVar5 != 0xffffffff) {
        uVar6 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar6 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar12,uVar5,uVar6);
      }
    }
    pFVar12 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_1->TraceCollector;
    }
    local_res8 = 0xffffffff;
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar5 = 0;
      }
      local_res8 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar5);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        LinearVelocity = CreatePersistentNetDebugName(L"LinearVelocity",0xe);
        _Init_thread_footer(&::_TSS0);
      }
      uVar5 = FNetTrace::TraceName(LinearVelocity);
      FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar11 + (ulonglong)local_res8 * 0x10) = uVar5;
    }
    local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar5 = *(ushort *)(lVar4 + 0x90) >> 4 & 3;
    local_78._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar5];
    local_78._padding_ = lVar4 + 0x20;
    local_78.Prev = uVar3 + 0x20;
    (*VectorNetQuantizeNetSerializers[uVar5]->SerializeDelta)(param_1,&local_78);
    if (local_res8 != 0xffffffff) {
      uVar5 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar5 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar12,local_res8,uVar5);
    }
    uVar5 = 0xffffffff;
    pFVar12 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_1->TraceCollector;
    }
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar5 = 0;
      }
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar5);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Location = CreatePersistentNetDebugName(L"Location",8);
        _Init_thread_footer(&::_TSS0);
      }
      uVar6 = FNetTrace::TraceName(Location);
      FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar11 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar6 = *(ushort *)(lVar4 + 0x90) >> 6 & 3;
    local_78._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar6];
    local_78._padding_ = lVar4 + 0x40;
    local_78.Prev = uVar3 + 0x40;
    (*VectorNetQuantizeNetSerializers[uVar6]->SerializeDelta)(param_1,&local_78);
    if (uVar5 != 0xffffffff) {
      uVar6 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar6 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar12,uVar5,uVar6);
    }
    pFVar12 = (FNetTraceCollector *)0x0;
    if (1 < GNetTraceRuntimeVerbosity) {
      pFVar12 = param_1->TraceCollector;
    }
    uVar5 = 0xffffffff;
    if (pFVar12 != (FNetTraceCollector *)0x0) {
      uVar5 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar5 = 0;
      }
      uVar5 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar5);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        Rotation = CreatePersistentNetDebugName(L"Rotation",8);
        _Init_thread_footer(&::_TSS0);
      }
      uVar6 = FNetTrace::TraceName(Rotation);
      FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
        FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
      }
      *(uint *)((longlong)FVar11 + (ulonglong)uVar5 * 0x10) = uVar6;
    }
    local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    uVar6 = *(byte *)(lVar4 + 0x91) & 1;
    local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
    local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
    local_78._padding_ = (longlong)RotatorNetSerializerConfigs[uVar6];
    local_78._padding_ = lVar4 + 0x60;
    local_78.Prev = uVar3 + 0x60;
    (*RotatorNetSerializers[uVar6]->SerializeDelta)(param_1,&local_78);
    if (uVar5 != 0xffffffff) {
      uVar6 = this->BufferBitPosition;
      if (this->OverflowBitCount != 0) {
        uVar6 = 0;
      }
      FNetTrace::EndPacketContentEvent(pFVar12,uVar5,uVar6);
    }
    if (uVar8 != 0) {
      SerializeIntDelta(this,*(int *)(lVar4 + 0x88),*(int *)(uVar3 + 0x88),"",3,' ');
    }
    if (uVar7 != 0) {
      SerializeIntDelta(this,*(int *)(lVar4 + 0x8c),*(int *)(uVar3 + 0x8c),"",3,' ');
    }
    local_res8._0_1_ = (byte)((ushort)*(undefined2 *)(lVar4 + 0x90) >> 9) & 1;
    FNetBitStreamWriter::WriteBits(this,(uint)((byte)local_res8 != 0),1);
    if ((*(ushort *)(lVar4 + 0x90) & 0x200) != 0) {
      uVar7 = 0xffffffff;
      pFVar12 = (FNetTraceCollector *)0x0;
      if (1 < GNetTraceRuntimeVerbosity) {
        pFVar12 = param_1->TraceCollector;
      }
      if (pFVar12 != (FNetTraceCollector *)0x0) {
        uVar7 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar7 = 0;
        }
        uVar7 = FNetTrace::BeginPacketContentEvent(pFVar12,NameId,uVar7);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          Acceleration = CreatePersistentNetDebugName(L"Acceleration",0xc);
          _Init_thread_footer(&::_TSS0);
        }
        uVar8 = FNetTrace::TraceName(Acceleration);
        FVar11 = (pFVar12->Events).AllocatorInstance.SecondaryData;
        if (FVar11 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar11 = (ForElementType<FNetTracePacketContentEvent>)&pFVar12->Events;
        }
        *(uint *)((longlong)FVar11 + (ulonglong)uVar7 * 0x10) = uVar8;
      }
      local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      local_78._padding_._0_4_ = (undefined4)param_2->_padding_;
      local_78._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
      uVar8 = *(ushort *)(lVar4 + 0x90) >> 4 & 3;
      local_78._padding_ = (longlong)VectorNetQuantizeNetSerializerConfigs[uVar8];
      local_78._padding_ = lVar4 + 0x68;
      local_78.Prev = uVar3 + 0x68;
      if ((*(ushort *)(uVar3 + 0x90) & 0x200) == 0) {
        p_Var9 = (_func___cdecl_void_FNetSerializationContext_ptr_FNetSerializeDeltaArgs_ptr *)
                 VectorNetQuantizeNetSerializers[uVar8]->Serialize;
      }
      else {
        p_Var9 = VectorNetQuantizeNetSerializers[uVar8]->SerializeDelta;
      }
      (*p_Var9)(param_1,&local_78);
      if (uVar7 != 0xffffffff) {
        uVar8 = this->BufferBitPosition;
        if (this->OverflowBitCount != 0) {
          uVar8 = 0;
        }
        FNetTrace::EndPacketContentEvent(pFVar12,uVar7,uVar8);
      }
    }
    return;
  }
  Serialize(param_1,(FNetSerializeArgs *)param_2);
  return;
}

// Validate @ 148501330

bool __cdecl
UE::Net::FRepMovementNetSerializer::Validate
          (FNetSerializationContext *param_1,FNetValidateArgs *param_2)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  FNetValidateArgs local_28;
  
  pdVar1 = (double *)param_2->Source;
  if (((*(byte *)((longlong)pdVar1 + 0x84) < 3 &&
        (*(byte *)((longlong)pdVar1 + 0x86) < 2 && *(byte *)((longlong)pdVar1 + 0x85) < 3)) &&
      ((((ulonglong)pdVar1[0xf] & 2) == 0 ||
       (((iVar3 = _finite(pdVar1[3]), iVar3 != 0 && (iVar3 = _finite(pdVar1[4]), iVar3 != 0)) &&
        (iVar3 = _finite(pdVar1[5]), iVar3 != 0)))))) &&
     ((((iVar3 = _finite(*pdVar1), iVar3 != 0 && (iVar3 = _finite(pdVar1[1]), iVar3 != 0)) &&
       (iVar3 = _finite(pdVar1[2]), iVar3 != 0)) &&
      ((bVar2 = UE::Math::TVector<double>::ContainsNaN((TVector<double> *)(pdVar1 + 6)), !bVar2 &&
       ((((ulonglong)pdVar1[0xf] & 4) == 0 ||
        (bVar2 = UE::Math::TVector<double>::ContainsNaN((TVector<double> *)(pdVar1 + 0xc)), !bVar2))
       )))))) {
    local_28._padding_ = (longlong)RotatorNetSerializerConfigs[0];
    local_28.Source = (ulong64)(pdVar1 + 9);
    local_28._padding_ = 0;
    local_28._padding_._0_4_ = 0;
    bVar2 = (*RotatorNetSerializers[0]->Validate)(param_1,&local_28);
    return bVar2;
  }
  return false;
}

