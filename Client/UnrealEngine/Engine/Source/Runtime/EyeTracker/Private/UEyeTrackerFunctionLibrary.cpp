// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EyeTracker
// Functions: 16

// StaticClass @ 1446f2270

UClass * __cdecl UEyeTrackerFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EyeTracker",L"EyeTrackerFunctionLibrary",
               &Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUEyeTrackerFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEyeTrackerFunctionLibrary>,
               InternalVTableHelperCtorCaller<UEyeTrackerFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton;
}

// UEyeTrackerFunctionLibrary @ 1446f2bc0

UEyeTrackerFunctionLibrary * __thiscall
UEyeTrackerFunctionLibrary::UEyeTrackerFunctionLibrary
          (UEyeTrackerFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UEyeTrackerFunctionLibrary__6B_;
  return this;
}

// UEyeTrackerFunctionLibrary @ 1446f2bf0

UEyeTrackerFunctionLibrary * __thiscall
UEyeTrackerFunctionLibrary::UEyeTrackerFunctionLibrary
          (UEyeTrackerFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UEyeTrackerFunctionLibrary__6B_;
  return this;
}

// ~UEyeTrackerFunctionLibrary @ 1446f2c20

void __thiscall
UEyeTrackerFunctionLibrary::~UEyeTrackerFunctionLibrary(UEyeTrackerFunctionLibrary *this)

{
  *(undefined ***)this = &___7UEyeTrackerFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetGazeData @ 1446f2cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UEyeTrackerFunctionLibrary::GetGazeData(FEyeTrackerGazeData *param_1)

{
  IEyeTracker *pIVar1;
  longlong lVar2;
  undefined1 uVar3;
  ushort uStack_1a;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->EyeTrackingDevice).Object, pIVar1 != (IEyeTracker *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001446f2cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)((longlong)*pIVar1 + 8))();
    return (bool)uVar3;
  }
  (param_1->GazeOrigin).field0_0x0._s_0.X = 0.0;
  (param_1->GazeOrigin).field0_0x0._s_0.Y = 0.0;
  lVar2 = (ulonglong)uStack_1a << 0x30;
  (param_1->GazeOrigin).field0_0x0._s_0.Z = 0.0;
  (param_1->GazeDirection).field0_0x0._s_0.X = 0.0;
  (param_1->GazeDirection).field0_0x0._s_0.Y = 0.0;
  (param_1->GazeDirection).field0_0x0._s_0.Z = 0.0;
  (param_1->FixationPoint).field0_0x0._s_0.X = 0.0;
  (param_1->FixationPoint).field0_0x0._s_0.Y = 0.0;
  (param_1->FixationPoint).field0_0x0._s_0.Z = 0.0;
  param_1->ConfidenceValue = (float)(int)lVar2;
  param_1->bIsLeftEyeBlink = (bool)(char)((ulonglong)lVar2 >> 0x20);
  param_1->bIsRightEyeBlink = (bool)(char)((ulonglong)lVar2 >> 0x28);
  *(short *)&param_1->field_0x4e = (short)((ulonglong)lVar2 >> 0x30);
  param_1->LeftPupilDiameter = 0.0;
  param_1->RightPupilDiameter = 0.0;
  return false;
}

// GetPrivateStaticClass @ 1446f2de0

UClass * __cdecl UEyeTrackerFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EyeTracker",L"EyeTrackerFunctionLibrary",
               &Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUEyeTrackerFunctionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UEyeTrackerFunctionLibrary>,
               InternalVTableHelperCtorCaller<UEyeTrackerFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.InnerSingleton;
}

// GetStereoGazeData @ 1446f2ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UEyeTrackerFunctionLibrary::GetStereoGazeData(FEyeTrackerStereoGazeData *param_1)

