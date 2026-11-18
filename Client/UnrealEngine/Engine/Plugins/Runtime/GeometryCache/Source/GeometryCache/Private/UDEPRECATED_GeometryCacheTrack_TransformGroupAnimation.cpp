// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 11

// StaticClass @ 14ca00870

UClass * __cdecl UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack_TransformGroupAnimation",
               &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation,0x130,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>,
               InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>
               ,local_res8,UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
         InnerSingleton;
}

// UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation @ 14ca07750

UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation * __thiscall
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation
          (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MeshData).Positions.ArrayNum = 0;
  (this->MeshData).Positions.ArrayMax = 0;
  (this->MeshData).TextureCoordinates.ArrayNum = 0;
  (this->MeshData).TextureCoordinates.ArrayMax = 0;
  (this->MeshData).TangentsX.ArrayNum = 0;
  (this->MeshData).TangentsX.ArrayMax = 0;
  (this->MeshData).TangentsZ.ArrayNum = 0;
  (this->MeshData).TangentsZ.ArrayMax = 0;
  (this->MeshData).Colors.ArrayNum = 0;
  (this->MeshData).Colors.ArrayMax = 0;
  (this->MeshData).ImportedVertexNumbers.ArrayNum = 0;
  (this->MeshData).ImportedVertexNumbers.ArrayMax = 0;
  (this->MeshData).MotionVectors.ArrayNum = 0;
  (this->MeshData).MotionVectors.ArrayMax = 0;
  (this->MeshData).BatchesInfo.ArrayNum = 0;
  (this->MeshData).BatchesInfo.ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MeshData).Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->MeshData).BoundingBox.Min.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->MeshData).BoundingBox.Min.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->MeshData).BoundingBox.Max.field0_0x0 + 4) = 0;
  (this->MeshData).BoundingBox.IsValid = '\0';
  (this->MeshData).BoundingBox.Pad[0] = '\0';
  (this->MeshData).BoundingBox.Pad[1] = '\0';
  (this->MeshData).BoundingBox.Pad[2] = '\0';
  (this->MeshData).VertexInfo.bHasTangentX = false;
  (this->MeshData).VertexInfo.bHasTangentZ = false;
  (this->MeshData).VertexInfo.bHasUV0 = false;
  (this->MeshData).VertexInfo.bHasColor0 = false;
  (this->MeshData).VertexInfo.bHasMotionVectors = false;
  (this->MeshData).VertexInfo.bHasImportedVertexNumbers = false;
  (this->MeshData).VertexInfo.bConstantUV0 = false;
  (this->MeshData).VertexInfo.bConstantColor0 = false;
  (this->MeshData).VertexInfo.bConstantIndices = false;
  (this->MeshData).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).Indices.ArrayNum = 0;
  (this->MeshData).Indices.ArrayMax = 0;
  (this->MeshData).TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TempBytes.ArrayNum = 0;
  (this->MeshData).TempBytes.ArrayMax = 0;
  (this->MeshData).Hash = 0;
  return this;
}

// UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation @ 14ca07850

UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation * __thiscall
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation
          (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->MeshData).Positions.ArrayNum = 0;
  (this->MeshData).Positions.ArrayMax = 0;
  (this->MeshData).TextureCoordinates.ArrayNum = 0;
  (this->MeshData).TextureCoordinates.ArrayMax = 0;
  (this->MeshData).TangentsX.ArrayNum = 0;
  (this->MeshData).TangentsX.ArrayMax = 0;
  (this->MeshData).TangentsZ.ArrayNum = 0;
  (this->MeshData).TangentsZ.ArrayMax = 0;
  (this->MeshData).Colors.ArrayNum = 0;
  (this->MeshData).Colors.ArrayMax = 0;
  (this->MeshData).ImportedVertexNumbers.ArrayNum = 0;
  (this->MeshData).ImportedVertexNumbers.ArrayMax = 0;
  (this->MeshData).MotionVectors.ArrayNum = 0;
  (this->MeshData).MotionVectors.ArrayMax = 0;
  (this->MeshData).BatchesInfo.ArrayNum = 0;
  (this->MeshData).BatchesInfo.ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MeshData).Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->MeshData).BoundingBox.Min.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->MeshData).BoundingBox.Min.field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->MeshData).BoundingBox.Max.field0_0x0 + 4) = 0;
  (this->MeshData).BoundingBox.IsValid = '\0';
  (this->MeshData).BoundingBox.Pad[0] = '\0';
  (this->MeshData).BoundingBox.Pad[1] = '\0';
  (this->MeshData).BoundingBox.Pad[2] = '\0';
  (this->MeshData).VertexInfo.bHasTangentX = false;
  (this->MeshData).VertexInfo.bHasTangentZ = false;
  (this->MeshData).VertexInfo.bHasUV0 = false;
  (this->MeshData).VertexInfo.bHasColor0 = false;
  (this->MeshData).VertexInfo.bHasMotionVectors = false;
  (this->MeshData).VertexInfo.bHasImportedVertexNumbers = false;
  (this->MeshData).VertexInfo.bConstantUV0 = false;
  (this->MeshData).VertexInfo.bConstantColor0 = false;
  (this->MeshData).VertexInfo.bConstantIndices = false;
  (this->MeshData).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).Indices.ArrayNum = 0;
  (this->MeshData).Indices.ArrayMax = 0;
  (this->MeshData).TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshData).TempBytes.ArrayNum = 0;
  (this->MeshData).TempBytes.ArrayMax = 0;
  (this->MeshData).Hash = 0;
  return this;
}

// ~UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation @ 14ca09510

void __thiscall
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::
~UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation
          (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation *this)

