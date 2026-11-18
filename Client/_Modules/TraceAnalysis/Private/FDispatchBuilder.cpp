// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 11

// FDispatchBuilder @ 14d38f4a0

FDispatchBuilder * __thiscall UE::Trace::FDispatchBuilder::FDispatchBuilder(FDispatchBuilder *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->Buffer).ArrayNum;
  piVar2 = &(this->Buffer).ArrayMax;
  *piVar1 = 0;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameBuffer).ArrayNum = 0;
  (this->NameBuffer).ArrayMax = 0;
  *piVar2 = 0;
  iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x10,(ForAnyElementType *)this,piVar1,piVar2);
  pFVar4 = (this->Buffer).AllocatorInstance.Data + iVar3;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)(pFVar4 + 8) = 0;
  pFVar4 = (this->Buffer).AllocatorInstance.Data;
  *(undefined4 *)(pFVar4 + 0xc) = 0;
  *(undefined4 *)pFVar4 = 0;
  *(undefined2 *)(pFVar4 + 4) = 0;
  *(undefined4 *)(pFVar4 + 6) = 0;
  *(undefined2 *)(pFVar4 + 10) = 0;
  return this;
}

// AddField @ 14d3973a0

FField * __thiscall
UE::Trace::FDispatchBuilder::AddField
          (FDispatchBuilder *this,char *param_1,int param_2,ushort param_3)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FField *pFVar9;
  
  uVar7 = (ulonglong)(uint)param_2;
  iVar3 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0x10,(ForAnyElementType *)this,&(this->Buffer).ArrayNum,
                     &(this->Buffer).ArrayMax);
  pFVar9 = (FField *)((this->Buffer).AllocatorInstance.Data + iVar3);
  iVar3 = param_2;
  if (param_2 < 0) {
    sVar6 = strlen(param_1);
    iVar3 = (int)sVar6;
  }
  iVar4 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3 + 1,&(this->NameBuffer).AllocatorInstance,
                     &(this->NameBuffer).ArrayNum,&(this->NameBuffer).ArrayMax);
  pFVar8 = (this->NameBuffer).AllocatorInstance.Data + iVar4;
  memcpy(pFVar8,param_1,(longlong)iVar3);
  pFVar8[iVar3] = (FScriptContainerElement)0x0;
  pFVar9->Size = param_3;
  uVar5 = 0x811c9dc5;
  pFVar9->NameOffset = (ushort)iVar4;
  pFVar9->RefUid = 0;
  if (param_2 != 0) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar5 = (bVar1 ^ uVar5) * 0x1000193;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  pFVar9->Hash = uVar5;
  pFVar2 = (this->Buffer).AllocatorInstance.Data;
  pFVar8 = pFVar2 + 6;
  *pFVar8 = (FScriptContainerElement)((char)*pFVar8 + '\x01');
  pFVar2 = pFVar2 + 8;
  *(ushort *)pFVar2 = *(short *)pFVar2 + pFVar9->Size;
  return pFVar9;
}

// AppendName @ 14d397d50

uint __thiscall
UE::Trace::FDispatchBuilder::AppendName(FDispatchBuilder *this,char *param_1,int param_2)

{
  uint uVar1;
  size_t sVar2;
  FScriptContainerElement *_Dst;
  
  if (param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  uVar1 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2 + 1,&(this->NameBuffer).AllocatorInstance,
                     &(this->NameBuffer).ArrayNum,&(this->NameBuffer).ArrayMax);
  _Dst = (this->NameBuffer).AllocatorInstance.Data + (int)uVar1;
  memcpy(_Dst,param_1,(longlong)param_2);
  _Dst[param_2] = (FScriptContainerElement)0x0;
  return uVar1;
}

// Finalize @ 14d39c050

