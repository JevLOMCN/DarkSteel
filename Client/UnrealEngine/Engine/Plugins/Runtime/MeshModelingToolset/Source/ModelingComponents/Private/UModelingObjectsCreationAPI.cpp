// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 22

// StaticClass @ 14caaf120

UClass * __cdecl UModelingObjectsCreationAPI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingObjectsCreationAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingObjectsCreationAPI",
               &Z_Registration_Info_UClass_UModelingObjectsCreationAPI.InnerSingleton,
               StaticRegisterNativesUModelingObjectsCreationAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UModelingObjectsCreationAPI>,
               InternalVTableHelperCtorCaller<UModelingObjectsCreationAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingObjectsCreationAPI.InnerSingleton;
}

// UModelingObjectsCreationAPI @ 14cace1f0

UModelingObjectsCreationAPI * __thiscall
UModelingObjectsCreationAPI::UModelingObjectsCreationAPI
          (UModelingObjectsCreationAPI *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UModelingObjectsCreationAPI__6B_;
  return this;
}

// UModelingObjectsCreationAPI @ 14cace220

UModelingObjectsCreationAPI * __thiscall
UModelingObjectsCreationAPI::UModelingObjectsCreationAPI
          (UModelingObjectsCreationAPI *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UModelingObjectsCreationAPI__6B_;
  return this;
}

// ~UModelingObjectsCreationAPI @ 14cad25b0

void __thiscall
UModelingObjectsCreationAPI::~UModelingObjectsCreationAPI(UModelingObjectsCreationAPI *this)

{
  *(undefined ***)this = &___7UModelingObjectsCreationAPI__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateMaterialObject @ 14cafefb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateMaterialObjectResult * __thiscall
UModelingObjectsCreationAPI::CreateMaterialObject
          (UModelingObjectsCreationAPI *this,FCreateMaterialObjectResult *__return_storage_ptr__,
          FCreateMaterialObjectParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  return __return_storage_ptr__;
}

// CreateMaterialObject @ 14cafefd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateMaterialObjectResult * __thiscall
UModelingObjectsCreationAPI::CreateMaterialObject
          (UModelingObjectsCreationAPI *this,FCreateMaterialObjectResult *__return_storage_ptr__,
          FCreateMaterialObjectParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  return __return_storage_ptr__;
}

// CreateMeshObject @ 14caff0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCreateMeshObjectResult * __thiscall
UModelingObjectsCreationAPI::CreateMeshObject
          (UModelingObjectsCreationAPI *this,FCreateMeshObjectResult *__return_storage_ptr__,
          FCreateMeshObjectParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (__return_storage_ptr__->NewComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (__return_storage_ptr__->NewAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  return __return_storage_ptr__;
}

// CreateMeshObject @ 14caff0f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCreateMeshObjectResult * __thiscall
UModelingObjectsCreationAPI::CreateMeshObject
          (UModelingObjectsCreationAPI *this,FCreateMeshObjectResult *__return_storage_ptr__,
          FCreateMeshObjectParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (__return_storage_ptr__->NewComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  (__return_storage_ptr__->NewAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  return __return_storage_ptr__;
}

// CreateNewActor @ 14caff1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCreateActorResult * __thiscall
UModelingObjectsCreationAPI::CreateNewActor
          (UModelingObjectsCreationAPI *this,FCreateActorResult *__return_storage_ptr__,
          FCreateActorParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewActor).field0_0x0.DebugPtr = (AActor *)0x0;
  return __return_storage_ptr__;
}

// CreateNewActor @ 14caff210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCreateActorResult * __thiscall
UModelingObjectsCreationAPI::CreateNewActor
          (UModelingObjectsCreationAPI *this,FCreateActorResult *__return_storage_ptr__,
          FCreateActorParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewActor).field0_0x0.DebugPtr = (AActor *)0x0;
  return __return_storage_ptr__;
}

// CreateNewComponentOnActor @ 14caff310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCreateComponentResult * __thiscall
UModelingObjectsCreationAPI::CreateNewComponentOnActor
          (UModelingObjectsCreationAPI *this,FCreateComponentResult *__return_storage_ptr__,
          FCreateComponentParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewComponent).field0_0x0.DebugPtr = (UActorComponent *)0x0;
  return __return_storage_ptr__;
}

// CreateNewComponentOnActor @ 14caff330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCreateComponentResult * __thiscall
UModelingObjectsCreationAPI::CreateNewComponentOnActor
          (UModelingObjectsCreationAPI *this,FCreateComponentResult *__return_storage_ptr__,
          FCreateComponentParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewComponent).field0_0x0.DebugPtr = (UActorComponent *)0x0;
  return __return_storage_ptr__;
}

// CreateTextureObject @ 14caff820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateTextureObjectResult * __thiscall
UModelingObjectsCreationAPI::CreateTextureObject
          (UModelingObjectsCreationAPI *this,FCreateTextureObjectResult *__return_storage_ptr__,
          FCreateTextureObjectParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  return __return_storage_ptr__;
}

// CreateTextureObject @ 14caff840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FCreateTextureObjectResult * __thiscall
UModelingObjectsCreationAPI::CreateTextureObject
          (UModelingObjectsCreationAPI *this,FCreateTextureObjectResult *__return_storage_ptr__,
          FCreateTextureObjectParams *param_1)

{
  __return_storage_ptr__->ResultCode = Failed_Unknown;
  (__return_storage_ptr__->NewAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cb12770

UClass * __cdecl UModelingObjectsCreationAPI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModelingObjectsCreationAPI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ModelingObjectsCreationAPI",
               &Z_Registration_Info_UClass_UModelingObjectsCreationAPI.InnerSingleton,
               StaticRegisterNativesUModelingObjectsCreationAPI,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UModelingObjectsCreationAPI>,
               InternalVTableHelperCtorCaller<UModelingObjectsCreationAPI>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModelingObjectsCreationAPI.InnerSingleton;
}

// HasMoveVariants @ 14cb1a8a0

bool __thiscall UModelingObjectsCreationAPI::HasMoveVariants(UModelingObjectsCreationAPI *this)

{
  return false;
}

// StaticRegisterNativesUModelingObjectsCreationAPI @ 14cb3eb50

void __cdecl UModelingObjectsCreationAPI::StaticRegisterNativesUModelingObjectsCreationAPI(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateMaterialObject @ 14cb502f0

void __cdecl
UModelingObjectsCreationAPI::execCreateMaterialObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 *puVar2;
  uchar *puVar3;
  undefined1 local_48 [16];
  uchar local_38 [16];
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined1 *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_48,puVar3);
  *(undefined1 *)param_3 = *puVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar2 + 8) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar2 + 8));
  }
  *(undefined8 *)((longlong)param_3 + 8) = *(undefined8 *)(puVar2 + 8);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execCreateMeshObject @ 14cb503f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UModelingObjectsCreationAPI::execCreateMeshObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 *puVar2;
  FCreateMeshObjectParams *pFVar3;
  undefined1 auStack_718 [32];
  undefined1 local_6f8 [32];
  FCreateMeshObjectParams local_6d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_718;
  FCreateMeshObjectParams::FCreateMeshObjectParams(&local_6d8,true);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_6d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_6d8);
  }
  pFVar3 = &local_6d8;
  if ((FCreateMeshObjectParams *)param_2->MostRecentPropertyAddress !=
      (FCreateMeshObjectParams *)0x0) {
    pFVar3 = (FCreateMeshObjectParams *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined1 *)(**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_6f8,pFVar3);
  *(undefined1 *)param_3 = *puVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar2 + 8) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar2 + 8));
  }
  *(undefined8 *)((longlong)param_3 + 8) = *(undefined8 *)(puVar2 + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar2 + 0x10) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar2 + 0x10));
  }
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar2 + 0x18) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar2 + 0x18));
  }
  *(undefined8 *)((longlong)param_3 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
  FCreateMeshObjectParams::~FCreateMeshObjectParams(&local_6d8);
  return;
}

