// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 11

// StaticClass @ 14cedc700

UClass * __cdecl UPCGMeshSamplerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGMeshSamplerSettings",
               &Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGMeshSamplerSettings,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMeshSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGMeshSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton;
}

// UPCGMeshSamplerSettings @ 14cee3bb0

UPCGMeshSamplerSettings * __thiscall
UPCGMeshSamplerSettings::UPCGMeshSamplerSettings
          (UPCGMeshSamplerSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bExtractMeshFromInput = false;
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGMeshSamplerSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->SamplingMethod = OnePointPerTriangle;
  this->bUseColorChannelAsDensity = false;
  (this->SamplingOptions).SubSampleDensity = 10.0;
  this->ColorChannelAsDensity = Red;
  (this->NonUniformSamplingOptions).SizeDistributionPower = 2.0;
  this->bVoxelize = false;
  this->VoxelSize = 100.0;
  this->bRemoveHiddenTriangles = true;
  this->RequestedLODType = RenderData;
  this->RequestedLODIndex = 0;
  (this->SamplingOptions).SamplingRadius = 10.0;
  (this->SamplingOptions).MaxNumSamples = 0;
  (this->SamplingOptions).RandomSeed = 0;
  (this->SamplingOptions).SamplingMethodVersion = -1;
  (this->NonUniformSamplingOptions).MaxSamplingRadius = 0.0;
  (this->NonUniformSamplingOptions).SizeDistribution = Uniform;
  (this->NonUniformSamplingOptions).WeightMode = WeightedRandom;
  (this->NonUniformSamplingOptions).bInvertWeights = false;
  this->bExtractUVAsAttribute = false;
  ::FName::FName(&this->UVAttributeName,L"UV");
  this->UVChannel = 0;
  this->bOutputTriangleIds = false;
  ::FName::FName(&this->TriangleIdAttributeName,L"TriangleId");
  this->bOutputMaterialInfo = false;
  ::FName::FName(&this->MaterialIdAttributeName,L"MaterialId");
  ::FName::FName(&this->MaterialAttributeName,L"Material");
  this->PointSteepness = 0.5;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGMeshSamplerSettings @ 14cee3d20

UPCGMeshSamplerSettings * __thiscall
UPCGMeshSamplerSettings::UPCGMeshSamplerSettings(UPCGMeshSamplerSettings *this)

{
  undefined1 *this_00;
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->bExtractMeshFromInput = false;
  this_00 = &(this->StaticMesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGMeshSamplerSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->StaticMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  this->SamplingMethod = OnePointPerTriangle;
  this->bUseColorChannelAsDensity = false;
  (this->SamplingOptions).SubSampleDensity = 10.0;
  this->ColorChannelAsDensity = Red;
  (this->NonUniformSamplingOptions).SizeDistributionPower = 2.0;
  this->bVoxelize = false;
  this->VoxelSize = 100.0;
  this->bRemoveHiddenTriangles = true;
  this->RequestedLODType = RenderData;
  this->RequestedLODIndex = 0;
  (this->SamplingOptions).SamplingRadius = 10.0;
  (this->SamplingOptions).MaxNumSamples = 0;
  (this->SamplingOptions).RandomSeed = 0;
  (this->SamplingOptions).SamplingMethodVersion = -1;
  (this->NonUniformSamplingOptions).MaxSamplingRadius = 0.0;
  (this->NonUniformSamplingOptions).SizeDistribution = Uniform;
  (this->NonUniformSamplingOptions).WeightMode = WeightedRandom;
  (this->NonUniformSamplingOptions).bInvertWeights = false;
  this->bExtractUVAsAttribute = false;
  ::FName::FName(&this->UVAttributeName,L"UV");
  this->UVChannel = 0;
  this->bOutputTriangleIds = false;
  ::FName::FName(&this->TriangleIdAttributeName,L"TriangleId");
  this->bOutputMaterialInfo = false;
  ::FName::FName(&this->MaterialIdAttributeName,L"MaterialId");
  ::FName::FName(&this->MaterialAttributeName,L"Material");
  this->PointSteepness = 0.5;
  this->bSynchronousLoad = false;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->PointSteepness = 1.0;
  }
  return this;
}

// ~UPCGMeshSamplerSettings @ 14cee4b80

void __thiscall UPCGMeshSamplerSettings::~UPCGMeshSamplerSettings(UPCGMeshSamplerSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGMeshSamplerSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->StaticMesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceea820

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMeshSamplerSettings::CreateElement
          (UPCGMeshSamplerSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMeshSamplerElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMeshSamplerElement__6B_;
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

// GetPrivateStaticClass @ 14cef36e0

UClass * __cdecl UPCGMeshSamplerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGMeshSamplerSettings",
               &Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGMeshSamplerSettings,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMeshSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGMeshSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMeshSamplerSettings.InnerSingleton;
}

// InputPinProperties @ 14cef3ef0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMeshSamplerSettings::InputPinProperties
          (UPCGMeshSamplerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->bExtractMeshFromInput != false) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14cef45a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMeshSamplerSettings::OutputPinProperties
          (UPCGMeshSamplerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  bool bVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  bVar1 = this->bExtractMeshFromInput;
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar5,bVar1,bVar1,pFVar4);
  return __return_storage_ptr__;
}

// PostLoad @ 14cef4dd0

void __thiscall UPCGMeshSamplerSettings::PostLoad(UPCGMeshSamplerSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGMeshSamplerSettings @ 14cef9c40

void __cdecl UPCGMeshSamplerSettings::StaticRegisterNativesUPCGMeshSamplerSettings(void)

{
  return;
}

// UseSeed @ 14cefa0d0

bool __thiscall UPCGMeshSamplerSettings::UseSeed(UPCGMeshSamplerSettings *this)

{
  return true;
}

