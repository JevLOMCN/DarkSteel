// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 5

// GetNumRenderInstances @ 145ee4150

int __thiscall
UHierarchicalInstancedStaticMeshComponent::GetNumRenderInstances
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  return (this->SortedInstances).ArrayNum;
}

// GetTranslatedInstanceSpaceOrigin @ 145ee6590

TVector<double> * __thiscall
UHierarchicalInstancedStaticMeshComponent::GetTranslatedInstanceSpaceOrigin
          (UHierarchicalInstancedStaticMeshComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Y;
  dVar1 = (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->TranslatedInstanceSpaceOrigin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// StaticClass @ 145eecf20

UClass * __cdecl UHierarchicalInstancedStaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HierarchicalInstancedStaticMeshComponent",
               &Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUHierarchicalInstancedStaticMeshComponent,0xba0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UHierarchicalInstancedStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UHierarchicalInstancedStaticMeshComponent>,aFStackX_8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHierarchicalInstancedStaticMeshComponent.InnerSingleton;
}

// SupportsPartialNavigationUpdate @ 145eed240

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::SupportsPartialNavigationUpdate
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  return true;
}

// SupportsRemoveSwap @ 145eed260

bool __thiscall
UHierarchicalInstancedStaticMeshComponent::SupportsRemoveSwap
          (UHierarchicalInstancedStaticMeshComponent *this)

{
  return true;
}

