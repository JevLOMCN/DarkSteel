// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5d5cf0

UClass * __cdecl UDS_ViewerSetting::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerSetting",
               &Z_Registration_Info_UClass_UDS_ViewerSetting.InnerSingleton,
               StaticRegisterNativesUDS_ViewerSetting,0x270,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerSetting>,
               InternalVTableHelperCtorCaller<UDS_ViewerSetting>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerSetting.InnerSingleton;
}

// UDS_ViewerSetting @ 14b5d9bf0

/* WARNING: Type propagation algorithm not settling */

UDS_ViewerSetting * __thiscall
UDS_ViewerSetting::UDS_ViewerSetting(UDS_ViewerSetting *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ViewerSetting__6B_;
  FDS_ViewerSetting_CharacterEquip::FDS_ViewerSetting_CharacterEquip
            (&this->ViewerSetting_CharacterEquip);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc = 0;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x8 = 0;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x20 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x28 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x34 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x40 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x48 = 0;
  return this;
}

// UDS_ViewerSetting @ 14b5d9cc0

/* WARNING: Type propagation algorithm not settling */

UDS_ViewerSetting * __thiscall
UDS_ViewerSetting::UDS_ViewerSetting(UDS_ViewerSetting *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ViewerSetting__6B_;
  FDS_ViewerSetting_CharacterEquip::FDS_ViewerSetting_CharacterEquip
            (&this->ViewerSetting_CharacterEquip);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ViewerSetting_Dungeon).Transform_Default.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ViewerSetting_Dungeon).Transform_Default.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ViewerSetting_Dungeon).Transform_Default.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc = 0;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x8 = 0;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x20 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x28 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x34 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x40 = 0;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x48 = 0;
  return this;
}

// ~UDS_ViewerSetting @ 14b5da720

void __thiscall UDS_ViewerSetting::~UDS_ViewerSetting(UDS_ViewerSetting *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ViewerSetting__6B_;
  *(undefined4 *)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewerSetting_Dungeon).Transform_Npc.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ViewerSetting_Dungeon).Transform_Npc);
  FDS_ViewerSetting_CharacterEquip::~FDS_ViewerSetting_CharacterEquip
            (&this->ViewerSetting_CharacterEquip);
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b5dbb90

UClass * __cdecl UDS_ViewerSetting::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerSetting.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerSetting",
               &Z_Registration_Info_UClass_UDS_ViewerSetting.InnerSingleton,
               StaticRegisterNativesUDS_ViewerSetting,0x270,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerSetting>,
               InternalVTableHelperCtorCaller<UDS_ViewerSetting>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerSetting.InnerSingleton;
}

// StaticRegisterNativesUDS_ViewerSetting @ 14b5dbe90

void __cdecl UDS_ViewerSetting::StaticRegisterNativesUDS_ViewerSetting(void)

{
  return;
}

// GetInst @ 14b905d60

TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr> __cdecl UDS_ViewerSetting::GetInst(void)

{
  UDS_ViewerSetting *pUVar1;
  FWeakObjectPtr in_RCX;
  UDS_GameInstance *local_res10 [3];
  
  local_res10[0] = UDS_GameInstance::GetInst();
  if (local_res10[0] == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr>)in_RCX;
  }
  pUVar1 = (local_res10[0]->ViewerSetting).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_ViewerSetting *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ViewerSetting *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res10[0] = (UDS_GameInstance *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDS_ViewerSetting *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr>)in_RCX;
}

