// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 8

// StaticClass @ 1496cc420

UClass * __cdecl USceneComponentToolTargetFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponentToolTargetFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneComponentToolTargetFactory",
               &Z_Registration_Info_UClass_USceneComponentToolTargetFactory.InnerSingleton,
               StaticRegisterNativesUSceneComponentToolTargetFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneComponentToolTargetFactory>,
               InternalVTableHelperCtorCaller<USceneComponentToolTargetFactory>,local_res8,
               UToolTargetFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponentToolTargetFactory.InnerSingleton;
}

// USceneComponentToolTargetFactory @ 1496d3cb0

USceneComponentToolTargetFactory * __thiscall
USceneComponentToolTargetFactory::USceneComponentToolTargetFactory
          (USceneComponentToolTargetFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USceneComponentToolTargetFactory__6B_;
  return this;
}

// USceneComponentToolTargetFactory @ 1496d3ce0

USceneComponentToolTargetFactory * __thiscall
USceneComponentToolTargetFactory::USceneComponentToolTargetFactory
          (USceneComponentToolTargetFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USceneComponentToolTargetFactory__6B_;
  return this;
}

// ~USceneComponentToolTargetFactory @ 1496d4ac0

void __thiscall
USceneComponentToolTargetFactory::~USceneComponentToolTargetFactory
          (USceneComponentToolTargetFactory *this)

{
  *(undefined ***)this = &___7UToolTargetFactory__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildTarget @ 1496d7fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UToolTarget * __thiscall
USceneComponentToolTargetFactory::BuildTarget
          (USceneComponentToolTargetFactory *this,UObject *param_1,
          FToolTargetTypeRequirements *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UToolTarget *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_d8 [32];
  UObject *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = USceneComponentToolTarget::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar5);
  local_98._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar7 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (param_1 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_1496d8084;
  }
  param_1 = (UObject *)0x0;
LAB_1496d8084:
  local_a8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar4[1].field_0x8,(FObjectPtr)local_a8);
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pUVar4[1].field_0x8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2732969724320153644>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ToolTargets\\SceneComponentToolTarget.cpp"
                       ,0x2c,"Component.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UToolTarget *)(*pcVar2)();
      return pUVar6;
    }
  }
  return (UToolTarget *)pUVar4;
}

// CanBuildTarget @ 1496d8a00

bool __thiscall
USceneComponentToolTargetFactory::CanBuildTarget
          (USceneComponentToolTargetFactory *this,UObject *param_1,
          FToolTargetTypeRequirements *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FUObjectItem *pFVar4;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
      pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
      if (((ulonglong)((pFVar4->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0) {
        bVar2 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1);
        if (bVar2) {
          pUVar3 = USceneComponentToolTarget::StaticClass();
          bVar2 = FToolTargetTypeRequirements::AreSatisfiedBy(param_2,pUVar3);
          if (bVar2) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 1496ddd20

UClass * __cdecl USceneComponentToolTargetFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USceneComponentToolTargetFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SceneComponentToolTargetFactory",
               &Z_Registration_Info_UClass_USceneComponentToolTargetFactory.InnerSingleton,
               StaticRegisterNativesUSceneComponentToolTargetFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USceneComponentToolTargetFactory>,
               InternalVTableHelperCtorCaller<USceneComponentToolTargetFactory>,local_res8,
               UToolTargetFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USceneComponentToolTargetFactory.InnerSingleton;
}

// StaticRegisterNativesUSceneComponentToolTargetFactory @ 1496e6780

void __cdecl
USceneComponentToolTargetFactory::StaticRegisterNativesUSceneComponentToolTargetFactory(void)

{
  return;
}

