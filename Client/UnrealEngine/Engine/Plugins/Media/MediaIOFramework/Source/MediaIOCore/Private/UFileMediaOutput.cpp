// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 11

// StaticClass @ 14d77d480

UClass * __cdecl UFileMediaOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"FileMediaOutput",
               &Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton,
               StaticRegisterNativesUFileMediaOutput,0xd0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFileMediaOutput>,
               InternalVTableHelperCtorCaller<UFileMediaOutput>,local_res8,UMediaOutput::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton;
}

// UFileMediaOutput @ 14d78b070

UFileMediaOutput * __thiscall
UFileMediaOutput::UFileMediaOutput(UFileMediaOutput *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UFileMediaOutput__6B_;
  *(undefined8 *)&(this->WriteOptions).OnComplete = 0;
  (this->WriteOptions).Format = EXR;
  *(undefined8 *)&(this->WriteOptions).OnComplete.field_0x8 = 0;
  *(undefined8 *)&(this->WriteOptions).OnComplete.field_0x10 = 0;
  *(undefined8 *)&(this->WriteOptions).NativeOnComplete = 0;
  *(undefined8 *)&(this->WriteOptions).NativeOnComplete.field_0x28 = 0;
  (this->WriteOptions).CompressionQuality = 0;
  (this->WriteOptions).bOverwriteFile = true;
  (this->WriteOptions).bAsync = true;
  (this->FilePath).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Path.Data.ArrayNum = 0;
  (this->FilePath).Path.Data.ArrayMax = 0;
  (this->BaseFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFileName).Data.ArrayNum = 0;
  (this->BaseFileName).Data.ArrayMax = 0;
  return this;
}

// UFileMediaOutput @ 14d78b0e0

UFileMediaOutput * __thiscall UFileMediaOutput::UFileMediaOutput(UFileMediaOutput *this)

{
  FDirectoryPath *pFVar1;
  FScriptContainerElement *pFVar2;
  FObjectInitializer *pFVar3;
  FString *pFVar4;
  size_t sVar5;
  int iVar6;
  wchar_t *_Str;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  undefined4 local_10;
  
  pFVar3 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar3);
  *(undefined4 *)&this->field_0x28 = 4;
  *(undefined ***)this = &___7UFileMediaOutput__6B_;
  pFVar1 = &this->FilePath;
  (this->WriteOptions).Format = EXR;
  *(undefined8 *)&(this->WriteOptions).OnComplete = 0;
  *(undefined8 *)&(this->WriteOptions).OnComplete.field_0x8 = 0;
  *(undefined8 *)&(this->WriteOptions).OnComplete.field_0x10 = 0;
  (this->WriteOptions).bOverwriteFile = true;
  (this->WriteOptions).bAsync = true;
  *(undefined8 *)&(this->WriteOptions).NativeOnComplete = 0;
  *(undefined8 *)&(this->WriteOptions).NativeOnComplete.field_0x28 = 0;
  iVar6 = 0;
  (this->WriteOptions).CompressionQuality = 0;
  (pFVar1->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Path.Data.ArrayNum = 0;
  (this->FilePath).Path.Data.ArrayMax = 0;
  (this->BaseFileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFileName).Data.ArrayNum = 0;
  (this->BaseFileName).Data.ArrayMax = 0;
  this->bInvertAlpha = true;
  pFVar4 = ::FString::FString(&local_38,"MediaOutput");
  local_28.DataPtr = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = FPaths::ProjectSavedDir();
  if ((pFVar4->Data).ArrayNum != 0) {
    local_28.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    sVar5 = wcslen(local_28.DataPtr);
    iVar6 = (int)sVar5;
  }
  local_10 = 0;
  local_28.Size = iVar6;
  local_18 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar5 = wcslen(_Str);
    local_10 = (undefined4)sVar5;
  }
  FPaths::CombineInternal(&local_48,&local_28,2);
  if (&pFVar1->Path != &local_48) {
    pFVar2 = (pFVar1->Path).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Path).Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->FilePath).Path.Data.ArrayNum = local_48.Data.ArrayNum;
    (this->FilePath).Path.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UFileMediaOutput @ 14d78d0a0

void __thiscall UFileMediaOutput::~UFileMediaOutput(UFileMediaOutput *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7UFileMediaOutput__6B_;
  pFVar1 = (this->BaseFileName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilePath).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&(this->WriteOptions).NativeOnComplete != 0) {
    plVar2 = *(longlong **)&(this->WriteOptions).NativeOnComplete.field_0x28;
    plVar3 = (longlong *)&(this->WriteOptions).NativeOnComplete.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WriteOptions).OnComplete);
  *(undefined ***)this = &___7UMediaOutput__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateMediaCaptureImpl @ 14d7a0e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMediaCapture * __thiscall UFileMediaOutput::CreateMediaCaptureImpl(UFileMediaOutput *this)

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
  pUVar3 = UFileMediaCapture::StaticClass();
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
    cVar1 = (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4);
    if (cVar1 == '\x04') {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UFileMediaOutput *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      (pUVar4->MediaOutput).field0_0x0.DebugPtr = (UMediaOutput *)this;
    }
  }
  return pUVar4;
}

// GetConversionOperation @ 14d7a98a0

EMediaCaptureConversionOperation __thiscall
UFileMediaOutput::GetConversionOperation(UFileMediaOutput *this,EMediaCaptureSourceType param_1)

