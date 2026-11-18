// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// operator= @ 1419d4000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbAttachment * __thiscall FCbAttachment::operator=(FCbAttachment *this,FCbAttachment *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  FCbAttachment *pFVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_1 != this) {
    bVar2 = (param_1->Value).TypeIndex;
    local_28 = CONCAT71(local_28._1_7_,bVar2);
    if (3 < (ulonglong)bVar2) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x105,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FCbAttachment *)(*pcVar3)();
        return pFVar11;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar2])(&local_58,param_1);
    lVar4 = (this->Value)._padding_;
    lVar5 = (this->Value)._padding_;
    lVar6 = (this->Value)._padding_;
    lVar7 = (this->Value)._padding_;
    uVar1 = *(ulonglong *)&(this->Value).TypeIndex;
    lVar8 = (this->Value)._padding_;
    lVar9 = (this->Value)._padding_;
    (this->Value)._padding_ = local_58;
    (this->Value)._padding_ = lStack_50;
    (this->Value)._padding_ = local_48;
    (this->Value)._padding_ = lStack_40;
    (this->Value)._padding_ = local_38;
    (this->Value)._padding_ = lStack_30;
    *(ulonglong *)&(this->Value).TypeIndex = local_28;
    local_58 = lVar6;
    lStack_50 = lVar7;
    local_48 = lVar4;
    lStack_40 = lVar5;
    local_38 = lVar8;
    lStack_30 = lVar9;
    local_28 = uVar1;
    if (3 < (uVar1 & 0xff)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FCbAttachment *)(*pcVar3)();
        return pFVar11;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar1 & 0xff])(&local_58);
  }
  return this;
}

// operator== @ 1419d5750

bool __thiscall FCbAttachment::operator==(FCbAttachment *this,FCbAttachment *param_1)

{
  uchar uVar1;
  int iVar2;
  FCbAttachment *pFVar3;
  FCbAttachment *pFVar4;
  longlong local_38;
  longlong lStack_30;
  uchar local_28 [4];
  longlong local_24;
  longlong lStack_1c;
  uchar local_14 [20];
  
  uVar1 = (param_1->Value).TypeIndex;
  pFVar4 = (FCbAttachment *)0x0;
  pFVar3 = param_1;
  if (uVar1 != '\x03') {
    pFVar3 = pFVar4;
  }
  if (pFVar3 == (FCbAttachment *)0x0) {
    pFVar3 = param_1;
    if (uVar1 != '\x02') {
      pFVar3 = pFVar4;
    }
    if (pFVar3 == (FCbAttachment *)0x0) {
      if (uVar1 != '\x01') {
        param_1 = pFVar4;
      }
      if (param_1 == (FCbAttachment *)0x0) {
        local_38 = FIoHash::Zero.Hash._0_8_;
        lStack_30 = FIoHash::Zero.Hash._8_8_;
        local_28 = (uchar  [4])FIoHash::Zero.Hash._16_4_;
      }
      else {
        local_38 = (param_1->Value)._padding_;
        lStack_30 = (param_1->Value)._padding_;
        local_28 = *(uchar (*) [4])&(param_1->Value)._padding_;
      }
    }
    else {
      local_38 = (pFVar3->Value)._padding_;
      lStack_30 = (pFVar3->Value)._padding_;
      local_28 = *(uchar (*) [4])&(pFVar3->Value)._padding_;
    }
  }
  else {
    local_38 = (pFVar3->Value)._padding_;
    lStack_30 = (pFVar3->Value)._padding_;
    local_28 = *(uchar (*) [4])&(pFVar3->Value)._padding_;
  }
  uVar1 = (this->Value).TypeIndex;
  pFVar3 = this;
  if (uVar1 != '\x03') {
    pFVar3 = pFVar4;
  }
  if (pFVar3 == (FCbAttachment *)0x0) {
    pFVar3 = this;
    if (uVar1 != '\x02') {
      pFVar3 = pFVar4;
    }
    if (pFVar3 == (FCbAttachment *)0x0) {
      if (uVar1 != '\x01') {
        this = pFVar4;
      }
      if (this == (FCbAttachment *)0x0) {
        local_24 = FIoHash::Zero.Hash._0_8_;
        lStack_1c = FIoHash::Zero.Hash._8_8_;
        local_14._0_4_ = FIoHash::Zero.Hash._16_4_;
      }
      else {
        local_24 = (this->Value)._padding_;
        lStack_1c = (this->Value)._padding_;
        local_14._0_4_ = *(undefined4 *)&(this->Value)._padding_;
      }
      goto LAB_1419d5833;
    }
  }
  local_24 = (pFVar3->Value)._padding_;
  lStack_1c = (pFVar3->Value)._padding_;
  local_14._0_4_ = *(undefined4 *)&(pFVar3->Value)._padding_;
LAB_1419d5833:
  iVar2 = memcmp(&local_24,&local_38,0x14);
  return iVar2 == 0;
}

