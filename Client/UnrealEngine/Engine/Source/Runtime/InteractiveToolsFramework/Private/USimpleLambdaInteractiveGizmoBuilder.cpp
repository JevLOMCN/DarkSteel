// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 7

// StaticClass @ 14966f070

UClass * __cdecl USimpleLambdaInteractiveGizmoBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SimpleLambdaInteractiveGizmoBuilder",
               &Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUSimpleLambdaInteractiveGizmoBuilder,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USimpleLambdaInteractiveGizmoBuilder>,
               InternalVTableHelperCtorCaller<USimpleLambdaInteractiveGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton;
}

// USimpleLambdaInteractiveGizmoBuilder @ 149688220

USimpleLambdaInteractiveGizmoBuilder * __thiscall
USimpleLambdaInteractiveGizmoBuilder::USimpleLambdaInteractiveGizmoBuilder
          (USimpleLambdaInteractiveGizmoBuilder *this,FVTableHelper *param_1)

{
  UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this,param_1);
  this->_padding_ = (longlong)&___7USimpleLambdaInteractiveGizmoBuilder__6B_;
  *(undefined8 *)&this->BuilderFunc = 0;
  *(undefined8 *)&(this->BuilderFunc).field_0x28 = 0;
  return this;
}

// USimpleLambdaInteractiveGizmoBuilder @ 149688260

USimpleLambdaInteractiveGizmoBuilder * __thiscall
USimpleLambdaInteractiveGizmoBuilder::USimpleLambdaInteractiveGizmoBuilder
          (USimpleLambdaInteractiveGizmoBuilder *this,FObjectInitializer *param_1)

{
  UInteractiveGizmoBuilder::UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this,param_1);
  this->_padding_ = (longlong)&___7USimpleLambdaInteractiveGizmoBuilder__6B_;
  *(undefined8 *)&this->BuilderFunc = 0;
  *(undefined8 *)&(this->BuilderFunc).field_0x28 = 0;
  return this;
}

// ~USimpleLambdaInteractiveGizmoBuilder @ 14968a9b0

void __thiscall
USimpleLambdaInteractiveGizmoBuilder::~USimpleLambdaInteractiveGizmoBuilder
          (USimpleLambdaInteractiveGizmoBuilder *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7USimpleLambdaInteractiveGizmoBuilder__6B_;
  if (*(longlong *)&this->BuilderFunc != 0) {
    plVar1 = *(longlong **)&(this->BuilderFunc).field_0x28;
    plVar2 = (longlong *)&(this->BuilderFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  UInteractiveGizmoBuilder::~UInteractiveGizmoBuilder((UInteractiveGizmoBuilder *)this);
  return;
}

// BuildGizmo @ 149694870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UInteractiveGizmo * __thiscall
USimpleLambdaInteractiveGizmoBuilder::BuildGizmo
          (USimpleLambdaInteractiveGizmoBuilder *this,FToolBuilderState *param_1)

{
  longlong *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  UInteractiveGizmo *pUVar3;
  longlong *plVar4;
  
  if (*(void **)&this->BuilderFunc != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->BuilderFunc);
    plVar1 = *(longlong **)&(this->BuilderFunc).field_0x28;
    UNRECOVERED_JUMPTABLE = *(code **)&this->BuilderFunc;
    plVar4 = (longlong *)&(this->BuilderFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001496948c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (UInteractiveGizmo *)(*UNRECOVERED_JUMPTABLE)(uVar2,param_1);
    return pUVar3;
  }
  return (UInteractiveGizmo *)0x0;
}

// GetPrivateStaticClass @ 1496a7520

UClass * __cdecl USimpleLambdaInteractiveGizmoBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SimpleLambdaInteractiveGizmoBuilder",
               &Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton,
               StaticRegisterNativesUSimpleLambdaInteractiveGizmoBuilder,0x60,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USimpleLambdaInteractiveGizmoBuilder>,
               InternalVTableHelperCtorCaller<USimpleLambdaInteractiveGizmoBuilder>,local_res8,
               UInteractiveGizmoBuilder::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleLambdaInteractiveGizmoBuilder.InnerSingleton;
}

// StaticRegisterNativesUSimpleLambdaInteractiveGizmoBuilder @ 1496c2d50

void __cdecl
USimpleLambdaInteractiveGizmoBuilder::StaticRegisterNativesUSimpleLambdaInteractiveGizmoBuilder
          (void)

{
  return;
}

