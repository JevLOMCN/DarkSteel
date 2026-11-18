// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 24

// DestroyObject @ 14aba4eb0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
::DestroyObject(TIntrusiveReferenceController<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>,1>
                *this)

{
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  ~TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
            ((TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14aba4ec0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
::DestroyObject(TIntrusiveReferenceController<TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>,1>
                *this)

{
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  ::
  ~TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
            ((TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14aba4ed0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
::DestroyObject(TIntrusiveReferenceController<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>,1>
                *this)

{
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
  ~TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
            ((TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14aba4ee0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
::DestroyObject(TIntrusiveReferenceController<TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>,1>
                *this)

{
  TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
  ::
  ~TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
            ((TRegistry<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<UCustomizableObjectSkeletalMesh,FWeakObjectPtr>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14abd5d80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FModelStreamableBulkData,1>::DestroyObject
          (TIntrusiveReferenceController<FModelStreamableBulkData,1> *this)

{
  FModelStreamableBulkData::~FModelStreamableBulkData
            ((FModelStreamableBulkData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14abd5d90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMutableStreamableManager::FMutableStreamableHandle,1>::DestroyObject
          (TIntrusiveReferenceController<FMutableStreamableManager::FMutableStreamableHandle,1>
           *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((this->ObjectStorage).Pad + 0x10));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14abd5dc0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,TSizedDefaultAllocator<32>_>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::FHandle,int>
            (*(FHandle **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14abd5e00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableStreamableManager,1>::DestroyObject
          (TIntrusiveReferenceController<FMutableStreamableManager,1> *this)

{
  FMutableStreamableManager::~FMutableStreamableManager
            ((FMutableStreamableManager *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14abd5e10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableUpdateImageContext,1>::DestroyObject
          (TIntrusiveReferenceController<FMutableUpdateImageContext,1> *this)

{
  FMutableUpdateImageContext::~FMutableUpdateImageContext
            ((FMutableUpdateImageContext *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14abd5e20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FUpdateContextPrivate,1>::DestroyObject
          (TIntrusiveReferenceController<FUpdateContextPrivate,1> *this)

{
  FUpdateContextPrivate::~FUpdateContextPrivate((FUpdateContextPrivate *)&this->ObjectStorage);
  return;
}

// TIntrusiveReferenceController<FMutableUpdateMeshContext,1><> @ 14ac04a40

TIntrusiveReferenceController<FMutableUpdateMeshContext,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableUpdateMeshContext,1>::
TIntrusiveReferenceController<FMutableUpdateMeshContext,1><>
          (TIntrusiveReferenceController<FMutableUpdateMeshContext,1> *this)

{
  FTaskEventBase *pFVar1;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_UFMutableUpdateMeshContext___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  (this->ObjectStorage).Pad[0x84] = '\0';
  (this->ObjectStorage).Pad[0x85] = '\0';
  (this->ObjectStorage).Pad[0x86] = '\0';
  (this->ObjectStorage).Pad[0x87] = '\0';
  (this->ObjectStorage).Pad[0xb8] = '\0';
  (this->ObjectStorage).Pad[0xb9] = '\0';
  (this->ObjectStorage).Pad[0xba] = '\0';
  (this->ObjectStorage).Pad[0xbb] = '\0';
  (this->ObjectStorage).Pad[0xbc] = '\0';
  (this->ObjectStorage).Pad[0xbd] = '\0';
  (this->ObjectStorage).Pad[0xbe] = '\0';
  (this->ObjectStorage).Pad[0xbf] = '\0';
  (this->ObjectStorage).Pad[0xc0] = '\0';
  (this->ObjectStorage).Pad[0xc1] = '\0';
  (this->ObjectStorage).Pad[0xc2] = '\0';
  (this->ObjectStorage).Pad[0xc3] = '\0';
  (this->ObjectStorage).Pad[0xc4] = '\0';
  (this->ObjectStorage).Pad[0xc5] = '\0';
  (this->ObjectStorage).Pad[0xc6] = '\0';
  (this->ObjectStorage).Pad[199] = '\0';
  (this->ObjectStorage).Pad[0xe0] = '\0';
  (this->ObjectStorage).Pad[0xe1] = '\0';
  (this->ObjectStorage).Pad[0xe2] = '\0';
  (this->ObjectStorage).Pad[0xe3] = '\0';
  (this->ObjectStorage).Pad[0xe4] = '\0';
  (this->ObjectStorage).Pad[0xe5] = '\0';
  (this->ObjectStorage).Pad[0xe6] = '\0';
  (this->ObjectStorage).Pad[0xe7] = '\0';
  (this->ObjectStorage).Pad[0xf0] = '\0';
  (this->ObjectStorage).Pad[0xf1] = '\0';
  (this->ObjectStorage).Pad[0xf2] = '\0';
  (this->ObjectStorage).Pad[0xf3] = '\0';
  (this->ObjectStorage).Pad[0xf4] = '\0';
  (this->ObjectStorage).Pad[0xf5] = '\0';
  (this->ObjectStorage).Pad[0xf6] = '\0';
  (this->ObjectStorage).Pad[0xf7] = '\0';
  (this->ObjectStorage).Pad[0x108] = '\0';
  (this->ObjectStorage).Pad[0x109] = '\0';
  (this->ObjectStorage).Pad[0x10a] = '\0';
  (this->ObjectStorage).Pad[0x10b] = '\0';
  (this->ObjectStorage).Pad[0x10c] = '\0';
  (this->ObjectStorage).Pad[0x10d] = '\0';
  (this->ObjectStorage).Pad[0x10e] = '\0';
  (this->ObjectStorage).Pad[0x10f] = '\0';
  (this->ObjectStorage).Pad[0x110] = '\0';
  (this->ObjectStorage).Pad[0x111] = '\0';
  (this->ObjectStorage).Pad[0x112] = '\0';
  (this->ObjectStorage).Pad[0x113] = '\0';
  (this->ObjectStorage).Pad[0x114] = '\0';
  (this->ObjectStorage).Pad[0x115] = '\0';
  (this->ObjectStorage).Pad[0x116] = '\0';
  (this->ObjectStorage).Pad[0x117] = '\0';
  (this->ObjectStorage).Pad[0x130] = '\0';
  (this->ObjectStorage).Pad[0x131] = '\0';
  (this->ObjectStorage).Pad[0x132] = '\0';
  (this->ObjectStorage).Pad[0x133] = '\0';
  (this->ObjectStorage).Pad[0x134] = '\0';
  (this->ObjectStorage).Pad[0x135] = '\0';
  (this->ObjectStorage).Pad[0x136] = '\0';
  (this->ObjectStorage).Pad[0x137] = '\0';
  (this->ObjectStorage).Pad[0x144] = '\0';
  (this->ObjectStorage).Pad[0x145] = '\0';
  (this->ObjectStorage).Pad[0x146] = '\0';
  (this->ObjectStorage).Pad[0x147] = '\0';
  (this->ObjectStorage).Pad[0x148] = '\0';
  (this->ObjectStorage).Pad[0x149] = '\0';
  (this->ObjectStorage).Pad[0x14a] = '\0';
  (this->ObjectStorage).Pad[0x14b] = '\0';
  (this->ObjectStorage).Pad[0x14c] = '\0';
  (this->ObjectStorage).Pad[0x14d] = '\0';
  (this->ObjectStorage).Pad[0x14e] = '\0';
  (this->ObjectStorage).Pad[0x14f] = '\0';
  (this->ObjectStorage).Pad[0x150] = '\0';
  (this->ObjectStorage).Pad[0x151] = '\0';
  (this->ObjectStorage).Pad[0x152] = '\0';
  (this->ObjectStorage).Pad[0x153] = '\0';
  (this->ObjectStorage).Pad[0x154] = '\0';
  (this->ObjectStorage).Pad[0x155] = '\0';
  (this->ObjectStorage).Pad[0x156] = '\0';
  (this->ObjectStorage).Pad[0x157] = '\0';
  (this->ObjectStorage).Pad[0x158] = '\0';
  (this->ObjectStorage).Pad[0x159] = '\0';
  (this->ObjectStorage).Pad[0x15a] = '\0';
  (this->ObjectStorage).Pad[0x15b] = '\0';
  (this->ObjectStorage).Pad[0x15c] = '\0';
  (this->ObjectStorage).Pad[0x15d] = '\0';
  (this->ObjectStorage).Pad[0x15e] = '\0';
  (this->ObjectStorage).Pad[0x15f] = '\0';
  (this->ObjectStorage).Pad[0] = '\0';
  (this->ObjectStorage).Pad[1] = '\0';
  (this->ObjectStorage).Pad[2] = '\0';
  (this->ObjectStorage).Pad[3] = '\0';
  (this->ObjectStorage).Pad[4] = '\0';
  (this->ObjectStorage).Pad[5] = '\0';
  (this->ObjectStorage).Pad[6] = '\0';
  (this->ObjectStorage).Pad[7] = '\0';
  (this->ObjectStorage).Pad[8] = '\0';
  (this->ObjectStorage).Pad[9] = '\0';
  (this->ObjectStorage).Pad[10] = '\0';
  (this->ObjectStorage).Pad[0xb] = '\0';
  (this->ObjectStorage).Pad[0xc] = '\0';
  (this->ObjectStorage).Pad[0xd] = '\0';
  (this->ObjectStorage).Pad[0xe] = '\0';
  (this->ObjectStorage).Pad[0xf] = '\0';
  (this->ObjectStorage).Pad[0x10] = '\0';
  (this->ObjectStorage).Pad[0x11] = '\0';
  (this->ObjectStorage).Pad[0x12] = '\0';
  (this->ObjectStorage).Pad[0x13] = '\0';
  (this->ObjectStorage).Pad[0x14] = '\0';
  (this->ObjectStorage).Pad[0x15] = '\0';
  (this->ObjectStorage).Pad[0x16] = '\0';
  (this->ObjectStorage).Pad[0x17] = '\0';
  (this->ObjectStorage).Pad[0x18] = '\0';
  (this->ObjectStorage).Pad[0x19] = '\0';
  (this->ObjectStorage).Pad[0x1a] = '\0';
  (this->ObjectStorage).Pad[0x1b] = '\0';
  (this->ObjectStorage).Pad[0x1c] = '\0';
  (this->ObjectStorage).Pad[0x1d] = '\0';
  (this->ObjectStorage).Pad[0x1e] = '\0';
  (this->ObjectStorage).Pad[0x1f] = '\0';
  (this->ObjectStorage).Pad[0x20] = '\0';
  (this->ObjectStorage).Pad[0x21] = '\0';
  (this->ObjectStorage).Pad[0x22] = '\0';
  (this->ObjectStorage).Pad[0x23] = '\0';
  (this->ObjectStorage).Pad[0x24] = '\0';
  (this->ObjectStorage).Pad[0x25] = '\0';
  (this->ObjectStorage).Pad[0x26] = '\0';
  (this->ObjectStorage).Pad[0x27] = '\0';
  (this->ObjectStorage).Pad[0x28] = '\0';
  (this->ObjectStorage).Pad[0x29] = '\0';
  (this->ObjectStorage).Pad[0x2a] = '\0';
  (this->ObjectStorage).Pad[0x2b] = '\0';
  (this->ObjectStorage).Pad[0x2c] = '\0';
  (this->ObjectStorage).Pad[0x2d] = '\0';
  (this->ObjectStorage).Pad[0x2e] = '\0';
  (this->ObjectStorage).Pad[0x2f] = '\0';
  (this->ObjectStorage).Pad[0x30] = '\0';
  (this->ObjectStorage).Pad[0x31] = '\0';
  (this->ObjectStorage).Pad[0x32] = '\0';
  (this->ObjectStorage).Pad[0x33] = '\0';
  (this->ObjectStorage).Pad[0x34] = '\0';
  (this->ObjectStorage).Pad[0x35] = '\0';
  (this->ObjectStorage).Pad[0x36] = '\0';
  (this->ObjectStorage).Pad[0x37] = '\0';
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  (this->ObjectStorage).Pad[0x40] = '\0';
  (this->ObjectStorage).Pad[0x41] = '\0';
  (this->ObjectStorage).Pad[0x42] = '\0';
  (this->ObjectStorage).Pad[0x43] = '\0';
  (this->ObjectStorage).Pad[0x44] = '\0';
  (this->ObjectStorage).Pad[0x45] = '\0';
  (this->ObjectStorage).Pad[0x46] = '\0';
  (this->ObjectStorage).Pad[0x47] = '\0';
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  (this->ObjectStorage).Pad[0x4c] = '\0';
  (this->ObjectStorage).Pad[0x4d] = '\0';
  (this->ObjectStorage).Pad[0x4e] = '\0';
  (this->ObjectStorage).Pad[0x4f] = '\0';
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  (this->ObjectStorage).Pad[0x54] = '\0';
  (this->ObjectStorage).Pad[0x55] = '\0';
  (this->ObjectStorage).Pad[0x56] = '\0';
  (this->ObjectStorage).Pad[0x57] = '\0';
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  (this->ObjectStorage).Pad[0x5c] = '\0';
  (this->ObjectStorage).Pad[0x5d] = '\0';
  (this->ObjectStorage).Pad[0x5e] = '\0';
  (this->ObjectStorage).Pad[0x5f] = '\0';
  (this->ObjectStorage).Pad[0x60] = '\0';
  (this->ObjectStorage).Pad[0x61] = '\0';
  (this->ObjectStorage).Pad[0x62] = '\0';
  (this->ObjectStorage).Pad[99] = '\0';
  (this->ObjectStorage).Pad[100] = '\0';
  (this->ObjectStorage).Pad[0x65] = '\0';
  (this->ObjectStorage).Pad[0x66] = '\0';
  (this->ObjectStorage).Pad[0x67] = '\0';
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  (this->ObjectStorage).Pad[0x6c] = '\0';
  (this->ObjectStorage).Pad[0x6d] = '\0';
  (this->ObjectStorage).Pad[0x6e] = '\0';
  (this->ObjectStorage).Pad[0x6f] = '\0';
  (this->ObjectStorage).Pad[0x70] = '\0';
  (this->ObjectStorage).Pad[0x71] = '\0';
  (this->ObjectStorage).Pad[0x72] = '\0';
  (this->ObjectStorage).Pad[0x73] = '\0';
  (this->ObjectStorage).Pad[0x74] = '\0';
  (this->ObjectStorage).Pad[0x75] = '\0';
  (this->ObjectStorage).Pad[0x76] = '\0';
  (this->ObjectStorage).Pad[0x77] = '\0';
  (this->ObjectStorage).Pad[0x78] = '\0';
  (this->ObjectStorage).Pad[0x79] = '\0';
  (this->ObjectStorage).Pad[0x7a] = '\0';
  (this->ObjectStorage).Pad[0x7b] = '\0';
  (this->ObjectStorage).Pad[0x7c] = '\0';
  (this->ObjectStorage).Pad[0x7d] = '\0';
  (this->ObjectStorage).Pad[0x7e] = '\0';
  (this->ObjectStorage).Pad[0x7f] = '\0';
  (this->ObjectStorage).Pad[0x80] = 0xff;
  (this->ObjectStorage).Pad[0x81] = 0xff;
  (this->ObjectStorage).Pad[0x82] = 0xff;
  (this->ObjectStorage).Pad[0x83] = 0xff;
  (this->ObjectStorage).Pad[0x88] = '\0';
  (this->ObjectStorage).Pad[0x89] = '\0';
  (this->ObjectStorage).Pad[0x8a] = '\0';
  (this->ObjectStorage).Pad[0x8b] = '\0';
  (this->ObjectStorage).Pad[0x8c] = '\0';
  (this->ObjectStorage).Pad[0x8d] = '\0';
  (this->ObjectStorage).Pad[0x8e] = '\0';
  (this->ObjectStorage).Pad[0x8f] = '\0';
  (this->ObjectStorage).Pad[0x90] = '\0';
  (this->ObjectStorage).Pad[0x91] = '\0';
  (this->ObjectStorage).Pad[0x92] = '\0';
  (this->ObjectStorage).Pad[0x93] = '\0';
  (this->ObjectStorage).Pad[0x94] = '\0';
  (this->ObjectStorage).Pad[0x95] = '\0';
  (this->ObjectStorage).Pad[0x96] = '\0';
  (this->ObjectStorage).Pad[0x97] = '\0';
  (this->ObjectStorage).Pad[0x98] = '\0';
  (this->ObjectStorage).Pad[0x99] = '\0';
  (this->ObjectStorage).Pad[0x9a] = '\0';
  (this->ObjectStorage).Pad[0x9b] = '\0';
  (this->ObjectStorage).Pad[0x9c] = '\0';
  (this->ObjectStorage).Pad[0x9d] = '\0';
  (this->ObjectStorage).Pad[0x9e] = '\0';
  (this->ObjectStorage).Pad[0x9f] = '\0';
  (this->ObjectStorage).Pad[0xa0] = '\0';
  (this->ObjectStorage).Pad[0xa1] = '\0';
  (this->ObjectStorage).Pad[0xa2] = '\0';
  (this->ObjectStorage).Pad[0xa3] = '\0';
  (this->ObjectStorage).Pad[0xa4] = '\0';
  (this->ObjectStorage).Pad[0xa5] = '\0';
  (this->ObjectStorage).Pad[0xa6] = '\0';
  (this->ObjectStorage).Pad[0xa7] = '\0';
  (this->ObjectStorage).Pad[0xa8] = '\0';
  (this->ObjectStorage).Pad[0xa9] = '\0';
  (this->ObjectStorage).Pad[0xaa] = '\0';
  (this->ObjectStorage).Pad[0xab] = '\0';
  (this->ObjectStorage).Pad[0xac] = '\0';
  (this->ObjectStorage).Pad[0xad] = '\0';
  (this->ObjectStorage).Pad[0xae] = '\0';
  (this->ObjectStorage).Pad[0xaf] = '\0';
  (this->ObjectStorage).Pad[0xb0] = '\0';
  (this->ObjectStorage).Pad[0xb1] = '\0';
  (this->ObjectStorage).Pad[0xb2] = '\0';
  (this->ObjectStorage).Pad[0xb3] = '\0';
  (this->ObjectStorage).Pad[0xb4] = '\0';
  (this->ObjectStorage).Pad[0xb5] = '\0';
  (this->ObjectStorage).Pad[0xb6] = '\0';
  (this->ObjectStorage).Pad[0xb7] = '\0';
  (this->ObjectStorage).Pad[200] = '\0';
  (this->ObjectStorage).Pad[0xc9] = '\0';
  (this->ObjectStorage).Pad[0xca] = '\0';
  (this->ObjectStorage).Pad[0xcb] = '\0';
  (this->ObjectStorage).Pad[0xcc] = '\0';
  (this->ObjectStorage).Pad[0xcd] = '\0';
  (this->ObjectStorage).Pad[0xce] = '\0';
  (this->ObjectStorage).Pad[0xcf] = '\0';
  (this->ObjectStorage).Pad[0xd0] = '\0';
  (this->ObjectStorage).Pad[0xd1] = '\0';
  (this->ObjectStorage).Pad[0xd2] = '\0';
  (this->ObjectStorage).Pad[0xd3] = '\0';
  (this->ObjectStorage).Pad[0xd4] = 0x80;
  (this->ObjectStorage).Pad[0xd5] = '\0';
  (this->ObjectStorage).Pad[0xd6] = '\0';
  (this->ObjectStorage).Pad[0xd7] = '\0';
  (this->ObjectStorage).Pad[0xd8] = 0xff;
  (this->ObjectStorage).Pad[0xd9] = 0xff;
  (this->ObjectStorage).Pad[0xda] = 0xff;
  (this->ObjectStorage).Pad[0xdb] = 0xff;
  (this->ObjectStorage).Pad[0xdc] = '\0';
  (this->ObjectStorage).Pad[0xdd] = '\0';
  (this->ObjectStorage).Pad[0xde] = '\0';
  (this->ObjectStorage).Pad[0xdf] = '\0';
  (this->ObjectStorage).Pad[0xe8] = '\0';
  (this->ObjectStorage).Pad[0xe9] = '\0';
  (this->ObjectStorage).Pad[0xea] = '\0';
  (this->ObjectStorage).Pad[0xeb] = '\0';
  (this->ObjectStorage).Pad[0xec] = '\0';
  (this->ObjectStorage).Pad[0xed] = '\0';
  (this->ObjectStorage).Pad[0xee] = '\0';
  (this->ObjectStorage).Pad[0xef] = '\0';
  (this->ObjectStorage).Pad[0xf8] = '\0';
  (this->ObjectStorage).Pad[0xf9] = '\0';
  (this->ObjectStorage).Pad[0xfa] = '\0';
  (this->ObjectStorage).Pad[0xfb] = '\0';
  (this->ObjectStorage).Pad[0xfc] = '\0';
  (this->ObjectStorage).Pad[0xfd] = '\0';
  (this->ObjectStorage).Pad[0xfe] = '\0';
  (this->ObjectStorage).Pad[0xff] = '\0';
  (this->ObjectStorage).Pad[0x100] = '\0';
  (this->ObjectStorage).Pad[0x101] = '\0';
  (this->ObjectStorage).Pad[0x102] = '\0';
  (this->ObjectStorage).Pad[0x103] = '\0';
  (this->ObjectStorage).Pad[0x104] = '\0';
  (this->ObjectStorage).Pad[0x105] = '\0';
  (this->ObjectStorage).Pad[0x106] = '\0';
  (this->ObjectStorage).Pad[0x107] = '\0';
  (this->ObjectStorage).Pad[0x118] = '\0';
  (this->ObjectStorage).Pad[0x119] = '\0';
  (this->ObjectStorage).Pad[0x11a] = '\0';
  (this->ObjectStorage).Pad[0x11b] = '\0';
  (this->ObjectStorage).Pad[0x11c] = '\0';
  (this->ObjectStorage).Pad[0x11d] = '\0';
  (this->ObjectStorage).Pad[0x11e] = '\0';
  (this->ObjectStorage).Pad[0x11f] = '\0';
  (this->ObjectStorage).Pad[0x120] = '\0';
  (this->ObjectStorage).Pad[0x121] = '\0';
  (this->ObjectStorage).Pad[0x122] = '\0';
  (this->ObjectStorage).Pad[0x123] = '\0';
  (this->ObjectStorage).Pad[0x124] = 0x80;
  (this->ObjectStorage).Pad[0x125] = '\0';
  (this->ObjectStorage).Pad[0x126] = '\0';
  (this->ObjectStorage).Pad[0x127] = '\0';
  (this->ObjectStorage).Pad[0x128] = 0xff;
  (this->ObjectStorage).Pad[0x129] = 0xff;
  (this->ObjectStorage).Pad[0x12a] = 0xff;
  (this->ObjectStorage).Pad[299] = 0xff;
  (this->ObjectStorage).Pad[300] = '\0';
  (this->ObjectStorage).Pad[0x12d] = '\0';
  (this->ObjectStorage).Pad[0x12e] = '\0';
  (this->ObjectStorage).Pad[0x12f] = '\0';
  (this->ObjectStorage).Pad[0x138] = '\0';
  (this->ObjectStorage).Pad[0x139] = '\0';
  (this->ObjectStorage).Pad[0x13a] = '\0';
  (this->ObjectStorage).Pad[0x13b] = '\0';
  (this->ObjectStorage).Pad[0x13c] = '\0';
  (this->ObjectStorage).Pad[0x13d] = '\0';
  (this->ObjectStorage).Pad[0x13e] = '\0';
  (this->ObjectStorage).Pad[0x13f] = '\0';
  (this->ObjectStorage).Pad[0x140] = '\0';
  (this->ObjectStorage).Pad[0x141] = '\0';
  (this->ObjectStorage).Pad[0x142] = '\0';
  (this->ObjectStorage).Pad[0x143] = '\0';
  pFVar1 = UE::Tasks::Private::FTaskEventBase::Create(L"Task_Mutable_UpdateMesh_End");
  *(FTaskEventBase **)((this->ObjectStorage).Pad + 0x148) = pFVar1;
  (this->ObjectStorage).Pad[0x150] = 0xff;
  (this->ObjectStorage).Pad[0x151] = 0xff;
  (this->ObjectStorage).Pad[0x152] = 0xff;
  (this->ObjectStorage).Pad[0x153] = 0xff;
  (this->ObjectStorage).Pad[0x154] = 0xff;
  (this->ObjectStorage).Pad[0x155] = 0xff;
  (this->ObjectStorage).Pad[0x156] = 0xff;
  (this->ObjectStorage).Pad[0x157] = 0xff;
  (this->ObjectStorage).Pad[0x158] = '\0';
  (this->ObjectStorage).Pad[0x159] = '\0';
  (this->ObjectStorage).Pad[0x15a] = '\0';
  (this->ObjectStorage).Pad[0x15b] = '\0';
  return this;
}

// DestroyObject @ 14ac183a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableImageOperationData,1>::DestroyObject
          (TIntrusiveReferenceController<FMutableImageOperationData,1> *this)

{
  FMutableImageOperationData::~FMutableImageOperationData
            ((FMutableImageOperationData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac183b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableReleasePlatformOperationData,1>::
DestroyObject(TIntrusiveReferenceController<FMutableReleasePlatformOperationData,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,FTexturePlatformData_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac183f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableUpdateMeshContext,1>::DestroyObject
          (TIntrusiveReferenceController<FMutableUpdateMeshContext,1> *this)

{
  FMutableUpdateMeshContext::~FMutableUpdateMeshContext
            ((FMutableUpdateMeshContext *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac18400

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<impl::FGetImageData,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<impl::FGetImageData,TSizedDefaultAllocator<32>_>,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<impl::FGetImageData,int>
            (*(FGetImageData **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14ac18440

/* WARNING: Enum "EMeshContentFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<impl::FGetMeshData,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<impl::FGetMeshData,TSizedDefaultAllocator<32>_>,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<impl::FGetMeshData,int>
            (*(FGetMeshData **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14ac18480

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,TSizedDefaultAllocator<32>_>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::FHandle,int>
            (*(FHandle **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14ac184c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBoneNames,1>::DestroyObject
          (TIntrusiveReferenceController<FBoneNames,1> *this)

{
  void *pvVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x50));
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Mutable::Private::FBoneName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Mutable::Private::FBoneName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Mutable::Private::FBoneName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac18500

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Mutable::Private::FSystem,1>::
DestroyObject(TIntrusiveReferenceController<UE::Mutable::Private::FSystem,1> *this)

{
  UE::Mutable::Private::FSystem::~FSystem((FSystem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac18510

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FUnrealMutableModelBulkReader,1>::
DestroyObject(TIntrusiveReferenceController<FUnrealMutableModelBulkReader,1> *this)

{
  FUnrealMutableModelBulkReader::~FUnrealMutableModelBulkReader
            ((FUnrealMutableModelBulkReader *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac18520

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FUnrealMutableResourceProvider,1>::
DestroyObject(TIntrusiveReferenceController<FUnrealMutableResourceProvider,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14ac5b1f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMutableStreamRequest::FHeapMemory,1>::
DestroyObject(TIntrusiveReferenceController<FMutableStreamRequest::FHeapMemory,1> *this)

{
  FMutableStreamRequest::FHeapMemory::~FHeapMemory((FHeapMemory *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ac5b200

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UnrealConversionUtils::ConvertSkeletalMeshFromRuntimeData'::__l2::FMeshConversionContext,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x788);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FSkeletalMeshLODRenderData::~FSkeletalMeshLODRenderData
            ((FSkeletalMeshLODRenderData *)((longlong)this + 0x10));
  return;
}

// DestroyObject @ 14ac5b240

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFunction<void___cdecl(bool,IAsyncReadRequest_*)>,1>::DestroyObject
          (TIntrusiveReferenceController<TFunction<void___cdecl(bool,IAsyncReadRequest_*)>,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)(this->ObjectStorage).Pad != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x28);
    puVar2 = (this->ObjectStorage).Pad + 0x10;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ac5b259. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar2 + 0x10))();
    return;
  }
  return;
}

