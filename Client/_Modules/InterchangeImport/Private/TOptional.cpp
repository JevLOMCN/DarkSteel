// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 14

// ~TOptional<UE::Interchange::FMeshPayloadData> @ 14e691430

void __thiscall
TOptional<UE::Interchange::FMeshPayloadData>::~TOptional<UE::Interchange::FMeshPayloadData>
          (TOptional<UE::Interchange::FMeshPayloadData> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    if ((this->TypedValue).NaniteAssemblyDescription.bIsSet != false) {
      UE::Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                (&(this->TypedValue).NaniteAssemblyDescription.TypedValue);
    }
    pFVar1 = (this->TypedValue).MorphTargetName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<FString,int>
              ((FString *)(this->TypedValue).JointNames.AllocatorInstance.Data,
               (this->TypedValue).JointNames.ArrayNum);
    pFVar1 = (this->TypedValue).JointNames.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    FMeshDescription::~FMeshDescription((FMeshDescription *)this);
    return;
  }
  return;
}

// TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e6b4f90

TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> * __thiscall
TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,
          TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->field0_0x0).TypedValue.ArrayMax;
  *piVar1 = -1;
  (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->field0_0x0).TypedValue.ArrayNum = 0;
  if ((param_1->field0_0x0).TypedValue.ArrayMax != -1) {
    _Src = (param_1->field0_0x0).TypedValue.AllocatorInstance.Data;
    iVar2 = (param_1->field0_0x0).TypedValue.ArrayNum;
    (this->field0_0x0).TypedValue.ArrayNum = iVar2;
    if (iVar2 == 0) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->field0_0x0).TypedValue.AllocatorInstance.Data,_Src,(longlong)iVar2);
  }
  return this;
}

// operator= @ 14e6ba020

TOptional<UE::Interchange::FImportImage> * __thiscall
TOptional<UE::Interchange::FImportImage>::operator=
          (TOptional<UE::Interchange::FImportImage> *this,
          TOptional<UE::Interchange::FImportImage> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        if ((this->TypedValue).TextureCreatorApplicationMetadata.bIsSet != false) {
          pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.
                   ApplicationVersion.Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationName.
                   Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor
                   .Data.AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
        }
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&(this->TypedValue).RawData.Owner);
      }
      UE::Interchange::FImportImage::FImportImage(&this->TypedValue,&param_1->TypedValue);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      if ((this->TypedValue).TextureCreatorApplicationMetadata.bIsSet != false) {
        pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
                 Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationName.
                 Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.
                 Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&(this->TypedValue).RawData.Owner);
      this->bIsSet = false;
    }
  }
  return this;
}

// GetValue @ 14e6c9b30

FInterchangeGroomPayloadKey * __thiscall
TOptional<FInterchangeGroomPayloadKey>::GetValue(TOptional<FInterchangeGroomPayloadKey> *this)

{
  code *pcVar1;
  bool bVar2;
  FInterchangeGroomPayloadKey *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInterchangeGroomPayloadKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator-> @ 14e6e19a0

FMeshPayloadData * __thiscall
TOptional<UE::Interchange::FMeshPayloadData>::operator->
          (TOptional<UE::Interchange::FMeshPayloadData> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshPayloadData *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshPayloadData *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 14e6f1d60

FMeshPayloadData * __thiscall
TOptional<UE::Interchange::FMeshPayloadData>::GetValue
          (TOptional<UE::Interchange::FMeshPayloadData> *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshPayloadData *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMeshPayloadData *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// ~TOptional<UE::Interchange::FImportBlockedImage> @ 14e709150

void __thiscall
TOptional<UE::Interchange::FImportBlockedImage>::~TOptional<UE::Interchange::FImportBlockedImage>
          (TOptional<UE::Interchange::FImportBlockedImage> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    if ((this->TypedValue).TextureCreatorApplicationMetadata.bIsSet != false) {
      pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
               Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.
               Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    pFVar1 = (this->TypedValue).BlocksData.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)this);
    return;
  }
  return;
}

// ~TOptional<UE::Interchange::FImportImage> @ 14e7091c0

void __thiscall
TOptional<UE::Interchange::FImportImage>::~TOptional<UE::Interchange::FImportImage>
          (TOptional<UE::Interchange::FImportImage> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    if ((this->TypedValue).TextureCreatorApplicationMetadata.bIsSet != false) {
      pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVersion.
               Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationName.Data.
               AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (this->TypedValue).TextureCreatorApplicationMetadata.TypedValue.ApplicationVendor.
               Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&(this->TypedValue).RawData.Owner);
    return;
  }
  return;
}

// ~TOptional<UE::Interchange::FImportLightProfile> @ 14e709220

void __thiscall
TOptional<UE::Interchange::FImportLightProfile>::~TOptional<UE::Interchange::FImportLightProfile>
          (TOptional<UE::Interchange::FImportLightProfile> *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    pFVar1 = (this->TypedValue).SourceDataBuffer.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if ((char)(this->TypedValue)._padding_ != '\0') {
      pvVar2 = (void *)(this->TypedValue)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      pvVar2 = (void *)(this->TypedValue)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      pvVar2 = (void *)(this->TypedValue)._padding_;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
               &(this->TypedValue)._padding_);
    return;
  }
  return;
}

// ~TOptional<UE::Interchange::FTextureCreatorApplicationMetadata> @ 14e709290

void __thiscall
TOptional<UE::Interchange::FTextureCreatorApplicationMetadata>::
~TOptional<UE::Interchange::FTextureCreatorApplicationMetadata>
          (TOptional<UE::Interchange::FTextureCreatorApplicationMetadata> *this)

{
  FScriptContainerElement *pFVar1;
  
  if (this->bIsSet != false) {
    pFVar1 = (this->TypedValue).ApplicationVersion.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TypedValue).ApplicationName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->TypedValue).ApplicationVendor.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
      return;
    }
  }
  return;
}

// operator-> @ 14e70a210

FImportLightProfile * __thiscall
TOptional<UE::Interchange::FImportLightProfile>::operator->
          (TOptional<UE::Interchange::FImportLightProfile> *this)

{
  code *pcVar1;
  bool bVar2;
  FImportLightProfile *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FImportLightProfile *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 14e71f620

FImportImage * __thiscall
TOptional<UE::Interchange::FImportImage>::GetValue(TOptional<UE::Interchange::FImportImage> *this)

{
  code *pcVar1;
  bool bVar2;
  FImportImage *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FImportImage *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 14e71f670

FImportLightProfile * __thiscall
TOptional<UE::Interchange::FImportLightProfile>::GetValue
          (TOptional<UE::Interchange::FImportLightProfile> *this)

{
  code *pcVar1;
  bool bVar2;
  FImportLightProfile *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FImportLightProfile *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 14e71f6c0

FImportSlicedImage * __thiscall
TOptional<UE::Interchange::FImportSlicedImage>::GetValue
          (TOptional<UE::Interchange::FImportSlicedImage> *this)

{
  code *pcVar1;
  bool bVar2;
  FImportSlicedImage *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FImportSlicedImage *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

