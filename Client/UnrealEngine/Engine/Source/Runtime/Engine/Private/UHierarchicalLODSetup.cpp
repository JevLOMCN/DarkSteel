// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147caac70

UClass * __cdecl UHierarchicalLODSetup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHierarchicalLODSetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HierarchicalLODSetup",
               &Z_Registration_Info_UClass_UHierarchicalLODSetup.InnerSingleton,
               StaticRegisterNativesUHierarchicalLODSetup,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHierarchicalLODSetup>,
               InternalVTableHelperCtorCaller<UHierarchicalLODSetup>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHierarchicalLODSetup.InnerSingleton;
}

// UHierarchicalLODSetup @ 147cc67a0

UHierarchicalLODSetup * __thiscall
UHierarchicalLODSetup::UHierarchicalLODSetup(UHierarchicalLODSetup *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->OverrideBaseMaterial).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UHierarchicalLODSetup__6B_;
  (this->HierarchicalLODSetup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HierarchicalLODSetup).ArrayNum = 0;
  (this->HierarchicalLODSetup).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UHierarchicalLODSetup @ 147cc67f0

UHierarchicalLODSetup * __thiscall
UHierarchicalLODSetup::UHierarchicalLODSetup(UHierarchicalLODSetup *this)

{
  undefined1 *this_00;
  int iVar1;
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this);
  this_00 = &(this->OverrideBaseMaterial).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UHierarchicalLODSetup__6B_;
  (this->HierarchicalLODSetup).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HierarchicalLODSetup).ArrayNum = 0;
  (this->HierarchicalLODSetup).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->OverrideBaseMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  iVar1 = (this->HierarchicalLODSetup).ArrayNum;
  if (iVar1 == (this->HierarchicalLODSetup).ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x3b0,8,&(this->HierarchicalLODSetup).AllocatorInstance,
                       &(this->HierarchicalLODSetup).ArrayMax);
  }
  (this->HierarchicalLODSetup).ArrayNum = iVar1 + 1;
  DefaultConstructItems<FHierarchicalSimplification,int>
            ((this->HierarchicalLODSetup).AllocatorInstance.Data + (longlong)iVar1 * 0x3b0,1);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->OverrideBaseMaterial).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UHierarchicalLODSetup @ 147cc94f0

void __thiscall UHierarchicalLODSetup::~UHierarchicalLODSetup(UHierarchicalLODSetup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UHierarchicalLODSetup__6B_;
  pvVar1 = *(void **)&(this->OverrideBaseMaterial).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FHierarchicalSimplification,int>
            ((FHierarchicalSimplification *)(this->HierarchicalLODSetup).AllocatorInstance.Data,
             (this->HierarchicalLODSetup).ArrayNum);
  pFVar2 = (this->HierarchicalLODSetup).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147d0c400

UClass * __cdecl UHierarchicalLODSetup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHierarchicalLODSetup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"HierarchicalLODSetup",
               &Z_Registration_Info_UClass_UHierarchicalLODSetup.InnerSingleton,
               StaticRegisterNativesUHierarchicalLODSetup,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UHierarchicalLODSetup>,
               InternalVTableHelperCtorCaller<UHierarchicalLODSetup>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHierarchicalLODSetup.InnerSingleton;
}

// StaticRegisterNativesUHierarchicalLODSetup @ 147d328e0

void __cdecl UHierarchicalLODSetup::StaticRegisterNativesUHierarchicalLODSetup(void)

{
  return;
}

