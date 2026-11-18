// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// operator= @ 1419d4140

FCbPackage * __thiscall FCbPackage::operator=(FCbPackage *this,FCbPackage *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  
  if (this != param_1) {
    DestructItems<FCbAttachment,int>
              ((FCbAttachment *)(this->Attachments).AllocatorInstance.Data,
               (this->Attachments).ArrayNum);
    pFVar1 = (this->Attachments).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Attachments).AllocatorInstance.Data = (param_1->Attachments).AllocatorInstance.Data;
    (param_1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Attachments).ArrayNum = (param_1->Attachments).ArrayNum;
    (this->Attachments).ArrayMax = (param_1->Attachments).ArrayMax;
    (param_1->Attachments).ArrayNum = 0;
    (param_1->Attachments).ArrayMax = 0;
  }
  uVar2 = *(undefined8 *)&(param_1->Object).field_0x8;
  *(undefined8 *)&this->Object = *(undefined8 *)&param_1->Object;
  *(undefined8 *)&(this->Object).field_0x8 = uVar2;
  FSharedBuffer::operator=
            ((FSharedBuffer *)&(this->Object).field_0x10,
             (FSharedBuffer *)&(param_1->Object).field_0x10);
  uVar2 = *(undefined8 *)((param_1->ObjectHash).Hash + 8);
  *(undefined8 *)(this->ObjectHash).Hash = *(undefined8 *)(param_1->ObjectHash).Hash;
  *(undefined8 *)((this->ObjectHash).Hash + 8) = uVar2;
  *(undefined4 *)((this->ObjectHash).Hash + 0x10) =
       *(undefined4 *)((param_1->ObjectHash).Hash + 0x10);
  return this;
}

// operator() @ 1419d6360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FCbPackage::GatherAttachments'::__l2::<lambda_1>::operator()(void *this,FCbFieldView *param_1)

{
  ECbFieldType EVar1;
  uchar *puVar2;
  FCbPackage *this_00;
  TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *pTVar3;
  code *pcVar4;
  FSharedBuffer FVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_108 [32];
  FSharedBuffer local_e8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_e0;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_d8;
  TCbBuffer<FCbObjectView> local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  FIoHash local_a4;
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  local_90;
  FCbAttachment local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_108;
  EVar1 = param_1->TypeWithFlags;
  local_a8 = 0;
  puVar2 = param_1->Value;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a4.Hash[0] = '\0';
  local_a4.Hash[1] = '\0';
  local_a4.Hash[2] = '\0';
  local_a4.Hash[3] = '\0';
  local_a4.Hash[4] = '\0';
  local_a4.Hash[5] = '\0';
  local_a4.Hash[6] = '\0';
  local_a4.Hash[7] = '\0';
  local_a4.Hash[8] = '\0';
  local_a4.Hash[9] = '\0';
  local_a4.Hash[10] = '\0';
  local_a4.Hash[0xb] = '\0';
  local_a4.Hash[0xc] = '\0';
  local_a4.Hash[0xd] = '\0';
  local_a4.Hash[0xe] = '\0';
  local_a4.Hash[0xf] = '\0';
  bVar7 = (EVar1 & CustomById) != ObjectAttachment;
  if (bVar7) {
    local_a4.Hash[0x10] = '\0';
    local_a4.Hash[0x11] = '\0';
    local_a4.Hash[0x12] = '\0';
    local_a4.Hash[0x13] = '\0';
  }
  else {
    local_a4.Hash._0_8_ = *(undefined8 *)puVar2;
    local_a4.Hash._8_8_ = *(undefined8 *)(puVar2 + 8);
    local_a4.Hash._16_4_ = *(undefined4 *)(puVar2 + 0x10);
  }
  param_1->Error = bVar7;
  (*(code *)**(undefined8 **)((longlong)this + 8))
            (&local_e8,(*(undefined8 **)((longlong)this + 8))[1]);
  FVar5.Owner.Owner = local_e8.Owner.Owner;
  if (local_e8.Owner.Owner != (FBufferOwner *)0x0) {
    this_00 = *(FCbPackage **)this;
    if ((EVar1 & CustomByName) == ObjectAttachment) {
      pTVar3 = *(TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> **)((longlong)this + 8);
      local_e8.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      local_e0 = FVar5.Owner.Owner;
      TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
                (&local_d0,(FSharedBuffer)&local_e0,HasFieldType);
      FCbAttachment::FObjectValue::FObjectValue
                ((FObjectValue *)&local_58,(FCbObject *)&local_d0,&local_a4);
      local_58.Value.TypeIndex = 1;
      FCbPackage::AddAttachment(this_00,&local_58,pTVar3);
      uVar6 = (ulonglong)local_58.Value.TypeIndex;
      if ((3 < local_58.Value.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::TDestructorCaller<FCbAttachment::FObjectValue>::Destruct) {
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
                   &local_58.Value._padding_);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_d0.Buffer.Owner);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(&local_58);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_d0.Buffer.Owner);
      }
    }
    else {
      FVar5 = FSharedBuffer::MakeOwned(&local_e8);
      FCbAttachment::FBinaryValue::FBinaryValue<FSharedBuffer,0>
                ((FBinaryValue *)&local_90,(FSharedBuffer *)FVar5.Owner.Owner);
      local_90.TypeIndex = 2;
      if ((int)local_90._padding_ == 0) {
        TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
        ::Emplace<std::nullptr_t>(&local_90);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_d8);
      FCbPackage::AddAttachment
                (this_00,(FCbAttachment *)&local_90,
                 (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
      uVar6 = (ulonglong)local_90.TypeIndex;
      if ((3 < local_90.TypeIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::TDestructorCaller<FCbAttachment::FBinaryValue>::Destruct) {
        FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_90);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])();
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_e8.Owner);
  return;
}

// AddAttachment @ 1419d8470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCbPackage::AddAttachment
          (FCbPackage *this,FCbAttachment *param_1,
          TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *param_2)

