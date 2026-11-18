// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 6

// StaticClass @ 145ecf810

UClass * __cdecl AProceduralFoliageBlockingVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageBlockingVolume",
               &Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton,
               StaticRegisterNativesAProceduralFoliageBlockingVolume,0x390,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AProceduralFoliageBlockingVolume>,
               InternalVTableHelperCtorCaller<AProceduralFoliageBlockingVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton;
}

// AProceduralFoliageBlockingVolume @ 145ed8250

AProceduralFoliageBlockingVolume * __thiscall
AProceduralFoliageBlockingVolume::AProceduralFoliageBlockingVolume
          (AProceduralFoliageBlockingVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7AProceduralFoliageBlockingVolume__6B_;
  (this->ProceduralFoliageVolume).field0_0x0.DebugPtr = (AProceduralFoliageVolume *)0x0;
  FFoliageDensityFalloff::FFoliageDensityFalloff(&this->DensityFalloff);
  return this;
}

// AProceduralFoliageBlockingVolume @ 145ed8290

AProceduralFoliageBlockingVolume * __thiscall
AProceduralFoliageBlockingVolume::AProceduralFoliageBlockingVolume
          (AProceduralFoliageBlockingVolume *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7AProceduralFoliageBlockingVolume__6B_;
  (this->ProceduralFoliageVolume).field0_0x0.DebugPtr = (AProceduralFoliageVolume *)0x0;
  FFoliageDensityFalloff::FFoliageDensityFalloff(&this->DensityFalloff);
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x790))(plVar2,0);
    (**(code **)(*plVar2 + 0x9f8))(plVar2,0);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  return this;
}

// ~AProceduralFoliageBlockingVolume @ 145ed9f20

void __thiscall
AProceduralFoliageBlockingVolume::~AProceduralFoliageBlockingVolume
          (AProceduralFoliageBlockingVolume *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7AProceduralFoliageBlockingVolume__6B_;
  pFVar1 = (this->DensityFalloff).FalloffCurve.EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DensityFalloff).FalloffCurve.EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DensityFalloff).FalloffCurve.EditorCurveData._padding_);
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 145ee4cd0

UClass * __cdecl AProceduralFoliageBlockingVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"ProceduralFoliageBlockingVolume",
               &Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton,
               StaticRegisterNativesAProceduralFoliageBlockingVolume,0x390,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AProceduralFoliageBlockingVolume>,
               InternalVTableHelperCtorCaller<AProceduralFoliageBlockingVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AProceduralFoliageBlockingVolume.InnerSingleton;
}

// StaticRegisterNativesAProceduralFoliageBlockingVolume @ 145eecfc0

void __cdecl
AProceduralFoliageBlockingVolume::StaticRegisterNativesAProceduralFoliageBlockingVolume(void)

{
  return;
}

