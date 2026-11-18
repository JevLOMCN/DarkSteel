// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LandscapePatch
// Functions: 17

// StaticClass @ 14db0b620

UClass * __cdecl ADEPRECATED_LandscapePatchManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADEPRECATED_LandscapePatchManager.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapePatchManager",
               &Z_Registration_Info_UClass_ADEPRECATED_LandscapePatchManager.InnerSingleton,
               StaticRegisterNativesADEPRECATED_LandscapePatchManager,0x2f0,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADEPRECATED_LandscapePatchManager>,
               InternalVTableHelperCtorCaller<ADEPRECATED_LandscapePatchManager>,local_res8,
               ALandscapeBlueprintBrushBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADEPRECATED_LandscapePatchManager.InnerSingleton;
}

// ADEPRECATED_LandscapePatchManager @ 14db12bd0

ADEPRECATED_LandscapePatchManager * __thiscall
ADEPRECATED_LandscapePatchManager::ADEPRECATED_LandscapePatchManager
          (ADEPRECATED_LandscapePatchManager *this,FVTableHelper *param_1)

{
  ALandscapeBlueprintBrushBase::ALandscapeBlueprintBrushBase
            ((ALandscapeBlueprintBrushBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADEPRECATED_LandscapePatchManager__6B_;
  (this->PatchComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchComponents).ArrayNum = 0;
  (this->PatchComponents).ArrayMax = 0;
  return this;
}

// ADEPRECATED_LandscapePatchManager @ 14db12c10

ADEPRECATED_LandscapePatchManager * __thiscall
ADEPRECATED_LandscapePatchManager::ADEPRECATED_LandscapePatchManager
          (ADEPRECATED_LandscapePatchManager *this,FObjectInitializer *param_1)

{
  ALandscapeBlueprintBrushBase::ALandscapeBlueprintBrushBase
            ((ALandscapeBlueprintBrushBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADEPRECATED_LandscapePatchManager__6B_;
  (this->PatchComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PatchComponents).ArrayNum = 0;
  (this->PatchComponents).ArrayMax = 0;
  return this;
}

// ~ADEPRECATED_LandscapePatchManager @ 14db13410

void __thiscall
ADEPRECATED_LandscapePatchManager::~ADEPRECATED_LandscapePatchManager
          (ADEPRECATED_LandscapePatchManager *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADEPRECATED_LandscapePatchManager__6B_;
  DestructItems<TSoftObjectPtr<ULandscapePatchComponent>,int>
            ((TSoftObjectPtr<ULandscapePatchComponent> *)
             (this->PatchComponents).AllocatorInstance.Data,(this->PatchComponents).ArrayNum);
  pFVar1 = (this->PatchComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ALandscapeBlueprintBrushBase::~ALandscapeBlueprintBrushBase((ALandscapeBlueprintBrushBase *)this);
  return;
}

// GetHeightmapCoordsToWorld @ 14db184c0

TTransform<double> * __thiscall
ADEPRECATED_LandscapePatchManager::GetHeightmapCoordsToWorld
          (ADEPRECATED_LandscapePatchManager *this,TTransform<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14db18bf0

UClass * __cdecl ADEPRECATED_LandscapePatchManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADEPRECATED_LandscapePatchManager.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LandscapePatch",L"LandscapePatchManager",
               &Z_Registration_Info_UClass_ADEPRECATED_LandscapePatchManager.InnerSingleton,
               StaticRegisterNativesADEPRECATED_LandscapePatchManager,0x2f0,8,
               CLASS_Intrinsic|CLASS_Deprecated|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADEPRECATED_LandscapePatchManager>,
               InternalVTableHelperCtorCaller<ADEPRECATED_LandscapePatchManager>,local_res8,
               ALandscapeBlueprintBrushBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADEPRECATED_LandscapePatchManager.InnerSingleton;
}

// IsEditorOnly @ 14db1b690

bool __thiscall
ADEPRECATED_LandscapePatchManager::IsEditorOnly(ADEPRECATED_LandscapePatchManager *this)

{
  return true;
}

// NeedsLoadForClient @ 14db1ba80

bool __thiscall
ADEPRECATED_LandscapePatchManager::NeedsLoadForClient(ADEPRECATED_LandscapePatchManager *this)

{
  return false;
}

// NeedsLoadForServer @ 14db1baa0

bool __thiscall
ADEPRECATED_LandscapePatchManager::NeedsLoadForServer(ADEPRECATED_LandscapePatchManager *this)

{
  return false;
}

// SetTargetLandscape @ 14db1c2c0

void __thiscall
ADEPRECATED_LandscapePatchManager::SetTargetLandscape
          (ADEPRECATED_LandscapePatchManager *this,ALandscape *param_1)

{
  return;
}

// StaticRegisterNativesADEPRECATED_LandscapePatchManager @ 14db1d4a0

void __cdecl
ADEPRECATED_LandscapePatchManager::StaticRegisterNativesADEPRECATED_LandscapePatchManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_ADEPRECATED_LandscapePatchManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddPatch @ 14db1d980

void __cdecl
ADEPRECATED_LandscapePatchManager::execAddPatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execContainsPatch @ 14db1dbd0

void __cdecl
ADEPRECATED_LandscapePatchManager::execContainsPatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetIndexOfPatch @ 14db1df80

void __cdecl
ADEPRECATED_LandscapePatchManager::execGetIndexOfPatch
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execMovePatchToIndex @ 14db1e7e0

void __cdecl
ADEPRECATED_LandscapePatchManager::execMovePatchToIndex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execRemovePatch @ 14db1e8c0

void __cdecl
ADEPRECATED_LandscapePatchManager::execRemovePatch(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetTargetLandscape @ 14db1f420

void __cdecl
ADEPRECATED_LandscapePatchManager::execSetTargetLandscape
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x788))(param_1,local_res8);
  return;
}