{
  IEyeTracker *pIVar1;
  undefined1 uVar2;
  uint uStack_3c;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->EyeTrackingDevice).Object, pIVar1 != (IEyeTracker *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001446f2ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x10))();
    return (bool)uVar2;
  }
  (param_1->LeftEyeOrigin).field0_0x0._s_0.X = 0.0;
  (param_1->LeftEyeOrigin).field0_0x0._s_0.Y = 0.0;
  (param_1->LeftEyeOrigin).field0_0x0._s_0.Z = 0.0;
  (param_1->LeftEyeDirection).field0_0x0._s_0.X = 0.0;
  (param_1->LeftEyeDirection).field0_0x0._s_0.Y = 0.0;
  (param_1->LeftEyeDirection).field0_0x0._s_0.Z = 0.0;
  (param_1->RightEyeOrigin).field0_0x0._s_0.X = 0.0;
  (param_1->RightEyeOrigin).field0_0x0._s_0.Y = 0.0;
  (param_1->RightEyeOrigin).field0_0x0._s_0.Z = 0.0;
  (param_1->RightEyeDirection).field0_0x0._s_0.X = 0.0;
  (param_1->RightEyeDirection).field0_0x0._s_0.Y = 0.0;
  (param_1->RightEyeDirection).field0_0x0._s_0.Z = 0.0;
  (param_1->FixationPoint).field0_0x0._s_0.X = 0.0;
  (param_1->FixationPoint).field0_0x0._s_0.Y = 0.0;
  (param_1->FixationPoint).field0_0x0._s_0.Z = 0.0;
  *(ulonglong *)&param_1->ConfidenceValue = (ulonglong)uStack_3c << 0x20;
  return false;
}

// IsEyeTrackerConnected @ 1446f2fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UEyeTrackerFunctionLibrary::IsEyeTrackerConnected(void)

{
  IEyeTracker *pIVar1;
  char cVar2;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->EyeTrackingDevice).Object, pIVar1 != (IEyeTracker *)0x0)) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x18))();
    return cVar2 != '\0';
  }
  return false;
}

// IsStereoGazeDataAvailable @ 1446f2fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable(void)

{
  IEyeTracker *pIVar1;
  undefined1 uVar2;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->EyeTrackingDevice).Object, pIVar1 != (IEyeTracker *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001446f2ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x20))();
    return (bool)uVar2;
  }
  return false;
}

// SetEyeTrackedPlayer @ 1446f3010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(APlayerController *param_1)

{
  IEyeTracker *pIVar1;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->EyeTrackingDevice).Object, pIVar1 != (IEyeTracker *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001446f302e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,param_1);
    return;
  }
  return;
}

// StaticRegisterNativesUEyeTrackerFunctionLibrary @ 1446f3040

