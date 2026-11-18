// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 149c39950

UClass * __cdecl UPCGGetSplineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSplineSettings",
               &Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetSplineSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSplineSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton;
}

// UPCGGetSplineSettings @ 149c4b3c0

UPCGGetSplineSettings * __thiscall
UPCGGetSplineSettings::UPCGGetSplineSettings(UPCGGetSplineSettings *this,FVTableHelper *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGGetSplineSettings__6B_;
  return this;
}

// UPCGGetSplineSettings @ 149c4b3f0

UPCGGetSplineSettings * __thiscall
UPCGGetSplineSettings::UPCGGetSplineSettings(UPCGGetSplineSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,pFVar1);
  this->field_0x188 = 0;
  *(undefined ***)this = &___7UPCGGetSplineSettings__6B_;
  return this;
}

// ~UPCGGetSplineSettings @ 149c4d980

void __thiscall UPCGGetSplineSettings::~UPCGGetSplineSettings(UPCGGetSplineSettings *this)

{
  *(undefined ***)this = &___7UPCGGetSplineSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  return;
}

// GetDataFilter @ 149c76530

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGGetSplineSettings::GetDataFilter(UPCGGetSplineSettings *this)

{
  return PolyLine;
}

// GetPrivateStaticClass @ 149c780f0

UClass * __cdecl UPCGGetSplineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSplineSettings",
               &Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetSplineSettings,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSplineSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSplineSettings.InnerSingleton;
}

// OutputPinProperties @ 149c81010

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetSplineSettings::OutputPinProperties
          (UPCGGetSplineSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PolyLine);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetSplineSettings @ 149c91f50

void __cdecl UPCGGetSplineSettings::StaticRegisterNativesUPCGGetSplineSettings(void)

{
  return;
}