// operator< @ 1419d5d40

bool __thiscall FCbAttachment::operator<(FCbAttachment *this,FCbAttachment *param_1)

{
  uchar uVar1;
  int iVar2;
  FCbAttachment *pFVar3;
  FCbAttachment *pFVar4;
  longlong local_38;
  longlong lStack_30;
  uchar local_28 [4];
  longlong local_24;
  longlong lStack_1c;
  uchar local_14 [20];
  
  uVar1 = (param_1->Value).TypeIndex;
  pFVar4 = (FCbAttachment *)0x0;
  pFVar3 = param_1;
  if (uVar1 != '\x03') {
    pFVar3 = pFVar4;
  }
  if (pFVar3 == (FCbAttachment *)0x0) {
    pFVar3 = param_1;
    if (uVar1 != '\x02') {
      pFVar3 = pFVar4;
    }
    if (pFVar3 == (FCbAttachment *)0x0) {
      if (uVar1 != '\x01') {
        param_1 = pFVar4;
      }
      if (param_1 == (FCbAttachment *)0x0) {
        local_38 = FIoHash::Zero.Hash._0_8_;
        lStack_30 = FIoHash::Zero.Hash._8_8_;
        local_28 = (uchar  [4])FIoHash::Zero.Hash._16_4_;
      }
      else {
        local_38 = (param_1->Value)._padding_;
        lStack_30 = (param_1->Value)._padding_;
        local_28 = *(uchar (*) [4])&(param_1->Value)._padding_;
      }
    }
    else {
      local_38 = (pFVar3->Value)._padding_;
      lStack_30 = (pFVar3->Value)._padding_;
      local_28 = *(uchar (*) [4])&(pFVar3->Value)._padding_;
    }
  }
  else {
    local_38 = (pFVar3->Value)._padding_;
    lStack_30 = (pFVar3->Value)._padding_;
    local_28 = *(uchar (*) [4])&(pFVar3->Value)._padding_;
  }
  uVar1 = (this->Value).TypeIndex;
  pFVar3 = this;
  if (uVar1 != '\x03') {
    pFVar3 = pFVar4;
  }
  if (pFVar3 == (FCbAttachment *)0x0) {
    pFVar3 = this;
    if (uVar1 != '\x02') {
      pFVar3 = pFVar4;
    }
    if (pFVar3 == (FCbAttachment *)0x0) {
      if (uVar1 != '\x01') {
        this = pFVar4;
      }
      if (this == (FCbAttachment *)0x0) {
        local_24 = FIoHash::Zero.Hash._0_8_;
        lStack_1c = FIoHash::Zero.Hash._8_8_;
        local_14._0_4_ = FIoHash::Zero.Hash._16_4_;
      }
      else {
        local_24 = (this->Value)._padding_;
        lStack_1c = (this->Value)._padding_;
        local_14._0_4_ = *(undefined4 *)&(this->Value)._padding_;
      }
      goto LAB_1419d5e23;
    }
  }
  local_24 = (pFVar3->Value)._padding_;
  lStack_1c = (pFVar3->Value)._padding_;
  local_14._0_4_ = *(undefined4 *)&(pFVar3->Value)._padding_;
LAB_1419d5e23:
  iVar2 = memcmp(&local_24,&local_38,0x14);
  return iVar2 < 0;
}

// AsObject @ 1419e2ae0

