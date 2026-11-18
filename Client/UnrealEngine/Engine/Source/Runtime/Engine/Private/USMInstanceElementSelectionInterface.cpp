// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147b2aa20

UClass * __cdecl USMInstanceElementSelectionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementSelectionInterface",
               &Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementSelectionInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.InnerSingleton;
}

// USMInstanceElementSelectionInterface @ 147b3b8e0

USMInstanceElementSelectionInterface * __thiscall
USMInstanceElementSelectionInterface::USMInstanceElementSelectionInterface
          (USMInstanceElementSelectionInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// USMInstanceElementSelectionInterface @ 147b3b920

USMInstanceElementSelectionInterface * __thiscall
USMInstanceElementSelectionInterface::USMInstanceElementSelectionInterface
          (USMInstanceElementSelectionInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// ~USMInstanceElementSelectionInterface @ 147b3da70

void __thiscall
USMInstanceElementSelectionInterface::~USMInstanceElementSelectionInterface
          (USMInstanceElementSelectionInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementSelectionInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DeselectElement @ 147b507f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementSelectionInterface::DeselectElement
          (USMInstanceElementSelectionInterface *this,FTypedElementHandle *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *param_2,
          FTypedElementSelectionOptions *param_3)

{
  bool bVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if ((((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
       (local_28.InstanceId.InstanceIndex != -1)) &&
      (local_28.InstanceManager != (ISMInstanceManager *)0x0)) &&
     (bVar1 = ITypedElementSelectionInterface::DeselectElement
                        ((ITypedElementSelectionInterface *)this,param_1,param_2,param_3), bVar1)) {
    (**(code **)((longlong)*local_28.InstanceManager + 0x58))(local_28.InstanceManager,&local_28,0);
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 147b6c810

UClass * __cdecl USMInstanceElementSelectionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SMInstanceElementSelectionInterface",
               &Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUSMInstanceElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USMInstanceElementSelectionInterface>,
               InternalVTableHelperCtorCaller<USMInstanceElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USMInstanceElementSelectionInterface.InnerSingleton;
}

// SelectElement @ 147b87e90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
USMInstanceElementSelectionInterface::SelectElement
          (USMInstanceElementSelectionInterface *this,FTypedElementHandle *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *param_2,
          FTypedElementSelectionOptions *param_3)

{
  bool bVar1;
  FSMInstanceManager local_28;
  
  SMInstanceElementDataUtil::GetSMInstanceFromHandle(&local_28,param_1,false);
  if ((((local_28.InstanceId.ISMComponent != (UInstancedStaticMeshComponent *)0x0) &&
       (local_28.InstanceId.InstanceIndex != -1)) &&
      (local_28.InstanceManager != (ISMInstanceManager *)0x0)) &&
     (bVar1 = ITypedElementSelectionInterface::SelectElement
                        ((ITypedElementSelectionInterface *)this,param_1,param_2,param_3), bVar1)) {
    (**(code **)((longlong)*local_28.InstanceManager + 0x58))(local_28.InstanceManager,&local_28,1);
    return true;
  }
  return false;
}

// StaticRegisterNativesUSMInstanceElementSelectionInterface @ 147b8ed10

void __cdecl
USMInstanceElementSelectionInterface::StaticRegisterNativesUSMInstanceElementSelectionInterface
          (void)

{
  return;
}

// _getUObject @ 147b92050

UObject * __thiscall
USMInstanceElementSelectionInterface::_getUObject(USMInstanceElementSelectionInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