FDispatch * __thiscall UE::Trace::FDispatchBuilder::Finalize(FDispatchBuilder *this)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  FDispatch *_Dst;
  ushort *puVar4;
  ulonglong uVar5;
  byte *pbVar6;
  
  _Dst = FMemory::Malloc((longlong)((this->Buffer).ArrayNum + (this->NameBuffer).ArrayNum),0);
  memcpy(_Dst,(this->Buffer).AllocatorInstance.Data,(longlong)(this->Buffer).ArrayNum);
  memcpy(_Dst + (ulonglong)_Dst->FieldCount + 1,(this->NameBuffer).AllocatorInstance.Data,
         (longlong)(this->NameBuffer).ArrayNum);
  if (_Dst->FieldCount != 0) {
    puVar4 = &_Dst[1].EventSize;
    uVar5 = (ulonglong)_Dst->FieldCount;
    do {
      *puVar4 = *puVar4 + ((short)_Dst - (short)puVar4) + 8 + (short)(this->Buffer).ArrayNum;
      puVar4 = puVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((_Dst->LoggerNameOffset != 0) || (_Dst->EventNameOffset != 0)) {
    uVar2 = _Dst->LoggerNameOffset + (short)(this->Buffer).ArrayNum;
    _Dst->LoggerNameOffset = uVar2;
    pbVar6 = (byte *)((longlong)&_Dst->Hash + (ulonglong)uVar2);
    _Dst->EventNameOffset = _Dst->EventNameOffset + (short)(this->Buffer).ArrayNum;
    uVar3 = 0x811c9dc5;
    bVar1 = *pbVar6;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      uVar3 = (bVar1 ^ uVar3) * 0x1000193;
      bVar1 = *pbVar6;
    }
    pbVar6 = (byte *)((longlong)&_Dst->Hash + (ulonglong)_Dst->EventNameOffset);
    bVar1 = *pbVar6;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      uVar3 = (bVar1 ^ uVar3) * 0x1000193;
      bVar1 = *pbVar6;
    }
    _Dst->Hash = uVar3;
  }
  return _Dst;
}

// SetDefinition @ 14d3a7b00

void __thiscall UE::Trace::FDispatchBuilder::SetDefinition(FDispatchBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data + 7;
  *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 8);
  return;
}

// SetEventName @ 14d3a7b10

void __thiscall
UE::Trace::FDispatchBuilder::SetEventName(FDispatchBuilder *this,char *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  size_t sVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (param_2 < 0) {
    sVar3 = strlen(param_1);
    param_2 = (int)sVar3;
  }
  iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2 + 1,&(this->NameBuffer).AllocatorInstance,
                     &(this->NameBuffer).ArrayNum,&(this->NameBuffer).ArrayMax);
  _Dst = (this->NameBuffer).AllocatorInstance.Data + iVar2;
  memcpy(_Dst,param_1,(longlong)param_2);
  _Dst[param_2] = (FScriptContainerElement)0x0;
  *(short *)(pFVar1 + 0xc) = (short)iVar2;
  return;
}

// SetImportant @ 14d3a7c80

void __thiscall UE::Trace::FDispatchBuilder::SetImportant(FDispatchBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data + 7;
  *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 1);
  return;
}

// SetLoggerName @ 14d3a7c90

void __thiscall
UE::Trace::FDispatchBuilder::SetLoggerName(FDispatchBuilder *this,char *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  size_t sVar3;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data;
  if (param_2 < 0) {
    sVar3 = strlen(param_1);
    param_2 = (int)sVar3;
  }
  iVar2 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_2 + 1,&(this->NameBuffer).AllocatorInstance,
                     &(this->NameBuffer).ArrayNum,&(this->NameBuffer).ArrayMax);
  _Dst = (this->NameBuffer).AllocatorInstance.Data + iVar2;
  memcpy(_Dst,param_1,(longlong)param_2);
  _Dst[param_2] = (FScriptContainerElement)0x0;
  pFVar1 = pFVar1 + 10;
  *(short *)pFVar1 = *(short *)pFVar1 + (short)iVar2;
  return;
}

// SetMaybeHasAux @ 14d3a7d30

void __thiscall UE::Trace::FDispatchBuilder::SetMaybeHasAux(FDispatchBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data + 7;
  *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 2);
  return;
}

// SetNoSync @ 14d3a7d70

void __thiscall UE::Trace::FDispatchBuilder::SetNoSync(FDispatchBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Buffer).AllocatorInstance.Data + 7;
  *pFVar1 = (FScriptContainerElement)((byte)*pFVar1 | 4);
  return;
}

// SetUid @ 14d3a8690

void __thiscall UE::Trace::FDispatchBuilder::SetUid(FDispatchBuilder *this,ushort param_1)

{
  *(ushort *)((this->Buffer).AllocatorInstance.Data + 4) = param_1;
  return;
}

