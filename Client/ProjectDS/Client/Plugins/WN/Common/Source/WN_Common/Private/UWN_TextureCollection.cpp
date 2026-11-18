// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 7

// StaticClass @ 149483320

UClass * __cdecl UWN_TextureCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_TextureCollection",
               &Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton,
               StaticRegisterNativesUWN_TextureCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_TextureCollection>,
               InternalVTableHelperCtorCaller<UWN_TextureCollection>,local_res8,
               UTextureCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton;
}

// UWN_TextureCollection @ 14948eec0

UWN_TextureCollection * __thiscall
UWN_TextureCollection::UWN_TextureCollection(UWN_TextureCollection *this,FVTableHelper *param_1)

{
  UTextureCollection::UTextureCollection((UTextureCollection *)this,param_1);
  *(undefined ***)this = &___7UWN_TextureCollection__6B_;
  return this;
}

// UWN_TextureCollection @ 14948eef0

UWN_TextureCollection * __thiscall
UWN_TextureCollection::UWN_TextureCollection
          (UWN_TextureCollection *this,FObjectInitializer *param_1)

{
  UTextureCollection::UTextureCollection((UTextureCollection *)this,param_1);
  *(undefined ***)this = &___7UWN_TextureCollection__6B_;
  return this;
}

// ~UWN_TextureCollection @ 149490c00

void __thiscall UWN_TextureCollection::~UWN_TextureCollection(UWN_TextureCollection *this)

{
  *(undefined ***)this = &___7UWN_TextureCollection__6B_;
  UTextureCollection::~UTextureCollection((UTextureCollection *)this);
  return;
}

// GetPrivateStaticClass @ 1494a2200

UClass * __cdecl UWN_TextureCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_TextureCollection",
               &Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton,
               StaticRegisterNativesUWN_TextureCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_TextureCollection>,
               InternalVTableHelperCtorCaller<UWN_TextureCollection>,local_res8,
               UTextureCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton;
}

// PostLoad @ 1494a92c0

void __thiscall UWN_TextureCollection::PostLoad(UWN_TextureCollection *this)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [8];
  
  UObject::PostLoad((UObject *)this);
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    puVar4 = *(undefined8 **)&this->field_0x30;
    iVar2 = *(int *)&this->field_0x38;
    puVar1 = puVar4 + iVar2;
    while( true ) {
      if (*(int *)&this->field_0x38 != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar4 == puVar1) break;
      if ((UObject *)*puVar4 != (UObject *)0x0) {
        UObject::ConditionalPostLoad((UObject *)*puVar4);
      }
      puVar4 = puVar4 + 1;
    }
    UTextureCollection::UpdateResource((UTextureCollection *)this);
  }
  return;
}

// StaticRegisterNativesUWN_TextureCollection @ 1494ae370

void __cdecl UWN_TextureCollection::StaticRegisterNativesUWN_TextureCollection(void)

{
  return;
}

