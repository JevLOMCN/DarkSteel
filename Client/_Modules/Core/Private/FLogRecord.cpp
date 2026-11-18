// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ConvertToCommonLog @ 1417bd180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FLogRecord::ConvertToCommonLog
          (FLogRecord *this,TStringBuilderBase<char8_t> *param_1,FCbWriter *param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  longlong lVar3;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar4;
  wchar_t *_Str;
  void *pvVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  FCbFieldView *pFVar13;
  size_t sVar14;
  FSharedBuffer *pFVar15;
  longlong *plVar16;
  TCbFieldIterator<FCbField> *pTVar17;
  undefined1 auStack_2d8 [32];
  TStringView<char8_t> local_2b8;
  TCbFieldIterator<FCbField> local_2a8;
  undefined1 local_288 [24];
  TCbBuffer<FCbArrayView> local_270;
  TCbFieldIterator<FCbField> local_258;
  TCbBuffer<FCbFieldView> local_238;
  FBufferOwner *local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  char *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  char *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  FBufferOwner *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  char *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  FBufferOwner *local_1c8;
  undefined4 uStack_1bc;
  char *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  FBufferOwner *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FCbArrayView local_198;
  FCbObjectView local_188;
  FCbFieldView local_178;
  TStringBuilderBase<char8_t> local_168;
  FBufferOwner local_148 [8];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2d8;
  bVar7 = false;
  bVar6 = false;
  local_2b8.DataPtr = (uchar *)((ulonglong)local_2b8.DataPtr & 0xffffffff00000000);
  FCbFieldView::CreateViewIterator
            ((FCbFieldView *)&this->Fields,(FCbFieldViewIterator *)(local_288 + 0x18));
  local_2a8.FieldsEnd = (void *)local_270.Buffer.Owner.Owner;
  if ((local_270._padding_ & 0x1fU) == 0) {
    local_2a8._padding_._0_4_ = 0;
    local_2a8._padding_._4_4_ = 0;
    local_2a8._padding_ = 0;
    local_2a8._padding_ = 0;
    uVar11 = 0;
    local_2a8.FieldsEnd = (FBufferOwner *)0x0;
  }
  else {
    local_2b8.DataPtr = *(uchar **)&(this->Fields).field_0x10;
    if ((FBufferOwner *)local_2b8.DataPtr != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &((FBufferOwner *)local_2b8.DataPtr)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        ((FBufferOwner *)local_2b8.DataPtr)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)((FBufferOwner *)local_2b8.DataPtr)->ReferenceCountsAndFlags + 0x40000000);
        UNLOCK();
      }
    }
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              (&local_238,(FCbFieldView *)(local_288 + 0x18),(FSharedBuffer)&local_2b8);
    local_2a8._padding_ = (longlong)local_238.Buffer.Owner.Owner;
    local_2a8._padding_._0_4_ = (uint)local_238._padding_;
    local_2a8._padding_._4_4_ = local_238._padding_._4_4_;
    local_2a8._padding_ = local_238._padding_;
    uVar11 = local_238._padding_ & 0xffffffff;
  }
  if ((uVar11 & 0x1f) != 0) {
    do {
      local_2b8.DataPtr = (uchar *)(local_2a8._padding_ - (ulonglong)local_2a8._padding_._4_4_);
      local_2b8._12_4_ = uStack_20c;
      local_2b8.Size = local_2a8._padding_._4_4_;
      local_218 = (FBufferOwner *)local_2b8.DataPtr;
      uStack_210 = local_2a8._padding_._4_4_;
      FCbWriter::SetName(param_2,&local_2b8);
      FCbFieldView::AsArrayView((FCbFieldView *)&local_2a8,&local_198);
      if (local_2a8._padding_._1_1_ == '\0') {
        bVar7 = true;
        if ((FBufferOwner *)local_2a8._padding_ != (FBufferOwner *)0x0) {
          LOCK();
          paVar1 = (atomic<unsigned___int64> *)(local_2a8._padding_ + 0x18);
          aVar2 = *paVar1;
          *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
          UNLOCK();
          if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
            LOCK();
            *(atomic<unsigned___int64> *)(local_2a8._padding_ + 0x18) =
                 (atomic<unsigned___int64>)
                 ((longlong)*(atomic<unsigned___int64> *)(local_2a8._padding_ + 0x18) + 0x40000000);
            UNLOCK();
          }
        }
        local_2b8.DataPtr = (uchar *)local_2a8._padding_;
        TCbBuffer<FCbArrayView>::TCbBuffer<FCbArrayView>
                  ((TCbBuffer<FCbArrayView> *)(local_288 + 0x18),&local_198,
                   (FSharedBuffer)&local_2b8);
        puVar12 = (ulonglong *)(local_288 + 0x18);
        pFVar15 = &local_270.Buffer;
      }
      else {
        bVar6 = true;
        local_288._0_8_ = 0;
        local_288._8_8_ = 0;
        local_288._16_8_ = 0;
        FCbArrayView::FCbArrayView((FCbArrayView *)local_288);
        puVar12 = (ulonglong *)local_288;
        local_288._16_8_ = (longlong *)0x0;
        pFVar15 = (FSharedBuffer *)(local_288 + 0x10);
      }
      local_238._padding_ = *puVar12;
      local_238._padding_ = puVar12[1];
      local_238.Buffer.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(pFVar15->Owner).Owner;
      (pFVar15->Owner).Owner = (FBufferOwner *)0x0;
      uVar10 = local_288._16_8_;
      if ((bVar6) && (bVar6 = false, (longlong *)local_288._16_8_ != (longlong *)0x0)) {
        LOCK();
        plVar16 = (longlong *)(local_288._16_8_ + 0x18);
        lVar3 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (((uint)lVar3 & 0x3fffffff) == 1) {
          (**(code **)(*(longlong *)local_288._16_8_ + 0x10))(local_288._16_8_);
          *(longlong *)(uVar10 + 8) = 0;
          *(longlong *)(uVar10 + 0x10) = 0;
          LOCK();
          puVar12 = (ulonglong *)(uVar10 + 0x18);
          uVar11 = *puVar12;
          *puVar12 = *puVar12 - 0x40000000;
          UNLOCK();
          if (((uint)(uVar11 >> 0x1e) & 0x3fffffff) == 1) {
            (*(code *)**(undefined8 **)uVar10)(uVar10,1);
          }
        }
      }
      if (bVar7) {
        bVar7 = false;
        SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_270.Buffer.Owner);
      }
      if (local_2a8._padding_._1_1_ == '\0') {
        FCbWriter::BeginObject(param_2);
        local_208 = "$value";
        uStack_200 = 6;
        local_2b8._12_4_ = uStack_1fc;
        local_2b8.Size = 6;
        local_2b8.DataPtr = "$value";
        FCbWriter::SetName(param_2,&local_2b8);
        FCbWriter::AddArray(param_2,(FCbArray *)&local_238);
        local_168.Base = (uchar *)local_148;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_168.CurPos = (uchar *)local_148;
        local_168.End = (uchar *)local_48;
        Logging::Private::LogFieldValue<char8_t>(&local_168,(FCbFieldView *)&local_2a8);
        iStack_1e0 = (int)local_168.CurPos - (int)local_168.Base;
        local_1e8 = (FBufferOwner *)local_168.Base;
        local_1f8 = "$text";
        uStack_1f0 = 5;
        local_2b8._12_4_ = uStack_1ec;
        local_2b8.Size = 5;
        local_2b8.DataPtr = "$text";
        FCbWriter::SetName(param_2,&local_2b8);
        local_2b8._12_4_ = uStack_1dc;
        local_2b8.Size = iStack_1e0;
        local_2b8.DataPtr = (uchar *)local_1e8;
        FCbWriter::AddString(param_2,&local_2b8);
        FCbWriter::EndObject(param_2);
        TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_168);
      }
      else {
        FCbFieldView::AsObjectView((FCbFieldView *)&local_2a8,&local_188);
        if (local_2a8._padding_._1_1_ == '\0') {
          if ((FBufferOwner *)local_2a8._padding_ != (FBufferOwner *)0x0) {
            LOCK();
            paVar1 = (atomic<unsigned___int64> *)(local_2a8._padding_ + 0x18);
            aVar2 = *paVar1;
            *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
            UNLOCK();
            if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
              LOCK();
              *(atomic<unsigned___int64> *)(local_2a8._padding_ + 0x18) =
                   (atomic<unsigned___int64>)
                   ((longlong)*(atomic<unsigned___int64> *)(local_2a8._padding_ + 0x18) + 0x40000000
                   );
              UNLOCK();
            }
          }
          local_2b8.DataPtr = (uchar *)local_2a8._padding_;
          TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
                    ((TCbBuffer<FCbObjectView> *)&local_258,&local_188,(FSharedBuffer)&local_2b8);
          pTVar17 = &local_258;
          bVar9 = true;
          bVar8 = false;
          plVar16 = &local_258._padding_;
        }
        else {
          local_288._0_8_ = 0;
          local_288._8_8_ = 0;
          local_288._16_8_ = 0;
          FCbObjectView::FCbObjectView((FCbObjectView *)local_288);
          pTVar17 = (TCbFieldIterator<FCbField> *)local_288;
          local_288._16_8_ = (longlong *)0x0;
          bVar9 = false;
          bVar8 = true;
          plVar16 = (longlong *)(local_288 + 0x10);
        }
        pvVar5 = (void *)pTVar17->_padding_;
        lVar3 = pTVar17->_padding_;
        TVar4.Owner = (FBufferOwner *)*plVar16;
        *plVar16 = 0;
        uVar10 = local_288._16_8_;
        local_270._padding_ = (longlong)pvVar5;
        local_270._padding_ = lVar3;
        local_270.Buffer.Owner.Owner =
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar4.Owner;
        if ((bVar8) && ((longlong *)local_288._16_8_ != (longlong *)0x0)) {
          LOCK();
          plVar16 = (longlong *)(local_288._16_8_ + 0x18);
          lVar3 = *plVar16;
          *plVar16 = *plVar16 + -1;
          UNLOCK();
          if (((uint)lVar3 & 0x3fffffff) == 1) {
            (**(code **)(*(longlong *)local_288._16_8_ + 0x10))(local_288._16_8_);
            *(longlong *)(uVar10 + 8) = 0;
            *(longlong *)(uVar10 + 0x10) = 0;
            LOCK();
            puVar12 = (ulonglong *)(uVar10 + 0x18);
            uVar11 = *puVar12;
            *puVar12 = *puVar12 - 0x40000000;
            UNLOCK();
            if (((uint)(uVar11 >> 0x1e) & 0x3fffffff) == 1) {
              (*(code *)**(undefined8 **)uVar10)(uVar10,1);
            }
          }
        }
        if (bVar9) {
          SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_258._padding_)
          ;
        }
        if (local_2a8._padding_._1_1_ == '\0') {
          local_1d8 = "$text";
          uStack_1d0 = 5;
          local_2b8._12_4_ = uStack_1cc;
          local_2b8.Size = 5;
          local_2b8.DataPtr = "$text";
          pFVar13 = FCbObjectView::FindView
                              ((FCbObjectView *)(local_288 + 0x18),&local_178,&local_2b8);
          if ((pFVar13->TypeWithFlags & CustomByName) != None) goto LAB_1417bd6f5;
          FCbWriter::BeginObject(param_2);
          TCbBuffer<FCbObjectView>::begin
                    ((TCbBuffer<FCbObjectView> *)(local_288 + 0x18),(FCbFieldIterator *)&local_258);
          while (((byte)local_258._padding_ & 0x1f) != 0) {
            local_2b8.DataPtr =
                 (uchar *)(CONCAT44(local_258._padding_._4_4_,(undefined4)local_258._padding_) -
                          (ulonglong)local_258._padding_._4_4_);
            local_2b8._12_4_ = uStack_1bc;
            local_2b8.Size = local_258._padding_._4_4_;
            local_1c8 = (FBufferOwner *)local_2b8.DataPtr;
            FCbWriter::SetName(param_2,&local_2b8);
            FCbWriter::AddField(param_2,(FCbField *)&local_258);
            TCbFieldIterator<FCbField>::operator++(&local_258);
          }
          SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
          ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                    ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_258._padding_)
          ;
          local_168.Base = (uchar *)local_148;
          local_168.bIsDynamic = false;
          local_168.bIsExternal = false;
          local_168.CurPos = (uchar *)local_148;
          local_168.End = (uchar *)local_48;
          Logging::Private::LogFieldValue<char8_t>(&local_168,(FCbFieldView *)&local_2a8);
          iStack_1a0 = (int)local_168.CurPos - (int)local_168.Base;
          local_1a8 = (FBufferOwner *)local_168.Base;
          local_1b8 = "$text";
          uStack_1b0 = 5;
          local_2b8._12_4_ = uStack_1ac;
          local_2b8.Size = 5;
          local_2b8.DataPtr = "$text";
          FCbWriter::SetName(param_2,&local_2b8);
          local_2b8._12_4_ = uStack_19c;
          local_2b8.Size = iStack_1a0;
          local_2b8.DataPtr = (uchar *)local_1a8;
          FCbWriter::AddString(param_2,&local_2b8);
          FCbWriter::EndObject(param_2);
          TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_168);
        }
        else {
LAB_1417bd6f5:
          FCbWriter::AddField(param_2,(FCbField *)&local_2a8);
        }
        SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_270.Buffer.Owner);
      }
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_238.Buffer.Owner);
      TCbFieldIterator<FCbField>::operator++(&local_2a8);
    } while (((uint)local_2a8._padding_ & 0x1f) != 0);
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_2a8._padding_);
  _Str = this->Format;
  if (_Str != (wchar_t *)0x0) {
    sVar14 = wcslen(_Str);
    TStringBuilderBase<char8_t>::Append<wchar_t,0>(param_1,_Str,(int)sVar14);
  }
  return;
}

