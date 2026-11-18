// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 42

// StaticClass @ 14c682350

UClass * __cdecl UMovieSceneScriptingFloatKey::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingFloatKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingFloatKey,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingFloatKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton;
}

// UMovieSceneScriptingFloatKey @ 14c684360

UMovieSceneScriptingFloatKey * __thiscall
UMovieSceneScriptingFloatKey::UMovieSceneScriptingFloatKey
          (UMovieSceneScriptingFloatKey *this,FVTableHelper *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  return this;
}

// UMovieSceneScriptingFloatKey @ 14c684390

UMovieSceneScriptingFloatKey * __thiscall
UMovieSceneScriptingFloatKey::UMovieSceneScriptingFloatKey
          (UMovieSceneScriptingFloatKey *this,FObjectInitializer *param_1)

{
  UMovieSceneScriptingKey::UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  return this;
}

// ~UMovieSceneScriptingFloatKey @ 14c684770

void __thiscall
UMovieSceneScriptingFloatKey::~UMovieSceneScriptingFloatKey(UMovieSceneScriptingFloatKey *this)

{
  *(undefined ***)this = &___7UMovieSceneScriptingFloatKey__6B_;
  UMovieSceneScriptingKey::~UMovieSceneScriptingKey((UMovieSceneScriptingKey *)this);
  return;
}

// GetArriveTangent @ 14c686cb0

float __thiscall UMovieSceneScriptingFloatKey::GetArriveTangent(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x5b,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetArriveTangentWeight @ 14c686d90

float __thiscall
UMovieSceneScriptingFloatKey::GetArriveTangentWeight(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x85,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetInterpolationMode @ 14c6870e0

ERichCurveInterpMode __thiscall
UMovieSceneScriptingFloatKey::GetInterpolationMode(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x3f,L"Pure virtual not implemented (%s)");
  return RCIM_None;
}

// GetLeaveTangent @ 14c688fe0

float __thiscall UMovieSceneScriptingFloatKey::GetLeaveTangent(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x69,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetLeaveTangentWeight @ 14c6890c0

float __thiscall
UMovieSceneScriptingFloatKey::GetLeaveTangentWeight(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x93,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetPrivateStaticClass @ 14c6894c0

UClass * __cdecl UMovieSceneScriptingFloatKey::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SequencerScripting",L"MovieSceneScriptingFloatKey",
               &Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton,
               StaticRegisterNativesUMovieSceneScriptingFloatKey,0x40,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneScriptingFloatKey>,
               InternalVTableHelperCtorCaller<UMovieSceneScriptingFloatKey>,local_res8,
               UMovieSceneScriptingKey::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.InnerSingleton;
}

// GetTangentMode @ 14c689970

ERichCurveTangentMode __thiscall
UMovieSceneScriptingFloatKey::GetTangentMode(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x4d,L"Pure virtual not implemented (%s)");
  return RCTM_None;
}

// GetTangentWeightMode @ 14c689a50

ERichCurveTangentWeightMode __thiscall
UMovieSceneScriptingFloatKey::GetTangentWeightMode(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x77,L"Pure virtual not implemented (%s)");
  return RCTWM_WeightedNone;
}

// GetTime @ 14c689de0

FFrameTime __thiscall
UMovieSceneScriptingFloatKey::GetTime
          (UMovieSceneScriptingFloatKey *this,EMovieSceneTimeUnit param_1)

{
  undefined7 in_register_00000011;
  FFrameTime FVar1;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.FrameNumber.Value._0_1_ = param_1;
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x21,L"Pure virtual not implemented (%s)");
  *(undefined8 *)FVar1 = 0;
  return FVar1;
}

// GetValue @ 14c68a280

float __thiscall UMovieSceneScriptingFloatKey::GetValue(UMovieSceneScriptingFloatKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x31,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// SetArriveTangent @ 14c68b410

void __thiscall
UMovieSceneScriptingFloatKey::SetArriveTangent(UMovieSceneScriptingFloatKey *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x62,L"Pure virtual not implemented (%s)");
  return;
}

// SetArriveTangentWeight @ 14c68b580

void __thiscall
UMovieSceneScriptingFloatKey::SetArriveTangentWeight
          (UMovieSceneScriptingFloatKey *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x8c,L"Pure virtual not implemented (%s)");
  return;
}

// SetInterpolationMode @ 14c68b840

void __thiscall
UMovieSceneScriptingFloatKey::SetInterpolationMode
          (UMovieSceneScriptingFloatKey *this,ERichCurveInterpMode param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x46,L"Pure virtual not implemented (%s)");
  return;
}

// SetLeaveTangent @ 14c68b9c0

void __thiscall
UMovieSceneScriptingFloatKey::SetLeaveTangent(UMovieSceneScriptingFloatKey *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x70,L"Pure virtual not implemented (%s)");
  return;
}

