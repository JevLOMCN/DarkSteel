// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 148a29c60

UClass * __cdecl UWorldPartitionBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionBlueprintLibrary",
               &Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUWorldPartitionBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWorldPartitionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton;
}

// UWorldPartitionBlueprintLibrary @ 148a43060

UWorldPartitionBlueprintLibrary * __thiscall
UWorldPartitionBlueprintLibrary::UWorldPartitionBlueprintLibrary
          (UWorldPartitionBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionBlueprintLibrary__6B_;
  return this;
}

// UWorldPartitionBlueprintLibrary @ 148a43090

UWorldPartitionBlueprintLibrary * __thiscall
UWorldPartitionBlueprintLibrary::UWorldPartitionBlueprintLibrary
          (UWorldPartitionBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWorldPartitionBlueprintLibrary__6B_;
  return this;
}

// ~UWorldPartitionBlueprintLibrary @ 148a44a90

void __thiscall
UWorldPartitionBlueprintLibrary::~UWorldPartitionBlueprintLibrary
          (UWorldPartitionBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UWorldPartitionBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetActorDescs @ 148a53c30

bool __cdecl
UWorldPartitionBlueprintLibrary::GetActorDescs
          (TArray<FActorDesc,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetActorDescsForActors @ 148a53c40

bool __cdecl
UWorldPartitionBlueprintLibrary::GetActorDescsForActors
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FActorDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetDataLayerManager @ 148a56950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDataLayerManager * __cdecl UWorldPartitionBlueprintLibrary::GetDataLayerManager(UObject *param_1)

{
  UWorldPartition *this;
  UDataLayerManager *pUVar1;
  
  if ((param_1 != (UObject *)0x0) && ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0)) {
    if ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) == 0) {
      this = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject(param_1);
    }
    else {
      this = (UWorldPartition *)0x0;
    }
    if (this != (UWorldPartition *)0x0) {
      pUVar1 = UWorldPartition::GetDataLayerManager(this);
      return pUVar1;
    }
  }
  return (UDataLayerManager *)0x0;
}

// GetEditorWorldBounds @ 148a57a10

TBox<double> * __cdecl
UWorldPartitionBlueprintLibrary::GetEditorWorldBounds(TBox<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetIntersectingActorDescs @ 148a58ad0

bool __cdecl
UWorldPartitionBlueprintLibrary::GetIntersectingActorDescs
          (TBox<double> *param_1,TArray<FActorDesc,TSizedDefaultAllocator<32>_> *param_2)

{
  return false;
}

// GetPrivateStaticClass @ 148a5ac00

UClass * __cdecl UWorldPartitionBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WorldPartitionBlueprintLibrary",
               &Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUWorldPartitionBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWorldPartitionBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWorldPartitionBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWorldPartitionBlueprintLibrary.InnerSingleton;
}

// GetRuntimeWorldBounds @ 148a5b160

TBox<double> * __cdecl
UWorldPartitionBlueprintLibrary::GetRuntimeWorldBounds(TBox<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// LoadActors @ 148a5f040

void __cdecl
UWorldPartitionBlueprintLibrary::LoadActors(TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// PinActors @ 148a60a50

void __cdecl
UWorldPartitionBlueprintLibrary::PinActors(TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// StaticRegisterNativesUWorldPartitionBlueprintLibrary @ 148a6a520

void __cdecl
UWorldPartitionBlueprintLibrary::StaticRegisterNativesUWorldPartitionBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UWorldPartitionBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnloadActors @ 148a6b0b0

void __cdecl
UWorldPartitionBlueprintLibrary::UnloadActors(TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// UnpinActors @ 148a6b0c0

void __cdecl
UWorldPartitionBlueprintLibrary::UnpinActors(TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// execGetActorDescs @ 148a6e6e0

void __cdecl
UWorldPartitionBlueprintLibrary::execGetActorDescs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FActorDesc *local_18;
  undefined8 local_10;
  
  local_18 = (FActorDesc *)0x0;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  DestructItems<FActorDesc,int>(local_18,(int)local_10);
  if (local_18 != (FActorDesc *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetActorDescsForActors @ 148a6e790

void __cdecl
UWorldPartitionBlueprintLibrary::execGetActorDescsForActors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FActorDesc *local_28;
  undefined8 local_20;
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
  local_28 = (FActorDesc *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  DestructItems<FActorDesc,int>(local_28,(int)local_20);
  if (local_28 != (FActorDesc *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetDataLayerManager @ 148a6f620

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
UWorldPartitionBlueprintLibrary::execGetDataLayerManager
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWorldPartition *this;
  UDataLayerManager *pUVar2;
  UObject *local_res10 [3];
  
  local_res10[0] = (UObject *)0x0;
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
  if ((local_res10[0] != (UObject *)0x0) && ((*(uint *)&local_res10[0]->field_0x8 >> 0x1e & 1) == 0)
     ) {
    if ((*(uint *)&local_res10[0]->field_0x8 >> 0x1e & 1) == 0) {
      this = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject(local_res10[0]);
    }
    else {
      this = (UWorldPartition *)0x0;
    }
    if (this != (UWorldPartition *)0x0) {
      pUVar2 = UWorldPartition::GetDataLayerManager(this);
      *(UDataLayerManager **)param_3 = pUVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetEditorWorldBounds @ 148a6fb40

void __cdecl
UWorldPartitionBlueprintLibrary::execGetEditorWorldBounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  *(undefined8 *)((longlong)param_3 + 0x20) = 0;
  *(undefined8 *)((longlong)param_3 + 0x28) = 0;
  *(undefined8 *)((longlong)param_3 + 0x30) = 0;
  return;
}

// execGetIntersectingActorDescs @ 148a6fc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UWorldPartitionBlueprintLibrary::execGetIntersectingActorDescs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auStack_78 [32];
  FActorDesc *local_58;
  undefined8 local_50;
  undefined1 local_48 [48];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_58 = (FActorDesc *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  DestructItems<FActorDesc,int>(local_58,(int)local_50);
  if (local_58 != (FActorDesc *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetRuntimeWorldBounds @ 148a6fe00

void __cdecl
UWorldPartitionBlueprintLibrary::execGetRuntimeWorldBounds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  *(undefined8 *)((longlong)param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  *(undefined8 *)((longlong)param_3 + 0x20) = 0;
  *(undefined8 *)((longlong)param_3 + 0x28) = 0;
  *(undefined8 *)((longlong)param_3 + 0x30) = 0;
  return;
}

// execLoadActors @ 148a70250

void __cdecl
UWorldPartitionBlueprintLibrary::execLoadActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execPinActors @ 148a70670

void __cdecl
UWorldPartitionBlueprintLibrary::execPinActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execUnloadActors @ 148a710e0

void __cdecl
UWorldPartitionBlueprintLibrary::execUnloadActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execUnpinActors @ 148a71170

void __cdecl
UWorldPartitionBlueprintLibrary::execUnpinActors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

