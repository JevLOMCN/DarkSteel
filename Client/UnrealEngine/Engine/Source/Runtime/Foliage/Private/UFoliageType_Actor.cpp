// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 7

// StaticClass @ 145ed0130

UClass * __cdecl UFoliageType_Actor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType_Actor",
               &Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton,
               StaticRegisterNativesUFoliageType_Actor,0x4d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFoliageType_Actor>,
               InternalVTableHelperCtorCaller<UFoliageType_Actor>,local_res8,
               UFoliageType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton;
}

// UFoliageType_Actor @ 145ed9070

UFoliageType_Actor * __thiscall
UFoliageType_Actor::UFoliageType_Actor(UFoliageType_Actor *this,FVTableHelper *param_1)

{
  UFoliageType::UFoliageType((UFoliageType *)this,param_1);
  this->_padding_ = (longlong)&___7UFoliageType_Actor__6B_;
  (this->ActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->StaticMeshOnlyComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UFoliageType_Actor @ 145ed90b0

UFoliageType_Actor * __thiscall
UFoliageType_Actor::UFoliageType_Actor(UFoliageType_Actor *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UFoliageType::UFoliageType((UFoliageType *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x41200000;
  this->_padding_ = (longlong)&___7UFoliageType_Actor__6B_;
  (this->ActorClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->StaticMeshOnlyComponentClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined4 *)&this->_padding_ = 0x43fa0000;
  this->bShouldAttachToBaseComponent = true;
  pUVar1 = UFoliageInstancedStaticMeshComponent::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->StaticMeshOnlyComponentClass).Class.field0_0x0.DebugPtr = pUVar1;
  return this;
}

// ~UFoliageType_Actor @ 145eda490

void __thiscall UFoliageType_Actor::~UFoliageType_Actor(UFoliageType_Actor *this)

{
  this->_padding_ = (longlong)&___7UFoliageType_Actor__6B_;
  UFoliageType::~UFoliageType((UFoliageType *)this);
  return;
}

// GetPrivateStaticClass @ 145ee5080

UClass * __cdecl UFoliageType_Actor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Foliage",L"FoliageType_Actor",
               &Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton,
               StaticRegisterNativesUFoliageType_Actor,0x4d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFoliageType_Actor>,
               InternalVTableHelperCtorCaller<UFoliageType_Actor>,local_res8,
               UFoliageType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFoliageType_Actor.InnerSingleton;
}

// GetSource @ 145ee61d0

UObject * __thiscall UFoliageType_Actor::GetSource(UFoliageType_Actor *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->ActorClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (UObject *)(this->ActorClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UObject *)0x0;
}

// StaticRegisterNativesUFoliageType_Actor @ 145eed040

void __cdecl UFoliageType_Actor::StaticRegisterNativesUFoliageType_Actor(void)

{
  return;
}