FCbObject * __thiscall
FCbAttachment::AsObject(FCbAttachment *this,FCbObject *__return_storage_ptr__)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((this->Value).TypeIndex != '\x01') {
    this = (FCbAttachment *)0x0;
  }
  if (this != (FCbAttachment *)0x0) {
    lVar3 = (this->Value)._padding_;
    *(longlong *)__return_storage_ptr__ = (this->Value)._padding_;
    *(longlong *)&__return_storage_ptr__->field_0x8 = lVar3;
    lVar3 = (this->Value)._padding_;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(lVar3 + 0x18);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    *(longlong *)&__return_storage_ptr__->field_0x10 = lVar3;
    return __return_storage_ptr__;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  FCbFieldView::FCbFieldView((FCbFieldView *)__return_storage_ptr__,"\x02",HasFieldType);
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// GetHash @ 1419fed30

FIoHash * __thiscall FCbAttachment::GetHash(FCbAttachment *this,FIoHash *__return_storage_ptr__)

{
  uchar uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  FCbAttachment *pFVar6;
  FCbAttachment *pFVar7;
  
  uVar5 = FIoHash::Zero.Hash._16_4_;
  uVar4 = FIoHash::Zero.Hash._8_8_;
  uVar1 = (this->Value).TypeIndex;
  pFVar7 = (FCbAttachment *)0x0;
  pFVar6 = this;
  if (uVar1 != '\x03') {
    pFVar6 = pFVar7;
  }
  if (pFVar6 == (FCbAttachment *)0x0) {
    pFVar6 = this;
    if (uVar1 != '\x02') {
      pFVar6 = pFVar7;
    }
    if (pFVar6 == (FCbAttachment *)0x0) {
      if (uVar1 != '\x01') {
        this = pFVar7;
      }
      if (this != (FCbAttachment *)0x0) {
        lVar3 = (this->Value)._padding_;
        lVar2 = (this->Value)._padding_;
        *(longlong *)__return_storage_ptr__->Hash = (this->Value)._padding_;
        *(longlong *)(__return_storage_ptr__->Hash + 8) = lVar2;
        *(int *)(__return_storage_ptr__->Hash + 0x10) = (int)lVar3;
        return __return_storage_ptr__;
      }
      *(undefined8 *)__return_storage_ptr__->Hash = FIoHash::Zero.Hash._0_8_;
      *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar4;
      *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = uVar5;
      return __return_storage_ptr__;
    }
  }
  lVar2 = (pFVar6->Value)._padding_;
  lVar3 = (pFVar6->Value)._padding_;
  *(longlong *)__return_storage_ptr__->Hash = (pFVar6->Value)._padding_;
  *(longlong *)(__return_storage_ptr__->Hash + 8) = lVar2;
  *(int *)(__return_storage_ptr__->Hash + 0x10) = (int)lVar3;
  return __return_storage_ptr__;
}

// Save @ 141a1ae90

void __thiscall FCbAttachment::Save(FCbAttachment *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  FCbWriter local_38;
  
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.States.ArrayNum = 0;
  local_38.States.ArrayMax = 0;
  local_38.Data.ArrayMax = 0;
  local_38.States.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x818,&local_38.States.AllocatorInstance,&local_38.States.ArrayMax);
  lVar4 = (longlong)iVar3;
  local_38.States.ArrayNum = iVar3 + 1;
  *(undefined4 *)(local_38.States.AllocatorInstance.Data + lVar4 * 0x18 + 2) = 0;
  *(undefined2 *)(local_38.States.AllocatorInstance.Data + lVar4 * 0x18 + 6) = 0;
  *(undefined2 *)(local_38.States.AllocatorInstance.Data + lVar4 * 0x18) = 0;
  *(undefined8 *)(local_38.States.AllocatorInstance.Data + lVar4 * 0x18 + 8) = 0;
  *(undefined8 *)(local_38.States.AllocatorInstance.Data + lVar4 * 0x18 + 0x10) = 0;
  Save(this,&local_38);
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
  if ((local_38.States.ArrayNum != 1) ||
     (*local_38.States.AllocatorInstance.Data != (FScriptContainerElement)0x0)) {
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
  if (local_38.Data.ArrayNum < 1) {
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
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,local_38.Data.AllocatorInstance.Data,local_38.Data.ArrayNum);
  if (local_38.States.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.States.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Save @ 141a1aff0

void __thiscall FCbAttachment::Save(FCbAttachment *this,FCbWriter *param_1)

{
  uchar uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  ECbFieldType EVar6;
  ulong64 uVar7;
  long64 lVar8;
  FScriptContainerElement *pFVar9;
  FCbFieldView *pFVar10;
  FCbFieldView *pFVar11;
  FCbFieldView local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = (this->Value).TypeIndex;
  pFVar10 = (FCbFieldView *)0x0;
  pFVar11 = (FCbFieldView *)this;
  if (uVar1 != '\x01') {
    pFVar11 = pFVar10;
  }
  if (pFVar11 == (FCbFieldView *)0x0) {
    pFVar11 = (FCbFieldView *)this;
    if (uVar1 != '\x02') {
      pFVar11 = pFVar10;
    }
    if (pFVar11 == (FCbFieldView *)0x0) {
      if (uVar1 != '\x03') {
        this = (FCbAttachment *)pFVar10;
      }
      if ((FCbFieldView *)this == (FCbFieldView *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\CompactBinaryPackage.cpp"
                           ,0xc2,L"Null attachments cannot be serialized.");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        FCbWriter::AddBinary(param_1,(FCompositeBuffer *)this);
      }
    }
    else {
      uVar7 = FCompositeBuffer::GetSize((FCompositeBuffer *)pFVar11);
      if (uVar7 != 0) {
        FCbWriter::BeginField(param_1);
        if (&pFVar11[1].Value == (void **)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                          (1,1,0x14,(ForAnyElementType *)param_1,&(param_1->Data).ArrayNum,
                           &(param_1->Data).ArrayMax);
        lVar4 = *(longlong *)(pFVar11 + 2);
        pFVar9 = (param_1->Data).AllocatorInstance.Data + lVar8;
        *(void **)pFVar9 = pFVar11[1].Value;
        *(longlong *)(pFVar9 + 8) = lVar4;
        *(undefined4 *)(pFVar9 + 0x10) = *(undefined4 *)&pFVar11[2].Value;
        FCbWriter::EndField(param_1,BinaryAttachment);
      }
      FCbWriter::AddBinary(param_1,(FCompositeBuffer *)pFVar11);
    }
  }
  else {
    uVar7 = FCbFieldView::GetValueSize(pFVar11);
    if (2 < uVar7 + 1) {
      FCbWriter::BeginField(param_1);
      if (&pFVar11[1].Value == (void **)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (1,1,0x14,(ForAnyElementType *)param_1,&(param_1->Data).ArrayNum,
                         &(param_1->Data).ArrayMax);
      uVar3 = *(undefined8 *)(pFVar11 + 2);
      pFVar9 = (param_1->Data).AllocatorInstance.Data + lVar8;
      *(void **)pFVar9 = pFVar11[1].Value;
      *(undefined8 *)(pFVar9 + 8) = uVar3;
      *(undefined4 *)(pFVar9 + 0x10) = *(undefined4 *)&pFVar11[2].Value;
      FCbWriter::EndField(param_1,ObjectAttachment);
    }
    local_18._0_1_ = pFVar11->TypeWithFlags;
    local_18._1_1_ = pFVar11->Error;
    local_18._2_2_ = *(undefined2 *)&pFVar11->field_0x2;
    local_18._4_4_ = pFVar11->NameLen;
    uStack_10 = pFVar11->Value;
    FCbWriter::BeginField(param_1);
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
    EVar6 = AppendCompactBinary(&local_28,&param_1->Data);
    FCbWriter::EndField(param_1,EVar6);
  }
  return;
}

// TryLoad @ 141a25b70

bool __thiscall
FCbAttachment::TryLoad
          (FCbAttachment *this,FArchive *param_1,
          TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> *param_2)

{
  bool bVar1;
  TFunctionRef<FUniqueBuffer___cdecl(unsigned___int64)> local_38;
  undefined1 local_28 [32];
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  LoadCompactBinary((FCbField *)local_28,param_1,&local_38);
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  bVar1 = TryLoadAttachmentFromArchive(this,(FCbField *)local_28,param_1,&local_38);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_28 + 0x10));
  return bVar1;
}

// TryLoad @ 141a25c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbAttachment::TryLoad(FCbAttachment *this,FCbFieldIterator *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  atomic<unsigned___int64> *paVar3;
  longlong lVar4;
  atomic<unsigned___int64> aVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 uVar11;
  byte bVar12;
  ulong64 uVar13;
  FCbObject *pFVar14;
  FSharedBuffer FVar15;
  FCompositeBuffer *pFVar16;
  FBlake3Hash *pFVar17;
  FSharedBuffer *this_00;
  ulonglong uVar18;
  undefined1 auStack_1d8 [32];
  FSharedBuffer local_1b8;
  FSharedBuffer local_1b0;
  TMemoryView<void_const_> local_1a8;
  TMemoryView<void_const_> local_198;
  FIoHash local_188;
  undefined1 local_170 [16];
  longlong *local_160;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  FCbFieldView local_140;
  TMemoryView<void_const_> local_128;
  TMemoryView<void_const_> local_118;
  TMemoryView<void_const_> local_108;
  FSharedBuffer local_f8;
  ulong64 uStack_f0;
  TMemoryView<void_const_> local_e8;
  FSharedBuffer local_d8;
  ulong64 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined1 local_a0 [24];
  FCompressedBuffer local_88;
  FCompositeBuffer local_70;
  FBlake3Hash local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1b8.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
       ((ulonglong)local_1b8.Owner.Owner & 0xffffffff00000000);
  if ((*(byte *)param_1 & 0x1e) == 2) {
    param_1->field_0x1 = 0;
    local_140.TypeWithFlags = param_1->field_0x0;
    local_140.Error = param_1->field_0x1;
    local_140._2_2_ = *(undefined2 *)&param_1->field_0x2;
    local_140.NameLen = *(uint *)&param_1->field_0x4;
    local_140.Value = *(void **)&param_1->field_0x8;
  }
  else {
    param_1->field_0x1 = 1;
    FCbFieldView::FCbFieldView(&local_140,"\x02",HasFieldType);
  }
  if (param_1->field_0x1 == '\0') {
    uVar13 = FCbFieldView::GetValueSize(&local_140);
    if (uVar13 + 1 < 3) {
      local_170._0_8_ = 0;
      local_170._8_8_ = (void *)0x0;
      FCbFieldView::FCbFieldView((FCbFieldView *)local_170,"\x02",HasFieldType);
      uVar18 = (ulonglong)(this->Value).TypeIndex;
      local_160 = (longlong *)0x0;
      if ((3 < uVar18) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        uVar11 = (*pcVar7)();
        return (bool)uVar11;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar18])(this);
      FObjectValue::FObjectValue((FObjectValue *)this,(FCbObject *)local_170,(FIoHash *)0x0);
      plVar6 = local_160;
      (this->Value).TypeIndex = '\x01';
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_160 + 3;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar4 & 0x3fffffff) == 1) {
          (**(code **)(*local_160 + 0x10))(local_160);
          plVar6[1] = 0;
          plVar6[2] = 0;
          LOCK();
          puVar2 = (ulonglong *)(plVar6 + 3);
          uVar18 = *puVar2;
          *puVar2 = *puVar2 - 0x40000000;
          UNLOCK();
          if (((uint)(uVar18 >> 0x1e) & 0x3fffffff) == 1) {
            (**(code **)*plVar6)(plVar6,1);
          }
        }
      }
      TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
      return true;
    }
  }
  else {
    plVar6 = *(longlong **)&param_1->field_0x8;
    bVar12 = *(byte *)param_1 & 0x1f;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if (bVar12 == 0xe) {
      param_1->field_0x1 = 0;
      local_188.Hash._0_8_ = *plVar6;
      local_188.Hash._8_8_ = plVar6[1];
      local_188.Hash._16_4_ = *(undefined4 *)(plVar6 + 2);
      TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
      if ((*(byte *)param_1 & 0x1e) == 2) {
        pFVar14 = FCbField::AsObject((FCbField *)param_1,(FCbObject *)local_a0);
        uVar18 = (ulonglong)(this->Value).TypeIndex;
        if ((3 < uVar18) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          uVar11 = (*pcVar7)();
          return (bool)uVar11;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18] ==
            UE::Core::Private::TDestructorCaller<FCbAttachment::FObjectValue>::Destruct) {
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
                     &(this->Value)._padding_);
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar18])(this);
        }
        FObjectValue::FObjectValue((FObjectValue *)this,pFVar14,&local_188);
        (this->Value).TypeIndex = '\x01';
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_a0 + 0x10));
        TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
        return true;
      }
    }
    else {
      local_188.Hash[0x10] = '\0';
      local_188.Hash[0x11] = '\0';
      local_188.Hash[0x12] = '\0';
      local_188.Hash[0x13] = '\0';
      local_a4 = 0;
      local_188.Hash[0] = '\0';
      local_188.Hash[1] = '\0';
      local_188.Hash[2] = '\0';
      local_188.Hash[3] = '\0';
      local_188.Hash[4] = '\0';
      local_188.Hash[5] = '\0';
      local_188.Hash[6] = '\0';
      local_188.Hash[7] = '\0';
      local_188.Hash[8] = '\0';
      local_188.Hash[9] = '\0';
      local_188.Hash[10] = '\0';
      local_188.Hash[0xb] = '\0';
      local_188.Hash[0xc] = '\0';
      local_188.Hash[0xd] = '\0';
      local_188.Hash[0xe] = '\0';
      local_188.Hash[0xf] = '\0';
      local_b4 = 0;
      uStack_ac = 0;
      if (bVar12 == 0xf) {
        param_1->field_0x1 = 0;
        lVar4 = *plVar6;
        lVar8 = plVar6[1];
        lVar9 = plVar6[2];
        local_158 = lVar4;
        lStack_150 = lVar8;
        local_148 = (int)lVar9;
        TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
        local_128.Data = (void *)0x0;
        local_128.Size = 0;
        FCbFieldView::AsBinaryView((FCbFieldView *)param_1,&local_108,&local_128);
        if (param_1->field_0x1 == '\0') {
          local_f8.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_108.Data;
          uStack_f0 = local_108.Size;
          local_1b0 = FSharedBuffer::MakeView(&local_1a8,&local_f8);
          local_1b0.Owner.Owner =
               *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)local_1b0.Owner.Owner;
          if (local_1b0.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar3 = &((FBufferOwner *)local_1b0.Owner.Owner)->ReferenceCountsAndFlags;
            aVar5 = *paVar3;
            *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
            UNLOCK();
            if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
              LOCK();
              ((FBufferOwner *)local_1b0.Owner.Owner)->ReferenceCountsAndFlags =
                   (atomic<unsigned___int64>)
                   ((longlong)((FBufferOwner *)local_1b0.Owner.Owner)->ReferenceCountsAndFlags +
                   0x40000000);
              UNLOCK();
            }
          }
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1a8);
        }
        else {
          local_1b0.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        }
        if (param_1->field_0x1 == '\0') {
          uVar18 = (ulonglong)(this->Value).TypeIndex;
          if ((3 < uVar18) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18] ==
              UE::Core::Private::TDestructorCaller<FCbAttachment::FObjectValue>::Destruct) {
            UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
            ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                      ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
                       &(this->Value)._padding_);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18])(this);
          }
          FVar15 = FSharedBuffer::MakeOwned(&local_1b0);
          FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
                    ((FCompositeBuffer *)this,(FSharedBuffer *)FVar15.Owner.Owner);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1a8.Size);
          (this->Value)._padding_ = lVar4;
          (this->Value)._padding_ = lVar8;
          *(int *)&(this->Value)._padding_ = (int)lVar9;
          (this->Value).TypeIndex = '\x02';
          TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1b0.Owner);
          return true;
        }
        this_00 = &local_1b0;
      }
      else {
        param_1->field_0x1 = 1;
        if (bVar12 != 6) {
          return false;
        }
        local_118.Data = (void *)0x0;
        local_118.Size = 0;
        FCbFieldView::AsBinaryView((FCbFieldView *)param_1,&local_e8,&local_118);
        if (param_1->field_0x1 == '\0') {
          local_d8.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_e8.Data;
          uStack_d0 = local_e8.Size;
          FVar15 = FSharedBuffer::MakeView(&local_198,&local_d8);
          local_1b8.Owner.Owner =
               *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar15.Owner.Owner;
          if (local_1b8.Owner.Owner != (FBufferOwner *)0x0) {
            LOCK();
            paVar3 = &((FBufferOwner *)local_1b8.Owner.Owner)->ReferenceCountsAndFlags;
            aVar5 = *paVar3;
            *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
            UNLOCK();
            if (((ulonglong)aVar5 & 0x3fffffff) == 0) {
              LOCK();
              ((FBufferOwner *)local_1b8.Owner.Owner)->ReferenceCountsAndFlags =
                   (atomic<unsigned___int64>)
                   ((longlong)((FBufferOwner *)local_1b8.Owner.Owner)->ReferenceCountsAndFlags +
                   0x40000000);
              UNLOCK();
            }
          }
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_198);
        }
        else {
          local_1b8.Owner.Owner =
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
        }
        FVar15.Owner.Owner = local_1b8.Owner.Owner;
        if (local_1b8.Owner.Owner == (FBufferOwner *)0x0) {
LAB_141a2616d:
          uVar18 = (ulonglong)(this->Value).TypeIndex;
          if ((3 < uVar18) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18] ==
              UE::Core::Private::TDestructorCaller<FCbAttachment::FBinaryValue>::Destruct) {
            FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)this);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18])();
          }
          FVar15 = FSharedBuffer::MakeOwned(&local_1b8);
          FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
                    ((FCompositeBuffer *)this,(FSharedBuffer *)FVar15.Owner.Owner);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_198.Size);
          pFVar17 = FBlake3::HashBuffer(&local_58,(FCompositeBuffer *)this);
          (this->Value)._padding_ = 0;
          (this->Value)._padding_ = 0;
          *(undefined4 *)&(this->Value)._padding_ = 0;
          lVar4 = *(longlong *)(pFVar17->Hash + 8);
          (this->Value)._padding_ = *(longlong *)pFVar17->Hash;
          (this->Value)._padding_ = lVar4;
          *(undefined4 *)&(this->Value)._padding_ = *(undefined4 *)(pFVar17->Hash + 0x10);
          (this->Value).TypeIndex = '\x02';
          TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1b8.Owner);
          return true;
        }
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_1b8.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_1b8.Owner.Owner + 8))(local_1b8.Owner.Owner);
        }
        if (*(ulong64 *)((longlong)FVar15.Owner.Owner + 0x10) == 0) goto LAB_141a2616d;
        FCompressedBuffer::FromCompressed(&local_88,&local_1b8);
        if (local_88.CompressedData.Segments.ArrayNum != 0) {
          uVar18 = (ulonglong)(this->Value).TypeIndex;
          if ((3 < uVar18) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            uVar11 = (*pcVar7)();
            return (bool)uVar11;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18] ==
              UE::Core::Private::TDestructorCaller<FCbAttachment::FBinaryValue>::Destruct) {
            FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)this);
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar18])();
          }
          pFVar16 = FCompositeBuffer::MakeOwned(&local_88.CompressedData,&local_70);
          FCompressedBuffer::FromCompressed((FCompressedBuffer *)this,pFVar16);
          FCompositeBuffer::~FCompositeBuffer(&local_70);
          FCompressedBuffer::GetRawHash
                    ((FCompressedBuffer *)this,(FIoHash *)&(this->Value)._padding_);
          (this->Value).TypeIndex = '\x03';
          TCbFieldIterator<FCbField>::operator++((TCbFieldIterator<FCbField> *)param_1);
          FCompositeBuffer::~FCompositeBuffer(&local_88.CompressedData);
          UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1b8.Owner);
          return true;
        }
        FCompositeBuffer::~FCompositeBuffer(&local_88.CompressedData);
        this_00 = &local_1b8;
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&this_00->Owner);
    }
  }
  return false;
}

