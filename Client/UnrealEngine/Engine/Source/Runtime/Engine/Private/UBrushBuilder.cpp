// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// StaticClass @ 147675df0

UClass * __cdecl UBrushBuilder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushBuilder",
               &Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton,
               StaticRegisterNativesUBrushBuilder,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushBuilder>,
               InternalVTableHelperCtorCaller<UBrushBuilder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton;
}

// UBrushBuilder @ 1476889e0

UBrushBuilder * __thiscall UBrushBuilder::UBrushBuilder(UBrushBuilder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBrushBuilder__6B_;
  (this->BitmapFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BitmapFilename).Data.ArrayNum = 0;
  (this->BitmapFilename).Data.ArrayMax = 0;
  (this->ToolTip).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToolTip).Data.ArrayNum = 0;
  (this->ToolTip).Data.ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Polys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polys).ArrayNum = 0;
  (this->Polys).ArrayMax = 0;
  (this->Layer).ComparisonIndex = 0;
  (this->Layer).Number = 0;
  return this;
}

// UBrushBuilder @ 147688a30

UBrushBuilder * __thiscall
UBrushBuilder::UBrushBuilder(UBrushBuilder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBrushBuilder__6B_;
  (this->BitmapFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BitmapFilename).Data.ArrayNum = 0;
  (this->BitmapFilename).Data.ArrayMax = 0;
  (this->ToolTip).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ToolTip).Data.ArrayNum = 0;
  (this->ToolTip).Data.ArrayMax = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Polys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Polys).ArrayNum = 0;
  (this->Polys).ArrayMax = 0;
  (this->Layer).ComparisonIndex = 0;
  (this->Layer).Number = 0;
  ::FString::operator=(&this->BitmapFilename,L"BBGeneric");
  ::FString::operator=(&this->ToolTip,L"BrushBuilderName_Generic");
  this->NotifyBadParams = 1;
  return this;
}

// ~UBrushBuilder @ 14768a9a0

void __thiscall UBrushBuilder::~UBrushBuilder(UBrushBuilder *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBrushBuilder__6B_;
  DestructItems<FBuilderPoly,int>
            ((FBuilderPoly *)(this->Polys).AllocatorInstance.Data,(this->Polys).ArrayNum);
  pFVar1 = (this->Polys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ToolTip).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BitmapFilename).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BadParameters @ 1476949e0

bool __thiscall UBrushBuilder::BadParameters(UBrushBuilder *this,FText *param_1)

{
  return false;
}

// BeginBrush @ 147694ad0

void __thiscall UBrushBuilder::BeginBrush(UBrushBuilder *this,bool param_1,FName param_2)

{
  return;
}

// Build @ 147695be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UBrushBuilder::Build(UBrushBuilder *this,UWorld *param_1,ABrush *param_2)

{
  return false;
}

// EndBrush @ 1476a6650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UBrushBuilder::EndBrush(UBrushBuilder *this,UWorld *param_1,ABrush *param_2)

{
  return false;
}

// GetPolyCount @ 1476b3260

int __thiscall UBrushBuilder::GetPolyCount(UBrushBuilder *this)

{
  return 0;
}

// GetPrivateStaticClass @ 1476b4300

UClass * __cdecl UBrushBuilder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BrushBuilder",
               &Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton,
               StaticRegisterNativesUBrushBuilder,0x80,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrushBuilder>,
               InternalVTableHelperCtorCaller<UBrushBuilder>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBuilder.InnerSingleton;
}

// GetVertex @ 1476b6390

TVector<double> * __thiscall
UBrushBuilder::GetVertex(UBrushBuilder *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetVertexCount @ 1476b63c0

int __thiscall UBrushBuilder::GetVertexCount(UBrushBuilder *this)

{
  return 0;
}

// Poly3i @ 1476be160

void __thiscall
UBrushBuilder::Poly3i
          (UBrushBuilder *this,int param_1,int param_2,int param_3,int param_4,FName param_5,
          bool param_6)

{
  return;
}

// Poly4i @ 1476be170

void __thiscall
UBrushBuilder::Poly4i
          (UBrushBuilder *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          FName param_6,bool param_7)

{
  return;
}

// PolyBegin @ 1476be180

void __thiscall UBrushBuilder::PolyBegin(UBrushBuilder *this,int param_1,FName param_2)

{
  return;
}

// PolyEnd @ 1476be190

void __thiscall UBrushBuilder::PolyEnd(UBrushBuilder *this)

{
  return;
}

// Polyi @ 1476be1a0

void __thiscall UBrushBuilder::Polyi(UBrushBuilder *this,int param_1)

{
  return;
}

// StaticRegisterNativesUBrushBuilder @ 1476ca330

void __cdecl UBrushBuilder::StaticRegisterNativesUBrushBuilder(void)

{
  return;
}

// Vertex3f @ 1476cd380

int __thiscall
UBrushBuilder::Vertex3f(UBrushBuilder *this,float param_1,float param_2,float param_3)

{
  return 0;
}

// Vertexv @ 1476cd390

int __thiscall UBrushBuilder::Vertexv(UBrushBuilder *this,TVector<double> *param_1)

{
  return 0;
}