void __cdecl UEyeTrackerFunctionLibrary::StaticRegisterNativesUEyeTrackerFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetGazeData @ 1446f3180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEyeTrackerFunctionLibrary::execGetGazeData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IEyeTracker *pIVar2;
  undefined1 uVar3;
  uchar *puVar4;
  uchar local_e8 [80];
  undefined8 local_98;
  uint uStack_40;
  undefined2 uStack_3a;
  
  local_e8[0x40] = '\0';
  local_e8[0x41] = '\0';
  local_e8[0x42] = '\0';
  local_e8[0x43] = '\0';
  local_e8[0x44] = '\0';
  local_e8[0x45] = '\0';
  local_e8[0x46] = '\0';
  local_e8[0x47] = '\0';
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_e8[0x10] = '\0';
  local_e8[0x11] = '\0';
  local_e8[0x12] = '\0';
  local_e8[0x13] = '\0';
  local_e8[0x14] = '\0';
  local_e8[0x15] = '\0';
  local_e8[0x16] = '\0';
  local_e8[0x17] = '\0';
  local_e8[0x18] = '\0';
  local_e8[0x19] = '\0';
  local_e8[0x1a] = '\0';
  local_e8[0x1b] = '\0';
  local_e8[0x1c] = '\0';
  local_e8[0x1d] = '\0';
  local_e8[0x1e] = '\0';
  local_e8[0x1f] = '\0';
  local_e8[0x20] = '\0';
  local_e8[0x21] = '\0';
  local_e8[0x22] = '\0';
  local_e8[0x23] = '\0';
  local_e8[0x24] = '\0';
  local_e8[0x25] = '\0';
  local_e8[0x26] = '\0';
  local_e8[0x27] = '\0';
  local_e8[0x28] = '\0';
  local_e8[0x29] = '\0';
  local_e8[0x2a] = '\0';
  local_e8[0x2b] = '\0';
  local_e8[0x2c] = '\0';
  local_e8[0x2d] = '\0';
  local_e8[0x2e] = '\0';
  local_e8[0x2f] = '\0';
  local_e8[0x30] = '\0';
  local_e8[0x31] = '\0';
  local_e8[0x32] = '\0';
  local_e8[0x33] = '\0';
  local_e8[0x34] = '\0';
  local_e8[0x35] = '\0';
  local_e8[0x36] = '\0';
  local_e8[0x37] = '\0';
  local_e8[0x38] = '\0';
  local_e8[0x39] = '\0';
  local_e8[0x3a] = '\0';
  local_e8[0x3b] = '\0';
  local_e8[0x3c] = '\0';
  local_e8[0x3d] = '\0';
  local_e8[0x3e] = '\0';
  local_e8[0x3f] = '\0';
  local_e8[0x48] = '\0';
  local_e8[0x49] = '\0';
  local_e8[0x4a] = '\0';
  local_e8[0x4b] = '\0';
  local_e8[0x4c] = '\0';
  local_e8[0x4d] = '\0';
  local_98 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  puVar4 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine == (UEngine *)0x0) ||
     (pIVar2 = (GEngine->EyeTrackingDevice).Object, pIVar2 == (IEyeTracker *)0x0)) {
    uStack_40 = 0;
    puVar4[0] = '\0';
    puVar4[1] = '\0';
    puVar4[2] = '\0';
    puVar4[3] = '\0';
    puVar4[4] = '\0';
    puVar4[5] = '\0';
    puVar4[6] = '\0';
    puVar4[7] = '\0';
    puVar4[8] = '\0';
    puVar4[9] = '\0';
    puVar4[10] = '\0';
    puVar4[0xb] = '\0';
    puVar4[0xc] = '\0';
    puVar4[0xd] = '\0';
    puVar4[0xe] = '\0';
    puVar4[0xf] = '\0';
    puVar4[0x10] = '\0';
    puVar4[0x11] = '\0';
    puVar4[0x12] = '\0';
    puVar4[0x13] = '\0';
    puVar4[0x14] = '\0';
    puVar4[0x15] = '\0';
    puVar4[0x16] = '\0';
    puVar4[0x17] = '\0';
    puVar4[0x18] = '\0';
    puVar4[0x19] = '\0';
    puVar4[0x1a] = '\0';
    puVar4[0x1b] = '\0';
    puVar4[0x1c] = '\0';
    puVar4[0x1d] = '\0';
    puVar4[0x1e] = '\0';
    puVar4[0x1f] = '\0';
    puVar4[0x20] = '\0';
    puVar4[0x21] = '\0';
    puVar4[0x22] = '\0';
    puVar4[0x23] = '\0';
    puVar4[0x24] = '\0';
    puVar4[0x25] = '\0';
    puVar4[0x26] = '\0';
    puVar4[0x27] = '\0';
    puVar4[0x28] = '\0';
    puVar4[0x29] = '\0';
    puVar4[0x2a] = '\0';
    puVar4[0x2b] = '\0';
    puVar4[0x2c] = '\0';
    puVar4[0x2d] = '\0';
    puVar4[0x2e] = '\0';
    puVar4[0x2f] = '\0';
    puVar4[0x30] = '\0';
    puVar4[0x31] = '\0';
    puVar4[0x32] = '\0';
    puVar4[0x33] = '\0';
    puVar4[0x34] = '\0';
    puVar4[0x35] = '\0';
    puVar4[0x36] = '\0';
    puVar4[0x37] = '\0';
    puVar4[0x38] = '\0';
    puVar4[0x39] = '\0';
    puVar4[0x3a] = '\0';
    puVar4[0x3b] = '\0';
    puVar4[0x3c] = '\0';
    puVar4[0x3d] = '\0';
    puVar4[0x3e] = '\0';
    puVar4[0x3f] = '\0';
    puVar4[0x40] = '\0';
    puVar4[0x41] = '\0';
    puVar4[0x42] = '\0';
    puVar4[0x43] = '\0';
    puVar4[0x44] = '\0';
    puVar4[0x45] = '\0';
    puVar4[0x46] = '\0';
    puVar4[0x47] = '\0';
    *(ulonglong *)(puVar4 + 0x48) = CONCAT26(uStack_3a,(uint6)uStack_40);
    puVar4[0x50] = '\0';
    puVar4[0x51] = '\0';
    puVar4[0x52] = '\0';
    puVar4[0x53] = '\0';
    puVar4[0x54] = '\0';
    puVar4[0x55] = '\0';
    puVar4[0x56] = '\0';
    puVar4[0x57] = '\0';
    *(undefined1 *)param_3 = 0;
  }
  else {
    uVar3 = (**(code **)((longlong)*pIVar2 + 8))();
    *(undefined1 *)param_3 = uVar3;
  }
  return;
}

