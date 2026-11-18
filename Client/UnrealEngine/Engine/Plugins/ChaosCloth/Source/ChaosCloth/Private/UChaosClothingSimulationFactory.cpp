// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 13

// StaticClass @ 14db76ec0

UClass * __cdecl UChaosClothingSimulationFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothingSimulationFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothingSimulationFactory",
               &Z_Registration_Info_UClass_UChaosClothingSimulationFactory.InnerSingleton,
               StaticRegisterNativesUChaosClothingSimulationFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothingSimulationFactory>,
               InternalVTableHelperCtorCaller<UChaosClothingSimulationFactory>,local_res8,
               UClothingSimulationFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothingSimulationFactory.InnerSingleton;
}

// UChaosClothingSimulationFactory @ 14db9d960

UChaosClothingSimulationFactory * __thiscall
UChaosClothingSimulationFactory::UChaosClothingSimulationFactory
          (UChaosClothingSimulationFactory *this,FVTableHelper *param_1)

{
  UClothingSimulationFactory::UClothingSimulationFactory((UClothingSimulationFactory *)this,param_1)
  ;
  *(undefined ***)this = &___7UChaosClothingSimulationFactory__6B_;
  return this;
}

// UChaosClothingSimulationFactory @ 14db9d990

UChaosClothingSimulationFactory * __thiscall
UChaosClothingSimulationFactory::UChaosClothingSimulationFactory
          (UChaosClothingSimulationFactory *this,FObjectInitializer *param_1)

{
  UClothingSimulationFactory::UClothingSimulationFactory((UClothingSimulationFactory *)this,param_1)
  ;
  *(undefined ***)this = &___7UChaosClothingSimulationFactory__6B_;
  return this;
}

// ~UChaosClothingSimulationFactory @ 14dba0820

void __thiscall
UChaosClothingSimulationFactory::~UChaosClothingSimulationFactory
          (UChaosClothingSimulationFactory *this)

{
  *(undefined ***)this = &___7UChaosClothingSimulationFactory__6B_;
  UClothingSimulationFactory::~UClothingSimulationFactory((UClothingSimulationFactory *)this);
  return;
}

// CreateInteractor @ 14dbce4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClothingSimulationInteractor * __thiscall
UChaosClothingSimulationFactory::CreateInteractor(UChaosClothingSimulationFactory *this)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UClothingSimulationInteractor *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar1 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UChaosClothingSimulationInteractor::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UClothingSimulationInteractor *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return pUVar3;
}

// CreateSimulation @ 14dbd2380

IClothingSimulationInterface * __thiscall
UChaosClothingSimulationFactory::CreateSimulation(UChaosClothingSimulationFactory *this)

{
  FClothingSimulation *pFVar1;
  
  pFVar1 = ::operator_new(0x128);
  if (pFVar1 != (FClothingSimulation *)0x0) {
    pFVar1 = Chaos::FClothingSimulation::FClothingSimulation(pFVar1);
    return (IClothingSimulationInterface *)pFVar1;
  }
  return (IClothingSimulationInterface *)0x0;
}

// DestroySimulation @ 14dbd49e0

void __thiscall
UChaosClothingSimulationFactory::DestroySimulation
          (UChaosClothingSimulationFactory *this,IClothingSimulationInterface *param_1)

{
  if (param_1 != (IClothingSimulationInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dbd49f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1->_padding_)(param_1,1);
    return;
  }
  return;
}

// GetClothConfigClasses @ 14dbf87c0

TArrayView<TSubclassOf<UClothConfigBase>_const_,int> * __thiscall
UChaosClothingSimulationFactory::GetClothConfigClasses
          (UChaosClothingSimulationFactory *this,
          TArrayView<TSubclassOf<UClothConfigBase>_const_,int> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TArrayView<TSubclassOf<UClothConfigBase>_const_,int> *pTVar4;
  TObjectPtr<UClass>_u_0 local_18;
  UClass *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_18.DebugPtr = UChaosClothConfig::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_18.DebugPtr != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
      }
      local_10 = UChaosClothSharedSimConfig::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_10);
      }
      ClothConfigClasses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ClothConfigClasses.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,2,0,&ClothConfigClasses.AllocatorInstance,2,&ClothConfigClasses.ArrayMax);
      ConstructItems<TSubclassOf<UClothConfigBase>,TSubclassOf<UClothConfigBase>,int>
                (ClothConfigClasses.AllocatorInstance.Data,
                 (TSubclassOf<UClothConfigBase> *)&local_18.ObjectPtr,2);
      atexit(`UChaosClothingSimulationFactory::GetClothConfigClasses'::__l2::
             _dynamic_atexit_destructor_for__ClothConfigClasses__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = ClothConfigClasses.ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSubclassOf<UClothConfigBase> *)ClothConfigClasses.AllocatorInstance.Data;
  if (iVar2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArrayView<TSubclassOf<UClothConfigBase>_const_,int> *)(*pcVar1)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar2;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14dbfef00

UClass * __cdecl UChaosClothingSimulationFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothingSimulationFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothingSimulationFactory",
               &Z_Registration_Info_UClass_UChaosClothingSimulationFactory.InnerSingleton,
               StaticRegisterNativesUChaosClothingSimulationFactory,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosClothingSimulationFactory>,
               InternalVTableHelperCtorCaller<UChaosClothingSimulationFactory>,local_res8,
               UClothingSimulationFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothingSimulationFactory.InnerSingleton;
}

// GetWeightMapTargetEnum @ 14dc018a0

UEnum * __thiscall
UChaosClothingSimulationFactory::GetWeightMapTargetEnum(UChaosClothingSimulationFactory *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCloth();
    Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_ChaosCloth_EChaosWeightMapTarget,(UObject *)pUVar1,
                       L"EChaosWeightMapTarget");
  }
  return Z_Registration_Info_UEnum_EChaosWeightMapTarget.OuterSingleton;
}

// StaticRegisterNativesUChaosClothingSimulationFactory @ 14dc1ba60

void __cdecl
UChaosClothingSimulationFactory::StaticRegisterNativesUChaosClothingSimulationFactory(void)

{
  return;
}

// SupportsAsset @ 14dc1ba80

bool __thiscall
UChaosClothingSimulationFactory::SupportsAsset
          (UChaosClothingSimulationFactory *this,UClothingAssetBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UClothingAssetBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UClothingAssetCommon_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14dc1bab3;
  }
  param_1 = (UClothingAssetBase *)0x0;
LAB_14dc1bab3:
  return param_1 != (UClothingAssetBase *)0x0;
}

// SupportsRuntimeInteraction @ 14dc1bad0

bool __thiscall
UChaosClothingSimulationFactory::SupportsRuntimeInteraction(UChaosClothingSimulationFactory *this)

{
  return true;
}

