// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149fc6de0

UClass * __cdecl APCGUnitTestDummyActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGUnitTestDummyActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnitTestDummyActor",
               &Z_Registration_Info_UClass_APCGUnitTestDummyActor.InnerSingleton,
               StaticRegisterNativesAPCGUnitTestDummyActor,0x4f0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APCGUnitTestDummyActor>,
               InternalVTableHelperCtorCaller<APCGUnitTestDummyActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGUnitTestDummyActor.InnerSingleton;
}

// APCGUnitTestDummyActor @ 149ff0b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APCGUnitTestDummyActor * __thiscall
APCGUnitTestDummyActor::APCGUnitTestDummyActor(APCGUnitTestDummyActor *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UClass *pUVar4;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APCGUnitTestDummyActor__6B_;
  this->IntProperty = 0;
  this->FloatProperty = 0.0;
  this->Int64Property = 0;
  this->DoubleProperty = 0.0;
  this->BoolProperty = false;
  (this->NameProperty).ComparisonIndex = 0;
  (this->NameProperty).Number = 0;
  ::FString::FString(&this->StringProperty,"");
  this->EnumProperty = One;
  (this->Vector4Property).field0_0x0._s_0.W = 1.0;
  (this->Vector4Property).field0_0x0._s_0.X = 0.0;
  (this->Vector4Property).field0_0x0._s_0.Y = 0.0;
  (this->Vector4Property).field0_0x0._s_0.Z = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TransformProperty).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TransformProperty).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformProperty).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformProperty).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TransformProperty).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TransformProperty).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformProperty).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformProperty).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TransformProperty).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TransformProperty).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformProperty).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformProperty).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->SoftObjectPathProperty).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SoftObjectPathProperty).AssetPath.PackageName.Number = 0;
  (this->SoftObjectPathProperty).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SoftObjectPathProperty).AssetPath.AssetName.Number = 0;
  (this->SoftObjectPathProperty).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoftObjectPathProperty).SubPathString.Data.ArrayNum = 0;
  (this->SoftObjectPathProperty).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->SoftClassPathProperty = 0;
  *(undefined8 *)&(this->SoftClassPathProperty).field_0x8 = 0;
  *(undefined8 *)&(this->SoftClassPathProperty).field_0x10 = 0;
  *(undefined8 *)&(this->SoftClassPathProperty).field_0x18 = 0;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  (this->ClassProperty).Class.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ObjectProperty).field0_0x0.DebugPtr = (UPCGDummyGetPropertyTest *)0x0;
  (this->PCGColorProperty).B = 0.0;
  (this->PCGColorProperty).G = 0.0;
  (this->PCGColorProperty).R = 0.0;
  (this->PCGColorProperty).A = 0.0;
  (this->ArrayOfIntsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfIntsProperty).ArrayNum = 0;
  (this->ArrayOfIntsProperty).ArrayMax = 0;
  (this->ArrayOfVectorsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfVectorsProperty).ArrayNum = 0;
  (this->ArrayOfVectorsProperty).ArrayMax = 0;
  (this->ArrayOfStructsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfStructsProperty).ArrayNum = 0;
  (this->ArrayOfStructsProperty).ArrayMax = 0;
  (this->ArrayOfObjectsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfObjectsProperty).ArrayNum = 0;
  (this->ArrayOfObjectsProperty).ArrayMax = 0;
  (this->DummyStruct).IntArrayProperty.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummyStruct).IntArrayProperty.ArrayNum = 0;
  (this->DummyStruct).IntArrayProperty.ArrayMax = 0;
  (this->DummyStruct).FloatProperty = 0.0;
  (this->DummyStruct).Level2Struct.DoubleArrayProperty.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DummyStruct).Level2Struct.DoubleArrayProperty.ArrayNum = 0;
  (this->DummyStruct).Level2Struct.DoubleArrayProperty.ArrayMax = 0;
  (this->SetOfIntsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SetOfIntsProperty).ArrayNum = 0;
  (this->SetOfIntsProperty).ArrayMax = 0;
  return this;
}

