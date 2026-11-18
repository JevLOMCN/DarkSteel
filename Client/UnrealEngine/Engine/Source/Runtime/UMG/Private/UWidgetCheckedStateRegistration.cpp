// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 14695d770

UClass * __cdecl UWidgetCheckedStateRegistration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetCheckedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetCheckedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetCheckedStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetCheckedStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetCheckedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetCheckedStateRegistration>,local_res8,
               UWidgetEnumStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetCheckedStateRegistration.InnerSingleton;
}

// UWidgetCheckedStateRegistration @ 14698f1a0

UWidgetCheckedStateRegistration * __thiscall
UWidgetCheckedStateRegistration::UWidgetCheckedStateRegistration
          (UWidgetCheckedStateRegistration *this,FVTableHelper *param_1)

{
  UWidgetEnumStateRegistration::UWidgetEnumStateRegistration
            ((UWidgetEnumStateRegistration *)this,param_1);
  *(undefined ***)this = &___7UWidgetCheckedStateRegistration__6B_;
  return this;
}

// UWidgetCheckedStateRegistration @ 14698f1d0

UWidgetCheckedStateRegistration * __thiscall
UWidgetCheckedStateRegistration::UWidgetCheckedStateRegistration
          (UWidgetCheckedStateRegistration *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UWidgetCheckedStateRegistration__6B_;
  return this;
}

// ~UWidgetCheckedStateRegistration @ 146994b30

void __thiscall
UWidgetCheckedStateRegistration::~UWidgetCheckedStateRegistration
          (UWidgetCheckedStateRegistration *this)

{
  *(undefined ***)this = &___7UWidgetCheckedStateRegistration__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBitfieldFromValue @ 1469cd180

FWidgetStateBitfield * __cdecl UWidgetCheckedStateRegistration::GetBitfieldFromValue(uchar param_1)

{
  if (param_1 == '\0') {
    return &Unchecked;
  }
  if (param_1 != '\x01') {
    return &Undetermined;
  }
  return &Checked;
}

// GetPrivateStaticClass @ 1469d6ac0

UClass * __cdecl UWidgetCheckedStateRegistration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetCheckedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetCheckedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetCheckedStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetCheckedStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetCheckedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetCheckedStateRegistration>,local_res8,
               UWidgetEnumStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetCheckedStateRegistration.InnerSingleton;
}

// GetRegisteredWidgetState @ 1469d6c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uchar __thiscall
UWidgetCheckedStateRegistration::GetRegisteredWidgetState
          (UWidgetCheckedStateRegistration *this,UWidget *param_1)

{
  int iVar1;
  ECheckBoxState EVar2;
  UClass *pUVar3;
  
  if (param_1 != (UWidget *)0x0) {
    pUVar3 = UCheckBox::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (param_1[6].MyGCWidget.Object != (SObjectWidget *)0x0) {
        EVar2 = SCheckBox::GetCheckedState((SCheckBox *)param_1[6].MyGCWidget.Object);
        return EVar2;
      }
      return (uchar)param_1[1]._padding_;
    }
  }
  return '\0';
}

// GetStateName @ 1469d89e0

FName __thiscall
UWidgetCheckedStateRegistration::GetStateName(UWidgetCheckedStateRegistration *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = StateName;
  return in_RDX;
}

// InitializeStaticBitfields @ 1469e04f0

void __thiscall
UWidgetCheckedStateRegistration::InitializeStaticBitfields(UWidgetCheckedStateRegistration *this)

{
  FName *pFVar1;
  FWidgetStateBitfield *pFVar2;
  undefined1 local_res8 [8];
  FWidgetStateBitfield local_res10 [3];
  
  pFVar1 = (FName *)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res8);
  pFVar2 = FWidgetStateBitfield::FWidgetStateBitfield(local_res10,*pFVar1,'\0');
  Unchecked.BinaryStates = pFVar2->BinaryStates;
  pFVar1 = (FName *)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res8);
  pFVar2 = FWidgetStateBitfield::FWidgetStateBitfield(local_res10,*pFVar1,'\x01');
  Checked.BinaryStates = pFVar2->BinaryStates;
  pFVar1 = (FName *)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res8);
  pFVar2 = FWidgetStateBitfield::FWidgetStateBitfield(local_res10,*pFVar1,'\x02');
  Undetermined.BinaryStates = pFVar2->BinaryStates;
  return;
}

// StaticRegisterNativesUWidgetCheckedStateRegistration @ 146a1f3f0

void __cdecl
UWidgetCheckedStateRegistration::StaticRegisterNativesUWidgetCheckedStateRegistration(void)

{
  return;
}

