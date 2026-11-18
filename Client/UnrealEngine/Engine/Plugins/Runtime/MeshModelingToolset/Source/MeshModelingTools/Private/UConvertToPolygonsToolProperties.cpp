// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd0e70

UClass * __cdecl UConvertToPolygonsToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsToolProperties",
               &Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton,
               StaticRegisterNativesUConvertToPolygonsToolProperties,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UConvertToPolygonsToolProperties>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton;
}

// UConvertToPolygonsToolProperties @ 14cbdd260

UConvertToPolygonsToolProperties * __thiscall
UConvertToPolygonsToolProperties::UConvertToPolygonsToolProperties
          (UConvertToPolygonsToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->AngleTolerance = 0.1;
  this->_padding_ = (longlong)&___7UConvertToPolygonsToolProperties__6B_;
  this->ConversionMode = FaceNormalDeviation;
  this->bUseAverageGroupNormal = true;
  this->NumPoints = 100;
  this->bSplitExisting = false;
  this->bNormalWeighted = true;
  this->NormalWeighting = 1.0;
  this->QuadAdjacencyWeight = 1.0;
  this->QuadMetricClamp = 1.0;
  this->QuadSearchRounds = 1;
  this->bRespectUVSeams = false;
  this->bRespectHardNormals = false;
  this->MinGroupSize = 2;
  this->bShowGroupColors = true;
  this->bCalculateNormals = false;
  ::FName::FName(&this->GroupLayer,"Default");
  (this->OptionsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionsList).ArrayNum = 0;
  (this->OptionsList).ArrayMax = 0;
  this->bShowNewLayerName = false;
  ::FString::FString(&this->NewLayerName,L"polygroups");
  return this;
}

// UConvertToPolygonsToolProperties @ 14cbdd340

UConvertToPolygonsToolProperties * __thiscall
UConvertToPolygonsToolProperties::UConvertToPolygonsToolProperties
          (UConvertToPolygonsToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->AngleTolerance = 0.1;
  this->_padding_ = (longlong)&___7UConvertToPolygonsToolProperties__6B_;
  this->ConversionMode = FaceNormalDeviation;
  this->bUseAverageGroupNormal = true;
  this->NumPoints = 100;
  this->bSplitExisting = false;
  this->bNormalWeighted = true;
  this->NormalWeighting = 1.0;
  this->QuadAdjacencyWeight = 1.0;
  this->QuadMetricClamp = 1.0;
  this->QuadSearchRounds = 1;
  this->bRespectUVSeams = false;
  this->bRespectHardNormals = false;
  this->MinGroupSize = 2;
  this->bShowGroupColors = true;
  this->bCalculateNormals = false;
  ::FName::FName(&this->GroupLayer,"Default");
  (this->OptionsList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionsList).ArrayNum = 0;
  (this->OptionsList).ArrayMax = 0;
  this->bShowNewLayerName = false;
  ::FString::FString(&this->NewLayerName,L"polygroups");
  return this;
}

// ~UConvertToPolygonsToolProperties @ 14cbe0270

void __thiscall
UConvertToPolygonsToolProperties::~UConvertToPolygonsToolProperties
          (UConvertToPolygonsToolProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UConvertToPolygonsToolProperties__6B_;
  pFVar1 = (this->NewLayerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->OptionsList).AllocatorInstance.Data,(this->OptionsList).ArrayNum);
  pFVar1 = (this->OptionsList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbef670

UClass * __cdecl UConvertToPolygonsToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsToolProperties",
               &Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton,
               StaticRegisterNativesUConvertToPolygonsToolProperties,0x110,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UConvertToPolygonsToolProperties>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsToolProperties.InnerSingleton;
}

// StaticRegisterNativesUConvertToPolygonsToolProperties @ 14cbf6af0

void __cdecl
UConvertToPolygonsToolProperties::StaticRegisterNativesUConvertToPolygonsToolProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UConvertToPolygonsToolProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGroupOptionsList @ 14cbfce90

void __cdecl
UConvertToPolygonsToolProperties::execGetGroupOptionsList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  int iVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  local_18.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)(param_1 + 6);
  pFVar1 = *(FString **)&param_1[5].field_0x20;
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

