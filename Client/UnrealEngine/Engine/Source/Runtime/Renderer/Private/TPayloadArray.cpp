// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 13

// Reset @ 14544d810

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::
TPayloadArray<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>
::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)((longlong)this + 0x10),0,(int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544d890

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
TPayloadArray<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::TPayloadBase<0,0>_>
::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)((longlong)this + 0x10),0,(int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544d910

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<TSingleValuePrimitiveUpdatePayload<float,4,0>_>::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x10),0,(int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544d990

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TMatrix<double>,8,16>_>::Reset
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)((longlong)this + 0x10),0,
               (int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544da10

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>::Reset
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)((longlong)this + 0x10),0,(int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544da90

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>::Reset
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)((longlong)this + 0x10),0,(int *)((longlong)this + 0x1c)
              );
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544db10

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>::Reset(void *this)

{
  if (*(int *)((longlong)this + 0x1c) < 0) {
    DestructItems<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>,int>
              (*(TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16> **)
                ((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
    *(undefined4 *)((longlong)this + 0x18) = 0;
    if (*(int *)((longlong)this + 0x1c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)((longlong)this + 0x10),0,
                 (int *)((longlong)this + 0x1c));
    }
  }
  else {
    DestructItems<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>,int>
              (*(TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16> **)
                ((longlong)this + 0x10),*(int *)((longlong)this + 0x18));
    *(undefined4 *)((longlong)this + 0x18) = 0;
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544dbc0

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x10),0,(int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544dc40

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<FUpdateInstanceCommand>::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,(ForAnyElementType *)((longlong)this + 0x10),0,
               (int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544dcc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<FUpdateInstanceFromComputeCommand>::Reset(void *this)

{
  if (*(int *)((longlong)this + 0x1c) < 0) {
    DestructItems<FUpdateInstanceFromComputeCommand,int>
              (*(FUpdateInstanceFromComputeCommand **)((longlong)this + 0x10),
               *(int *)((longlong)this + 0x18));
    *(undefined4 *)((longlong)this + 0x18) = 0;
    if (*(int *)((longlong)this + 0x1c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)((longlong)this + 0x10),0,
                 (int *)((longlong)this + 0x1c));
    }
  }
  else {
    DestructItems<FUpdateInstanceFromComputeCommand,int>
              (*(FUpdateInstanceFromComputeCommand **)((longlong)this + 0x10),
               *(int *)((longlong)this + 0x18));
    *(undefined4 *)((longlong)this + 0x18) = 0;
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544dd70

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
TPayloadArray<FUpdateLightColorParameters>::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)((longlong)this + 0x10),0,
               (int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544ddf0

void __thiscall
TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
TPayloadArray<FUpdateLightTransformParameters>::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,0,(ForAnyElementType *)((longlong)this + 0x10),0,
               (int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

// Reset @ 14544de70

void __thiscall
TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
::TPayloadArray<FUpdateTransformCommand>::Reset(void *this)

{
  *(undefined4 *)((longlong)this + 0x18) = 0;
  if (*(int *)((longlong)this + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,(ForAnyElementType *)((longlong)this + 0x10),0,
               (int *)((longlong)this + 0x1c));
  }
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if (*(int *)((longlong)this + 0x2c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x20),0,(int *)((longlong)this + 0x2c));
  }
  return;
}

