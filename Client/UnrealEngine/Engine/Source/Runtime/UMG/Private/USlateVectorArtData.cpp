// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 15

// StaticClass @ 146a49380

UClass * __cdecl USlateVectorArtData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateVectorArtData",
               &Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton,
               StaticRegisterNativesUSlateVectorArtData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateVectorArtData>,
               InternalVTableHelperCtorCaller<USlateVectorArtData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton;
}

// USlateVectorArtData @ 146a56570

USlateVectorArtData * __thiscall
USlateVectorArtData::USlateVectorArtData(USlateVectorArtData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateVectorArtData__6B_;
  (this->VertexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).ArrayNum = 0;
  (this->VertexData).ArrayMax = 0;
  (this->IndexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexData).ArrayNum = 0;
  (this->IndexData).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// USlateVectorArtData @ 146a565b0

USlateVectorArtData * __thiscall
USlateVectorArtData::USlateVectorArtData(USlateVectorArtData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USlateVectorArtData__6B_;
  (this->VertexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexData).ArrayNum = 0;
  (this->VertexData).ArrayMax = 0;
  (this->IndexData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IndexData).ArrayNum = 0;
  (this->IndexData).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// ~USlateVectorArtData @ 146a58720

void __thiscall USlateVectorArtData::~USlateVectorArtData(USlateVectorArtData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USlateVectorArtData__6B_;
  pFVar1 = (this->IndexData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ConvertToMaterialInstanceDynamic @ 146a62d60

UMaterialInstanceDynamic * __thiscall
USlateVectorArtData::ConvertToMaterialInstanceDynamic(USlateVectorArtData *this)

{
  TObjectPtr<UMaterialInterface> *this_00;
  bool bVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  this_00 = &this->Material;
  if ((this->Material).field0_0x0.DebugPtr != (UMaterialInterface *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if ((bVar1) &&
       ((UMaterialInstanceDynamic *)(this_00->field0_0x0).DebugPtr !=
        (UMaterialInstanceDynamic *)0x0)) {
      return (UMaterialInstanceDynamic *)(this_00->field0_0x0).DebugPtr;
    }
  }
  pUVar3 = UMaterialInstanceDynamic::Create
                     ((this_00->field0_0x0).DebugPtr,(UObject *)this,(FName)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this_00->field0_0x0).DebugPtr = (UMaterialInterface *)pUVar3;
  return pUVar3;
}

// EnsureValidData @ 146a70490

void __thiscall USlateVectorArtData::EnsureValidData(USlateVectorArtData *this)

{
  return;
}

// GetDesiredSize @ 146a74b30

TVector2<double> * __thiscall
USlateVectorArtData::GetDesiredSize
          (USlateVectorArtData *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->ExtentMax).field0_0x0._s_0.Y;
  dVar2 = (this->ExtentMin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->ExtentMax).field0_0x0._s_0.X - (this->ExtentMin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - dVar2;
  return __return_storage_ptr__;
}

// GetExtentMax @ 146a764d0

TVector2<double> * __thiscall
USlateVectorArtData::GetExtentMax
          (USlateVectorArtData *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->ExtentMax).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ExtentMax).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetExtentMin @ 146a764f0

TVector2<double> * __thiscall
USlateVectorArtData::GetExtentMin
          (USlateVectorArtData *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->ExtentMin).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ExtentMin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetIndexData @ 146a76a70

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
USlateVectorArtData::GetIndexData(USlateVectorArtData *this)

{
  return &this->IndexData;
}

// GetMaterial @ 146a770f0

UMaterialInterface * __thiscall USlateVectorArtData::GetMaterial(USlateVectorArtData *this)

{
  return (this->Material).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 146a77d00

UClass * __cdecl USlateVectorArtData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateVectorArtData",
               &Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton,
               StaticRegisterNativesUSlateVectorArtData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateVectorArtData>,
               InternalVTableHelperCtorCaller<USlateVectorArtData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateVectorArtData.InnerSingleton;
}

// GetVertexData @ 146a79760

TArray<FSlateMeshVertex,TSizedDefaultAllocator<32>_> * __thiscall
USlateVectorArtData::GetVertexData(USlateVectorArtData *this)

{
  return &this->VertexData;
}

// PreSave @ 146a8a6d0

void __thiscall
USlateVectorArtData::PreSave(USlateVectorArtData *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// StaticRegisterNativesUSlateVectorArtData @ 146a967f0

void __cdecl USlateVectorArtData::StaticRegisterNativesUSlateVectorArtData(void)

{
  return;
}

