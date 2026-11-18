// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// ~TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_> @ 14e709600

void __thiscall
TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
::
~TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
          (TVariant<FEmptyVariantState,TOptional<UE::Interchange::FImportImage>,TOptional<UE::Interchange::FImportBlockedImage>,TOptional<UE::Interchange::FImportSlicedImage>,TOptional<UE::Interchange::FImportLightProfile>_>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (4 < bVar1) {
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
  case 0:
    return;
  case 2:
    if ((char)this->_padding_ != '\0') {
      if ((char)this->_padding_ != '\0') {
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
      }
      if ((void *)this->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this->_padding_);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this);
      return;
    }
    return;
  case 3:
    if ((char)this->_padding_ != '\0') {
      if ((char)this->_padding_ != '\0') {
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
      return;
    }
    return;
  case 4:
    if ((char)this->_padding_ != '\0') {
      if ((void *)this->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this->_padding_);
      }
      if ((char)this->_padding_ != '\0') {
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
        if ((void *)this->_padding_ != (void *)0x0) {
          FMemory::Free((void *)this->_padding_);
        }
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
      return;
    }
    return;
  }
  if ((char)this->_padding_ != '\0') {
    if ((char)this->_padding_ != '\0') {
      if ((void *)this->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this->_padding_);
      }
      if ((void *)this->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this->_padding_);
      }
      if ((void *)this->_padding_ != (void *)0x0) {
        FMemory::Free((void *)this->_padding_);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
    return;
  }
  return;
}

