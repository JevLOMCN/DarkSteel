// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 14731ff50

UClass * __cdecl UPhysicsThreadLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsThreadLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsThreadLibrary",
               &Z_Registration_Info_UClass_UPhysicsThreadLibrary.InnerSingleton,
               StaticRegisterNativesUPhysicsThreadLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsThreadLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsThreadLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsThreadLibrary.InnerSingleton;
}

// UPhysicsThreadLibrary @ 147324960

UPhysicsThreadLibrary * __thiscall
UPhysicsThreadLibrary::UPhysicsThreadLibrary(UPhysicsThreadLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsThreadLibrary__6B_;
  return this;
}

// UPhysicsThreadLibrary @ 147324990

UPhysicsThreadLibrary * __thiscall
UPhysicsThreadLibrary::UPhysicsThreadLibrary
          (UPhysicsThreadLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPhysicsThreadLibrary__6B_;
  return this;
}

// ~UPhysicsThreadLibrary @ 1473251b0

void __thiscall UPhysicsThreadLibrary::~UPhysicsThreadLibrary(UPhysicsThreadLibrary *this)

{
  *(undefined ***)this = &___7UPhysicsThreadLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddForce @ 147326270

void __cdecl
UPhysicsThreadLibrary::AddForce
          (FBodyInstanceAsyncPhysicsTickHandle param_1,TVector<double> *param_2,bool param_3)

{
  FRewindData *pFVar1;
  double dVar2;
  bool bVar3;
  EObjectStateType EVar4;
  FRigidBodyHandle_Internal *this;
  FRigidBodyHandle_Internal *this_00;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  double dVar6;
  FBodyInstanceAsyncPhysicsTickHandle local_res8;
  undefined1 local_28 [16];
  double local_18;
  
  local_res8.Proxy = param_1.Proxy;
  bVar3 = FBodyInstanceAsyncPhysicsTickHandle::IsValid(&local_res8);
  if (bVar3) {
    this = FBodyInstanceAsyncPhysicsTickHandle::operator->(&local_res8);
    if (param_3) {
      this_00 = FBodyInstanceAsyncPhysicsTickHandle::operator->(&local_res8);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
      pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&this_00->field_0x48)->field_0xc) {
        pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&this_00->field_0x48;
      }
      if (pTVar5 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        dVar6 = 0.0;
      }
      else {
        dVar6 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::M(pTVar5);
      }
      local_18 = dVar6 * (param_2->field0_0x0)._s_0.Z;
      dVar2 = dVar6 * (param_2->field0_0x0)._s_0.Y;
      local_28._8_4_ = SUB84(dVar2,0);
      local_28._0_8_ = dVar6 * (param_2->field0_0x0)._s_0.X;
      local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
      pFVar1 = *(FRewindData **)(*(longlong *)&this->field_0x8 + 0x238);
      if (pFVar1 != (FRewindData *)0x0) {
        Chaos::FRewindData::MarkDirtyFromPT
                  (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&this->field_0x48);
      }
    }
    else {
      local_28 = *(undefined1 (*) [16])&param_2->field0_0x0;
      local_18 = (param_2->field0_0x0)._s_0.Z;
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this);
      pFVar1 = *(FRewindData **)(*(longlong *)&this->field_0x8 + 0x238);
      if (pFVar1 != (FRewindData *)0x0) {
        Chaos::FRewindData::MarkDirtyFromPT
                  (pFVar1,*(TGeometryParticleHandleImp<double,3,1> **)&this->field_0x48);
      }
    }
    pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)(*(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48)->field_0xc) {
      pTVar5 = *(TPBDRigidParticleHandleImp<double,3,1> **)&this->field_0x48;
    }
    if ((pTVar5 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
       ((EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar5),
        EVar4 == Sleeping ||
        (EVar4 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(pTVar5),
        EVar4 == Dynamic)))) {
      Chaos::SetObjectStateHelper((IPhysicsProxyBase *)this,pTVar5,Dynamic,true,true);
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::AddForce
                (pTVar5,(TVector<double,3> *)local_28,true);
    }
  }
  return;
}

// GetPrivateStaticClass @ 147326f60

UClass * __cdecl UPhysicsThreadLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsThreadLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsThreadLibrary",
               &Z_Registration_Info_UClass_UPhysicsThreadLibrary.InnerSingleton,
               StaticRegisterNativesUPhysicsThreadLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicsThreadLibrary>,
               InternalVTableHelperCtorCaller<UPhysicsThreadLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsThreadLibrary.InnerSingleton;
}

// StaticRegisterNativesUPhysicsThreadLibrary @ 1473281f0

void __cdecl UPhysicsThreadLibrary::StaticRegisterNativesUPhysicsThreadLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPhysicsThreadLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddForce @ 147329a20

void __cdecl UPhysicsThreadLibrary::execAddForce(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  FBodyInstanceAsyncPhysicsTickHandle local_res20;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_res20.Proxy = (FSingleParticlePhysicsProxy *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AddForce(local_res20,(TVector<double> *)&local_28._s_0,local_res10[0] != 0);
  return;
}

