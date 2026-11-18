// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 28

// SetAffectHeightmap_WrapperImpl @ 145ef7080

void __cdecl
ALandscapeBlueprintBrushBase::SetAffectHeightmap_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetAffectWeightmap_WrapperImpl @ 145ef7090

void __cdecl
ALandscapeBlueprintBrushBase::SetAffectWeightmap_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetAffectVisibilityLayer_WrapperImpl @ 145ef70a0

void __cdecl
ALandscapeBlueprintBrushBase::SetAffectVisibilityLayer_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetbUsePowerOfTwoRenderTarget_WrapperImpl @ 145ef70b0

void __cdecl
ALandscapeBlueprintBrushBase::SetbUsePowerOfTwoRenderTarget_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// StaticClass @ 145ef70c0

UClass * __cdecl ALandscapeBlueprintBrushBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeBlueprintBrushBase",
               &Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.InnerSingleton,
               StaticRegisterNativesALandscapeBlueprintBrushBase,0x2e0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscapeBlueprintBrushBase>,
               InternalVTableHelperCtorCaller<ALandscapeBlueprintBrushBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.InnerSingleton;
}

// ALandscapeBlueprintBrushBase @ 145f01f60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeBlueprintBrushBase * __thiscall
ALandscapeBlueprintBrushBase::ALandscapeBlueprintBrushBase
          (ALandscapeBlueprintBrushBase *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bUsePowerOfTwoRenderTarget = true;
  this->_padding_ = (longlong)&___7ALandscapeBlueprintBrushBase__6B_;
  (this->AffectedWeightmapLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AffectedWeightmapLayers).ArrayNum = 0;
  (this->AffectedWeightmapLayers).ArrayMax = 0;
  return this;
}

// ALandscapeBlueprintBrushBase @ 145f01fa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeBlueprintBrushBase * __thiscall
ALandscapeBlueprintBrushBase::ALandscapeBlueprintBrushBase
          (ALandscapeBlueprintBrushBase *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this);
  this->UpdateOnPropertyChange = true;
  this->AffectHeightmap = false;
  this->AffectWeightmap = false;
  this->AffectVisibilityLayer = false;
  this->_padding_ = (longlong)&___7ALandscapeBlueprintBrushBase__6B_;
  (this->AffectedWeightmapLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AffectedWeightmapLayers).ArrayNum = 0;
  (this->AffectedWeightmapLayers).ArrayMax = 0;
  this->bUsePowerOfTwoRenderTarget = true;
  return this;
}

