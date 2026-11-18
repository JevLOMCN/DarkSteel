// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b4bd380

UClass * __cdecl UDS_InteractBrush::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractBrush.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractBrush",
               &Z_Registration_Info_UClass_UDS_InteractBrush.InnerSingleton,
               StaticRegisterNativesUDS_InteractBrush,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractBrush>,
               InternalVTableHelperCtorCaller<UDS_InteractBrush>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractBrush.InnerSingleton;
}

// UDS_InteractBrush @ 14b4c02a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_InteractBrush * __thiscall
UDS_InteractBrush::UDS_InteractBrush(UDS_InteractBrush *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bOverrideCullRadius = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->DrawOnlyDrawingBoardsClassList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->DrawOnlyDrawingBoardsClassList).ArrayNum = 0;
  (this->DrawOnlyDrawingBoardsClassList).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->MovementTolerance).field0_0x0._s_0.X = 0.1;
  (this->MovementTolerance).field0_0x0._s_0.Y = 0.1;
  (this->MovementTolerance).field0_0x0._s_0.Z = 0.1;
  this->CullRadiusOverride = 0.0;
  this->bDrawEveryFrame = false;
  this->bDrawOnMovement = true;
  this->bUseDrawOnlyDrawingBoardsClassList = false;
  this->bUseMultiDraw = false;
  this->MaxDrawDistance = 10.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CurrentT).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CurrentT).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentT).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentT).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CurrentT).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CurrentT).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentT).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentT).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CurrentT).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CurrentT).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentT).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentT).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousT).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousT).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousT).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousT).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousT).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousT).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousT).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousT).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousT).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousT).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousT).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousT).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousDrawnT).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousDrawnT).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousDrawnT).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousDrawnT).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousDrawnT).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousDrawnT).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousDrawnT).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousDrawnT).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousDrawnT).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousDrawnT).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousDrawnT).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousDrawnT).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->OverlappingInteractVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingInteractVolumes).ArrayNum = 0;
  (this->OverlappingInteractVolumes).ArrayMax = 0;
  (this->DrawOnDrawingBoards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawOnDrawingBoards).ArrayNum = 0;
  (this->DrawOnDrawingBoards).ArrayMax = 0;
  this->bBrushActiveInVolume = false;
  this->bSucceededDrawnThisTime = false;
  this->bSucceededDrawnLastTime = false;
  return this;
}

// ~UDS_InteractBrush @ 14b4c1e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_InteractBrush::~UDS_InteractBrush(UDS_InteractBrush *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->DrawOnDrawingBoards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverlappingInteractVolumes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DrawOnlyDrawingBoardsClassList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// DrawOnRT @ 14b4c3730

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
UDS_InteractBrush::DrawOnRT
          (UDS_InteractBrush *this,ADS_WorldDrawingBoard *param_1,UCanvas *param_2,
          TVector2<double> *param_3,float param_4,int param_5)

{
  UFunction *this_00;
  UClass *pUVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ADS_WorldDrawingBoard *local_38;
  UCanvas *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float local_18;
  int local_14;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UDS_InteractBrush_DrawOnRT);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  local_48 = *(undefined4 *)&param_3->field0_0x0;
  uStack_44 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
  uStack_40 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_4;
    local_14 = param_5;
    local_38 = param_1;
    local_30 = param_2;
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_38);
  }
  else {
    (**(code **)(this->_padding_ + 0x640))(this,param_1,param_2,&local_48,param_4,param_5);
  }
  return;
}

// GetPrivateStaticClass @ 14b4c3b20

UClass * __cdecl UDS_InteractBrush::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractBrush.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractBrush",
               &Z_Registration_Info_UClass_UDS_InteractBrush.InnerSingleton,
               StaticRegisterNativesUDS_InteractBrush,0x400,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractBrush>,
               InternalVTableHelperCtorCaller<UDS_InteractBrush>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractBrush.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractBrush @ 14b4c5510

void __cdecl UDS_InteractBrush::StaticRegisterNativesUDS_InteractBrush(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_InteractBrush_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateDrawInfo @ 14b4c5780

bool __thiscall UDS_InteractBrush::UpdateDrawInfo(UDS_InteractBrush *this)

{
  undefined1 uVar1;
  UFunction *this_00;
  UClass *pUVar2;
  char local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UDS_InteractBrush_UpdateDrawInfo);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = '\0';
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0] != '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00014b4c57e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x648))(this);
  return (bool)uVar1;
}

// execDrawBrush @ 14b4c7200

void __cdecl UDS_InteractBrush::execDrawBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x18].field_0x10 = 1;
  return;
}

// execDrawOnRT @ 14b4c7230

void __cdecl UDS_InteractBrush::execDrawOnRT(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_48[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28 = local_38;
  uStack_20 = uStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x640))
            (param_1,local_48[0],local_res20,&local_28,local_res10[0],local_res8[0]);
  return;
}

// execGetCullRadius @ 14b4c7400

