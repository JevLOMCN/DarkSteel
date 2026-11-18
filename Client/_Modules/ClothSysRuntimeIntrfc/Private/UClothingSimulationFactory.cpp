// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothSysRuntimeIntrfc
// Functions: 20

// StaticClass @ 144644be0

UClass * __cdecl UClothingSimulationFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationFactory",
               &Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton,
               StaticRegisterNativesUClothingSimulationFactory,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UClothingSimulationFactory>,
               InternalVTableHelperCtorCaller<UClothingSimulationFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton;
}

// UClothingSimulationFactory @ 144648940

UClothingSimulationFactory * __thiscall
UClothingSimulationFactory::UClothingSimulationFactory
          (UClothingSimulationFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UClothingSimulationFactory__6B_;
  return this;
}

// UClothingSimulationFactory @ 144648970

UClothingSimulationFactory * __thiscall
UClothingSimulationFactory::UClothingSimulationFactory
          (UClothingSimulationFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UClothingSimulationFactory__6B_;
  return this;
}

// ~UClothingSimulationFactory @ 144648dc0

void __thiscall
UClothingSimulationFactory::~UClothingSimulationFactory(UClothingSimulationFactory *this)

{
  *(undefined ***)this = &___7UClothingSimulationFactory__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateInteractor @ 14464a940

UClothingSimulationInteractor * __thiscall
UClothingSimulationFactory::CreateInteractor(UClothingSimulationFactory *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h"
             ,0x79,L"Pure virtual not implemented (%s)");
  return (UClothingSimulationInteractor *)0x0;
}

// CreateSimulation @ 14464a970

IClothingSimulation * __thiscall
UClothingSimulationFactory::CreateSimulation(UClothingSimulationFactory *this)

{
  return (IClothingSimulation *)0x0;
}

// CreateSimulation @ 14464a980

IClothingSimulationInterface * __thiscall
UClothingSimulationFactory::CreateSimulation(UClothingSimulationFactory *this)

{
  IClothingSimulationInterface *pIVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014464a983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar1 = (IClothingSimulationInterface *)(**(code **)(*(longlong *)this + 0x2b0))();
  return pIVar1;
}

// DestroySimulation @ 14464a9a0

void __thiscall
UClothingSimulationFactory::DestroySimulation
          (UClothingSimulationFactory *this,IClothingSimulation *param_1)

{
  return;
}

// DestroySimulation @ 14464a9b0

void __thiscall
UClothingSimulationFactory::DestroySimulation
          (UClothingSimulationFactory *this,IClothingSimulationInterface *param_1)

