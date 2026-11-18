// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineCameras
// Functions: 12

// StaticClass @ 14ad1a480

UClass * __cdecl UEngineCameraAnimationFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineCameraAnimationFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"EngineCameraAnimationFunctionLibrary",
               &Z_Registration_Info_UClass_UEngineCameraAnimationFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUEngineCameraAnimationFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineCameraAnimationFunctionLibrary>,
               InternalVTableHelperCtorCaller<UEngineCameraAnimationFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineCameraAnimationFunctionLibrary.InnerSingleton;
}

// UEngineCameraAnimationFunctionLibrary @ 14ad1e670

UEngineCameraAnimationFunctionLibrary * __thiscall
UEngineCameraAnimationFunctionLibrary::UEngineCameraAnimationFunctionLibrary
          (UEngineCameraAnimationFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UEngineCameraAnimationFunctionLibrary__6B_;
  return this;
}

// UEngineCameraAnimationFunctionLibrary @ 14ad1e6a0

UEngineCameraAnimationFunctionLibrary * __thiscall
UEngineCameraAnimationFunctionLibrary::UEngineCameraAnimationFunctionLibrary
          (UEngineCameraAnimationFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UEngineCameraAnimationFunctionLibrary__6B_;
  return this;
}

// ~UEngineCameraAnimationFunctionLibrary @ 14ad1ef50

void __thiscall
UEngineCameraAnimationFunctionLibrary::~UEngineCameraAnimationFunctionLibrary
          (UEngineCameraAnimationFunctionLibrary *this)

{
  *(undefined ***)this = &___7UEngineCameraAnimationFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_CameraAnimationCameraModifier @ 14ad1f830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraAnimationCameraModifier * __cdecl
UEngineCameraAnimationFunctionLibrary::Conv_CameraAnimationCameraModifier
          (APlayerCameraManager *param_1)

{
  int iVar1;
  code *pcVar2;
  UCameraAnimationCameraModifier *pUVar3;
  UClass *pUVar4;
  UClass *local_res8;
  
  if (param_1 != (APlayerCameraManager *)0x0) {
    pcVar2 = *(code **)(param_1->_padding_ + 2000);
    local_res8 = UCameraAnimationCameraModifier::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar3 = (UCameraAnimationCameraModifier *)(*pcVar2)(param_1,&local_res8);
    if (pUVar3 != (UCameraAnimationCameraModifier *)0x0) {
      pUVar4 = UCameraAnimationCameraModifier::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return pUVar3;
      }
    }
  }
  return (UCameraAnimationCameraModifier *)0x0;
}

// Conv_CameraAnimationPlaySpace @ 14ad1f8c0

ECameraAnimationPlaySpace __cdecl
UEngineCameraAnimationFunctionLibrary::Conv_CameraAnimationPlaySpace(ECameraShakePlaySpace param_1)

{
  code *pcVar1;
  bool bVar2;
  ECameraAnimationPlaySpace EVar3;
  
  if (param_1 == CameraLocal) {
    return CameraLocal;
  }
  if (param_1 == World) {
    return World;
  }
  if (param_1 == UserDefined) {
    return UserDefined;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                     ,0x1ec,L"Unsupported ECameraShakePlaySpace value");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return param_1;
}

// Conv_CameraShakePlaySpace @ 14ad1f930

ECameraShakePlaySpace __cdecl
UEngineCameraAnimationFunctionLibrary::Conv_CameraShakePlaySpace(ECameraAnimationPlaySpace param_1)

{
  code *pcVar1;
  bool bVar2;
  ECameraShakePlaySpace EVar3;
  
  if (param_1 == CameraLocal) {
    return CameraLocal;
  }
  if (param_1 == World) {
    return World;
  }
  if (param_1 == UserDefined) {
    return UserDefined;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                     ,0x1e1,L"Unsupported ECameraAnimationPlaySpace value");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return param_1;
}

// GetPrivateStaticClass @ 14ad21d70

UClass * __cdecl UEngineCameraAnimationFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEngineCameraAnimationFunctionLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EngineCameras",L"EngineCameraAnimationFunctionLibrary",
               &Z_Registration_Info_UClass_UEngineCameraAnimationFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUEngineCameraAnimationFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEngineCameraAnimationFunctionLibrary>,
               InternalVTableHelperCtorCaller<UEngineCameraAnimationFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEngineCameraAnimationFunctionLibrary.InnerSingleton;
}

// StaticRegisterNativesUEngineCameraAnimationFunctionLibrary @ 14ad23eb0

void __cdecl
UEngineCameraAnimationFunctionLibrary::StaticRegisterNativesUEngineCameraAnimationFunctionLibrary
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UEngineCameraAnimationFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_CameraAnimationCameraModifier @ 14ad26910

void __cdecl
UEngineCameraAnimationFunctionLibrary::execConv_CameraAnimationCameraModifier
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  UClass *pUVar6;
  longlong *local_res10;
  UClass *local_res18;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (longlong *)0x0) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  pcVar3 = *(code **)(*local_res10 + 2000);
  local_res18 = UCameraAnimationCameraModifier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18);
  }
  lVar5 = (*pcVar3)(plVar4,&local_res18);
  if (lVar5 != 0) {
    pUVar6 = UCameraAnimationCameraModifier::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14ad269ec;
  }
  lVar5 = 0;
LAB_14ad269ec:
  *(longlong *)param_3 = lVar5;
  return;
}

// execConv_CameraAnimationPlaySpace @ 14ad26a20

void __cdecl
UEngineCameraAnimationFunctionLibrary::execConv_CameraAnimationPlaySpace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  char local_res10 [24];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\0') {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res10[0] == '\x01') {
    *(undefined1 *)param_3 = 1;
    return;
  }
  if (local_res10[0] != '\x02') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                       ,0x1ec,L"Unsupported ECameraShakePlaySpace value");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(char *)param_3 = cVar3;
    return;
  }
  *(undefined1 *)param_3 = 2;
  return;
}

// execConv_CameraShakePlaySpace @ 14ad26b00

void __cdecl
UEngineCameraAnimationFunctionLibrary::execConv_CameraShakePlaySpace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  char local_res10 [24];
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == '\0') {
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_res10[0] == '\x01') {
    *(undefined1 *)param_3 = 1;
    return;
  }
  if (local_res10[0] != '\x02') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\EngineCameras\\Source\\EngineCameras\\Private\\Animations\\CameraAnimationCameraModifier.cpp"
                       ,0x1e1,L"Unsupported ECameraAnimationPlaySpace value");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(char *)param_3 = cVar3;
    return;
  }
  *(undefined1 *)param_3 = 2;
  return;
}