// execCreateNewActor @ 14cb50540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UModelingObjectsCreationAPI::execCreateNewActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  uchar *puVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  uchar local_b8 [8];
  void *pvStack_b0;
  undefined8 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  pvStack_b0 = (void *)0x0;
  local_a8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_98._8_4_ = SUB84((double)fVar5,0);
  local_98._0_8_ = (double)fVar2;
  local_98._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  local_88._8_4_ = SUB84((double)fVar11,0);
  local_88._0_8_ = (double)fVar8;
  local_88._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
  local_78._8_4_ = SUB84((double)fVar6,0);
  local_78._0_8_ = (double)fVar3;
  local_78._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar12,0);
  local_68._0_8_ = (double)fVar9;
  local_68._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
  local_58._8_4_ = SUB84((double)fVar7,0);
  local_58._0_8_ = (double)fVar4;
  local_58._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_48._8_4_ = SUB84((double)fVar13,0);
  local_48._0_8_ = (double)fVar10;
  local_48._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_38 = 0;
  uStack_30 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  puVar15 = local_b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar14 = (undefined1 *)(**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_c8,puVar15);
  *(undefined1 *)param_3 = *puVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar14 + 8) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar14 + 8));
  }
  *(undefined8 *)((longlong)param_3 + 8) = *(undefined8 *)(puVar14 + 8);
  if (pvStack_b0 != (void *)0x0) {
    FMemory::Free(pvStack_b0);
  }
  return;
}

// execCreateNewComponentOnActor @ 14cb506b0

void __cdecl
UModelingObjectsCreationAPI::execCreateNewComponentOnActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 *puVar2;
  uchar *puVar3;
  undefined1 local_48 [16];
  uchar local_38 [16];
  void *local_28;
  undefined8 local_20;
  undefined2 local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined1 *)(**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,local_48,puVar3);
  *(undefined1 *)param_3 = *puVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar2 + 8) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar2 + 8));
  }
  *(undefined8 *)((longlong)param_3 + 8) = *(undefined8 *)(puVar2 + 8);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execCreateTextureObject @ 14cb507b0

void __cdecl
UModelingObjectsCreationAPI::execCreateTextureObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 *puVar2;
  uchar *puVar3;
  undefined1 local_58 [16];
  uchar local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  void *pvStack_30;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_40 = 0;
  local_38 = 0;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  local_20 = 0;
  ::FString::FString(&local_18,"");
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar3 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined1 *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_58,puVar3);
  *(undefined1 *)param_3 = *puVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(puVar2 + 8) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(puVar2 + 8));
  }
  *(undefined8 *)((longlong)param_3 + 8) = *(undefined8 *)(puVar2 + 8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (pvStack_30 != (void *)0x0) {
    FMemory::Free(pvStack_30);
  }
  return;
}

