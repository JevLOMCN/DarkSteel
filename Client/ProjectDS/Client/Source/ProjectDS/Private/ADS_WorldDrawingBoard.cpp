// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 52

// StaticClass @ 14b769330

UClass * __cdecl ADS_WorldDrawingBoard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_WorldDrawingBoard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldDrawingBoard",
               &Z_Registration_Info_UClass_ADS_WorldDrawingBoard.InnerSingleton,
               StaticRegisterNativesADS_WorldDrawingBoard,0x398,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_WorldDrawingBoard>,
               InternalVTableHelperCtorCaller<ADS_WorldDrawingBoard>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_WorldDrawingBoard.InnerSingleton;
}

// ADS_WorldDrawingBoard @ 14b76c820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_WorldDrawingBoard * __thiscall
ADS_WorldDrawingBoard::ADS_WorldDrawingBoard(ADS_WorldDrawingBoard *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bPixelAlignedMove = true;
  this->InteractHeight = 30.0;
  this->_padding_ = (longlong)&___7ADS_WorldDrawingBoard__6B_;
  (this->RTSize).field0_0x0._s_0.X = 1024.0;
  (this->RTSize).field0_0x0._s_0.Y = 1024.0;
  (this->PreviousRTSize).field0_0x0._s_0.X = 1024.0;
  (this->PreviousRTSize).field0_0x0._s_0.Y = 1024.0;
  (this->CanvasWorldSize).field0_0x0._s_0.X = 1024.0;
  (this->CanvasWorldSize).field0_0x0._s_0.Y = 1024.0;
  (this->PreviousCanvasWorldSize).field0_0x0._s_0.X = 1024.0;
  (this->PreviousCanvasWorldSize).field0_0x0._s_0.Y = 1024.0;
  (this->ActiveVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveVolumes).ArrayNum = 0;
  (this->ActiveVolumes).ArrayMax = 0;
  (this->StopActiveHandle).Handle = 0;
  (this->CanvasWorldLocation).field0_0x0._s_0.X = 0.0;
  (this->CanvasWorldLocation).field0_0x0._s_0.Y = 0.0;
  (this->PreviousCanvasWorldLocation).field0_0x0._s_0.X = 0.0;
  (this->PreviousCanvasWorldLocation).field0_0x0._s_0.Y = 0.0;
  this->bActive = true;
  this->bUseInteractVolume = false;
  (this->InteractVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InteractVolumes).ArrayNum = 0;
  (this->InteractVolumes).ArrayMax = 0;
  return this;
}

// ~ADS_WorldDrawingBoard @ 14b7708d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_WorldDrawingBoard::~ADS_WorldDrawingBoard(ADS_WorldDrawingBoard *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_WorldDrawingBoard__6B_;
  pFVar1 = (this->InteractVolumes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveVolumes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b775160

UClass * __cdecl ADS_WorldDrawingBoard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_WorldDrawingBoard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldDrawingBoard",
               &Z_Registration_Info_UClass_ADS_WorldDrawingBoard.InnerSingleton,
               StaticRegisterNativesADS_WorldDrawingBoard,0x398,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_WorldDrawingBoard>,
               InternalVTableHelperCtorCaller<ADS_WorldDrawingBoard>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_WorldDrawingBoard.InnerSingleton;
}

// PostSimulate @ 14b775ca0

void __thiscall ADS_WorldDrawingBoard::PostSimulate(ADS_WorldDrawingBoard *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_WorldDrawingBoard_PostSimulate);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014b775ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b775cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this);
  return;
}

// PreSimulate @ 14b775d10

void __thiscall ADS_WorldDrawingBoard::PreSimulate(ADS_WorldDrawingBoard *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ADS_WorldDrawingBoard_PreSimulate);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014b775d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b775d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x768))(this);
  return;
}

// StaticRegisterNativesADS_WorldDrawingBoard @ 14b777ae0

void __cdecl ADS_WorldDrawingBoard::StaticRegisterNativesADS_WorldDrawingBoard(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_ADS_WorldDrawingBoard_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateDrawingBoardState @ 14b7793a0

void __thiscall ADS_WorldDrawingBoard::UpdateDrawingBoardState(ADS_WorldDrawingBoard *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ADS_WorldDrawingBoard_UpdateDrawingBoardState);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x00014b7793e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b7793f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x770))(this);
  return;
}

// execGetActiveState @ 14b77a5e0

void __cdecl
ADS_WorldDrawingBoard::execGetActiveState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(char *)(param_1 + 0x12) != '\0') && (param_1[0x16].field_0x10 != '\0')) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetInteractHeight @ 14b77a710

void __cdecl
ADS_WorldDrawingBoard::execGetInteractHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x16].field_0xc;
  return;
}

