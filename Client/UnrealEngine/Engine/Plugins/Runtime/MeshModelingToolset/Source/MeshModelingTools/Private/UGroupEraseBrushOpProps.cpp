// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 8

// StaticClass @ 14cbd0340

UClass * __cdecl UGroupEraseBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupEraseBrushOpProps",
               &Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton,
               StaticRegisterNativesUGroupEraseBrushOpProps,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupEraseBrushOpProps>,
               InternalVTableHelperCtorCaller<UGroupEraseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cbd3390

int __cdecl UGroupEraseBrushOpProps::<lambda_25_>::<lambda_invoker_cdecl>(void)

{
  return -1;
}

// UGroupEraseBrushOpProps @ 14cbdd760

UGroupEraseBrushOpProps * __thiscall
UGroupEraseBrushOpProps::UGroupEraseBrushOpProps
          (UGroupEraseBrushOpProps *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UGroupEraseBrushOpProps__6B_;
  this->Group = 0;
  this->bOnlyEraseCurrent = false;
  *(undefined8 *)&this->GetCurrentGroupLambda = 0;
  *(undefined8 *)&(this->GetCurrentGroupLambda).field_0x28 = 0;
  *(undefined ***)&(this->GetCurrentGroupLambda).field_0x10 =
       &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetCurrentGroupLambda).field_0x18;
  *(code **)puVar1 = <lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetCurrentGroupLambda =
         UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
  }
  return this;
}

// UGroupEraseBrushOpProps @ 14cbdd7e0

UGroupEraseBrushOpProps * __thiscall
UGroupEraseBrushOpProps::UGroupEraseBrushOpProps
          (UGroupEraseBrushOpProps *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UGroupEraseBrushOpProps__6B_;
  this->Group = 0;
  this->bOnlyEraseCurrent = false;
  *(undefined8 *)&this->GetCurrentGroupLambda = 0;
  *(undefined8 *)&(this->GetCurrentGroupLambda).field_0x28 = 0;
  *(undefined ***)&(this->GetCurrentGroupLambda).field_0x10 =
       &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetCurrentGroupLambda).field_0x18;
  *(code **)puVar1 = <lambda_25_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetCurrentGroupLambda =
         UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
  }
  return this;
}

// ~UGroupEraseBrushOpProps @ 14cbe0390

void __thiscall UGroupEraseBrushOpProps::~UGroupEraseBrushOpProps(UGroupEraseBrushOpProps *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7UGroupEraseBrushOpProps__6B_;
  if (*(longlong *)&this->GetCurrentGroupLambda != 0) {
    plVar1 = *(longlong **)&(this->GetCurrentGroupLambda).field_0x28;
    plVar2 = (longlong *)&(this->GetCurrentGroupLambda).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetGroup @ 14cbee5a0

int __thiscall UGroupEraseBrushOpProps::GetGroup(UGroupEraseBrushOpProps *this)

{
  return this->Group;
}

// GetPrivateStaticClass @ 14cbefbb0

UClass * __cdecl UGroupEraseBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupEraseBrushOpProps",
               &Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton,
               StaticRegisterNativesUGroupEraseBrushOpProps,0xf0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGroupEraseBrushOpProps>,
               InternalVTableHelperCtorCaller<UGroupEraseBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupEraseBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUGroupEraseBrushOpProps @ 14cbf6b90

void __cdecl UGroupEraseBrushOpProps::StaticRegisterNativesUGroupEraseBrushOpProps(void)

{
  return;
}

