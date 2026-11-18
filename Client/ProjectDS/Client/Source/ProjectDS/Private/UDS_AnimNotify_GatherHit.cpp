// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4179f0

UClass * __cdecl UDS_AnimNotify_GatherHit::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_GatherHit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_GatherHit",
               &Z_Registration_Info_UClass_UDS_AnimNotify_GatherHit.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_GatherHit,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_GatherHit>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_GatherHit>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_GatherHit.InnerSingleton;
}

// UDS_AnimNotify_GatherHit @ 14b41b3f0

UDS_AnimNotify_GatherHit * __thiscall
UDS_AnimNotify_GatherHit::UDS_AnimNotify_GatherHit
          (UDS_AnimNotify_GatherHit *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify_GatherHit__6B_;
  return this;
}

// ~UDS_AnimNotify_GatherHit @ 14b41bbd0

void __thiscall UDS_AnimNotify_GatherHit::~UDS_AnimNotify_GatherHit(UDS_AnimNotify_GatherHit *this)

{
  *(undefined ***)this = &___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41d9d0

UClass * __cdecl UDS_AnimNotify_GatherHit::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_GatherHit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_GatherHit",
               &Z_Registration_Info_UClass_UDS_AnimNotify_GatherHit.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_GatherHit,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AnimNotify_GatherHit>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_GatherHit>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_GatherHit.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_GatherHit @ 14b41e230

void __cdecl UDS_AnimNotify_GatherHit::StaticRegisterNativesUDS_AnimNotify_GatherHit(void)

{
  return;
}

// UDS_AnimNotify_GatherHit @ 14b8b21c0

UDS_AnimNotify_GatherHit * __thiscall
UDS_AnimNotify_GatherHit::UDS_AnimNotify_GatherHit
          (UDS_AnimNotify_GatherHit *this,FObjectInitializer *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  *(undefined ***)this = &___7UDS_AnimNotify_GatherHit__6B_;
  return this;
}

// Notify @ 14b8d22e0

void __thiscall
UDS_AnimNotify_GatherHit::Notify
          (UDS_AnimNotify_GatherHit *this,USkeletalMeshComponent *param_1,UAnimSequenceBase *param_2
          ,FAnimNotifyEventReference *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_18;
  FWeakObjectPtr local_10;
  
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  lVar2 = param_1->_padding_;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_ADS_MainCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffGather>
                ((ulong64 *)&local_18,(EDS_AbilityTagType *)(lVar2 + 0x680));
      bVar3 = FWeakObjectPtr::IsValid(&local_18);
      if (bVar3) {
        FWeakObjectPtr::Get(&local_18);
        UDS_StuffGatherData::GetData((ulong64)&local_10);
        bVar3 = FWeakObjectPtr::IsValid(&local_10);
        if (bVar3) {
          pUVar5 = FWeakObjectPtr::Get(&local_10);
          pUVar5[0xb].field_0x1c = 1;
        }
      }
    }
  }
  return;
}

