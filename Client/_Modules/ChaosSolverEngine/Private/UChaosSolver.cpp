// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 6

// StaticClass @ 146302150

UClass * __cdecl UChaosSolver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolver",
               &Z_Registration_Info_UClass_UChaosSolver.InnerSingleton,
               StaticRegisterNativesUChaosSolver,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosSolver>,InternalVTableHelperCtorCaller<UChaosSolver>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosSolver.InnerSingleton;
}

// UChaosSolver @ 14630a4b0

UChaosSolver * __thiscall UChaosSolver::UChaosSolver(UChaosSolver *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UChaosSolver__6B_;
  return this;
}

// UChaosSolver @ 14630a4e0

UChaosSolver * __thiscall UChaosSolver::UChaosSolver(UChaosSolver *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UChaosSolver *pUVar5;
  
  UObject::UObject((UObject *)this,param_1);
  pUVar1 = *(UClass **)&this->field_0x10;
  *(undefined ***)this = &___7UChaosSolver__6B_;
  pUVar4 = FObjectInitializer::GetClass(param_1);
  if (pUVar4 != pUVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectInitializer.GetClass() == GetClass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosSolverEngine\\Private\\Chaos\\ChaosSolver.cpp"
                       ,0xc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UChaosSolver *)(*pcVar2)();
      return pUVar5;
    }
  }
  return this;
}

// ~UChaosSolver @ 14630b470

void __thiscall UChaosSolver::~UChaosSolver(UChaosSolver *this)

{
  *(undefined ***)this = &___7UChaosSolver__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146313930

UClass * __cdecl UChaosSolver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosSolver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolver",
               &Z_Registration_Info_UClass_UChaosSolver.InnerSingleton,
               StaticRegisterNativesUChaosSolver,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UChaosSolver>,InternalVTableHelperCtorCaller<UChaosSolver>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosSolver.InnerSingleton;
}

// StaticRegisterNativesUChaosSolver @ 146320320

void __cdecl UChaosSolver::StaticRegisterNativesUChaosSolver(void)

{
  return;
}