// SetLeaveTangentWeight @ 14c68bb30

void __thiscall
UMovieSceneScriptingFloatKey::SetLeaveTangentWeight
          (UMovieSceneScriptingFloatKey *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x9a,L"Pure virtual not implemented (%s)");
  return;
}

// SetTangentMode @ 14c68bc90

void __thiscall
UMovieSceneScriptingFloatKey::SetTangentMode
          (UMovieSceneScriptingFloatKey *this,ERichCurveTangentMode param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x54,L"Pure virtual not implemented (%s)");
  return;
}

// SetTangentWeightMode @ 14c68bdf0

void __thiscall
UMovieSceneScriptingFloatKey::SetTangentWeightMode
          (UMovieSceneScriptingFloatKey *this,ERichCurveTangentWeightMode param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x7e,L"Pure virtual not implemented (%s)");
  return;
}

// SetTime @ 14c68c160

void __thiscall
UMovieSceneScriptingFloatKey::SetTime
          (UMovieSceneScriptingFloatKey *this,FFrameNumber *param_1,float param_2,
          EMovieSceneTimeUnit param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x2a,L"Pure virtual not implemented (%s)");
  return;
}

// SetValue @ 14c68c2d0

void __thiscall
UMovieSceneScriptingFloatKey::SetValue(UMovieSceneScriptingFloatKey *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\SequencerScripting\\Source\\SequencerScripting\\Private\\KeysAndChannels\\MovieSceneScriptingFloat.h"
             ,0x38,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUMovieSceneScriptingFloatKey @ 14c68c560

void __cdecl UMovieSceneScriptingFloatKey::StaticRegisterNativesUMovieSceneScriptingFloatKey(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetArriveTangent @ 14c68e330

void __cdecl
UMovieSceneScriptingFloatKey::execGetArriveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2f0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetArriveTangentWeight @ 14c68e370

void __cdecl
UMovieSceneScriptingFloatKey::execGetArriveTangentWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 800))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetInterpolationMode @ 14c68e530

void __cdecl
UMovieSceneScriptingFloatKey::execGetInterpolationMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetLeaveTangent @ 14c68ebf0

void __cdecl
UMovieSceneScriptingFloatKey::execGetLeaveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x300))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetLeaveTangentWeight @ 14c68ec30

void __cdecl
UMovieSceneScriptingFloatKey::execGetLeaveTangentWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x330))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetTangentMode @ 14c68ee70

void __cdecl
UMovieSceneScriptingFloatKey::execGetTangentMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetTangentWeightMode @ 14c68eeb0

void __cdecl
UMovieSceneScriptingFloatKey::execGetTangentWeightMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x310))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetTime @ 14c68ef90

void __cdecl
UMovieSceneScriptingFloatKey::execGetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res10,local_res8[0]);
  *(undefined8 *)param_3 = *puVar2;
  return;
}

// execGetValue @ 14c68f200

void __cdecl
UMovieSceneScriptingFloatKey::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execSetArriveTangent @ 14c68f8d0

void __cdecl
UMovieSceneScriptingFloatKey::execSetArriveTangent(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,local_res8[0]);
  return;
}

// execSetArriveTangentWeight @ 14c68f960

void __cdecl
UMovieSceneScriptingFloatKey::execSetArriveTangentWeight
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
  (**(code **)(*(longlong *)param_1 + 0x328))(param_1,local_res8[0]);
  return;
}

// execSetInterpolationMode @ 14c68fd20

void __cdecl
UMovieSceneScriptingFloatKey::execSetInterpolationMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_res8[0]);
  return;
}

// execSetLeaveTangent @ 14c68fdb0

void __cdecl
UMovieSceneScriptingFloatKey::execSetLeaveTangent(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,local_res8[0]);
  return;
}

// execSetLeaveTangentWeight @ 14c68fe40

void __cdecl
UMovieSceneScriptingFloatKey::execSetLeaveTangentWeight
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
  (**(code **)(*(longlong *)param_1 + 0x338))(param_1,local_res8[0]);
  return;
}

// execSetTangentMode @ 14c690050

void __cdecl
UMovieSceneScriptingFloatKey::execSetTangentMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,local_res8[0]);
  return;
}

// execSetTangentWeightMode @ 14c6900e0

void __cdecl
UMovieSceneScriptingFloatKey::execSetTangentWeightMode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,local_res8[0]);
  return;
}

// execSetTime @ 14c6903d0

void __cdecl
UMovieSceneScriptingFloatKey::execSetTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 local_res8 [8];
  uchar local_res10 [8];
  undefined4 local_res20 [2];
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
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
  local_res20[0] = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,puVar2,local_res20[0],local_res8[0]);
  return;
}

// execSetValue @ 14c690b10

void __cdecl
UMovieSceneScriptingFloatKey::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_res8[0]);
  return;
}

