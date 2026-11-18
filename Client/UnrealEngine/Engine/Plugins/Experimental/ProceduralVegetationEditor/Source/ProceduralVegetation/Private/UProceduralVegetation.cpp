// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 7

// StaticClass @ 14da56080

UClass * __cdecl UProceduralVegetation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralVegetation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"ProceduralVegetation",
               &Z_Registration_Info_UClass_UProceduralVegetation.InnerSingleton,
               StaticRegisterNativesUProceduralVegetation,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralVegetation>,
               InternalVTableHelperCtorCaller<UProceduralVegetation>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralVegetation.InnerSingleton;
}

// UProceduralVegetation @ 14da67240

UProceduralVegetation * __thiscall
UProceduralVegetation::UProceduralVegetation(UProceduralVegetation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UProceduralVegetation__6B_;
  (this->Graph).field0_0x0.DebugPtr = (UProceduralVegetationGraph *)0x0;
  return this;
}

// UProceduralVegetation @ 14da67270

UProceduralVegetation * __thiscall
UProceduralVegetation::UProceduralVegetation
          (UProceduralVegetation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UProceduralVegetation__6B_;
  (this->Graph).field0_0x0.DebugPtr = (UProceduralVegetationGraph *)0x0;
  return this;
}

// ~UProceduralVegetation @ 14da67f50

void __thiscall UProceduralVegetation::~UProceduralVegetation(UProceduralVegetation *this)

{
  this->_padding_ = (longlong)&___7UProceduralVegetation__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateGraph @ 14da79e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UProceduralVegetation::CreateGraph(UProceduralVegetation *this,UProceduralVegetationGraph *param_1)

{
  FName FVar1;
  UClass *pUVar2;
  UProceduralVegetationGraph *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  FVar1 = PV::DefaultGraphName;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (UProceduralVegetationGraph *)0x0) {
    if (PV::DefaultGraphName == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar2 = UProceduralVegetationGraph::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_8_ = FVar1;
    local_98._24_4_ = RF_Transactional;
    local_98._8_8_ = this;
    pUVar3 = (UProceduralVegetationGraph *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar4 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UProceduralVegetationGraph *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Graph).field0_0x0.DebugPtr = pUVar3;
  }
  else {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar2 = UProceduralVegetationGraph::StaticClass();
    pUVar3 = (UProceduralVegetationGraph *)
             DuplicateObject_Internal(pUVar2,(UObject *)param_1,(UObject *)this,local_a8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UProceduralVegetationGraph *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Graph).field0_0x0.DebugPtr = pUVar3;
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar3,RF_Transactional);
  }
  return;
}

// GetPrivateStaticClass @ 14da99bc0

UClass * __cdecl UProceduralVegetation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralVegetation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"ProceduralVegetation",
               &Z_Registration_Info_UClass_UProceduralVegetation.InnerSingleton,
               StaticRegisterNativesUProceduralVegetation,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProceduralVegetation>,
               InternalVTableHelperCtorCaller<UProceduralVegetation>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralVegetation.InnerSingleton;
}

// StaticRegisterNativesUProceduralVegetation @ 14daa99b0

void __cdecl UProceduralVegetation::StaticRegisterNativesUProceduralVegetation(void)

{
  return;
}

