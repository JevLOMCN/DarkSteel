// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b509c50

UClass * __cdecl UDS_ModelEventFunctionListClickedQuickSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventFunctionListClickedQuickSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventFunctionListClickedQuickSlot",
               &Z_Registration_Info_UClass_UDS_ModelEventFunctionListClickedQuickSlot.InnerSingleton
               ,StaticRegisterNativesUDS_ModelEventFunctionListClickedQuickSlot,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ModelEventFunctionListClickedQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_ModelEventFunctionListClickedQuickSlot>,local_res8
               ,UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventFunctionListClickedQuickSlot.InnerSingleton;
}

// UDS_ModelEventFunctionListClickedQuickSlot @ 14b511e80

UDS_ModelEventFunctionListClickedQuickSlot * __thiscall
UDS_ModelEventFunctionListClickedQuickSlot::UDS_ModelEventFunctionListClickedQuickSlot
          (UDS_ModelEventFunctionListClickedQuickSlot *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventFunctionListClickedQuickSlot__6B_;
  return this;
}

// UDS_ModelEventFunctionListClickedQuickSlot @ 14b511eb0

UDS_ModelEventFunctionListClickedQuickSlot * __thiscall
UDS_ModelEventFunctionListClickedQuickSlot::UDS_ModelEventFunctionListClickedQuickSlot
          (UDS_ModelEventFunctionListClickedQuickSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  *(undefined ***)this = &___7UDS_ModelEventFunctionListClickedQuickSlot__6B_;
  return this;
}

// ~UDS_ModelEventFunctionListClickedQuickSlot @ 14b513280

void __thiscall
UDS_ModelEventFunctionListClickedQuickSlot::~UDS_ModelEventFunctionListClickedQuickSlot
          (UDS_ModelEventFunctionListClickedQuickSlot *this)

{
  *(undefined ***)this = &___7UDS_ModelEventFunctionListClickedQuickSlot__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516800

UClass * __cdecl UDS_ModelEventFunctionListClickedQuickSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventFunctionListClickedQuickSlot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventFunctionListClickedQuickSlot",
               &Z_Registration_Info_UClass_UDS_ModelEventFunctionListClickedQuickSlot.InnerSingleton
               ,StaticRegisterNativesUDS_ModelEventFunctionListClickedQuickSlot,0xd0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ModelEventFunctionListClickedQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_ModelEventFunctionListClickedQuickSlot>,local_res8
               ,UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventFunctionListClickedQuickSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventFunctionListClickedQuickSlot @ 14b516e50

void __cdecl
UDS_ModelEventFunctionListClickedQuickSlot::
StaticRegisterNativesUDS_ModelEventFunctionListClickedQuickSlot(void)

{
  return;
}

