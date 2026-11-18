// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Cbor
// Functions: 20

// FCborWriter @ 143120860

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FCborWriter * __thiscall
FCborWriter::FCborWriter(FCborWriter *this,FArchive *param_1,ECborEndianness param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCborWriter *pFVar5;
  longlong lVar6;
  
  this->Stream = param_1;
  (this->ContextStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextStack).ArrayNum = 0;
  (this->ContextStack).ArrayMax = 0;
  this->Endianness = param_2;
  if ((this->Stream == (FArchive *)0x0) || ((this->Stream->field_0x28 & 4) == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Stream != nullptr && Stream->IsSaving()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborWriter.cpp"
                       ,0xb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FCborWriter *)(*pcVar2)();
      return pFVar5;
    }
  }
  iVar4 = (this->ContextStack).ArrayNum;
  if (iVar4 == (this->ContextStack).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ContextStack).AllocatorInstance,&(this->ContextStack).ArrayMax)
    ;
  }
  (this->ContextStack).ArrayNum = iVar4 + 1;
  pFVar1 = (this->ContextStack).AllocatorInstance.Data;
  lVar6 = (longlong)iVar4 * 0x20;
  pFVar1[lVar6] = (FScriptContainerElement)0x1c;
  *(undefined8 *)(pFVar1 + lVar6 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar6 + 0x10) = 0;
  *(undefined8 *)(pFVar1 + lVar6 + 0x18) = 0;
  return this;
}

// ~FCborWriter @ 1431209e0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall FCborWriter::~FCborWriter(FCborWriter *this)