// execGetStereoGazeData @ 1446f32e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEyeTrackerFunctionLibrary::execGetStereoGazeData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IEyeTracker *pIVar2;
  undefined1 uVar3;
  uchar *puVar4;
  uchar local_128 [252];
  uint uStack_2c;
  
  local_128[0] = '\0';
  local_128[1] = '\0';
  local_128[2] = '\0';
  local_128[3] = '\0';
  local_128[4] = '\0';
  local_128[5] = '\0';
  local_128[6] = '\0';
  local_128[7] = '\0';
  local_128[8] = '\0';
  local_128[9] = '\0';
  local_128[10] = '\0';
  local_128[0xb] = '\0';
  local_128[0xc] = '\0';
  local_128[0xd] = '\0';
  local_128[0xe] = '\0';
  local_128[0xf] = '\0';
  local_128[0x10] = '\0';
  local_128[0x11] = '\0';
  local_128[0x12] = '\0';
  local_128[0x13] = '\0';
  local_128[0x14] = '\0';
  local_128[0x15] = '\0';
  local_128[0x16] = '\0';
  local_128[0x17] = '\0';
  local_128[0x18] = '\0';
  local_128[0x19] = '\0';
  local_128[0x1a] = '\0';
  local_128[0x1b] = '\0';
  local_128[0x1c] = '\0';
  local_128[0x1d] = '\0';
  local_128[0x1e] = '\0';
  local_128[0x1f] = '\0';
  local_128[0x20] = '\0';
  local_128[0x21] = '\0';
  local_128[0x22] = '\0';
  local_128[0x23] = '\0';
  local_128[0x24] = '\0';
  local_128[0x25] = '\0';
  local_128[0x26] = '\0';
  local_128[0x27] = '\0';
  local_128[0x28] = '\0';
  local_128[0x29] = '\0';
  local_128[0x2a] = '\0';
  local_128[0x2b] = '\0';
  local_128[0x2c] = '\0';
  local_128[0x2d] = '\0';
  local_128[0x2e] = '\0';
  local_128[0x2f] = '\0';
  local_128[0x30] = '\0';
  local_128[0x31] = '\0';
  local_128[0x32] = '\0';
  local_128[0x33] = '\0';
  local_128[0x34] = '\0';
  local_128[0x35] = '\0';
  local_128[0x36] = '\0';
  local_128[0x37] = '\0';
  local_128[0x38] = '\0';
  local_128[0x39] = '\0';
  local_128[0x3a] = '\0';
  local_128[0x3b] = '\0';
  local_128[0x3c] = '\0';
  local_128[0x3d] = '\0';
  local_128[0x3e] = '\0';
  local_128[0x3f] = '\0';
  local_128[0x40] = '\0';
  local_128[0x41] = '\0';
  local_128[0x42] = '\0';
  local_128[0x43] = '\0';
  local_128[0x44] = '\0';
  local_128[0x45] = '\0';
  local_128[0x46] = '\0';
  local_128[0x47] = '\0';
  local_128[0x48] = '\0';
  local_128[0x49] = '\0';
  local_128[0x4a] = '\0';
  local_128[0x4b] = '\0';
  local_128[0x4c] = '\0';
  local_128[0x4d] = '\0';
  local_128[0x4e] = '\0';
  local_128[0x4f] = '\0';
  local_128[0x50] = '\0';
  local_128[0x51] = '\0';
  local_128[0x52] = '\0';
  local_128[0x53] = '\0';
  local_128[0x54] = '\0';
  local_128[0x55] = '\0';
  local_128[0x56] = '\0';
  local_128[0x57] = '\0';
  local_128[0x58] = '\0';
  local_128[0x59] = '\0';
  local_128[0x5a] = '\0';
  local_128[0x5b] = '\0';
  local_128[0x5c] = '\0';
  local_128[0x5d] = '\0';
  local_128[0x5e] = '\0';
  local_128[0x5f] = '\0';
  local_128[0x70] = '\0';
  local_128[0x71] = '\0';
  local_128[0x72] = '\0';
  local_128[0x73] = '\0';
  local_128[0x74] = '\0';
  local_128[0x75] = '\0';
  local_128[0x76] = '\0';
  local_128[0x77] = '\0';
  local_128[0x60] = '\0';
  local_128[0x61] = '\0';
  local_128[0x62] = '\0';
  local_128[99] = '\0';
  local_128[100] = '\0';
  local_128[0x65] = '\0';
  local_128[0x66] = '\0';
  local_128[0x67] = '\0';
  local_128[0x68] = '\0';
  local_128[0x69] = '\0';
  local_128[0x6a] = '\0';
  local_128[0x6b] = '\0';
  local_128[0x6c] = '\0';
  local_128[0x6d] = '\0';
  local_128[0x6e] = '\0';
  local_128[0x6f] = '\0';
  local_128[0x78] = '\0';
  local_128[0x79] = '\0';
  local_128[0x7a] = '\0';
  local_128[0x7b] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  puVar4 = local_128;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar2 = (GEngine->EyeTrackingDevice).Object, pIVar2 != (IEyeTracker *)0x0)) {
    uVar3 = (**(code **)((longlong)*pIVar2 + 0x10))();
    *(undefined1 *)param_3 = uVar3;
    return;
  }
  puVar4[0] = '\0';
  puVar4[1] = '\0';
  puVar4[2] = '\0';
  puVar4[3] = '\0';
  puVar4[4] = '\0';
  puVar4[5] = '\0';
  puVar4[6] = '\0';
  puVar4[7] = '\0';
  puVar4[8] = '\0';
  puVar4[9] = '\0';
  puVar4[10] = '\0';
  puVar4[0xb] = '\0';
  puVar4[0xc] = '\0';
  puVar4[0xd] = '\0';
  puVar4[0xe] = '\0';
  puVar4[0xf] = '\0';
  puVar4[0x10] = '\0';
  puVar4[0x11] = '\0';
  puVar4[0x12] = '\0';
  puVar4[0x13] = '\0';
  puVar4[0x14] = '\0';
  puVar4[0x15] = '\0';
  puVar4[0x16] = '\0';
  puVar4[0x17] = '\0';
  puVar4[0x18] = '\0';
  puVar4[0x19] = '\0';
  puVar4[0x1a] = '\0';
  puVar4[0x1b] = '\0';
  puVar4[0x1c] = '\0';
  puVar4[0x1d] = '\0';
  puVar4[0x1e] = '\0';
  puVar4[0x1f] = '\0';
  puVar4[0x20] = '\0';
  puVar4[0x21] = '\0';
  puVar4[0x22] = '\0';
  puVar4[0x23] = '\0';
  puVar4[0x24] = '\0';
  puVar4[0x25] = '\0';
  puVar4[0x26] = '\0';
  puVar4[0x27] = '\0';
  puVar4[0x28] = '\0';
  puVar4[0x29] = '\0';
  puVar4[0x2a] = '\0';
  puVar4[0x2b] = '\0';
  puVar4[0x2c] = '\0';
  puVar4[0x2d] = '\0';
  puVar4[0x2e] = '\0';
  puVar4[0x2f] = '\0';
  puVar4[0x30] = '\0';
  puVar4[0x31] = '\0';
  puVar4[0x32] = '\0';
  puVar4[0x33] = '\0';
  puVar4[0x34] = '\0';
  puVar4[0x35] = '\0';
  puVar4[0x36] = '\0';
  puVar4[0x37] = '\0';
  puVar4[0x38] = '\0';
  puVar4[0x39] = '\0';
  puVar4[0x3a] = '\0';
  puVar4[0x3b] = '\0';
  puVar4[0x3c] = '\0';
  puVar4[0x3d] = '\0';
  puVar4[0x3e] = '\0';
  puVar4[0x3f] = '\0';
  puVar4[0x40] = '\0';
  puVar4[0x41] = '\0';
  puVar4[0x42] = '\0';
  puVar4[0x43] = '\0';
  puVar4[0x44] = '\0';
  puVar4[0x45] = '\0';
  puVar4[0x46] = '\0';
  puVar4[0x47] = '\0';
  puVar4[0x48] = '\0';
  puVar4[0x49] = '\0';
  puVar4[0x4a] = '\0';
  puVar4[0x4b] = '\0';
  puVar4[0x4c] = '\0';
  puVar4[0x4d] = '\0';
  puVar4[0x4e] = '\0';
  puVar4[0x4f] = '\0';
  puVar4[0x50] = '\0';
  puVar4[0x51] = '\0';
  puVar4[0x52] = '\0';
  puVar4[0x53] = '\0';
  puVar4[0x54] = '\0';
  puVar4[0x55] = '\0';
  puVar4[0x56] = '\0';
  puVar4[0x57] = '\0';
  puVar4[0x58] = '\0';
  puVar4[0x59] = '\0';
  puVar4[0x5a] = '\0';
  puVar4[0x5b] = '\0';
  puVar4[0x5c] = '\0';
  puVar4[0x5d] = '\0';
  puVar4[0x5e] = '\0';
  puVar4[0x5f] = '\0';
  puVar4[0x60] = '\0';
  puVar4[0x61] = '\0';
  puVar4[0x62] = '\0';
  puVar4[99] = '\0';
  puVar4[100] = '\0';
  puVar4[0x65] = '\0';
  puVar4[0x66] = '\0';
  puVar4[0x67] = '\0';
  puVar4[0x68] = '\0';
  puVar4[0x69] = '\0';
  puVar4[0x6a] = '\0';
  puVar4[0x6b] = '\0';
  puVar4[0x6c] = '\0';
  puVar4[0x6d] = '\0';
  puVar4[0x6e] = '\0';
  puVar4[0x6f] = '\0';
  puVar4[0x70] = '\0';
  puVar4[0x71] = '\0';
  puVar4[0x72] = '\0';
  puVar4[0x73] = '\0';
  puVar4[0x74] = '\0';
  puVar4[0x75] = '\0';
  puVar4[0x76] = '\0';
  puVar4[0x77] = '\0';
  *(ulonglong *)(puVar4 + 0x78) = (ulonglong)uStack_2c << 0x20;
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsEyeTrackerConnected @ 1446f3460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEyeTrackerFunctionLibrary::execIsEyeTrackerConnected
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IEyeTracker *pIVar1;
  char cVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->EyeTrackingDevice).Object, pIVar1 != (IEyeTracker *)0x0)) {
    cVar2 = (**(code **)((longlong)*pIVar1 + 0x18))();
    *(bool *)param_3 = cVar2 != '\0';
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsStereoGazeDataAvailable @ 1446f34c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEyeTrackerFunctionLibrary::execIsStereoGazeDataAvailable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IEyeTracker *pIVar1;
  undefined1 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->EyeTrackingDevice).Object, pIVar1 != (IEyeTracker *)0x0)) {
    uVar2 = (**(code **)((longlong)*pIVar1 + 0x20))();
    *(undefined1 *)param_3 = uVar2;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetEyeTrackedPlayer @ 1446f3520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UEyeTrackerFunctionLibrary::execSetEyeTrackedPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IEyeTracker *pIVar2;
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
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar2 = (GEngine->EyeTrackingDevice).Object, pIVar2 != (IEyeTracker *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,local_res10[0]);
  }
  return;
}

