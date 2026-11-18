// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147b2b550

UClass * __cdecl USMInstanceElementPrimitiveCustomDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementPrimitiveCustomDataInterface",
               &Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.
                InnerSingleton,StaticRegisterNativesUSMInstanceElementPrimitiveCustomDataInterface,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceElementPrimitiveCustomDataInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementPrimitiveCustomDataInterface>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.InnerSingleton;
}

// USMInstanceElementPrimitiveCustomDataInterface @ 147b3b860

USMInstanceElementPrimitiveCustomDataInterface * __thiscall
USMInstanceElementPrimitiveCustomDataInterface::USMInstanceElementPrimitiveCustomDataInterface
          (USMInstanceElementPrimitiveCustomDataInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementPrimitiveCustomDataInterface__;
  return this;
}

// USMInstanceElementPrimitiveCustomDataInterface @ 147b3b8a0

USMInstanceElementPrimitiveCustomDataInterface * __thiscall
USMInstanceElementPrimitiveCustomDataInterface::USMInstanceElementPrimitiveCustomDataInterface
          (USMInstanceElementPrimitiveCustomDataInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementPrimitiveCustomDataInterface__;
  return this;
}

// ~USMInstanceElementPrimitiveCustomDataInterface @ 147b3da50

void __thiscall
USMInstanceElementPrimitiveCustomDataInterface::~USMInstanceElementPrimitiveCustomDataInterface
          (USMInstanceElementPrimitiveCustomDataInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementPrimitiveCustomDataInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6c760

UClass * __cdecl USMInstanceElementPrimitiveCustomDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementPrimitiveCustomDataInterface",
               &Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.
                InnerSingleton,StaticRegisterNativesUSMInstanceElementPrimitiveCustomDataInterface,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USMInstanceElementPrimitiveCustomDataInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementPrimitiveCustomDataInterface>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementPrimitiveCustomDataInterface.InnerSingleton;
}

// SetCustomData @ 147b8adc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
USMInstanceElementPrimitiveCustomDataInterface::SetCustomData
          (USMInstanceElementPrimitiveCustomDataInterface *this,FTypedElementHandle *param_1,
          TArrayView<float_const_,int> *param_2,bool param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  plVar1 = (longlong *)
           CONCAT44(local_28.InstanceId.ISMComponent._4_4_,local_28.InstanceId.ISMComponent._0_4_);
  if (((plVar1 != (longlong *)0x0) &&
      (uVar2 = CONCAT44(local_28.InstanceId._12_4_,local_28.InstanceId.InstanceIndex),
      local_28.InstanceId.InstanceIndex != -1)) &&
     (local_28.InstanceManager != (ISMInstanceManager *)0x0)) {
    local_28.InstanceId.ISMComponent._0_4_ = *(undefined4 *)&param_2->DataPtr;
    local_28.InstanceId.ISMComponent._4_4_ = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
    local_28.InstanceId.InstanceIndex = param_2->ArrayNum;
    local_28.InstanceId._12_4_ = *(undefined4 *)&param_2->field_0xc;
    (**(code **)(*plVar1 + 0xbe0))(plVar1,uVar2,&local_28,param_3);
  }
  return;
}

// SetCustomDataValue @ 147b8ae40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
USMInstanceElementPrimitiveCustomDataInterface::SetCustomDataValue
          (USMInstanceElementPrimitiveCustomDataInterface *this,FTypedElementHandle *param_1,
          int param_2,float param_3,bool param_4)

{
  FSMInstanceManager local_38 [2];
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(local_38,param_1,false);
  if (((local_38[0].InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
      ((int)local_38[0].InstanceId._8_8_ != -1)) &&
     (local_38[0].InstanceManager != (ISMInstanceManager *)0x0)) {
    (**(code **)((local_38[0].InstanceId.ISMComponent)->_padding_ + 0xbc8))
              (local_38[0].InstanceId.ISMComponent,local_38[0].InstanceId._8_8_,param_2,param_3,
               param_4);
  }
  return;
}

// StaticRegisterNativesUSMInstanceElementPrimitiveCustomDataInterface @ 147b8ed00

void __cdecl
USMInstanceElementPrimitiveCustomDataInterface::
StaticRegisterNativesUSMInstanceElementPrimitiveCustomDataInterface(void)

{
  return;
}

// _getUObject @ 147b92040

UObject * __thiscall
USMInstanceElementPrimitiveCustomDataInterface::_getUObject
          (USMInstanceElementPrimitiveCustomDataInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

