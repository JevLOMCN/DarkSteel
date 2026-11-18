// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146ead840

UClass * __cdecl UBTComposite_Selector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTComposite_Selector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTComposite_Selector",
               &Z_Registration_Info_UClass_UBTComposite_Selector.InnerSingleton,
               StaticRegisterNativesUBTComposite_Selector,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTComposite_Selector>,
               InternalVTableHelperCtorCaller<UBTComposite_Selector>,local_res8,
               UBTCompositeNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTComposite_Selector.InnerSingleton;
}

// UBTComposite_Selector @ 146ec5130

UBTComposite_Selector * __thiscall
UBTComposite_Selector::UBTComposite_Selector(UBTComposite_Selector *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTComposite_Selector @ 146ec5190

UBTComposite_Selector * __thiscall
UBTComposite_Selector::UBTComposite_Selector
          (UBTComposite_Selector *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FString local_18;
  
  UBTCompositeNode::UBTCompositeNode((UBTCompositeNode *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"Selector");
  puVar1 = &this->field_0x30;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x38 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x3c = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UBTComposite_Selector @ 146ecc990

void __thiscall UBTComposite_Selector::~UBTComposite_Selector(UBTComposite_Selector *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UBTCompositeNode::~UBTCompositeNode((UBTCompositeNode *)this);
  return;
}

// GetNextChildHandler @ 146ee6600

int __thiscall
UBTComposite_Selector::GetNextChildHandler
          (UBTComposite_Selector *this,FBehaviorTreeSearchData *param_1,int param_2,Type param_3)

{
  int iVar1;
  
  if (param_2 == -1) {
    return 0;
  }
  iVar1 = -2;
  if (param_3 == Failed) {
    iVar1 = -2;
    if (param_2 + 1 < *(int *)&this->field_0x60) {
      iVar1 = param_2 + 1;
    }
  }
  return iVar1;
}

// GetPrivateStaticClass @ 146ee6eb0

UClass * __cdecl UBTComposite_Selector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTComposite_Selector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTComposite_Selector",
               &Z_Registration_Info_UClass_UBTComposite_Selector.InnerSingleton,
               StaticRegisterNativesUBTComposite_Selector,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTComposite_Selector>,
               InternalVTableHelperCtorCaller<UBTComposite_Selector>,local_res8,
               UBTCompositeNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTComposite_Selector.InnerSingleton;
}

// StaticRegisterNativesUBTComposite_Selector @ 146f00ae0

void __cdecl UBTComposite_Selector::StaticRegisterNativesUBTComposite_Selector(void)

{
  return;
}