{
  this->_padding_ = (longlong)&___7UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation__6B_;
  FGeometryCacheMeshData::~FGeometryCacheMeshData(&this->MeshData);
  UGeometryCacheTrack::~UGeometryCacheTrack((UGeometryCacheTrack *)this);
  return;
}

// GetPrivateStaticClass @ 14ca1e980

UClass * __cdecl UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"GeometryCacheTrack_TransformGroupAnimation",
               &Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
                InnerSingleton,
               StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation,0x130,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>,
               InternalVTableHelperCtorCaller<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>
               ,local_res8,UGeometryCacheTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation.
         InnerSingleton;
}

// GetResourceSizeEx @ 14ca1f3f0

void __thiscall
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::GetResourceSizeEx
          (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation *this,FResourceSizeEx *param_1)

{
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)this->_padding_ << 7);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(int)this->_padding_ << 2);
  FGeometryCacheMeshData::GetResourceSizeEx(&this->MeshData,param_1);
  return;
}

// SetMesh @ 14ca2b060

void __thiscall
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::SetMesh
          (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation *this,
          FGeometryCacheMeshData *param_1)

{
  FGeometryCacheMeshData::operator=(&this->MeshData,param_1);
  *(int *)&this->_padding_ = (param_1->BatchesInfo).ArrayNum;
  return;
}

// StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation @ 14ca2b9a0

void __cdecl
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::
StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr =
       Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateMeshData @ 14ca2e120

bool __thiscall
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::UpdateMeshData
          (UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation *this,float param_1,bool param_2,
          int *param_3,FGeometryCacheMeshData **param_4)

{
  if (*param_3 == -1) {
    *param_4 = &this->MeshData;
    *param_3 = 0;
    return true;
  }
  return false;
}

// __VTableCtorCaller @ 14ca31380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &___7UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 6) = 0;
    *(undefined2 *)&pUVar1[6].field_0x1 = 0;
    pUVar1[6].field_0x3 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execSetMesh @ 14ca31ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::execSetMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryCacheMeshData *pFVar2;
  undefined1 auStack_128 [32];
  FGeometryCacheMeshData local_108;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108.Positions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Positions.ArrayNum = 0;
  local_108.Positions.ArrayMax = 0;
  local_108.TextureCoordinates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TextureCoordinates.ArrayNum = 0;
  local_108.TextureCoordinates.ArrayMax = 0;
  local_108.TangentsX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TangentsX.ArrayNum = 0;
  local_108.TangentsX.ArrayMax = 0;
  local_108.TangentsZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TangentsZ.ArrayNum = 0;
  local_108.TangentsZ.ArrayMax = 0;
  local_108.Colors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Colors.ArrayNum = 0;
  local_108.Colors.ArrayMax = 0;
  local_108.ImportedVertexNumbers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ImportedVertexNumbers.ArrayNum = 0;
  local_108.ImportedVertexNumbers.ArrayMax = 0;
  local_108.MotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.MotionVectors.ArrayNum = 0;
  local_108.MotionVectors.ArrayMax = 0;
  local_108.BatchesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.BatchesInfo.ArrayNum = 0;
  local_108.BatchesInfo.ArrayMax = 0;
  local_108.BoundingBox.Min.field0_0x0._0_8_ = 0;
  local_108.BoundingBox._8_8_ = 0;
  local_108.BoundingBox.Max.field0_0x0._4_8_ = 0;
  local_108.BoundingBox.IsValid = '\0';
  local_108.BoundingBox.Pad[0] = '\0';
  local_108.BoundingBox.Pad[1] = '\0';
  local_108.BoundingBox.Pad[2] = '\0';
  local_108.Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Indices.ArrayNum = 0;
  local_108.Indices.ArrayMax = 0;
  local_108.VertexInfo.bHasTangentX = false;
  local_108.VertexInfo.bHasTangentZ = false;
  local_108.VertexInfo.bHasUV0 = false;
  local_108.VertexInfo.bHasColor0 = false;
  local_108.VertexInfo.bHasMotionVectors = false;
  local_108.VertexInfo.bHasImportedVertexNumbers = false;
  local_108.VertexInfo.bConstantUV0 = false;
  local_108.VertexInfo.bConstantColor0 = false;
  local_108.VertexInfo.bConstantIndices = false;
  local_108.TempBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.TempBytes.ArrayNum = 0;
  local_108.TempBytes.ArrayMax = 0;
  local_108.Hash = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pFVar2 = &local_108;
  if ((FGeometryCacheMeshData *)param_2->MostRecentPropertyAddress != (FGeometryCacheMeshData *)0x0)
  {
    pFVar2 = (FGeometryCacheMeshData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryCacheMeshData::operator=((FGeometryCacheMeshData *)&param_1[2].field_0x8,pFVar2);
  *(int *)(param_1 + 2) = (pFVar2->BatchesInfo).ArrayNum;
  if (local_108.TempBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TempBytes.AllocatorInstance.Data);
  }
  if (local_108.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Indices.AllocatorInstance.Data);
  }
  if (local_108.BatchesInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.BatchesInfo.AllocatorInstance.Data);
  }
  if (local_108.MotionVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.MotionVectors.AllocatorInstance.Data);
  }
  if (local_108.ImportedVertexNumbers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ImportedVertexNumbers.AllocatorInstance.Data);
  }
  if (local_108.Colors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Colors.AllocatorInstance.Data);
  }
  if (local_108.TangentsZ.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TangentsZ.AllocatorInstance.Data);
  }
  if (local_108.TangentsX.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TangentsX.AllocatorInstance.Data);
  }
  if (local_108.TextureCoordinates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.TextureCoordinates.AllocatorInstance.Data);
  }
  if (local_108.Positions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Positions.AllocatorInstance.Data);
  }
  return;
}