// FCbAttachment<FSharedBuffer,0> @ 141cce120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCbAttachment * __thiscall
FCbAttachment::FCbAttachment<FSharedBuffer,0>
          (FCbAttachment *this,TInPlaceType<FCbAttachment::FBinaryValue> param_1,
          FSharedBuffer *param_2)

{
  longlong lVar1;
  FSharedBuffer FVar2;
  FBlake3Hash *pFVar3;
  undefined1 auStack_58 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_38;
  FBlake3Hash local_30;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  FVar2 = FSharedBuffer::MakeOwned(param_2);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
            ((FCompositeBuffer *)this,(FSharedBuffer *)FVar2.Owner.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_38);
  pFVar3 = FBlake3::HashBuffer(&local_30,(FCompositeBuffer *)this);
  (this->Value)._padding_ = 0;
  (this->Value)._padding_ = 0;
  *(undefined4 *)&(this->Value)._padding_ = 0;
  lVar1 = *(longlong *)(pFVar3->Hash + 8);
  (this->Value)._padding_ = *(longlong *)pFVar3->Hash;
  (this->Value)._padding_ = lVar1;
  *(undefined4 *)&(this->Value)._padding_ = *(undefined4 *)(pFVar3->Hash + 0x10);
  (this->Value).TypeIndex = '\x02';
  if ((int)(this->Value)._padding_ == 0) {
    TVariant<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>
    ::Emplace<std::nullptr_t>(&this->Value);
  }
  return this;
}