{
  TArray<FCborContext,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = &this->ContextStack;
  if ((((this->ContextStack).ArrayNum != 1) ||
      ((pTVar1->AllocatorInstance).Data[(longlong)(this->ContextStack).ArrayNum * 0x20 + -0x20] !=
       (FScriptContainerElement)0x1c)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContextStack.Num() == 1 && ContextStack.Top().RawCode() == ECborCode::Dummy"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborWriter.cpp"
                         ,0x11,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  DestructItems<FCborContext,int>
            ((FCborContext *)(pTVar1->AllocatorInstance).Data,(this->ContextStack).ArrayNum);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// CheckContext @ 143120ac0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FCborWriter::CheckContext(FCborWriter *this,ECborCode param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ECborCode EVar7;
  uint uVar8;
  FCborContext local_28;
  
  iVar2 = (this->ContextStack).ArrayNum;
  uVar8 = iVar2 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar2) {
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
  iVar2 = (this->ContextStack).ArrayNum;
  pFVar3 = (this->ContextStack).AllocatorInstance.Data;
  FVar1 = pFVar3[(longlong)iVar2 * 0x20 + -0x20];
  EVar7 = (byte)FVar1 & Prim;
  if ((EVar7 == Array) || (((EVar7 - ByteString & 0x9f) == 0 && (EVar7 != Array)))) {
    if (((byte)FVar1 & 0x1f) == 0x1f) {
      *(longlong *)(pFVar3 + (longlong)iVar2 * 0x20 + -0x18) =
           *(longlong *)(pFVar3 + (longlong)iVar2 * 0x20 + -0x18) + 1;
      if ((EVar7 != TextString) && (EVar7 != ByteString)) {
        return;
      }
      if (param_1 != EVar7) {
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Context.IsString() || MajorType != Context.MajorType()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborWriter.cpp"
                         ,0xe1,L"");
      if (!bVar5) {
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (EVar7 == Array) goto LAB_143120bad;
  }
  if (EVar7 != Map) {
    return;
  }
  if (((byte)FVar1 & 0x1f) == 0x1f) {
    return;
  }
LAB_143120bad:
  pFVar3 = pFVar3 + (longlong)iVar2 * 0x20 + -0x18;
  *(longlong *)pFVar3 = *(longlong *)pFVar3 + -1;
  if ((*(longlong *)pFVar3 == 0) &&
     (TArray<FCborContext,TSizedDefaultAllocator<32>_>::Pop(&this->ContextStack,&local_28,Default),
     local_28.RawTextValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.RawTextValue.AllocatorInstance.Data);
  }
  return;
}

// GetArchive @ 143120c00

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

FArchive * __thiscall FCborWriter::GetArchive(FCborWriter *this)

{
  return this->Stream;
}

// WriteContainerEnd @ 143122170

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FCborWriter::WriteContainerEnd(FCborWriter *this)

{
  byte bVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FArchive *pFVar4;
  FArchive *pFVar5;
  undefined1 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  FCborContext local_28;
  
  pFVar4 = this->Stream;
  bVar1 = pFVar4->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  pFVar4->field_0x2a = bVar1 & 0xfe | bVar10;
  iVar3 = (this->ContextStack).ArrayNum;
  uVar11 = iVar3 - 1;
  uVar9 = 0;
  if ((int)uVar11 < iVar3) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar2 = (this->ContextStack).AllocatorInstance.Data
          [(longlong)(this->ContextStack).ArrayNum * 0x20 + -0x20];
  bVar10 = (byte)FVar2 & 0xe0;
  if (((bVar10 != 0x80) && (((bVar10 - 0x40 & 0x9f) != 0 || (bVar10 == 0x80)))) ||
     (((byte)FVar2 & 0x1f) != 0x1f)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ContextStack.Top().IsIndefiniteContainer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborWriter.cpp"
                       ,0x39,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = this->Stream;
  local_res8[0] = 0xff;
  puVar6 = (undefined1 *)**(undefined8 **)&pFVar5->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar5->field_0x8)[1] < puVar6 + 1) {
    (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,local_res8,1);
  }
  else {
    local_res8[0] = *puVar6;
    **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 1;
  }
  TArray<FCborContext,TSizedDefaultAllocator<32>_>::Pop(&this->ContextStack,&local_28,Default);
  if (local_28.RawTextValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.RawTextValue.AllocatorInstance.Data);
  }
  pFVar4->field_0x2a = pFVar4->field_0x2a ^ (pFVar4->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteContainerStart @ 1431222e0

/* WARNING: Removing unreachable block (ram,0x000143122507) */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteContainerStart(FCborWriter *this,ECborCode param_1,long64 param_2)

{
  int *piVar1;
  byte bVar2;
  FArchive *pFVar3;
  FArchive *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FCborHeader FVar8;
  int iVar9;
  undefined7 extraout_var;
  byte bVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement local_res10 [8];
  FScriptContainerElement local_48 [8];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pFVar3 = this->Stream;
  bVar2 = pFVar3->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  pFVar3->field_0x2a = bVar2 & 0xfe | bVar10;
  if (((param_1 + Array & 0xdf) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerType == ECborCode::Array || ContainerType == ECborCode::Map",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Cbor\\Private\\CborWriter.cpp"
                         ,0x1d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  CheckContext(this,param_1);
  pFVar4 = this->Stream;
  if (param_2 < 0) {
    local_res10[0] = (FScriptContainerElement)(param_1 | Indefinite);
    pFVar5 = (FScriptContainerElement *)**(undefined8 **)&pFVar4->field_0x8;
    if ((FScriptContainerElement *)(*(undefined8 **)&pFVar4->field_0x8)[1] < pFVar5 + 1) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res10,1);
    }
    else {
      local_res10[0] = *pFVar5;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 1;
    }
    local_48[0] = local_res10[0];
    local_40 = 0;
  }
  else {
    FVar8 = WriteUIntValue((uchar)local_res8,(FArchive *)(ulonglong)param_1,(ulong64)pFVar4);
    local_48[0] = *(FScriptContainerElement *)CONCAT71(extraout_var,FVar8.Header);
    local_40 = param_2;
    if (param_1 == Map) {
      local_40 = param_2 * 2;
    }
  }
  local_30 = 0;
  local_38 = 0;
  pFVar5 = (this->ContextStack).AllocatorInstance.Data;
  local_res10[0] = local_48[0];
  if (((pFVar5 <= local_48) && (local_48 < pFVar5 + (longlong)(this->ContextStack).ArrayMax * 0x20))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->ContextStack).ArrayNum;
  piVar1 = &(this->ContextStack).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->ContextStack).AllocatorInstance,piVar1);
  }
  (this->ContextStack).ArrayNum = iVar9 + 1;
  pFVar5 = (this->ContextStack).AllocatorInstance.Data;
  lVar11 = (longlong)iVar9 * 0x20;
  pFVar5[lVar11] = local_48[0];
  *(longlong *)(pFVar5 + lVar11 + 8) = local_40;
  *(longlong *)(pFVar5 + lVar11 + 8) = local_40;
  pFVar5[lVar11 + 8] = local_40._0_1_;
  *(undefined4 *)(pFVar5 + lVar11 + 8) = (undefined4)local_40;
  *(longlong *)(pFVar5 + lVar11 + 8) = local_40;
  *(undefined8 *)(pFVar5 + lVar11 + 0x10) = 0;
  *(longlong *)(pFVar5 + lVar11 + 8) = local_40;
  *(undefined8 *)(pFVar5 + lVar11 + 0x10) = local_38;
  *(undefined4 *)(pFVar5 + lVar11 + 0x18) = (undefined4)local_30;
  *(undefined4 *)(pFVar5 + lVar11 + 0x1c) = local_30._4_4_;
  pFVar3->field_0x2a = pFVar3->field_0x2a ^ (pFVar3->field_0x2a ^ bVar2) & 1;
  return;
}

// WriteNull @ 143122540

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteNull(FCborWriter *this)

{
  byte bVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  byte bVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar4;
  CheckContext(this,Prim);
  pFVar3 = this->Stream;
  local_res8[0] = 0xf6;
  if ((ulonglong)(*(longlong **)&pFVar3->field_0x8)[1] < **(longlong **)&pFVar3->field_0x8 + 1U) {
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
  }
  else {
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
  }
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteUIntValue @ 1431225f0

FCborHeader __cdecl
FCborWriter::WriteUIntValue(FCborHeader param_1,FArchive *param_2,ulong64 param_3)

{
  longlong *plVar1;
  undefined7 in_register_00000009;
  byte bVar2;
  ulonglong in_R9;
  undefined4 local_res8 [2];
  byte local_res10 [8];
  
  plVar1 = *(longlong **)(param_3 + 8);
  bVar2 = (byte)param_2;
  if (in_R9 < 0x18) {
    local_res10[0] = bVar2 & 0xe0 | (byte)in_R9;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  else if (in_R9 < 0x100) {
    local_res10[0] = bVar2 & 0xf8 | 0x18;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = *(longlong **)(param_3 + 8);
    local_res8[0]._0_1_ = (byte)in_R9;
    if ((ulonglong)plVar1[1] < *plVar1 + 1U) {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,1);
    }
    else {
      *plVar1 = *plVar1 + 1;
    }
  }
  else if (in_R9 < 0x10000) {
    local_res10[0] = bVar2 & 0xf9 | 0x19;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = *(longlong **)(param_3 + 8);
    local_res8[0]._0_2_ = (short)in_R9;
    if ((ulonglong)plVar1[1] < *plVar1 + 2U) {
      if ((*(byte *)(param_3 + 0x2a) & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,(ushort *)local_res8);
      }
    }
    else {
      *plVar1 = *plVar1 + 2;
    }
  }
  else if (in_R9 < 0x100000000) {
    local_res10[0] = bVar2 & 0xfa | 0x1a;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = *(longlong **)(param_3 + 8);
    local_res8[0] = (int)in_R9;
    if ((ulonglong)plVar1[1] < *plVar1 + 4U) {
      if ((*(byte *)(param_3 + 0x2a) & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,local_res8);
      }
    }
    else {
      *plVar1 = *plVar1 + 4;
    }
  }
  else {
    local_res10[0] = bVar2 & 0xfb | 0x1b;
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = *(longlong **)(param_3 + 8);
    if ((ulonglong)plVar1[1] < *plVar1 + 8U) {
      if ((*(byte *)(param_3 + 0x2a) & 1) == 0) {
        (**(code **)(*(longlong *)param_3 + 0x188))(param_3,local_res8,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_3,(ulong64 *)local_res8);
      }
    }
    else {
      *plVar1 = *plVar1 + 8;
    }
  }
  *(byte *)CONCAT71(in_register_00000009,param_1.Header) = local_res10[0];
  return (FCborHeader)param_1.Header;
}

// WriteValue @ 143122890

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,TStringView<char8_t> *param_1)

{
  byte bVar1;
  FArchive *pFVar2;
  byte bVar3;
  undefined7 uVar4;
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar3;
  CheckContext(this,TextString);
  WriteUIntValue((FCborHeader)0x8,(FArchive *)CONCAT71(uVar4,0x60),(ulong64)this->Stream);
  (**(code **)(*(longlong *)this->Stream + 0x188))
            (this->Stream,param_1->DataPtr,(longlong)param_1->Size);
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,TStringView<wchar_t> *param_1)

{
  byte bVar1;
  FArchive *pFVar2;
  wchar_t *pwVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),0x60);
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar4;
  CheckContext(this,TextString);
  iVar8 = (int)*(undefined8 *)&param_1->Size;
  iVar6 = 0;
  pwVar3 = param_1->DataPtr;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (pwVar3 == (wchar_t *)0x0) {
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
    goto LAB_143122a60;
  }
  if ((0 < iVar8) && (pwVar3[(longlong)iVar8 + -1] == L'\0')) {
    iVar6 = 1;
    iVar8 = iVar8 + -1;
  }
  local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar3,iVar8);
  uVar7 = local_48 + iVar6;
  uVar9 = uVar7;
  if (uVar7 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar9 = 0;
      goto LAB_143122a01;
    }
  }
  else {
LAB_143122a01:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,1);
  }
  local_50 = local_d8;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  uVar5 = (ulonglong)uVar7;
  UE::Core::Private::Convert((uchar *)local_50,uVar7,pwVar3,iVar6 + iVar8);
