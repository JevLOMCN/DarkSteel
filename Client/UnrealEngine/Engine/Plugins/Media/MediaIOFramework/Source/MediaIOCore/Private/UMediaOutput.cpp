// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 14

// StaticClass @ 14d77c6c0

UClass * __cdecl UMediaOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaOutput",
               &Z_Registration_Info_UClass_UMediaOutput.InnerSingleton,
               StaticRegisterNativesUMediaOutput,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaOutput>,
               InternalVTableHelperCtorCaller<UMediaOutput>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaOutput.InnerSingleton;
}

// UMediaOutput @ 14d78b890

UMediaOutput * __thiscall UMediaOutput::UMediaOutput(UMediaOutput *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMediaOutput__6B_;
  return this;
}

// UMediaOutput @ 14d78b8c0

UMediaOutput * __thiscall UMediaOutput::UMediaOutput(UMediaOutput *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->NumberOfTextureBuffers = 4;
  this->_padding_ = (longlong)&___7UMediaOutput__6B_;
  return this;
}

// ~UMediaOutput @ 14d78d340

void __thiscall UMediaOutput::~UMediaOutput(UMediaOutput *this)

{
  this->_padding_ = (longlong)&___7UMediaOutput__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateMediaCapture @ 14d7a0df0

/* WARNING: Enum "Type": Some values do not have unique names */

UMediaCapture * __thiscall UMediaOutput::CreateMediaCapture(UMediaOutput *this)

{
  char cVar1;
  UMediaCapture *pUVar2;
  void *local_18;
  undefined8 local_10;
  
  pUVar2 = (UMediaCapture *)0x0;
  local_18 = (void *)0x0;
  local_10 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x2b0))(this,&local_18);
  if (cVar1 == '\0') {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
  else {
    pUVar2 = (UMediaCapture *)(**(code **)(this->_padding_ + 0x2d0))(this);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return pUVar2;
}

// CreateMediaCaptureImpl @ 14d7a0f60

UMediaCapture * __thiscall UMediaOutput::CreateMediaCaptureImpl(UMediaOutput *this)

{
  return (UMediaCapture *)0x0;
}

// GetConversionOperation @ 14d7a9980

EMediaCaptureConversionOperation __thiscall
UMediaOutput::GetConversionOperation(UMediaOutput *this,EMediaCaptureSourceType param_1)

{
  return NONE;
}

// GetPrivateStaticClass @ 14d7ad240

UClass * __cdecl UMediaOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"MediaOutput",
               &Z_Registration_Info_UClass_UMediaOutput.InnerSingleton,
               StaticRegisterNativesUMediaOutput,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaOutput>,
               InternalVTableHelperCtorCaller<UMediaOutput>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaOutput.InnerSingleton;
}

// GetRequestedPixelFormat @ 14d7ad6b0

EPixelFormat __thiscall UMediaOutput::GetRequestedPixelFormat(UMediaOutput *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaOutput.h"
             ,0x54,L"Pure virtual not implemented (%s)");
  return PF_Unknown;
}

// GetRequestedSize @ 14d7ad750

TIntPoint<int> __thiscall UMediaOutput::GetRequestedSize(UMediaOutput *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaOutput.h"
             ,0x4e,L"Pure virtual not implemented (%s)");
  *(TIntPoint<int>_u_0 *)in_RDX = (TIntPoint<int>_u_0_s_0)RequestCaptureSourceSize.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// StaticRegisterNativesUMediaOutput @ 14d7be4a0

void __cdecl UMediaOutput::StaticRegisterNativesUMediaOutput(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMediaOutput_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Validate @ 14d7c32b0

bool __thiscall UMediaOutput::Validate(UMediaOutput *this,FString *param_1)

{
  wchar_t *pwVar1;
  int local_res8;
  int iStackX_c;
  
  (**(code **)(this->_padding_ + 0x2b8))(this,&local_res8);
  if (((local_res8 == RequestCaptureSourceSize.field0_0x0._s_0.X) &&
      (iStackX_c == RequestCaptureSourceSize.field0_0x0._s_0.Y)) ||
     ((0 < local_res8 && (0 < iStackX_c)))) {
    if (this->NumberOfTextureBuffers - 1U < 8) {
      return true;
    }
    pwVar1 = L"NumberOfTextureBuffers is not valid.";
  }
  else {
    pwVar1 = L"The requested size is invalid.";
  }
  ::FString::operator=(param_1,pwVar1);
  return false;
}

// execCreateMediaCapture @ 14d7c5310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMediaOutput::execCreateMediaCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  undefined8 uVar2;
  void *local_18;
  undefined8 local_10;
  
  uVar2 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_18);
  if (cVar1 == '\0') {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execValidate @ 14d7c5710

void __cdecl UMediaOutput::execValidate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  void **ppvVar3;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppvVar3 = &local_18;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar3 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,ppvVar3);
  *(undefined1 *)param_3 = uVar2;
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