{
  int *piVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FCbObject *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  FIdentityFunctor local_a8;
  TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> local_a0;
  undefined1 local_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_f8;
  uVar15 = (ulonglong)(param_1->Value).TypeIndex;
  if ((3 < uVar15) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar15 + 4) != '\0') {
    return;
  }
  pFVar16 = (this->Attachments).AllocatorInstance.Data;
  iVar13 = (this->Attachments).ArrayNum;
  uVar11 = AlgoImpl::
           LowerBoundInternal<FCbAttachment_const_,int,FCbAttachment,FIdentityFunctor,TLess<void>_>
                     ((FCbAttachment *)pFVar16,iVar13,param_1,local_a8,(TLess<void>)local_a8);
  lVar17 = (longlong)(int)uVar11;
  if ((-1 < (int)uVar11) && ((int)uVar11 < iVar13)) {
    if (((int)uVar11 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (this->Attachments).AllocatorInstance.Data;
    bVar10 = FCbAttachment::operator==((FCbAttachment *)(pFVar16 + lVar17 * 0x38),param_1);
    if (bVar10) {
      uVar12 = 0;
      if ((int)uVar11 < (this->Attachments).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (this->Attachments).AllocatorInstance.Data + lVar17 * 0x38;
      if ((FScriptContainerElement *)param_1 != pFVar16) {
        bVar2 = (param_1->Value).TypeIndex;
        local_48 = CONCAT71(local_48._1_7_,bVar2);
        if ((3 < (ulonglong)bVar2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xec,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[bVar2])(&local_78,param_1);
        uVar4 = *(undefined8 *)&pFVar16->field_0x0;
        uVar5 = *(undefined8 *)(pFVar16 + 8);
        uVar6 = *(undefined8 *)(pFVar16 + 0x10);
        uVar7 = *(undefined8 *)(pFVar16 + 0x18);
        uVar8 = *(undefined8 *)(pFVar16 + 0x20);
        uVar9 = *(undefined8 *)(pFVar16 + 0x28);
        uVar15 = *(ulonglong *)(pFVar16 + 0x30);
        *(undefined8 *)&pFVar16->field_0x0 = local_78;
        *(undefined8 *)(pFVar16 + 8) = uStack_70;
        *(undefined8 *)(pFVar16 + 0x10) = local_68;
        *(undefined8 *)(pFVar16 + 0x18) = uStack_60;
        *(undefined8 *)(pFVar16 + 0x20) = local_58;
        *(undefined8 *)(pFVar16 + 0x28) = uStack_50;
        *(ulonglong *)(pFVar16 + 0x30) = local_48;
        local_78 = uVar4;
        uStack_70 = uVar5;
        local_68 = uVar6;
        uStack_60 = uVar7;
        local_58 = uVar8;
        uStack_50 = uVar9;
        local_48 = uVar15;
        if ((3 < (uVar15 & 0xff)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15 & 0xff])(&local_78);
      }
      goto LAB_1419d878a;
    }
  }
  if (((pFVar16 <= param_1) && (param_1 < pFVar16 + (longlong)(this->Attachments).ArrayMax * 0x38))
     && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar13 = (this->Attachments).ArrayNum;
  piVar1 = &(this->Attachments).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)this,piVar1);
  }
  pFVar16 = (this->Attachments).AllocatorInstance.Data;
  (this->Attachments).ArrayNum = iVar13 + 1;
  pFVar16 = pFVar16 + lVar17 * 0x38;
  memmove(pFVar16 + 0x38,pFVar16,(longlong)(int)(iVar13 - uVar11) * 0x38);
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
  ::
  TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
            ((TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
              *)((this->Attachments).AllocatorInstance.Data + lVar17 * 0x38),&param_1->Value);
LAB_1419d878a:
  uVar15 = (ulonglong)(param_1->Value).TypeIndex;
  if ((3 < uVar15) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar15) != '\0') &&
     (param_2 != (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0)) {
    local_a0._0_8_ = *(undefined8 *)param_2;
    local_a0._8_8_ = *(undefined8 *)&param_2->field_0x8;
    pFVar14 = FCbAttachment::AsObject(param_1,(FCbObject *)local_90);
    GatherAttachments(this,pFVar14,&local_a0);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_90 + 0x10));
  }
  return;
}

// Equals @ 1419f69a0

bool __thiscall FCbPackage::Equals(FCbPackage *this,FCbPackage *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((((*(longlong *)(this->ObjectHash).Hash == *(longlong *)(param_1->ObjectHash).Hash) &&
       (*(longlong *)((this->ObjectHash).Hash + 8) == *(longlong *)((param_1->ObjectHash).Hash + 8))
       ) && (*(int *)((this->ObjectHash).Hash + 0x10) == *(int *)((param_1->ObjectHash).Hash + 0x10)
            )) && (iVar1 = (this->Attachments).ArrayNum, iVar1 == (param_1->Attachments).ArrayNum))
  {
    bVar2 = CompareItems<FCbAttachment,int>
                      ((FCbAttachment *)(this->Attachments).AllocatorInstance.Data,
                       (FCbAttachment *)(param_1->Attachments).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// FindAttachment @ 1419f91d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbAttachment * __thiscall FCbPackage::FindAttachment(FCbPackage *this,FIoHash *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FCbAttachment *pFVar5;
  undefined1 auStack_58 [32];
  TLess<void> local_28;
  FIoHash local_24;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  iVar3 = AlgoImpl::
          LowerBoundInternal<FCbAttachment_const_,int,FIoHash,FIoHash_(__cdecl_FCbAttachment::*)(void)const_,TLess<void>_>
                    ((FCbAttachment *)(this->Attachments).AllocatorInstance.Data,
                     (this->Attachments).ArrayNum,param_1,(pmf_ac27d7cc)0x1419fed30,local_28);
  if (iVar3 < (this->Attachments).ArrayNum) {
    FCbAttachment::GetHash
              ((FCbAttachment *)
               ((this->Attachments).AllocatorInstance.Data + (longlong)iVar3 * 0x38),&local_24);
    iVar4 = memcmp(param_1,&local_24,0x14);
    if ((-1 < iVar4) && (-1 < iVar3)) {
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FCbAttachment *)(*pcVar1)();
        return pFVar5;
      }
      return (FCbAttachment *)((this->Attachments).AllocatorInstance.Data + (longlong)iVar3 * 0x38);
    }
  }
  return (FCbAttachment *)0x0;
}

// GatherAttachments @ 1419fbc90

