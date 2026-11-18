// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 7

// StaticClass @ 14eca9080

UClass * __cdecl AOnlineBeaconUnitTestHostObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestHostObject",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconUnitTestHostObject,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestHostObject>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHostObject>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton;
}

// AOnlineBeaconUnitTestHostObject @ 14ecac610

AOnlineBeaconUnitTestHostObject * __thiscall
AOnlineBeaconUnitTestHostObject::AOnlineBeaconUnitTestHostObject
          (AOnlineBeaconUnitTestHostObject *this,FVTableHelper *param_1)

{
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  *(undefined ***)this = &___7AOnlineBeaconUnitTestHostObject__6B_;
  return this;
}

// AOnlineBeaconUnitTestHostObject @ 14ecac640

AOnlineBeaconUnitTestHostObject * __thiscall
AOnlineBeaconUnitTestHostObject::AOnlineBeaconUnitTestHostObject
          (AOnlineBeaconUnitTestHostObject *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  longlong lVar6;
  FName local_res8;
  FString local_18;
  
  AOnlineBeaconHostObject::AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this,param_1);
  *(undefined ***)this = &___7AOnlineBeaconUnitTestHostObject__6B_;
  pUVar4 = AOnlineBeaconUnitTestClient::StaticClass();
  lVar6 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UClass *)0x0)) {
    *(UClass **)&this->field_0x2d0 = pUVar4;
    if (pUVar4 == (UClass *)0x0) goto LAB_14ecac6cf;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    *(UClass **)&this->field_0x2d0 = pUVar4;
  }
  pUVar5 = Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
  if (pUVar5 != (UClass *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar6 = *(longlong *)&this->field_0x2d0;
    }
  }
LAB_14ecac6cf:
  local_res8 = *(FName *)(lVar6 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  puVar1 = &this->field_0x2c0;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x2c8 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x2cc = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~AOnlineBeaconUnitTestHostObject @ 14ecad8b0

void __thiscall
AOnlineBeaconUnitTestHostObject::~AOnlineBeaconUnitTestHostObject
          (AOnlineBeaconUnitTestHostObject *this)

{
  *(undefined ***)this = &___7AOnlineBeaconUnitTestHostObject__6B_;
  AOnlineBeaconHostObject::~AOnlineBeaconHostObject((AOnlineBeaconHostObject *)this);
  return;
}

// GetPrivateStaticClass @ 14ecbb070

UClass * __cdecl AOnlineBeaconUnitTestHostObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"OnlineBeaconUnitTestHostObject",
               &Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton,
               StaticRegisterNativesAOnlineBeaconUnitTestHostObject,0x2e8,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AOnlineBeaconUnitTestHostObject>,
               InternalVTableHelperCtorCaller<AOnlineBeaconUnitTestHostObject>,local_res8,
               AOnlineBeaconHostObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AOnlineBeaconUnitTestHostObject.InnerSingleton;
}

// IsEditorOnly @ 14ecbd650

bool __thiscall AOnlineBeaconUnitTestHostObject::IsEditorOnly(AOnlineBeaconUnitTestHostObject *this)

{
  return true;
}

// StaticRegisterNativesAOnlineBeaconUnitTestHostObject @ 14ecca370

void __cdecl
AOnlineBeaconUnitTestHostObject::StaticRegisterNativesAOnlineBeaconUnitTestHostObject(void)

{
  return;
}

