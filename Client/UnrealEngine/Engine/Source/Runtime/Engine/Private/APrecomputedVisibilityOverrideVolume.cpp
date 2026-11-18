// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147321620

UClass * __cdecl APrecomputedVisibilityOverrideVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrecomputedVisibilityOverrideVolume",
               &Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.InnerSingleton,
               StaticRegisterNativesAPrecomputedVisibilityOverrideVolume,0x328,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APrecomputedVisibilityOverrideVolume>,
               InternalVTableHelperCtorCaller<APrecomputedVisibilityOverrideVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.InnerSingleton;
}

// APrecomputedVisibilityOverrideVolume @ 147324750

APrecomputedVisibilityOverrideVolume * __thiscall
APrecomputedVisibilityOverrideVolume::APrecomputedVisibilityOverrideVolume
          (APrecomputedVisibilityOverrideVolume *this,FVTableHelper *param_1)

{
  AVolume::AVolume((AVolume *)this,param_1);
  this->_padding_ = (longlong)&___7APrecomputedVisibilityOverrideVolume__6B_;
  (this->OverrideVisibleActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideVisibleActors).ArrayNum = 0;
  (this->OverrideVisibleActors).ArrayMax = 0;
  (this->OverrideInvisibleActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideInvisibleActors).ArrayNum = 0;
  (this->OverrideInvisibleActors).ArrayMax = 0;
  (this->OverrideInvisibleLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideInvisibleLevels).ArrayNum = 0;
  (this->OverrideInvisibleLevels).ArrayMax = 0;
  return this;
}

// ~APrecomputedVisibilityOverrideVolume @ 147325070

void __thiscall
APrecomputedVisibilityOverrideVolume::~APrecomputedVisibilityOverrideVolume
          (APrecomputedVisibilityOverrideVolume *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7APrecomputedVisibilityOverrideVolume__6B_;
  pFVar1 = (this->OverrideInvisibleLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideInvisibleActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideVisibleActors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AVolume::~AVolume((AVolume *)this);
  return;
}

// GetPrivateStaticClass @ 147326960

UClass * __cdecl APrecomputedVisibilityOverrideVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PrecomputedVisibilityOverrideVolume",
               &Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.InnerSingleton,
               StaticRegisterNativesAPrecomputedVisibilityOverrideVolume,0x328,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APrecomputedVisibilityOverrideVolume>,
               InternalVTableHelperCtorCaller<APrecomputedVisibilityOverrideVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APrecomputedVisibilityOverrideVolume.InnerSingleton;
}

// StaticRegisterNativesAPrecomputedVisibilityOverrideVolume @ 1473280b0

void __cdecl
APrecomputedVisibilityOverrideVolume::StaticRegisterNativesAPrecomputedVisibilityOverrideVolume
          (void)

{
  return;
}

// APrecomputedVisibilityOverrideVolume @ 148349f30

APrecomputedVisibilityOverrideVolume * __thiscall
APrecomputedVisibilityOverrideVolume::APrecomputedVisibilityOverrideVolume
          (APrecomputedVisibilityOverrideVolume *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  
  AVolume::AVolume((AVolume *)this,param_1);
  plVar2 = (longlong *)this->_padding_;
  this->_padding_ = (longlong)&___7APrecomputedVisibilityOverrideVolume__6B_;
  (this->OverrideVisibleActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideVisibleActors).ArrayNum = 0;
  (this->OverrideVisibleActors).ArrayMax = 0;
  (this->OverrideInvisibleActors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideInvisibleActors).ArrayNum = 0;
  (this->OverrideInvisibleActors).ArrayMax = 0;
  (this->OverrideInvisibleLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideInvisibleLevels).ArrayNum = 0;
  (this->OverrideInvisibleLevels).ArrayMax = 0;
  (**(code **)(*plVar2 + 0x788))(plVar2,UCollisionProfile::NoCollision_ProfileName,1);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0x1978;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0x5a;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0xff;
  return this;
}

