// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 7

// StaticClass @ 1471b5580

UClass * __cdecl UMassModuleSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassModuleSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassModuleSettings",
               &Z_Registration_Info_UClass_UMassModuleSettings.InnerSingleton,
               StaticRegisterNativesUMassModuleSettings,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassModuleSettings>,
               InternalVTableHelperCtorCaller<UMassModuleSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassModuleSettings.InnerSingleton;
}

// UMassModuleSettings @ 1471dd2b0

UMassModuleSettings * __thiscall
UMassModuleSettings::UMassModuleSettings(UMassModuleSettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMassModuleSettings__6B_;
  return this;
}

// UMassModuleSettings @ 1471dd2e0

UMassModuleSettings * __thiscall
UMassModuleSettings::UMassModuleSettings(UMassModuleSettings *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMassModuleSettings__6B_;
  return this;
}

// ~UMassModuleSettings @ 1471e0e30

void __thiscall UMassModuleSettings::~UMassModuleSettings(UMassModuleSettings *this)

{
  *(undefined ***)this = &___7UMassModuleSettings__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147224910

UClass * __cdecl UMassModuleSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassModuleSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassModuleSettings",
               &Z_Registration_Info_UClass_UMassModuleSettings.InnerSingleton,
               StaticRegisterNativesUMassModuleSettings,0x28,8,
               CLASS_Intrinsic|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassModuleSettings>,
               InternalVTableHelperCtorCaller<UMassModuleSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassModuleSettings.InnerSingleton;
}

// PostInitProperties @ 14723cc00

void __thiscall UMassModuleSettings::PostInitProperties(UMassModuleSettings *this)

{
  UObject *pUVar1;
  uint uVar2;
  UClass *this_00;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  longlong local_res10;
  UMassModuleSettings *local_res18 [2];
  longlong *local_28;
  UMassModuleSettings **local_20;
  
  UObject::PostInitProperties((UObject *)this);
  if (((*(uint *)&this->field_0x8 & 0x10) != 0) &&
     ((*(byte *)(*(longlong *)&this->field_0x10 + 0xd4) & 1) == 0)) {
    this_00 = UMassSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    if ((*(uint *)&this->field_0x8 & 0x10) == 0) {
      `UMassSettings::RegisterModuleSettings'::__l2::<lambda_1>::operator()(local_res8);
    }
    local_res10 = *(longlong *)(*(longlong *)&this->field_0x10 + 0x18);
    local_res18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    lVar4 = local_res10;
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)local_res10);
    uVar2 = uVar2 + (int)((ulonglong)lVar4 >> 0x20);
    if (*(int *)&pUVar1[1].field_0x18 != *(int *)&pUVar1[2].field_0x1c) {
      puVar3 = *(undefined1 **)(pUVar1 + 3);
      if (*(undefined1 **)(pUVar1 + 3) == (undefined1 *)0x0) {
        puVar3 = &pUVar1[2].field_0x20;
      }
      iVar5 = *(int *)(puVar3 + (ulonglong)(*(int *)&pUVar1[3].field_0x8 - 1U & uVar2) * 4);
      if (iVar5 != -1) {
        do {
          lVar4 = *(longlong *)&pUVar1[1].field_0x10 + (longlong)iVar5 * 0x18;
          if (*(longlong *)(*(longlong *)&pUVar1[1].field_0x10 + (longlong)iVar5 * 0x18) ==
              local_res10) {
            if (lVar4 != 0) goto LAB_14723cd46;
            break;
          }
          iVar5 = *(int *)(lVar4 + 0x10);
        } while (iVar5 != -1);
      }
    }
    local_28 = &local_res10;
    local_20 = local_res18;
    TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&>_>
              ((TSet<TTuple<FName,TObjectPtr<UMassModuleSettings>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UMassModuleSettings>,0>,FDefaultSetAllocator>
                *)&pUVar1[1].field_0x10,(uint)local_res8,
               (TPairInitializer<FName_const_&,TObjectPtr<UMassModuleSettings>_&&> *)
               (ulonglong)uVar2,(bool *)&local_28);
    lVar4 = *(longlong *)&pUVar1[1].field_0x10 + (longlong)local_res8[0] * 0x18;
LAB_14723cd46:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UMassModuleSettings **)(lVar4 + 8) = this;
  }
  return;
}

// StaticRegisterNativesUMassModuleSettings @ 147250720

void __cdecl UMassModuleSettings::StaticRegisterNativesUMassModuleSettings(void)

{
  return;
}

