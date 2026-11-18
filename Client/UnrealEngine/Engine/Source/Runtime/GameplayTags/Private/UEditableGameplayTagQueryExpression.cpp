// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// StaticClass @ 146ac0660

UClass * __cdecl UEditableGameplayTagQueryExpression::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton,
               StaticRegisterNativesUEditableGameplayTagQueryExpression,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton;
}

// UEditableGameplayTagQueryExpression @ 146acc4d0

UEditableGameplayTagQueryExpression * __thiscall
UEditableGameplayTagQueryExpression::UEditableGameplayTagQueryExpression
          (UEditableGameplayTagQueryExpression *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEditableGameplayTagQueryExpression__6B_;
  return this;
}

// UEditableGameplayTagQueryExpression @ 146acc500

UEditableGameplayTagQueryExpression * __thiscall
UEditableGameplayTagQueryExpression::UEditableGameplayTagQueryExpression
          (UEditableGameplayTagQueryExpression *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEditableGameplayTagQueryExpression__6B_;
  return this;
}

// ~UEditableGameplayTagQueryExpression @ 146acd910

void __thiscall
UEditableGameplayTagQueryExpression::~UEditableGameplayTagQueryExpression
          (UEditableGameplayTagQueryExpression *this)

{
  *(undefined ***)this = &___7UEditableGameplayTagQueryExpression__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146adee50

UClass * __cdecl UEditableGameplayTagQueryExpression::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression",
               &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton,
               StaticRegisterNativesUEditableGameplayTagQueryExpression,0x28,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditableGameplayTagQueryExpression>,
               InternalVTableHelperCtorCaller<UEditableGameplayTagQueryExpression>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.InnerSingleton;
}

// StaticRegisterNativesUEditableGameplayTagQueryExpression @ 146aeda90

void __cdecl
UEditableGameplayTagQueryExpression::StaticRegisterNativesUEditableGameplayTagQueryExpression(void)

{
  return;
}

