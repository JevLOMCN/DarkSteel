// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 61

// Construct<FGLTFExportMessages> @ 14e5b6260

void __cdecl UE::CoreUObject::Private::Construct<FGLTFExportMessages>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGLTFExportMessages> @ 14e5b6280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGLTFExportMessages>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGLTFExportMessages> @ 14e5b62a0

void __cdecl UE::CoreUObject::Private::Destruct<FGLTFExportMessages>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x20),*(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGLTFExportMessages> @ 14e5b62b0

bool __cdecl
UE::CoreUObject::Private::Copy<FGLTFExportMessages>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FGLTFOverrideMaterialBakeSettings> @ 14e5b6330

void __cdecl UE::CoreUObject::Private::Construct<FGLTFOverrideMaterialBakeSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = FGLTFMaterialBakeSize::Default._0_8_;
  *(undefined4 *)((longlong)param_1 + 0xc) = FGLTFMaterialBakeSize::Default._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x200;
  return;
}

// ConstructForTests<FGLTFOverrideMaterialBakeSettings> @ 14e5b6360

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGLTFOverrideMaterialBakeSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = FGLTFMaterialBakeSize::Default._0_8_;
  *(undefined4 *)((longlong)param_1 + 0xc) = FGLTFMaterialBakeSize::Default._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x200;
  return;
}

// Destruct<FGLTFOverrideMaterialBakeSettings> @ 14e5b6390

void __cdecl UE::CoreUObject::Private::Destruct<FGLTFOverrideMaterialBakeSettings>(void *param_1)

{
  return;
}

// Copy<FGLTFOverrideMaterialBakeSettings> @ 14e5b63a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGLTFOverrideMaterialBakeSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGLTFMaterialBakeSize> @ 14e5b6530

void __cdecl UE::CoreUObject::Private::Construct<FGLTFMaterialBakeSize>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)param_1 = 1;
  return;
}

// ConstructForTests<FGLTFMaterialBakeSize> @ 14e5b6550

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGLTFMaterialBakeSize>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FGLTFMaterialBakeSize> @ 14e5b6570

void __cdecl UE::CoreUObject::Private::Destruct<FGLTFMaterialBakeSize>(void *param_1)

{
  return;
}

// Copy<FGLTFMaterialBakeSize> @ 14e5b6580

