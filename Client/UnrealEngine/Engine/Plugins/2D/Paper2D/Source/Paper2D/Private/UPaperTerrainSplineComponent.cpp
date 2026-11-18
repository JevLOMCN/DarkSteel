// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 6

// StaticClass @ 14ace0af0

UClass * __cdecl UPaperTerrainSplineComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainSplineComponent",
               &Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton,
               StaticRegisterNativesUPaperTerrainSplineComponent,0x720,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTerrainSplineComponent>,
               InternalVTableHelperCtorCaller<UPaperTerrainSplineComponent>,local_res8,
               USplineComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton;
}

// UPaperTerrainSplineComponent @ 14aceaed0

UPaperTerrainSplineComponent * __thiscall
UPaperTerrainSplineComponent::UPaperTerrainSplineComponent
          (UPaperTerrainSplineComponent *this,FVTableHelper *param_1)

{
  USplineComponent::USplineComponent((USplineComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->OnSplineEdited = 0;
  *(undefined8 *)&(this->OnSplineEdited).field_0x8 = 0;
  *(undefined4 *)&(this->OnSplineEdited).field_0x10 = 0;
  return this;
}

// UPaperTerrainSplineComponent @ 14aceaf50

UPaperTerrainSplineComponent * __thiscall
UPaperTerrainSplineComponent::UPaperTerrainSplineComponent
          (UPaperTerrainSplineComponent *this,FObjectInitializer *param_1)

{
  USplineComponent::USplineComponent((USplineComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->OnSplineEdited = 0;
  *(undefined8 *)&(this->OnSplineEdited).field_0x8 = 0;
  *(undefined4 *)&(this->OnSplineEdited).field_0x10 = 0;
  return this;
}

// ~UPaperTerrainSplineComponent @ 14acebdb0

void __thiscall
UPaperTerrainSplineComponent::~UPaperTerrainSplineComponent(UPaperTerrainSplineComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSplineEdited);
  pvVar1 = *(void **)&(this->OnSplineEdited).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSplineEdited);
  USplineComponent::~USplineComponent((USplineComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acfd690

UClass * __cdecl UPaperTerrainSplineComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTerrainSplineComponent",
               &Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton,
               StaticRegisterNativesUPaperTerrainSplineComponent,0x720,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTerrainSplineComponent>,
               InternalVTableHelperCtorCaller<UPaperTerrainSplineComponent>,local_res8,
               USplineComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTerrainSplineComponent.InnerSingleton;
}

// StaticRegisterNativesUPaperTerrainSplineComponent @ 14ad0e110

void __cdecl UPaperTerrainSplineComponent::StaticRegisterNativesUPaperTerrainSplineComponent(void)

{
  return;
}

