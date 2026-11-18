// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 3

// StaticClass @ 145eecee0

UClass * __cdecl AISMPartitionActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AISMPartitionActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ISMPartitionActor",
               &Z_Registration_Info_UClass_AISMPartitionActor.InnerSingleton,
               StaticRegisterNativesAISMPartitionActor,0x2d0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<AISMPartitionActor>,
               InternalVTableHelperCtorCaller<AISMPartitionActor>,aFStackX_8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AISMPartitionActor.InnerSingleton;
}

// _getUObject @ 145eef2f0

UObject * __thiscall AISMPartitionActor::_getUObject(AISMPartitionActor *this)

{
  return (UObject *)&this[-1].field_0x10;
}

// _getUObject`adjustor{8}' @ 145eef300

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   AISMPartitionActor::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall AISMPartitionActor::_getUObject_adjustor_8__(AISMPartitionActor *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((AISMPartitionActor *)&this[-1].field_0x2c8);
  return (UObject *)pUVar1;
}