// execGetInteractVolumes @ 14b77a740

void __cdecl
ADS_WorldDrawingBoard::execGetInteractVolumes(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x16].field_0x20;
  _Src = *(void **)&param_1[0x16].field_0x18;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetIsSimulating @ 14b77a830

void __cdecl
ADS_WorldDrawingBoard::execGetIsSimulating(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetIsSimulating((ADS_WorldDrawingBoard *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetRTDrawOn @ 14b77a870

void __cdecl ADS_WorldDrawingBoard::execGetRTDrawOn(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x12].field_0x18;
  return;
}

// execGetTimeFromLastDraw @ 14b77a8a0

void __cdecl
ADS_WorldDrawingBoard::execGetTimeFromLastDraw(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x12].field_0x14;
  return;
}

// execGetUseInteractVolume @ 14b77a8d0

void __cdecl
ADS_WorldDrawingBoard::execGetUseInteractVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[0x16].field_0x11;
  return;
}

// execPostSimulate @ 14b77aef0

void __cdecl ADS_WorldDrawingBoard::execPostSimulate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014b77af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// execPreSimulate @ 14b77af20

void __cdecl ADS_WorldDrawingBoard::execPreSimulate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014b77af38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x768))();
  return;
}

// execResetInteractVolumes @ 14b77af70

void __cdecl
ADS_WorldDrawingBoard::execResetInteractVolumes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,&local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 3);
  }
  ResetInteractVolumes((ADS_WorldDrawingBoard *)param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execResetUseInteractVolume @ 14b77b080

void __cdecl
ADS_WorldDrawingBoard::execResetUseInteractVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  ResetUseInteractVolume((ADS_WorldDrawingBoard *)param_1,local_res10[0] != 0);
  return;
}

// execSetCanvasWorldLocation @ 14b77b110

void __cdecl
ADS_WorldDrawingBoard::execSetCanvasWorldLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  float local_res20 [2];
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  
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
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_28._s_0.X = local_38;
  local_28._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCanvasWorldLocation
            ((ADS_WorldDrawingBoard *)param_1,(TVector2<double> *)&local_28._s_0,bVar2,
             local_res20[0]);
  return;
}

// execSetDrawingBoardActive @ 14b77b230

void __cdecl
ADS_WorldDrawingBoard::execSetDrawingBoardActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  SetDrawingBoardActive((ADS_WorldDrawingBoard *)param_1,local_res10[0] != 0);
  return;
}

// execSetRTDrawOn @ 14b77b2c0

void __cdecl ADS_WorldDrawingBoard::execSetRTDrawOn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTextureRenderTarget2D *local_res10;
  
  local_res10 = (UTextureRenderTarget2D *)0x0;
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
  SetRTDrawOn((ADS_WorldDrawingBoard *)param_1,local_res10);
  return;
}

// execUpdateDrawingBoardState @ 14b77b3f0

void __cdecl
ADS_WorldDrawingBoard::execUpdateDrawingBoardState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014b77b408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x770))();
  return;
}

// execWorldToCanvasBrush @ 14b77b420

void __cdecl
ADS_WorldDrawingBoard::execWorldToCanvasBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector2<double> *pTVar1;
  FProperty *pFVar2;
  float *pfVar3;
  TVector2<double> *pTVar4;
  TVector2<double> *pTVar5;
  float local_res10 [4];
  float local_res20 [2];
  TVector2<double> local_88;
  TVector2<double> local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar1 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar5 = &local_88;
  if (pTVar1 != (TVector2<double> *)0x0) {
    pTVar5 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar1 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar4 = &local_78;
  if (pTVar1 != (TVector2<double> *)0x0) {
    pTVar4 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48._s_0.X = local_68;
  local_48._s_0.Y = dStack_60;
  pfVar3 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar3 = (float *)param_2->MostRecentPropertyAddress;
  }
  local_38._s_0.X = local_58;
  local_38._s_0.Y = dStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  WorldToCanvasBrush((ADS_WorldDrawingBoard *)param_1,(TVector2<double> *)&local_38._s_0,
                     (TVector2<double> *)&local_48._s_0,local_res20[0],pTVar5,pTVar4,pfVar3);
  return;
}

// execWorldToCanvasRotation @ 14b77b640

