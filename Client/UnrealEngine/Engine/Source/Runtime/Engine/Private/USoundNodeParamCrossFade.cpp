// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1486793b0

UClass * __cdecl USoundNodeParamCrossFade::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeParamCrossFade",
               &Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton,
               StaticRegisterNativesUSoundNodeParamCrossFade,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeParamCrossFade>,
               InternalVTableHelperCtorCaller<USoundNodeParamCrossFade>,local_res8,
               USoundNodeDistanceCrossFade::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton;
}

// USoundNodeParamCrossFade @ 148697a80

USoundNodeParamCrossFade * __thiscall
USoundNodeParamCrossFade::USoundNodeParamCrossFade
          (USoundNodeParamCrossFade *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeParamCrossFade__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ParamName).ComparisonIndex = 0;
  (this->ParamName).Number = 0;
  return this;
}

// USoundNodeParamCrossFade @ 148697ad0

USoundNodeParamCrossFade * __thiscall
USoundNodeParamCrossFade::USoundNodeParamCrossFade
          (USoundNodeParamCrossFade *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeParamCrossFade__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ParamName).ComparisonIndex = 0;
  (this->ParamName).Number = 0;
  return this;
}

// ~USoundNodeParamCrossFade @ 14869bc90

void __thiscall USoundNodeParamCrossFade::~USoundNodeParamCrossFade(USoundNodeParamCrossFade *this)

{
  this->_padding_ = (longlong)&___7USoundNodeDistanceCrossFade__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AllowCrossfading @ 1486a61c0

bool __thiscall
USoundNodeParamCrossFade::AllowCrossfading(USoundNodeParamCrossFade *this,FActiveSound *param_1)

{
  return true;
}

// GetCurrentDistance @ 1486bd140

float __thiscall
USoundNodeParamCrossFade::GetCurrentDistance
          (USoundNodeParamCrossFade *this,FAudioDevice *param_1,FActiveSound *param_2,
          FSoundParseParameters *param_3)

{
  IParameterTransmitter *pIVar1;
  float fVar2;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  FString *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  TSharedPtr<Audio::IProxyData,1> *local_28;
  undefined8 local_20;
  
  pIVar1 = (param_2->InstanceTransmitter).Object;
  local_b8 = 0;
  local_b0 = 0.0;
  local_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = (FString *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_28 = (TSharedPtr<Audio::IProxyData,1> *)0x0;
  local_20 = 0;
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,this->ParamName,&local_b8);
  fVar2 = local_b0;
  DestructItems<TSharedPtr<Audio::IProxyData,1>,int>(local_28,(int)local_20);
  if (local_28 != (TSharedPtr<Audio::IProxyData,1> *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<FString,int>(local_48,(int)local_40);
  if (local_48 != (FString *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return fVar2;
}

// GetMaxDistance @ 1486c1620

float __thiscall USoundNodeParamCrossFade::GetMaxDistance(USoundNodeParamCrossFade *this)

{
  undefined8 *puVar1;
  int iVar2;
  UObject *this_00;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  puVar3 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar3 + iVar2;
  fVar5 = 0.0;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar3 == puVar1) break;
    this_00 = (UObject *)*puVar3;
    fVar4 = fVar5;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      fVar4 = (float)(**(code **)(*(longlong *)this_00 + 0x2b8))(this_00);
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
    }
    puVar3 = puVar3 + 1;
    fVar5 = fVar4;
  }
  return fVar5;
}

// GetPrivateStaticClass @ 1486c52f0

UClass * __cdecl USoundNodeParamCrossFade::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeParamCrossFade",
               &Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton,
               StaticRegisterNativesUSoundNodeParamCrossFade,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeParamCrossFade>,
               InternalVTableHelperCtorCaller<USoundNodeParamCrossFade>,local_res8,
               USoundNodeDistanceCrossFade::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeParamCrossFade.InnerSingleton;
}

// StaticRegisterNativesUSoundNodeParamCrossFade @ 1486f19c0

void __cdecl USoundNodeParamCrossFade::StaticRegisterNativesUSoundNodeParamCrossFade(void)

{
  return;
}

