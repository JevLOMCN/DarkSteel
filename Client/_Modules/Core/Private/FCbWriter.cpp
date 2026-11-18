// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 57

// FCbWriter @ 1419cd190

FCbWriter * __thiscall FCbWriter::FCbWriter(FCbWriter *this,long64 param_1)

{
  FCbWriter(this);
  if (-1 < param_1) {
    if ((this->Data).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,param_1,(ForAnyElementType *)this,(this->Data).ArrayNum,&(this->Data).ArrayMax)
      ;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(param_1);
}

// FCbWriter @ 1419cd200

FCbWriter * __thiscall FCbWriter::FCbWriter(FCbWriter *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  piVar1 = &(this->States).ArrayMax;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  (this->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->States).ArrayNum = 0;
  *piVar1 = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&(this->States).AllocatorInstance,piVar1);
  lVar4 = (longlong)iVar3;
  (this->States).ArrayNum = iVar3 + 1;
  pFVar2 = (this->States).AllocatorInstance.Data;
  *(undefined4 *)(pFVar2 + lVar4 * 0x18 + 2) = 0;
  *(undefined2 *)(pFVar2 + lVar4 * 0x18 + 6) = 0;
  *(undefined2 *)(pFVar2 + lVar4 * 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar4 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar4 * 0x18 + 0x10) = 0;
  return this;
}

// ~FCbWriter @ 1419d2060

void __thiscall FCbWriter::~FCbWriter(FCbWriter *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->States).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator<< @ 1419d5110

FCbWriter * __thiscall FCbWriter::operator<<(FCbWriter *this,FAnsiString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<char8_t> local_18;
  
  iVar1 = (param_1->Data).ArrayNum;
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  SetNameOrAddString(this,&local_18);
  return this;
}

// operator<< @ 1419d5160

FCbWriter * __thiscall FCbWriter::operator<<(FCbWriter *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  long64 lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  BeginField(this);
  uVar4 = UE::Core::Private::GetConvertedLength((uchar *)0x0,(wchar_t *)pFVar2,iVar7);
  iVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar8 = 0;
  if (uVar4 != 0) {
    iVar8 = iVar1;
  }
  uVar6 = iVar8 / 7 + 1;
  lVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)(uVar6 + uVar4),(ForAnyElementType *)this,&(this->Data).ArrayNum
                     ,&(this->Data).ArrayMax);
  pFVar3 = (this->Data).AllocatorInstance.Data;
  iVar1 = 0x1f;
  if (uVar4 != 0) {
    for (; uVar4 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar8 = 0;
  if (uVar4 != 0) {
    iVar8 = iVar1;
  }
  iVar8 = iVar8 / 7;
  pFVar10 = pFVar3 + (ulonglong)(iVar8 + 1U) + lVar5 + -1;
  uVar9 = uVar4;
  if (iVar8 != 1) {
    if (iVar8 != 2) {
      if (iVar8 != 3) {
        if (iVar8 != 4) goto LAB_1419d5254;
        *pFVar10 = SUB41(uVar4,0);
        pFVar10 = pFVar10 + -1;
        uVar9 = uVar4 >> 8;
      }
      *pFVar10 = SUB41(uVar9,0);
      pFVar10 = pFVar10 + -1;
      uVar9 = uVar9 >> 8;
    }
    *pFVar10 = SUB41(uVar9,0);
    pFVar10 = pFVar10 + -1;
    uVar9 = uVar9 >> 8;
  }
  *pFVar10 = SUB41(uVar9,0);
  pFVar10 = pFVar10 + -1;
  uVar9 = uVar9 >> 8;
LAB_1419d5254:
  *pFVar10 = (FScriptContainerElement)(-1 << (9U - (char)(iVar8 + 1U) & 0x1f) | (byte)uVar9);
  if (uVar4 != 0) {
    UE::Core::Private::Convert
              ((uchar *)(pFVar3 + (ulonglong)uVar6 + lVar5),uVar4,(wchar_t *)pFVar2,iVar7);
  }
  EndField(this,String);
  return this;
}

// operator<< @ 1419d52b0

FCbWriter * __thiscall FCbWriter::operator<<(FCbWriter *this,FUtf8String *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  SetNameOrAddString(this,&local_18);
  return this;
}

// operator<< @ 1419d5300

FCbWriter * __thiscall FCbWriter::operator<<(FCbWriter *this,FDateTime param_1)

{
  long64 lVar1;
  
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_1.Ticks >> 0x38 | (param_1.Ticks & 0xff000000000000U) >> 0x28 |
       (param_1.Ticks & 0xff0000000000U) >> 0x18 | (param_1.Ticks & 0xff00000000U) >> 8 |
       (param_1.Ticks & 0xff000000U) << 8 | (param_1.Ticks & 0xff0000U) << 0x18 |
       (param_1.Ticks & 0xff00U) << 0x28 | param_1.Ticks << 0x38;
  EndField(this,DateTime);
  return this;
}

// operator<< @ 1419d5370

FCbWriter * __thiscall FCbWriter::operator<<(FCbWriter *this,FTimespan param_1)

{
  long64 lVar1;
  
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_1.Ticks >> 0x38 | (param_1.Ticks & 0xff000000000000U) >> 0x28 |
       (param_1.Ticks & 0xff0000000000U) >> 0x18 | (param_1.Ticks & 0xff00000000U) >> 8 |
       (param_1.Ticks & 0xff000000U) << 8 | (param_1.Ticks & 0xff0000U) << 0x18 |
       (param_1.Ticks & 0xff00U) << 0x28 | param_1.Ticks << 0x38;
  EndField(this,TimeSpan);
  return this;
}

// operator<< @ 1419d53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbWriter * __thiscall FCbWriter::operator<<(FCbWriter *this,FName param_1)

{
  FName local_res10 [3];
  undefined1 auStack_478 [32];
  TStringView<char8_t> local_458;
  TStringBuilderBase<char8_t> local_448;
  uchar local_428 [1035];
  uchar local_1d [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_478;
  local_448.Base = local_428;
  local_448.bIsDynamic = false;
  local_448.bIsExternal = false;
  local_448.CurPos = local_428;
  local_448.End = local_1d;
  local_res10[0] = param_1;
  ::FName::AppendString(local_res10,&local_448);
  local_458.Size = (int)local_448.CurPos - (int)local_448.Base;
  local_458.DataPtr = local_448.Base;
  SetNameOrAddString(this,&local_458);
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_448);
  return this;
}

// AddArray @ 1419d83b0

void __thiscall FCbWriter::AddArray(FCbWriter *this,FCbArray *param_1)

{
  ECbFieldType EVar1;
  FCbFieldView local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *(undefined8 *)param_1;
  uStack_10 = *(undefined8 *)&param_1->field_0x8;
  BeginField(this);
  local_28.Error = None;
  local_28.NameLen = 0;
  local_28.Value._0_1_ = (undefined1)uStack_10;
  local_28.Value._1_1_ = uStack_10._1_1_;
  local_28.Value._2_1_ = uStack_10._2_1_;
  local_28.Value._3_1_ = uStack_10._3_1_;
  local_28.Value._4_1_ = uStack_10._4_1_;
  local_28.Value._5_1_ = uStack_10._5_1_;
  local_28.Value._6_1_ = uStack_10._6_1_;
  local_28.Value._7_1_ = uStack_10._7_1_;
  local_28.TypeWithFlags = (ECbFieldType)local_18 & (Reserved|CustomByName);
  EVar1 = AppendCompactBinary(&local_28,&this->Data);
  EndField(this,EVar1);
  return;
}

// AddArray @ 1419d8410

void __thiscall FCbWriter::AddArray(FCbWriter *this,FCbArrayView *param_1)

{
  ECbFieldType EVar1;
  FCbFieldView local_18;
  
  BeginField(this);
  local_18.TypeWithFlags = *(ECbFieldType *)param_1 & (Reserved|CustomByName);
  local_18.Error = None;
  local_18.Value = *(void **)&param_1->field_0x8;
  local_18.NameLen = 0;
  EVar1 = AppendCompactBinary(&local_18,&this->Data);
  EndField(this,EVar1);
  return;
}

// AddAttachment @ 1419d8850

void __thiscall FCbWriter::AddAttachment(FCbWriter *this,FCbAttachment *param_1)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  FScriptContainerElement *pFVar3;
  FCbAttachment *pFVar4;
  long64 lVar5;
  FCbAttachment *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  BeginField(this);
  uVar2 = (param_1->Value).TypeIndex;
  pFVar6 = (FCbAttachment *)0x0;
  pFVar4 = param_1;
  if (uVar2 != '\x03') {
    pFVar4 = pFVar6;
  }
  if (pFVar4 == (FCbAttachment *)0x0) {
    pFVar4 = param_1;
    if (uVar2 != '\x02') {
      pFVar4 = pFVar6;
    }
    if (pFVar4 == (FCbAttachment *)0x0) {
      if (uVar2 != '\x01') {
        param_1 = pFVar6;
      }
      uVar8 = FIoHash::Zero.Hash._0_4_;
      uVar9 = FIoHash::Zero.Hash._4_4_;
      uVar10 = FIoHash::Zero.Hash._8_4_;
      uVar11 = FIoHash::Zero.Hash._12_4_;
      uVar7 = FIoHash::Zero.Hash._16_4_;
      if (param_1 != (FCbAttachment *)0x0) {
        uVar8 = *(undefined4 *)&(param_1->Value)._padding_;
        uVar9 = *(undefined4 *)((longlong)&(param_1->Value)._padding_ + 4);
        uVar10 = *(undefined4 *)&(param_1->Value)._padding_;
        uVar11 = *(undefined4 *)((longlong)&(param_1->Value)._padding_ + 4);
        uVar7 = *(undefined4 *)&(param_1->Value)._padding_;
      }
      goto LAB_1419d88b4;
    }
  }
  uVar8 = *(undefined4 *)&(pFVar4->Value)._padding_;
  uVar9 = *(undefined4 *)((longlong)&(pFVar4->Value)._padding_ + 4);
  uVar10 = *(undefined4 *)&(pFVar4->Value)._padding_;
  uVar11 = *(undefined4 *)((longlong)&(pFVar4->Value)._padding_ + 4);
  uVar7 = *(undefined4 *)&(pFVar4->Value)._padding_;
LAB_1419d88b4:
  lVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0x14,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  pFVar3 = (this->Data).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar5;
  *(ulonglong *)pFVar1 = CONCAT44(uVar9,uVar8);
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uVar11,uVar10);
  *(undefined4 *)(pFVar3 + lVar5 + 0x10) = uVar7;
  EndField(this,BinaryAttachment);
  return;
}

// AddBinary @ 1419d8910

void __thiscall FCbWriter::AddBinary(FCbWriter *this,FCompositeBuffer *param_1)

{
  longlong *plVar1;
  FSharedBuffer FVar2;
  void *pvVar3;
  void *pvVar4;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res18 [2];
  
  FVar2 = FCompositeBuffer::ToShared(param_1);
  pvVar4 = (void *)0x0;
  plVar1 = *(longlong **)FVar2.Owner.Owner;
  pvVar3 = pvVar4;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    pvVar3 = (void *)plVar1[2];
  }
  plVar1 = *(longlong **)FVar2.Owner.Owner;
  if (plVar1 != (longlong *)0x0) {
    if (((ulonglong)plVar1[3] >> 0x3c & 4) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    pvVar4 = (void *)plVar1[1];
  }
  AddBinary(this,pvVar4,(ulong64)pvVar3);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_res18);
  return;
}

// AddBinary @ 1419d89c0