// ~ALandscapeBlueprintBrushBase @ 145f03a60

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
ALandscapeBlueprintBrushBase::~ALandscapeBlueprintBrushBase(ALandscapeBlueprintBrushBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ALandscapeBlueprintBrushBase__6B_;
  pFVar1 = (this->AffectedWeightmapLayers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetBlueprintRenderDependencies @ 145f0e900

void __thiscall
ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies
          (ALandscapeBlueprintBrushBase *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar3;
  UFunction *pUVar4;
  longlong lVar5;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    uVar2 = param_1->ArrayNum;
    _Src = (param_1->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar2;
    if (uVar2 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,0,&local_18.AllocatorInstance,uVar2,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar2 << 3);
    }
  }
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,&local_18);
  _Src_00.Data = local_18.AllocatorInstance.Data;
  if (param_1 != &local_18) {
    iVar3 = local_18.ArrayNum;
    lVar5 = (longlong)local_18.ArrayNum;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = local_18.ArrayNum;
    if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_18.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (iVar3 != 0) {
        memcpy((param_1->AllocatorInstance).Data,_Src_00.Data,lVar5 << 3);
      }
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 145f12a20

UClass * __cdecl ALandscapeBlueprintBrushBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeBlueprintBrushBase",
               &Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.InnerSingleton,
               StaticRegisterNativesALandscapeBlueprintBrushBase,0x2e0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ALandscapeBlueprintBrushBase>,
               InternalVTableHelperCtorCaller<ALandscapeBlueprintBrushBase>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.InnerSingleton;
}

// Initialize @ 145f146b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ALandscapeBlueprintBrushBase::Initialize
          (ALandscapeBlueprintBrushBase *this,TTransform<double> *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TIntPoint<int>_u_0 local_48;
  TIntPoint<int>_u_0 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ALandscapeBlueprintBrushBase_Initialize);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_48._s_0 = *(TIntPoint<int>_u_0_s_0 *)&param_2->field0_0x0;
    local_a8 = (param_1->Rotation).XY.m128d_f64[0];
    dStack_a0 = (param_1->Rotation).XY.m128d_f64[1];
    local_98 = (param_1->Rotation).ZW.m128d_f64[0];
    dStack_90 = (param_1->Rotation).ZW.m128d_f64[1];
    local_40._s_0 = *(TIntPoint<int>_u_0_s_0 *)&param_3->field0_0x0;
    local_88 = (param_1->Translation).XY.m128d_f64[0];
    dStack_80 = (param_1->Translation).XY.m128d_f64[1];
    local_78 = (param_1->Translation).ZW.m128d_f64[0];
    dStack_70 = (param_1->Translation).ZW.m128d_f64[1];
    local_68 = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
    uStack_64 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
    uStack_60 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
    uStack_5c = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
    local_58 = *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64;
    uStack_54 = *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4);
    uStack_50 = *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1);
    uStack_4c = *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc);
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_a8);
  }
  else {
    (**(code **)(this->_padding_ + 0x760))(this,param_1,param_2,param_3);
  }
  return;
}

// Initialize_Implementation @ 145f15210

void __thiscall
ALandscapeBlueprintBrushBase::Initialize_Implementation
          (ALandscapeBlueprintBrushBase *this,TTransform<double> *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145f15213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x780))();
  return;
}

// Initialize_Native @ 145f15220

void __thiscall
ALandscapeBlueprintBrushBase::Initialize_Native
          (ALandscapeBlueprintBrushBase *this,TTransform<double> *param_1,TIntPoint<int> *param_2,
          TIntPoint<int> *param_3)

{
  return;
}

// Render @ 145f1a3b0

UTextureRenderTarget2D * __thiscall
ALandscapeBlueprintBrushBase::Render
          (ALandscapeBlueprintBrushBase *this,bool param_1,UTextureRenderTarget2D *param_2,
          FName *param_3)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined1 local_28 [8];
  UTextureRenderTarget2D *local_20;
  FName local_18;
  UTextureRenderTarget2D *local_10;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ALandscapeBlueprintBrushBase_Render);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = *param_3;
    local_10 = (UTextureRenderTarget2D *)0x0;
    local_28[0] = param_1;
    local_20 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_28);
  }
  else {
    local_10 = (UTextureRenderTarget2D *)
               (**(code **)(this->_padding_ + 0x770))(this,param_1,param_2,param_3);
  }
  return local_10;
}

// RenderLayer @ 145f1a4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
ALandscapeBlueprintBrushBase::RenderLayer
          (ALandscapeBlueprintBrushBase *this,FLandscapeBrushParameters *param_1)

