// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146270650

UClass * __cdecl ATestMovieSceneArrayPropertiesActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestMovieSceneArrayPropertiesActor.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneArrayPropertiesActor",
               &Z_Registration_Info_UClass_ATestMovieSceneArrayPropertiesActor.InnerSingleton,
               StaticRegisterNativesATestMovieSceneArrayPropertiesActor,0x378,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestMovieSceneArrayPropertiesActor>,
               InternalVTableHelperCtorCaller<ATestMovieSceneArrayPropertiesActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestMovieSceneArrayPropertiesActor.InnerSingleton;
}

// ATestMovieSceneArrayPropertiesActor @ 1462990a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ATestMovieSceneArrayPropertiesActor * __thiscall
ATestMovieSceneArrayPropertiesActor::ATestMovieSceneArrayPropertiesActor
          (ATestMovieSceneArrayPropertiesActor *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->TestBool = false;
  this->TestEnum = One;
  this->_padding_ = (longlong)&___7ATestMovieSceneArrayPropertiesActor__6B_;
  (this->TestObject).field0_0x0.DebugPtr = (UTestMovieSceneObject *)0x0;
  this->TestInt32 = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TestVector).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TestVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->TestVector).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MultipleFloats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleFloats).ArrayNum = 0;
  (this->MultipleFloats).ArrayMax = 0;
  (this->SingleStruct).First = 0.0;
  (this->SingleStruct).Second = 0.0;
  (this->SingleStruct).Enum = One;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SingleStruct).Vector.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SingleStruct).Vector.field0_0x0._s_0.Y = (double)uVar1;
  (this->SingleStruct).Vector.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SingleStruct).MultipleIntegers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SingleStruct).MultipleIntegers.ArrayNum = 0;
  (this->SingleStruct).MultipleIntegers.ArrayMax = 0;
  (this->SingleStruct).MultipleVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SingleStruct).MultipleVectors.ArrayNum = 0;
  (this->SingleStruct).MultipleVectors.ArrayMax = 0;
  (this->MultipleStructs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleStructs).ArrayNum = 0;
  (this->MultipleStructs).ArrayMax = 0;
  FInstancedStruct::FInstancedStruct(&this->SingleInstancedStruct);
  (this->MultipleInstancedStructs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleInstancedStructs).ArrayNum = 0;
  (this->MultipleInstancedStructs).ArrayMax = 0;
  this->TestSetterFloat = 0.0;
  this->NumSetTestSetterFloatCalls = 0;
  return this;
}

// ~ATestMovieSceneArrayPropertiesActor @ 14629b790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ATestMovieSceneArrayPropertiesActor::~ATestMovieSceneArrayPropertiesActor
          (ATestMovieSceneArrayPropertiesActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ATestMovieSceneArrayPropertiesActor__6B_;
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->MultipleInstancedStructs).AllocatorInstance.Data,
             (this->MultipleInstancedStructs).ArrayNum);
  pFVar1 = (this->MultipleInstancedStructs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset(&this->SingleInstancedStruct);
  DestructItems<FTestMovieSceneStruct,int>
            ((FTestMovieSceneStruct *)(this->MultipleStructs).AllocatorInstance.Data,
             (this->MultipleStructs).ArrayNum);
  pFVar1 = (this->MultipleStructs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SingleStruct).MultipleVectors.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SingleStruct).MultipleIntegers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MultipleFloats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 1462af5e0

UClass * __cdecl ATestMovieSceneArrayPropertiesActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ATestMovieSceneArrayPropertiesActor.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"TestMovieSceneArrayPropertiesActor",
               &Z_Registration_Info_UClass_ATestMovieSceneArrayPropertiesActor.InnerSingleton,
               StaticRegisterNativesATestMovieSceneArrayPropertiesActor,0x378,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ATestMovieSceneArrayPropertiesActor>,
               InternalVTableHelperCtorCaller<ATestMovieSceneArrayPropertiesActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ATestMovieSceneArrayPropertiesActor.InnerSingleton;
}

// StaticRegisterNativesATestMovieSceneArrayPropertiesActor @ 1462bdd90

void __cdecl
ATestMovieSceneArrayPropertiesActor::StaticRegisterNativesATestMovieSceneArrayPropertiesActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ATestMovieSceneArrayPropertiesActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetTestSetterFloat @ 1462bfe00

void __cdecl
ATestMovieSceneArrayPropertiesActor::execSetTestSetterFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)&param_1[0x16].field_0x4 = *(int *)&param_1[0x16].field_0x4 + 1;
  *(undefined4 *)(param_1 + 0x16) = local_res8[0];
  return;
}

