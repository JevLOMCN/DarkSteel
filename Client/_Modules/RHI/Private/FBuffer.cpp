// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// GetViewInfo @ 145caed00

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FViewInfo * __thiscall
FRHIViewDesc::FBuffer::GetViewInfo
          (FBuffer *this,FViewInfo *__return_storage_ptr__,FRHIBuffer *param_1)

{
  EBufferType EVar1;
  EPixelFormat EVar2;
  EBufferUsageFlags EVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FViewInfo *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  FName local_res8;
  FString local_28;
  
  if ((param_1 == (FRHIBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0xb2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FViewInfo *)(*pcVar5)();
    return pFVar8;
  }
  if ((this->BufferType == Unknown) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferType != EBufferType::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0xb3,
                         L"A buffer type must be specified when creating a buffer view. Use SetType() or SetTypeFromBuffer()."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FViewInfo *)(*pcVar5)();
    return pFVar8;
  }
  EVar3 = (param_1->Desc).Usage;
  if ((EVar3 >> 0x14 & 1) != 0) {
    if (((((param_1->Desc).Size != 0) || ((param_1->Desc).Stride != 0)) || (EVar3 != NullResource))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                              ,0x54f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    __return_storage_ptr__->OffsetInBytes = 0;
    __return_storage_ptr__->StrideInBytes = 0;
    __return_storage_ptr__->NumElements = 0;
    __return_storage_ptr__->SizeInBytes = 0;
    __return_storage_ptr__->BufferType = Unknown;
    __return_storage_ptr__->Format = PF_Unknown;
    __return_storage_ptr__->bNullView = false;
    __return_storage_ptr__->field_0x13 = 0;
    __return_storage_ptr__->bNullView = true;
    return __return_storage_ptr__;
  }
  EVar1 = this->BufferType;
  __return_storage_ptr__->OffsetInBytes = 0;
  __return_storage_ptr__->StrideInBytes = 0;
  __return_storage_ptr__->NumElements = 0;
  __return_storage_ptr__->SizeInBytes = 0;
  __return_storage_ptr__->BufferType = Unknown;
  __return_storage_ptr__->Format = PF_Unknown;
  __return_storage_ptr__->bNullView = false;
  __return_storage_ptr__->field_0x13 = 0;
  EVar2 = *(EPixelFormat *)((longlong)&this->_padding_ + 1);
  __return_storage_ptr__->BufferType = EVar1;
  __return_storage_ptr__->Format = EVar2;
  if (EVar1 == Typed) {
LAB_145caee3e:
    if ((((param_1->Desc).Usage & (StructuredBuffer|AccelerationStructure)) != None) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAnyFlags(Desc.Usage, EBufferUsageFlags::StructuredBuffer | EBufferUsageFlags::AccelerationStructure)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xc9,
                           L"Cannot create typed views of structured buffers, or ray tracing acceleration structures."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if ((*(char *)((longlong)&this->_padding_ + 1) == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format != PF_Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xca,L"Format cannot be unknown for typed buffers."), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if (((this->field5_0x8)._s_0.Stride != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stride == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xcb,L"Do not specify a stride for typed buffer views."), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    uVar9 = (**(code **)(GDynamicRHI->_padding_ + 0x180))();
    if ((ulonglong)this->OffsetInBytes % uVar9 != 0) {
      (**(code **)(GDynamicRHI->_padding_ + 0x180))();
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(OffsetInBytes % RHIGetMinimumAlignmentForBufferBackedSRV(Info.Format)) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0xd1,
                         L"Buffer OffsetInBytes (%d) must be a multiple of the minimum alignment (%llu) supported by the RHI for format (%d: %s)."
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FViewInfo *)(*pcVar5)();
        return pFVar8;
      }
    }
    __return_storage_ptr__->StrideInBytes = GPixelFormats[__return_storage_ptr__->Format].BlockBytes
    ;
  }
  else if (EVar1 == Structured) {
    if (((EVar3 >> 0x10 & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(Desc.Usage, EBufferUsageFlags::StructuredBuffer)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xd8,
                           L"The buffer descriptor is not a structured buffer, so is incompatible with this view type."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == PF_Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xd9,L"Structured buffer views should not specify a format."), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    uVar7 = (this->field5_0x8)._s_0.Stride;
    if (uVar7 == 0) {
      uVar7 = (param_1->Desc).Stride;
    }
    __return_storage_ptr__->StrideInBytes = uVar7;
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Info.StrideInBytes > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xdd,
                           L"Stride for structured buffers must be set by the view, or on the underlying buffer resource."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if ((this->OffsetInBytes % __return_storage_ptr__->StrideInBytes != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OffsetInBytes % Info.StrideInBytes) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xde,L"OffsetInBytes (%d) must be a multiple of element stride (%d)."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  else if (EVar1 == AccelerationStructure) {
    if (((EVar3 >> 0xd & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(Desc.Usage, EBufferUsageFlags::AccelerationStructure)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xe2,
                           L"The buffer descriptor is not a ray tracing acceleration structure, so is incompatible with this view type."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == PF_Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xe3,L"Acceleration structure views should not specify a format."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if (((this->field5_0x8).RayTracingScene == (FRHIRayTracingScene *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RayTracingScene != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xe4,
                           L"RayTracingScene must be specified when creating view of ray tracing acceleration structures."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    __return_storage_ptr__->StrideInBytes = 1;
  }
  else {
    if (EVar1 != Raw) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0xc5,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FViewInfo *)(*pcVar5)();
        return pFVar8;
      }
      goto LAB_145caee3e;
    }
    if (((GRHIGlobals.SupportsRawViewsForAnyBuffer == false) &&
        ((EVar3 & ByteAddressBuffer) == None)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GRHIGlobals.SupportsRawViewsForAnyBuffer || EnumHasAnyFlags(Desc.Usage, EBufferUsageFlags::ByteAddressBuffer)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xeb,
                           L"The current RHI does not support raw access to buffers created without the BUF_ByteAddressBuffer usage flag."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == PF_Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xec,L"Raw buffer views should not specify a format."), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if (((this->field5_0x8)._s_0.Stride != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stride == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xed,L"Do not specify a stride for raw buffer views."), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if (((this->OffsetInBytes & 0xf) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OffsetInBytes % 16) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xee,
                           L"The byte offset of raw views must be a multiple of 16 (specified offset: %d)."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    __return_storage_ptr__->StrideInBytes = 4;
    __return_storage_ptr__->Format = PF_Unknown;
  }
  if (((param_1->Desc).Size <= this->OffsetInBytes) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OffsetInBytes < Desc.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0xf6,L"Buffer byte offset (%d) is out of bounds (size: %d)."), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FViewInfo *)(*pcVar5)();
    return pFVar8;
  }
  uVar7 = this->OffsetInBytes;
  __return_storage_ptr__->OffsetInBytes = uVar7;
  if (__return_storage_ptr__->BufferType != AccelerationStructure) {
    if (((uVar7 != 0) && ((this->field5_0x8)._s_0.NumElements == 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Info.BufferType == EBufferType::AccelerationStructure || (OffsetInBytes == 0 || NumElements > 0)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                           ,0xfa,L"NumElements field must be non-zero if a byte offset is used."),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
    if ((__return_storage_ptr__->BufferType != AccelerationStructure) &&
       (uVar7 = (this->field5_0x8)._s_0.NumElements, uVar7 != 0)) goto LAB_145caeff0;
  }
  uVar7 = ((param_1->Desc).Size - this->OffsetInBytes) / __return_storage_ptr__->StrideInBytes;
LAB_145caeff0:
  uVar4 = (param_1->Desc).Size;
  uVar10 = __return_storage_ptr__->StrideInBytes * uVar7;
  __return_storage_ptr__->NumElements = uVar7;
  __return_storage_ptr__->SizeInBytes = uVar10;
  if ((uVar4 < __return_storage_ptr__->OffsetInBytes + uVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Info.OffsetInBytes + Info.SizeInBytes <= Desc.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                         ,0x106,
                         L"The bounds of the view (offset: %d, size in bytes: %d, stride: %d, num elements: %d) exceeds the size of the underlying buffer (%d bytes)."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FViewInfo *)(*pcVar5)();
    return pFVar8;
  }
  if ((__return_storage_ptr__->Format != PF_Unknown) &&
     (GPixelFormats[__return_storage_ptr__->Format].Supported == 0)) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Info.Format == PF_Unknown || GPixelFormats[Info.Format].Supported",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x10c,
                       L"Unsupported format (%d: %s) requested in view of buffer resource: %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FViewInfo *)(*pcVar5)();
      return pFVar8;
    }
  }
  return __return_storage_ptr__;
}