{
  UTextureRenderTarget2D *pUVar1;
  UFunction *this_00;
  UClass *pUVar2;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  TIntPoint<int>_u_0 local_48;
  TObjectPtr<UTextureRenderTarget2D>_u_0 local_40;
  ELandscapeToolTargetType local_38;
  FName local_34;
  UTextureRenderTarget2D *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ALandscapeBlueprintBrushBase_RenderLayer);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_a8 = (param_1->RenderAreaWorldTransform).Rotation.XY.m128d_f64[0];
    dStack_a0 = (param_1->RenderAreaWorldTransform).Rotation.XY.m128d_f64[1];
    local_48 = (param_1->RenderAreaSize).field0_0x0;
    local_98 = (param_1->RenderAreaWorldTransform).Rotation.ZW.m128d_f64[0];
    dStack_90 = (param_1->RenderAreaWorldTransform).Rotation.ZW.m128d_f64[1];
    local_28 = (UTextureRenderTarget2D *)0x0;
    local_88 = (param_1->RenderAreaWorldTransform).Translation.XY.m128d_f64[0];
    dStack_80 = (param_1->RenderAreaWorldTransform).Translation.XY.m128d_f64[1];
    local_78 = (param_1->RenderAreaWorldTransform).Translation.ZW.m128d_f64[0];
    dStack_70 = (param_1->RenderAreaWorldTransform).Translation.ZW.m128d_f64[1];
    local_68 = (param_1->RenderAreaWorldTransform).Scale3D.XY.m128d_f64[0];
    dStack_60 = (param_1->RenderAreaWorldTransform).Scale3D.XY.m128d_f64[1];
    local_58 = (param_1->RenderAreaWorldTransform).Scale3D.ZW.m128d_f64[0];
    dStack_50 = (param_1->RenderAreaWorldTransform).Scale3D.ZW.m128d_f64[1];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->CombinedResult).field0_0x0.DebugPtr,
       pUVar1 != (UTextureRenderTarget2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_40 = (param_1->CombinedResult).field0_0x0;
    local_38 = param_1->LayerType;
    local_34 = param_1->WeightmapLayerName;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_a8);
  }
  else {
    local_28 = (UTextureRenderTarget2D *)(**(code **)(this->_padding_ + 0x768))(this,param_1);
  }
  return local_28;
}

// RenderLayer_Implementation @ 145f1a5f0

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
ALandscapeBlueprintBrushBase::RenderLayer_Implementation
          (ALandscapeBlueprintBrushBase *this,FLandscapeBrushParameters *param_1)

{
  UTextureRenderTarget2D *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145f1a5f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UTextureRenderTarget2D *)(**(code **)(this->_padding_ + 0x778))();
  return pUVar1;
}

// RenderLayer_Native @ 145f1a600

/* WARNING: Enum "ELandscapeToolTargetType": Some values do not have unique names */

UTextureRenderTarget2D * __thiscall
ALandscapeBlueprintBrushBase::RenderLayer_Native
          (ALandscapeBlueprintBrushBase *this,FLandscapeBrushParameters *param_1)

{
  UTextureRenderTarget2D *pUVar1;
  UFunction *this_00;
  UClass *pUVar2;
  bool bVar3;
  undefined1 local_28 [8];
  UTextureRenderTarget2D *local_20;
  FName local_18;
  UTextureRenderTarget2D *local_10;
  
  bVar3 = param_1->LayerType == Heightmap;
  pUVar1 = (param_1->CombinedResult).field0_0x0.DebugPtr;
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ALandscapeBlueprintBrushBase_Render);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1->WeightmapLayerName;
    local_10 = (UTextureRenderTarget2D *)0x0;
    local_28[0] = bVar3;
    local_20 = pUVar1;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_28);
  }
  else {
    local_10 = (UTextureRenderTarget2D *)
               (**(code **)(this->_padding_ + 0x770))
                         (this,bVar3,pUVar1,&param_1->WeightmapLayerName);
  }
  return local_10;
}

// Render_Implementation @ 145f1d0f0

UTextureRenderTarget2D * __thiscall
ALandscapeBlueprintBrushBase::Render_Implementation
          (ALandscapeBlueprintBrushBase *this,bool param_1,UTextureRenderTarget2D *param_2,
          FName *param_3)

{
  return (UTextureRenderTarget2D *)0x0;
}

// RequestLandscapeUpdate @ 145f1d100

void __thiscall
ALandscapeBlueprintBrushBase::RequestLandscapeUpdate
          (ALandscapeBlueprintBrushBase *this,bool param_1)

{
  return;
}

// SetCanAffectHeightmap @ 145f1dd70

void __thiscall
ALandscapeBlueprintBrushBase::SetCanAffectHeightmap(ALandscapeBlueprintBrushBase *this,bool param_1)

{
  return;
}