LAB_143122a60:
  WriteUIntValue((FCborHeader)(uchar)local_e8,(FArchive *)CONCAT71((int7)(uVar5 >> 8),0x60),
                 (ulong64)this->Stream);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,local_50,(longlong)local_48);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122af0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,FAnsiString *param_1)

{
  byte bVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FArchive *pFVar4;
  byte bVar5;
  undefined7 uVar6;
  int iVar7;
  
  iVar2 = (param_1->Data).ArrayNum;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  pFVar4 = this->Stream;
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  bVar1 = pFVar4->field_0x2a;
  bVar5 = 0;
  if ((this->Endianness != Platform) && (bVar5 = 0, this->Endianness == BigEndian)) {
    bVar5 = 1;
  }
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  pFVar4->field_0x2a = bVar1 & 0xfe | bVar5;
  CheckContext(this,TextString);
  WriteUIntValue((FCborHeader)0x8,(FArchive *)CONCAT71(uVar6,0x60),(ulong64)this->Stream);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,pFVar3,(longlong)iVar7);
  pFVar4->field_0x2a = pFVar4->field_0x2a ^ (pFVar4->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122b90

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,FString *param_1)

{
  int iVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  WriteValue(this,&local_18);
  return;
}

// WriteValue @ 143122bd0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,FUtf8String *param_1)

