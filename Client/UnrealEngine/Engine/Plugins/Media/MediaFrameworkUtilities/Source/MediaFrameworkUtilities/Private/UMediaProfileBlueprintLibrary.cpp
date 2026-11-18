// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 14

// StaticClass @ 14d7ca4c0

UClass * __cdecl UMediaProfileBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileBlueprintLibrary",
               &Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMediaProfileBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaProfileBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMediaProfileBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton;
}

// UMediaProfileBlueprintLibrary @ 14d7d0be0

UMediaProfileBlueprintLibrary * __thiscall
UMediaProfileBlueprintLibrary::UMediaProfileBlueprintLibrary
          (UMediaProfileBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMediaProfileBlueprintLibrary__6B_;
  return this;
}

// UMediaProfileBlueprintLibrary @ 14d7d0c10

UMediaProfileBlueprintLibrary * __thiscall
UMediaProfileBlueprintLibrary::UMediaProfileBlueprintLibrary
          (UMediaProfileBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMediaProfileBlueprintLibrary__6B_;
  return this;
}

// ~UMediaProfileBlueprintLibrary @ 14d7d1bf0

void __thiscall
UMediaProfileBlueprintLibrary::~UMediaProfileBlueprintLibrary(UMediaProfileBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UMediaProfileBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetAllMediaOutputProxy @ 14d7d8160

TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> * __cdecl
UMediaProfileBlueprintLibrary::GetAllMediaOutputProxy
          (TArray<UProxyMediaOutput_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  IMediaProfileManager *pIVar1;
  
  pIVar1 = IMediaProfileManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAllMediaSourceProxy @ 14d7d8240

TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> * __cdecl
UMediaProfileBlueprintLibrary::GetAllMediaSourceProxy
          (TArray<UProxyMediaSource_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  IMediaProfileManager *pIVar1;
  
  pIVar1 = IMediaProfileManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMediaProfile @ 14d7d8ff0

UMediaProfile * __cdecl UMediaProfileBlueprintLibrary::GetMediaProfile(void)

{
  IMediaProfileManager *pIVar1;
  UMediaProfile *pUVar2;
  
  pIVar1 = IMediaProfileManager::Get();
                    /* WARNING: Could not recover jumptable at 0x00014d7d9007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar2 = (UMediaProfile *)
           (**(code **)((longlong)*pIVar1 + 8))(pIVar1,*(code **)((longlong)*pIVar1 + 8));
  return pUVar2;
}

// GetPrivateStaticClass @ 14d7daad0

UClass * __cdecl UMediaProfileBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"MediaProfileBlueprintLibrary",
               &Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMediaProfileBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMediaProfileBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMediaProfileBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaProfileBlueprintLibrary.InnerSingleton;
}

// SetMediaProfile @ 14d7e1780

void __cdecl UMediaProfileBlueprintLibrary::SetMediaProfile(UMediaProfile *param_1)

{
  IMediaProfileManager *pIVar1;
  
  pIVar1 = IMediaProfileManager::Get();
                    /* WARNING: Could not recover jumptable at 0x00014d7e17a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x10));
  return;
}

// StaticRegisterNativesUMediaProfileBlueprintLibrary @ 14d7e1ec0

void __cdecl UMediaProfileBlueprintLibrary::StaticRegisterNativesUMediaProfileBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMediaProfileBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAllMediaOutputProxy @ 14d7e27a0

void __cdecl
UMediaProfileBlueprintLibrary::execGetAllMediaOutputProxy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IMediaProfileManager *pIVar1;
  void *local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IMediaProfileManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_18;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = (void *)0x0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetAllMediaSourceProxy @ 14d7e2840

void __cdecl
UMediaProfileBlueprintLibrary::execGetAllMediaSourceProxy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IMediaProfileManager *pIVar1;
  void *local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IMediaProfileManager::Get();
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,&local_18);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(void **)param_3 = local_18;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
    local_18 = (void *)0x0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetMediaProfile @ 14d7e29a0

void __cdecl
UMediaProfileBlueprintLibrary::execGetMediaProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  IMediaProfileManager *pIVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = IMediaProfileManager::Get();
  uVar2 = (**(code **)((longlong)*pIVar1 + 8))(pIVar1);
  *(undefined8 *)param_3 = uVar2;
  return;
}

// execSetMediaProfile @ 14d7e3050

void __cdecl
UMediaProfileBlueprintLibrary::execSetMediaProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  IMediaProfileManager *pIVar3;
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
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IMediaProfileManager::Get();
  (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,uVar2);
  return;
}

