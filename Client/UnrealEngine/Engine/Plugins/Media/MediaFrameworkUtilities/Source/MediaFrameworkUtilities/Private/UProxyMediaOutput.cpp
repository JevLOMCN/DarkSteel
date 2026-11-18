// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 16

// StaticClass @ 14d7cb320

UClass * __cdecl UProxyMediaOutput::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"ProxyMediaOutput",
               &Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton,
               StaticRegisterNativesUProxyMediaOutput,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProxyMediaOutput>,
               InternalVTableHelperCtorCaller<UProxyMediaOutput>,local_res8,
               UMediaOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton;
}

// UProxyMediaOutput @ 14d7d1600

UProxyMediaOutput * __thiscall UProxyMediaOutput::UProxyMediaOutput(UProxyMediaOutput *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMediaOutput::UMediaOutput((UMediaOutput *)this,pFVar1);
  this->_padding_ = (longlong)&___7UProxyMediaOutput__6B_;
  (this->DynamicProxy).field0_0x0.DebugPtr = (UMediaOutput *)0x0;
  (this->Proxy).field0_0x0.DebugPtr = (UMediaOutput *)0x0;
  this->bLeafMediaOutput = false;
  this->bValidateGuard = false;
  this->bRequestedSizeGuard = false;
  this->bRequestedPixelFormatGuard = false;
  this->bCreateMediaCaptureImplGuard = false;
  return this;
}

// UProxyMediaOutput @ 14d7d1650

UProxyMediaOutput * __thiscall
UProxyMediaOutput::UProxyMediaOutput(UProxyMediaOutput *this,FVTableHelper *param_1)

{
  UMediaOutput::UMediaOutput((UMediaOutput *)this,param_1);
  this->_padding_ = (longlong)&___7UProxyMediaOutput__6B_;
  (this->DynamicProxy).field0_0x0.DebugPtr = (UMediaOutput *)0x0;
  (this->Proxy).field0_0x0.DebugPtr = (UMediaOutput *)0x0;
  return this;
}

// ~UProxyMediaOutput @ 14d7d1e00

void __thiscall UProxyMediaOutput::~UProxyMediaOutput(UProxyMediaOutput *this)

{
  this->_padding_ = (longlong)&___7UProxyMediaOutput__6B_;
  UMediaOutput::~UMediaOutput((UMediaOutput *)this);
  return;
}

// CreateMediaCaptureImpl @ 14d7d6380

/* WARNING: Enum "Type": Some values do not have unique names */

UMediaCapture * __thiscall UProxyMediaOutput::CreateMediaCaptureImpl(UProxyMediaOutput *this)

{
  UMediaCapture *pUVar1;
  UMediaOutput *this_00;
  FString local_18;
  
  if (this->bCreateMediaCaptureImplGuard != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (UMediaCapture *)0x0;
  }
  this->bCreateMediaCaptureImplGuard = true;
  this_00 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if ((this_00 == (UMediaOutput *)0x0) &&
     (this_00 = (this->Proxy).field0_0x0.DebugPtr, this_00 == (UMediaOutput *)0x0)) {
    this->bCreateMediaCaptureImplGuard = false;
    return (UMediaCapture *)0x0;
  }
  pUVar1 = UMediaOutput::CreateMediaCapture(this_00);
  this->bCreateMediaCaptureImplGuard = false;
  return pUVar1;
}

// GetConversionOperation @ 14d7d82e0

/* WARNING: Enum "Type": Some values do not have unique names */

EMediaCaptureConversionOperation __thiscall
UProxyMediaOutput::GetConversionOperation(UProxyMediaOutput *this,EMediaCaptureSourceType param_1)

{
  EMediaCaptureConversionOperation EVar1;
  UMediaOutput *pUVar2;
  undefined7 in_register_00000011;
  FString local_18;
  
  if (this->bRequestedPixelFormatGuard != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return NONE;
  }
  this->bRequestedPixelFormatGuard = true;
  pUVar2 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if ((pUVar2 == (UMediaOutput *)0x0) &&
     (pUVar2 = (this->Proxy).field0_0x0.DebugPtr, pUVar2 == (UMediaOutput *)0x0)) {
    this->bRequestedPixelFormatGuard = false;
    return NONE;
  }
  EVar1 = (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,CONCAT71(in_register_00000011,param_1));
  this->bRequestedPixelFormatGuard = false;
  return EVar1;
}

// GetLeafMediaOutput @ 14d7d8870

/* WARNING: Enum "Type": Some values do not have unique names */

UMediaOutput * __thiscall UProxyMediaOutput::GetLeafMediaOutput(UProxyMediaOutput *this)

{
  int iVar1;
  UClass *pUVar2;
  UProxyMediaOutput *this_00;
  FString local_18;
  
  if (this->bLeafMediaOutput != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (UMediaOutput *)0x0;
  }
  this->bLeafMediaOutput = true;
  this_00 = (UProxyMediaOutput *)(this->DynamicProxy).field0_0x0.DebugPtr;
  if ((this_00 != (UProxyMediaOutput *)0x0) ||
     (this_00 = (UProxyMediaOutput *)(this->Proxy).field0_0x0.DebugPtr,
     this_00 != (UProxyMediaOutput *)0x0)) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_ && (this_00 != (UProxyMediaOutput *)0x0)))) {
      this_00 = (UProxyMediaOutput *)GetLeafMediaOutput(this_00);
    }
  }
  this->bLeafMediaOutput = false;
  return (UMediaOutput *)this_00;
}