{
  int iVar1;
  TStringView<char8_t> local_18;
  
  local_18.DataPtr = (uchar *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  WriteValue(this,&local_18);
  return;
}

// WriteValue @ 143122c10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,float param_1)

{
  byte bVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 local_res8 [8];
  float local_res10 [2];
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar5;
  local_res10[0] = param_1;
  CheckContext(this,Prim);
  pFVar3 = this->Stream;
  local_res8[0] = 0xfa;
  puVar4 = (undefined1 *)**(undefined8 **)&pFVar3->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
  }
  else {
    local_res8[0] = *puVar4;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
  }
  pFVar3 = this->Stream;
  if ((ulonglong)(*(longlong **)&pFVar3->field_0x8)[1] < **(longlong **)&pFVar3->field_0x8 + 4U) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)local_res10);
    }
  }
  else {
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
  }
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122d10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,double param_1)

{
  byte bVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 local_res8 [8];
  double local_res10;
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar5;
  local_res10 = param_1;
  CheckContext(this,Prim);
  pFVar3 = this->Stream;
  local_res8[0] = 0xfb;
  puVar4 = (undefined1 *)**(undefined8 **)&pFVar3->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res8,1);
  }
  else {
    local_res8[0] = *puVar4;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
  }
  pFVar3 = this->Stream;
  if ((ulonglong)(*(longlong **)&pFVar3->field_0x8)[1] < **(longlong **)&pFVar3->field_0x8 + 8U) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,(ulong64 *)&local_res10);
    }
  }
  else {
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 8;
  }
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122e10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,char *param_1,ulong64 param_2)

