// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 7

// StaticClass @ 14acd3bc0

UClass * __cdecl UWN_AnimNotify_SKMReact::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AnimNotify_SKMReact.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_SKMReact",L"WN_AnimNotify_SKMReact",
               &Z_Registration_Info_UClass_UWN_AnimNotify_SKMReact.InnerSingleton,
               StaticRegisterNativesUWN_AnimNotify_SKMReact,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_AnimNotify_SKMReact>,
               InternalVTableHelperCtorCaller<UWN_AnimNotify_SKMReact>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AnimNotify_SKMReact.InnerSingleton;
}

// UWN_AnimNotify_SKMReact @ 14acd5770

UWN_AnimNotify_SKMReact * __thiscall
UWN_AnimNotify_SKMReact::UWN_AnimNotify_SKMReact
          (UWN_AnimNotify_SKMReact *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UWN_AnimNotify_SKMReact__6B_;
  (this->Bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bones).ArrayNum = 0;
  (this->Bones).ArrayMax = 0;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter = 0;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter.field_0x8 = 0;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter.field_0x20 = 0;
  (this->SkmReactSetting).SoundSelection = 0;
  (this->SkmReactSetting).SpawnParticle = true;
  (this->SkmReactSetting).SpawnSound = true;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x28 = 0;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x34 = 0;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter.field_0x40 = 0;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x48 = 0;
  (this->SkmReactSetting).VolumeMultiplier = 1.0;
  (this->SkmReactSetting).PitchMultiplier = 1.0;
  return this;
}

// UWN_AnimNotify_SKMReact @ 14acd5800

UWN_AnimNotify_SKMReact * __thiscall
UWN_AnimNotify_SKMReact::UWN_AnimNotify_SKMReact(UWN_AnimNotify_SKMReact *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FName *pFVar3;
  FObjectInitializer *pFVar4;
  FName local_18;
  FName FStack_10;
  
  pFVar4 = FObjectInitializer::Get();
  UAnimNotify::UAnimNotify((UAnimNotify *)this,pFVar4);
  pTVar1 = &this->Bones;
  this->_padding_ = (longlong)&___7UWN_AnimNotify_SKMReact__6B_;
  piVar2 = &(this->Bones).ArrayMax;
  (this->SkmReactSetting).SpawnParticle = true;
  (this->SkmReactSetting).SpawnSound = true;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Bones).ArrayNum = 0;
  *piVar2 = 0;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter = 0;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter.field_0x8 = 0;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter.field_0x20 = 0;
  (this->SkmReactSetting).SoundSelection = 0;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x28 = 0;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x34 = 0;
  *(undefined8 *)&(this->SkmReactSetting).FloatParameter.field_0x40 = 0;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x48 = 0;
  (this->SkmReactSetting).VolumeMultiplier = 1.0;
  (this->SkmReactSetting).PitchMultiplier = 1.0;
  ::FName::FName(&local_18,"foot_l");
  ::FName::FName(&FStack_10,"foot_r");
  (this->Bones).ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,*piVar2,&pTVar1->AllocatorInstance,2,piVar2);
  pFVar3 = (FName *)(pTVar1->AllocatorInstance).Data;
  *pFVar3 = local_18;
  pFVar3[1] = FStack_10;
  return this;
}

// ~UWN_AnimNotify_SKMReact @ 14acd5f20

void __thiscall UWN_AnimNotify_SKMReact::~UWN_AnimNotify_SKMReact(UWN_AnimNotify_SKMReact *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UWN_AnimNotify_SKMReact__6B_;
  *(undefined4 *)&(this->SkmReactSetting).FloatParameter.field_0x48 = 0;
  pvVar1 = *(void **)&(this->SkmReactSetting).FloatParameter.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SkmReactSetting).FloatParameter);
  pFVar2 = (this->Bones).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14acd6ce0

UClass * __cdecl UWN_AnimNotify_SKMReact::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AnimNotify_SKMReact.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_SKMReact",L"WN_AnimNotify_SKMReact",
               &Z_Registration_Info_UClass_UWN_AnimNotify_SKMReact.InnerSingleton,
               StaticRegisterNativesUWN_AnimNotify_SKMReact,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_AnimNotify_SKMReact>,
               InternalVTableHelperCtorCaller<UWN_AnimNotify_SKMReact>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AnimNotify_SKMReact.InnerSingleton;
}

// Notify @ 14acd7410

void __thiscall
UWN_AnimNotify_SKMReact::Notify
          (UWN_AnimNotify_SKMReact *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2,
          FAnimNotifyEventReference *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *_Src;
  bool bVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UWN_SKMReactComponent *this_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_28;
  UClass *local_20;
  
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = (UClass *)param_1->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_28.ObjectIndex = 0;
    local_28.ObjectSerialNumber = 0;
    local_20 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
    bVar5 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_28,(void *)0x0);
    if (!bVar5) {
      pUVar6 = FWeakObjectPtr::Get(&local_28);
      pcVar4 = *(code **)(*(longlong *)pUVar6 + 0x738);
      local_20 = UWN_SKMReactComponent::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_20);
      }
      pUVar7 = (UClass *)(*pcVar4)(pUVar6,&local_20);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_20 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_20);
      bVar5 = TWeakObjectPtr<UWN_SKMReactComponent,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UWN_SKMReactComponent,FWeakObjectPtr> *)&local_res10,
                         (void *)0x0);
      if (!bVar5) {
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        local_20 = (UClass *)param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_2 != (UAnimSequenceBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_2);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar6[0xf].field_0x18,(FObjectPtr)&local_20);
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        *(undefined4 *)&pUVar6[0xc].field_0x18 = 0;
        if (*(int *)&pUVar6[0xc].field_0x1c != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,(ForAnyElementType *)&pUVar6[0xc].field_0x10,0,
                     (int *)&pUVar6[0xc].field_0x1c);
        }
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        puVar2 = &pUVar6[0xc].field_0x10;
        if ((TArray<FName,TSizedDefaultAllocator<32>_> *)puVar2 != &this->Bones) {
          iVar3 = (this->Bones).ArrayNum;
          puVar1 = &pUVar6[0xc].field_0x1c;
          _Src = (this->Bones).AllocatorInstance.Data;
          *(int *)&pUVar6[0xc].field_0x18 = iVar3;
          if ((iVar3 == 0) && (*(int *)puVar1 == 0)) {
            *(undefined4 *)puVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,iVar3,*(int *)puVar1,(ForAnyElementType *)puVar2,iVar3,(int *)puVar1);
            if (iVar3 != 0) {
              memcpy(*(void **)puVar2,_Src,(longlong)iVar3 << 3);
            }
          }
        }
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        FWN_SKMReact_AnimNotifySetting::operator=
                  ((FWN_SKMReact_AnimNotifySetting *)&pUVar6[0xc].field_0x20,&this->SkmReactSetting)
        ;
        this_00 = (UWN_SKMReactComponent *)FWeakObjectPtr::Get(&local_res10);
        UWN_SKMReactComponent::SpawnFootstepParticleAndAudio
                  (this_00,(this_00->AnimNotifySetting).SpawnSound);
      }
    }
  }
  return;
}

// StaticRegisterNativesUWN_AnimNotify_SKMReact @ 14acd8ea0

void __cdecl UWN_AnimNotify_SKMReact::StaticRegisterNativesUWN_AnimNotify_SKMReact(void)

{
  return;
}