void __cdecl
ADS_WorldDrawingBoard::execWorldToCanvasRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = WorldToCanvasRotation((ADS_WorldDrawingBoard *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execWorldToCanvasSize @ 14b77b6e0

void __cdecl
ADS_WorldDrawingBoard::execWorldToCanvasSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double> local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._s_0.X = local_38;
  local_28._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = WorldToCanvasSize((ADS_WorldDrawingBoard *)param_1,&local_18,
                             (TVector2<double> *)&local_28._s_0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  return;
}

// execWorldToCanvasUV @ 14b77b780

void __cdecl
ADS_WorldDrawingBoard::execWorldToCanvasUV(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector2<double> *pTVar3;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double> local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28._s_0.X = local_38;
  local_28._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar3 = WorldToCanvasUV((ADS_WorldDrawingBoard *)param_1,&local_18,
                           (TVector2<double> *)&local_28._s_0);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  return;
}

// ADS_WorldDrawingBoard @ 14b9994c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_WorldDrawingBoard * __thiscall
ADS_WorldDrawingBoard::ADS_WorldDrawingBoard(ADS_WorldDrawingBoard *this)

{
  AActor::AActor((AActor *)this);
  this->bPixelAlignedMove = true;
  this->InteractHeight = 30.0;
  this->_padding_ = (longlong)&___7ADS_WorldDrawingBoard__6B_;
  (this->RTSize).field0_0x0._s_0.X = 1024.0;
  (this->RTSize).field0_0x0._s_0.Y = 1024.0;
  (this->PreviousRTSize).field0_0x0._s_0.X = 1024.0;
  (this->PreviousRTSize).field0_0x0._s_0.Y = 1024.0;
  (this->CanvasWorldSize).field0_0x0._s_0.X = 1024.0;
  (this->CanvasWorldSize).field0_0x0._s_0.Y = 1024.0;
  (this->PreviousCanvasWorldSize).field0_0x0._s_0.X = 1024.0;
  (this->PreviousCanvasWorldSize).field0_0x0._s_0.Y = 1024.0;
  (this->ActiveVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveVolumes).ArrayNum = 0;
  (this->ActiveVolumes).ArrayMax = 0;
  (this->StopActiveHandle).Handle = 0;
  (this->CanvasWorldLocation).field0_0x0._s_0.X = 0.0;
  (this->CanvasWorldLocation).field0_0x0._s_0.Y = 0.0;
  (this->PreviousCanvasWorldLocation).field0_0x0._s_0.X = 0.0;
  (this->PreviousCanvasWorldLocation).field0_0x0._s_0.Y = 0.0;
  this->bActive = true;
  this->bUseInteractVolume = false;
  (this->InteractVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InteractVolumes).ArrayNum = 0;
  (this->InteractVolumes).ArrayMax = 0;
  return this;
}

// BeginPlay @ 14b99b8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_WorldDrawingBoard::BeginPlay(ADS_WorldDrawingBoard *this)

{
  UWorld *this_00;
  UDS_InteractiveWorldSubsystem *pUVar1;
  ADS_WorldDrawingBoard *local_res8;
  FName local_res10 [3];
  FString local_18;
  
  AActor::BeginPlay((AActor *)this);
  local_res8 = this;
  this_00 = AActor::GetWorld((AActor *)this);
  pUVar1 = UWorld::GetSubsystem<UDS_InteractiveWorldSubsystem>(this_00);
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(&pUVar1->DrawingBoards,&local_res8);
  if (4 < (byte)LogTemp._0_1_) {
    local_res10[0] = (FName)local_res8->_padding_;
    ::FName::ToString(local_res10,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  UpdateActive(this);
  return;
}

// DrawBrushes @ 14b9a6ff0

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
ADS_WorldDrawingBoard::DrawBrushes
          (ADS_WorldDrawingBoard *this,
          TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *param_1,
          UTextureRenderTarget2D *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  UDS_InteractBrush *this_00;
  undefined1 auVar3 [12];
  double dVar4;
  float fVar5;
  float fVar6;
  UCanvas *pUVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auVar14 [16];
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 local_res10 [16];
  FScriptContainerElement *local_res20;
  UCanvas *local_d8;
  TObjectPtr<UTextureRenderTarget2D>_u_0 local_d0;
  undefined8 uStack_c8;
  TVector2<double>_u_0 local_b8;
  TVector2<double>_u_0 local_a8;
  double local_98;
  
  local_d0.DebugPtr = (UTextureRenderTarget2D *)0x0;
  uStack_c8 = 0;
  UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget
            ((UObject *)this,param_2,&local_d8,(TVector2<double> *)&local_b8._s_0,
             (FDrawToRenderTargetContext *)&local_d0.ObjectPtr);
  fVar6 = __real_bf000000;
  fVar5 = __real_3f800000;
  dVar4 = __real_3ff0000000000000;
  pFVar13 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar11 = pFVar13 + (longlong)iVar2 * 8;
  local_res20 = pFVar11;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    uVar9 = local_b8._s_0.Y;
    uVar8 = local_b8._s_0.X;
    pUVar7 = local_d8;
    if (pFVar13 == pFVar11) break;
    this_00 = *(UDS_InteractBrush **)pFVar13;
    auVar1 = *(undefined1 (*) [16])(this_00->CurrentT).Translation.XY.m128d_f64;
    local_98 = (this_00->CurrentT).Translation.ZW.m128d_f64[0];
    dVar17 = (this_00->PreviousT).Translation.XY.m128d_f64[0] - auVar1._0_8_;
    auVar3._4_8_ = (this_00->CurrentT).Translation.ZW.m128d_f64[1];
    auVar3._0_4_ = auVar1._4_4_;
    auVar14._0_8_ = auVar3._0_8_ << 0x20;
    auVar14._8_4_ = auVar1._8_4_;
    auVar14._12_4_ = auVar1._12_4_;
    dVar16 = (this_00->PreviousT).Translation.XY.m128d_f64[1] - auVar14._8_8_;
    fVar15 = (float)SQRT(dVar17 * dVar17 + dVar16 * dVar16);
    if (((this_00->bUseMultiDraw != false) && (this_00->MaxDrawDistance < fVar15)) &&
       (this_00->bSucceededDrawnLastTime != false)) {
      iVar10 = 1;
      iVar12 = -((int)ROUND(fVar6 - (fVar15 + fVar15) / this_00->MaxDrawDistance) >> 1);
      pFVar11 = local_res20;
      if (1 < iVar12) {
        do {
          local_a8._s_0.X = (double)uVar8;
          local_a8._s_0.Y = (double)uVar9;
          UDS_InteractBrush::DrawOnRT
                    (this_00,this,pUVar7,(TVector2<double> *)&local_a8._s_0,
                     (float)((double)iVar10 * (dVar4 / (double)iVar12)),iVar12);
          iVar10 = iVar10 + 1;
          pFVar11 = local_res20;
        } while (iVar10 < iVar12);
      }
    }
    local_a8._s_0.X = (double)uVar8;
    local_a8._s_0.Y = (double)uVar9;
    UDS_InteractBrush::DrawOnRT(this_00,this,pUVar7,(TVector2<double> *)&local_a8._s_0,fVar5,1);
    pFVar13 = pFVar13 + 8;
    this_00->bSucceededDrawnThisTime = true;
  }
  UKismetRenderingLibrary::EndDrawCanvasToRenderTarget
            ((UObject *)this,(FDrawToRenderTargetContext *)&local_d0.ObjectPtr);
  pFVar11 = (param_1->AllocatorInstance).Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return;
}

// EndPlay @ 14b9a77e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_WorldDrawingBoard::EndPlay(ADS_WorldDrawingBoard *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ADS_WorldInteractVolume *this_00;
  UWorld *this_01;
  UDS_InteractiveWorldSubsystem *pUVar3;
  FScriptContainerElement *pFVar4;
  ADS_WorldDrawingBoard *local_res8;
  FName local_res18;
  FString local_28;
  
  AActor::EndPlay((AActor *)this,param_1);
  pFVar4 = (this->InteractVolumes).AllocatorInstance.Data;
  iVar2 = (this->InteractVolumes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InteractVolumes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(ADS_WorldInteractVolume **)pFVar4;
    if (this_00 != (ADS_WorldInteractVolume *)0x0) {
      local_res8 = this;
      TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::Remove
                (&this_00->BindingDrawingBoards,&local_res8);
      ADS_WorldInteractVolume::ResetActiveState(this_00);
    }
    pFVar4 = pFVar4 + 8;
  }
  local_res8 = this;
  this_01 = AActor::GetWorld((AActor *)this);
  pUVar3 = UWorld::GetSubsystem<UDS_InteractiveWorldSubsystem>(this_01);
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::Remove
            (&pUVar3->DrawingBoards,&local_res8);
  if (4 < (byte)LogTemp._0_1_) {
    local_res18 = (FName)local_res8->_padding_;
    ::FName::ToString(&local_res18,&local_28);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetIsSimulating @ 14b9afaa0

bool __thiscall ADS_WorldDrawingBoard::GetIsSimulating(ADS_WorldDrawingBoard *this)

{
  if (((this->bDrawingBoardActiveAuto != false) && (this->bActive != false)) &&
     ((this->SleepTime < 0.0 || (this->TimeFromLastDraw <= this->SleepTime)))) {
    return true;
  }
  return false;
}

// GetNearestDistance @ 14b9b0740

float __thiscall
ADS_WorldDrawingBoard::GetNearestDistance(ADS_WorldDrawingBoard *this,TVector2<double> *param_1)

{
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y - (this->CanvasWorldLocation).field0_0x0._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X - (this->CanvasWorldLocation).field0_0x0._s_0.X;
  __libm_sse2_sincos_();
  dVar1 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar2 + extraout_XMM0_Qa * dVar3;
  dVar3 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar3 - extraout_XMM0_Qa * dVar2;
  dVar2 = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->CanvasWorldSize).field0_0x0._s_0.Y;
  dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          (this->CanvasWorldSize).field0_0x0._s_0.X;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return (float)SQRT(dVar3 * dVar3 + dVar2 * dVar2);
}

// InteractVolumeActive @ 14b9b6740

void __thiscall
ADS_WorldDrawingBoard::InteractVolumeActive
          (ADS_WorldDrawingBoard *this,bool param_1,ADS_WorldInteractVolume *param_2)

{
  ADS_WorldInteractVolume *local_res18 [2];
  
  if (this->bUseInteractVolume != false) {
    local_res18[0] = param_2;
    if (param_1) {
      TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<ADS_WorldInteractVolume_*_const_&>(&this->ActiveVolumes,local_res18);
      UpdateActive(this);
      return;
    }
    TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
              (&this->ActiveVolumes,local_res18);
    UpdateActive(this);
  }
  return;
}

// PostSimulate_Implementation @ 14b9c0590

void __thiscall ADS_WorldDrawingBoard::PostSimulate_Implementation(ADS_WorldDrawingBoard *this)

{
  return;
}

// PreSimulate_Implementation @ 14b9c0850

void __thiscall ADS_WorldDrawingBoard::PreSimulate_Implementation(ADS_WorldDrawingBoard *this)

{
  return;
}

// PrepareForSimulate @ 14b9c1370

void __thiscall
ADS_WorldDrawingBoard::PrepareForSimulate
          (ADS_WorldDrawingBoard *this,
          TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  UTextureRenderTarget2D *pUVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  longlong lVar5;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1->ArrayNum < 1) {
    PrepareForSimulate(this);
  }
  else {
    this->TimeFromLastDraw = 0.0;
    PreSimulate(this);
    pUVar2 = this->RTBrushDrawOn;
    if (pUVar2 != (UTextureRenderTarget2D *)0x0) {
      local_18.ArrayNum = param_1->ArrayNum;
      lVar5 = (longlong)local_18.ArrayNum;
      pFVar3 = (param_1->AllocatorInstance).Data;
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_18.ArrayNum == 0) {
        local_18.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
                   &local_18.ArrayMax);
        memcpy(local_18.AllocatorInstance.Data,pFVar3,lVar5 << 3);
      }
      DrawBrushes(this,&local_18,pUVar2);
    }
    PostSimulate(this);
    dVar4 = (this->CanvasWorldLocation).field0_0x0._s_0.Y;
    fVar1 = this->CanvasWorldYaw;
    (this->PreviousCanvasWorldLocation).field0_0x0._s_0.X =
         (this->CanvasWorldLocation).field0_0x0._s_0.X;
    (this->PreviousCanvasWorldLocation).field0_0x0._s_0.Y = dVar4;
    this->PreviousCanvasWorldYaw = fVar1;
    dVar4 = (this->CanvasWorldSize).field0_0x0._s_0.Y;
    (this->PreviousCanvasWorldSize).field0_0x0._s_0.X = (this->CanvasWorldSize).field0_0x0._s_0.X;
    (this->PreviousCanvasWorldSize).field0_0x0._s_0.Y = dVar4;
    dVar4 = (this->PixelWorldSize).field0_0x0._s_0.Y;
    (this->PreviousPixelWorldSize).field0_0x0._s_0.X = (this->PixelWorldSize).field0_0x0._s_0.X;
    (this->PreviousPixelWorldSize).field0_0x0._s_0.Y = dVar4;
    dVar4 = (this->RTSize).field0_0x0._s_0.Y;
    (this->PreviousRTSize).field0_0x0._s_0.X = (this->RTSize).field0_0x0._s_0.X;
    (this->PreviousRTSize).field0_0x0._s_0.Y = dVar4;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// PrepareForSimulate @ 14b9c14b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_WorldDrawingBoard::PrepareForSimulate(ADS_WorldDrawingBoard *this)

{
  double dVar1;
  double dVar2;
  UWorld *pUVar3;
  float fVar4;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  fVar4 = pUVar3->DeltaTimeSeconds + this->TimeFromLastDraw;
  this->TimeFromLastDraw = fVar4;
  if ((fVar4 <= this->SleepTime) || (this->SleepTime < 0.0)) {
    PreSimulate(this);
    PostSimulate(this);
    dVar1 = (this->CanvasWorldLocation).field0_0x0._s_0.X;
    dVar2 = (this->CanvasWorldLocation).field0_0x0._s_0.Y;
    this->PreviousCanvasWorldYaw = this->CanvasWorldYaw;
    (this->PreviousCanvasWorldLocation).field0_0x0._s_0.X = dVar1;
    (this->PreviousCanvasWorldLocation).field0_0x0._s_0.Y = dVar2;
    dVar1 = (this->CanvasWorldSize).field0_0x0._s_0.Y;
    (this->PreviousCanvasWorldSize).field0_0x0._s_0.X = (this->CanvasWorldSize).field0_0x0._s_0.X;
    (this->PreviousCanvasWorldSize).field0_0x0._s_0.Y = dVar1;
    dVar1 = (this->PixelWorldSize).field0_0x0._s_0.Y;
    (this->PreviousPixelWorldSize).field0_0x0._s_0.X = (this->PixelWorldSize).field0_0x0._s_0.X;
    (this->PreviousPixelWorldSize).field0_0x0._s_0.Y = dVar1;
    dVar1 = (this->RTSize).field0_0x0._s_0.Y;
    (this->PreviousRTSize).field0_0x0._s_0.X = (this->RTSize).field0_0x0._s_0.X;
    (this->PreviousRTSize).field0_0x0._s_0.Y = dVar1;
  }
  return;
}

// ReBindInteractVolumes @ 14b9c1550

void __thiscall
ADS_WorldDrawingBoard::ReBindInteractVolumes(ADS_WorldDrawingBoard *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ADS_WorldInteractVolume *pAVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  ADS_WorldDrawingBoard *local_res18;
  
  pFVar4 = (this->InteractVolumes).AllocatorInstance.Data;
  iVar2 = (this->InteractVolumes).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  if (param_1) {
    while( true ) {
      if ((this->InteractVolumes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar1) break;
      pAVar3 = *(ADS_WorldInteractVolume **)pFVar4;
      if (pAVar3 != (ADS_WorldInteractVolume *)0x0) {
        local_res18 = this;
        TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(&pAVar3->BindingDrawingBoards,&local_res18);
        ADS_WorldInteractVolume::ResetActiveState(pAVar3);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  else {
    while( true ) {
      if ((this->InteractVolumes).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar1) break;
      pAVar3 = *(ADS_WorldInteractVolume **)pFVar4;
      if (pAVar3 != (ADS_WorldInteractVolume *)0x0) {
        local_res18 = this;
        TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::Remove
                  (&pAVar3->BindingDrawingBoards,&local_res18);
        ADS_WorldInteractVolume::ResetActiveState(pAVar3);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// ResetInteractVolumes @ 14b9c2f20

void __thiscall
ADS_WorldDrawingBoard::ResetInteractVolumes
          (ADS_WorldDrawingBoard *this,
          TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ADS_WorldInteractVolume *pAVar5;
  FScriptContainerElement *pFVar6;
  ADS_WorldDrawingBoard *local_res8;
  
  pTVar2 = &this->InteractVolumes;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->InteractVolumes).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->InteractVolumes).ArrayNum != iVar4) {
      `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar6 == pFVar3) break;
    pAVar5 = *(ADS_WorldInteractVolume **)pFVar6;
    if (pAVar5 != (ADS_WorldInteractVolume *)0x0) {
      local_res8 = this;
      TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::Remove
                (&pAVar5->BindingDrawingBoards,&local_res8);
      ADS_WorldInteractVolume::ResetActiveState(pAVar5);
    }
    pFVar6 = pFVar6 + 8;
  }
  if (pTVar2 != param_1) {
    iVar4 = param_1->ArrayNum;
    piVar1 = &(this->InteractVolumes).ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    (this->InteractVolumes).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar3,(longlong)iVar4 << 3);
      }
    }
  }
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->InteractVolumes).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->InteractVolumes).ArrayNum != iVar4) {
      `TCheckedPointerIterator<ADS_WorldInteractVolume_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar6 == pFVar3) break;
    pAVar5 = *(ADS_WorldInteractVolume **)pFVar6;
    if (pAVar5 != (ADS_WorldInteractVolume *)0x0) {
      local_res8 = this;
      TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(&pAVar5->BindingDrawingBoards,&local_res8);
      ADS_WorldInteractVolume::ResetActiveState(pAVar5);
    }
    pFVar6 = pFVar6 + 8;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// ResetUseInteractVolume @ 14b9c31a0

void __thiscall
ADS_WorldDrawingBoard::ResetUseInteractVolume(ADS_WorldDrawingBoard *this,bool param_1)

{
  if (this->bUseInteractVolume != param_1) {
    this->bUseInteractVolume = param_1;
    ReBindInteractVolumes(this,param_1);
    return;
  }
  return;
}

// SetCanvasWorldLocation @ 14b9c40c0

void __thiscall
ADS_WorldDrawingBoard::SetCanvasWorldLocation
          (ADS_WorldDrawingBoard *this,TVector2<double> *param_1,bool param_2,float param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  uint in_EAX;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  
  if (param_2) {
    dVar1 = (this->PixelWorldSize).field0_0x0._s_0.Y;
    dVar2 = (this->PixelWorldSize).field0_0x0._s_0.X;
    dVar9 = (double)param_3;
    dVar6 = (param_1->field0_0x0)._s_0.Y / (dVar1 * dVar9);
    lVar8 = (longlong)dVar6;
    if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar6)) {
      auVar5._8_4_ = SUB84(dVar6,0);
      auVar5._0_8_ = dVar6;
      auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      uVar7 = movmskpd(in_EAX,auVar5);
      in_EAX = uVar7 & 1;
      dVar6 = (double)(longlong)(lVar8 - (ulonglong)in_EAX);
    }
    dVar4 = (param_1->field0_0x0)._s_0.X / (dVar2 * dVar9);
    lVar8 = (longlong)dVar4;
    if ((lVar8 != -0x8000000000000000) && ((double)lVar8 != dVar4)) {
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = dVar4;
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      uVar7 = movmskpd(in_EAX,auVar3);
      dVar4 = (double)(longlong)(lVar8 - (ulonglong)(uVar7 & 1));
    }
    (this->CanvasWorldLocation).field0_0x0._s_0.X = dVar4 * dVar2 * dVar9;
    (this->CanvasWorldLocation).field0_0x0._s_0.Y = dVar6 * dVar1 * dVar9;
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->CanvasWorldLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->CanvasWorldLocation).field0_0x0._s_0.Y = dVar1;
  return;
}

// SetDrawingBoardActive @ 14b9c4310

void __thiscall
ADS_WorldDrawingBoard::SetDrawingBoardActive(ADS_WorldDrawingBoard *this,bool param_1)

{
  this->bActive = param_1;
  UpdateActive(this);
  return;
}

// SetPreviousParameters @ 14b9c4be0

void __thiscall ADS_WorldDrawingBoard::SetPreviousParameters(ADS_WorldDrawingBoard *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (this->CanvasWorldLocation).field0_0x0._s_0.X;
  dVar2 = (this->CanvasWorldLocation).field0_0x0._s_0.Y;
  this->PreviousCanvasWorldYaw = this->CanvasWorldYaw;
  (this->PreviousCanvasWorldLocation).field0_0x0._s_0.X = dVar1;
  (this->PreviousCanvasWorldLocation).field0_0x0._s_0.Y = dVar2;
  dVar1 = (this->CanvasWorldSize).field0_0x0._s_0.Y;
  (this->PreviousCanvasWorldSize).field0_0x0._s_0.X = (this->CanvasWorldSize).field0_0x0._s_0.X;
  (this->PreviousCanvasWorldSize).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->PixelWorldSize).field0_0x0._s_0.Y;
  (this->PreviousPixelWorldSize).field0_0x0._s_0.X = (this->PixelWorldSize).field0_0x0._s_0.X;
  (this->PreviousPixelWorldSize).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->RTSize).field0_0x0._s_0.Y;
  (this->PreviousRTSize).field0_0x0._s_0.X = (this->RTSize).field0_0x0._s_0.X;
  (this->PreviousRTSize).field0_0x0._s_0.Y = dVar1;
  return;
}

// SetRTDrawOn @ 14b9c4c70

void __thiscall
ADS_WorldDrawingBoard::SetRTDrawOn(ADS_WorldDrawingBoard *this,UTextureRenderTarget2D *param_1)

{
  double dVar1;
  int iVar2;
  
  if (param_1 != (UTextureRenderTarget2D *)0x0) {
    this->RTBrushDrawOn = param_1;
    iVar2 = param_1->SizeY;
    (this->RTSize).field0_0x0._s_0.X = (double)param_1->SizeX;
    (this->RTSize).field0_0x0._s_0.Y = (double)iVar2;
    dVar1 = (this->CanvasWorldSize).field0_0x0._s_0.Y;
    (this->PixelWorldSize).field0_0x0._s_0.X =
         (this->CanvasWorldSize).field0_0x0._s_0.X / (this->RTSize).field0_0x0._s_0.X;
    (this->PixelWorldSize).field0_0x0._s_0.Y = dVar1 / (double)iVar2;
  }
  return;
}

// ShutOff @ 14b9c5870

void __thiscall ADS_WorldDrawingBoard::ShutOff(ADS_WorldDrawingBoard *this)

{
  this->bDrawingBoardActiveAuto = false;
  return;
}

// UpdateActive @ 14b9c86f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_WorldDrawingBoard::UpdateActive(ADS_WorldDrawingBoard *this)

{
  UWorld *pUVar1;
  FTimerManager *pFVar2;
  FTimerData *pFVar3;
  
  if (((this->bUseInteractVolume == false) || (0 < (this->ActiveVolumes).ArrayNum)) &&
     (this->bActive != false)) {
    pUVar1 = AActor::GetWorld((AActor *)this);
    pFVar2 = UWorld::GetTimerManager(pUVar1);
    pFVar3 = FTimerManager::FindTimer(pFVar2,&this->StopActiveHandle);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(pFVar2,(FTimerHandle)(this->StopActiveHandle).Handle);
    }
    (this->StopActiveHandle).Handle = 0;
    this->bDrawingBoardActiveAuto = true;
    return;
  }
  if (this->SleepTime <= 0.0) {
    this->bDrawingBoardActiveAuto = false;
    return;
  }
  pUVar1 = AActor::GetWorld((AActor *)this);
  pFVar2 = UWorld::GetTimerManager(pUVar1);
  FTimerManager::SetTimer<ADS_WorldDrawingBoard>
            (pFVar2,&this->StopActiveHandle,this,(pmf_3099a8bd)0x14b9c5870,this->SleepTime,false,
             __real_bf800000);
  return;
}

// UpdateDrawingBoardState_Implementation @ 14b9c8ec0

void __thiscall
ADS_WorldDrawingBoard::UpdateDrawingBoardState_Implementation(ADS_WorldDrawingBoard *this)

{
  return;
}

// WorldToCanvasBrush @ 14b9ca1c0

void __thiscall
ADS_WorldDrawingBoard::WorldToCanvasBrush
          (ADS_WorldDrawingBoard *this,TVector2<double> *param_1,TVector2<double> *param_2,
          float param_3,TVector2<double> *param_4,TVector2<double> *param_5,float *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar6;
  
  dVar5 = (param_2->field0_0x0)._s_0.X / (this->PixelWorldSize).field0_0x0._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y / (this->PixelWorldSize).field0_0x0._s_0.Y;
  (param_5->field0_0x0)._s_0.X = dVar5;
  (param_5->field0_0x0)._s_0.Y = dVar4;
  dVar2 = ((param_1->field0_0x0)._s_0.X - (this->CanvasWorldLocation).field0_0x0._s_0.X) /
          (this->CanvasWorldSize).field0_0x0._s_0.X;
  dVar3 = ((param_1->field0_0x0)._s_0.Y - (this->CanvasWorldLocation).field0_0x0._s_0.Y) /
          (this->CanvasWorldSize).field0_0x0._s_0.Y;
  __libm_sse2_sincos_();
  dVar4 = dVar4 * __real_3fe0000000000000;
  dVar6 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar3 + extraout_XMM0_Qa * dVar2 +
          __real_3fe0000000000000;
  dVar1 = (this->RTSize).field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X =
       (((double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar2 - extraout_XMM0_Qa * dVar3) +
       __real_3fe0000000000000) * (this->RTSize).field0_0x0._s_0.X - dVar5 * __real_3fe0000000000000
  ;
  (param_4->field0_0x0)._s_0.Y = dVar6 * dVar1 - dVar4;
  *param_6 = param_3 - this->CanvasWorldYaw;
  return;
}

// WorldToCanvasRotation @ 14b9ca320

float __thiscall
ADS_WorldDrawingBoard::WorldToCanvasRotation(ADS_WorldDrawingBoard *this,float param_1)

{
  return param_1 - this->CanvasWorldYaw;
}

// WorldToCanvasSize @ 14b9ca340

TVector2<double> * __thiscall
ADS_WorldDrawingBoard::WorldToCanvasSize
          (ADS_WorldDrawingBoard *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (this->PixelWorldSize).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X / (this->PixelWorldSize).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 / dVar2;
  return __return_storage_ptr__;
}

// WorldToCanvasUV @ 14b9ca370

TVector2<double> * __thiscall
ADS_WorldDrawingBoard::WorldToCanvasUV
          (ADS_WorldDrawingBoard *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  dVar2 = ((param_1->field0_0x0)._s_0.X - (this->CanvasWorldLocation).field0_0x0._s_0.X) /
          (this->CanvasWorldSize).field0_0x0._s_0.X;
  dVar1 = ((param_1->field0_0x0)._s_0.Y - (this->CanvasWorldLocation).field0_0x0._s_0.Y) /
          (this->CanvasWorldSize).field0_0x0._s_0.Y;
  __libm_sse2_sincos_();
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar2 - extraout_XMM0_Qa * dVar1) +
       __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar1 + extraout_XMM0_Qa * dVar2 +
       __real_3fe0000000000000;
  return __return_storage_ptr__;
}