void __cdecl UDS_InteractBrush::execGetCullRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0xf].field_0x8 != '\0') {
    *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xf].field_0xc;
    return;
  }
  auVar1._0_8_ = *(double *)&param_1[0xe].field_0x20 * *(double *)&param_1[0xe].field_0x20;
  auVar1._8_8_ = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(double *)(param_1 + 0xf) * *(double *)(param_1 + 0xf) + auVar1._0_8_;
  auVar2 = sqrtpd(auVar1,auVar2);
  *(float *)param_3 = (float)auVar2._0_8_;
  return;
}

// execGetCurrentDrawSucceed @ 14b4c7470

void __cdecl
UDS_InteractBrush::execGetCurrentDrawSucceed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x19].field_0x11;
  return;
}

// execGetCurrentTransform @ 14b4c74a0

void __cdecl
UDS_InteractBrush::execGetCurrentTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[0x11].field_0x10;
  uVar2 = *(undefined8 *)&param_1[0x11].field_0x18;
  uVar3 = *(undefined8 *)&param_1[0x11].field_0x20;
  uVar4 = *(undefined8 *)(param_1 + 0x12);
  uVar5 = *(undefined8 *)&param_1[0x12].field_0x8;
  uVar6 = *(undefined8 *)&param_1[0x12].field_0x10;
  uVar7 = *(undefined8 *)&param_1[0x12].field_0x18;
  uVar8 = *(undefined8 *)&param_1[0x12].field_0x20;
  uVar9 = *(undefined8 *)(param_1 + 0x13);
  uVar10 = *(undefined8 *)&param_1[0x13].field_0x8;
  uVar11 = *(undefined8 *)&param_1[0x13].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar11;
  return;
}

// execGetLastDrawSucceed @ 14b4c75b0

void __cdecl
UDS_InteractBrush::execGetLastDrawSucceed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x19].field_0x12;
  return;
}

// execUpdateDrawInfo @ 14b4c7cd0

void __cdecl UDS_InteractBrush::execUpdateDrawInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x648))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// UDS_InteractBrush @ 14b999a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDS_InteractBrush * __thiscall UDS_InteractBrush::UDS_InteractBrush(UDS_InteractBrush *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FObjectInitializer *pFVar4;
  
  pFVar4 = FObjectInitializer::Get();
  USceneComponent::USceneComponent((USceneComponent *)this,pFVar4);
  this->bOverrideCullRadius = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->CullRadiusOverride = 0.0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->bDrawEveryFrame = false;
  this->bDrawOnMovement = true;
  this->bUseDrawOnlyDrawingBoardsClassList = false;
  (this->DrawOnlyDrawingBoardsClassList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawOnlyDrawingBoardsClassList).ArrayNum = 0;
  (this->DrawOnlyDrawingBoardsClassList).ArrayMax = 0;
  this->bUseMultiDraw = false;
  this->MaxDrawDistance = 10.0;
  (this->MovementTolerance).field0_0x0._s_0.X = 0.1;
  (this->MovementTolerance).field0_0x0._s_0.Y = 0.1;
  (this->MovementTolerance).field0_0x0._s_0.Z = 0.1;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->CurrentT).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->CurrentT).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentT).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentT).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->CurrentT).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->CurrentT).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentT).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentT).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->CurrentT).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->CurrentT).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->CurrentT).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->CurrentT).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousT).Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousT).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousT).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousT).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousT).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousT).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousT).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousT).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousT).Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousT).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousT).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousT).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousDrawnT).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousDrawnT).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousDrawnT).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousDrawnT).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousDrawnT).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousDrawnT).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousDrawnT).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousDrawnT).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousDrawnT).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousDrawnT).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PreviousDrawnT).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PreviousDrawnT).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->OverlappingInteractVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingInteractVolumes).ArrayNum = 0;
  (this->OverlappingInteractVolumes).ArrayMax = 0;
  (this->DrawOnDrawingBoards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawOnDrawingBoards).ArrayNum = 0;
  (this->DrawOnDrawingBoards).ArrayMax = 0;
  this->bBrushActiveInVolume = false;
  this->bSucceededDrawnThisTime = false;
  this->bSucceededDrawnLastTime = false;
  return this;
}

// operator() @ 14b99a020

