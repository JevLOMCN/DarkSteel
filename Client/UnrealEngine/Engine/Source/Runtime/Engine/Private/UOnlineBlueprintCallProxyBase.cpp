// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148073e80

UClass * __cdecl UOnlineBlueprintCallProxyBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineBlueprintCallProxyBase",
               &Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton,
               StaticRegisterNativesUOnlineBlueprintCallProxyBase,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnlineBlueprintCallProxyBase>,
               InternalVTableHelperCtorCaller<UOnlineBlueprintCallProxyBase>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton;
}

// UOnlineBlueprintCallProxyBase @ 14808c240

UOnlineBlueprintCallProxyBase * __thiscall
UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
          (UOnlineBlueprintCallProxyBase *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  *(undefined ***)this = &___7UOnlineBlueprintCallProxyBase__6B_;
  return this;
}

// UOnlineBlueprintCallProxyBase @ 14808c270

UOnlineBlueprintCallProxyBase * __thiscall
UOnlineBlueprintCallProxyBase::UOnlineBlueprintCallProxyBase
          (UOnlineBlueprintCallProxyBase *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  *(undefined ***)this = &___7UOnlineBlueprintCallProxyBase__6B_;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_StrongRefOnFrame);
  return this;
}

// ~UOnlineBlueprintCallProxyBase @ 14808f600

void __thiscall
UOnlineBlueprintCallProxyBase::~UOnlineBlueprintCallProxyBase(UOnlineBlueprintCallProxyBase *this)

{
  *(undefined ***)this = &___7UOnlineBlueprintCallProxyBase__6B_;
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// GetPrivateStaticClass @ 1480a9ed0

UClass * __cdecl UOnlineBlueprintCallProxyBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"OnlineBlueprintCallProxyBase",
               &Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton,
               StaticRegisterNativesUOnlineBlueprintCallProxyBase,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOnlineBlueprintCallProxyBase>,
               InternalVTableHelperCtorCaller<UOnlineBlueprintCallProxyBase>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnlineBlueprintCallProxyBase.InnerSingleton;
}

// StaticRegisterNativesUOnlineBlueprintCallProxyBase @ 1480d5790

void __cdecl UOnlineBlueprintCallProxyBase::StaticRegisterNativesUOnlineBlueprintCallProxyBase(void)

{
  return;
}