// SetCanAffectVisibilityLayer @ 145f1dd80

void __thiscall
ALandscapeBlueprintBrushBase::SetCanAffectVisibilityLayer
          (ALandscapeBlueprintBrushBase *this,bool param_1)

{
  return;
}

// SetCanAffectWeightmap @ 145f1dd90

void __thiscall
ALandscapeBlueprintBrushBase::SetCanAffectWeightmap(ALandscapeBlueprintBrushBase *this,bool param_1)

{
  return;
}

// SetUsePowerOfTwoRenderTarget @ 145f1e440

void __thiscall
ALandscapeBlueprintBrushBase::SetUsePowerOfTwoRenderTarget
          (ALandscapeBlueprintBrushBase *this,bool param_1)

{
  return;
}

// StaticRegisterNativesALandscapeBlueprintBrushBase @ 145f1ef20

void __cdecl ALandscapeBlueprintBrushBase::StaticRegisterNativesALandscapeBlueprintBrushBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execInitialize @ 145f20f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ALandscapeBlueprintBrushBase::execInitialize(UObject *param_1,FFrame *param_2,void *param_3)

{
  double *pdVar1;
  FProperty *pFVar2;
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
  float fVar14;
  double *pdVar15;
  uchar *puVar16;
  uchar *puVar17;
  undefined1 auStack_b8 [32];
  uchar local_98 [8];
  uchar local_90 [8];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined1 local_48 [16];
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar10 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar13 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar8 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar11 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_88 = (double)fVar3;
  dStack_80 = (double)fVar6;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78 = (double)fVar9;
  dStack_70 = (double)fVar12;
  local_58 = (double)fVar10;
  dStack_50 = (double)fVar13;
  local_68._8_4_ = SUB84((double)fVar7,0);
  local_68._0_8_ = (double)fVar4;
  local_68._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_38 = (double)fVar11;
  dStack_30 = (double)fVar14;
  local_48._8_4_ = SUB84((double)fVar8,0);
  local_48._0_8_ = (double)fVar5;
  local_48._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pdVar1 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar15 = &local_88;
  if (pdVar1 != (double *)0x0) {
    pdVar15 = pdVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar17 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar16 = local_98;
  if (puVar17 != (uchar *)0x0) {
    puVar16 = puVar17;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  puVar17 = local_90;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,pdVar15,puVar16,puVar17);
  return;
}

// execRender @ 145f21150

void __cdecl
ALandscapeBlueprintBrushBase::execRender(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  bool bVar4;
  int local_res8 [2];
  uchar local_res10 [8];
  undefined8 local_res18 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar4 = local_res8[0] != 0;
  local_res18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x770))(param_1,bVar4,local_res18[0],puVar3);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execRenderLayer @ 145f21470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ALandscapeBlueprintBrushBase::execRenderLayer(UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined8 uVar14;
  double *pdVar15;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8 = (double)fVar2;
  dStack_a0 = (double)fVar5;
  local_98 = (double)fVar8;
  dStack_90 = (double)fVar11;
  local_88._8_4_ = SUB84((double)fVar6,0);
  local_88._0_8_ = (double)fVar3;
  local_88._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_68._8_4_ = SUB84((double)fVar7,0);
  local_68._0_8_ = (double)fVar4;
  local_68._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  local_78 = (double)fVar9;
  dStack_70 = (double)fVar12;
  local_58 = (double)fVar10;
  dStack_50 = (double)fVar13;
  local_48 = 0x7fffffff;
  local_44 = 0x7fffffff;
  local_40 = 0;
  local_38 = 3;
  local_34 = 0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pdVar15 = &local_a8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar15 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar14 = (**(code **)(*(longlong *)param_1 + 0x768))(param_1,pdVar15);
  *(undefined8 *)param_3 = uVar14;
  return;
}

// execRequestLandscapeUpdate @ 145f21a70

void __cdecl
ALandscapeBlueprintBrushBase::execRequestLandscapeUpdate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
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