void __thiscall FCbWriter::AddBinary(FCbWriter *this,FSharedBuffer *param_1)

{
  FBufferOwner *pFVar1;
  void *pvVar2;
  void *pvVar3;
  
  pFVar1 = (param_1->Owner).Owner;
  pvVar3 = (void *)0x0;
  pvVar2 = pvVar3;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pvVar2 = (void *)pFVar1->Size;
  }
  pFVar1 = (param_1->Owner).Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    pvVar3 = pFVar1->Data;
  }
  AddBinary(this,pvVar3,(ulong64)pvVar2);
  return;
}

// AddBinary @ 1419d8a60

void __thiscall FCbWriter::AddBinary(FCbWriter *this,void *param_1,ulong64 param_2)

{
  long64 *plVar1;
  long64 *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  long64 lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  ulong64 uVar12;
  
  BeginField(this);
  lVar3 = 0x3f;
  if (param_2 != 0) {
    for (; param_2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  plVar1 = &(this->Data).ArrayMax;
  plVar2 = &(this->Data).ArrayNum;
  iVar11 = 0;
  if (param_2 != 0) {
    iVar11 = (int)lVar3;
  }
  uVar8 = iVar11 / 7 + 1;
  uVar9 = 9;
  if ((int)uVar8 < 9) {
    uVar9 = uVar8;
  }
  lVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)uVar9,(ForAnyElementType *)this,plVar2,plVar1);
  lVar3 = 0x3f;
  if (param_2 != 0) {
    for (; param_2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar11 = 0;
  if (param_2 != 0) {
    iVar11 = (int)lVar3;
  }
  uVar9 = iVar11 / 7 + 1;
  uVar7 = 9;
  if ((int)uVar9 < 9) {
    uVar7 = (ulonglong)uVar9;
  }
  pFVar10 = (this->Data).AllocatorInstance.Data + lVar6 + -1 + uVar7;
  uVar12 = param_2;
  switch((int)uVar7) {
  case 9:
    *pFVar10 = SUB81(param_2,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = param_2 >> 8;
  case 8:
    *pFVar10 = SUB81(uVar12,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = uVar12 >> 8;
  case 7:
    *pFVar10 = SUB81(uVar12,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = uVar12 >> 8;
  case 6:
    *pFVar10 = SUB81(uVar12,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = uVar12 >> 8;
  case 5:
    *pFVar10 = SUB81(uVar12,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = uVar12 >> 8;
  case 4:
    *pFVar10 = SUB81(uVar12,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = uVar12 >> 8;
  case 3:
    *pFVar10 = SUB81(uVar12,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = uVar12 >> 8;
  case 2:
    *pFVar10 = SUB81(uVar12,0);
    pFVar10 = pFVar10 + -1;
    uVar12 = uVar12 >> 8;
  }
  *pFVar10 = (FScriptContainerElement)(-1 << (9U - (char)uVar7 & 0x1f) | (byte)uVar12);
  if (((param_1 == (void *)0x0) && (param_2 != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,param_2,(ForAnyElementType *)this,plVar2,plVar1);
  if (param_2 != 0) {
    memcpy((this->Data).AllocatorInstance.Data + lVar6,param_1,param_2);
  }
  EndField(this,Binary);
  return;
}

// AddBinaryAttachment @ 1419d8c70

void __thiscall FCbWriter::AddBinaryAttachment(FCbWriter *this,FIoHash *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  
  BeginField(this);
  if (param_1 == (FIoHash *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0x14,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  uVar2 = *(undefined8 *)(param_1->Hash + 8);
  pFVar5 = (this->Data).AllocatorInstance.Data + lVar4;
  *(undefined8 *)pFVar5 = *(undefined8 *)param_1->Hash;
  *(undefined8 *)(pFVar5 + 8) = uVar2;
  *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  EndField(this,BinaryAttachment);
  return;
}

// AddBool @ 1419d8d10

void __thiscall FCbWriter::AddBool(FCbWriter *this,bool param_1)

{
  BeginField(this);
  EndField(this,param_1 + BoolFalse);
  return;
}

// AddCustom @ 1419d8d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbWriter::AddCustom
          (FCbWriter *this,TStringView<char8_t> *param_1,TMemoryView<void_const_> *param_2)

{
  long64 *plVar1;
  long64 *plVar2;
  uchar *puVar3;
  size_t _Size;
  void *_Src;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TStringView<char8_t> *pTVar9;
  long64 lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong _Size_00;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_168 [32];
  TStringView<char8_t> local_110;
  uchar *local_100;
  undefined8 uStack_f8;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1->Size == 0) {
    pTVar9 = GetActiveName(this,&local_110);
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_e8.Base = local_c8;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    puVar3 = pTVar9->DataPtr;
    uStack_f8 = *(undefined8 *)&pTVar9->Size;
    iVar13 = (int)*(undefined8 *)&pTVar9->Size;
    local_100 = puVar3;
    iVar7 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,iVar13);
    if (local_e8.End < local_e8.CurPos + iVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,(longlong)iVar7);
    }
    if (iVar13 != 0) {
      local_e8.CurPos = UE::Core::Private::Convert(local_e8.CurPos,iVar7,puVar3,iVar13);
    }
    if (local_e8.End < local_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
    }
    *local_e8.CurPos = L'\0';
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TypeName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x256,L"Field \'%s\' requires a non-empty type name for its custom type.");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  BeginField(this);
  iVar7 = param_1->Size;
  _Size_00 = (ulonglong)iVar7;
  lVar4 = 0x3f;
  if (_Size_00 != 0) {
    for (; _Size_00 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  plVar1 = &(this->Data).ArrayMax;
  iVar13 = 0;
  if (_Size_00 != 0) {
    iVar13 = (int)lVar4;
  }
  uVar11 = iVar13 / 7 + 1;
  uVar8 = 9;
  if ((int)uVar11 < 9) {
    uVar8 = uVar11;
  }
  plVar2 = &(this->Data).ArrayNum;
  uVar14 = (ulonglong)uVar8 + param_2->Size + _Size_00;
  lVar4 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar13 = 0;
  if (uVar14 != 0) {
    iVar13 = (int)lVar4;
  }
  uVar12 = iVar13 / 7 + 1;
  uVar11 = 9;
  if ((int)uVar12 < 9) {
    uVar11 = uVar12;
  }
  lVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                     (1,1,(ulonglong)(uVar8 + uVar11),(ForAnyElementType *)this,plVar2,plVar1);
  lVar4 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar13 = 0;
  if (uVar14 != 0) {
    iVar13 = (int)lVar4;
  }
  uVar12 = iVar13 / 7 + 1;
  uVar8 = 9;
  if ((int)uVar12 < 9) {
    uVar8 = uVar12;
  }
  pFVar15 = (this->Data).AllocatorInstance.Data + lVar10 + -1 + (ulonglong)uVar8;
  switch(uVar8) {
  case 9:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 8:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 7:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 6:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 5:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 4:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 3:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 2:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  default:
    *pFVar15 = (FScriptContainerElement)(-1 << (9U - (char)uVar8 & 0x1f) | (byte)uVar14);
    lVar4 = 0x3f;
    if (_Size_00 != 0) {
      for (; _Size_00 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar13 = 0;
    if (_Size_00 != 0) {
      iVar13 = (int)lVar4;
    }
    uVar12 = iVar13 / 7 + 1;
    uVar8 = 9;
    if ((int)uVar12 < 9) {
      uVar8 = uVar12;
    }
  }
  pFVar15 = (this->Data).AllocatorInstance.Data +
            lVar10 + ((ulonglong)uVar11 - 1) + (ulonglong)uVar8;
  uVar14 = _Size_00;
  switch(uVar8) {
  case 9:
    *pFVar15 = SUB41(iVar7,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = _Size_00 >> 8;
  case 8:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 7:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 6:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 5:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 4:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 3:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  case 2:
    *pFVar15 = SUB81(uVar14,0);
    pFVar15 = pFVar15 + -1;
    uVar14 = uVar14 >> 8;
  }
  puVar3 = param_1->DataPtr;
  *pFVar15 = (FScriptContainerElement)(-1 << (9U - (char)uVar8 & 0x1f) | (byte)uVar14);
  if (((puVar3 == (uchar *)0x0) && (_Size_00 != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                     (1,1,_Size_00,(ForAnyElementType *)this,plVar2,plVar1);
  if (_Size_00 != 0) {
    memcpy((this->Data).AllocatorInstance.Data + lVar10,puVar3,_Size_00);
  }
  _Size = param_2->Size;
  _Src = param_2->Data;
  if (((_Src == (void *)0x0) && (_Size != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                     (1,1,_Size,(ForAnyElementType *)this,plVar2,plVar1);
  if (_Size != 0) {
    memcpy((this->Data).AllocatorInstance.Data + lVar10,_Src,_Size);
  }
  EndField(this,CustomByName);
  return;
}

// AddCustom @ 1419d9220

void __thiscall
FCbWriter::AddCustom(FCbWriter *this,ulong64 param_1,TMemoryView<void_const_> *param_2)

{
  long64 *plVar1;
  long64 *plVar2;
  size_t _Size;
  void *_Src;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  long64 lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  
  _Size = param_2->Size;
  BeginField(this);
  lVar3 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  plVar1 = &(this->Data).ArrayMax;
  plVar2 = &(this->Data).ArrayNum;
  iVar13 = 0;
  if (param_1 != 0) {
    iVar13 = (int)lVar3;
  }
  uVar8 = iVar13 / 7 + 1;
  uVar6 = 9;
  if ((int)uVar8 < 9) {
    uVar6 = (ulonglong)uVar8;
  }
  uVar11 = uVar6 + _Size;
  lVar3 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar13 = 0;
  if (uVar11 != 0) {
    iVar13 = (int)lVar3;
  }
  uVar9 = iVar13 / 7 + 1;
  uVar8 = 9;
  if ((int)uVar9 < 9) {
    uVar8 = uVar9;
  }
  lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)((int)uVar6 + uVar8),(ForAnyElementType *)this,plVar2,plVar1);
  lVar3 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar13 = 0;
  if (uVar11 != 0) {
    iVar13 = (int)lVar3;
  }
  uVar9 = iVar13 / 7 + 1;
  uVar6 = 9;
  if ((int)uVar9 < 9) {
    uVar6 = (ulonglong)uVar9;
  }
  pFVar12 = (this->Data).AllocatorInstance.Data + lVar7 + -1 + uVar6;
  switch((int)uVar6) {
  case 9:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  case 8:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  case 7:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  case 6:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  case 5:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  case 4:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  case 3:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  case 2:
    *pFVar12 = SUB81(uVar11,0);
    pFVar12 = pFVar12 + -1;
    uVar11 = uVar11 >> 8;
  default:
    *pFVar12 = (FScriptContainerElement)(-1 << (9U - (char)uVar6 & 0x1f) | (byte)uVar11);
    lVar3 = 0x3f;
    if (param_1 != 0) {
      for (; param_1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar13 = 0;
    if (param_1 != 0) {
      iVar13 = (int)lVar3;
    }
    uVar10 = iVar13 / 7 + 1;
    uVar9 = 9;
    if ((int)uVar10 < 9) {
      uVar9 = uVar10;
    }
  }
  pFVar12 = (this->Data).AllocatorInstance.Data + lVar7 + ((ulonglong)uVar8 - 1) + (ulonglong)uVar9;
  switch(uVar9) {
  case 9:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  case 8:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  case 7:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  case 6:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  case 5:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  case 4:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  case 3:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  case 2:
    *pFVar12 = SUB81(param_1,0);
    pFVar12 = pFVar12 + -1;
    param_1 = param_1 >> 8;
  }
  *pFVar12 = (FScriptContainerElement)(-1 << (9U - (char)uVar9 & 0x1f) | (byte)param_1);
  _Src = param_2->Data;
  if (((_Src == (void *)0x0) && (_Size != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,_Size,(ForAnyElementType *)this,plVar2,plVar1);
  if (_Size != 0) {
    memcpy((this->Data).AllocatorInstance.Data + lVar7,_Src,_Size);
  }
  EndField(this,CustomById);
  return;
}

// AddDateTime @ 1419d9540

void __thiscall FCbWriter::AddDateTime(FCbWriter *this,FDateTime param_1)

{
  long64 lVar1;
  
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_1.Ticks >> 0x38 | (param_1.Ticks & 0xff000000000000U) >> 0x28 |
       (param_1.Ticks & 0xff0000000000U) >> 0x18 | (param_1.Ticks & 0xff00000000U) >> 8 |
       (param_1.Ticks & 0xff000000U) << 8 | (param_1.Ticks & 0xff0000U) << 0x18 |
       (param_1.Ticks & 0xff00U) << 0x28 | param_1.Ticks << 0x38;
  EndField(this,DateTime);
  return;
}

// AddDateTime @ 1419d95a0

void __thiscall
FCbWriter::AddDateTime(FCbWriter *this,TStringView<char8_t> *param_1,FDateTime param_2)

{
  long64 lVar1;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  SetName(this,&local_18);
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_2.Ticks >> 0x38 | (param_2.Ticks & 0xff000000000000U) >> 0x28 |
       (param_2.Ticks & 0xff0000000000U) >> 0x18 | (param_2.Ticks & 0xff00000000U) >> 8 |
       (param_2.Ticks & 0xff000000U) << 8 | (param_2.Ticks & 0xff0000U) << 0x18 |
       (param_2.Ticks & 0xff00U) << 0x28 | param_2.Ticks << 0x38;
  EndField(this,DateTime);
  return;
}

// AddDateTimeTicks @ 1419d9620

void __thiscall FCbWriter::AddDateTimeTicks(FCbWriter *this,long64 param_1)

{
  long64 lVar1;
  
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_1 >> 0x38 | (param_1 & 0xff000000000000U) >> 0x28 |
       (param_1 & 0xff0000000000U) >> 0x18 | (param_1 & 0xff00000000U) >> 8 |
       (param_1 & 0xff000000U) << 8 | (param_1 & 0xff0000U) << 0x18 | (param_1 & 0xff00U) << 0x28 |
       param_1 << 0x38;
  EndField(this,DateTime);
  return;
}

// AddField @ 1419d9690

void __thiscall FCbWriter::AddField(FCbWriter *this,FCbField *param_1)

{
  code *pcVar1;
  bool bVar2;
  ECbFieldType EVar3;
  FCbFieldView local_18;
  
  local_18._0_4_ = *(undefined4 *)param_1;
  local_18.NameLen = *(uint *)&param_1->field_0x4;
  local_18.Value._0_4_ = *(undefined4 *)&param_1->field_0x8;
  local_18.Value._4_4_ = *(undefined4 *)&param_1->field_0xc;
  if ((local_18._0_4_ & 0x1f) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value.HasValue()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0xf4,L"It is invalid to write a field with no value.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BeginField(this);
  EVar3 = AppendCompactBinary(&local_18,&this->Data);
  EndField(this,EVar3);
  return;
}

// AddField @ 1419d9700

void __thiscall FCbWriter::AddField(FCbWriter *this,FCbFieldView *param_1)

{
  code *pcVar1;
  bool bVar2;
  ECbFieldType EVar3;
  
  if ((param_1->TypeWithFlags & CustomByName) == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value.HasValue()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0xf4,L"It is invalid to write a field with no value.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  BeginField(this);
  EVar3 = AppendCompactBinary(param_1,&this->Data);
  EndField(this,EVar3);
  return;
}

// AddFloat @ 1419d9770

void __thiscall FCbWriter::AddFloat(FCbWriter *this,float param_1)

{
  long64 lVar1;
  
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,4,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(uint *)((this->Data).AllocatorInstance.Data + lVar1) =
       (uint)param_1 >> 0x18 | ((uint)param_1 & 0xff0000) >> 8 | ((uint)param_1 & 0xff00) << 8 |
       (int)param_1 << 0x18;
  EndField(this,Float32);
  return;
}

// AddFloat @ 1419d97d0

void __thiscall FCbWriter::AddFloat(FCbWriter *this,double param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  long64 lVar3;
  ECbFieldType EVar4;
  float fVar5;
  
  plVar1 = &(this->Data).ArrayMax;
  plVar2 = &(this->Data).ArrayNum;
  fVar5 = (float)param_1;
  if (param_1 == (double)fVar5) {
    BeginField(this);
    lVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,4,(ForAnyElementType *)this,plVar2,plVar1);
    *(uint *)((this->Data).AllocatorInstance.Data + lVar3) =
         (uint)fVar5 >> 0x18 | ((uint)fVar5 & 0xff0000) >> 8 | ((uint)fVar5 & 0xff00) << 8 |
         (int)fVar5 << 0x18;
    EVar4 = Float32;
  }
  else {
    BeginField(this);
    lVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,8,(ForAnyElementType *)this,plVar2,plVar1);
    *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar3) =
         (ulonglong)param_1 >> 0x38 | ((ulonglong)param_1 & 0xff000000000000) >> 0x28 |
         ((ulonglong)param_1 & 0xff0000000000) >> 0x18 | ((ulonglong)param_1 & 0xff00000000) >> 8 |
         ((ulonglong)param_1 & 0xff000000) << 8 | ((ulonglong)param_1 & 0xff0000) << 0x18 |
         ((ulonglong)param_1 & 0xff00) << 0x28 | (longlong)param_1 << 0x38;
    EVar4 = Float64;
  }
  EndField(this,EVar4);
  return;
}

// AddHash @ 1419d9cd0

void __thiscall FCbWriter::AddHash(FCbWriter *this,FIoHash *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  
  BeginField(this);
  if (param_1 == (FIoHash *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0x14,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  uVar2 = *(undefined8 *)(param_1->Hash + 8);
  pFVar5 = (this->Data).AllocatorInstance.Data + lVar4;
  *(undefined8 *)pFVar5 = *(undefined8 *)param_1->Hash;
  *(undefined8 *)(pFVar5 + 8) = uVar2;
  *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  EndField(this,Hash);
  return;
}

// AddInteger @ 1419d9d70

void __thiscall FCbWriter::AddInteger(FCbWriter *this,int param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  int iVar3;
  long64 lVar4;
  ECbFieldType EVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  
  plVar1 = &(this->Data).ArrayMax;
  plVar2 = &(this->Data).ArrayNum;
  if (param_1 < 0) {
    BeginField(this);
    uVar7 = ~param_1;
    iVar3 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar8 = 0;
    if (uVar7 != 0) {
      iVar8 = iVar3;
    }
    lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,(ulonglong)(iVar8 / 7 + 1),(ForAnyElementType *)this,plVar2,plVar1);
    iVar3 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar8 = 0;
    if (uVar7 != 0) {
      iVar8 = iVar3;
    }
    iVar8 = iVar8 / 7;
    uVar10 = iVar8 + 1;
    pFVar9 = (this->Data).AllocatorInstance.Data + lVar4 + -1 + (ulonglong)uVar10;
    if (iVar8 == 1) {
LAB_1419d9eed:
      *pFVar9 = SUB41(uVar7,0);
      pFVar9 = pFVar9 + -1;
      uVar7 = uVar7 >> 8;
    }
    else {
      if (iVar8 == 2) {
LAB_1419d9ee4:
        *pFVar9 = SUB41(uVar7,0);
        pFVar9 = pFVar9 + -1;
        uVar7 = uVar7 >> 8;
        goto LAB_1419d9eed;
      }
      if (iVar8 == 3) {
LAB_1419d9edb:
        *pFVar9 = SUB41(uVar7,0);
        pFVar9 = pFVar9 + -1;
        uVar7 = uVar7 >> 8;
        goto LAB_1419d9ee4;
      }
      if (iVar8 == 4) {
        *pFVar9 = SUB41(uVar7,0);
        pFVar9 = pFVar9 + -1;
        uVar7 = uVar7 >> 8;
        goto LAB_1419d9edb;
      }
    }
    bVar6 = (byte)uVar7;
    EVar5 = IntegerNegative;
    goto LAB_1419d9ef8;
  }
  BeginField(this);
  iVar3 = 0x1f;
  if (param_1 != 0) {
    for (; (uint)param_1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar8 = 0;
  if (param_1 != 0) {
    iVar8 = iVar3;
  }
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)(iVar8 / 7 + 1),(ForAnyElementType *)this,plVar2,plVar1);
  iVar3 = 0x1f;
  if (param_1 != 0) {
    for (; (uint)param_1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  iVar8 = 0;
  if (param_1 != 0) {
    iVar8 = iVar3;
  }
  iVar8 = iVar8 / 7;
  uVar10 = iVar8 + 1;
  pFVar9 = (this->Data).AllocatorInstance.Data + lVar4 + -1 + (ulonglong)uVar10;
  if (iVar8 == 1) {
LAB_1419d9e3f:
    *pFVar9 = SUB41(param_1,0);
    pFVar9 = pFVar9 + -1;
    param_1 = (uint)param_1 >> 8;
  }
  else {
    if (iVar8 == 2) {
LAB_1419d9e36:
      *pFVar9 = SUB41(param_1,0);
      pFVar9 = pFVar9 + -1;
      param_1 = (uint)param_1 >> 8;
      goto LAB_1419d9e3f;
    }
    if (iVar8 == 3) {
LAB_1419d9e2d:
      *pFVar9 = SUB41(param_1,0);
      pFVar9 = pFVar9 + -1;
      param_1 = (uint)param_1 >> 8;
      goto LAB_1419d9e36;
    }
    if (iVar8 == 4) {
      *pFVar9 = SUB41(param_1,0);
      pFVar9 = pFVar9 + -1;
      param_1 = (uint)param_1 >> 8;
      goto LAB_1419d9e2d;
    }
  }
  bVar6 = (byte)param_1;
  EVar5 = IntegerPositive;
LAB_1419d9ef8:
  *pFVar9 = (FScriptContainerElement)(-1 << (9U - (char)uVar10 & 0x1f) | bVar6);
  EndField(this,EVar5);
  return;
}

// AddInteger @ 1419d9f40

void __thiscall FCbWriter::AddInteger(FCbWriter *this,uint param_1)

{
  int iVar1;
  long64 lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  BeginField(this);
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = iVar1;
  }
  lVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)(iVar3 / 7 + 1),(ForAnyElementType *)this,&(this->Data).ArrayNum
                     ,&(this->Data).ArrayMax);
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = iVar1;
  }
  iVar3 = iVar3 / 7;
  pFVar4 = (this->Data).AllocatorInstance.Data + lVar2 + -1 + (ulonglong)(iVar3 + 1U);
  if (iVar3 != 1) {
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        if (iVar3 != 4) goto LAB_1419da005;
        *pFVar4 = SUB41(param_1,0);
        pFVar4 = pFVar4 + -1;
        param_1 = param_1 >> 8;
      }
      *pFVar4 = SUB41(param_1,0);
      pFVar4 = pFVar4 + -1;
      param_1 = param_1 >> 8;
    }
    *pFVar4 = SUB41(param_1,0);
    pFVar4 = pFVar4 + -1;
    param_1 = param_1 >> 8;
  }
  *pFVar4 = SUB41(param_1,0);
  pFVar4 = pFVar4 + -1;
  param_1 = param_1 >> 8;
LAB_1419da005:
  *pFVar4 = (FScriptContainerElement)(-1 << (9U - (char)(iVar3 + 1U) & 0x1f) | (byte)param_1);
  EndField(this,IntegerPositive);
  return;
}

// AddInteger @ 1419da040

void __thiscall FCbWriter::AddInteger(FCbWriter *this,long64 param_1)

{
  longlong lVar1;
  long64 lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  
  if (-1 < param_1) {
    AddInteger(this,param_1);
    return;
  }
  BeginField(this);
  uVar8 = ~param_1;
  lVar1 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar4 = 0;
  if (uVar8 != 0) {
    iVar4 = (int)lVar1;
  }
  uVar5 = iVar4 / 7 + 1;
  uVar6 = 9;
  if ((int)uVar5 < 9) {
    uVar6 = uVar5;
  }
  lVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)uVar6,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  lVar1 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar4 = 0;
  if (uVar8 != 0) {
    iVar4 = (int)lVar1;
  }
  uVar6 = iVar4 / 7 + 1;
  uVar3 = 9;
  if ((int)uVar6 < 9) {
    uVar3 = (ulonglong)uVar6;
  }
  pFVar7 = (this->Data).AllocatorInstance.Data + lVar2 + -1 + uVar3;
  switch((int)uVar3) {
  case 9:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  case 8:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  case 7:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  case 6:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  case 5:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  case 4:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  case 3:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  case 2:
    *pFVar7 = SUB81(uVar8,0);
    pFVar7 = pFVar7 + -1;
    uVar8 = uVar8 >> 8;
  default:
    *pFVar7 = (FScriptContainerElement)(-1 << (9U - (char)uVar3 & 0x1f) | (byte)uVar8);
    EndField(this,IntegerNegative);
    return;
  }
}

// AddInteger @ 1419da1d0

void __thiscall FCbWriter::AddInteger(FCbWriter *this,ulong64 param_1)

{
  longlong lVar1;
  long64 lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  BeginField(this);
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar7 = 0;
  if (param_1 != 0) {
    iVar7 = (int)lVar1;
  }
  uVar4 = iVar7 / 7 + 1;
  uVar5 = 9;
  if ((int)uVar4 < 9) {
    uVar5 = uVar4;
  }
  lVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)uVar5,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  lVar1 = 0x3f;
  if (param_1 != 0) {
    for (; param_1 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  iVar7 = 0;
  if (param_1 != 0) {
    iVar7 = (int)lVar1;
  }
  uVar5 = iVar7 / 7 + 1;
  uVar3 = 9;
  if ((int)uVar5 < 9) {
    uVar3 = (ulonglong)uVar5;
  }
  pFVar6 = (this->Data).AllocatorInstance.Data + lVar2 + -1 + uVar3;
  switch((int)uVar3) {
  case 9:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  case 8:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  case 7:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  case 6:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  case 5:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  case 4:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  case 3:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  case 2:
    *pFVar6 = SUB81(param_1,0);
    pFVar6 = pFVar6 + -1;
    param_1 = param_1 >> 8;
  default:
    *pFVar6 = (FScriptContainerElement)(-1 << (9U - (char)uVar3 & 0x1f) | (byte)param_1);
    EndField(this,IntegerPositive);
    return;
  }
}

// AddNull @ 1419dc930

void __thiscall FCbWriter::AddNull(FCbWriter *this)

{
  BeginField(this);
  EndField(this,Null);
  return;
}

// AddObject @ 1419dc960

void __thiscall FCbWriter::AddObject(FCbWriter *this,FCbObject *param_1)

{
  ECbFieldType EVar1;
  FCbFieldView local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *(undefined8 *)param_1;
  uStack_10 = *(undefined8 *)&param_1->field_0x8;
  BeginField(this);
  local_28.Error = None;
  local_28.NameLen = 0;
  local_28.Value._0_1_ = (undefined1)uStack_10;
  local_28.Value._1_1_ = uStack_10._1_1_;
  local_28.Value._2_1_ = uStack_10._2_1_;
  local_28.Value._3_1_ = uStack_10._3_1_;
  local_28.Value._4_1_ = uStack_10._4_1_;
  local_28.Value._5_1_ = uStack_10._5_1_;
  local_28.Value._6_1_ = uStack_10._6_1_;
  local_28.Value._7_1_ = uStack_10._7_1_;
  local_28.TypeWithFlags = (ECbFieldType)local_18 & (Reserved|CustomByName);
  EVar1 = AppendCompactBinary(&local_28,&this->Data);
  EndField(this,EVar1);
  return;
}

// AddObject @ 1419dc9c0

void __thiscall FCbWriter::AddObject(FCbWriter *this,FCbObjectView *param_1)

{
  ECbFieldType EVar1;
  FCbFieldView local_18;
  
  BeginField(this);
  local_18.TypeWithFlags = *(ECbFieldType *)param_1 & (Reserved|CustomByName);
  local_18.Error = None;
  local_18.Value = *(void **)&param_1->field_0x8;
  local_18.NameLen = 0;
  EVar1 = AppendCompactBinary(&local_18,&this->Data);
  EndField(this,EVar1);
  return;
}

// AddObjectAttachment @ 1419dca20

void __thiscall FCbWriter::AddObjectAttachment(FCbWriter *this,FIoHash *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  long64 lVar4;
  FScriptContainerElement *pFVar5;
  
  BeginField(this);
  if (param_1 == (FIoHash *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0x14,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  uVar2 = *(undefined8 *)(param_1->Hash + 8);
  pFVar5 = (this->Data).AllocatorInstance.Data + lVar4;
  *(undefined8 *)pFVar5 = *(undefined8 *)param_1->Hash;
  *(undefined8 *)(pFVar5 + 8) = uVar2;
  *(undefined4 *)(pFVar5 + 0x10) = *(undefined4 *)(param_1->Hash + 0x10);
  EndField(this,ObjectAttachment);
  return;
}

// AddObjectId @ 1419dcac0

void __thiscall FCbWriter::AddObjectId(FCbWriter *this,FCbObjectId *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  FScriptContainerElement *pFVar4;
  
  BeginField(this);
  if (param_1 == (FCbObjectId *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,0xc,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax
                    );
  pFVar4 = (this->Data).AllocatorInstance.Data + lVar3;
  *(undefined8 *)pFVar4 = *(undefined8 *)param_1->Bytes;
  *(undefined4 *)(pFVar4 + 8) = *(undefined4 *)(param_1->Bytes + 8);
  EndField(this,ObjectId);
  return;
}

// AddString @ 1419dd110

void __thiscall FCbWriter::AddString(FCbWriter *this,TStringView<char8_t> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  uint uVar4;
  long64 lVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong _Size;
  int iVar9;
  ulonglong uVar10;
  
  BeginField(this);
  iVar1 = param_1->Size;
  _Size = (ulonglong)iVar1;
  lVar3 = 0x3f;
  if (_Size != 0) {
    for (; _Size >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar9 = 0;
  if (_Size != 0) {
    iVar9 = (int)lVar3;
  }
  uVar6 = iVar9 / 7 + 1;
  uVar4 = 9;
  if ((int)uVar6 < 9) {
    uVar4 = uVar6;
  }
  lVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,uVar4 + _Size,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  pFVar2 = (this->Data).AllocatorInstance.Data;
  lVar3 = 0x3f;
  if (_Size != 0) {
    for (; _Size >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar9 = 0;
  if (_Size != 0) {
    iVar9 = (int)lVar3;
  }
  uVar7 = iVar9 / 7 + 1;
  uVar6 = 9;
  if ((int)uVar7 < 9) {
    uVar6 = uVar7;
  }
  pFVar8 = pFVar2 + (ulonglong)uVar6 + lVar5 + -1;
  uVar10 = _Size;
  switch(uVar6) {
  case 9:
    *pFVar8 = SUB41(iVar1,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = _Size >> 8;
  case 8:
    *pFVar8 = SUB81(uVar10,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = uVar10 >> 8;
  case 7:
    *pFVar8 = SUB81(uVar10,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = uVar10 >> 8;
  case 6:
    *pFVar8 = SUB81(uVar10,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = uVar10 >> 8;
  case 5:
    *pFVar8 = SUB81(uVar10,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = uVar10 >> 8;
  case 4:
    *pFVar8 = SUB81(uVar10,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = uVar10 >> 8;
  case 3:
    *pFVar8 = SUB81(uVar10,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = uVar10 >> 8;
  case 2:
    *pFVar8 = SUB81(uVar10,0);
    pFVar8 = pFVar8 + -1;
    uVar10 = uVar10 >> 8;
  default:
    *pFVar8 = (FScriptContainerElement)(-1 << (9U - (char)uVar6 & 0x1f) | (byte)uVar10);
    if (_Size != 0) {
      memcpy(pFVar2 + (ulonglong)uVar4 + lVar5,param_1->DataPtr,_Size);
    }
    EndField(this,String);
    return;
  }
}

// AddString @ 1419dd2b0

void __thiscall FCbWriter::AddString(FCbWriter *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  uint uVar5;
  long64 lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  BeginField(this);
  pwVar2 = param_1->DataPtr;
  iVar1 = param_1->Size;
  uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar2,iVar1);
  iVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar5 != 0) {
    iVar7 = iVar4;
  }
  uVar8 = iVar7 / 7 + 1;
  lVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)(uVar8 + uVar5),(ForAnyElementType *)this,&(this->Data).ArrayNum
                     ,&(this->Data).ArrayMax);
  pFVar3 = (this->Data).AllocatorInstance.Data;
  iVar4 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar7 = 0;
  if (uVar5 != 0) {
    iVar7 = iVar4;
  }
  iVar7 = iVar7 / 7;
  pFVar10 = pFVar3 + (ulonglong)(iVar7 + 1U) + lVar6 + -1;
  uVar9 = uVar5;
  if (iVar7 != 1) {
    if (iVar7 != 2) {
      if (iVar7 != 3) {
        if (iVar7 != 4) goto LAB_1419dd39e;
        *pFVar10 = SUB41(uVar5,0);
        pFVar10 = pFVar10 + -1;
        uVar9 = uVar5 >> 8;
      }
      *pFVar10 = SUB41(uVar9,0);
      pFVar10 = pFVar10 + -1;
      uVar9 = uVar9 >> 8;
    }
    *pFVar10 = SUB41(uVar9,0);
    pFVar10 = pFVar10 + -1;
    uVar9 = uVar9 >> 8;
  }
  *pFVar10 = SUB41(uVar9,0);
  pFVar10 = pFVar10 + -1;
  uVar9 = uVar9 >> 8;
LAB_1419dd39e:
  *pFVar10 = (FScriptContainerElement)(-1 << (9U - (char)(iVar7 + 1U) & 0x1f) | (byte)uVar9);
  if (uVar5 != 0) {
    UE::Core::Private::Convert((uchar *)(pFVar3 + (ulonglong)uVar8 + lVar6),uVar5,pwVar2,iVar1);
  }
  EndField(this,String);
  return;
}

// AddTimeSpan @ 1419dd4c0

void __thiscall FCbWriter::AddTimeSpan(FCbWriter *this,FTimespan param_1)

{
  long64 lVar1;
  
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_1.Ticks >> 0x38 | (param_1.Ticks & 0xff000000000000U) >> 0x28 |
       (param_1.Ticks & 0xff0000000000U) >> 0x18 | (param_1.Ticks & 0xff00000000U) >> 8 |
       (param_1.Ticks & 0xff000000U) << 8 | (param_1.Ticks & 0xff0000U) << 0x18 |
       (param_1.Ticks & 0xff00U) << 0x28 | param_1.Ticks << 0x38;
  EndField(this,TimeSpan);
  return;
}

// AddTimeSpan @ 1419dd520

void __thiscall
FCbWriter::AddTimeSpan(FCbWriter *this,TStringView<char8_t> *param_1,FTimespan param_2)

{
  long64 lVar1;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  SetName(this,&local_18);
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_2.Ticks >> 0x38 | (param_2.Ticks & 0xff000000000000U) >> 0x28 |
       (param_2.Ticks & 0xff0000000000U) >> 0x18 | (param_2.Ticks & 0xff00000000U) >> 8 |
       (param_2.Ticks & 0xff000000U) << 8 | (param_2.Ticks & 0xff0000U) << 0x18 |
       (param_2.Ticks & 0xff00U) << 0x28 | param_2.Ticks << 0x38;
  EndField(this,TimeSpan);
  return;
}

// AddTimeSpanTicks @ 1419dd5a0

void __thiscall FCbWriter::AddTimeSpanTicks(FCbWriter *this,long64 param_1)

{
  long64 lVar1;
  
  BeginField(this);
  lVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,8,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax);
  *(ulonglong *)((this->Data).AllocatorInstance.Data + lVar1) =
       (ulonglong)param_1 >> 0x38 | (param_1 & 0xff000000000000U) >> 0x28 |
       (param_1 & 0xff0000000000U) >> 0x18 | (param_1 & 0xff00000000U) >> 8 |
       (param_1 & 0xff000000U) << 8 | (param_1 & 0xff0000U) << 0x18 | (param_1 & 0xff00U) << 0x28 |
       param_1 << 0x38;
  EndField(this,TimeSpan);
  return;
}

// AddUuid @ 1419de9a0

void __thiscall FCbWriter::AddUuid(FCbWriter *this,FGuid *param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  uint uVar3;
  long64 lVar4;
  
  BeginField(this);
  uVar3 = param_1->A;
  plVar1 = &(this->Data).ArrayMax;
  plVar2 = &(this->Data).ArrayNum;
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,4,(ForAnyElementType *)this,plVar2,plVar1);
  *(uint *)((this->Data).AllocatorInstance.Data + lVar4) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = param_1->B;
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,4,(ForAnyElementType *)this,plVar2,plVar1);
  *(uint *)((this->Data).AllocatorInstance.Data + lVar4) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = param_1->C;
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,4,(ForAnyElementType *)this,plVar2,plVar1);
  *(uint *)((this->Data).AllocatorInstance.Data + lVar4) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar3 = param_1->D;
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,4,(ForAnyElementType *)this,plVar2,plVar1);
  *(uint *)((this->Data).AllocatorInstance.Data + lVar4) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  EndField(this,Uuid);
  return;
}

// BeginArray @ 1419e31a0

void __thiscall FCbWriter::BeginArray(FCbWriter *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_28;
  undefined4 uStack_26;
  undefined2 uStack_22;
  undefined8 uStack_20;
  undefined8 local_18;
  
  BeginField(this);
  pFVar2 = (this->States).AllocatorInstance.Data;
  uStack_26 = 0;
  uStack_22 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->States).ArrayMax * 0x18)) {
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
  iVar6 = (this->States).ArrayNum;
  piVar1 = &(this->States).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->States).AllocatorInstance,piVar1);
  }
  (this->States).ArrayNum = iVar6 + 1;
  pFVar3 = (this->States).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT26(uStack_22,CONCAT42(uStack_26,local_28));
  *(undefined8 *)(pFVar2 + 8) = uStack_20;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_18;
  iVar6 = (this->States).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar8 = 0;
  if ((int)uVar7 < iVar6) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  pFVar2 = (this->States).AllocatorInstance.Data + (longlong)(this->States).ArrayNum * 0x18 + -0x18;
  *pFVar2 = (FScriptContainerElement)((byte)*pFVar2 | 4);
  return;
}

// BeginField @ 1419e32f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCbWriter::BeginField(FCbWriter *this)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uchar *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  long64 lVar9;
  TStringView<char8_t> *pTVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStackY_108 [32];
  TStringView<char8_t> local_d8;
  uchar *local_c8;
  undefined8 uStack_c0;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [64];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar7 = (this->States).ArrayNum;
  uVar11 = iVar7 - 1;
  uVar6 = 0;
  if ((int)uVar11 < iVar7) {
    uVar6 = ~uVar11 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar8 = (longlong)(this->States).ArrayNum;
  pFVar2 = (this->States).AllocatorInstance.Data;
  FVar1 = pFVar2[lVar8 * 0x18 + -0x18];
  if (((byte)FVar1 & 2) == 0) {
    pFVar2[lVar8 * 0x18 + -0x18] = (FScriptContainerElement)((byte)FVar1 | 2);
    lVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,1,(ForAnyElementType *)this,&(this->Data).ArrayNum,&(this->Data).ArrayMax
                      );
    (this->Data).AllocatorInstance.Data[lVar9] = (FScriptContainerElement)0x0;
    *(long64 *)(pFVar2 + lVar8 * 0x18 + -0x10) = lVar9;
  }
  else if (((byte)FVar1 & 1) == 0) {
    pTVar10 = GetActiveName(this,&local_d8);
    local_b8.bIsDynamic = false;
    local_b8.bIsExternal = false;
    local_b8.Base = local_98;
    local_b8.CurPos = local_98;
    local_b8.End = (wchar_t *)local_18;
    puVar4 = pTVar10->DataPtr;
    uStack_c0 = *(undefined8 *)&pTVar10->Size;
    iVar12 = (int)*(undefined8 *)&pTVar10->Size;
    local_c8 = puVar4;
    iVar7 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar4,iVar12);
    if (local_b8.End < local_b8.CurPos + iVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,(longlong)iVar7);
    }
    if (iVar12 != 0) {
      local_b8.CurPos = UE::Core::Private::Convert(local_b8.CurPos,iVar7,puVar4,iVar12);
    }
    if (local_b8.End < local_b8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_b8,1);
    }
    *local_b8.CurPos = L'\0';
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(State.Flags & EStateFlags::Name) == EStateFlags::Name",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x8e,
                       L"A new field cannot be written until the previous field \'%s\' is finished."
                      );
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// BeginObject @ 1419e36c0

void __thiscall FCbWriter::BeginObject(FCbWriter *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 local_28;
  undefined4 uStack_26;
  undefined2 uStack_22;
  undefined8 uStack_20;
  undefined8 local_18;
  
  BeginField(this);
  pFVar2 = (this->States).AllocatorInstance.Data;
  uStack_26 = 0;
  uStack_22 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->States).ArrayMax * 0x18)) {
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
  iVar6 = (this->States).ArrayNum;
  piVar1 = &(this->States).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->States).AllocatorInstance,piVar1);
  }
  (this->States).ArrayNum = iVar6 + 1;
  pFVar3 = (this->States).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x18;
  *(ulonglong *)pFVar2 = CONCAT26(uStack_22,CONCAT42(uStack_26,local_28));
  *(undefined8 *)(pFVar2 + 8) = uStack_20;
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_18;
  iVar6 = (this->States).ArrayNum;
  uVar7 = iVar6 - 1;
  uVar8 = 0;
  if ((int)uVar7 < iVar6) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  pFVar2 = (this->States).AllocatorInstance.Data + (longlong)(this->States).ArrayNum * 0x18 + -0x18;
  *pFVar2 = (FScriptContainerElement)((byte)*pFVar2 | 8);
  return;
}

// EndArray @ 1419f3ef0

void __thiscall FCbWriter::EndArray(FCbWriter *this)

{
  TArray<FCbWriter::FState,TSizedDefaultAllocator<32>_> *pTVar1;
  long64 *plVar2;
  FScriptContainerElement FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  long64 lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  char cVar18;
  longlong lVar19;
  
  iVar15 = (this->States).ArrayNum;
  pTVar1 = &this->States;
  if (1 < iVar15) {
    uVar17 = 0;
    if ((int)(iVar15 - 1U) < iVar15) {
      uVar17 = ~(iVar15 - 1U) >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((byte)(pTVar1->AllocatorInstance).Data[(longlong)(this->States).ArrayNum * 0x18 + -0x18] &
        4) != 0) goto LAB_1419f3fa1;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("States.Num() > 1 && (States.Last().Flags & EStateFlags::Array) == EStateFlags::Array"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                     ,0x13d,
                     L"Invalid attempt to end an array when an array is not at the top of the stack."
                    );
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1419f3fa1:
  iVar15 = (this->States).ArrayNum;
  uVar11 = iVar15 - 1;
  uVar17 = 0;
  if ((int)uVar11 < iVar15) {
    uVar17 = ~uVar11 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((byte)(pTVar1->AllocatorInstance).Data[(longlong)(this->States).ArrayNum * 0x18 + -0x18] & 2
       ) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(States.Last().Flags & EStateFlags::Field) == EStateFlags::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                         ,0x13f,
                         L"It is invalid to end an array until the previous field is finished."),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (this->States).ArrayNum;
  uVar12 = iVar15 - 1;
  uVar11 = 0;
  uVar17 = uVar11;
  if ((int)uVar12 < iVar15) {
    uVar17 = ~uVar12 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (this->States).ArrayNum;
  FVar3 = (pTVar1->AllocatorInstance).Data[((longlong)iVar15 + -1) * 0x18 + 1];
  if ((char)FVar3 < '\0') {
    cVar18 = '\x01';
  }
  else if ((((FVar3 == (FScriptContainerElement)0x0) || (FVar3 == (FScriptContainerElement)0x1)) ||
           (FVar3 == (FScriptContainerElement)0xc)) || (FVar3 == (FScriptContainerElement)0xd)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  uVar17 = uVar11;
  if ((int)(iVar15 - 1U) < iVar15) {
    uVar17 = ~(iVar15 - 1U) >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (this->States).ArrayNum;
  uVar14 = *(ulonglong *)((this->States).AllocatorInstance.Data + (longlong)iVar15 * 0x18 + -8);
  if ((iVar15 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar15 = (this->States).ArrayNum;
  uVar17 = iVar15 - 1;
  pFVar16 = (this->States).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x18;
  iVar15 = ~uVar17 + iVar15;
  if (iVar15 != 0) {
    memmove(pFVar16,pFVar16 + 0x18,(longlong)iVar15 * 0x18);
  }
  iVar15 = (this->States).ArrayNum + -1;
  (this->States).ArrayNum = iVar15;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->States).AllocatorInstance,iVar15,&(this->States).ArrayMax);
  iVar15 = (this->States).ArrayNum;
  uVar12 = iVar15 - 1;
  uVar17 = uVar11;
  if ((int)uVar12 < iVar15) {
    uVar17 = ~uVar12 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar7 = (longlong)(this->States).ArrayNum;
  pFVar16 = (this->States).AllocatorInstance.Data;
  lVar4 = *(longlong *)(pFVar16 + lVar7 * 0x18 + -0x10);
  lVar19 = lVar4 + 1;
  if (((byte)pFVar16[lVar7 * 0x18 + -0x18] & 1) != 0) {
    pFVar16 = (this->Data).AllocatorInstance.Data;
    FVar3 = pFVar16[lVar19];
    pFVar16 = pFVar16 + lVar4 + 2;
    uVar13 = (ulonglong)(byte)~(byte)FVar3 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar17 = -(int)lVar4 + 9;
    uVar13 = (ulonglong)(0xff >> ((byte)uVar17 & 0x1f) & 0xff) & (ulonglong)(byte)FVar3;
    switch(-(int)lVar4) {
    case 0:
      uVar13 = (ulonglong)(byte)*pFVar16;
      pFVar16 = pFVar16 + 1;
    case -1:
      FVar3 = *pFVar16;
      pFVar16 = pFVar16 + 1;
      uVar13 = uVar13 << 8 | (ulonglong)(byte)FVar3;
    case -2:
      FVar3 = *pFVar16;
      pFVar16 = pFVar16 + 1;
      uVar13 = uVar13 << 8 | (ulonglong)(byte)FVar3;
    case -3:
      FVar3 = *pFVar16;
      pFVar16 = pFVar16 + 1;
      uVar13 = uVar13 << 8 | (ulonglong)(byte)FVar3;
    case -4:
      FVar3 = *pFVar16;
      pFVar16 = pFVar16 + 1;
      uVar13 = uVar13 << 8 | (ulonglong)(byte)FVar3;
    case -5:
      FVar3 = *pFVar16;
      pFVar16 = pFVar16 + 1;
      uVar13 = uVar13 << 8 | (ulonglong)(byte)FVar3;
    case -6:
      FVar3 = *pFVar16;
      pFVar16 = pFVar16 + 1;
      uVar13 = uVar13 << 8 | (ulonglong)(byte)FVar3;
    case -7:
      uVar13 = uVar13 << 8 | (ulonglong)(byte)*pFVar16;
    default:
      lVar19 = lVar19 + uVar17 + uVar13;
    }
  }
  if ((cVar18 != '\0') && (1 < uVar14)) {
    MakeFieldsUniform(this,lVar19,(this->Data).ArrayNum);
  }
  lVar4 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  plVar2 = &(this->Data).ArrayNum;
  if (uVar14 != 0) {
    uVar11 = (uint)lVar4;
  }
  uVar11 = (int)uVar11 / 7 + 1;
  uVar17 = 9;
  if ((int)uVar11 < 9) {
    uVar17 = uVar11;
  }
  iVar15 = 0;
  uVar13 = ((ulonglong)uVar17 - lVar19) + *plVar2;
  lVar4 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar10 = iVar15;
  if (uVar13 != 0) {
    iVar10 = (int)lVar4;
  }
  uVar12 = iVar10 / 7 + 1;
  uVar11 = 9;
  if ((int)uVar12 < 9) {
    uVar11 = uVar12;
  }
  lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ulonglong)(uVar17 + uVar11),(ForAnyElementType *)this,plVar2,
                     &(this->Data).ArrayMax);
  pFVar16 = (this->Data).AllocatorInstance.Data + lVar19;
  memmove(pFVar16 + (uVar17 + uVar11),pFVar16,lVar8 - lVar19);
  lVar4 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  iVar10 = iVar15;
  if (uVar13 != 0) {
    iVar10 = (int)lVar4;
  }
  uVar17 = iVar10 / 7 + 1;
  uVar9 = 9;
  if ((int)uVar17 < 9) {
    uVar9 = (ulonglong)uVar17;
  }
  pFVar16 = (this->Data).AllocatorInstance.Data + lVar19 + (uVar9 - 1);
  switch((int)uVar9) {
  case 9:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  case 8:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  case 7:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  case 6:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  case 5:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  case 4:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  case 3:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  case 2:
    *pFVar16 = SUB81(uVar13,0);
    pFVar16 = pFVar16 + -1;
    uVar13 = uVar13 >> 8;
  default:
    *pFVar16 = (FScriptContainerElement)(-1 << (9U - (char)uVar9 & 0x1f) | (byte)uVar13);
    lVar4 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    if (uVar14 != 0) {
      iVar15 = (int)lVar4;
    }
    uVar12 = iVar15 / 7 + 1;
    uVar17 = 9;
    if ((int)uVar12 < 9) {
      uVar17 = uVar12;
    }
  }
  pFVar16 = (this->Data).AllocatorInstance.Data +
            lVar19 + ((ulonglong)uVar11 - 1) + (ulonglong)uVar17;
  switch(uVar17) {
  case 9:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  case 8:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  case 7:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  case 6:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  case 5:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  case 4:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  case 3:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  case 2:
    *pFVar16 = SUB81(uVar14,0);
    pFVar16 = pFVar16 + -1;
    uVar14 = uVar14 >> 8;
  default:
    *pFVar16 = (FScriptContainerElement)(-1 << (9U - (char)uVar17 & 0x1f) | (byte)uVar14);
    EndField(this,cVar18 + Array);
    return;
  }
}

// EndField @ 1419f4580

void __thiscall FCbWriter::EndField(FCbWriter *this,ECbFieldType param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = (this->States).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (longlong)(this->States).ArrayNum;
  pFVar2 = (this->States).AllocatorInstance.Data;
  if (((byte)pFVar2[lVar5 * 0x18 + -0x18] & 1) == 0) {
    if (((byte)pFVar2[lVar5 * 0x18 + -0x18] & 8) != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(State.Flags & EStateFlags::Object) == EStateFlags::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                         ,0x9d,
                         L"It is invalid to write an object field without a unique non-empty name.")
      ;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else {
    param_1 = param_1 | HasFieldName;
  }
  if (*(longlong *)(pFVar2 + lVar5 * 0x18 + -8) == 0) {
    pFVar2[lVar5 * 0x18 + -0x17] = (FScriptContainerElement)param_1;
  }
  else if (pFVar2[lVar5 * 0x18 + -0x17] != (FScriptContainerElement)param_1) {
    pFVar2[lVar5 * 0x18 + -0x17] = (FScriptContainerElement)0x0;
  }
  pFVar2[lVar5 * 0x18 + -0x18] =
       (FScriptContainerElement)((byte)pFVar2[lVar5 * 0x18 + -0x18] & 0xfc);
  *(longlong *)(pFVar2 + lVar5 * 0x18 + -8) = *(longlong *)(pFVar2 + lVar5 * 0x18 + -8) + 1;
  lVar5 = *(longlong *)(pFVar2 + lVar5 * 0x18 + -0x10);
  uVar6 = 0;
  if (lVar5 < (this->Data).ArrayNum) {
    uVar6 = (uint)((ulonglong)lVar5 >> 0x3f) ^ 1;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->Data).AllocatorInstance.Data[lVar5] = (FScriptContainerElement)param_1;
  return;
}

// EndObject @ 1419f6120

void __thiscall FCbWriter::EndObject(FCbWriter *this)

{
  TArray<FCbWriter::FState,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  long64 lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  char cVar16;
  
  iVar13 = (this->States).ArrayNum;
  pTVar1 = &this->States;
  if (1 < iVar13) {
    uVar15 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar15 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (((byte)(pTVar1->AllocatorInstance).Data[(longlong)(this->States).ArrayNum * 0x18 + -0x18] &
        8) != 0) goto LAB_1419f61d3;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("States.Num() > 1 && (States.Last().Flags & EStateFlags::Object) == EStateFlags::Object"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                     ,0x108,
                     L"It is invalid to end an object when an object is not at the top of the stack."
                    );
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1419f61d3:
  iVar13 = (this->States).ArrayNum;
  uVar8 = iVar13 - 1;
  uVar15 = 0;
  if ((int)uVar8 < iVar13) {
    uVar15 = ~uVar8 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((byte)(pTVar1->AllocatorInstance).Data[(longlong)(this->States).ArrayNum * 0x18 + -0x18] & 2
       ) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(States.Last().Flags & EStateFlags::Field) == EStateFlags::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                         ,0x10a,
                         L"It is invalid to end an object until the previous field is finished."),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = (this->States).ArrayNum;
  uVar9 = iVar13 - 1;
  uVar8 = 0;
  uVar15 = uVar8;
  if ((int)uVar9 < iVar13) {
    uVar15 = ~uVar9 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = (this->States).ArrayNum;
  FVar2 = (pTVar1->AllocatorInstance).Data[((longlong)iVar13 + -1) * 0x18 + 1];
  if ((char)FVar2 < '\0') {
    cVar16 = '\x01';
  }
  else if ((((FVar2 == (FScriptContainerElement)0x0) || (FVar2 == (FScriptContainerElement)0x1)) ||
           (FVar2 == (FScriptContainerElement)0xc)) || (FVar2 == (FScriptContainerElement)0xd)) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  uVar15 = uVar8;
  if ((int)(iVar13 - 1U) < iVar13) {
    uVar15 = ~(iVar13 - 1U) >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = (this->States).ArrayNum;
  uVar12 = *(ulonglong *)((this->States).AllocatorInstance.Data + (longlong)iVar13 * 0x18 + -8);
  if ((iVar13 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar13 = (this->States).ArrayNum;
  uVar15 = iVar13 - 1;
  pFVar14 = (this->States).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18;
  iVar13 = ~uVar15 + iVar13;
  if (iVar13 != 0) {
    memmove(pFVar14,pFVar14 + 0x18,(longlong)iVar13 * 0x18);
  }
  iVar13 = (this->States).ArrayNum + -1;
  (this->States).ArrayNum = iVar13;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->States).AllocatorInstance,iVar13,&(this->States).ArrayMax);
  iVar13 = (this->States).ArrayNum;
  uVar9 = iVar13 - 1;
  uVar15 = uVar8;
  if ((int)uVar9 < iVar13) {
    uVar15 = ~uVar9 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar6 = (longlong)(this->States).ArrayNum;
  pFVar14 = (this->States).AllocatorInstance.Data;
  lVar3 = *(longlong *)(pFVar14 + lVar6 * 0x18 + -0x10);
  lVar11 = lVar3 + 1;
  if (((byte)pFVar14[lVar6 * 0x18 + -0x18] & 1) != 0) {
    pFVar14 = (this->Data).AllocatorInstance.Data;
    FVar2 = pFVar14[lVar11];
    pFVar14 = pFVar14 + lVar3 + 2;
    uVar10 = (ulonglong)(byte)~(byte)FVar2 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar15 = -(int)lVar3 + 9;
    uVar10 = (ulonglong)(0xff >> ((byte)uVar15 & 0x1f) & 0xff) & (ulonglong)(byte)FVar2;
    switch(-(int)lVar3) {
    case 0:
      uVar10 = (ulonglong)(byte)*pFVar14;
      pFVar14 = pFVar14 + 1;
    case -1:
      FVar2 = *pFVar14;
      pFVar14 = pFVar14 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar2;
    case -2:
      FVar2 = *pFVar14;
      pFVar14 = pFVar14 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar2;
    case -3:
      FVar2 = *pFVar14;
      pFVar14 = pFVar14 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar2;
    case -4:
      FVar2 = *pFVar14;
      pFVar14 = pFVar14 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar2;
    case -5:
      FVar2 = *pFVar14;
      pFVar14 = pFVar14 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar2;
    case -6:
      FVar2 = *pFVar14;
      pFVar14 = pFVar14 + 1;
      uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar2;
    case -7:
      uVar10 = uVar10 << 8 | (ulonglong)(byte)*pFVar14;
    default:
      lVar11 = lVar11 + uVar15 + uVar10;
    }
  }
  if ((cVar16 != '\0') && (1 < uVar12)) {
    MakeFieldsUniform(this,lVar11,(this->Data).ArrayNum);
  }
  uVar12 = (this->Data).ArrayNum - lVar11;
  lVar3 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  if (uVar12 != 0) {
    uVar8 = (uint)lVar3;
  }
  uVar15 = (int)uVar8 / 7 + 1;
  uVar10 = 9;
  if ((int)uVar15 < 9) {
    uVar10 = (ulonglong)uVar15;
  }
  lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,uVar10,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  pFVar14 = (this->Data).AllocatorInstance.Data + lVar11;
  memmove(pFVar14 + uVar10,pFVar14,lVar7 - lVar11);
  lVar3 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar13 = 0;
  if (uVar12 != 0) {
    iVar13 = (int)lVar3;
  }
  uVar15 = iVar13 / 7 + 1;
  uVar10 = 9;
  if ((int)uVar15 < 9) {
    uVar10 = (ulonglong)uVar15;
  }
  pFVar14 = (this->Data).AllocatorInstance.Data + lVar11 + (uVar10 - 1);
  switch((int)uVar10) {
  case 9:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  case 8:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  case 7:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  case 6:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  case 5:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  case 4:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  case 3:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  case 2:
    *pFVar14 = SUB81(uVar12,0);
    pFVar14 = pFVar14 + -1;
    uVar12 = uVar12 >> 8;
  default:
    *pFVar14 = (FScriptContainerElement)(-1 << (9U - (char)uVar10 & 0x1f) | (byte)uVar12);
    EndField(this,cVar16 + Object);
    return;
  }
}

// GetActiveName @ 1419fc4b0

TStringView<char8_t> * __thiscall
FCbWriter::GetActiveName(FCbWriter *this,TStringView<char8_t> *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TStringView<char8_t> *pTVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  
  iVar2 = (this->States).ArrayNum;
  uVar8 = iVar2 - 1;
  uVar5 = 0;
  uVar12 = uVar5;
  if ((int)uVar8 < iVar2) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TStringView<char8_t> *)(*pcVar3)();
    return pTVar6;
  }
  lVar7 = (longlong)(this->States).ArrayNum;
  pFVar11 = (this->States).AllocatorInstance.Data;
  if (((byte)pFVar11[lVar7 * 0x18 + -0x18] & 1) == 0) {
    *(undefined8 *)&__return_storage_ptr__->Size = 0;
    __return_storage_ptr__->DataPtr = (uchar *)0x0;
    return __return_storage_ptr__;
  }
  pFVar13 = (this->Data).AllocatorInstance.Data + *(longlong *)(pFVar11 + lVar7 * 0x18 + -0x10) + 1;
  pFVar11 = pFVar13 + 1;
  uVar10 = (ulonglong)(byte)~(byte)*pFVar13 * 2 + 1;
  lVar7 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  uVar12 = -(int)lVar7 + 9;
  uVar10 = (ulonglong)(0xff >> ((byte)uVar12 & 0x1f) & 0xff) & (ulonglong)(byte)*pFVar13;
  switch(-(int)lVar7) {
  case 0:
    uVar10 = (ulonglong)(byte)*pFVar11;
    pFVar11 = pFVar13 + 2;
  case -1:
    FVar1 = *pFVar11;
    pFVar11 = pFVar11 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar1;
  case -2:
    FVar1 = *pFVar11;
    pFVar11 = pFVar11 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar1;
  case -3:
    FVar1 = *pFVar11;
    pFVar11 = pFVar11 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar1;
  case -4:
    FVar1 = *pFVar11;
    pFVar11 = pFVar11 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar1;
  case -5:
    FVar1 = *pFVar11;
    pFVar11 = pFVar11 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar1;
  case -6:
    FVar1 = *pFVar11;
    pFVar11 = pFVar11 + 1;
    uVar10 = uVar10 << 8 | (ulonglong)(byte)FVar1;
  case -7:
    uVar10 = uVar10 << 8 | (ulonglong)(byte)*pFVar11;
  default:
    uVar9 = 0x7fffffff;
    if (uVar10 < 0x7fffffff) {
      uVar9 = uVar10;
    }
    __return_storage_ptr__->DataPtr = (uchar *)(pFVar13 + uVar12);
    if (uVar9 != 0) {
      uVar5 = (uint)uVar9;
    }
    __return_storage_ptr__->Size = uVar5;
    return __return_storage_ptr__;
  }
}

// GetSaveSize @ 141a03570

ulong64 __thiscall FCbWriter::GetSaveSize(FCbWriter *this)

{
  return (this->Data).ArrayNum;
}

// MakeFieldsUniform @ 141a0a2b0

void __thiscall FCbWriter::MakeFieldsUniform(FCbWriter *this,long64 param_1,long64 param_2)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulonglong _Size;
  longlong lVar9;
  size_t _Size_00;
  uint uVar10;
  ulonglong uVar11;
  ECbFieldType local_res10 [8];
  longlong local_res18;
  FScriptContainerElement *local_res20;
  ulong64 local_60;
  TMemoryView<void_const_> local_58;
  
  local_res20 = (this->Data).AllocatorInstance.Data + param_1;
  uVar7 = param_2 - param_1;
  uVar6 = uVar7 - (uVar7 != 0);
  pFVar5 = local_res20 + (uVar7 != 0);
  local_res18 = param_2;
  for (; uVar7 != 0; uVar7 = uVar7 - (uVar4 + uVar11)) {
    local_res10[0] = HasFieldType;
    local_58.Data = local_res20;
    local_58.Size = uVar7;
    bVar3 = TryMeasureCompactBinary(&local_58,local_res10,&local_60,HasFieldType);
    uVar8 = 0;
    if (bVar3) {
      uVar8 = local_60;
    }
    _Size = uVar8 - 1;
    uVar11 = (ulonglong)(uVar7 != 0);
    if (pFVar5 != local_res20 + uVar11) {
      memmove(pFVar5,local_res20 + uVar11,_Size);
    }
    uVar4 = _Size;
    if (uVar7 - uVar11 < _Size) {
      uVar4 = uVar7 - uVar11;
    }
    local_res20 = local_res20 + uVar4 + uVar11;
    if (uVar6 < _Size) {
      _Size = uVar6;
    }
    uVar6 = uVar6 - _Size;
    pFVar5 = pFVar5 + _Size;
  }
  if (uVar6 != 0) {
    lVar9 = local_res18 - uVar6;
    uVar10 = 0;
    if (local_res18 <= (this->Data).ArrayNum) {
      uVar10 = (uint)(uVar6 >> 0x3f) ^ 1;
    }
    if (((((uint)((ulonglong)lVar9 >> 0x3f) ^ 1) & uVar10) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = (this->Data).AllocatorInstance.Data + lVar9;
    _Size_00 = ((this->Data).ArrayNum - uVar6) - lVar9;
    if (_Size_00 != 0) {
      memmove(pFVar5,pFVar5 + uVar6,_Size_00);
    }
    plVar1 = &(this->Data).ArrayNum;
    *plVar1 = *plVar1 - uVar6;
  }
  return;
}

// Reset @ 141a1a240

void __thiscall FCbWriter::Reset(FCbWriter *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  (this->Data).ArrayNum = 0;
  if ((this->Data).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,&(this->Data).ArrayMax);
  }
  piVar1 = &(this->States).ArrayMax;
  (this->States).ArrayNum = 0;
  if ((this->States).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->States).AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->States).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->States).AllocatorInstance,piVar1);
  }
  lVar4 = (longlong)iVar3;
  (this->States).ArrayNum = iVar3 + 1;
  pFVar2 = (this->States).AllocatorInstance.Data;
  *(undefined4 *)(pFVar2 + lVar4 * 0x18 + 2) = 0;
  *(undefined2 *)(pFVar2 + lVar4 * 0x18 + 6) = 0;
  *(undefined2 *)(pFVar2 + lVar4 * 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar4 * 0x18 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar4 * 0x18 + 0x10) = 0;
  return;
}

// Save @ 141a1b610

FCbFieldIterator * __thiscall
FCbWriter::Save(FCbWriter *this,FCbFieldIterator *__return_storage_ptr__)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  FUniqueBuffer FVar6;
  FSharedBuffer FVar7;
  ulong64 uVar8;
  FUniqueBuffer local_res8;
  undefined8 local_res10 [2];
  TCbBuffer<FCbFieldView> local_58;
  FCbFieldViewIterator local_38;
  
  FUniqueBuffer::Alloc((ulong64)&local_res8);
  FVar6.Owner.Owner = local_res8.Owner.Owner;
  if (local_res8.Owner.Owner == (FBufferOwner *)0x0) {
    uVar8 = 0;
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c &
        4) == 0) {
      (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
    }
    uVar8 = *(ulong64 *)((longlong)FVar6.Owner.Owner + 0x10);
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      local_58._padding_ = *(longlong *)((longlong)local_res8.Owner.Owner + 8);
      goto LAB_141a1b687;
    }
  }
  local_58._padding_ = 0;
LAB_141a1b687:
  local_58._padding_ = uVar8;
  Save(this,&local_38,(TMemoryView<void> *)&local_58);
  FVar7 = FUniqueBuffer::MoveToShared(&local_res8);
  local_res10[0] = *(undefined8 *)FVar7.Owner.Owner;
  *(undefined8 *)FVar7.Owner.Owner = 0;
  TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
            (&local_58,(FCbFieldView *)&local_38,(FSharedBuffer)local_res10);
  *(undefined4 *)__return_storage_ptr__ = (undefined4)local_58._padding_;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = local_58._padding_._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = (undefined4)local_58._padding_;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_58._padding_._4_4_;
  *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&__return_storage_ptr__->field_0x10 =
       local_58.Buffer.Owner.Owner;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_38._16_8_;
  plVar5 = *(longlong **)FVar7.Owner.Owner;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res8.Owner);
  return __return_storage_ptr__;
}

// Save @ 141a1b790

FCbFieldViewIterator * __thiscall
FCbWriter::Save(FCbWriter *this,FCbFieldViewIterator *__return_storage_ptr__,
               TMemoryView<void> *param_1)

{
  ulonglong _Size;
  ulonglong uVar1;
  FScriptContainerElement *_Src;
  void *pvVar2;
  code *pcVar3;
  void *pvVar4;
  ECbFieldError EVar5;
  undefined2 uVar6;
  uint uVar7;
  bool bVar8;
  FCbFieldViewIterator *pFVar9;
  FCbFieldView *pFVar10;
  longlong lVar11;
  FCbFieldView local_18;
  
  if (((this->States).ArrayNum != 1) ||
     ((this->States).AllocatorInstance.Data[(longlong)(this->States).ArrayNum * 0x18 + -0x18] !=
      (FScriptContainerElement)0x0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("States.Num() == 1 && States.Last().Flags == EStateFlags::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x6d,L"It is invalid to save while there are incomplete write operations.");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCbFieldViewIterator *)(*pcVar3)();
      return pFVar9;
    }
  }
  if ((this->Data).ArrayNum < 1) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x6e,L"It is invalid to save when nothing has been written.");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCbFieldViewIterator *)(*pcVar3)();
      return pFVar9;
    }
  }
  if (param_1->Size != (this->Data).ArrayNum) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer.GetSize() == Data.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x70,L"Buffer is %llu bytes but %lld is required.");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCbFieldViewIterator *)(*pcVar3)();
      return pFVar9;
    }
  }
  _Size = (this->Data).ArrayNum;
  uVar1 = param_1->Size;
  _Src = (this->Data).AllocatorInstance.Data;
  if (uVar1 < _Size) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.Size <= Size",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                       ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FCbFieldViewIterator *)(*pcVar3)();
      return pFVar9;
    }
  }
  if (_Size != 0) {
    memcpy(param_1->Data,_Src,_Size);
  }
  pvVar2 = param_1->Data;
  if (uVar1 == 0) {
    lVar11 = 0;
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  }
  else {
    pFVar10 = FCbFieldView::FCbFieldView(&local_18,pvVar2,HasFieldType);
    EVar5 = pFVar10->Error;
    uVar6 = *(undefined2 *)&pFVar10->field_0x2;
    uVar7 = pFVar10->NameLen;
    pvVar4 = pFVar10->Value;
    lVar11 = (longlong)pvVar2 + uVar1;
    __return_storage_ptr__->field_0x0 = pFVar10->TypeWithFlags;
    __return_storage_ptr__->field_0x1 = EVar5;
    *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar6;
    *(uint *)&__return_storage_ptr__->field_0x4 = uVar7;
    *(void **)&__return_storage_ptr__->field_0x8 = pvVar4;
  }
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar11;
  return __return_storage_ptr__;
}

