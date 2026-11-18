// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 12

// AddAfter @ 1446d1200

void __thiscall
FRHIPoolAllocationData::AddAfter(FRHIPoolAllocationData *this,FRHIPoolAllocationData *param_1)

{
  this->NextAllocation->PreviousAllocation = param_1;
  param_1->NextAllocation = this->NextAllocation;
  this->NextAllocation = param_1;
  param_1->PreviousAllocation = this;
  return;
}

// AddAlias @ 1446d1220

void __thiscall
FRHIPoolAllocationData::AddAlias(FRHIPoolAllocationData *this,FRHIPoolAllocationData *param_1)

{
  if (this->AliasAllocation != (FRHIPoolAllocationData *)0x0) {
    this->AliasAllocation->PreviousAllocation = param_1;
  }
  param_1->NextAllocation = this->AliasAllocation;
  param_1->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  param_1->AliasAllocation = this;
  this->AliasAllocation = param_1;
  return;
}

// AddBefore @ 1446d1250

void __thiscall
FRHIPoolAllocationData::AddBefore(FRHIPoolAllocationData *this,FRHIPoolAllocationData *param_1)

{
  this->PreviousAllocation->NextAllocation = param_1;
  param_1->PreviousAllocation = this->PreviousAllocation;
  this->PreviousAllocation = param_1;
  param_1->NextAllocation = this;
  return;
}

// InitAsAllocated @ 1446df460

