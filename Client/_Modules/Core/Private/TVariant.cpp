// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~TVariant<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<FExpressionNode,FExpressionError>::FEmptyType> @ 1417a6b40

void __thiscall
TVariant<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>
::
~TVariant<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>
          (TVariant<FExpressionNode,TValueOrError<FExpressionNode,FExpressionError>::FWrapErrorType,TValueOrError<FExpressionNode,FExpressionError>::FEmptyType>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  bVar1 = this->TypeIndex;
  if (2 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 1:
    if (*(longlong **)this != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3fab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)this + 0x10))();
      return;
    }
    return;
  case 2:
    return;
  }
  puVar4 = (undefined8 *)&this->field_0x10;
  if (((*(int *)&this->field_0xc == 0 && *(int *)&this->field_0x8 == 0) &&
      *(int *)&this->field_0x4 == 0) && *(int *)this == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418beb42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,0);
    return;
  }
  return;
}

// Emplace<std::nullptr_t> @ 1419b8b50

void __thiscall
TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
::Emplace<std::nullptr_t>
          (TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  this->_padding_ = 0;
  this->TypeIndex = '\0';
  return;
}

// TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue> @ 1419cc480

TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
* __thiscall
TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
::
TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
          (TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
           *this,TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(this,param_1);
  return this;
}

// ~TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue> @ 141cf15d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001506141bb) overlaps instruction at (ram,0x0001506141ba)
    */
/* WARNING: Removing unreachable block (ram,0x000150614182) */
/* WARNING: Removing unreachable block (ram,0x00015061417d) */
/* WARNING: Removing unreachable block (ram,0x00015061417f) */
/* WARNING: Removing unreachable block (ram,0x000150614183) */
/* WARNING: Removing unreachable block (ram,0x000150614189) */
/* WARNING: Removing unreachable block (ram,0x0001506141a3) */
/* WARNING: Removing unreachable block (ram,0x00015061417b) */
/* WARNING: Removing unreachable block (ram,0x0001506141f1) */
/* WARNING: Removing unreachable block (ram,0x000150614158) */
/* WARNING: Removing unreachable block (ram,0x00015061424b) */
/* WARNING: Removing unreachable block (ram,0x0001506140c9) */
/* WARNING: Removing unreachable block (ram,0x00015061414d) */
/* WARNING: Removing unreachable block (ram,0x000150614106) */
/* WARNING: Removing unreachable block (ram,0x00015061410a) */
/* WARNING: Removing unreachable block (ram,0x00015061416b) */
/* WARNING: Removing unreachable block (ram,0x000150614256) */
/* WARNING: Removing unreachable block (ram,0x0001506141c6) */

void __thiscall
TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
::
~TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
          (TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
           *this)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  byte *pbVar10;
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  *pTVar11;
  undefined2 uVar12;
  char *in_RDX;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar14;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar13;
  
  bVar3 = this->TypeIndex;
  if (3 < (ulonglong)bVar3) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pbVar10 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3];
  cVar13 = (char)((ulonglong)in_RDX >> 8);
  uVar12 = SUB82(in_RDX,0);
  cVar8 = (char)((ulonglong)pbVar10 >> 8);
  bVar7 = (byte)pbVar10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    return;
  case 1:
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
    return;
  case 2:
    break;
  case 3:
    break;
  case 4:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar12);
    pcVar1 = (char *)((longlong)pbVar10 * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar13;
    *(char *)&this->_padding_ = (char)this->_padding_ + (char)((ulonglong)this >> 8);
    out(unaff_RSI[1],uVar12);
    *unaff_RBP = *unaff_RBP + cVar8;
    *pbVar10 = *pbVar10 & bVar7;
    *pbVar10 = *pbVar10 + cVar8;
    *unaff_RBX = *unaff_RBX + cVar8;
    *unaff_RDI = *unaff_RDI + cVar8;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)pbVar10 * 2);
    *pcVar1 = *pcVar1 + cVar8;
    pcVar1 = (char *)((longlong)pbVar10 * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar8;
    *in_RDX = *in_RDX + cVar13;
    uVar9 = *(int *)pbVar10 * 0x67006e;
    *(byte *)(ulonglong)uVar9 = *(byte *)(ulonglong)uVar9 & (byte)uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar12);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar12);
    cVar8 = in(uVar12);
    *unaff_RDI = cVar8;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar10 = *pbVar10 + bVar7;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
    if ((byte)unaff_RBX < bVar3) {
      cVar8 = in(uVar12);
      *unaff_RDI = cVar8;
      out(*unaff_RSI,uVar12);
      unaff_RSI = unaff_RSI + 1;
      unaff_RDI = unaff_RDI + 1;
    }
    puVar14 = (undefined4 *)(unaff_RSI + 1);
    out(*unaff_RSI,uVar12);
    lVar4 = (longlong)*(int *)(longlong)((int)puVar14 + 0x65) * 0x756f535c;
    if ((int)lVar4 != lVar4) {
      *in_RDX = *in_RDX + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char **)(*unaff_retaddr + -8) = in_RDX;
    if ((byte)unaff_RBX == bVar3) {
      pbVar10 = (byte *)0x0;
    }
    else {
      *pbVar10 = *pbVar10 + bVar7;
    }
    cVar8 = (char)pbVar10;
    *pbVar10 = *pbVar10 + cVar8;
    *pbVar10 = *pbVar10 + cVar8;
    pcVar1 = unaff_RBX + 0x6f;
    *pcVar1 = *pcVar1 + cVar8;
    if (*pcVar1 == '\0') {
      cVar8 = in(uVar12);
      *unaff_RDI = cVar8;
      unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
      cVar8 = in(uVar12);
      unaff_RDI[1] = cVar8;
      cVar8 = in(uVar12);
      unaff_RDI[2] = cVar8;
      out(*puVar14,uVar12);
      puVar14 = (undefined4 *)(unaff_RSI + 9);
      out(*(undefined4 *)(unaff_RSI + 5),uVar12);
    }
    out(*(undefined1 *)puVar14,uVar12);
    *(char *)((longlong)puVar14 + 1) = *(char *)((longlong)puVar14 + 1) + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pTVar11 = this;
  if ((TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
       *)this->_padding_ !=
      (TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
       *)0x0) {
    pTVar11 = (TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
               *)this->_padding_;
  }
  DestructItems<FSharedBuffer,int>((FSharedBuffer *)pTVar11,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

