// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticClass @ 1422c8830

UClass * __cdecl UTestPropertyPathFunctionsClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestPropertyPathFunctionsClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TestPropertyPathFunctionsClass",
               &Z_Registration_Info_UClass_UTestPropertyPathFunctionsClass.InnerSingleton,
               StaticRegisterNativesUTestPropertyPathFunctionsClass,0x8c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestPropertyPathFunctionsClass>,
               InternalVTableHelperCtorCaller<UTestPropertyPathFunctionsClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestPropertyPathFunctionsClass.InnerSingleton;
}

// UTestPropertyPathFunctionsClass @ 1422d01e0

UTestPropertyPathFunctionsClass * __thiscall
UTestPropertyPathFunctionsClass::UTestPropertyPathFunctionsClass
          (UTestPropertyPathFunctionsClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTestPropertyPathFunctionsClass__6B_;
  this->StructStaticArray[0].Int32 = 0;
  this->StructStaticArray[0].Unused = -1;
  this->StructStaticArray[0].Int32StaticArray[0] = 0;
  this->StructStaticArray[0].Int32StaticArray[1] = 0;
  this->StructStaticArray[0].Int32StaticArray[2] = 0;
  this->StructStaticArray[0].Int32StaticArray[3] = 0;
  this->StructStaticArray[0].Int32StaticArray[4] = 0;
  this->StructStaticArray[0].Int32StaticArray[5] = 0;
  this->StructStaticArray[0].Int32StaticArray[6] = 0;
  this->StructStaticArray[0].Int32StaticArray[7] = 0;
  this->StructStaticArray[0].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[0].Int32Array.ArrayNum = 0;
  this->StructStaticArray[0].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[0].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[0].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x48 = 0;
  this->StructStaticArray[0].Int32Optional.bIsSet = false;
  this->StructStaticArray[1].Unused = -1;
  this->StructStaticArray[1].Int32 = 0;
  this->StructStaticArray[1].Int32StaticArray[0] = 0;
  this->StructStaticArray[1].Int32StaticArray[1] = 0;
  this->StructStaticArray[1].Int32StaticArray[2] = 0;
  this->StructStaticArray[1].Int32StaticArray[3] = 0;
  this->StructStaticArray[1].Int32StaticArray[4] = 0;
  this->StructStaticArray[1].Int32StaticArray[5] = 0;
  this->StructStaticArray[1].Int32StaticArray[6] = 0;
  this->StructStaticArray[1].Int32StaticArray[7] = 0;
  this->StructStaticArray[1].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[1].Int32Array.ArrayNum = 0;
  this->StructStaticArray[1].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[1].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[1].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x48 = 0;
  this->StructStaticArray[1].Int32Optional.bIsSet = false;
  this->StructStaticArray[2].Unused = -1;
  this->StructStaticArray[2].Int32 = 0;
  this->StructStaticArray[2].Int32StaticArray[0] = 0;
  this->StructStaticArray[2].Int32StaticArray[1] = 0;
  this->StructStaticArray[2].Int32StaticArray[2] = 0;
  this->StructStaticArray[2].Int32StaticArray[3] = 0;
  this->StructStaticArray[2].Int32StaticArray[4] = 0;
  this->StructStaticArray[2].Int32StaticArray[5] = 0;
  this->StructStaticArray[2].Int32StaticArray[6] = 0;
  this->StructStaticArray[2].Int32StaticArray[7] = 0;
  this->StructStaticArray[2].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[2].Int32Array.ArrayNum = 0;
  this->StructStaticArray[2].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[2].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[2].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x48 = 0;
  this->StructStaticArray[2].Int32Optional.bIsSet = false;
  this->StructStaticArray[3].Unused = -1;
  this->StructStaticArray[3].Int32 = 0;
  this->StructStaticArray[3].Int32StaticArray[0] = 0;
  this->StructStaticArray[3].Int32StaticArray[1] = 0;
  this->StructStaticArray[3].Int32StaticArray[2] = 0;
  this->StructStaticArray[3].Int32StaticArray[3] = 0;
  this->StructStaticArray[3].Int32StaticArray[4] = 0;
  this->StructStaticArray[3].Int32StaticArray[5] = 0;
  this->StructStaticArray[3].Int32StaticArray[6] = 0;
  this->StructStaticArray[3].Int32StaticArray[7] = 0;
  this->StructStaticArray[3].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[3].Int32Array.ArrayNum = 0;
  this->StructStaticArray[3].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[3].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[3].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x48 = 0;
  this->StructStaticArray[3].Int32Optional.bIsSet = false;
  this->StructStaticArray[4].Unused = -1;
  this->StructStaticArray[4].Int32 = 0;
  this->StructStaticArray[4].Int32StaticArray[0] = 0;
  this->StructStaticArray[4].Int32StaticArray[1] = 0;
  this->StructStaticArray[4].Int32StaticArray[2] = 0;
  this->StructStaticArray[4].Int32StaticArray[3] = 0;
  this->StructStaticArray[4].Int32StaticArray[4] = 0;
  this->StructStaticArray[4].Int32StaticArray[5] = 0;
  this->StructStaticArray[4].Int32StaticArray[6] = 0;
  this->StructStaticArray[4].Int32StaticArray[7] = 0;
  this->StructStaticArray[4].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[4].Int32Array.ArrayNum = 0;
  this->StructStaticArray[4].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[4].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[4].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x48 = 0;
  this->StructStaticArray[4].Int32Optional.bIsSet = false;
  this->StructStaticArray[5].Unused = -1;
  this->StructStaticArray[5].Int32 = 0;
  this->StructStaticArray[5].Int32StaticArray[0] = 0;
  this->StructStaticArray[5].Int32StaticArray[1] = 0;
  this->StructStaticArray[5].Int32StaticArray[2] = 0;
  this->StructStaticArray[5].Int32StaticArray[3] = 0;
  this->StructStaticArray[5].Int32StaticArray[4] = 0;
  this->StructStaticArray[5].Int32StaticArray[5] = 0;
  this->StructStaticArray[5].Int32StaticArray[6] = 0;
  this->StructStaticArray[5].Int32StaticArray[7] = 0;
  this->StructStaticArray[5].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[5].Int32Array.ArrayNum = 0;
  this->StructStaticArray[5].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[5].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[5].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x48 = 0;
  this->StructStaticArray[5].Int32Optional.bIsSet = false;
  this->StructStaticArray[6].Unused = -1;
  this->StructStaticArray[6].Int32 = 0;
  this->StructStaticArray[6].Int32StaticArray[0] = 0;
  this->StructStaticArray[6].Int32StaticArray[1] = 0;
  this->StructStaticArray[6].Int32StaticArray[2] = 0;
  this->StructStaticArray[6].Int32StaticArray[3] = 0;
  this->StructStaticArray[6].Int32StaticArray[4] = 0;
  this->StructStaticArray[6].Int32StaticArray[5] = 0;
  this->StructStaticArray[6].Int32StaticArray[6] = 0;
  this->StructStaticArray[6].Int32StaticArray[7] = 0;
  this->StructStaticArray[6].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[6].Int32Array.ArrayNum = 0;
  this->StructStaticArray[6].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[6].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[6].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x48 = 0;
  this->StructStaticArray[6].Int32Optional.bIsSet = false;
  this->StructStaticArray[7].Unused = -1;
  this->StructStaticArray[7].Int32 = 0;
  this->StructStaticArray[7].Int32StaticArray[0] = 0;
  this->StructStaticArray[7].Int32StaticArray[1] = 0;
  this->StructStaticArray[7].Int32StaticArray[2] = 0;
  this->StructStaticArray[7].Int32StaticArray[3] = 0;
  this->StructStaticArray[7].Int32StaticArray[4] = 0;
  this->StructStaticArray[7].Int32StaticArray[5] = 0;
  this->StructStaticArray[7].Int32StaticArray[6] = 0;
  this->StructStaticArray[7].Int32StaticArray[7] = 0;
  this->StructStaticArray[7].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[7].Int32Array.ArrayNum = 0;
  this->StructStaticArray[7].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[7].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[7].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x48 = 0;
  this->StructStaticArray[7].Int32Optional.bIsSet = false;
  (this->StructArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StructArray).ArrayNum = 0;
  (this->StructArray).ArrayMax = 0;
  *(undefined8 *)&(this->StructSet).Elements = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x30 = 0xffffffff;
  (this->StructSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StructSet).HashSize = 0;
  *(undefined8 *)&this->StructMap = 0;
  *(undefined8 *)&(this->StructMap).field_0x8 = 0;
  *(undefined8 *)&(this->StructMap).field_0x20 = 0;
  *(undefined4 *)&(this->StructMap).field_0x28 = 0;
  *(undefined4 *)&(this->StructMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StructMap).field_0x34 = 0;
  *(undefined4 *)&(this->StructMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StructMap).field_0x40 = 0;
  *(undefined4 *)&(this->StructMap).field_0x48 = 0;
  (this->StructOptional).bIsSet = false;
  return this;
}