// GetMediaOutput @ 14d7d8fd0

UMediaOutput * __thiscall UProxyMediaOutput::GetMediaOutput(UProxyMediaOutput *this)

{
  UMediaOutput *pUVar1;
  
  pUVar1 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if (pUVar1 == (UMediaOutput *)0x0) {
    pUVar1 = (this->Proxy).field0_0x0.DebugPtr;
  }
  return pUVar1;
}

// GetPrivateStaticClass @ 14d7dada0

UClass * __cdecl UProxyMediaOutput::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"ProxyMediaOutput",
               &Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton,
               StaticRegisterNativesUProxyMediaOutput,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProxyMediaOutput>,
               InternalVTableHelperCtorCaller<UProxyMediaOutput>,local_res8,
               UMediaOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyMediaOutput.InnerSingleton;
}

// GetRequestedPixelFormat @ 14d7daf50

/* WARNING: Enum "Type": Some values do not have unique names */

EPixelFormat __thiscall UProxyMediaOutput::GetRequestedPixelFormat(UProxyMediaOutput *this)

{
  EPixelFormat EVar1;
  UMediaOutput *pUVar2;
  FString local_18;
  
  if (this->bRequestedPixelFormatGuard != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return PF_Unknown;
  }
  this->bRequestedPixelFormatGuard = true;
  pUVar2 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if ((pUVar2 == (UMediaOutput *)0x0) &&
     (pUVar2 = (this->Proxy).field0_0x0.DebugPtr, pUVar2 == (UMediaOutput *)0x0)) {
    this->bRequestedPixelFormatGuard = false;
    return PF_Unknown;
  }
  EVar1 = (**(code **)(pUVar2->_padding_ + 0x2c0))();
  this->bRequestedPixelFormatGuard = false;
  return EVar1;
}

// GetRequestedSize @ 14d7daff0

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __thiscall UProxyMediaOutput::GetRequestedSize(UProxyMediaOutput *this)

{
  TIntPoint<int>_u_0 *pTVar1;
  UMediaOutput *pUVar2;
  TIntPoint<int>_u_0 TVar3;
  TIntPoint<int>_u_0 in_RDX;
  undefined1 local_res8 [8];
  FString local_18;
  
  if (this->bRequestedSizeGuard != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    *(TIntPoint<int>_u_0 *)in_RDX =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    return (TIntPoint<int>)in_RDX;
  }
  this->bRequestedSizeGuard = true;
  pUVar2 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if ((pUVar2 != (UMediaOutput *)0x0) ||
     (pUVar2 = (this->Proxy).field0_0x0.DebugPtr,
     TVar3 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0, pUVar2 != (UMediaOutput *)0x0)) {
    pTVar1 = (TIntPoint<int>_u_0 *)(**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2,local_res8);
    TVar3 = *pTVar1;
  }
  this->bRequestedSizeGuard = false;
  *(TIntPoint<int>_u_0 *)in_RDX = TVar3;
  return (TIntPoint<int>)in_RDX;
}

// IsProxyValid @ 14d7dbf70

bool __thiscall UProxyMediaOutput::IsProxyValid(UProxyMediaOutput *this)

{
  UMediaOutput *pUVar1;
  
  pUVar1 = GetLeafMediaOutput(this);
  return pUVar1 != (UMediaOutput *)0x0;
}

// SetDynamicMediaOutput @ 14d7e14e0

void __thiscall
UProxyMediaOutput::SetDynamicMediaOutput(UProxyMediaOutput *this,UMediaOutput *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaOutput *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->DynamicProxy).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->DynamicProxy).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUProxyMediaOutput @ 14d7e1f30

void __cdecl UProxyMediaOutput::StaticRegisterNativesUProxyMediaOutput(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UProxyMediaOutput_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Validate @ 14d7e2130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UProxyMediaOutput::Validate(UProxyMediaOutput *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  UMediaOutput *pUVar3;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  if (this->bValidateGuard != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ::FString::operator=(param_1,L"Reentrant calls");
    return false;
  }
  this->bValidateGuard = true;
  pUVar3 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if ((pUVar3 == (UMediaOutput *)0x0) &&
     (pUVar3 = (this->Proxy).field0_0x0.DebugPtr, pUVar3 == (UMediaOutput *)0x0)) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    ::FString::PrintfImpl(&local_28,L"There is no proxy for MediaOutput \'%s\'.");
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
    this->bValidateGuard = false;
    return false;
  }
  uVar2 = (**(code **)(pUVar3->_padding_ + 0x2b0))();
  this->bValidateGuard = false;
  return (bool)uVar2;
}

// execIsProxyValid @ 14d7e2a80

void __cdecl UProxyMediaOutput::execIsProxyValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMediaOutput *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetLeafMediaOutput((UProxyMediaOutput *)param_1);
  *(bool *)param_3 = pUVar1 != (UMediaOutput *)0x0;
  return;
}

