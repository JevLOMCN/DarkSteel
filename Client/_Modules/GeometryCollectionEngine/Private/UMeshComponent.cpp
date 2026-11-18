// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 9

// GetDefaultMaterialSlotsOverlayMaterial @ 146374690

void __thiscall
UMeshComponent::GetDefaultMaterialSlotsOverlayMaterial
          (UMeshComponent *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetMaterialStreamingData @ 146378940

bool __thiscall
UMeshComponent::GetMaterialStreamingData
          (UMeshComponent *this,int param_1,FPrimitiveMaterialInfo *param_2)

{
  return false;
}

// GetMeshPaintTexture @ 146378b70

UTexture * __thiscall UMeshComponent::GetMeshPaintTexture(UMeshComponent *this)

{
  return (UTexture *)0x0;
}

// GetMeshPaintTextureCoordinateIndex @ 146378b80

int __thiscall UMeshComponent::GetMeshPaintTextureCoordinateIndex(UMeshComponent *this)

{
  return 0;
}

// PrestreamMeshLODs @ 146384720

bool __thiscall UMeshComponent::PrestreamMeshLODs(UMeshComponent *this,float param_1)

{
  return false;
}

// SetMeshPaintTexture @ 14638dff0

void __thiscall UMeshComponent::SetMeshPaintTexture(UMeshComponent *this,UTexture *param_1)

{
  return;
}

// SetMeshPaintTextureOverride @ 14638e000

void __thiscall UMeshComponent::SetMeshPaintTextureOverride(UMeshComponent *this,UTexture *param_1)

{
  return;
}

// StaticClass @ 14638f470

UClass * __cdecl UMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMeshComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshComponent",
               &Z_Registration_Info_UClass_UMeshComponent.InnerSingleton,
               StaticRegisterNativesUMeshComponent,0x590,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshComponent>,InternalVTableHelperCtorCaller<UMeshComponent>,
               aFStackX_8,UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshComponent.InnerSingleton;
}

// UseNaniteOverrideMaterials @ 146393b30

bool __thiscall UMeshComponent::UseNaniteOverrideMaterials(UMeshComponent *this)

{
  return false;
}

