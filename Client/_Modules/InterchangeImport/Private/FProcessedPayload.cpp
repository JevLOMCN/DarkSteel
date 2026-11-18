// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// ~FProcessedPayload @ 14e709740

void __thiscall
UE::Interchange::Private::InterchangeTextureFactory::FProcessedPayload::~FProcessedPayload
          (FProcessedPayload *this)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->PayloadAndId);
  bVar1 = (this->SettingsFromPayload).TypeIndex;
  if (4 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 2:
    if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
      if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
      }
      pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this);
      return;
    }
    return;
  case 3:
    if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
      if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
      }
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
                 &(this->SettingsFromPayload)._padding_);
      return;
    }
    return;
  case 4:
    if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
      pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
      }
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
                 &(this->SettingsFromPayload)._padding_);
      return;
    }
    return;
  }
  if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
    if ((char)(this->SettingsFromPayload)._padding_ != '\0') {
      pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      pvVar2 = (void *)(this->SettingsFromPayload)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
               &(this->SettingsFromPayload)._padding_);
    return;
  }
  return;
}

// operator= @ 14e709da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FProcessedPayload * __thiscall
UE::Interchange::Private::InterchangeTextureFactory::FProcessedPayload::operator=
          (FProcessedPayload *this,
          TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
          *param_1)