void __thiscall `UDS_InteractBrush::BeginPlay'::__l2::<lambda_1>::operator()(void *this)

{
  FTokenizedMessage *pFVar1;
  FMessageLog *this_00;
  FText *pFVar2;
  TSharedRef<FTokenizedMessage,1> *pTVar3;
  FString *pFVar4;
  TSharedRef<FTextToken,1> *pTVar5;
  TSharedRef<FUObjectToken,1> *pTVar6;
  FName local_res8;
  TSharedRef<IMessageToken,1> local_218;
  TSharedRef<IMessageToken,1> local_208;
  TSharedRef<IMessageToken,1> local_1f8;
  TSharedRef<IMessageToken,1> local_1e8;
  TSharedRef<IMessageToken,1> local_1d8;
  TSharedRef<IMessageToken,1> local_1c8;
  TSharedRef<FTokenizedMessage,1> local_1b8;
  TSharedRef<FTextToken,1> local_1a8;
  FText local_198;
  FString local_188;
  TSharedRef<FTokenizedMessage,1> local_178;
  TSharedRef<FUObjectToken,1> local_168;
  FText local_158;
  TSharedRef<FTokenizedMessage,1> local_148;
  TSharedRef<FTextToken,1> local_138;
  FText local_128;
  FString local_118;
  TSharedRef<FTokenizedMessage,1> local_108;
  TSharedRef<FTextToken,1> local_f8;
  FText local_e8;
  FString local_d8;
  TSharedRef<FTokenizedMessage,1> local_c8;
  TSharedRef<FUObjectToken,1> local_b8;
  FText local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  TSharedRef<FTextToken,1> local_88;
  FText local_78;
  FString local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"PIE");
  this_00 = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar2 = FText::FText(&local_48);
  pTVar3 = FMessageLog::Warning(this_00,&local_58,pFVar2);
  pFVar1 = pTVar3->Object;
  pFVar4 = ::FString::FString(&local_68,L"Interact Brush: ");
  pFVar2 = FText::FromString(&local_78,pFVar4);
  pTVar5 = FTextToken::Create(&local_88,pFVar2,true);
  local_1c8.Object = (IMessageToken *)pTVar5->Object;
  local_1c8.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = FTokenizedMessage::AddToken(pFVar1,&local_98,&local_1c8);
  pFVar1 = pTVar3->Object;
  pFVar2 = FText::FText(&local_a8);
  pTVar6 = FUObjectToken::Create(&local_b8,*(UObject **)this,pFVar2);
  local_1d8.Object = (IMessageToken *)pTVar6->Object;
  local_1d8.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = FTokenizedMessage::AddToken(pFVar1,&local_c8,&local_1d8);
  pFVar1 = pTVar3->Object;
  pFVar4 = ::FString::FString(&local_d8,
                              L"ISN\'T attached to an Actor with Collisitn. Interact Volume will not work with it."
                             );
  pFVar2 = FText::FromString(&local_e8,pFVar4);
  pTVar5 = FTextToken::Create(&local_f8,pFVar2,true);
  local_1e8.Object = (IMessageToken *)pTVar5->Object;
  local_1e8.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = FTokenizedMessage::AddToken(pFVar1,&local_108,&local_1e8);
  pFVar1 = pTVar3->Object;
  pFVar4 = ::FString::FString(&local_118,L"Please make Actor: ");
  pFVar2 = FText::FromString(&local_128,pFVar4);
  pTVar5 = FTextToken::Create(&local_138,pFVar2,true);
  local_1f8.Object = (IMessageToken *)pTVar5->Object;
  local_1f8.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = FTokenizedMessage::AddToken(pFVar1,&local_148,&local_1f8);
  pFVar1 = pTVar3->Object;
  pFVar2 = FText::FText(&local_158);
  pTVar6 = FUObjectToken::Create(&local_168,*(UObject **)(*(longlong *)this + 0xa8),pFVar2);
  local_208.Object = (IMessageToken *)pTVar6->Object;
  local_208.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = FTokenizedMessage::AddToken(pFVar1,&local_178,&local_208);
  pFVar1 = pTVar3->Object;
  pFVar4 = ::FString::FString(&local_188,L"has query collision to \'WorldDynamic\'");
  pFVar2 = FText::FromString(&local_198,pFVar4);
  pTVar5 = FTextToken::Create(&local_1a8,pFVar2,true);
  local_218.Object = (IMessageToken *)pTVar5->Object;
  local_218.SharedReferenceCount.ReferenceController =
       (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(pFVar1,&local_1b8,&local_218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  if (local_e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// BeginPlay @ 14b99bd00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_InteractBrush::BeginPlay(UDS_InteractBrush *this)

{
  undefined8 *puVar1;
  int iVar2;
  AActor *pAVar3;
  bool bVar4;
  int iVar5;
  UWorld *this_00;
  UDS_InteractiveWorldSubsystem *pUVar6;
  UActorComponent *pUVar7;
  UDS_InteractBrush *pUVar8;
  UClass *pUVar9;
  UDS_InteractBrush *pUVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  UDS_InteractBrush *pUVar13;
  UDS_InteractBrush *local_res8;
  FName local_res10;
  undefined8 *local_38;
  ulonglong local_30;
  FString local_28;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_res8 = this;
  pUVar6 = UWorld::GetSubsystem<UDS_InteractiveWorldSubsystem>(this_00);
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UDS_InteractBrush_*_const_&>(&pUVar6->Brushes,&local_res8);
  if (4 < (byte)LogTemp._0_1_) {
    local_res10 = (FName)local_res8->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  UpdateDrawOnDrawingBoards(this);
  iVar2 = (this->DrawOnDrawingBoards).ArrayNum;
  if (iVar2 < 1) {
    if ((iVar2 == 0) && (this->bBrushActiveInVolume != false)) {
      this->bBrushActiveInVolume = false;
      this->bSucceededDrawnThisTime = false;
      goto LAB_14b99bdd7;
    }
  }
  else if (this->bBrushActiveInVolume == false) {
    this->bBrushActiveInVolume = true;
    this->bSucceededDrawnThisTime = false;
LAB_14b99bdd7:
    this->bSucceededDrawnLastTime = false;
  }
  pAVar3 = (AActor *)this->_padding_;
  local_res10 = (FName)this;
  local_res8 = (UDS_InteractBrush *)Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_res8 != (UDS_InteractBrush *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar7 = AActor::GetComponentByClass(pAVar3,(TSubclassOf<UActorComponent>)&local_res8);
  if (pUVar7 == (UActorComponent *)0x0) {
    `UDS_InteractBrush::BeginPlay'::__l2::<lambda_1>::operator()(&local_res10);
  }
  pAVar3 = (AActor *)this->_padding_;
  pUVar10 = (UDS_InteractBrush *)0x0;
  pUVar13 = (UDS_InteractBrush *)0x0;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  pUVar8 = (UDS_InteractBrush *)Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar8 == (UDS_InteractBrush *)0x0) goto LAB_14b99be89;
  }
  else {
    pUVar13 = pUVar10;
    if (pUVar8 == (UDS_InteractBrush *)0x0) goto LAB_14b99be89;
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar13 = pUVar10;
  if (pUVar9 != (UClass *)0x0) {
    iVar2 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar2 * 8) != &pUVar9->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar13 = pUVar8;
    }
  }
