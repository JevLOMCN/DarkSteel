// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 10

// StaticClass @ 14da56b40

UClass * __cdecl UPVMeshBuilderSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVMeshBuilderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVMeshBuilderSettings",
               &Z_Registration_Info_UClass_UPVMeshBuilderSettings.InnerSingleton,
               StaticRegisterNativesUPVMeshBuilderSettings,0x460,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVMeshBuilderSettings>,
               InternalVTableHelperCtorCaller<UPVMeshBuilderSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVMeshBuilderSettings.InnerSingleton;
}

// UPVMeshBuilderSettings @ 14da66a90

UPVMeshBuilderSettings * __thiscall
UPVMeshBuilderSettings::UPVMeshBuilderSettings(UPVMeshBuilderSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPVMeshBuilderSettings__6B_;
  FPVMeshBuilderParams::FPVMeshBuilderParams(&this->MesherSettings);
  (this->CustomMaterialSettings).GenerationOffset = 0;
  (this->CustomMaterialSettings).DistributionMethod = Repeat;
  (this->CustomMaterialSettings).MaterialSetups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomMaterialSettings).MaterialSetups.ArrayNum = 0;
  (this->CustomMaterialSettings).MaterialSetups.ArrayMax = 0;
  (this->CustomMaterialSettings).MaterialMode = Generation;
  (this->DefaultMaterialSettings).GenerationOffset = 0;
  (this->DefaultMaterialSettings).DistributionMethod = Repeat;
  (this->DefaultMaterialSettings).MaterialSetups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultMaterialSettings).MaterialSetups.ArrayNum = 0;
  (this->DefaultMaterialSettings).MaterialSetups.ArrayMax = 0;
  (this->DefaultMaterialSettings).MaterialMode = Generation;
  this->bCustomMaterialSet = false;
  (this->DisplacementWarnings).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplacementWarnings).Data.ArrayNum = 0;
  (this->DisplacementWarnings).Data.ArrayMax = 0;
  return this;
}

// UPVMeshBuilderSettings @ 14da66b20

UPVMeshBuilderSettings * __thiscall
UPVMeshBuilderSettings::UPVMeshBuilderSettings(UPVMeshBuilderSettings *this)

{
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->_padding_ = (longlong)&___7UPVMeshBuilderSettings__6B_;
  FPVMeshBuilderParams::FPVMeshBuilderParams(&this->MesherSettings);
  (this->CustomMaterialSettings).GenerationOffset = 0;
  (this->CustomMaterialSettings).DistributionMethod = Repeat;
  (this->CustomMaterialSettings).MaterialSetups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CustomMaterialSettings).MaterialSetups.ArrayNum = 0;
  (this->CustomMaterialSettings).MaterialSetups.ArrayMax = 0;
  (this->CustomMaterialSettings).MaterialMode = Generation;
  (this->DefaultMaterialSettings).GenerationOffset = 0;
  (this->DefaultMaterialSettings).DistributionMethod = Repeat;
  (this->DefaultMaterialSettings).MaterialSetups.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultMaterialSettings).MaterialSetups.ArrayNum = 0;
  (this->DefaultMaterialSettings).MaterialSetups.ArrayMax = 0;
  (this->DefaultMaterialSettings).MaterialMode = Generation;
  this->bCustomMaterialSet = false;
  (this->DisplacementWarnings).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplacementWarnings).Data.ArrayNum = 0;
  (this->DisplacementWarnings).Data.ArrayMax = 0;
  return this;
}

// ~UPVMeshBuilderSettings @ 14da67d10

void __thiscall UPVMeshBuilderSettings::~UPVMeshBuilderSettings(UPVMeshBuilderSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPVMeshBuilderSettings__6B_;
  pFVar1 = (this->DisplacementWarnings).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DefaultMaterialSettings).MaterialSetups.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomMaterialSettings).MaterialSetups.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPVMeshBuilderParams::~FPVMeshBuilderParams(&this->MesherSettings);
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da799c0

TSharedPtr<IPCGElement,1> * __thiscall
UPVMeshBuilderSettings::CreateElement
          (UPVMeshBuilderSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPVMeshBuilderElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPVMeshBuilderElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetInputPinTypeIdentifier @ 14da95d00

FPCGDataTypeIdentifier * __thiscall
UPVMeshBuilderSettings::GetInputPinTypeIdentifier
          (UPVMeshBuilderSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoGrowth::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da970a0

FPCGDataTypeIdentifier * __thiscall
UPVMeshBuilderSettings::GetOutputPinTypeIdentifier
          (UPVMeshBuilderSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  
  pFVar1 = FPVDataTypeInfoMesh::AsId();
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99500

UClass * __cdecl UPVMeshBuilderSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVMeshBuilderSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVMeshBuilderSettings",
               &Z_Registration_Info_UClass_UPVMeshBuilderSettings.InnerSingleton,
               StaticRegisterNativesUPVMeshBuilderSettings,0x460,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVMeshBuilderSettings>,
               InternalVTableHelperCtorCaller<UPVMeshBuilderSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVMeshBuilderSettings.InnerSingleton;
}

// StaticRegisterNativesUPVMeshBuilderSettings @ 14daa98f0

void __cdecl UPVMeshBuilderSettings::StaticRegisterNativesUPVMeshBuilderSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPVMeshBuilderSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetPlantProfileOptions @ 14daae680

void __cdecl
UPVMeshBuilderSettings::execGetPlantProfileOptions(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[0x14].field_0x20;
  pFVar1 = *(FString **)&param_1[0x14].field_0x18;
  local_10 = CONCAT44(local_10._4_4_,iVar2);
  if (iVar2 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_18,iVar2,(int *)((longlong)&local_10 + 4));
    ConstructItems<FString,FString,int>(local_18.Data,pFVar1,iVar2);
  }
  iVar2 = (int)local_10;
  if (param_3 != &local_18) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    iVar2 = 0;
    *(int *)((longlong)param_3 + 8) = (int)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  DestructItems<FString,int>((FString *)local_18.Data,iVar2);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

