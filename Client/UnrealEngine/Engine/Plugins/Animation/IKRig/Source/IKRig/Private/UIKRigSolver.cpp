// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 14

// StaticClass @ 14def0000

UClass * __cdecl UIKRigSolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSolver",
               &Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton,
               StaticRegisterNativesUIKRigSolver,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigSolver>,InternalVTableHelperCtorCaller<UIKRigSolver>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton;
}

// UIKRigSolver @ 14df1a4d0

UIKRigSolver * __thiscall UIKRigSolver::UIKRigSolver(UIKRigSolver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsEnabled = true;
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  return this;
}

// UIKRigSolver @ 14df1a500

UIKRigSolver * __thiscall UIKRigSolver::UIKRigSolver(UIKRigSolver *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bIsEnabled = true;
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  return this;
}

// ~UIKRigSolver @ 14df1c7e0

void __thiscall UIKRigSolver::~UIKRigSolver(UIKRigSolver *this)

{
  this->_padding_ = (longlong)&___7UIKRigSolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToInstancedStruct @ 14df2b850

void __thiscall UIKRigSolver::ConvertToInstancedStruct(UIKRigSolver *this,FInstancedStruct *param_1)

{
  return;
}

// GetBonesWithSettings @ 14df356b0

void __thiscall
UIKRigSolver::GetBonesWithSettings
          (UIKRigSolver *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14df3d650

UClass * __cdecl UIKRigSolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSolver",
               &Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton,
               StaticRegisterNativesUIKRigSolver,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRigSolver>,InternalVTableHelperCtorCaller<UIKRigSolver>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSolver.InnerSingleton;
}

// GetRootBone @ 14df3edd0

FName __thiscall UIKRigSolver::GetRootBone(UIKRigSolver *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// Initialize @ 14df45cf0

void __thiscall UIKRigSolver::Initialize(UIKRigSolver *this,FIKRigSkeleton *param_1)

{
  return;
}

// IsGoalConnected @ 14df479d0

bool __thiscall UIKRigSolver::IsGoalConnected(UIKRigSolver *this,FName *param_1)

{
  return false;
}

// RemoveGoal @ 14df4e700

void __thiscall UIKRigSolver::RemoveGoal(UIKRigSolver *this,FName *param_1)

{
  return;
}

// Solve @ 14df56800

void __thiscall
UIKRigSolver::Solve(UIKRigSolver *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  return;
}

// StaticRegisterNativesUIKRigSolver @ 14df5a270

void __cdecl UIKRigSolver::StaticRegisterNativesUIKRigSolver(void)

{
  return;
}

// UpdateSolverSettings @ 14df5f310

void __thiscall UIKRigSolver::UpdateSolverSettings(UIKRigSolver *this,UIKRigSolver *param_1)

{
  return;
}