{
  byte bVar1;
  uchar uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  FProcessedPayload *pFVar25;
  FImportLightProfile *pFVar26;
  FProcessedPayload *pFVar27;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  longlong lStack_178;
  longlong local_170;
  longlong lStack_168;
  longlong local_160;
  longlong lStack_158;
  longlong local_150;
  longlong lStack_148;
  longlong local_140;
  longlong lStack_138;
  longlong local_130;
  longlong lStack_128;
  longlong local_120;
  longlong lStack_118;
  longlong local_110;
  longlong lStack_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  FSharedBufferWithID local_e0;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((FProcessedPayload *)param_1 != this) {
    bVar1 = param_1->TypeIndex;
    uStack_28 = CONCAT71(uStack_28._1_7_,bVar1);
    if (4 < (ulonglong)bVar1) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x105,L"");
      if (bVar24) {
        pcVar3 = (code *)swi(3);
        pFVar25 = (FProcessedPayload *)(*pcVar3)();
        return pFVar25;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                ::__l2::MoveConstructors)[bVar1])(&local_c0,param_1);
    local_180 = local_c0;
    lStack_178 = lStack_b8;
    local_170 = local_b0;
    lStack_168 = lStack_a8;
    local_160 = local_a0;
    lStack_158 = lStack_98;
    local_150 = local_90;
    lStack_148 = lStack_88;
    local_140 = local_80;
    lStack_138 = lStack_78;
    local_130 = local_70;
    lStack_128 = lStack_68;
    local_120 = local_60;
    lStack_118 = lStack_58;
    local_110 = local_50;
    lStack_108 = lStack_48;
    local_100 = local_40;
    lStack_f8 = lStack_38;
    lVar4 = (this->SettingsFromPayload)._padding_;
    lVar5 = (this->SettingsFromPayload)._padding_;
    local_f0 = local_30;
    uStack_e8 = uStack_28;
    lVar6 = (this->SettingsFromPayload)._padding_;
    lVar7 = (this->SettingsFromPayload)._padding_;
    lVar8 = (this->SettingsFromPayload)._padding_;
    lVar9 = (this->SettingsFromPayload)._padding_;
    lVar10 = (this->SettingsFromPayload)._padding_;
    lVar11 = (this->SettingsFromPayload)._padding_;
    lVar12 = (this->SettingsFromPayload)._padding_;
    lVar13 = (this->SettingsFromPayload)._padding_;
    lVar14 = (this->SettingsFromPayload)._padding_;
    lVar15 = (this->SettingsFromPayload)._padding_;
    lVar16 = (this->SettingsFromPayload)._padding_;
    lVar17 = (this->SettingsFromPayload)._padding_;
    lVar18 = (this->SettingsFromPayload)._padding_;
    lVar19 = (this->SettingsFromPayload)._padding_;
    lVar20 = (this->SettingsFromPayload)._padding_;
    lVar21 = (this->SettingsFromPayload)._padding_;
    lVar22 = (this->SettingsFromPayload)._padding_;
    uVar23 = *(ulonglong *)&(this->SettingsFromPayload).TypeIndex;
    (this->SettingsFromPayload)._padding_ = local_c0;
    (this->SettingsFromPayload)._padding_ = lStack_b8;
    (this->SettingsFromPayload)._padding_ = local_b0;
    (this->SettingsFromPayload)._padding_ = lStack_a8;
    (this->SettingsFromPayload)._padding_ = local_a0;
    (this->SettingsFromPayload)._padding_ = lStack_98;
    (this->SettingsFromPayload)._padding_ = local_90;
    (this->SettingsFromPayload)._padding_ = lStack_88;
    (this->SettingsFromPayload)._padding_ = local_80;
    (this->SettingsFromPayload)._padding_ = lStack_78;
    (this->SettingsFromPayload)._padding_ = local_70;
    (this->SettingsFromPayload)._padding_ = lStack_68;
    (this->SettingsFromPayload)._padding_ = local_60;
    (this->SettingsFromPayload)._padding_ = lStack_58;
    (this->SettingsFromPayload)._padding_ = local_50;
    (this->SettingsFromPayload)._padding_ = lStack_48;
    (this->SettingsFromPayload)._padding_ = local_40;
    (this->SettingsFromPayload)._padding_ = lStack_38;
    (this->SettingsFromPayload)._padding_ = local_30;
    *(ulonglong *)&(this->SettingsFromPayload).TypeIndex = uStack_28;
    local_c0 = lVar6;
    lStack_b8 = lVar7;
    local_b0 = lVar4;
    lStack_a8 = lVar5;
    local_a0 = lVar8;
    lStack_98 = lVar9;
    local_90 = lVar10;
    lStack_88 = lVar11;
    local_80 = lVar12;
    lStack_78 = lVar13;
    local_70 = lVar14;
    lStack_68 = lVar15;
    local_60 = lVar16;
    lStack_58 = lVar17;
    local_50 = lVar18;
    lStack_48 = lVar19;
    local_40 = lVar20;
    lStack_38 = lVar21;
    local_30 = lVar22;
    uStack_28 = uVar23;
    if (4 < (uVar23 & 0xff)) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar24) {
        pcVar3 = (code *)swi(3);
        pFVar25 = (FProcessedPayload *)(*pcVar3)();
        return pFVar25;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar23 & 0xff])(&local_c0);
  }
  uVar2 = (this->SettingsFromPayload).TypeIndex;
  pFVar27 = (FProcessedPayload *)0x0;
  pFVar25 = this;
  if (uVar2 != '\x02') {
    pFVar25 = pFVar27;
  }
  if (pFVar25 == (FProcessedPayload *)0x0) {
    pFVar25 = this;
    if (uVar2 != '\x01') {
      pFVar25 = pFVar27;
    }
    if (pFVar25 == (FProcessedPayload *)0x0) {
      pFVar25 = this;
      if (uVar2 != '\x03') {
        pFVar25 = pFVar27;
      }
      if (pFVar25 == (FProcessedPayload *)0x0) {
        pFVar25 = this;
        if (uVar2 != '\x04') {
          pFVar25 = pFVar27;
        }
        if (pFVar25 == (FProcessedPayload *)0x0) {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Texture\\InterchangeTextureFactory.cpp"
                              ,0x640,L"");
          if (bVar24) {
            pcVar3 = (code *)swi(3);
            pFVar25 = (FProcessedPayload *)(*pcVar3)();
            return pFVar25;
          }
          local_188 = 0;
        }
        else {
          pFVar26 = TOptional<UE::Interchange::FImportLightProfile>::operator->
                              ((TOptional<UE::Interchange::FImportLightProfile> *)pFVar25);
          FUniqueBuffer::MoveToShared((FUniqueBuffer *)&pFVar26->_padding_);
        }
      }
      else {
        if ((char)(pFVar25->SettingsFromPayload)._padding_ == '\0') {
          bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             );
          if (bVar24) {
            pcVar3 = (code *)swi(3);
            pFVar25 = (FProcessedPayload *)(*pcVar3)();
            return pFVar25;
          }
        }
        FUniqueBuffer::MoveToShared((FUniqueBuffer *)&(pFVar25->SettingsFromPayload)._padding_);
      }
    }
    else {
      if ((char)(pFVar25->SettingsFromPayload)._padding_ == '\0') {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           );
        if (bVar24) {
          pcVar3 = (code *)swi(3);
          pFVar25 = (FProcessedPayload *)(*pcVar3)();
          return pFVar25;
        }
      }
      FUniqueBuffer::MoveToShared((FUniqueBuffer *)&(pFVar25->SettingsFromPayload)._padding_);
    }
  }
  else {
    if ((char)(pFVar25->SettingsFromPayload)._padding_ == '\0') {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         );
      if (bVar24) {
        pcVar3 = (code *)swi(3);
        pFVar25 = (FProcessedPayload *)(*pcVar3)();
        return pFVar25;
      }
    }
    FUniqueBuffer::MoveToShared((FUniqueBuffer *)pFVar25);
  }
  Serialization::FEditorBulkData::FSharedBufferWithID::FSharedBufferWithID
            (&local_e0,(FSharedBuffer)&local_188);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->PayloadAndId,
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_e0);
  *(undefined8 *)(this->PayloadAndId).PayloadId.Hash = local_e0.PayloadId.Hash._0_8_;
  *(undefined8 *)((this->PayloadAndId).PayloadId.Hash + 8) = local_e0.PayloadId.Hash._8_8_;
  *(undefined4 *)((this->PayloadAndId).PayloadId.Hash + 0x10) = local_e0.PayloadId.Hash._16_4_;
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_e0);
  return this;
}

// IsValid @ 14e723b40

bool __thiscall
UE::Interchange::Private::InterchangeTextureFactory::FProcessedPayload::IsValid
          (FProcessedPayload *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->SettingsFromPayload).TypeIndex;
  if (4 < uVar4) {
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
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar4) == '\0';
}