void __thiscall
FRHIPoolAllocationData::InitAsAllocated
          (FRHIPoolAllocationData *this,uint param_1,uint param_2,uint param_3,
          FRHIPoolAllocationData *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  
  if (param_4->Type != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFree->IsFree()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x46,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex & 0xffe2ffff;
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex | 0x2ffff;
  this->Offset = 0;
  this->Owner = (FRHIPoolResource *)0x0;
  this->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  this->NextAllocation = (FRHIPoolAllocationData *)0x0;
  this->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  this->Size = param_1;
  this->Alignment = param_3;
  uVar4 = param_4->Offset;
  if ((param_2 % param_3 != 0) && (uVar4 % param_3 != 0)) {
    uVar4 = uVar4 + (param_3 - uVar4 % param_3);
  }
  this->Offset = uVar4;
  this->PoolIndex = param_4->PoolIndex;
  INSERT(this->PoolIndex,1,0x14,1);
  this->PoolIndex = (ushort)uVar2;
  *(short *)&this->field_0xe = SUB42(uVar2,2);
  uVar4 = FRHIMemoryPool::GetAlignedSize(param_1,param_2,param_3);
  param_4->Size = param_4->Size - uVar4;
  param_4->Offset = param_4->Offset + uVar4;
  param_4->PreviousAllocation->NextAllocation = this;
  this->PreviousAllocation = param_4->PreviousAllocation;
  param_4->PreviousAllocation = this;
  this->NextAllocation = param_4;
  return;
}

// InitAsFree @ 1446df560

void __thiscall
FRHIPoolAllocationData::InitAsFree
          (FRHIPoolAllocationData *this,short param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex & 0xffe1ffff;
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex | 0x1ffff;
  this->Owner = (FRHIPoolResource *)0x0;
  this->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  this->NextAllocation = (FRHIPoolAllocationData *)0x0;
  this->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  this->Offset = param_4;
  this->Size = param_2;
  this->Alignment = param_3;
  this->PoolIndex = param_1;
  return;
}

// InitAsHead @ 1446df5a0

void __thiscall FRHIPoolAllocationData::InitAsHead(FRHIPoolAllocationData *this,short param_1)

{
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex & 0xffe3ffff;
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex | 0x3ffff;
  this->Size = 0;
  this->Alignment = 0;
  this->Offset = 0;
  this->Owner = (FRHIPoolResource *)0x0;
  this->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  this->PoolIndex = param_1;
  this->NextAllocation = this;
  this->PreviousAllocation = this;
  return;
}

// MarkFree @ 1446e05b0

void __thiscall
FRHIPoolAllocationData::MarkFree(FRHIPoolAllocationData *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->Type != 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsAllocated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0x87,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex & 0xfff1ffff;
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex | 0x10000;
  uVar3 = FRHIMemoryPool::GetAlignedSize(this->Size,param_1,param_2);
  this->Size = uVar3;
  this->Alignment = param_1;
  this->Offset = this->Offset & -param_1;
  return;
}

// Merge @ 1446e0640

void __thiscall
FRHIPoolAllocationData::Merge(FRHIPoolAllocationData *this,FRHIPoolAllocationData *param_1)

{
  ushort *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  
  puVar1 = &param_1->PoolIndex;
  if (((this->Type != 1) || (param_1->Type != 1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsFree() && InOther->IsFree()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x93,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->Offset + this->Size != param_1->Offset) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Offset + Size) == InOther->Offset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x94,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uint)this->PoolIndex != (int)(short)*puVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolIndex == InOther->GetPoolIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x95,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->Size = this->Size + param_1->Size;
  if ((param_1->Type != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsFree()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0xa0,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_1->PreviousAllocation->NextAllocation = param_1->NextAllocation;
  param_1->NextAllocation->PreviousAllocation = param_1->PreviousAllocation;
  INSERT(*puVar1,0,0x10,4);
  param_1->PoolIndex = (ushort)uVar3;
  *(short *)&param_1->field_0xe = SUB42(uVar3,2);
  param_1->Size = 0;
  param_1->Alignment = 0;
  param_1->Offset = 0;
  *(uint *)puVar1 = *(uint *)puVar1 & 0xffefffff | 0xffff;
  param_1->Owner = (FRHIPoolResource *)0x0;
  param_1->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  param_1->NextAllocation = (FRHIPoolAllocationData *)0x0;
  param_1->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  return;
}

// MoveFrom @ 1446e0bb0

void __thiscall
FRHIPoolAllocationData::MoveFrom
          (FRHIPoolAllocationData *this,FRHIPoolAllocationData *param_1,bool param_2)

{
  FRHIPoolAllocationData *pFVar1;
  FRHIPoolAllocationData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((param_1->Type != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAllocated.IsAllocated()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                         ,0x5a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->Size = 0;
  this->Alignment = 0;
  this->Offset = 0;
  uVar5 = *(uint *)&this->PoolIndex & 0xffe0ffff | 0xffff;
  *(uint *)&this->PoolIndex = uVar5;
  this->Owner = (FRHIPoolResource *)0x0;
  this->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  this->NextAllocation = (FRHIPoolAllocationData *)0x0;
  this->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  this->Size = param_1->Size;
  this->Alignment = param_1->Alignment;
  *(uint *)&this->PoolIndex = *(uint *)&param_1->PoolIndex & 0xf0000 | uVar5;
  this->Offset = param_1->Offset;
  this->PoolIndex = param_1->PoolIndex;
  *(uint *)&this->PoolIndex = (uint)param_2 << 0x14 | *(uint *)&this->PoolIndex & 0xffefffff;
  if (param_1->PreviousAllocation == (FRHIPoolAllocationData *)0x0) {
    pFVar1 = param_1->AliasAllocation;
    if ((pFVar1 == (FRHIPoolAllocationData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("AliasParent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                           ,0x7b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_1->AliasAllocation != (FRHIPoolAllocationData *)0x0) {
      if (param_1->PreviousAllocation == (FRHIPoolAllocationData *)0x0) {
        param_1->AliasAllocation->AliasAllocation = param_1->NextAllocation;
      }
      else {
        param_1->PreviousAllocation->NextAllocation = param_1->NextAllocation;
      }
      if (param_1->NextAllocation != (FRHIPoolAllocationData *)0x0) {
        param_1->NextAllocation->PreviousAllocation = param_1->PreviousAllocation;
      }
      param_1->NextAllocation = (FRHIPoolAllocationData *)0x0;
      param_1->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
      param_1->AliasAllocation = (FRHIPoolAllocationData *)0x0;
    }
    if (pFVar1->AliasAllocation != (FRHIPoolAllocationData *)0x0) {
      pFVar1->AliasAllocation->PreviousAllocation = this;
    }
    pFVar2 = pFVar1->AliasAllocation;
    this->AliasAllocation = pFVar1;
    this->NextAllocation = pFVar2;
    this->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
    pFVar1->AliasAllocation = this;
  }
  else {
    param_1->PreviousAllocation->NextAllocation = this;
    param_1->NextAllocation->PreviousAllocation = this;
    this->PreviousAllocation = param_1->PreviousAllocation;
    this->NextAllocation = param_1->NextAllocation;
    for (pFVar1 = param_1->AliasAllocation; pFVar1 != (FRHIPoolAllocationData *)0x0;
        pFVar1 = pFVar1->NextAllocation) {
      pFVar1->AliasAllocation = this;
    }
    this->AliasAllocation = param_1->AliasAllocation;
  }
  *(uint *)&param_1->PoolIndex = *(uint *)&param_1->PoolIndex & 0xffe0ffff | 0xffff;
  param_1->Size = 0;
  param_1->Alignment = 0;
  param_1->Offset = 0;
  param_1->Owner = (FRHIPoolResource *)0x0;
  param_1->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  param_1->NextAllocation = (FRHIPoolAllocationData *)0x0;
  param_1->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  return;
}

// RemoveAlias @ 1446e25e0

void __thiscall FRHIPoolAllocationData::RemoveAlias(FRHIPoolAllocationData *this)

{
  if (this->AliasAllocation != (FRHIPoolAllocationData *)0x0) {
    if (this->PreviousAllocation == (FRHIPoolAllocationData *)0x0) {
      this->AliasAllocation->AliasAllocation = this->NextAllocation;
    }
    else {
      this->PreviousAllocation->NextAllocation = this->NextAllocation;
    }
    if (this->NextAllocation != (FRHIPoolAllocationData *)0x0) {
      this->NextAllocation->PreviousAllocation = this->PreviousAllocation;
    }
    this->NextAllocation = (FRHIPoolAllocationData *)0x0;
    this->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
    this->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  }
  return;
}

// RemoveFromLinkedList @ 1446e2960

void __thiscall FRHIPoolAllocationData::RemoveFromLinkedList(FRHIPoolAllocationData *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Type != 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFree()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIPoolAllocator.cpp"
                       ,0xa0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->PreviousAllocation->NextAllocation = this->NextAllocation;
  this->NextAllocation->PreviousAllocation = this->PreviousAllocation;
  return;
}

// Reset @ 1446e2bf0

void __thiscall FRHIPoolAllocationData::Reset(FRHIPoolAllocationData *this)

{
  this->Size = 0;
  this->Alignment = 0;
  this->Offset = 0;
  *(uint *)&this->PoolIndex = *(uint *)&this->PoolIndex & 0xffe0ffff | 0xffff;
  this->Owner = (FRHIPoolResource *)0x0;
  this->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
  this->NextAllocation = (FRHIPoolAllocationData *)0x0;
  this->AliasAllocation = (FRHIPoolAllocationData *)0x0;
  return;
}

