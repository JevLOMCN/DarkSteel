// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 8

// StaticClass @ 14e2ed0e0

UClass * __cdecl UDatasmithCineCameraActorTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCineCameraActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithCineCameraActorTemplate,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCineCameraActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithCineCameraActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton;
}

// UDatasmithCineCameraActorTemplate @ 14e2f4700

UDatasmithCineCameraActorTemplate * __thiscall
UDatasmithCineCameraActorTemplate::UDatasmithCineCameraActorTemplate
          (UDatasmithCineCameraActorTemplate *this,FVTableHelper *param_1)

{
  FDatasmithCameraLookatTrackingSettingsTemplate *pFVar1;
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar1->bEnableLookAtTracking = '\0';
  pFVar1->bAllowRoll = '\0';
  this_00 = &(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x18;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithCineCameraActorTemplate__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr = 0;
  *(undefined8 *)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~UDatasmithCineCameraActorTemplate @ 14e2f5ea0

void __thiscall
UDatasmithCineCameraActorTemplate::~UDatasmithCineCameraActorTemplate
          (UDatasmithCineCameraActorTemplate *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithCineCameraActorTemplate__6B_;
  pvVar1 = *(void **)&(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9770

bool __thiscall
UDatasmithCineCameraActorTemplate::Equals
          (UDatasmithCineCameraActorTemplate *this,UDatasmithObjectTemplate *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar4 = StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar4->_padding_)) {
      bVar1 = (byte)param_1[1]._padding_;
      if ((((((undefined1 *)&this->LookatTrackingSettings)->bEnableLookAtTracking ^ bVar1) & 1) == 0
          ) && (((*(undefined1 *)&this->LookatTrackingSettings ^ bVar1) & 2) == 0)) {
        bVar3 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)
                           &(this->LookatTrackingSettings).ActorToTrack.SoftObjectPtr.field_0x8,
                           (FSoftObjectPath *)&param_1[1]._padding_);
        if (bVar3) {
          return true;
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fc0c0

UClass * __cdecl UDatasmithCineCameraActorTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithCineCameraActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithCineCameraActorTemplate,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithCineCameraActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithCineCameraActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithCineCameraActorTemplate.InnerSingleton;
}

// Load @ 14e2fe0f0

void __thiscall
UDatasmithCineCameraActorTemplate::Load(UDatasmithCineCameraActorTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithCineCameraActorTemplate @ 14e2fec90

void __cdecl
UDatasmithCineCameraActorTemplate::StaticRegisterNativesUDatasmithCineCameraActorTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffab0

UObject * __thiscall
UDatasmithCineCameraActorTemplate::UpdateObject
          (UDatasmithCineCameraActorTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      param_1 = *(UObject **)&param_1[4].field_0x8;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_ACineCameraActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return *(UObject **)(param_1 + 0xb);
    }
  }
  return (UObject *)0x0;
}

