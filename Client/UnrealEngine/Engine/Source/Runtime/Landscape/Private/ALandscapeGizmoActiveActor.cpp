// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// StaticClass @ 145ef0930

UClass * __cdecl ALandscapeGizmoActiveActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGizmoActiveActor",
               &Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.InnerSingleton,
               StaticRegisterNativesALandscapeGizmoActiveActor,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeGizmoActiveActor>,
               InternalVTableHelperCtorCaller<ALandscapeGizmoActiveActor>,local_res8,
               ALandscapeGizmoActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.InnerSingleton;
}

// ALandscapeGizmoActiveActor @ 145ef38f0

ALandscapeGizmoActiveActor * __thiscall
ALandscapeGizmoActiveActor::ALandscapeGizmoActiveActor
          (ALandscapeGizmoActiveActor *this,FVTableHelper *param_1)

{
  ALandscapeGizmoActor::ALandscapeGizmoActor((ALandscapeGizmoActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALandscapeGizmoActiveActor__6B_;
  *(undefined8 *)&this->SelectedData = 0;
  *(undefined8 *)&(this->SelectedData).field_0x8 = 0;
  *(undefined8 *)&(this->SelectedData).field_0x20 = 0;
  *(undefined4 *)&(this->SelectedData).field_0x28 = 0;
  *(undefined4 *)&(this->SelectedData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedData).field_0x34 = 0;
  *(undefined4 *)&(this->SelectedData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SelectedData).field_0x40 = 0;
  *(undefined4 *)&(this->SelectedData).field_0x48 = 0;
  return this;
}

// ~ALandscapeGizmoActiveActor @ 145ef40a0

void __thiscall
ALandscapeGizmoActiveActor::~ALandscapeGizmoActiveActor(ALandscapeGizmoActiveActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ALandscapeGizmoActiveActor__6B_;
  *(undefined4 *)&(this->SelectedData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SelectedData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FGizmoSelectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FGizmoSelectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FGizmoSelectData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SelectedData);
  ALandscapeGizmoActor::~ALandscapeGizmoActor((ALandscapeGizmoActor *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5360

UClass * __cdecl ALandscapeGizmoActiveActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGizmoActiveActor",
               &Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.InnerSingleton,
               StaticRegisterNativesALandscapeGizmoActiveActor,0x310,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeGizmoActiveActor>,
               InternalVTableHelperCtorCaller<ALandscapeGizmoActiveActor>,local_res8,
               ALandscapeGizmoActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.InnerSingleton;
}

// StaticRegisterNativesALandscapeGizmoActiveActor @ 145ef5fd0

void __cdecl ALandscapeGizmoActiveActor::StaticRegisterNativesALandscapeGizmoActiveActor(void)

{
  return;
}

// ALandscapeGizmoActiveActor @ 145f40b30

ALandscapeGizmoActiveActor * __thiscall
ALandscapeGizmoActiveActor::ALandscapeGizmoActiveActor
          (ALandscapeGizmoActiveActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,L"Sprite");
  FVar1 = *pFVar2;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar1);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar1,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  ALandscapeGizmoActor::ALandscapeGizmoActor((ALandscapeGizmoActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALandscapeGizmoActiveActor__6B_;
  *(undefined8 *)&this->SelectedData = 0;
  *(undefined8 *)&(this->SelectedData).field_0x8 = 0;
  *(undefined8 *)&(this->SelectedData).field_0x20 = 0;
  *(undefined4 *)&(this->SelectedData).field_0x28 = 0;
  *(undefined4 *)&(this->SelectedData).field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedData).field_0x34 = 0;
  *(undefined8 *)&(this->SelectedData).field_0x40 = 0;
  *(undefined4 *)&(this->SelectedData).field_0x48 = 0;
  pFVar2 = ::FName::FName(&local_res8,L"GizmoRendererComponent0");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_ULandscapeGizmoRenderComponent_NoRegister();
  pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  (**(code **)(*(longlong *)pUVar4 + 0x788))
            (pUVar4,UCollisionProfile::BlockAllDynamic_ProfileName,1);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  this->_padding_ = (longlong)pUVar4;
  return this;
}