// Save @ 141a1b910

void __thiscall FCbWriter::Save(FCbWriter *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->field_0x28 & 4) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ar.IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x77,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->States).ArrayNum != 1) ||
     ((this->States).AllocatorInstance.Data[(longlong)(this->States).ArrayNum * 0x18 + -0x18] !=
      (FScriptContainerElement)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("States.Num() == 1 && States.Last().Flags == EStateFlags::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x79,L"It is invalid to save while there are incomplete write operations.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Data).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0x7a,L"It is invalid to save when nothing has been written.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141a1b9cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,(this->Data).AllocatorInstance.Data,(this->Data).ArrayNum);
  return;
}

// SetName @ 141a202a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbWriter * __thiscall FCbWriter::SetName(FCbWriter *this,TStringView<char8_t> *param_1)

{
  long64 *plVar1;
  long64 *plVar2;
  undefined8 uVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FCbWriter *pFVar9;
  longlong lVar10;
  TStringView<char8_t> *pTVar11;
  long64 lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulonglong _Size;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_2a8 [32];
  TStringView<char8_t> local_258;
  uchar *local_248;
  undefined8 uStack_240;
  uchar *local_238;
  undefined8 uStack_230;
  TStringBuilderBase<wchar_t> local_228;
  wchar_t local_208 [64];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [64];
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  iVar8 = (this->States).ArrayNum;
  uVar13 = iVar8 - 1;
  uVar7 = 0;
  if ((int)uVar13 < iVar8) {
    uVar7 = ~uVar13 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FCbWriter *)(*pcVar5)();
    return pFVar9;
  }
  lVar10 = (longlong)(this->States).ArrayNum;
  pFVar17 = (this->States).AllocatorInstance.Data;
  if (((byte)pFVar17[lVar10 * 0x18 + -0x18] & 4) != 0) {
    puVar4 = param_1->DataPtr;
    local_228.Base = local_208;
    iVar15 = (int)*(undefined8 *)&param_1->Size;
    local_228.CurPos = local_208;
    local_228.bIsDynamic = false;
    local_228.bIsExternal = false;
    local_228.End = (wchar_t *)&local_188;
    iVar8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar4,iVar15);
    if (local_228.End < (TStringBuilderBase<wchar_t> *)(local_228.CurPos + iVar8)) {
      TStringBuilderBase<wchar_t>::Extend(&local_228,(longlong)iVar8);
    }
    if (iVar15 != 0) {
      local_228.CurPos = UE::Core::Private::Convert(local_228.CurPos,iVar8,puVar4,iVar15);
    }
    if (local_228.End < (TStringBuilderBase<wchar_t> *)(local_228.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_228,1);
    }
    *local_228.CurPos = L'\0';
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(State.Flags & EStateFlags::Array) != EStateFlags::Array",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0xb2,L"It is invalid to write a name for an array field. Name \'%s\'");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_228);
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FCbWriter *)(*pcVar5)();
      return pFVar9;
    }
  }
  if (param_1->Size == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Name.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0xb5,L"%s");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FCbWriter *)(*pcVar5)();
      return pFVar9;
    }
  }
  if (((byte)pFVar17[lVar10 * 0x18 + -0x18] & 3) != 0) {
    pTVar11 = GetActiveName(this,&local_258);
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_e8.Base = local_c8;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    puVar4 = pTVar11->DataPtr;
    uStack_240 = *(undefined8 *)&pTVar11->Size;
    iVar15 = (int)*(undefined8 *)&pTVar11->Size;
    local_248 = puVar4;
    iVar8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar4,iVar15);
    if (local_e8.End < local_e8.CurPos + iVar8) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,(longlong)iVar8);
    }
    if (iVar15 != 0) {
      local_e8.CurPos = UE::Core::Private::Convert(local_e8.CurPos,iVar8,puVar4,iVar15);
    }
    if (local_e8.End < local_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
    }
    puVar4 = param_1->DataPtr;
    uStack_230 = *(undefined8 *)&param_1->Size;
    uVar3 = *(undefined8 *)&param_1->Size;
    local_188.Base = local_168;
    *local_e8.CurPos = L'\0';
    iVar15 = (int)uVar3;
    local_188.CurPos = local_168;
    local_188.End = (wchar_t *)&local_e8;
    local_188.bIsDynamic = false;
    local_188.bIsExternal = false;
    local_238 = puVar4;
    iVar8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar4,iVar15);
    if (local_188.End < (TStringBuilderBase<wchar_t> *)(local_188.CurPos + iVar8)) {
      TStringBuilderBase<wchar_t>::Extend(&local_188,(longlong)iVar8);
    }
    if (iVar15 != 0) {
      local_188.CurPos = UE::Core::Private::Convert(local_188.CurPos,iVar8,puVar4,iVar15);
    }
    if (local_188.End < (TStringBuilderBase<wchar_t> *)(local_188.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_188,1);
    }
    *local_188.CurPos = L'\0';
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(State.Flags & (EStateFlags::Name | EStateFlags::Field)) == EStateFlags::None"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                       ,0xb7,
                       L"A new field \'%s\' cannot be written until the previous field \'%s\' is finished."
                      );
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FCbWriter *)(*pcVar5)();
      return pFVar9;
    }
  }
  BeginField(this);
  pFVar17[lVar10 * 0x18 + -0x18] =
       (FScriptContainerElement)((byte)pFVar17[lVar10 * 0x18 + -0x18] | 1);
  plVar1 = &(this->Data).ArrayNum;
  uVar7 = param_1->Size;
  _Size = (ulonglong)(int)uVar7;
  plVar2 = &(this->Data).ArrayMax;
  iVar8 = 0x1f;
  if (uVar7 != 0) {
    for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  iVar15 = 0;
  if (uVar7 != 0) {
    iVar15 = iVar8;
  }
  lVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                     (1,1,(ulonglong)(iVar15 / 7 + 1),(ForAnyElementType *)this,plVar1,plVar2);
  lVar10 = 0x3f;
  if (_Size != 0) {
    for (; _Size >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  iVar8 = 0;
  if (_Size != 0) {
    iVar8 = (int)lVar10;
  }
  uVar14 = iVar8 / 7 + 1;
  uVar13 = 9;
  if ((int)uVar14 < 9) {
    uVar13 = uVar14;
  }
  pFVar17 = (this->Data).AllocatorInstance.Data + lVar12 + -1 + (ulonglong)uVar13;
  uVar16 = _Size;
  switch(uVar13) {
  case 9:
    *pFVar17 = SUB41(uVar7,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = _Size >> 8;
  case 8:
    *pFVar17 = SUB81(uVar16,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = uVar16 >> 8;
  case 7:
    *pFVar17 = SUB81(uVar16,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = uVar16 >> 8;
  case 6:
    *pFVar17 = SUB81(uVar16,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = uVar16 >> 8;
  case 5:
    *pFVar17 = SUB81(uVar16,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = uVar16 >> 8;
  case 4:
    *pFVar17 = SUB81(uVar16,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = uVar16 >> 8;
  case 3:
    *pFVar17 = SUB81(uVar16,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = uVar16 >> 8;
  case 2:
    *pFVar17 = SUB81(uVar16,0);
    pFVar17 = pFVar17 + -1;
    uVar16 = uVar16 >> 8;
  }
  puVar4 = param_1->DataPtr;
  *pFVar17 = (FScriptContainerElement)(-1 << (9U - (char)uVar13 & 0x1f) | (byte)uVar16);
  if (((puVar4 == (uchar *)0x0) && (_Size != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FCbWriter *)(*pcVar5)();
    return pFVar9;
  }
  lVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                     (1,1,_Size,(ForAnyElementType *)this,plVar1,plVar2);
  if (_Size != 0) {
    memcpy((this->Data).AllocatorInstance.Data + lVar12,puVar4,_Size);
  }
  return this;
}

// SetNameOrAddString @ 141a20830

void __thiscall FCbWriter::SetNameOrAddString(FCbWriter *this,TStringView<char8_t> *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  long64 lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong _Size;
  ulonglong uVar12;
  TStringView<char8_t> local_28;
  
  iVar9 = (this->States).ArrayNum;
  uVar8 = iVar9 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar9) {
    uVar6 = ~uVar8 >> 0x1f;
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
  if (((byte)(this->States).AllocatorInstance.Data[(longlong)(this->States).ArrayNum * 0x18 + -0x18]
      & 0xb) == 8) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.Size = param_1->Size;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    SetName(this,&local_28);
    return;
  }
  BeginField(this);
  uVar1 = *(undefined8 *)&param_1->Size;
  iVar9 = 0;
  _Size = (ulonglong)(int)uVar1;
  lVar3 = 0x3f;
  if (_Size != 0) {
    for (; _Size >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  if (_Size != 0) {
    iVar9 = (int)lVar3;
  }
  uVar8 = iVar9 / 7 + 1;
  uVar6 = 9;
  if ((int)uVar8 < 9) {
    uVar6 = uVar8;
  }
  lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,uVar6 + _Size,(ForAnyElementType *)this,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  pFVar2 = (this->Data).AllocatorInstance.Data;
  lVar3 = 0x3f;
  if (_Size != 0) {
    for (; _Size >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar9 = 0;
  if (_Size != 0) {
    iVar9 = (int)lVar3;
  }
  uVar10 = iVar9 / 7 + 1;
  uVar8 = 9;
  if ((int)uVar10 < 9) {
    uVar8 = uVar10;
  }
  pFVar11 = pFVar2 + (ulonglong)uVar8 + lVar7 + -1;
  uVar12 = _Size;
  switch(uVar8) {
  case 9:
    *pFVar11 = SUB81(uVar1,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = _Size >> 8;
  case 8:
    *pFVar11 = SUB81(uVar12,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = uVar12 >> 8;
  case 7:
    *pFVar11 = SUB81(uVar12,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = uVar12 >> 8;
  case 6:
    *pFVar11 = SUB81(uVar12,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = uVar12 >> 8;
  case 5:
    *pFVar11 = SUB81(uVar12,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = uVar12 >> 8;
  case 4:
    *pFVar11 = SUB81(uVar12,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = uVar12 >> 8;
  case 3:
    *pFVar11 = SUB81(uVar12,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = uVar12 >> 8;
  case 2:
    *pFVar11 = SUB81(uVar12,0);
    pFVar11 = pFVar11 + -1;
    uVar12 = uVar12 >> 8;
  default:
    *pFVar11 = (FScriptContainerElement)(-1 << (9U - (char)uVar8 & 0x1f) | (byte)uVar12);
    if (_Size != 0) {
      memcpy(pFVar2 + (ulonglong)uVar6 + lVar7,param_1->DataPtr,_Size);
    }
    EndField(this,String);
    return;
  }
}