void __thiscall
FCbPackage::GatherAttachments
          (FCbPackage *this,FCbObject *param_1,
          TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *param_2)

{
  TCbFieldIterator<FCbFieldView> *this_00;
  FCbPackage *local_48;
  TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *local_40;
  code *local_38;
  FCbPackage **local_30;
  FCbFieldViewIterator local_28;
  
  local_48 = this;
  local_40 = param_2;
  this_00 = (TCbFieldIterator<FCbFieldView> *)
            FCbFieldView::CreateViewIterator((FCbFieldView *)param_1,&local_28);
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FCbPackage::GatherAttachments'::__l2::<lambda_1>,void,FCbFieldView>
             ::Call;
  local_30 = &local_48;
  TCbFieldIterator<FCbFieldView>::IterateRangeAttachments
            (this_00,(TFunctionRef<void___cdecl(FCbFieldView)> *)&local_38);
  return;
}

// RemoveAttachment @ 141a19300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FCbPackage::RemoveAttachment(FCbPackage *this,FIoHash *param_1)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  undefined1 auStackY_68 [32];
  TLess<void> local_38;
  FIoHash local_34;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  uVar4 = AlgoImpl::
          LowerBoundInternal<FCbAttachment_const_,int,FIoHash,FIoHash_(__cdecl_FCbAttachment::*)(void)const_,TLess<void>_>
                    ((FCbAttachment *)(this->Attachments).AllocatorInstance.Data,
                     (this->Attachments).ArrayNum,param_1,(pmf_ac27d7cc)0x1419fed30,local_38);
  if ((int)uVar4 < (this->Attachments).ArrayNum) {
    FCbAttachment::GetHash
              ((FCbAttachment *)
               ((this->Attachments).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38),&local_34)
    ;
    iVar5 = memcmp(param_1,&local_34,0x14);
    if ((-1 < iVar5) && (-1 < (int)uVar4)) {
      if (((int)uVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      _Dst = (this->Attachments).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x38;
      FVar1 = _Dst[0x30];
      if ((3 < (ulonglong)(byte)FVar1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[(byte)FVar1])(_Dst);
      iVar5 = (this->Attachments).ArrayNum + ~uVar4;
      if (iVar5 != 0) {
        memmove(_Dst,_Dst + 0x38,(longlong)iVar5 * 0x38);
      }
      iVar5 = (this->Attachments).ArrayNum + -1;
      (this->Attachments).ArrayNum = iVar5;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,(ForAnyElementType *)this,iVar5,&(this->Attachments).ArrayMax);
      return 1;
    }
  }
  return 0;
}

// Save @ 141a1b200

void __thiscall FCbPackage::Save(FCbPackage *this,FArchive *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  bool bVar11;
  ECbFieldType EVar12;
  int iVar13;
  longlong lVar14;
  ulong64 uVar15;
  long64 lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  FCbFieldView local_68;
  FCbWriter local_58;
  
  local_58.States.ArrayNum = 0;
  local_58.States.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_58.States.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar13 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_58.States.AllocatorInstance,&local_58.States.ArrayMax);
  lVar14 = (longlong)iVar13;
  local_58.States.ArrayNum = iVar13 + 1;
  *(undefined4 *)(local_58.States.AllocatorInstance.Data + lVar14 * 0x18 + 2) = 0;
  *(undefined2 *)(local_58.States.AllocatorInstance.Data + lVar14 * 0x18 + 6) = 0;
  *(undefined2 *)(local_58.States.AllocatorInstance.Data + lVar14 * 0x18) = 0;
  *(undefined8 *)(local_58.States.AllocatorInstance.Data + lVar14 * 0x18 + 8) = 0;
  *(undefined8 *)(local_58.States.AllocatorInstance.Data + lVar14 * 0x18 + 0x10) = 0;
  uVar15 = FCbFieldView::GetValueSize((FCbFieldView *)&this->Object);
  if (2 < uVar15 + 1) {
    FCbWriter::BeginField(&local_58);
    if (&this->ObjectHash == (FIoHash *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr != nullptr || Count == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x9c1,L"");
      if (bVar11) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    lVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                       (1,1,0x14,(ForAnyElementType *)&local_58,&local_58.Data.ArrayNum,
                        &local_58.Data.ArrayMax);
    uVar10 = *(undefined8 *)((this->ObjectHash).Hash + 8);
    pFVar17 = local_58.Data.AllocatorInstance.Data + lVar16;
    *(undefined8 *)pFVar17 = *(undefined8 *)(this->ObjectHash).Hash;
    *(undefined8 *)(pFVar17 + 8) = uVar10;
    *(undefined4 *)(pFVar17 + 0x10) = *(undefined4 *)((this->ObjectHash).Hash + 0x10);
    FCbWriter::EndField(&local_58,Hash);
    EVar12 = *(ECbFieldType *)&this->Object;
    uVar2 = (this->Object).field_0x8;
    uVar3 = (this->Object).field_0x9;
    uVar4 = (this->Object).field_0xa;
    uVar5 = (this->Object).field_0xb;
    uVar6 = (this->Object).field_0xc;
    uVar7 = (this->Object).field_0xd;
    uVar8 = (this->Object).field_0xe;
    uVar9 = (this->Object).field_0xf;
    FCbWriter::BeginField(&local_58);
    local_68.Error = None;
    local_68.TypeWithFlags = EVar12 & (Reserved|CustomByName);
    local_68.NameLen = 0;
    local_68.Value._0_1_ = uVar2;
    local_68.Value._1_1_ = uVar3;
    local_68.Value._2_1_ = uVar4;
    local_68.Value._3_1_ = uVar5;
    local_68.Value._4_1_ = uVar6;
    local_68.Value._5_1_ = uVar7;
    local_68.Value._6_1_ = uVar8;
    local_68.Value._7_1_ = uVar9;
    EVar12 = AppendCompactBinary(&local_68,&local_58.Data);
    FCbWriter::EndField(&local_58,EVar12);
  }
  iVar13 = (this->Attachments).ArrayNum;
  pFVar17 = (this->Attachments).AllocatorInstance.Data;
  pFVar18 = pFVar17 + (longlong)iVar13 * 0x38;
  while( true ) {
    if ((this->Attachments).ArrayNum != iVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCbAttachment_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar17 == pFVar18) break;
    FCbAttachment::Save((FCbAttachment *)pFVar17,&local_58);
    pFVar17 = pFVar17 + 0x38;
  }
  FCbWriter::BeginField(&local_58);
  FCbWriter::EndField(&local_58,Null);
  if ((param_1->field_0x28 & 4) == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Ar.IsSaving()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                        ,0x77,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((local_58.States.ArrayNum != 1) ||
     (*local_58.States.AllocatorInstance.Data != (FScriptContainerElement)0x0)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("States.Num() == 1 && States.Last().Flags == EStateFlags::None",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                        ,0x79,L"It is invalid to save while there are incomplete write operations.")
    ;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_58.Data.ArrayNum < 1) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Data.Num() > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryWriter.cpp"
                        ,0x7a,L"It is invalid to save when nothing has been written.");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,local_58.Data.AllocatorInstance.Data,local_58.Data.ArrayNum);
  if (local_58.States.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.States.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// Save @ 141a1b4b0

void __thiscall FCbPackage::Save(FCbPackage *this,FCbWriter *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  ECbFieldType EVar5;
  ulong64 uVar6;
  long64 lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FCbFieldView local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar6 = FCbFieldView::GetValueSize((FCbFieldView *)&this->Object);
  if (2 < uVar6 + 1) {
    FCbWriter::BeginField(param_1);
    if (&this->ObjectHash == (FIoHash *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,0x14,(ForAnyElementType *)param_1,&(param_1->Data).ArrayNum,
                       &(param_1->Data).ArrayMax);
    uVar3 = *(undefined8 *)((this->ObjectHash).Hash + 8);
    pFVar8 = (param_1->Data).AllocatorInstance.Data + lVar7;
    *(undefined8 *)pFVar8 = *(undefined8 *)(this->ObjectHash).Hash;
    *(undefined8 *)(pFVar8 + 8) = uVar3;
    *(undefined4 *)(pFVar8 + 0x10) = *(undefined4 *)((this->ObjectHash).Hash + 0x10);
    FCbWriter::EndField(param_1,Hash);
    local_28 = *(undefined8 *)&this->Object;
    uStack_20 = *(undefined8 *)&(this->Object).field_0x8;
    FCbWriter::BeginField(param_1);
    local_38.Error = None;
    local_38.NameLen = 0;
    local_38.Value._0_1_ = (undefined1)uStack_20;
    local_38.Value._1_1_ = uStack_20._1_1_;
    local_38.Value._2_1_ = uStack_20._2_1_;
    local_38.Value._3_1_ = uStack_20._3_1_;
    local_38.Value._4_1_ = uStack_20._4_1_;
    local_38.Value._5_1_ = uStack_20._5_1_;
    local_38.Value._6_1_ = uStack_20._6_1_;
    local_38.Value._7_1_ = uStack_20._7_1_;
    local_38.TypeWithFlags = (ECbFieldType)local_28 & (Reserved|CustomByName);
    EVar5 = AppendCompactBinary(&local_38,&param_1->Data);
    FCbWriter::EndField(param_1,EVar5);
  }
  iVar1 = (this->Attachments).ArrayNum;
  pFVar8 = (this->Attachments).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x38;
  while( true ) {
    if ((this->Attachments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCbAttachment_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    FCbAttachment::Save((FCbAttachment *)pFVar8,param_1);
    pFVar8 = pFVar8 + 0x38;
  }
  FCbWriter::BeginField(param_1);
  FCbWriter::EndField(param_1,Null);
  return;
}

// SetObject @ 141a20d90

void __thiscall
FCbPackage::SetObject
          (FCbPackage *this,FCbObject *param_1,FIoHash *param_2,
          TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *param_3)

{
  atomic<unsigned___int64> *paVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  atomic<unsigned___int64> aVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  FSharedBuffer FVar12;
  undefined4 uVar13;
  ulong64 uVar14;
  FIoHash *pFVar15;
  TCbFieldIterator<FCbFieldView> *this_00;
  TCbBuffer<FCbObjectView> *pTVar16;
  undefined8 local_98;
  undefined8 local_90;
  TCbBuffer<FCbObjectView> local_88;
  TCbBuffer<FCbObjectView> local_70;
  FCbFieldViewIterator local_58;
  
  uVar14 = FCbFieldView::GetValueSize((FCbFieldView *)param_1);
  if (uVar14 + 1 < 3) {
    local_70._padding_ = 0;
    local_70._padding_ = 0;
    FCbFieldView::FCbFieldView((FCbFieldView *)&local_70,"\x02",HasFieldType);
    local_70.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    *(longlong *)&this->Object = local_70._padding_;
    *(longlong *)&(this->Object).field_0x8 = local_70._padding_;
    FSharedBuffer::operator=((FSharedBuffer *)&(this->Object).field_0x10,&local_70.Buffer);
    FVar12.Owner.Owner = local_70.Buffer.Owner.Owner;
    if (local_70.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_70.Buffer.Owner.Owner + 0x18);
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_70.Buffer.Owner.Owner + 0x10))(local_70.Buffer.Owner.Owner);
        *(void **)((longlong)FVar12.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar12.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar12.Owner.Owner + 0x18);
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar12.Owner.Owner)(FVar12.Owner.Owner,1);
        }
      }
    }
    (this->ObjectHash).Hash[0] = '\0';
    (this->ObjectHash).Hash[1] = '\0';
    (this->ObjectHash).Hash[2] = '\0';
    (this->ObjectHash).Hash[3] = '\0';
    (this->ObjectHash).Hash[4] = '\0';
    (this->ObjectHash).Hash[5] = '\0';
    (this->ObjectHash).Hash[6] = '\0';
    (this->ObjectHash).Hash[7] = '\0';
    (this->ObjectHash).Hash[8] = '\0';
    (this->ObjectHash).Hash[9] = '\0';
    (this->ObjectHash).Hash[10] = '\0';
    (this->ObjectHash).Hash[0xb] = '\0';
    (this->ObjectHash).Hash[0xc] = '\0';
    (this->ObjectHash).Hash[0xd] = '\0';
    (this->ObjectHash).Hash[0xe] = '\0';
    (this->ObjectHash).Hash[0xf] = '\0';
    (this->ObjectHash).Hash[0x10] = '\0';
    (this->ObjectHash).Hash[0x11] = '\0';
    (this->ObjectHash).Hash[0x12] = '\0';
    (this->ObjectHash).Hash[0x13] = '\0';
  }
  else {
    if ((*(longlong *)&param_1->field_0x10 == 0) ||
       ((*(ulonglong *)(*(longlong *)&param_1->field_0x10 + 0x18) >> 0x3c & 1) == 0)) {
      local_70._padding_ = *(longlong *)param_1;
      local_70._padding_ = *(longlong *)&param_1->field_0x8;
      local_70.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      TCbBuffer<FCbObjectView>::MakeOwned(&local_70);
      pTVar16 = &local_70;
      bVar11 = false;
      bVar10 = true;
    }
    else {
      local_88.Buffer.Owner.Owner =
           *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_1->field_0x10;
      pTVar16 = &local_88;
      *(undefined8 *)&param_1->field_0x10 = 0;
      bVar11 = true;
      bVar10 = false;
      local_88._padding_ = (longlong)*(FCbPackage **)param_1;
      local_88._padding_ = (longlong)*(undefined8 **)&param_1->field_0x8;
    }
    lVar5 = pTVar16->_padding_;
    *(longlong *)&this->Object = pTVar16->_padding_;
    *(longlong *)&(this->Object).field_0x8 = lVar5;
    FSharedBuffer::operator=((FSharedBuffer *)&(this->Object).field_0x10,&pTVar16->Buffer);
    FVar12.Owner.Owner = local_70.Buffer.Owner.Owner;
    if ((bVar10) && (local_70.Buffer.Owner.Owner != (FBufferOwner *)0x0)) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_70.Buffer.Owner.Owner + 0x18);
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar4._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_70.Buffer.Owner.Owner + 0x10))(local_70.Buffer.Owner.Owner);
        *(void **)((longlong)FVar12.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar12.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar12.Owner.Owner + 0x18);
        aVar4 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar4 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar12.Owner.Owner)(FVar12.Owner.Owner,1);
        }
      }
    }
    if (bVar11) {
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_88.Buffer.Owner);
    }
    if (param_2 == (FIoHash *)0x0) {
      pFVar15 = FCbObjectView::GetHash((FCbObjectView *)&this->Object,(FIoHash *)&local_70);
      uVar13 = *(undefined4 *)(pFVar15->Hash + 4);
      uVar8 = *(undefined4 *)(pFVar15->Hash + 8);
      uVar9 = *(undefined4 *)(pFVar15->Hash + 0xc);
      *(undefined4 *)(this->ObjectHash).Hash = *(undefined4 *)pFVar15->Hash;
      *(undefined4 *)((this->ObjectHash).Hash + 4) = uVar13;
      *(undefined4 *)((this->ObjectHash).Hash + 8) = uVar8;
      *(undefined4 *)((this->ObjectHash).Hash + 0xc) = uVar9;
      uVar13 = *(undefined4 *)(pFVar15->Hash + 0x10);
    }
    else {
      uVar13 = *(undefined4 *)(param_2->Hash + 4);
      uVar8 = *(undefined4 *)(param_2->Hash + 8);
      uVar9 = *(undefined4 *)(param_2->Hash + 0xc);
      *(undefined4 *)(this->ObjectHash).Hash = *(undefined4 *)param_2->Hash;
      *(undefined4 *)((this->ObjectHash).Hash + 4) = uVar13;
      *(undefined4 *)((this->ObjectHash).Hash + 8) = uVar8;
      *(undefined4 *)((this->ObjectHash).Hash + 0xc) = uVar9;
      uVar13 = *(undefined4 *)(param_2->Hash + 0x10);
    }
    *(undefined4 *)((this->ObjectHash).Hash + 0x10) = uVar13;
    if (param_3 != (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0) {
      local_98 = *(undefined8 *)param_3;
      local_90 = *(undefined8 *)&param_3->field_0x8;
      local_88._padding_ = (longlong)&local_98;
      local_88._padding_ = (longlong)this;
      this_00 = (TCbFieldIterator<FCbFieldView> *)
                FCbFieldView::CreateViewIterator((FCbFieldView *)&this->Object,&local_58);
      local_70._padding_ =
           (longlong)
           UE::Core::Private::Function::
           TFunctionRefCaller<`FCbPackage::GatherAttachments'::__l2::<lambda_1>,void,FCbFieldView>::
           Call;
      local_70._padding_ = (longlong)&local_88;
      TCbFieldIterator<FCbFieldView>::IterateRangeAttachments
                (this_00,(TFunctionRef<void___cdecl(FCbFieldView)> *)&local_70);
    }
  }
  plVar7 = *(longlong **)&param_1->field_0x10;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 3;
    lVar5 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar7[1] = 0;
      plVar7[2] = 0;
      LOCK();
      puVar3 = (ulonglong *)(plVar7 + 3);
      uVar6 = *puVar3;
      *puVar3 = *puVar3 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar6 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar7)(plVar7,1);
      }
    }
  }
  return;
}

// TryLoad @ 141a26230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCbPackage::TryLoad(FCbPackage *this,FArchive *param_1,
                   TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  FCbField *pFVar13;
  FCbObject *pFVar14;
  ulonglong uVar15;
  undefined1 auStack_188 [32];
  undefined1 local_168 [16];
  FSharedBuffer local_158;
  TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> local_150;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  void *pvStack_120;
  longlong *local_118;
  uchar auStack_110 [16];
  ulonglong uStack_100;
  TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> local_f8;
  TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined4 local_b4;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  FCbAttachment local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_128 = (undefined1  [8])0x0;
  pvStack_120 = (void *)0x0;
  auStack_110[8] = '\0';
  auStack_110[9] = '\0';
  auStack_110[10] = '\0';
  auStack_110[0xb] = '\0';
  auStack_110[0xc] = '\0';
  auStack_110[0xd] = '\0';
  auStack_110[0xe] = '\0';
  auStack_110[0xf] = '\0';
  uStack_100 = 0;
  local_138._0_8_ = (FScriptContainerElement *)0x0;
  local_138._8_4_ = 0;
  local_138._12_4_ = 0;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_128,"\x02",HasFieldType);
  local_118 = (longlong *)0x0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  auStack_110[0] = '\0';
  auStack_110[1] = '\0';
  auStack_110[2] = '\0';
  auStack_110[3] = '\0';
  auStack_110[4] = '\0';
  auStack_110[5] = '\0';
  auStack_110[6] = '\0';
  auStack_110[7] = '\0';
  auStack_110[8] = '\0';
  auStack_110[9] = '\0';
  auStack_110[10] = '\0';
  auStack_110[0xb] = '\0';
  auStack_110[0xc] = '\0';
  auStack_110[0xd] = '\0';
  auStack_110[0xe] = '\0';
  auStack_110[0xf] = '\0';
  operator=(this,(FCbPackage *)local_138);
  plVar10 = local_118;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_118 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_118 + 0x10))(local_118);
      plVar10[1] = 0;
      plVar10[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar10 + 3);
      uVar15 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar15 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar10)(plVar10,1);
      }
    }
  }
  uVar6 = local_138._0_8_;
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_138._0_8_,local_138._8_4_);
  if ((FScriptContainerElement *)uVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)uVar6);
  }
  local_150._0_8_ = *(undefined8 *)param_2;
  local_150._8_8_ = *(undefined8 *)&param_2->field_0x8;
  LoadCompactBinary((FCbField *)local_168,param_1,&local_150);
  bVar9 = local_168[0];
  do {
    if ((local_168._0_8_ & 0x1f) == 0) {
      FArchiveState::SetError((FArchiveState *)param_1);
LAB_141a26476:
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_158.Owner);
      return false;
    }
    if ((bVar9 & 0x1f) == 1) {
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_158.Owner);
      return true;
    }
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_168._2_6_ = (undefined6)((ulonglong)local_168._0_8_ >> 0x10);
    if (((bVar9 & 0x1f) == 0x10) || ((bVar9 & 0x1e) == 0xe)) {
      local_168[1] = 0;
      uVar4 = *(undefined4 *)(local_168._8_8_ + 0x10);
      uVar6 = *(undefined8 *)local_168._8_8_;
      uVar7 = *(undefined8 *)(local_168._8_8_ + 8);
      local_c4 = uVar6;
      uStack_bc = uVar7;
      local_b4 = uVar4;
      if ((bVar9 & 0x1e) == 0xe) goto LAB_141a263b0;
      local_f8._0_8_ = *(undefined8 *)param_2;
      local_f8._8_8_ = *(undefined8 *)&param_2->field_0x8;
      pFVar13 = LoadCompactBinary((FCbField *)local_b0,param_1,&local_f8);
      local_168._0_8_ = *(undefined8 *)pFVar13;
      local_168._8_8_ = *(undefined8 *)&pFVar13->field_0x8;
      FSharedBuffer::operator=(&local_158,(FSharedBuffer *)&pFVar13->field_0x10);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_b0 + 0x10));
      pFVar14 = FCbField::AsObject((FCbField *)local_168,(FCbObject *)local_98);
      uVar8 = *(undefined8 *)&pFVar14->field_0x8;
      *(undefined8 *)&this->Object = *(undefined8 *)pFVar14;
      *(undefined8 *)&(this->Object).field_0x8 = uVar8;
      FSharedBuffer::operator=
                ((FSharedBuffer *)&(this->Object).field_0x10,(FSharedBuffer *)&pFVar14->field_0x10);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_98 + 0x10));
      *(undefined8 *)(this->ObjectHash).Hash = uVar6;
      *(undefined8 *)((this->ObjectHash).Hash + 8) = uVar7;
      *(undefined4 *)((this->ObjectHash).Hash + 0x10) = uVar4;
      if (local_168[1] != '\0') goto LAB_141a26476;
    }
    else {
      local_168[1] = 1;
LAB_141a263b0:
      local_80.Value._padding_ = 0;
      local_80.Value.TypeIndex = 0;
      local_e8._0_8_ = *(undefined8 *)param_2;
      local_e8._8_8_ = *(undefined8 *)&param_2->field_0x8;
      bVar11 = TryLoadAttachmentFromArchive(&local_80,(FCbField *)local_168,param_1,&local_e8);
      if (!bVar11) {
        uVar15 = (ulonglong)local_80.Value.TypeIndex;
        if ((3 < local_80.Value.TypeIndex) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15] !=
            UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar15])(&local_80);
        }
        goto LAB_141a26476;
      }
      AddAttachment(this,&local_80,(TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
      uVar15 = (ulonglong)local_80.Value.TypeIndex;
      if ((3 < local_80.Value.TypeIndex) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] !=
          UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(&local_80);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_158.Owner);
    local_150._0_8_ = *(undefined8 *)param_2;
    local_150._8_8_ = *(undefined8 *)&param_2->field_0x8;
    LoadCompactBinary((FCbField *)local_168,param_1,&local_150);
    bVar9 = local_168[0];
  } while( true );
}

// TryLoad @ 141a265c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall FCbPackage::TryLoad(FCbPackage *this,FCbFieldIterator *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  atomic<unsigned___int64> *paVar3;
  longlong lVar4;
  atomic<unsigned___int64> aVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  bool bVar15;
  byte bVar16;
  FSharedBuffer FVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 uVar20;
  bool bVar21;
  ulong64 uVar22;
  TCbBuffer<FCbObjectView> *pTVar23;
  ulonglong uVar24;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  TCbBuffer<FCbObjectView> local_160;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  void *pvStack_130;
  longlong *local_128;
  uchar auStack_120 [16];
  ulonglong uStack_110;
  FCbFieldView local_108;
  longlong local_f8;
  longlong lStack_f0;
  FSharedBuffer local_e8;
  TCbBuffer<FCbObjectView> local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  FCbAttachment local_a0;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  bVar15 = false;
  bVar21 = false;
  local_168 = local_168 & 0xffffffff00000000;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_4_ = 0;
  local_148._12_4_ = 0;
  local_138 = (undefined1  [8])0x0;
  pvStack_130 = (void *)0x0;
  auStack_120[8] = '\0';
  auStack_120[9] = '\0';
  auStack_120[10] = '\0';
  auStack_120[0xb] = '\0';
  auStack_120[0xc] = '\0';
  auStack_120[0xd] = '\0';
  auStack_120[0xe] = '\0';
  auStack_120[0xf] = '\0';
  uStack_110 = 0;
  FCbFieldView::FCbFieldView((FCbFieldView *)local_138,"\x02",HasFieldType);
  local_128 = (longlong *)0x0;
  uStack_110 = uStack_110 & 0xffffffff00000000;
  auStack_120[0] = '\0';
  auStack_120[1] = '\0';
  auStack_120[2] = '\0';
  auStack_120[3] = '\0';
  auStack_120[4] = '\0';
  auStack_120[5] = '\0';
  auStack_120[6] = '\0';
  auStack_120[7] = '\0';
  auStack_120[8] = '\0';
  auStack_120[9] = '\0';
  auStack_120[10] = '\0';
  auStack_120[0xb] = '\0';
  auStack_120[0xc] = '\0';
  auStack_120[0xd] = '\0';
  auStack_120[0xe] = '\0';
  auStack_120[0xf] = '\0';
  operator=(this,(FCbPackage *)local_148);
  plVar18 = local_128;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_128 + 3;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar4 & 0x3fffffff) == 1) {
      (**(code **)(*local_128 + 0x10))(local_128);
      plVar18[1] = 0;
      plVar18[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar18 + 3);
      uVar24 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar24 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*plVar18)(plVar18,1);
      }
    }
  }
  uVar12 = local_148._0_8_;
  DestructItems<FCbAttachment,int>((FCbAttachment *)local_148._0_8_,local_148._8_4_);
  if ((FScriptContainerElement *)uVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)uVar12);
  }
  bVar6 = *(byte *)param_1;
  do {
    bVar16 = bVar6 & 0x1f;
    if (bVar16 == 0) {
      return false;
    }
    if (bVar16 == 1) {
      TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
      return true;
    }
    puVar8 = *(undefined8 **)&param_1->field_0x8;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if ((bVar16 == 0x10) || ((bVar6 & 0x1e) == 0xe)) {
      param_1->field_0x1 = 0;
      uVar7 = *(undefined4 *)(puVar8 + 2);
      uVar12 = *puVar8;
      uVar13 = puVar8[1];
      local_b4 = uVar12;
      uStack_ac = uVar13;
      local_a4 = uVar7;
      if ((bVar6 & 0x1e) == 0xe) goto LAB_141a26941;
      uVar22 = FCbFieldView::GetValueSize((FCbFieldView *)param_1);
      uVar24 = *(ulonglong *)&param_1->field_0x18;
      uVar9 = -(ulonglong)(uVar22 + (longlong)puVar8 != uVar24);
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)param_1,(void *)(uVar9 & uVar22 + (longlong)puVar8),
                 (ECbFieldType)uVar9 & *(ECbFieldType *)param_1);
      *(ulonglong *)&param_1->field_0x18 = uVar9 & uVar24;
      if ((*(byte *)param_1 & 0x1e) == 2) {
        param_1->field_0x1 = 0;
        local_108.TypeWithFlags = param_1->field_0x0;
        local_108.Error = param_1->field_0x1;
        local_108._2_2_ = *(undefined2 *)&param_1->field_0x2;
        local_108.NameLen = *(uint *)&param_1->field_0x4;
        local_108.Value = *(void **)&param_1->field_0x8;
      }
      else {
        param_1->field_0x1 = 1;
        FCbFieldView::FCbFieldView(&local_108,"\x02",HasFieldType);
      }
      if (param_1->field_0x1 == '\0') {
        local_168 = *(ulonglong *)&param_1->field_0x10;
        bVar15 = true;
        if (local_168 != 0) {
          LOCK();
          puVar2 = (ulonglong *)(local_168 + 0x18);
          uVar24 = *puVar2;
          *puVar2 = *puVar2 + 1;
          UNLOCK();
          if ((uVar24 & 0x3fffffff) == 0) {
            LOCK();
            *(longlong *)(local_168 + 0x18) = *(longlong *)(local_168 + 0x18) + 0x40000000;
            UNLOCK();
          }
        }
        TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
                  (&local_e0,(FCbObjectView *)&local_108,(FSharedBuffer)&local_168);
        pTVar23 = &local_e0;
      }
      else {
        bVar21 = true;
        local_160._padding_ = 0;
        local_160._padding_ = 0;
        FCbFieldView::FCbFieldView((FCbFieldView *)&local_160,"\x02",HasFieldType);
        pTVar23 = &local_160;
        local_160.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
      }
      local_e8.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(pTVar23->Buffer).Owner.Owner;
      lVar4 = pTVar23->_padding_;
      lVar14 = pTVar23->_padding_;
      (pTVar23->Buffer).Owner.Owner = (FBufferOwner *)0x0;
      FVar17.Owner.Owner = local_160.Buffer.Owner.Owner;
      local_f8 = lVar4;
      lStack_f0 = lVar14;
      if ((bVar21) && (bVar21 = false, local_160.Buffer.Owner.Owner != (FBufferOwner *)0x0)) {
        LOCK();
        paVar3 = (atomic<unsigned___int64> *)((longlong)local_160.Buffer.Owner.Owner + 0x18);
        aVar5 = *paVar3;
        *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
        UNLOCK();
        if ((aVar5._0_4_ & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_160.Buffer.Owner.Owner + 0x10))
                    (local_160.Buffer.Owner.Owner);
          *(void **)((longlong)FVar17.Owner.Owner + 8) = (void *)0x0;
          *(ulong64 *)((longlong)FVar17.Owner.Owner + 0x10) = 0;
          LOCK();
          paVar3 = (atomic<unsigned___int64> *)((longlong)FVar17.Owner.Owner + 0x18);
          aVar5 = *paVar3;
          *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 - 0x40000000);
          UNLOCK();
          if (((uint)((ulonglong)aVar5 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)FVar17.Owner.Owner)(FVar17.Owner.Owner,1);
          }
        }
      }
      if (bVar15) {
        bVar15 = false;
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_e0.Buffer.Owner);
      }
      *(longlong *)&this->Object = lVar4;
      *(longlong *)&(this->Object).field_0x8 = lVar14;
      FSharedBuffer::operator=((FSharedBuffer *)&(this->Object).field_0x10,&local_e8);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_e8.Owner);
      TCbBuffer<FCbObjectView>::MakeOwned((TCbBuffer<FCbObjectView> *)&this->Object);
      *(undefined8 *)(this->ObjectHash).Hash = uVar12;
      *(undefined8 *)((this->ObjectHash).Hash + 8) = uVar13;
      *(undefined4 *)((this->ObjectHash).Hash + 0x10) = uVar7;
      if (param_1->field_0x1 != '\0') {
        return false;
      }
      lVar4 = *(longlong *)&param_1->field_0x8;
      uVar22 = FCbFieldView::GetValueSize((FCbFieldView *)param_1);
      uVar9 = *(ulonglong *)&param_1->field_0x18;
      uVar24 = uVar22 + lVar4;
      uVar11 = -(ulonglong)(uVar24 != uVar9);
      FCbFieldView::FCbFieldView
                ((FCbFieldView *)param_1,(void *)(uVar24 & uVar11),
                 (ECbFieldType)uVar11 & *(ECbFieldType *)param_1);
      *(ulonglong *)&param_1->field_0x18 = uVar11 & uVar9;
    }
    else {
      param_1->field_0x1 = 1;
LAB_141a26941:
      local_a0.Value._padding_ = 0;
      local_a0.Value.TypeIndex = 0;
      bVar19 = FCbAttachment::TryLoad(&local_a0,param_1);
      if (!bVar19) {
        uVar24 = (ulonglong)local_a0.Value.TypeIndex;
        if ((3 < local_a0.Value.TypeIndex) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          uVar20 = (*pcVar10)();
          return (bool)uVar20;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar24] ==
            UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
          return false;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar24])(&local_a0);
        return false;
      }
      AddAttachment(this,&local_a0,(TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
      uVar24 = (ulonglong)local_a0.Value.TypeIndex;
      if ((3 < local_a0.Value.TypeIndex) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar19)) {
        pcVar10 = (code *)swi(3);
        uVar20 = (*pcVar10)();
        return (bool)uVar20;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar24] !=
          UE::Core::Private::TDestructorCaller<std::nullptr_t>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar24])(&local_a0);
      }
    }
    bVar6 = *(byte *)param_1;
  } while( true );
}

// FCbPackage @ 141ce3b90

FCbPackage * __thiscall FCbPackage::FCbPackage(FCbPackage *this,FCbObject *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  FCbObject local_28;
  
  (this->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attachments).ArrayNum = 0;
  (this->Attachments).ArrayMax = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)&this->Object);
  *(undefined8 *)&(this->Object).field_0x10 = 0;
  (this->ObjectHash).Hash[0] = '\0';
  (this->ObjectHash).Hash[1] = '\0';
  (this->ObjectHash).Hash[2] = '\0';
  (this->ObjectHash).Hash[3] = '\0';
  (this->ObjectHash).Hash[4] = '\0';
  (this->ObjectHash).Hash[5] = '\0';
  (this->ObjectHash).Hash[6] = '\0';
  (this->ObjectHash).Hash[7] = '\0';
  (this->ObjectHash).Hash[8] = '\0';
  (this->ObjectHash).Hash[9] = '\0';
  (this->ObjectHash).Hash[10] = '\0';
  (this->ObjectHash).Hash[0xb] = '\0';
  (this->ObjectHash).Hash[0xc] = '\0';
  (this->ObjectHash).Hash[0xd] = '\0';
  (this->ObjectHash).Hash[0xe] = '\0';
  (this->ObjectHash).Hash[0xf] = '\0';
  (this->ObjectHash).Hash[0x10] = '\0';
  (this->ObjectHash).Hash[0x11] = '\0';
  (this->ObjectHash).Hash[0x12] = '\0';
  (this->ObjectHash).Hash[0x13] = '\0';
  local_28._0_8_ = *(undefined8 *)param_1;
  local_28._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  SetObject(this,&local_28);
  plVar5 = *(longlong **)&param_1->field_0x10;
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
  return this;
}

// FCbPackage @ 141ce3c70

FCbPackage * __thiscall FCbPackage::FCbPackage(FCbPackage *this)

{
  (this->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Attachments).ArrayNum = 0;
  (this->Attachments).ArrayMax = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)&this->Object);
  *(undefined8 *)&(this->Object).field_0x10 = 0;
  (this->ObjectHash).Hash[0] = '\0';
  (this->ObjectHash).Hash[1] = '\0';
  (this->ObjectHash).Hash[2] = '\0';
  (this->ObjectHash).Hash[3] = '\0';
  (this->ObjectHash).Hash[4] = '\0';
  (this->ObjectHash).Hash[5] = '\0';
  (this->ObjectHash).Hash[6] = '\0';
  (this->ObjectHash).Hash[7] = '\0';
  (this->ObjectHash).Hash[8] = '\0';
  (this->ObjectHash).Hash[9] = '\0';
  (this->ObjectHash).Hash[10] = '\0';
  (this->ObjectHash).Hash[0xb] = '\0';
  (this->ObjectHash).Hash[0xc] = '\0';
  (this->ObjectHash).Hash[0xd] = '\0';
  (this->ObjectHash).Hash[0xe] = '\0';
  (this->ObjectHash).Hash[0xf] = '\0';
  (this->ObjectHash).Hash[0x10] = '\0';
  (this->ObjectHash).Hash[0x11] = '\0';
  (this->ObjectHash).Hash[0x12] = '\0';
  (this->ObjectHash).Hash[0x13] = '\0';
  return this;
}

// SetObject @ 141d03d80

void __thiscall FCbPackage::SetObject(FCbPackage *this,FCbObject *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  FCbObject local_28;
  
  local_28._0_8_ = *(undefined8 *)param_1;
  local_28._8_8_ = *(undefined8 *)&param_1->field_0x8;
  local_28._16_8_ = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  SetObject(this,&local_28,(FIoHash *)0x0,
            (TFunctionRef<FSharedBuffer___cdecl(FIoHash_const_&)> *)0x0);
  plVar5 = *(longlong **)&param_1->field_0x10;
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
                    /* WARNING: Could not recover jumptable at 0x000141d03e16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*plVar5)(plVar5,1);
        return;
      }
    }
  }
  return;
}