LAB_14b99be89:
  pUVar10 = (UDS_InteractBrush *)Z_Construct_UClass_UActorComponent_NoRegister();
  local_res8 = pUVar8;
  if (pUVar13 == pUVar10) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_InteractBrush *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (pAVar3,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)&local_38);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_InteractBrush *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponents<UPrimitiveComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (pAVar3,(TSubclassOf<UActorComponent>)&local_res8,
               (TArray<UPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)&local_38);
  }
  iVar2 = (int)local_30;
  uVar11 = (ulonglong)(int)local_30;
  puVar1 = local_38 + uVar11;
  puVar12 = local_38;
  while( true ) {
    if ((int)uVar11 != iVar2) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (puVar12 == puVar1) break;
    iVar5 = (**(code **)(*(longlong *)*puVar12 + 0x5e0))();
    if (((iVar5 == 1) || (iVar5 = (**(code **)(*(longlong *)*puVar12 + 0x5e0))(), iVar5 == 3)) &&
       (iVar5 = (**(code **)(*(longlong *)*puVar12 + 0x5e8))((longlong *)*puVar12,1), iVar5 != 0))
    goto LAB_14b99bf4f;
    uVar11 = local_30 & 0xffffffff;
    puVar12 = puVar12 + 1;
  }
  `UDS_InteractBrush::BeginPlay'::__l2::<lambda_1>::operator()(&local_res10);
LAB_14b99bf4f:
  AActor::UpdateOverlaps((AActor *)this->_padding_,true);
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// DrawOnRT_Implementation @ 14b9a7230

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
UDS_InteractBrush::DrawOnRT_Implementation
          (UDS_InteractBrush *this,ADS_WorldDrawingBoard *param_1,UCanvas *param_2,
          TVector2<double> *param_3,float param_4,int param_5)

{
  return;
}

// EndPlay @ 14b9a7900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_InteractBrush::EndPlay(UDS_InteractBrush *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ADS_WorldInteractVolume *this_00;
  UWorld *this_01;
  UDS_InteractiveWorldSubsystem *pUVar3;
  FScriptContainerElement *pFVar4;
  UDS_InteractBrush *local_res8;
  FName local_res18;
  FString local_28;
  
  USceneComponent::EndPlay((USceneComponent *)this,param_1);
  this_01 = (UWorld *)this->_padding_;
  if (this_01 == (UWorld *)0x0) {
    this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  local_res8 = this;
  pUVar3 = UWorld::GetSubsystem<UDS_InteractiveWorldSubsystem>(this_01);
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove(&pUVar3->Brushes,&local_res8);
  if (4 < (byte)LogTemp._0_1_) {
    local_res18 = (FName)local_res8->_padding_;
    ::FName::ToString(&local_res18,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = (this->OverlappingInteractVolumes).AllocatorInstance.Data;
  iVar2 = (this->OverlappingInteractVolumes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OverlappingInteractVolumes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(ADS_WorldInteractVolume **)pFVar4;
    local_res8 = this;
    TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove
              (&this_00->OverlappingBrushes,&local_res8);
    ADS_WorldInteractVolume::UpdateDrawingBoardsActive(this_00);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// EnterArea @ 14b9a7a80

void __thiscall
UDS_InteractBrush::EnterArea(UDS_InteractBrush *this,ADS_WorldInteractVolume *param_1)

{
  int *piVar1;
  TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ADS_WorldInteractVolume *local_res10 [3];
  
  pTVar2 = &this->OverlappingInteractVolumes;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->OverlappingInteractVolumes).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->OverlappingInteractVolumes).ArrayNum;
  piVar1 = &(this->OverlappingInteractVolumes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->OverlappingInteractVolumes).ArrayNum = iVar6 + 1;
  *(ADS_WorldInteractVolume **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_res10[0];
  UpdateDrawOnDrawingBoards(this);
  iVar6 = (this->DrawOnDrawingBoards).ArrayNum;
  if (iVar6 < 1) {
    if ((iVar6 == 0) && (this->bBrushActiveInVolume != false)) {
      this->bBrushActiveInVolume = false;
      this->bSucceededDrawnThisTime = false;
      this->bSucceededDrawnLastTime = false;
    }
  }
  else if (this->bBrushActiveInVolume == false) {
    this->bBrushActiveInVolume = true;
    this->bSucceededDrawnThisTime = false;
    this->bSucceededDrawnLastTime = false;
    return;
  }
  return;
}

// FinishDraw @ 14b9aa2e0

void __thiscall UDS_InteractBrush::FinishDraw(UDS_InteractBrush *this)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (this->CurrentT).Rotation.XY.m128d_f64[0];
  dVar3 = (this->CurrentT).Rotation.XY.m128d_f64[1];
  bVar1 = this->bSucceededDrawnThisTime;
  this->bSucceededDrawnLastTime = bVar1;
  dVar4 = (this->CurrentT).Rotation.ZW.m128d_f64[0];
  dVar5 = (this->CurrentT).Rotation.ZW.m128d_f64[1];
  (this->PreviousT).Rotation.XY.m128d_f64[0] = dVar2;
  (this->PreviousT).Rotation.XY.m128d_f64[1] = dVar3;
  dVar2 = (this->CurrentT).Translation.XY.m128d_f64[0];
  dVar3 = (this->CurrentT).Translation.XY.m128d_f64[1];
  (this->PreviousT).Rotation.ZW.m128d_f64[0] = dVar4;
  (this->PreviousT).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar4 = (this->CurrentT).Translation.ZW.m128d_f64[0];
  dVar5 = (this->CurrentT).Translation.ZW.m128d_f64[1];
  (this->PreviousT).Translation.XY.m128d_f64[0] = dVar2;
  (this->PreviousT).Translation.XY.m128d_f64[1] = dVar3;
  dVar2 = (this->CurrentT).Scale3D.XY.m128d_f64[0];
  dVar3 = (this->CurrentT).Scale3D.XY.m128d_f64[1];
  (this->PreviousT).Translation.ZW.m128d_f64[0] = dVar4;
  (this->PreviousT).Translation.ZW.m128d_f64[1] = dVar5;
  dVar4 = (this->CurrentT).Scale3D.ZW.m128d_f64[0];
  dVar5 = (this->CurrentT).Scale3D.ZW.m128d_f64[1];
  (this->PreviousT).Scale3D.XY.m128d_f64[0] = dVar2;
  (this->PreviousT).Scale3D.XY.m128d_f64[1] = dVar3;
  (this->PreviousT).Scale3D.ZW.m128d_f64[0] = dVar4;
  (this->PreviousT).Scale3D.ZW.m128d_f64[1] = dVar5;
  if (bVar1 != false) {
    dVar2 = (this->CurrentT).Rotation.XY.m128d_f64[1];
    dVar3 = (this->CurrentT).Rotation.ZW.m128d_f64[0];
    dVar4 = (this->CurrentT).Rotation.ZW.m128d_f64[1];
    (this->PreviousDrawnT).Rotation.XY.m128d_f64[0] = (this->CurrentT).Rotation.XY.m128d_f64[0];
    (this->PreviousDrawnT).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (this->CurrentT).Translation.XY.m128d_f64[0];
    dVar5 = (this->CurrentT).Translation.XY.m128d_f64[1];
    (this->PreviousDrawnT).Rotation.ZW.m128d_f64[0] = dVar3;
    (this->PreviousDrawnT).Rotation.ZW.m128d_f64[1] = dVar4;
    dVar3 = (this->CurrentT).Translation.ZW.m128d_f64[0];
    dVar4 = (this->CurrentT).Translation.ZW.m128d_f64[1];
    (this->PreviousDrawnT).Translation.XY.m128d_f64[0] = dVar2;
    (this->PreviousDrawnT).Translation.XY.m128d_f64[1] = dVar5;
    dVar2 = (this->CurrentT).Scale3D.XY.m128d_f64[0];
    dVar5 = (this->CurrentT).Scale3D.XY.m128d_f64[1];
    (this->PreviousDrawnT).Translation.ZW.m128d_f64[0] = dVar3;
    (this->PreviousDrawnT).Translation.ZW.m128d_f64[1] = dVar4;
    dVar3 = (this->CurrentT).Scale3D.ZW.m128d_f64[0];
    dVar4 = (this->CurrentT).Scale3D.ZW.m128d_f64[1];
    (this->PreviousDrawnT).Scale3D.XY.m128d_f64[0] = dVar2;
    (this->PreviousDrawnT).Scale3D.XY.m128d_f64[1] = dVar5;
    (this->PreviousDrawnT).Scale3D.ZW.m128d_f64[0] = dVar3;
    (this->PreviousDrawnT).Scale3D.ZW.m128d_f64[1] = dVar4;
  }
  return;
}

// LeaveArea @ 14b9b81f0

void __thiscall
UDS_InteractBrush::LeaveArea(UDS_InteractBrush *this,ADS_WorldInteractVolume *param_1)

{
  int iVar1;
  ADS_WorldInteractVolume *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->OverlappingInteractVolumes,local_res10);
  UpdateDrawOnDrawingBoards(this);
  iVar1 = (this->DrawOnDrawingBoards).ArrayNum;
  if (iVar1 < 1) {
    if ((iVar1 == 0) && (this->bBrushActiveInVolume != false)) {
      this->bBrushActiveInVolume = false;
      this->bSucceededDrawnThisTime = false;
      this->bSucceededDrawnLastTime = false;
    }
  }
  else if (this->bBrushActiveInVolume == false) {
    this->bBrushActiveInVolume = true;
    this->bSucceededDrawnThisTime = false;
    this->bSucceededDrawnLastTime = false;
    return;
  }
  return;
}

// PreDrawOnRT @ 14b9c05a0

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
UDS_InteractBrush::PreDrawOnRT
          (UDS_InteractBrush *this,ADS_WorldDrawingBoard *param_1,UCanvas *param_2,
          TVector2<double> *param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  TVector2<double>_u_0 local_48;
  double local_38;
  
  local_38 = (this->CurrentT).Translation.ZW.m128d_f64[0];
  dVar3 = (this->PreviousT).Translation.XY.m128d_f64[0] -
          (this->CurrentT).Translation.XY.m128d_f64[0];
  dVar4 = (this->PreviousT).Translation.XY.m128d_f64[1] -
          (this->CurrentT).Translation.XY.m128d_f64[1];
  fVar5 = (float)SQRT(dVar4 * dVar4 + dVar3 * dVar3);
  if (((this->bUseMultiDraw != false) && (this->MaxDrawDistance < fVar5)) &&
     (this->bSucceededDrawnLastTime != false)) {
    iVar1 = 1;
    iVar2 = -((int)ROUND(__real_bf000000 - (fVar5 + fVar5) / this->MaxDrawDistance) >> 1);
    if (1 < iVar2) {
      dVar3 = __real_3ff0000000000000 / (double)iVar2;
      do {
        local_48._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_48._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        DrawOnRT(this,param_1,param_2,(TVector2<double> *)&local_48._s_0,
                 (float)((double)iVar1 * dVar3),iVar2);
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  local_48._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  DrawOnRT(this,param_1,param_2,(TVector2<double> *)&local_48._s_0,__real_3f800000,1);
  this->bSucceededDrawnThisTime = true;
  return;
}

// PrepareForDrawing @ 14b9c11b0

bool __thiscall
UDS_InteractBrush::PrepareForDrawing
          (UDS_InteractBrush *this,
          TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_> *param_1)

{
  TTransform<double> *pTVar1;
  TObjectPtr<UClass>_u_0 *pTVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  TObjectPtr<UClass>_u_0 *pTVar10;
  TObjectPtr<UClass>_u_0 local_res8;
  
  bVar8 = this->bBrushActiveInVolume;
  pTVar1 = &this->CurrentT;
  dVar4 = (pTVar1->Rotation).XY.m128d_f64[0];
  dVar5 = (this->CurrentT).Rotation.XY.m128d_f64[1];
  dVar6 = (this->CurrentT).Rotation.ZW.m128d_f64[0];
  dVar7 = (this->CurrentT).Rotation.ZW.m128d_f64[1];
  this->bSucceededDrawnThisTime = false;
  (this->PreviousT).Rotation.XY.m128d_f64[0] = dVar4;
  (this->PreviousT).Rotation.XY.m128d_f64[1] = dVar5;
  dVar4 = (this->CurrentT).Translation.XY.m128d_f64[0];
  dVar5 = (this->CurrentT).Translation.XY.m128d_f64[1];
  (this->PreviousT).Rotation.ZW.m128d_f64[0] = dVar6;
  (this->PreviousT).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar6 = (this->CurrentT).Translation.ZW.m128d_f64[0];
  dVar7 = (this->CurrentT).Translation.ZW.m128d_f64[1];
  (this->PreviousT).Translation.XY.m128d_f64[0] = dVar4;
  (this->PreviousT).Translation.XY.m128d_f64[1] = dVar5;
  dVar4 = (this->CurrentT).Scale3D.XY.m128d_f64[0];
  dVar5 = (this->CurrentT).Scale3D.XY.m128d_f64[1];
  (this->PreviousT).Translation.ZW.m128d_f64[0] = dVar6;
  (this->PreviousT).Translation.ZW.m128d_f64[1] = dVar7;
  dVar6 = (this->CurrentT).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->CurrentT).Scale3D.ZW.m128d_f64[1];
  (this->PreviousT).Scale3D.XY.m128d_f64[0] = dVar4;
  (this->PreviousT).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar4 = (double)this->_padding_;
  (pTVar1->Rotation).XY.m128d_f64[0] = (double)this->_padding_;
  (this->CurrentT).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
  (this->PreviousT).Scale3D.ZW.m128d_f64[0] = dVar6;
  (this->PreviousT).Scale3D.ZW.m128d_f64[1] = dVar7;
  dVar6 = (double)this->_padding_;
  (this->CurrentT).Rotation.ZW.m128d_f64[0] = (double)this->_padding_;
  (this->CurrentT).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (double)this->_padding_;
  dVar7 = (double)this->_padding_;
  (this->CurrentT).Translation.XY.m128d_f64[0] = dVar4;
  (this->CurrentT).Translation.XY.m128d_f64[1] = dVar5;
  dVar4 = (double)this->_padding_;
  dVar5 = (double)this->_padding_;
  (this->CurrentT).Translation.ZW.m128d_f64[0] = dVar6;
  (this->CurrentT).Translation.ZW.m128d_f64[1] = dVar7;
  dVar6 = (double)this->_padding_;
  dVar7 = (double)this->_padding_;
  (this->CurrentT).Scale3D.XY.m128d_f64[0] = dVar4;
  (this->CurrentT).Scale3D.XY.m128d_f64[1] = dVar5;
  (this->CurrentT).Scale3D.ZW.m128d_f64[0] = dVar6;
  (this->CurrentT).Scale3D.ZW.m128d_f64[1] = dVar7;
  if (bVar8 == false) {
    iVar3 = param_1->ArrayNum;
    if (iVar3 != 0) {
      if (this->bUseDrawOnlyDrawingBoardsClassList != false) {
        pTVar10 = (TObjectPtr<UClass>_u_0 *)(param_1->AllocatorInstance).Data;
        pTVar2 = pTVar10 + iVar3;
        while( true ) {
          if (param_1->ArrayNum != iVar3) {
            `TCheckedPointerIterator<TSubclassOf<ADS_WorldDrawingBoard>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_res8);
          }
          if (pTVar10 == pTVar2) goto LAB_14b9c1333;
          local_res8 = (TObjectPtr<UClass>_u_0)pTVar10->DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res8.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
          }
          iVar9 = TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_>::Find
                            (&this->DrawOnlyDrawingBoardsClassList,
                             (TSubclassOf<ADS_WorldDrawingBoard> *)&local_res8.ObjectPtr);
          if (iVar9 != -1) break;
          pTVar10 = pTVar10 + 1;
        }
      }
      goto LAB_14b9c12e0;
    }