// ~FCbAttachment @ 141cf1690

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

void __thiscall FCbAttachment::~FCbAttachment(FCbAttachment *this)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  FCbAttachment *pFVar4;
  void *pvVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  byte *pbVar12;
  FCbAttachment *pFVar13;
  undefined2 uVar14;
  char *in_RDX;
  char *unaff_RBX;
  char *unaff_RBP;
  undefined1 *unaff_RSI;
  undefined4 *puVar16;
  char *unaff_RDI;
  longlong in_R10;
  char *unaff_R15;
  longlong *unaff_retaddr;
  char cVar15;
  
  bVar3 = (this->Value).TypeIndex;
  if (3 < (ulonglong)bVar3) {
    in_RDX = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pbVar12 = (&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar3];
  cVar15 = (char)((ulonglong)in_RDX >> 8);
  uVar14 = SUB82(in_RDX,0);
  cVar10 = (char)((ulonglong)pbVar12 >> 8);
  bVar9 = (byte)pbVar12;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar3) {
  case 0:
    return;
  case 1:
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&(this->Value)._padding_);
    return;
  case 2:
    break;
  case 3:
    break;
  case 4:
    *unaff_R15 = *unaff_R15 + (char)unaff_RBP;
    out(*unaff_RSI,uVar14);
    pcVar1 = (char *)((longlong)pbVar12 * 2 + 0x61);
    *pcVar1 = *pcVar1 + cVar15;
    *(char *)&(this->Value)._padding_ = (char)(this->Value)._padding_ + (char)((ulonglong)this >> 8)
    ;
    out(unaff_RSI[1],uVar14);
    *unaff_RBP = *unaff_RBP + cVar10;
    *pbVar12 = *pbVar12 & bVar9;
    *pbVar12 = *pbVar12 + cVar10;
    *unaff_RBX = *unaff_RBX + cVar10;
    *unaff_RDI = *unaff_RDI + cVar10;
    pcVar1 = (char *)((longlong)&FiberData + (longlong)pbVar12 * 2);
    *pcVar1 = *pcVar1 + cVar10;
    pcVar1 = (char *)((longlong)pbVar12 * 2 + 0x75);
    *pcVar1 = *pcVar1 + cVar10;
    *in_RDX = *in_RDX + cVar15;
    uVar11 = *(int *)pbVar12 * 0x67006e;
    *(byte *)(ulonglong)uVar11 = *(byte *)(ulonglong)uVar11 & (byte)uVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 5:
    if (&stack0x00000000 != &DAT_00000008) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(*unaff_RSI,uVar14);
    pbVar2 = unaff_RSI + 2;
    out(unaff_RSI[1],uVar14);
    cVar10 = in(uVar14);
    *unaff_RDI = cVar10;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar12 = *pbVar12 + bVar9;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
    bVar3 = unaff_R15[in_R10 * 2 + 0x6f];
    if ((byte)unaff_RBX < bVar3) {
      cVar10 = in(uVar14);
      *unaff_RDI = cVar10;
      out(*unaff_RSI,uVar14);
      unaff_RSI = unaff_RSI + 1;
      unaff_RDI = unaff_RDI + 1;
    }
    puVar16 = (undefined4 *)(unaff_RSI + 1);
    out(*unaff_RSI,uVar14);
    lVar6 = (longlong)*(int *)(longlong)((int)puVar16 + 0x65) * 0x756f535c;
    if ((int)lVar6 != lVar6) {
      *in_RDX = *in_RDX + cVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char **)(*unaff_retaddr + -8) = in_RDX;
    if ((byte)unaff_RBX == bVar3) {
      pbVar12 = (byte *)0x0;
    }
    else {
      *pbVar12 = *pbVar12 + bVar9;
    }
    cVar10 = (char)pbVar12;
    *pbVar12 = *pbVar12 + cVar10;
    *pbVar12 = *pbVar12 + cVar10;
    pcVar1 = unaff_RBX + 0x6f;
    *pcVar1 = *pcVar1 + cVar10;
    if (*pcVar1 == '\0') {
      cVar10 = in(uVar14);
      *unaff_RDI = cVar10;
      unaff_RDI[0x6f6c4221] = unaff_RDI[0x6f6c4221] & (byte)((ulonglong)unaff_RBX >> 8);
      cVar10 = in(uVar14);
      unaff_RDI[1] = cVar10;
      cVar10 = in(uVar14);
      unaff_RDI[2] = cVar10;
      out(*puVar16,uVar14);
      puVar16 = (undefined4 *)(unaff_RSI + 9);
      out(*(undefined4 *)(unaff_RSI + 5),uVar14);
    }
    out(*(undefined1 *)puVar16,uVar14);
    *(char *)((longlong)puVar16 + 1) = *(char *)((longlong)puVar16 + 1) + cVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pFVar4 = (FCbAttachment *)(this->Value)._padding_;
  pFVar13 = this;
  if (pFVar4 != (FCbAttachment *)0x0) {
    pFVar13 = pFVar4;
  }
  DestructItems<FSharedBuffer,int>((FSharedBuffer *)pFVar13,(int)(this->Value)._padding_);
  pvVar5 = (void *)(this->Value)._padding_;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
    return;
  }
  return;
}