// FormatMessageTo @ 1417cf590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FLogRecord::FormatMessageTo(FLogRecord *this,TStringBuilderBase<char8_t> *param_1)

{
  FormatRecordMessageTo<char8_t>(param_1,this);
  return;
}

// FormatMessageTo @ 1417cf5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FLogRecord::FormatMessageTo(FLogRecord *this,TStringBuilderBase<wchar_t> *param_1)

{
  FormatRecordMessageTo<wchar_t>(param_1,this);
  return;
}

// FLogRecord @ 1418bc4d0

/* WARNING: Enum "Type": Some values do not have unique names */

FLogRecord * __thiscall UE::FLogRecord::FLogRecord(FLogRecord *this,FLogRecord *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  this->Format = param_1->Format;
  this->File = param_1->File;
  this->Line = param_1->Line;
  this->Category = param_1->Category;
  this->Verbosity = param_1->Verbosity;
  (this->Time).UtcTicks = (param_1->Time).UtcTicks;
  uVar4 = *(undefined8 *)&(param_1->Fields).field_0x8;
  *(undefined8 *)&this->Fields = *(undefined8 *)&param_1->Fields;
  *(undefined8 *)&(this->Fields).field_0x8 = uVar4;
  lVar3 = *(longlong *)&(param_1->Fields).field_0x10;
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
  *(longlong *)&(this->Fields).field_0x10 = lVar3;
  this->Template = param_1->Template;
  this->TextNamespace = param_1->TextNamespace;
  this->TextKey = param_1->TextKey;
  return this;
}

