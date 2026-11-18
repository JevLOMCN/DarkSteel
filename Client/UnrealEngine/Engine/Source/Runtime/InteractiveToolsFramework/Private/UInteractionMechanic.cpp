// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 13

// StaticClass @ 1496720a0

UClass * __cdecl UInteractionMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractionMechanic",
               &Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton,
               StaticRegisterNativesUInteractionMechanic,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractionMechanic>,
               InternalVTableHelperCtorCaller<UInteractionMechanic>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton;
}

// UInteractionMechanic @ 149687240

UInteractionMechanic * __thiscall
UInteractionMechanic::UInteractionMechanic(UInteractionMechanic *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInteractionMechanic__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UInteractionMechanic @ 149687270

UInteractionMechanic * __thiscall
UInteractionMechanic::UInteractionMechanic(UInteractionMechanic *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInteractionMechanic__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UInteractionMechanic @ 14968a490

void __thiscall UInteractionMechanic::~UInteractionMechanic(UInteractionMechanic *this)

{
  this->_padding_ = (longlong)&___7UInteractionMechanic__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddToolPropertySource @ 149691b40

void __thiscall
UInteractionMechanic::AddToolPropertySource
          (UInteractionMechanic *this,UInteractiveToolPropertySet *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x318))(pUVar2,param_1);
  }
  return;
}

// GetParentTool @ 1496a3bc0

UInteractiveTool * __thiscall UInteractionMechanic::GetParentTool(UInteractionMechanic *this)

{
  UInteractiveTool *pUVar1;
  
  pUVar1 = (UInteractiveTool *)FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
  return pUVar1;
}

// GetPrivateStaticClass @ 1496a6b80

UClass * __cdecl UInteractionMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InteractionMechanic",
               &Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton,
               StaticRegisterNativesUInteractionMechanic,0x30,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInteractionMechanic>,
               InternalVTableHelperCtorCaller<UInteractionMechanic>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInteractionMechanic.InnerSingleton;
}

// Render @ 1496bb720

void __thiscall
UInteractionMechanic::Render(UInteractionMechanic *this,IToolsContextRenderAPI *param_1)

{
  return;
}

// SetToolPropertySourceEnabled @ 1496c0230

bool __thiscall
UInteractionMechanic::SetToolPropertySourceEnabled
          (UInteractionMechanic *this,UInteractiveToolPropertySet *param_1,bool param_2)

{
  bool bVar1;
  undefined1 uVar2;
  UObject *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x0001496c0281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)pUVar3 + 0x338))
                      (pUVar3,param_1,param_2,*(code **)(*(longlong *)pUVar3 + 0x338));
    return (bool)uVar2;
  }
  return false;
}

// Setup @ 1496c1950

void __thiscall UInteractionMechanic::Setup(UInteractionMechanic *this,UInteractiveTool *param_1)

{
  UInteractiveTool *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UInteractiveTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ParentTool).WeakPtr,(FObjectPtr)local_res8);
  return;
}

// Shutdown @ 1496c25e0

void __thiscall UInteractionMechanic::Shutdown(UInteractionMechanic *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->ParentTool).WeakPtr = local_res8;
  return;
}

// StaticRegisterNativesUInteractionMechanic @ 1496c2c80

void __cdecl UInteractionMechanic::StaticRegisterNativesUInteractionMechanic(void)

{
  return;
}

// Tick @ 1496c2eb0

void __thiscall UInteractionMechanic::Tick(UInteractionMechanic *this,float param_1)

{
  return;
}