LAB_14b9c1333:
    bVar8 = false;
  }
  else {
LAB_14b9c12e0:
    if ((this->bDrawEveryFrame == false) && (this->bDrawOnce == false)) {
      bVar8 = UKismetMathLibrary::NearlyEqual_TransformTransform
                        (pTVar1,&this->PreviousT,(float)(this->MovementTolerance).field0_0x0._s_0.X,
                         (float)(this->MovementTolerance).field0_0x0._s_0.Y,
                         (float)(this->MovementTolerance).field0_0x0._s_0.Z);
      if ((bVar8) || (this->bDrawOnMovement == false)) goto LAB_14b9c1333;
    }
    this->bDrawOnce = false;
    bVar8 = UpdateDrawInfo(this);
  }
  return bVar8;
}

// ShouldDrawOn @ 14b9c5690

bool __thiscall
UDS_InteractBrush::ShouldDrawOn(UDS_InteractBrush *this,ADS_WorldDrawingBoard *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TObjectPtr<UClass>_u_0 local_res8 [4];
  
  pFVar1 = (this->DrawOnDrawingBoards).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  do {
    if (pFVar3 == pFVar1 + (longlong)(this->DrawOnDrawingBoards).ArrayNum * 8) {
LAB_14b9c56cc:
      if (param_1->bUseInteractVolume != false) {
        return false;
      }
      if (this->bUseDrawOnlyDrawingBoardsClassList != false) {
        local_res8[0] = (TObjectPtr<UClass>_u_0)param_1->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8[0].DebugPtr != (UClass *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)local_res8[0].DebugPtr);
        }
        iVar2 = TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_>::Find
                          (&this->DrawOnlyDrawingBoardsClassList,
                           (TSubclassOf<ADS_WorldDrawingBoard> *)&local_res8[0].ObjectPtr);
        if (iVar2 == -1) {
          return false;
        }
      }
      return true;
    }
    if (*(ADS_WorldDrawingBoard **)pFVar3 == param_1) {
      if ((int)((longlong)pFVar3 - (longlong)pFVar1 >> 3) != -1) {
        return true;
      }
      goto LAB_14b9c56cc;
    }
    pFVar3 = pFVar3 + 8;
  } while( true );
}

