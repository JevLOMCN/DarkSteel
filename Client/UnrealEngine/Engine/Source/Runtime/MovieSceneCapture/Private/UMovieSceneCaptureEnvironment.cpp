// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 16

// StaticClass @ 146bd0c20

UClass * __cdecl UMovieSceneCaptureEnvironment::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureEnvironment",
               &Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton,
               StaticRegisterNativesUMovieSceneCaptureEnvironment,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCaptureEnvironment>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureEnvironment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton;
}

// UMovieSceneCaptureEnvironment @ 146bd8c40

UMovieSceneCaptureEnvironment * __thiscall
UMovieSceneCaptureEnvironment::UMovieSceneCaptureEnvironment
          (UMovieSceneCaptureEnvironment *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCaptureEnvironment__6B_;
  return this;
}

// UMovieSceneCaptureEnvironment @ 146bd8c70

UMovieSceneCaptureEnvironment * __thiscall
UMovieSceneCaptureEnvironment::UMovieSceneCaptureEnvironment
          (UMovieSceneCaptureEnvironment *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCaptureEnvironment__6B_;
  return this;
}

// ~UMovieSceneCaptureEnvironment @ 146bd9800

void __thiscall
UMovieSceneCaptureEnvironment::~UMovieSceneCaptureEnvironment(UMovieSceneCaptureEnvironment *this)

{
  *(undefined ***)this = &___7UMovieSceneCaptureEnvironment__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// FindAudioCaptureProtocol @ 146bdebd0

UMovieSceneAudioCaptureProtocolBase * __cdecl
UMovieSceneCaptureEnvironment::FindAudioCaptureProtocol(void)

{
  int iVar1;
  UMovieSceneAudioCaptureProtocolBase *pUVar2;
  IMovieSceneCaptureModule *pIVar3;
  longlong lVar4;
  UClass *pUVar5;
  
  pIVar3 = IMovieSceneCaptureModule::Get();
  lVar4 = (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3);
  if (((lVar4 != 0) && (lVar4 != 0x28)) &&
     (pUVar2 = *(UMovieSceneAudioCaptureProtocolBase **)(lVar4 + 0x58),
     pUVar2 != (UMovieSceneAudioCaptureProtocolBase *)0x0)) {
    pUVar5 = UMovieSceneAudioCaptureProtocolBase::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UMovieSceneAudioCaptureProtocolBase *)0x0;
}

// FindImageCaptureProtocol @ 146bdec40

UMovieSceneImageCaptureProtocolBase * __cdecl
UMovieSceneCaptureEnvironment::FindImageCaptureProtocol(void)

{
  int iVar1;
  UMovieSceneImageCaptureProtocolBase *pUVar2;
  IMovieSceneCaptureModule *pIVar3;
  longlong lVar4;
  UClass *pUVar5;
  
  pIVar3 = IMovieSceneCaptureModule::Get();
  lVar4 = (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3);
  if (((lVar4 != 0) && (lVar4 != 0x28)) &&
     (pUVar2 = *(UMovieSceneImageCaptureProtocolBase **)(lVar4 + 0x50),
     pUVar2 != (UMovieSceneImageCaptureProtocolBase *)0x0)) {
    pUVar5 = UMovieSceneImageCaptureProtocolBase::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return pUVar2;
    }
  }
  return (UMovieSceneImageCaptureProtocolBase *)0x0;
}

// GetCaptureElapsedTime @ 146bdfda0

float __cdecl UMovieSceneCaptureEnvironment::GetCaptureElapsedTime(void)

{
  IMovieSceneCaptureModule *pIVar1;
  longlong lVar2;
  longlong lVar3;
  
  pIVar1 = IMovieSceneCaptureModule::Get();
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  lVar3 = lVar2 + -0x28;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return *(float *)(lVar3 + 0x164);
  }
  return 0.0;
}

// GetCaptureFrameNumber @ 146bdfdf0

int __cdecl UMovieSceneCaptureEnvironment::GetCaptureFrameNumber(void)

{
  IMovieSceneCaptureModule *pIVar1;
  longlong lVar2;
  longlong lVar3;
  
  pIVar1 = IMovieSceneCaptureModule::Get();
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  lVar3 = lVar2 + -0x28;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    return *(int *)(lVar3 + 0x160);
  }
  return 0;
}

// GetPrivateStaticClass @ 146be0c50

UClass * __cdecl UMovieSceneCaptureEnvironment::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneCapture",L"MovieSceneCaptureEnvironment",
               &Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton,
               StaticRegisterNativesUMovieSceneCaptureEnvironment,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCaptureEnvironment>,
               InternalVTableHelperCtorCaller<UMovieSceneCaptureEnvironment>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCaptureEnvironment.InnerSingleton;
}

// IsCaptureInProgress @ 146be3060

bool __cdecl UMovieSceneCaptureEnvironment::IsCaptureInProgress(void)

{
  IMovieSceneCaptureModule *pIVar1;
  longlong lVar2;
  
  pIVar1 = IMovieSceneCaptureModule::Get();
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  return lVar2 != 0;
}

// StaticRegisterNativesUMovieSceneCaptureEnvironment @ 146be8da0

void __cdecl UMovieSceneCaptureEnvironment::StaticRegisterNativesUMovieSceneCaptureEnvironment(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFindAudioCaptureProtocol @ 146beb020

void __cdecl
UMovieSceneCaptureEnvironment::execFindAudioCaptureProtocol
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  IMovieSceneCaptureModule *pIVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = IMovieSceneCaptureModule::Get();
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2);
  if ((lVar3 == 0) || (lVar3 == 0x28)) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x58);
  if (lVar3 != 0) {
    pUVar4 = UMovieSceneAudioCaptureProtocolBase::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146beb090;
  }
  lVar3 = 0;
LAB_146beb090:
  *(longlong *)param_3 = lVar3;
  return;
}

// execFindImageCaptureProtocol @ 146beb0c0

void __cdecl
UMovieSceneCaptureEnvironment::execFindImageCaptureProtocol
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  IMovieSceneCaptureModule *pIVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = IMovieSceneCaptureModule::Get();
  lVar3 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2);
  if ((lVar3 == 0) || (lVar3 == 0x28)) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  lVar3 = *(longlong *)(lVar3 + 0x50);
  if (lVar3 != 0) {
    pUVar4 = UMovieSceneImageCaptureProtocolBase::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146beb12d;
  }
  lVar3 = 0;
LAB_146beb12d:
  *(longlong *)param_3 = lVar3;
  return;
}

// execGetCaptureElapsedTime @ 146beb5d0

void __cdecl
UMovieSceneCaptureEnvironment::execGetCaptureElapsedTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IMovieSceneCaptureModule *pIVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IMovieSceneCaptureModule::Get();
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  lVar3 = lVar2 + -0x28;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(lVar3 + 0x164);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetCaptureFrameNumber @ 146beb650

void __cdecl
UMovieSceneCaptureEnvironment::execGetCaptureFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IMovieSceneCaptureModule *pIVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IMovieSceneCaptureModule::Get();
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  lVar3 = lVar2 + -0x28;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(lVar3 + 0x160);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execIsCaptureInProgress @ 146beb750

void __cdecl
UMovieSceneCaptureEnvironment::execIsCaptureInProgress
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IMovieSceneCaptureModule *pIVar1;
  longlong lVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IMovieSceneCaptureModule::Get();
  lVar2 = (**(code **)((longlong)*pIVar1 + 0x50))(pIVar1);
  *(bool *)param_3 = lVar2 != 0;
  return;
}

