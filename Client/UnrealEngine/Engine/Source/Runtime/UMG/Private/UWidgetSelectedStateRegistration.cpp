// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 1468df130

UClass * __cdecl UWidgetSelectedStateRegistration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSelectedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetSelectedStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetSelectedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetSelectedStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton;
}

// UWidgetSelectedStateRegistration @ 146902d50

UWidgetSelectedStateRegistration * __thiscall
UWidgetSelectedStateRegistration::UWidgetSelectedStateRegistration
          (UWidgetSelectedStateRegistration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UWidgetSelectedStateRegistration__6B_;
  return this;
}

// UWidgetSelectedStateRegistration @ 146902d80

UWidgetSelectedStateRegistration * __thiscall
UWidgetSelectedStateRegistration::UWidgetSelectedStateRegistration
          (UWidgetSelectedStateRegistration *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UWidgetSelectedStateRegistration__6B_;
  return this;
}

// ~UWidgetSelectedStateRegistration @ 146905220

void __thiscall
UWidgetSelectedStateRegistration::~UWidgetSelectedStateRegistration
          (UWidgetSelectedStateRegistration *this)

{
  *(undefined ***)this = &___7UWidgetSelectedStateRegistration__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146923be0

UClass * __cdecl UWidgetSelectedStateRegistration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSelectedStateRegistration",
               &Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton,
               StaticRegisterNativesUWidgetSelectedStateRegistration,0x28,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWidgetSelectedStateRegistration>,
               InternalVTableHelperCtorCaller<UWidgetSelectedStateRegistration>,local_res8,
               UWidgetBinaryStateRegistration::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSelectedStateRegistration.InnerSingleton;
}

// GetRegisteredWidgetState @ 146924000

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidgetSelectedStateRegistration::GetRegisteredWidgetState
          (UWidgetSelectedStateRegistration *this,UWidget *param_1)

{
  return false;
}

// GetStateName @ 1469245c0

FName __thiscall
UWidgetSelectedStateRegistration::GetStateName(UWidgetSelectedStateRegistration *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = StateName;
  return in_RDX;
}

// InitializeStaticBitfields @ 14692c070

void __thiscall
UWidgetSelectedStateRegistration::InitializeStaticBitfields(UWidgetSelectedStateRegistration *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *this_00;
  byte *pbVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = (FName *)(**(code **)(*(longlong *)this + 0x2b0))(this,local_res8);
  FVar1 = *pFVar2;
  this_00 = UWidgetStateSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pbVar3 = TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           ::FindChecked((TMapBase<FName,unsigned_char,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                          *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x10,FVar1);
  Bit.BinaryStates = 1L << ((ulonglong)*pbVar3 & 0x3f);
  return;
}

// StaticRegisterNativesUWidgetSelectedStateRegistration @ 146945d40

void __cdecl
UWidgetSelectedStateRegistration::StaticRegisterNativesUWidgetSelectedStateRegistration(void)

{
  return;
}