bool __cdecl
UE::CoreUObject::Private::Copy<FGLTFMaterialBakeSize>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>_*> @ 14e5bd4c0

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>_*> @ 14e5bd4e0

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>_*>
                    (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>_*> @ 14e5bd500

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>_*>
                    (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>_const_*,bool>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>_*> @ 14e5bd520

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FColorVertexBuffer_const_*>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>_*> @ 14e5bd540

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FPositionVertexBuffer_const_*>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>_*> @ 14e5bd560

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>_*>
                    (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FSkinWeightVertexBuffer_const_*,unsigned_int>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>_*> @ 14e5bd580

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>_*>
                  (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>_*> @ 14e5bd5a0

TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>,TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>_*>
                    (TGLTFConverter<FGLTFJsonAccessor_*,FGLTFMeshSection_const_*,FStaticMeshVertexBuffer_const_*,unsigned_int>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>_*> @ 14e5bd5c0

TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<int>,FString> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>_*> @ 14e5bd5e0

TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>_*>
                  (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TIntVector4<unsigned_short>_>_>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>_*> @ 14e5bd600

TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector2<float>_>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>_*> @ 14e5bd620

TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector4<float>_>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>_*> @ 14e5bd640

TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>_*> @ 14e5bd660

TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<UE::Math::TVector<float>_>,bool>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>_*> @ 14e5bd680

TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>,TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_>_*>
          (TGLTFConverter<FGLTFJsonAccessor_*,FMeshAttributesArray<FColor>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>_*> @ 14e5bd6a0

TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>_*>
                  (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMesh_const_*,UAnimSequence_const_*>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>_*> @ 14e5bd6c0

TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>_*>
          (TGLTFConverter<FGLTFJsonAnimation_*,FGLTFJsonNode_*,USkeletalMeshComponent_const_*>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>_*> @ 14e5bd6e0

TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*>_*>
          (TGLTFConverter<FGLTFJsonAnimation_*,ALevelSequenceActor_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>_*> @ 14e5bd700

TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>,TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*>_*>
          (TGLTFConverter<FGLTFJsonAnimation_*,ULevel_const_*,ULevelSequence_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>,TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>_*> @ 14e5bd720

TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>,TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*>_*>
          (TGLTFConverter<FGLTFJsonCamera_*,UCameraComponent_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>_*> @ 14e5bd740

TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>,TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>_*>
                    (TGLTFConverter<FGLTFJsonImage_*,TGLTFSuperfluous<FString>,bool,UE::Math::TIntPoint<int>,TGLTFSharedArray<FColor,TArray<FColor,TSizedDefaultAllocator<32>_>,1>_>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>_*> @ 14e5bd760

TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*>_*>
          (TGLTFConverter<FGLTFJsonLight_*,ULightComponent_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>_*> @ 14e5bd780

TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*>_*>
          (TGLTFConverter<FGLTFJsonLightIES_*,ULightComponent_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>_*> @ 14e5bd7a0

TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>,TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*>_*>
          (TGLTFConverter<FGLTFJsonLightIESInstance_*,ULightComponent_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>,TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>_*> @ 14e5bd7c0

TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>,TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*>_*>
          (TGLTFConverter<FGLTFJsonLightMap_*,UStaticMeshComponent_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>_*> @ 14e5bd7e0

TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>_*>
                    (TGLTFConverter<FGLTFJsonMaterial_*,UMaterialInterface_const_*,FGLTFMeshData_const_*,FMeshAttributesArray<int>_>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>,TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>_*> @ 14e5bd800

TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>,TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>_*>
          (TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>,TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>_*> @ 14e5bd820

TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>,TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>_*>
          (TGLTFConverter<FGLTFJsonMesh_*,ULandscapeComponent_const_*,UMaterialInterface_const_*>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>_*> @ 14e5bd840

TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>_*>
                    (TGLTFConverter<FGLTFJsonMesh_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,FGLTFMaterialArray,int>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>_*> @ 14e5bd860

TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>_*>
                    (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,USplineMeshComponent_const_*,FGLTFMaterialArray,int>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>_*> @ 14e5bd880

TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>,TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>_*>
                    (TGLTFConverter<FGLTFJsonMesh_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,FGLTFMaterialArray,int>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>_*> @ 14e5bd8a0

TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int>_*>
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,int> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>_*> @ 14e5bd8c0

TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName>_*>
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,USkeletalMesh_const_*,FName> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>_*> @ 14e5bd8e0

TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName>_*>
          (TGLTFConverter<FGLTFJsonNode_*,FGLTFJsonNode_*,UStaticMesh_const_*,FName> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>,TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>_*> @ 14e5bd900

TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>,TGLTFConverter<FGLTFJsonNode_*,AActor_const_*>_*>
          (TGLTFConverter<FGLTFJsonNode_*,AActor_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>,TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>_*> @ 14e5bd920

TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>,TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*>_*>
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>_*> @ 14e5bd940

TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>,TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName>_*>
          (TGLTFConverter<FGLTFJsonNode_*,USceneComponent_const_*,FName> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>_*> @ 14e5bd960

TGLTFConverter<FGLTFJsonSampler_*,TextureAddress,TextureAddress,TextureFilter,TextureGroup> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>,TGLTFConverter<FGLTFJsonSampler_*,enum_TextureAddress,enum_TextureAddress,enum_TextureFilter,enum_TextureGroup>_*>
                  (TGLTFConverter<FGLTFJsonSampler_*,TextureAddress,TextureAddress,TextureFilter,TextureGroup>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>,TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>_*> @ 14e5bd980

TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>,TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*>_*>
          (TGLTFConverter<FGLTFJsonScene_*,UWorld_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>,TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>_*> @ 14e5bd9a0

TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>,TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*>_*>
          (TGLTFConverter<FGLTFJsonSkin_*,FGLTFJsonNode_*,USkeletalMesh_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>,TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>_*> @ 14e5bd9c0

TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>,TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*>_*>
          (TGLTFConverter<FGLTFJsonTexture_*,ULightMapTexture2D_const_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>_*> @ 14e5bd9e0

TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,TextureAddress,TextureAddress> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>,TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,enum_TextureAddress,enum_TextureAddress>_*>
          (TGLTFConverter<FGLTFJsonTexture_*,UTexture2D_const_*,bool,TextureAddress,TextureAddress>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>,TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>_*> @ 14e5bda00

TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>,TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool>_*>
          (TGLTFConverter<FGLTFJsonTexture_*,UTextureRenderTarget2D_const_*,bool> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>_*> @ 14e5bda20

TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>,TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>_*>
                  (TGLTFConverter<FGLTFMeshData_const_*,USkeletalMesh_const_*,USkeletalMeshComponent_const_*,int>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>_*> @ 14e5bda40

TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>,TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>_*>
          (TGLTFConverter<FGLTFMeshData_const_*,UStaticMesh_const_*,UStaticMeshComponent_const_*,int>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>_*> @ 14e5bda60

TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>_*>
                  (TGLTFConverter<FGLTFMeshSection_const_*,USkeletalMesh_const_*,int,FMeshAttributesArray<int>_>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>_*> @ 14e5bda80

TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>,TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>_*>
                  (TGLTFConverter<FGLTFMeshSection_const_*,UStaticMesh_const_*,int,FMeshAttributesArray<int>_>
                   **param_1)

{
  return *param_1;
}

// GetTypeHash<unsigned_short> @ 14e5c81f0

uint __cdecl UE::Math::GetTypeHash<unsigned_short>(TIntVector4<unsigned_short> *param_1)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e5c81ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*FCrc::MemCrc32Func)(param_1,8,0);
  return uVar1;
}

// GetMaterialPathsToShadingModels @ 14e5f7620

TMap<FString,UE::Interchange::GLTFMaterials::EShadingModel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::GLTFMaterials::EShadingModel,0>_>
* __cdecl UE::Interchange::GLTFMaterials::GetMaterialPathsToShadingModels
                    (TMap<FString,UE::Interchange::GLTFMaterials::EShadingModel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::GLTFMaterials::EShadingModel,0>_>
                     *__return_storage_ptr__)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  TMap<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,0>_>
  *pTVar4;
  bool bVar5;
  TMap<FString,UE::Interchange::GLTFMaterials::EShadingModel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::GLTFMaterials::EShadingModel,0>_>
  *pTVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,0>_>
  *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  uStack_8c = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uStack_90 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  local_78 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar10 = ShadingModelToMaterialInformation._40_4_;
  uStack_7c = uStack_90;
  if (uVar10 != 0) {
    puVar12 = (uint *)&ShadingModelToMaterialInformation.field_0x10;
    if (ShadingModelToMaterialInformation._32_8_ != 0) {
      puVar12 = (uint *)ShadingModelToMaterialInformation._32_8_;
    }
    uVar13 = *puVar12;
    local_78 = 0;
    uStack_90 = 0;
    while (uVar13 == 0) {
      lVar7 = (longlong)(int)uStack_90;
      local_78 = local_78 + 0x20;
      uStack_90 = uStack_90 + 1;
      uStack_7c = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_90)
      goto LAB_14e5f76f0;
      uVar13 = puVar12[lVar7 + 1];
    }
    uStack_8c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res10 = (int)lVar7;
    uStack_7c = local_res10 + -1 + local_78;
    if ((int)uVar10 < (int)uStack_7c) {
      uStack_7c = uVar10;
    }
  }
LAB_14e5f76f0:
  uVar13 = uVar10 & 0xffffffe0;
  iStack_70 = ShadingModelToMaterialInformation._8_4_ - ShadingModelToMaterialInformation._52_4_;
  local_98 = &ShadingModelToMaterialInformation;
  bVar3 = ShadingModelToMaterialInformation._40_1_;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,uStack_90);
  local_88 = 0x155397630;
  TStack_60.CurrentBitIndex = uStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  local_68 = &ShadingModelToMaterialInformation;
  iVar9 = (int)uVar10 >> 5;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&ShadingModelToMaterialInformation.field_0x10;
  uVar11 = uVar10;
  uStack_74 = uStack_7c;
  if ((int)uVar10 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TMap<FString,UE::Interchange::GLTFMaterials::EShadingModel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::GLTFMaterials::EShadingModel,0>_>
                *)(*pcVar2)();
      return pTVar6;
    }
    uVar11 = ShadingModelToMaterialInformation._40_4_;
  }
  if (uVar10 != uVar11) {
    lVar7 = 0x155397630;
    if (ShadingModelToMaterialInformation._32_8_ != 0) {
      lVar7 = ShadingModelToMaterialInformation._32_8_;
    }
    uVar10 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
      goto LAB_14e5f7810;
      uVar10 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar10 = (int)lVar7 + -1 + uVar13;
    if ((int)uVar11 < (int)uVar10) {
      uVar10 = uVar11;
    }
  }
LAB_14e5f7810:
  while( true ) {
    pTVar4 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_UE::Interchange::GLTFMaterials::EShadingModel,UE::Interchange::GLTFMaterials::FGLTFMaterialInformation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&ShadingModelToMaterialInformation.field_0x10)) &&
       (pTVar4 == &ShadingModelToMaterialInformation)) break;
    local_a0 = (longlong)TStack_60.CurrentBitIndex * 0x40 + *(longlong *)pTVar4;
    local_a8 = local_a0 + 0x18;
    TSet<TTuple<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel>,TDefaultMapHashableKeyFuncs<FString,enum_UE::Interchange::GLTFMaterials::EShadingModel,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FString_const_&,enum_UE::Interchange::GLTFMaterials::EShadingModel_const_&>_>
              (__return_storage_ptr__,
               (TPairInitializer<FString_const_&,UE::Interchange::GLTFMaterials::EShadingModel_const_&>
                *)&stack0x00000018,(bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return __return_storage_ptr__;
}

