// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 11

// StaticClass @ 14d77ce60

UClass * __cdecl URenderTargetMediaOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"RenderTargetMediaOutput",
               &Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton,
               StaticRegisterNativesURenderTargetMediaOutput,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URenderTargetMediaOutput>,
               InternalVTableHelperCtorCaller<URenderTargetMediaOutput>,local_res8,
               UMediaOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton;
}

// URenderTargetMediaOutput @ 14d78b990

URenderTargetMediaOutput * __thiscall
URenderTargetMediaOutput::URenderTargetMediaOutput
          (URenderTargetMediaOutput *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->RenderTarget).SoftObjectPtr.field_0x18;
  this->bInvertAlpha = false;
  this->_padding_ = (longlong)&___7URenderTargetMediaOutput__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// URenderTargetMediaOutput @ 14d78b9e0

URenderTargetMediaOutput * __thiscall
URenderTargetMediaOutput::URenderTargetMediaOutput
          (URenderTargetMediaOutput *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->RenderTarget).SoftObjectPtr.field_0x18;
  *(undefined4 *)&this->_padding_ = 4;
  this->bInvertAlpha = false;
  this->_padding_ = (longlong)&___7URenderTargetMediaOutput__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->RenderTarget).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~URenderTargetMediaOutput @ 14d78d3a0

void __thiscall URenderTargetMediaOutput::~URenderTargetMediaOutput(URenderTargetMediaOutput *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7URenderTargetMediaOutput__6B_;
  pvVar1 = *(void **)&(this->RenderTarget).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UMediaOutput__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateMediaCaptureImpl @ 14d7a0f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMediaCapture * __thiscall
URenderTargetMediaOutput::CreateMediaCaptureImpl(URenderTargetMediaOutput *this)

{
  char cVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UMediaCapture *pUVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = URenderTargetMediaCapture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  pUVar4 = (UMediaCapture *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (pUVar4 != (UMediaCapture *)0x0) {
    if (4 < (byte)LogMediaIOCore._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    cVar1 = (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4);
    if (cVar1 == '\x04') {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (URenderTargetMediaOutput *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      (pUVar4->MediaOutput).field0_0x0.DebugPtr = (UMediaOutput *)this;
    }
  }
  return pUVar4;
}

// GetConversionOperation @ 14d7a9990

EMediaCaptureConversionOperation __thiscall
URenderTargetMediaOutput::GetConversionOperation
          (URenderTargetMediaOutput *this,EMediaCaptureSourceType param_1)

{
  return -(this->bInvertAlpha != false) & INVERT_ALPHA;
}

// GetPrivateStaticClass @ 14d7ad3b0

UClass * __cdecl URenderTargetMediaOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"RenderTargetMediaOutput",
               &Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton,
               StaticRegisterNativesURenderTargetMediaOutput,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URenderTargetMediaOutput>,
               InternalVTableHelperCtorCaller<URenderTargetMediaOutput>,local_res8,
               UMediaOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URenderTargetMediaOutput.InnerSingleton;
}

// GetRequestedPixelFormat @ 14d7ad6e0

EPixelFormat __thiscall
URenderTargetMediaOutput::GetRequestedPixelFormat(URenderTargetMediaOutput *this)

{
  code *UNRECOVERED_JUMPTABLE;
  EPixelFormat EVar1;
  UTextureRenderTarget2D *pUVar2;
  
  pUVar2 = TSoftObjectPtr<UTextureRenderTarget2D>::LoadSynchronous(&this->RenderTarget);
  if (pUVar2 != (UTextureRenderTarget2D *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x3d0);
                    /* WARNING: Could not recover jumptable at 0x00014d7ad703. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (*UNRECOVERED_JUMPTABLE)(pUVar2,UNRECOVERED_JUMPTABLE);
    return EVar1;
  }
  return PF_Unknown;
}

// GetRequestedSize @ 14d7ad7a0

TIntPoint<int> __thiscall URenderTargetMediaOutput::GetRequestedSize(URenderTargetMediaOutput *this)

{
  int iVar1;
  UTextureRenderTarget2D *pUVar2;
  TIntPoint<int>_u_0 in_RDX;
  
  pUVar2 = TSoftObjectPtr<UTextureRenderTarget2D>::LoadSynchronous(&this->RenderTarget);
  if (pUVar2 != (UTextureRenderTarget2D *)0x0) {
    iVar1 = pUVar2->SizeX;
    *(int *)((longlong)in_RDX + 4) = pUVar2->SizeY;
    *(int *)in_RDX = iVar1;
    return (TIntPoint<int>)in_RDX;
  }
  *(TIntPoint<int>_u_0 *)in_RDX =
       (TIntPoint<int>_u_0_s_0)UMediaOutput::RequestCaptureSourceSize.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// StaticRegisterNativesURenderTargetMediaOutput @ 14d7be4f0

void __cdecl URenderTargetMediaOutput::StaticRegisterNativesURenderTargetMediaOutput(void)

{
  return;
}

// Validate @ 14d7c3340

bool __thiscall URenderTargetMediaOutput::Validate(URenderTargetMediaOutput *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UTextureRenderTarget2D *pUVar3;
  FString local_28;
  FString local_18;
  
  bVar2 = UMediaOutput::Validate((UMediaOutput *)this,param_1);
  if (bVar2) {
    pUVar3 = TSoftObjectPtr<UTextureRenderTarget2D>::LoadSynchronous(&this->RenderTarget);
    if (pUVar3 != (UTextureRenderTarget2D *)0x0) {
      return true;
    }
    FSoftObjectPath::ToString
              ((FSoftObjectPath *)&(this->RenderTarget).SoftObjectPtr.field_0x8,&local_18);
    ::FString::PrintfImpl(&local_28,L"Missing render target object: \'%s\'.");
    if (param_1 != &local_28) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