// UpdateActiveState @ 14b9c87e0

void __thiscall UDS_InteractBrush::UpdateActiveState(UDS_InteractBrush *this)

{
  int iVar1;
  
  UpdateDrawOnDrawingBoards(this);
  iVar1 = (this->DrawOnDrawingBoards).ArrayNum;
  if (iVar1 < 1) {
    if ((iVar1 == 0) && (this->bBrushActiveInVolume != false)) {
      this->bBrushActiveInVolume = false;
      this->bSucceededDrawnThisTime = false;
      this->bSucceededDrawnLastTime = false;
    }
  }
  else if (this->bBrushActiveInVolume == false) {
    this->bBrushActiveInVolume = true;
    this->bSucceededDrawnThisTime = false;
    this->bSucceededDrawnLastTime = false;
    return;
  }
  return;
}

// UpdateDrawInfo_Implementation @ 14b9c8b40

bool __thiscall UDS_InteractBrush::UpdateDrawInfo_Implementation(UDS_InteractBrush *this)

{
  return true;
}

// UpdateDrawOnDrawingBoards @ 14b9c8b50

void __thiscall UDS_InteractBrush::UpdateDrawOnDrawingBoards(UDS_InteractBrush *this)

{
  int *piVar1;
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  int iVar3;
  void *pvVar4;
  UObject *pUVar5;
  bool bVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  int iVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  ADS_WorldDrawingBoard *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  ForAnyElementType local_60;
  int local_58;
  int local_54 [5];
  
  this_00 = &this->DrawOnDrawingBoards;
  piVar1 = &(this->DrawOnDrawingBoards).ArrayMax;
  (this->DrawOnDrawingBoards).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&this_00->AllocatorInstance,0,piVar1);
  }
  local_res18 = (this->OverlappingInteractVolumes).ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  pFVar16 = (this->OverlappingInteractVolumes).AllocatorInstance.Data;
  pFVar10 = pFVar16 + uVar9 * 8;
  local_res20 = pFVar16;
  if (this->bUseDrawOnlyDrawingBoardsClassList == false) {
    while( true ) {
      if ((this->OverlappingInteractVolumes).ArrayNum != (int)uVar9) {
        `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar16 == pFVar10) break;
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = *(int *)(*(longlong *)pFVar16 + 0x330);
      lVar11 = (longlong)local_58;
      pvVar4 = *(void **)(*(longlong *)pFVar16 + 0x328);
      if (local_58 == 0) {
        local_54[0] = 0;
        iVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_58,0,&local_60,local_58,local_54);
        memcpy(local_60.Data,pvVar4,lVar11 << 3);
        iVar13 = local_58;
      }
      pFVar2 = local_60.Data + (longlong)iVar13 * 8;
      FVar17.Data = local_60.Data;
      iVar14 = iVar13;
      while( true ) {
        if (iVar14 != iVar13) {
          `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (FVar17.Data == pFVar2) break;
        local_res10 = *(ADS_WorldDrawingBoard **)FVar17.Data;
        TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(this_00,&local_res10);
        FVar17.Data = FVar17.Data + 8;
        iVar14 = local_58;
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      pFVar16 = pFVar16 + 8;
      uVar9 = (ulonglong)local_res18;
    }
  }
  else {
    while( true ) {
      local_res20 = pFVar16;
      if ((this->OverlappingInteractVolumes).ArrayNum != (int)uVar9) {
        `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar16 == pFVar10) break;
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = *(int *)(*(longlong *)pFVar16 + 0x330);
      lVar11 = (longlong)local_58;
      pvVar4 = *(void **)(*(longlong *)pFVar16 + 0x328);
      if (local_58 == 0) {
        local_54[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_58,0,&local_60,local_58,local_54);
        memcpy(local_60.Data,pvVar4,lVar11 << 3);
      }
      iVar13 = local_58;
      pFVar2 = local_60.Data + (longlong)local_58 * 8;
      FVar17.Data = local_60.Data;
      while( true ) {
        if (local_58 != iVar13) {
          `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        pFVar16 = local_res20;
        if (FVar17.Data == pFVar2) break;
        local_res10 = *(ADS_WorldDrawingBoard **)FVar17.Data;
        pUVar5 = (UObject *)local_res10->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pFVar16 = (this->DrawOnlyDrawingBoardsClassList).AllocatorInstance.Data;
        iVar14 = (this->DrawOnlyDrawingBoardsClassList).ArrayNum;
        pFVar12 = pFVar16;
        if (pFVar16 == pFVar16 + (longlong)iVar14 * 8) {
LAB_14b9c8d7a:
          FVar17.Data = FVar17.Data + 8;
        }
        else {
          do {
            lVar11 = *(longlong *)pFVar12;
            if ((lVar11 == 0) ||
               (pUVar7 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(),
               pUVar7 == (UClass *)0x0)) {
LAB_14b9c8d02:
              pUVar15 = (UObject *)0x0;
            }
            else {
              iVar3 = (int)pUVar7->_padding_;
              if ((*(int *)(lVar11 + 0x38) < iVar3) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8)
                  != &pUVar7->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (!bVar6) goto LAB_14b9c8d02;
              pUVar15 = *(UObject **)pFVar12;
            }
            if ((pUVar5 == (UObject *)0x0) ||
               (pUVar7 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(),
               pUVar7 == (UClass *)0x0)) {
LAB_14b9c8d3c:
              pUVar8 = (UObject *)0x0;
            }
            else {
              iVar3 = (int)pUVar7->_padding_;
              if ((*(int *)&pUVar5[1].field_0x10 < iVar3) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar3 * 8) !=
                  &pUVar7->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              pUVar8 = pUVar5;
              if (!bVar6) goto LAB_14b9c8d3c;
            }
            if (pUVar15 == pUVar8) {
              if ((int)((longlong)pFVar12 - (longlong)pFVar16 >> 3) != -1) {
                TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(this_00,&local_res10);
              }
              goto LAB_14b9c8d7a;
            }
            pFVar12 = pFVar12 + 8;
          } while (pFVar12 != pFVar16 + (longlong)iVar14 * 8);
          FVar17.Data = FVar17.Data + 8;
        }
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      uVar9 = (ulonglong)local_res18;
      pFVar16 = pFVar16 + 8;
    }
  }
  return;
}

