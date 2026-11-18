// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 9

// StaticClass @ 14a786cb0

UClass * __cdecl UWidgetLockedStateRegistration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetLockedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"WidgetLockedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetLockedStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetLockedStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetLockedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetLockedStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetLockedStateRegistration.InnerSingleton;
}

// UWidgetLockedStateRegistration @ 14a7b05e0

UWidgetLockedStateRegistration * __thiscall
UWidgetLockedStateRegistration::UWidgetLockedStateRegistration
          (UWidgetLockedStateRegistration *this,FVTableHelper *param_1)

{
  UWidgetBinaryStateRegistration::UWidgetBinaryStateRegistration
            ((UWidgetBinaryStateRegistration *)this,param_1);
  *(undefined ***)this = &___7UWidgetLockedStateRegistration__6B_;
  return this;
}

// UWidgetLockedStateRegistration @ 14a7b0610

UWidgetLockedStateRegistration * __thiscall
UWidgetLockedStateRegistration::UWidgetLockedStateRegistration(UWidgetLockedStateRegistration *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UWidgetLockedStateRegistration__6B_;
  return this;
}

// ~UWidgetLockedStateRegistration @ 14a7b3e70

void __thiscall
UWidgetLockedStateRegistration::~UWidgetLockedStateRegistration
          (UWidgetLockedStateRegistration *this)

{
  *(undefined ***)this = &___7UWidgetLockedStateRegistration__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e7290

UClass * __cdecl UWidgetLockedStateRegistration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetLockedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"WidgetLockedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetLockedStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetLockedStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetLockedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetLockedStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetLockedStateRegistration.InnerSingleton;
}

// GetRegisteredWidgetState @ 14a7e73a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidgetLockedStateRegistration::GetRegisteredWidgetState
          (UWidgetLockedStateRegistration *this,UWidget *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar2 = UCommonButtonBase::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (bool)((byte)param_1[2].PostWidgetStateChanged.field_0x18 >> 1 & 1);
    }
  }
  return false;
}

// GetStateName @ 14a7e8840

FName __thiscall UWidgetLockedStateRegistration::GetStateName(UWidgetLockedStateRegistration *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = StateName;
  return in_RDX;
}

// InitializeStaticBitfields @ 14a7f3cb0

void __thiscall
UWidgetLockedStateRegistration::InitializeStaticBitfields(UWidgetLockedStateRegistration *this)

{
  FName *pFVar1;
  FWidgetStateBitfield *pFVar2;
  undefined1 local_res8 [8];
  FWidgetStateBitfield local_res10 [3];
  
  pFVar1 = (FName *)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res8);
  pFVar2 = FWidgetStateBitfield::FWidgetStateBitfield(local_res10,*pFVar1);
  Bit.BinaryStates = pFVar2->BinaryStates;
  return;
}

// StaticRegisterNativesUWidgetLockedStateRegistration @ 14a81ebf0

void __cdecl
UWidgetLockedStateRegistration::StaticRegisterNativesUWidgetLockedStateRegistration(void)

{
  return;
}

