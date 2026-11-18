// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 20

// StaticClass @ 146c62290

UClass * __cdecl UMeshReconstructorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MeshReconstructorBase",
               &Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton,
               StaticRegisterNativesUMeshReconstructorBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshReconstructorBase>,
               InternalVTableHelperCtorCaller<UMeshReconstructorBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton;
}

// UMeshReconstructorBase @ 146c663a0

UMeshReconstructorBase * __thiscall
UMeshReconstructorBase::UMeshReconstructorBase(UMeshReconstructorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshReconstructorBase__6B_;
  return this;
}

// UMeshReconstructorBase @ 146c663d0

UMeshReconstructorBase * __thiscall
UMeshReconstructorBase::UMeshReconstructorBase
          (UMeshReconstructorBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshReconstructorBase__6B_;
  return this;
}

// ~UMeshReconstructorBase @ 146c66f00

void __thiscall UMeshReconstructorBase::~UMeshReconstructorBase(UMeshReconstructorBase *this)

{
  *(undefined ***)this = &___7UMeshReconstructorBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ConnectMRMesh @ 146c68fb0

void __thiscall
UMeshReconstructorBase::ConnectMRMesh(UMeshReconstructorBase *this,UMRMeshComponent *param_1)

{
  return;
}

// DisconnectMRMesh @ 146c697f0

void __thiscall UMeshReconstructorBase::DisconnectMRMesh(UMeshReconstructorBase *this)

{
  return;
}

// GetPrivateStaticClass @ 146c6c000

UClass * __cdecl UMeshReconstructorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MeshReconstructorBase",
               &Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton,
               StaticRegisterNativesUMeshReconstructorBase,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshReconstructorBase>,
               InternalVTableHelperCtorCaller<UMeshReconstructorBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshReconstructorBase.InnerSingleton;
}

// IsReconstructionPaused @ 146c6c7d0

bool __thiscall UMeshReconstructorBase::IsReconstructionPaused(UMeshReconstructorBase *this)

{
  return false;
}

// IsReconstructionStarted @ 146c6c7e0

bool __thiscall UMeshReconstructorBase::IsReconstructionStarted(UMeshReconstructorBase *this)

{
  return false;
}

// PauseReconstruction @ 146c6c990

void __thiscall UMeshReconstructorBase::PauseReconstruction(UMeshReconstructorBase *this)

{
  return;
}

// StartReconstruction @ 146c705e0

void __thiscall UMeshReconstructorBase::StartReconstruction(UMeshReconstructorBase *this)

{
  return;
}

// StaticRegisterNativesUMeshReconstructorBase @ 146c70640

void __cdecl UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UMeshReconstructorBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopReconstruction @ 146c706c0

void __thiscall UMeshReconstructorBase::StopReconstruction(UMeshReconstructorBase *this)

{
  return;
}

// execConnectMRMesh @ 146c73670

void __cdecl
UMeshReconstructorBase::execConnectMRMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_res8);
  return;
}

// execDisconnectMRMesh @ 146c73860

void __cdecl
UMeshReconstructorBase::execDisconnectMRMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146c73878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2e0))();
  return;
}

// execIsReconstructionPaused @ 146c73a40

void __cdecl
UMeshReconstructorBase::execIsReconstructionPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsReconstructionStarted @ 146c73a80

void __cdecl
UMeshReconstructorBase::execIsReconstructionStarted(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execPauseReconstruction @ 146c73ac0

void __cdecl
UMeshReconstructorBase::execPauseReconstruction(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146c73ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c0))();
  return;
}

// execStartReconstruction @ 146c73f10

void __cdecl
UMeshReconstructorBase::execStartReconstruction(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146c73f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b0))();
  return;
}

// execStopReconstruction @ 146c73f40

void __cdecl
UMeshReconstructorBase::execStopReconstruction(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146c73f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

