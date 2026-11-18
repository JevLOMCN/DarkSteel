// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146f0fef0

UClass * __cdecl UEnvQueryNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryNode",
               &Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton,
               StaticRegisterNativesUEnvQueryNode,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryNode>,
               InternalVTableHelperCtorCaller<UEnvQueryNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton;
}

// UEnvQueryNode @ 146f2c920

UEnvQueryNode * __thiscall UEnvQueryNode::UEnvQueryNode(UEnvQueryNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  return this;
}

// UEnvQueryNode @ 146f2c950

UEnvQueryNode * __thiscall
UEnvQueryNode::UEnvQueryNode(UEnvQueryNode *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  return this;
}

// ~UEnvQueryNode @ 146f2f030

void __thiscall UEnvQueryNode::~UEnvQueryNode(UEnvQueryNode *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryNode__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDescriptionDetails @ 146f52d40

FText * __thiscall
UEnvQueryNode::GetDescriptionDetails(UEnvQueryNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54a40

FText * __thiscall
UEnvQueryNode::GetDescriptionTitle(UEnvQueryNode *this,FText *__return_storage_ptr__)

{
  UEnvQueryTypes::GetShortTypeName(__return_storage_ptr__,(UObject *)this);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f58df0

UClass * __cdecl UEnvQueryNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryNode",
               &Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton,
               StaticRegisterNativesUEnvQueryNode,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnvQueryNode>,
               InternalVTableHelperCtorCaller<UEnvQueryNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryNode.InnerSingleton;
}

// IsCurrentlyRunningAsync @ 146f5b970

bool __thiscall UEnvQueryNode::IsCurrentlyRunningAsync(UEnvQueryNode *this)

{
  return false;
}

// StaticRegisterNativesUEnvQueryNode @ 146f76e70

void __cdecl UEnvQueryNode::StaticRegisterNativesUEnvQueryNode(void)

{
  return;
}

// UpdateNodeVersion @ 146f7cbc0

void __thiscall UEnvQueryNode::UpdateNodeVersion(UEnvQueryNode *this)

{
  this->VerNum = 0;
  return;
}