{
  byte bVar1;
  FArchive *pFVar2;
  byte bVar3;
  undefined7 uVar4;
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar3;
  CheckContext(this,ByteString);
  WriteUIntValue((FCborHeader)0x8,(FArchive *)CONCAT71(uVar4,0x40),(ulong64)this->Stream);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,param_1,param_2);
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122eb0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,uchar *param_1,ulong64 param_2)

{
  byte bVar1;
  FArchive *pFVar2;
  byte bVar3;
  undefined7 uVar4;
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar3;
  CheckContext(this,ByteString);
  WriteUIntValue((FCborHeader)0x8,(FArchive *)CONCAT71(uVar4,0x40),(ulong64)this->Stream);
  (**(code **)(*(longlong *)this->Stream + 0x188))(this->Stream,param_1,param_2);
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122f50

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,long64 param_1)

{
  byte bVar1;
  FArchive *pFVar2;
  byte bVar3;
  undefined7 uVar5;
  FArchive *pFVar4;
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar3;
  if (param_1 < 0) {
    uVar5 = (undefined7)((ulonglong)param_1 >> 8);
    CheckContext(this,Int);
    pFVar4 = (FArchive *)CONCAT71(uVar5,0x20);
  }
  else {
    CheckContext(this,None);
    pFVar4 = (FArchive *)0x0;
  }
  WriteUIntValue((FCborHeader)0x8,pFVar4,(ulong64)this->Stream);
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143122ff0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,ulong64 param_1)

{
  byte bVar1;
  FArchive *pFVar2;
  byte bVar3;
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar3;
  CheckContext(this,None);
  WriteUIntValue((FCborHeader)0x8,(FArchive *)0x0,(ulong64)this->Stream);
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

// WriteValue @ 143123080

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ECborCode": Some values do not have unique names */

void __thiscall FCborWriter::WriteValue(FCborWriter *this,bool param_1)

{
  byte bVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  byte bVar4;
  char local_res10 [8];
  
  pFVar2 = this->Stream;
  bVar1 = pFVar2->field_0x2a;
  if ((this->Endianness == Platform) || (this->Endianness != BigEndian)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  pFVar2->field_0x2a = bVar1 & 0xfe | bVar4;
  CheckContext(this,Prim);
  pFVar3 = this->Stream;
  local_res10[0] = param_1 + -0xc;
  if ((ulonglong)(*(longlong **)&pFVar3->field_0x8)[1] < **(longlong **)&pFVar3->field_0x8 + 1U) {
    (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res10,1);
  }
  else {
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
  }
  pFVar2->field_0x2a = pFVar2->field_0x2a ^ (pFVar2->field_0x2a ^ bVar1) & 1;
  return;
}

