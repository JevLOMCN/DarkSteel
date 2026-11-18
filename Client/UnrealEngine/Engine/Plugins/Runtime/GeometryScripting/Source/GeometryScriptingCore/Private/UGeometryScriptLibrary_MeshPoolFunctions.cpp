// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 10

// StaticClass @ 14ce17110

UClass * __cdecl UGeometryScriptLibrary_MeshPoolFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPoolFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshPoolFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPoolFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPoolFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshPoolFunctions @ 14ce26940

UGeometryScriptLibrary_MeshPoolFunctions * __thiscall
UGeometryScriptLibrary_MeshPoolFunctions::UGeometryScriptLibrary_MeshPoolFunctions
          (UGeometryScriptLibrary_MeshPoolFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPoolFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshPoolFunctions @ 14ce26970

UGeometryScriptLibrary_MeshPoolFunctions * __thiscall
UGeometryScriptLibrary_MeshPoolFunctions::UGeometryScriptLibrary_MeshPoolFunctions
          (UGeometryScriptLibrary_MeshPoolFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPoolFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshPoolFunctions @ 14ce27350

void __thiscall
UGeometryScriptLibrary_MeshPoolFunctions::~UGeometryScriptLibrary_MeshPoolFunctions
          (UGeometryScriptLibrary_MeshPoolFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPoolFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DiscardGlobalMeshPool @ 14ce68600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UGeometryScriptLibrary_MeshPoolFunctions::DiscardGlobalMeshPool(void)

{
  FUObjectItem *this;
  
  UDynamicMeshPool::FreeAllMeshes(MeshPool);
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&MeshPool->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this,RootSet);
  MeshPool = (UDynamicMeshPool *)0x0;
  return;
}

// GetGlobalMeshPool @ 14ce6ae50

UDynamicMeshPool * __cdecl UGeometryScriptLibrary_MeshPoolFunctions::GetGlobalMeshPool(void)

{
  UDynamicMeshPool *pUVar1;
  
  pUVar1 = UE::Private::MeshPoolHelper::GlobalMeshPoolHelper(false);
  return pUVar1;
}

// GetPrivateStaticClass @ 14ce6cf30

UClass * __cdecl UGeometryScriptLibrary_MeshPoolFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPoolFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshPoolFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPoolFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPoolFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPoolFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshPoolFunctions @ 14ce74f80

void __cdecl
UGeometryScriptLibrary_MeshPoolFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshPoolFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshPoolFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDiscardGlobalMeshPool @ 14ce8e590

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshPoolFunctions::execDiscardGlobalMeshPool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMeshPool *this;
  FUObjectItem *this_00;
  
  this = MeshPool;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UDynamicMeshPool::FreeAllMeshes(this);
  this_00 = FUObjectArray::IndexToObject
                      (&GUObjectArray,*(int *)((longlong)&MeshPool->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this_00,RootSet);
  MeshPool = (UDynamicMeshPool *)0x0;
  return;
}

// execGetGlobalMeshPool @ 14ce90e90

void __cdecl
UGeometryScriptLibrary_MeshPoolFunctions::execGetGlobalMeshPool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMeshPool *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = UE::Private::MeshPoolHelper::GlobalMeshPoolHelper(false);
  *(UDynamicMeshPool **)param_3 = pUVar1;
  return;
}