// APCGUnitTestDummyActor @ 149ff0cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APCGUnitTestDummyActor * __thiscall
APCGUnitTestDummyActor::APCGUnitTestDummyActor
          (APCGUnitTestDummyActor *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UClass *pUVar4;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APCGUnitTestDummyActor__6B_;
  this->IntProperty = 0;
  this->FloatProperty = 0.0;
  this->Int64Property = 0;
  this->DoubleProperty = 0.0;
  this->BoolProperty = false;
  (this->NameProperty).ComparisonIndex = 0;
  (this->NameProperty).Number = 0;
  ::FString::FString(&this->StringProperty,"");
  this->EnumProperty = One;
  (this->Vector4Property).field0_0x0._s_0.W = 1.0;
  (this->Vector4Property).field0_0x0._s_0.X = 0.0;
  (this->Vector4Property).field0_0x0._s_0.Y = 0.0;
  (this->Vector4Property).field0_0x0._s_0.Z = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TransformProperty).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TransformProperty).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformProperty).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformProperty).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TransformProperty).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TransformProperty).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformProperty).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformProperty).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TransformProperty).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TransformProperty).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TransformProperty).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TransformProperty).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->SoftObjectPathProperty).AssetPath.PackageName.ComparisonIndex = 0;
  (this->SoftObjectPathProperty).AssetPath.PackageName.Number = 0;
  (this->SoftObjectPathProperty).AssetPath.AssetName.ComparisonIndex = 0;
  (this->SoftObjectPathProperty).AssetPath.AssetName.Number = 0;
  (this->SoftObjectPathProperty).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SoftObjectPathProperty).SubPathString.Data.ArrayNum = 0;
  (this->SoftObjectPathProperty).SubPathString.Data.ArrayMax = 0;
  *(undefined8 *)&this->SoftClassPathProperty = 0;
  *(undefined8 *)&(this->SoftClassPathProperty).field_0x8 = 0;
  *(undefined8 *)&(this->SoftClassPathProperty).field_0x10 = 0;
  *(undefined8 *)&(this->SoftClassPathProperty).field_0x18 = 0;
  pUVar4 = Z_Construct_UClass_AActor_NoRegister();
  (this->ClassProperty).Class.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ObjectProperty).field0_0x0.DebugPtr = (UPCGDummyGetPropertyTest *)0x0;
  (this->PCGColorProperty).B = 0.0;
  (this->PCGColorProperty).G = 0.0;
  (this->PCGColorProperty).R = 0.0;
  (this->PCGColorProperty).A = 0.0;
  (this->ArrayOfIntsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfIntsProperty).ArrayNum = 0;
  (this->ArrayOfIntsProperty).ArrayMax = 0;
  (this->ArrayOfVectorsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfVectorsProperty).ArrayNum = 0;
  (this->ArrayOfVectorsProperty).ArrayMax = 0;
  (this->ArrayOfStructsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfStructsProperty).ArrayNum = 0;
  (this->ArrayOfStructsProperty).ArrayMax = 0;
  (this->ArrayOfObjectsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArrayOfObjectsProperty).ArrayNum = 0;
  (this->ArrayOfObjectsProperty).ArrayMax = 0;
  (this->DummyStruct).IntArrayProperty.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DummyStruct).IntArrayProperty.ArrayNum = 0;
  (this->DummyStruct).IntArrayProperty.ArrayMax = 0;
  (this->DummyStruct).FloatProperty = 0.0;
  (this->DummyStruct).Level2Struct.DoubleArrayProperty.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DummyStruct).Level2Struct.DoubleArrayProperty.ArrayNum = 0;
  (this->DummyStruct).Level2Struct.DoubleArrayProperty.ArrayMax = 0;
  (this->SetOfIntsProperty).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SetOfIntsProperty).ArrayNum = 0;
  (this->SetOfIntsProperty).ArrayMax = 0;
  return this;
}

// ~APCGUnitTestDummyActor @ 149ff1060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGUnitTestDummyActor::~APCGUnitTestDummyActor(APCGUnitTestDummyActor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7APCGUnitTestDummyActor__6B_;
  pFVar1 = (this->SetOfIntsProperty).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DummyStruct).Level2Struct.DoubleArrayProperty.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DummyStruct).IntArrayProperty.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayOfObjectsProperty).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayOfStructsProperty).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayOfVectorsProperty).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ArrayOfIntsProperty).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SoftClassPathProperty).field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->SoftObjectPathProperty).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StringProperty).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 149ff7180

UClass * __cdecl APCGUnitTestDummyActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGUnitTestDummyActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnitTestDummyActor",
               &Z_Registration_Info_UClass_APCGUnitTestDummyActor.InnerSingleton,
               StaticRegisterNativesAPCGUnitTestDummyActor,0x4f0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APCGUnitTestDummyActor>,
               InternalVTableHelperCtorCaller<APCGUnitTestDummyActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGUnitTestDummyActor.InnerSingleton;
}

// StaticRegisterNativesAPCGUnitTestDummyActor @ 149ffa460

void __cdecl APCGUnitTestDummyActor::StaticRegisterNativesAPCGUnitTestDummyActor(void)

{
  return;
}