// operator_bool @ 141cf18b0

bool __thiscall FCbAttachment::operator_bool(FCbAttachment *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Value).TypeIndex;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return *(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar4 + 4) == '\0';
}

// AsBinary @ 141cf8cb0

FSharedBuffer __thiscall FCbAttachment::AsBinary(FCbAttachment *this)

{
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  
  if ((this->Value).TypeIndex != '\x02') {
    this = (FCbAttachment *)0x0;
  }
  if (this != (FCbAttachment *)0x0) {
    FCompositeBuffer::ToShared((FCompositeBuffer *)this);
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  (in_RDX.Owner)->_padding_ = 0;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// IsBinary @ 141d01df0

bool __thiscall FCbAttachment::IsBinary(FCbAttachment *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Value).TypeIndex;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4 + 4);
}

// IsCompressedBinary @ 141d01e40

bool __thiscall FCbAttachment::IsCompressedBinary(FCbAttachment *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Value).TypeIndex;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FCompressedBinaryValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

// IsNull @ 141d01e90

bool __thiscall FCbAttachment::IsNull(FCbAttachment *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Value).TypeIndex;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4 + 4);
}

// IsObject @ 141d01ee0

bool __thiscall FCbAttachment::IsObject(FCbAttachment *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Value).TypeIndex;
  if (3 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FCbAttachment::FObjectValue,std::nullptr_t,FCbAttachment::FObjectValue,FCbAttachment::FBinaryValue,FCbAttachment::FCompressedBinaryValue>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