{
  EDesiredImageFormat EVar1;
  char cVar2;
  IConsoleManager *pIVar3;
  
  EVar1 = (this->WriteOptions).Format;
  if ((EVar1 != EXR) && (EVar1 != PNG)) {
    return NONE;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      CVarPropagateAlpha =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.PostProcessing.PropagateAlpha",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  cVar2 = (**(code **)(*(longlong *)CVarPropagateAlpha + 0xc0))();
  if ((cVar2 == '\0') && (param_1 != RENDER_TARGET)) {
    return SET_ALPHA_ONE;
  }
  return -(this->bInvertAlpha != false) & INVERT_ALPHA;
}

// GetPrivateStaticClass @ 14d7ad010

UClass * __cdecl UFileMediaOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"FileMediaOutput",
               &Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton,
               StaticRegisterNativesUFileMediaOutput,0xd0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFileMediaOutput>,
               InternalVTableHelperCtorCaller<UFileMediaOutput>,local_res8,UMediaOutput::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaOutput.InnerSingleton;
}

// GetRequestedPixelFormat @ 14d7ad580

EPixelFormat __thiscall UFileMediaOutput::GetRequestedPixelFormat(UFileMediaOutput *this)

{
  bool bVar1;
  EPixelFormat EVar2;
  Type TVar3;
  IConsoleManager *pIVar4;
  longlong *plVar5;
  TConsoleVariableData<int> *pTVar6;
  TConsoleVariableData<int> *pTVar7;
  
  if (this->bOverridePixelFormat != false) {
    EVar2 = PF_B8G8R8A8;
    if (this->DesiredPixelFormat == FloatRGBA) {
      EVar2 = PF_FloatRGBA;
    }
    return EVar2;
  }
  pTVar7 = (TConsoleVariableData<int> *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar4 = IConsoleManager::Get();
    plVar5 = (longlong *)
             (**(code **)((longlong)*pIVar4 + 0xc0))(pIVar4,L"r.DefaultBackBufferPixelFormat",1);
    pTVar6 = pTVar7;
    if (plVar5 != (longlong *)0x0) {
      pTVar6 = (TConsoleVariableData<int> *)(**(code **)(*plVar5 + 0x68))(plVar5);
    }
    CVarDefaultBackBufferPixelFormat = pTVar6;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar6 = CVarDefaultBackBufferPixelFormat;
  bVar1 = IsInParallelGameThread();
  if ((!bVar1) && (bVar1 = IsInGameThread(), !bVar1)) {
    pTVar7 = (TConsoleVariableData<int> *)&DAT_00000004;
  }
  TVar3 = EDefaultBackBufferPixelFormat::FromInt
                    (*(int *)((longlong)pTVar6->ShadowedValue + (longlong)pTVar7->ShadowedValue));
  EVar2 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar3);
  if ((this->WriteOptions).Format != EXR) {
    return PF_B8G8R8A8;
  }
  if (EVar2 == PF_A2B10G10R10) {
    EVar2 = PF_B8G8R8A8;
  }
  return EVar2;
}

// GetRequestedSize @ 14d7ad720

TIntPoint<int> __thiscall UFileMediaOutput::GetRequestedSize(UFileMediaOutput *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  if (this->bOverrideDesiredSize != false) {
    *(TIntPoint<int>_u_0 *)in_RDX = (this->DesiredSize).field0_0x0;
    return (TIntPoint<int>)in_RDX;
  }
  *(TIntPoint<int>_u_0 *)in_RDX =
       (TIntPoint<int>_u_0_s_0)UMediaOutput::RequestCaptureSourceSize.field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// StaticRegisterNativesUFileMediaOutput @ 14d7be440

void __cdecl UFileMediaOutput::StaticRegisterNativesUFileMediaOutput(void)

{
  return;
}

// Validate @ 14d7c30b0

bool __thiscall UFileMediaOutput::Validate(UFileMediaOutput *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  char cVar3;
  ForAnyElementType FVar4;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar2 = UMediaOutput::Validate((UMediaOutput *)this,param_1);
  if (bVar2) {
    if ((this->FilePath).Path.Data.ArrayNum < 2) {
      local_res18[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res18[0].Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(local_res18,&local_18);
      ::FString::PrintfImpl(&local_48,L"Can\'t validate MediaOutput \'%s\'. The file path is null.")
      ;
      FVar4.Data = local_48.Data.AllocatorInstance.Data;
      if (param_1 != &local_48) {
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
        (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar4.Data = (FScriptContainerElement *)0x0;
      }
    }
    else {
      cVar3 = (**(code **)(*(longlong *)this + 0x2c0))(this);
      if (cVar3 == '\x12') {
        local_res18[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res18[0].Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(local_res18,&local_18);
        ::FString::PrintfImpl
                  (&local_38,
                   L"Can\'t validate MediaOutput \'%s\'. File media output doesn\'t support 10bits format."
                  );
        FVar4.Data = local_38.Data.AllocatorInstance.Data;
        if (param_1 != &local_38) {
          pFVar1 = (param_1->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
          (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
          (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
          local_38.Data.ArrayNum = 0;
          local_38.Data.ArrayMax = 0;
          local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar4.Data = (FScriptContainerElement *)0x0;
        }
      }
      else {
        cVar3 = (**(code **)(*(longlong *)this + 0x2c0))(this);
        if ((cVar3 == '\x02') || ((this->WriteOptions).Format == EXR)) {
          return true;
        }
        local_res18[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
        local_res18[0].Number = *(uint *)&this->field_0x1c;
        ::FName::ToString(local_res18,&local_18);
        ::FString::PrintfImpl
                  (&local_28,
                   L"Can\'t validate MediaOutput \'%s\'. Only EXR export is currently supported for PF_FloatRGBA and PF_A32B32G32R32F formats."
                  );
        FVar4.Data = local_28.Data.AllocatorInstance.Data;
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
          FVar4.Data = (FScriptContainerElement *)0x0;
        }
      }
    }
    if (FVar4.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar4.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