{
  bool bVar1;
  IClothingSimulationInterface *pIVar2;
  undefined1 local_res10 [8];
  
  if (param_1 != (IClothingSimulationInterface *)0x0) {
    pIVar2 = (IClothingSimulationInterface *)0x0;
    if (param_1->bIsLegacyInterface != false) {
      pIVar2 = param_1;
    }
    if (pIVar2 != (IClothingSimulationInterface *)0x0) goto LAB_14464a9ee;
  }
  bVar1 = `UClothingSimulationFactory::DestroySimulation'::__l3::<lambda_1>::operator()(local_res10)
  ;
  if (!bVar1) {
    return;
  }
LAB_14464a9ee:
  pIVar2 = (IClothingSimulationInterface *)0x0;
  if (param_1->bIsLegacyInterface != false) {
    pIVar2 = param_1;
  }
  (**(code **)(*(longlong *)this + 0x2c0))(this,pIVar2);
  return;
}

// GetClothConfigClasses @ 14464b2e0

TArrayView<TSubclassOf<UClothConfigBase>_const_,int> * __thiscall
UClothingSimulationFactory::GetClothConfigClasses
          (UClothingSimulationFactory *this,
          TArrayView<TSubclassOf<UClothConfigBase>_const_,int> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h"
             ,0x7d,L"Pure virtual not implemented (%s)");
  __return_storage_ptr__->DataPtr = (TSubclassOf<UClothConfigBase> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetClothingSimulationFactory @ 14464b3c0

UClothingSimulationFactory * __cdecl
UClothingSimulationFactory::GetClothingSimulationFactory(UClothingAssetBase *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  IModularFeatures *pIVar8;
  UClass *pUVar9;
  UClothingSimulationFactory *pUVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  UClass *local_res18;
  TArray<IClothingSimulationFactoryClassProvider_*,TSizedDefaultAllocator<32>_> local_28;
  
  pIVar8 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar8 + 8))(pIVar8);
  pIVar8 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<IClothingSimulationFactoryClassProvider>
            (pIVar8,&local_28,IClothingSimulationFactoryClassProvider::FeatureName);
  pIVar8 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
  iVar5 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar11.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar5) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<IClothingSimulationFactoryClassProvider_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar11.Data == pFVar1) break;
    puVar3 = *(undefined8 **)FVar11.Data;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,&local_res18);
      pUVar9 = local_res18;
      if (local_res18 != (UClass *)0x0) {
        if ((local_res18->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(local_res18);
        }
        pUVar10 = (UClothingSimulationFactory *)(pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
        if (pUVar10 == (UClothingSimulationFactory *)0x0) {
LAB_14464b4a5:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                             ,0x93,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pUVar10 = (UClothingSimulationFactory *)(*pcVar4)();
            return pUVar10;
          }
          if (pUVar10 == (UClothingSimulationFactory *)0x0) goto LAB_14464b4e3;
        }
        else {
          pUVar9 = StaticClass();
          iVar2 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar9->_padding_)) goto LAB_14464b4a5;
        }
        cVar7 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10,param_1);
        if (cVar7 != '\0') goto LAB_14464b4ee;
      }
    }
LAB_14464b4e3:
    FVar11.Data = FVar11.Data + 8;
  }
  pUVar10 = (UClothingSimulationFactory *)0x0;
LAB_14464b4ee:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return pUVar10;
}

// GetDefaultClothingSimulationFactoryClass @ 14464b530

TSubclassOf<UClothingSimulationFactory> __cdecl
UClothingSimulationFactory::GetDefaultClothingSimulationFactoryClass(void)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  undefined8 *puVar2;
  TConsoleVariableData<FString> *pTVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  IModularFeatures *pIVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  TObjectPtr<UClass> in_RCX;
  longlong lVar11;
  ForAnyElementType FVar12;
  FName local_res8;
  UObject *local_res10;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  TArray<IClothingSimulationFactoryClassProvider_*,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  
  *(undefined8 *)in_RCX.field0_0x0 = 0;
  pTVar3 = ClothingSimulationFactoryConsoleVariables::CVarDefaultClothingSimulationFactoryClass.Ref;
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0x10;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = *(int *)((longlong)&pTVar3->ShadowedValue[0].Data.ArrayNum + lVar7);
  lVar11 = (longlong)local_50;
  _Src = *(void **)((longlong)&pTVar3->ShadowedValue[0].Data.AllocatorInstance.Data + lVar7);
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_50,0,&local_58,local_50,&local_4c);
    memcpy(local_58.Data,_Src,lVar11 * 2);
  }
  pIVar8 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar8 + 8))(pIVar8);
  pIVar8 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<IClothingSimulationFactoryClassProvider>
            (pIVar8,&local_48,IClothingSimulationFactoryClassProvider::FeatureName);
  pIVar8 = IModularFeatures::Get();
  (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
  iVar4 = local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar12.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar4) {
      `TCheckedPointerIterator<IClothingSimulationFactoryClassProvider_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (FVar12.Data == pFVar1) break;
    puVar2 = *(undefined8 **)FVar12.Data;
    if (((puVar2 != (undefined8 *)0x0) &&
        ((**(code **)*puVar2)(puVar2,&local_res10), pUVar10 = local_res10,
        local_res10 != (UObject *)0x0)) && (pUVar9 = StaticClass(), pUVar9 != (UClass *)0x0)) {
      iVar6 = (int)pUVar9->_padding_;
      if ((*(int *)&pUVar10[1].field_0x10 < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar10[1].field_0x8 + (longlong)iVar6 * 8) !=
          &pUVar9->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (local_res10 != (UObject *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_res10);
        }
        pUVar10 = local_res10;
        *(UObject **)in_RCX.field0_0x0 = local_res10;
        if ((local_res10 == (UObject *)0x0) || (pUVar9 = StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_14464b6de:
          pUVar10 = (UObject *)0x0;
        }
        else {
          iVar6 = (int)pUVar9->_padding_;
          if ((*(int *)&pUVar10[1].field_0x10 < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar10[1].field_0x8 + (longlong)iVar6 * 8)
              != &pUVar9->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          pUVar10 = local_res10;
          if (!bVar5) goto LAB_14464b6de;
        }
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18;
        local_res8.Number = *(uint *)&pUVar10->field_0x1c;
        ::FName::ToString(&local_res8,&local_38);
        iVar6 = local_38.Data.ArrayNum;
        if (iVar6 == local_50) {
          if (iVar6 < 2) {
            bVar5 = true;
          }
          else {
            iVar6 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_38.Data.AllocatorInstance.Data,
                               (wchar_t *)local_58.Data);
            bVar5 = iVar6 == 0;
          }
        }
        else {
          bVar5 = iVar6 + local_50 == 1;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (bVar5) break;
      }
    }
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return (TSubclassOf<UClothingSimulationFactory>)in_RCX.field0_0x0;
}

// GetPrivateStaticClass @ 14464bba0

UClass * __cdecl UClothingSimulationFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationFactory",
               &Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton,
               StaticRegisterNativesUClothingSimulationFactory,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UClothingSimulationFactory>,
               InternalVTableHelperCtorCaller<UClothingSimulationFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothingSimulationFactory.InnerSingleton;
}

// GetWeightMapTargetEnum @ 14464be10

UEnum * __thiscall
UClothingSimulationFactory::GetWeightMapTargetEnum(UClothingSimulationFactory *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ClothingSystemRuntimeInterface\\Public\\ClothingSimulationFactory.h"
             ,0x81,L"Pure virtual not implemented (%s)");
  return (UEnum *)0x0;
}

// StaticRegisterNativesUClothingSimulationFactory @ 14464c7e0

void __cdecl UClothingSimulationFactory::StaticRegisterNativesUClothingSimulationFactory(void)

{
  return;
}

// SupportsAsset @ 14464c840

bool __thiscall
UClothingSimulationFactory::SupportsAsset
          (UClothingSimulationFactory *this,UClothingAssetBase *param_1)

{
  return false;
}

// SupportsAsset @ 14464c850

bool __thiscall
UClothingSimulationFactory::SupportsAsset
          (UClothingSimulationFactory *this,UClothingAssetBase *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014464c853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2d8))();
  return (bool)uVar1;
}

// SupportsRuntimeInteraction @ 14464c860

bool __thiscall
UClothingSimulationFactory::SupportsRuntimeInteraction(UClothingSimulationFactory *this)

{
  return false;
}

// SupportsRuntimeInteraction @ 14464c870

bool __thiscall
UClothingSimulationFactory::SupportsRuntimeInteraction(UClothingSimulationFactory *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014464c873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2e0))();
  return (bool)uVar1;
}

// operator() @ 1504c2240

bool __thiscall
`UClothingSimulationFactory::DestroySimulation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4891278034230837326>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4891278034230837326>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_UClothingSimulationFactory::DestroySimulation(IClothingSimulationInterface*___ptr64)const___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

