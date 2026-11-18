// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148677670

UClass * __cdecl USoundNodeAttenuation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeAttenuation",
               &Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton,
               StaticRegisterNativesUSoundNodeAttenuation,0x428,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeAttenuation>,
               InternalVTableHelperCtorCaller<USoundNodeAttenuation>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton;
}

// USoundNodeAttenuation @ 148697260

USoundNodeAttenuation * __thiscall
USoundNodeAttenuation::USoundNodeAttenuation(USoundNodeAttenuation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  this->_padding_ = (longlong)&___7USoundNodeAttenuation__6B_;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  return this;
}

// USoundNodeAttenuation @ 1486972b0

USoundNodeAttenuation * __thiscall
USoundNodeAttenuation::USoundNodeAttenuation
          (USoundNodeAttenuation *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeAttenuation__6B_;
  (this->AttenuationSettings).field0_0x0.DebugPtr = (USoundAttenuation *)0x0;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  return this;
}

// ~USoundNodeAttenuation @ 14869b7b0

void __thiscall USoundNodeAttenuation::~USoundNodeAttenuation(USoundNodeAttenuation *this)

{
  this->_padding_ = (longlong)&___7USoundNodeAttenuation__6B_;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationOverrides);
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAttenuationSettingsToApply @ 1486bb240

FSoundAttenuationSettings * __thiscall
USoundNodeAttenuation::GetAttenuationSettingsToApply(USoundNodeAttenuation *this)

{
  USoundAttenuation *pUVar1;
  
  if (this->bOverrideAttenuation != 0) {
    return &this->AttenuationOverrides;
  }
  pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundAttenuation *)0x0) {
    return &pUVar1->Attenuation;
  }
  return (FSoundAttenuationSettings *)0x0;
}

// GetMaxDistance @ 1486c13f0

float __thiscall USoundNodeAttenuation::GetMaxDistance(USoundNodeAttenuation *this)

{
  undefined8 *puVar1;
  int iVar2;
  USoundAttenuation *pUVar3;
  UObject *this_00;
  FBaseAttenuationSettings *this_01;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  fVar5 = FAudioDevice::GetMaxWorldDistance();
  if (this->bOverrideAttenuation == 0) {
    pUVar3 = (this->AttenuationSettings).field0_0x0.DebugPtr;
    if (pUVar3 == (USoundAttenuation *)0x0) goto LAB_1486c1436;
    this_01 = (FBaseAttenuationSettings *)&pUVar3->Attenuation;
  }
  else {
    this_01 = (FBaseAttenuationSettings *)&this->AttenuationOverrides;
  }
  if (this_01 != (FBaseAttenuationSettings *)0x0) {
    fVar5 = FBaseAttenuationSettings::GetMaxDimension(this_01);
  }
LAB_1486c1436:
  puVar4 = (undefined8 *)this->_padding_;
  iVar2 = (int)this->_padding_;
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<USoundNode>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar4 == puVar1) break;
    this_00 = (UObject *)*puVar4;
    fVar6 = fVar5;
    if (this_00 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(this_00);
      fVar6 = (float)(**(code **)(*(longlong *)this_00 + 0x2b8))(this_00);
      if (fVar6 <= fVar5) {
        fVar6 = fVar5;
      }
    }
    puVar4 = puVar4 + 1;
    fVar5 = fVar6;
  }
  return fVar5;
}

// GetPrivateStaticClass @ 1486c47b0

UClass * __cdecl USoundNodeAttenuation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeAttenuation",
               &Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton,
               StaticRegisterNativesUSoundNodeAttenuation,0x428,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeAttenuation>,
               InternalVTableHelperCtorCaller<USoundNodeAttenuation>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeAttenuation.InnerSingleton;
}

// HasAttenuationNode @ 1486ca8c0

bool __thiscall USoundNodeAttenuation::HasAttenuationNode(USoundNodeAttenuation *this)

{
  return true;
}

// ParseNodes @ 1486da710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeAttenuation::ParseNodes
          (USoundNodeAttenuation *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  USoundAttenuation *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSoundAttenuationSettings *pFVar5;
  undefined1 auStackY_2b8 [32];
  FSoundParseParameters local_288;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FSoundParseParameters::FSoundParseParameters(&local_288,param_4);
  if (param_3->bAllowSpatialization != '\0') {
    pFVar5 = (FSoundAttenuationSettings *)0x0;
    if (this->bOverrideAttenuation == 0) {
      pUVar1 = (this->AttenuationSettings).field0_0x0.DebugPtr;
      if (pUVar1 != (USoundAttenuation *)0x0) {
        pFVar5 = &pUVar1->Attenuation;
      }
    }
    else {
      pFVar5 = &this->AttenuationOverrides;
    }
    if (pFVar5 != (FSoundAttenuationSettings *)0x0) {
      if (param_1 == (FAudioDevice *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioDevice",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeAttenuation.cpp"
                           ,0x3e,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = FAudioDevice::FindClosestListenerIndex(param_1,&local_288.Transform);
      FActiveSound::ParseAttenuation(param_3,&local_288,iVar4,pFVar5);
      goto LAB_1486da7d9;
    }
  }
  local_288._572_1_ = local_288._572_1_ & 0xfe;
LAB_1486da7d9:
  USoundNode::ParseNodes((USoundNode *)this,param_1,param_2,param_3,&local_288,param_5);
  FSoundParseParameters::~FSoundParseParameters(&local_288);
  return;
}

// StaticRegisterNativesUSoundNodeAttenuation @ 1486f18d0

void __cdecl USoundNodeAttenuation::StaticRegisterNativesUSoundNodeAttenuation(void)

{
  return;
}