// UTestPropertyPathFunctionsClass @ 1422d0840

UTestPropertyPathFunctionsClass * __thiscall
UTestPropertyPathFunctionsClass::UTestPropertyPathFunctionsClass
          (UTestPropertyPathFunctionsClass *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UTestPropertyPathFunctionsClass__6B_;
  this->StructStaticArray[0].Int32 = 0;
  this->StructStaticArray[0].Unused = -1;
  this->StructStaticArray[0].Int32StaticArray[0] = 0;
  this->StructStaticArray[0].Int32StaticArray[1] = 0;
  this->StructStaticArray[0].Int32StaticArray[2] = 0;
  this->StructStaticArray[0].Int32StaticArray[3] = 0;
  this->StructStaticArray[0].Int32StaticArray[4] = 0;
  this->StructStaticArray[0].Int32StaticArray[5] = 0;
  this->StructStaticArray[0].Int32StaticArray[6] = 0;
  this->StructStaticArray[0].Int32StaticArray[7] = 0;
  this->StructStaticArray[0].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[0].Int32Array.ArrayNum = 0;
  this->StructStaticArray[0].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[0].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[0].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[0].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[0].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x48 = 0;
  this->StructStaticArray[0].Int32Optional.bIsSet = false;
  this->StructStaticArray[1].Unused = -1;
  this->StructStaticArray[1].Int32 = 0;
  this->StructStaticArray[1].Int32StaticArray[0] = 0;
  this->StructStaticArray[1].Int32StaticArray[1] = 0;
  this->StructStaticArray[1].Int32StaticArray[2] = 0;
  this->StructStaticArray[1].Int32StaticArray[3] = 0;
  this->StructStaticArray[1].Int32StaticArray[4] = 0;
  this->StructStaticArray[1].Int32StaticArray[5] = 0;
  this->StructStaticArray[1].Int32StaticArray[6] = 0;
  this->StructStaticArray[1].Int32StaticArray[7] = 0;
  this->StructStaticArray[1].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[1].Int32Array.ArrayNum = 0;
  this->StructStaticArray[1].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[1].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[1].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[1].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[1].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x48 = 0;
  this->StructStaticArray[1].Int32Optional.bIsSet = false;
  this->StructStaticArray[2].Unused = -1;
  this->StructStaticArray[2].Int32 = 0;
  this->StructStaticArray[2].Int32StaticArray[0] = 0;
  this->StructStaticArray[2].Int32StaticArray[1] = 0;
  this->StructStaticArray[2].Int32StaticArray[2] = 0;
  this->StructStaticArray[2].Int32StaticArray[3] = 0;
  this->StructStaticArray[2].Int32StaticArray[4] = 0;
  this->StructStaticArray[2].Int32StaticArray[5] = 0;
  this->StructStaticArray[2].Int32StaticArray[6] = 0;
  this->StructStaticArray[2].Int32StaticArray[7] = 0;
  this->StructStaticArray[2].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[2].Int32Array.ArrayNum = 0;
  this->StructStaticArray[2].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[2].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[2].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[2].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[2].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x48 = 0;
  this->StructStaticArray[2].Int32Optional.bIsSet = false;
  this->StructStaticArray[3].Unused = -1;
  this->StructStaticArray[3].Int32 = 0;
  this->StructStaticArray[3].Int32StaticArray[0] = 0;
  this->StructStaticArray[3].Int32StaticArray[1] = 0;
  this->StructStaticArray[3].Int32StaticArray[2] = 0;
  this->StructStaticArray[3].Int32StaticArray[3] = 0;
  this->StructStaticArray[3].Int32StaticArray[4] = 0;
  this->StructStaticArray[3].Int32StaticArray[5] = 0;
  this->StructStaticArray[3].Int32StaticArray[6] = 0;
  this->StructStaticArray[3].Int32StaticArray[7] = 0;
  this->StructStaticArray[3].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[3].Int32Array.ArrayNum = 0;
  this->StructStaticArray[3].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[3].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[3].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[3].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[3].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x48 = 0;
  this->StructStaticArray[3].Int32Optional.bIsSet = false;
  this->StructStaticArray[4].Unused = -1;
  this->StructStaticArray[4].Int32 = 0;
  this->StructStaticArray[4].Int32StaticArray[0] = 0;
  this->StructStaticArray[4].Int32StaticArray[1] = 0;
  this->StructStaticArray[4].Int32StaticArray[2] = 0;
  this->StructStaticArray[4].Int32StaticArray[3] = 0;
  this->StructStaticArray[4].Int32StaticArray[4] = 0;
  this->StructStaticArray[4].Int32StaticArray[5] = 0;
  this->StructStaticArray[4].Int32StaticArray[6] = 0;
  this->StructStaticArray[4].Int32StaticArray[7] = 0;
  this->StructStaticArray[4].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[4].Int32Array.ArrayNum = 0;
  this->StructStaticArray[4].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[4].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[4].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[4].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[4].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x48 = 0;
  this->StructStaticArray[4].Int32Optional.bIsSet = false;
  this->StructStaticArray[5].Unused = -1;
  this->StructStaticArray[5].Int32 = 0;
  this->StructStaticArray[5].Int32StaticArray[0] = 0;
  this->StructStaticArray[5].Int32StaticArray[1] = 0;
  this->StructStaticArray[5].Int32StaticArray[2] = 0;
  this->StructStaticArray[5].Int32StaticArray[3] = 0;
  this->StructStaticArray[5].Int32StaticArray[4] = 0;
  this->StructStaticArray[5].Int32StaticArray[5] = 0;
  this->StructStaticArray[5].Int32StaticArray[6] = 0;
  this->StructStaticArray[5].Int32StaticArray[7] = 0;
  this->StructStaticArray[5].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[5].Int32Array.ArrayNum = 0;
  this->StructStaticArray[5].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[5].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[5].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[5].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[5].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x48 = 0;
  this->StructStaticArray[5].Int32Optional.bIsSet = false;
  this->StructStaticArray[6].Unused = -1;
  this->StructStaticArray[6].Int32 = 0;
  this->StructStaticArray[6].Int32StaticArray[0] = 0;
  this->StructStaticArray[6].Int32StaticArray[1] = 0;
  this->StructStaticArray[6].Int32StaticArray[2] = 0;
  this->StructStaticArray[6].Int32StaticArray[3] = 0;
  this->StructStaticArray[6].Int32StaticArray[4] = 0;
  this->StructStaticArray[6].Int32StaticArray[5] = 0;
  this->StructStaticArray[6].Int32StaticArray[6] = 0;
  this->StructStaticArray[6].Int32StaticArray[7] = 0;
  this->StructStaticArray[6].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[6].Int32Array.ArrayNum = 0;
  this->StructStaticArray[6].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[6].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[6].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[6].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[6].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x48 = 0;
  this->StructStaticArray[6].Int32Optional.bIsSet = false;
  this->StructStaticArray[7].Unused = -1;
  this->StructStaticArray[7].Int32 = 0;
  this->StructStaticArray[7].Int32StaticArray[0] = 0;
  this->StructStaticArray[7].Int32StaticArray[1] = 0;
  this->StructStaticArray[7].Int32StaticArray[2] = 0;
  this->StructStaticArray[7].Int32StaticArray[3] = 0;
  this->StructStaticArray[7].Int32StaticArray[4] = 0;
  this->StructStaticArray[7].Int32StaticArray[5] = 0;
  this->StructStaticArray[7].Int32StaticArray[6] = 0;
  this->StructStaticArray[7].Int32StaticArray[7] = 0;
  this->StructStaticArray[7].Int32Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StructStaticArray[7].Int32Array.ArrayNum = 0;
  this->StructStaticArray[7].Int32Array.ArrayMax = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Set.Elements = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[7].Int32Set.Elements.field_0x34 = 0;
  this->StructStaticArray[7].Int32Set.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->StructStaticArray[7].Int32Set.HashSize = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map.field_0x8 = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map.field_0x20 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x28 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x2c = 0x80;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x34 = 0;
  *(undefined8 *)&this->StructStaticArray[7].Int32Map.field_0x40 = 0;
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x48 = 0;
  this->StructStaticArray[7].Int32Optional.bIsSet = false;
  (this->StructArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StructArray).ArrayNum = 0;
  (this->StructArray).ArrayMax = 0;
  *(undefined8 *)&(this->StructSet).Elements = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->StructSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->StructSet).Elements.field_0x30 = 0xffffffff;
  (this->StructSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->StructSet).HashSize = 0;
  *(undefined8 *)&this->StructMap = 0;
  *(undefined8 *)&(this->StructMap).field_0x8 = 0;
  *(undefined8 *)&(this->StructMap).field_0x20 = 0;
  *(undefined4 *)&(this->StructMap).field_0x28 = 0;
  *(undefined4 *)&(this->StructMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->StructMap).field_0x34 = 0;
  *(undefined4 *)&(this->StructMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StructMap).field_0x40 = 0;
  *(undefined4 *)&(this->StructMap).field_0x48 = 0;
  (this->StructOptional).bIsSet = false;
  return this;
}

