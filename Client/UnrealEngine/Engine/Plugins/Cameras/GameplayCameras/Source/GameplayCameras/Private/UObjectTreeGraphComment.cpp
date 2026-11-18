// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d571720

UClass * __cdecl UObjectTreeGraphComment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphComment",
               &Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton,
               StaticRegisterNativesUObjectTreeGraphComment,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectTreeGraphComment>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphComment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton;
}

// UObjectTreeGraphComment @ 14d590030

UObjectTreeGraphComment * __thiscall
UObjectTreeGraphComment::UObjectTreeGraphComment
          (UObjectTreeGraphComment *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// UObjectTreeGraphComment @ 14d590070

UObjectTreeGraphComment * __thiscall
UObjectTreeGraphComment::UObjectTreeGraphComment
          (UObjectTreeGraphComment *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IObjectTreeGraphObject__;
  return this;
}

// ~UObjectTreeGraphComment @ 14d591ec0

void __thiscall UObjectTreeGraphComment::~UObjectTreeGraphComment(UObjectTreeGraphComment *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7IObjectTreeGraphObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14d5aa250

UClass * __cdecl UObjectTreeGraphComment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"ObjectTreeGraphComment",
               &Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton,
               StaticRegisterNativesUObjectTreeGraphComment,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectTreeGraphComment>,
               InternalVTableHelperCtorCaller<UObjectTreeGraphComment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTreeGraphComment.InnerSingleton;
}

// StaticRegisterNativesUObjectTreeGraphComment @ 14d5d0ea0

void __cdecl UObjectTreeGraphComment::StaticRegisterNativesUObjectTreeGraphComment(void)

{
  return;
}

// _getUObject @ 14d5d75a0

UObject * __thiscall UObjectTreeGraphComment::_getUObject(UObjectTreeGraphComment *this)

{
  return (UObject *)&this[-1].field_0x8;
}

