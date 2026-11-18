// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 7

// StaticClass @ 145ed04a0

UClass * __cdecl UFoliageType_InstancedStaticMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType_InstancedStaticMesh",
               &Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton,
               StaticRegisterNativesUFoliageType_InstancedStaticMesh,0x4f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFoliageType_InstancedStaticMesh>,
               InternalVTableHelperCtorCaller<UFoliageType_InstancedStaticMesh>,local_res8,
               UFoliageType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton;
}

// UFoliageType_InstancedStaticMesh @ 145ed9130

UFoliageType_InstancedStaticMesh * __thiscall
UFoliageType_InstancedStaticMesh::UFoliageType_InstancedStaticMesh
          (UFoliageType_InstancedStaticMesh *this,FVTableHelper *param_1)

{
  UFoliageType::UFoliageType((UFoliageType *)this,param_1);
  this->_padding_ = (longlong)&___7UFoliageType_InstancedStaticMesh__6B_;
  (this->Mesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->NaniteOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteOverrideMaterials).ArrayNum = 0;
  (this->NaniteOverrideMaterials).ArrayMax = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UFoliageType_InstancedStaticMesh @ 145ed9190

UFoliageType_InstancedStaticMesh * __thiscall
UFoliageType_InstancedStaticMesh::UFoliageType_InstancedStaticMesh
          (UFoliageType_InstancedStaticMesh *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UFoliageType::UFoliageType((UFoliageType *)this,param_1);
  this->_padding_ = (longlong)&___7UFoliageType_InstancedStaticMesh__6B_;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->NaniteOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteOverrideMaterials).ArrayNum = 0;
  (this->NaniteOverrideMaterials).ArrayMax = 0;
  (this->ComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->Mesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  pUVar1 = UFoliageInstancedStaticMeshComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~UFoliageType_InstancedStaticMesh @ 145eda4b0

void __thiscall
UFoliageType_InstancedStaticMesh::~UFoliageType_InstancedStaticMesh
          (UFoliageType_InstancedStaticMesh *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UFoliageType_InstancedStaticMesh__6B_;
  pFVar1 = (this->NaniteOverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UFoliageType::~UFoliageType((UFoliageType *)this);
  return;
}

// GetPrivateStaticClass @ 145ee5140

UClass * __cdecl UFoliageType_InstancedStaticMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType_InstancedStaticMesh",
               &Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton,
               StaticRegisterNativesUFoliageType_InstancedStaticMesh,0x4f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UFoliageType_InstancedStaticMesh>,
               InternalVTableHelperCtorCaller<UFoliageType_InstancedStaticMesh>,local_res8,
               UFoliageType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.InnerSingleton;
}

// GetSource @ 145ee6240

UObject * __thiscall
UFoliageType_InstancedStaticMesh::GetSource(UFoliageType_InstancedStaticMesh *this)

{
  return (UObject *)(this->Mesh).field0_0x0.DebugPtr;
}

// StaticRegisterNativesUFoliageType_InstancedStaticMesh @ 145eed050

void __cdecl
UFoliageType_InstancedStaticMesh::StaticRegisterNativesUFoliageType_InstancedStaticMesh(void)

{
  return;
}