// ~UTestPropertyPathFunctionsClass @ 1422d15f0

void __thiscall
UTestPropertyPathFunctionsClass::~UTestPropertyPathFunctionsClass
          (UTestPropertyPathFunctionsClass *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UTestPropertyPathFunctionsClass__6B_;
  if ((this->StructOptional).bIsSet != false) {
    FTestPropertyPathFunctionsStruct::~FTestPropertyPathFunctionsStruct
              (&(this->StructOptional).TypedValue);
  }
  *(undefined4 *)&(this->StructMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StructMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FTestPropertyPathFunctionsStructKey,FTestPropertyPathFunctionsStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTestPropertyPathFunctionsStructKey,FTestPropertyPathFunctionsStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTestPropertyPathFunctionsStructKey,FTestPropertyPathFunctionsStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructMap);
  (this->StructSet).HashSize = 0;
  FVar2 = (this->StructSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FTestPropertyPathFunctionsStructKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTestPropertyPathFunctionsStructKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StructSet).Elements);
  DestructItems<FTestPropertyPathFunctionsStruct,int>
            ((FTestPropertyPathFunctionsStruct *)(this->StructArray).AllocatorInstance.Data,
             (this->StructArray).ArrayNum);
  pFVar3 = (this->StructArray).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[7].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[7].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[7].Int32Map);
  this->StructStaticArray[7].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[7].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[7].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[7].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[6].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[6].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[6].Int32Map);
  this->StructStaticArray[6].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[6].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[6].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[6].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[5].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[5].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[5].Int32Map);
  this->StructStaticArray[5].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[5].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[5].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[5].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[4].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[4].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[4].Int32Map);
  this->StructStaticArray[4].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[4].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[4].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[4].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[3].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[3].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[3].Int32Map);
  this->StructStaticArray[3].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[3].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[3].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[3].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[2].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[2].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[2].Int32Map);
  this->StructStaticArray[2].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[2].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[2].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[2].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[1].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[1].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[1].Int32Map);
  this->StructStaticArray[1].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[1].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[1].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[1].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&this->StructStaticArray[0].Int32Map.field_0x48 = 0;
  pvVar1 = *(void **)&this->StructStaticArray[0].Int32Map.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructStaticArray[0].Int32Map);
  this->StructStaticArray[0].Int32Set.HashSize = 0;
  FVar2 = this->StructStaticArray[0].Int32Set.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StructStaticArray[0].Int32Set.Elements);
  pFVar3 = this->StructStaticArray[0].Int32Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1422d36a0

UClass * __cdecl UTestPropertyPathFunctionsClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestPropertyPathFunctionsClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TestPropertyPathFunctionsClass",
               &Z_Registration_Info_UClass_UTestPropertyPathFunctionsClass.InnerSingleton,
               StaticRegisterNativesUTestPropertyPathFunctionsClass,0x8c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestPropertyPathFunctionsClass>,
               InternalVTableHelperCtorCaller<UTestPropertyPathFunctionsClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestPropertyPathFunctionsClass.InnerSingleton;
}

// StaticRegisterNativesUTestPropertyPathFunctionsClass @ 1422e3e30

void __cdecl
UTestPropertyPathFunctionsClass::StaticRegisterNativesUTestPropertyPathFunctionsClass(void)

{
  return;
}

