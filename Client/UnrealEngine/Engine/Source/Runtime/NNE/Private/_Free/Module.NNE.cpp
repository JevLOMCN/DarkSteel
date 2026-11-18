// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 63

// `dynamic_initializer_for_'LogNNE'' @ 140f50aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNNE__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogNNE,L"LogNNE",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNNE__);
  return;
}

// `dynamic_initializer_for_'NNEModelDataVersion'' @ 140f50ae0

void __cdecl UE::NNE::ModelData::_dynamic_initializer_for__NNEModelDataVersion__(void)

{
  FGuid local_18;
  
  local_18 = GUID;
  FCurrentCustomVersions::Register
            (&local_18,4,L"NNEModelDataVersion",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__NNEModelDataVersion__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h__Script_NNE_2342877307'' @ 140f50b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h__Script_NNE_2342877307__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNE",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNEModelData_h__Script_NNE_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h__Script_NNE_1923668778'' @ 140f50b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h__Script_NNE_1923668778__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNE",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeCPU_h__Script_NNE_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h__Script_NNE_3188815603'' @ 140f50ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h__Script_NNE_3188815603__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNE",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeGPU_h__Script_NNE_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h__Script_NNE_2923965865'' @ 140f50be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h__Script_NNE_2923965865__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNE",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeNPU_h__Script_NNE_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h__Script_NNE_3730796129'' @ 140f50c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h__Script_NNE_3730796129__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNE",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntimeRDG_h__Script_NNE_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h__Script_NNE_3372374998'' @ 140f50c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h__Script_NNE_3372374998__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNE",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNERuntime_h__Script_NNE_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNETypes_h__Script_NNE_2121114278'' @ 140f50ca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNETypes_h__Script_NNE_2121114278__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNE",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NNE_Public_NNETypes_h__Script_NNE_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NNE'' @ 140f50cf0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NNE__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x593768f6;
  local_res8[0].DeclarationsHash = 0x16ccb693;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NNE,L"/Script/NNE",
             &Z_Registration_Info_UPackage__Script_NNE,local_res8);
  return;
}

// Z_Construct_UClass_UNNEModelData @ 1436e3570

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNEModelData(void)

{
  if (Z_Registration_Info_UClass_UNNEModelData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNEModelData.OuterSingleton,
               &Z_Construct_UClass_UNNEModelData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNEModelData.OuterSingleton;
}

// Z_Construct_UPackage__Script_NNE @ 1436e35b0

UPackage * __cdecl Z_Construct_UPackage__Script_NNE(void)

{
  if (Z_Registration_Info_UPackage__Script_NNE.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NNE.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NNE.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntime @ 1436e36b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntime(void)

{
  if (Z_Registration_Info_UClass_UNNERuntime.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntime.OuterSingleton,
               &Z_Construct_UClass_UNNERuntime_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntime.OuterSingleton;
}

// ENNETensorDataType_StaticEnum @ 1436e36f0

UEnum * __cdecl ENNETensorDataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNE();
    Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNE_ENNETensorDataType,(UObject *)pUVar1,
                       L"ENNETensorDataType");
  }
  return Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeCPU @ 1436e37f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeCPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeCPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeCPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeGPU @ 1436e38f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeGPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeGPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeGPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeNPU @ 1436e39f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeNPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeNPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeNPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeNPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeNPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeRDG @ 1436e3af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeRDG(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeRDG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeRDG.OuterSingleton;
}

// operator<<<unsigned_char,TSizedDefaultAllocator<64>_> @ 1436e3df0

FArchive * __cdecl
operator<<<unsigned_char,TSizedDefaultAllocator<64>_>
          (FArchive *param_1,TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_2)

{
  long64 *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ulong64 uStackX_8;
  
  plVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,param_2->ArrayNum,*plVar1);
  if ((param_1->field_0x28 & 1) == 0) {
    uStackX_8 = param_2->ArrayNum;
  }
  else {
    uStackX_8 = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStackX_8,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&uStackX_8);
    }
  }
  else {
    uStackX_8 = *(ulong64 *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  if (uStackX_8 == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *plVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,plVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (longlong)uStackX_8)) {
      if ((-1 < (char)param_1->field_0x2b) || ((longlong)uStackX_8 < 0x1000001)) {
        param_2->ArrayNum = uStackX_8;
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,uStackX_8,*plVar1,&param_2->AllocatorInstance,uStackX_8,plVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// InternalConstructor<UNNEModelData> @ 1436e6040

void __cdecl InternalConstructor<UNNEModelData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNNEModelData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined4 *)&this[3].field_0x14 = 0x80;
    *(undefined4 *)&this[3].field_0x18 = 0xffffffff;
    *(undefined4 *)&this[3].field_0x1c = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined4 *)&this[5].field_0x20 = 0;
    *(undefined4 *)&this[5].field_0x24 = 0x80;
    *(undefined4 *)(this + 6) = 0xffffffff;
    *(undefined4 *)&this[6].field_0x4 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined4 *)&this[6].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UNNERuntime> @ 1436e6120

void __cdecl InternalConstructor<UNNERuntime>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNNERuntime__6B_;
  }
  return;
}

// InternalConstructor<UNNERuntimeCPU> @ 1436e6150

void __cdecl InternalConstructor<UNNERuntimeCPU>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNNERuntimeCPU__6B_;
  }
  return;
}

// InternalConstructor<UNNERuntimeGPU> @ 1436e6180

void __cdecl InternalConstructor<UNNERuntimeGPU>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNNERuntimeGPU__6B_;
  }
  return;
}

// InternalConstructor<UNNERuntimeNPU> @ 1436e61b0

void __cdecl InternalConstructor<UNNERuntimeNPU>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNNERuntimeNPU__6B_;
  }
  return;
}

// InternalConstructor<UNNERuntimeRDG> @ 1436e61e0

void __cdecl InternalConstructor<UNNERuntimeRDG>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNNERuntimeRDG__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNNEModelData> @ 1436e6210

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNEModelData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNEModelData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNNEModelData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)&pUVar1[5].field_0x24 = 0x80;
    *(undefined4 *)(pUVar1 + 6) = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntime> @ 1436e6370

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntime>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntime::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNNERuntime__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeCPU> @ 1436e6420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeCPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeCPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNNERuntimeCPU__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeGPU> @ 1436e64d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeGPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeGPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNNERuntimeGPU__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeNPU> @ 1436e6580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeNPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeNPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNNERuntimeNPU__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeRDG> @ 1436e6630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeRDG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeRDG::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNNERuntimeRDG__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// MakeShared<UE::NNE::FSharedModelData,1,FSharedBuffer,unsigned_int_&> @ 1436e66e0

TSharedRef<UE::NNE::FSharedModelData,1> * __cdecl
MakeShared<UE::NNE::FSharedModelData,1,FSharedBuffer,unsigned_int_&>
          (TSharedRef<UE::NNE::FSharedModelData,1> *__return_storage_ptr__,FSharedBuffer *param_1,
          uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::NNE::FSharedModelData,1> *pTVar5;
  FBufferOwner *local_res8;
  
  pTVar4 = operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSharedModelData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSharedModelData_NNE_UE___00_SharedPointerInternals__6B_
    ;
    local_res8 = (param_1->Owner).Owner;
    uVar1 = *param_2;
    (param_1->Owner).Owner = (FBufferOwner *)0x0;
    UE::NNE::FSharedModelData::FSharedModelData
              ((FSharedModelData *)(pTVar4 + 1),(FSharedBuffer)&local_res8,uVar1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FSharedModelData *)(pTVar4 + 1);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<UE::NNE::FSharedModelData,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::NNE::FSharedModelData,1,FSharedBuffer,int> @ 1436e67b0

TSharedRef<UE::NNE::FSharedModelData,1> * __cdecl
MakeShared<UE::NNE::FSharedModelData,1,FSharedBuffer,int>
          (TSharedRef<UE::NNE::FSharedModelData,1> *__return_storage_ptr__,FSharedBuffer *param_1,
          int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::NNE::FSharedModelData,1> *pTVar5;
  FBufferOwner *local_res8;
  
  pTVar4 = operator_new(0x20);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSharedModelData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSharedModelData_NNE_UE___00_SharedPointerInternals__6B_
    ;
    local_res8 = (param_1->Owner).Owner;
    uVar1 = *param_2;
    (param_1->Owner).Owner = (FBufferOwner *)0x0;
    UE::NNE::FSharedModelData::FSharedModelData
              ((FSharedModelData *)(pTVar4 + 1),(FSharedBuffer)&local_res8,uVar1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    __return_storage_ptr__->Object = (FSharedModelData *)(pTVar4 + 1);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<UE::NNE::FSharedModelData,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeSharedBufferFromArray<unsigned_char,TSizedDefaultAllocator<32>_> @ 1436e6880

FSharedBuffer __cdecl
MakeSharedBufferFromArray<unsigned_char,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FBufferOwner *pFVar1;
  longlong *in_RDX;
  FBufferOwner *pFVar2;
  
  pFVar1 = operator_new(0x30);
  pFVar2 = (FBufferOwner *)0x0;
  if (pFVar1 != (FBufferOwner *)0x0) {
    pFVar1->Data = (void *)0x0;
    pFVar1->Size = 0;
    pFVar1->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar1[1]._padding_ = 0;
    pFVar1->_padding_ =
         (longlong)
         &___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0CA____Private_SharedBuffer_UE__6B_;
    pFVar1[1]._padding_ = *in_RDX;
    *in_RDX = 0;
    *(int *)&pFVar1[1].Data = (int)in_RDX[1];
    *(undefined4 *)((longlong)&pFVar1[1].Data + 4) = *(undefined4 *)((longlong)in_RDX + 0xc);
    in_RDX[1] = 0;
    pFVar1->Data = (void *)pFVar1[1]._padding_;
    pFVar1->Size = (longlong)*(int *)&pFVar1[1].Data;
    LOCK();
    pFVar1->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar1->ReferenceCountsAndFlags | 0x4000000000000000)
    ;
    UNLOCK();
    LOCK();
    pFVar1->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)((ulonglong)pFVar1->ReferenceCountsAndFlags | 0x1000000000000000)
    ;
    UNLOCK();
    pFVar2 = pFVar1;
  }
  FSharedBuffer::FSharedBuffer((FSharedBuffer *)param_1,pFVar2);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,`UE::NNE::FRegistry::GetAllNames'::__l2::<lambda_1>_> @ 1436e6d80

int __cdecl
Algo::
RemoveIf<TArray<FString,TSizedDefaultAllocator<32>_>,_UE::NNE::FRegistry::GetAllNames_::__l2::<lambda_1>_>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *local_res8;
  FScriptContainerElement *local_res18 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar1 + (longlong)param_1->ArrayNum * 0x10;
  pFVar8 = pFVar1;
LAB_1436e6da7:
  do {
    if (pFVar8 == pFVar6) {
LAB_1436e6ebb:
      return (int)((longlong)pFVar8 - (longlong)pFVar1 >> 4);
    }
    pTVar5 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                     *)param_2.__this,(FString *)pFVar8);
    if (pTVar5 == (TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x27b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    if (*(longlong *)&pTVar5->field_0x18 == 0) {
LAB_1436e6dfc:
      local_res8 = pFVar8;
      bVar3 = ``UE::NNE::FRegistry::GetAllNames'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
              operator()(&local_res8);
      if (bVar3) goto LAB_1436e6e0f;
      do {
        pFVar7 = pFVar6;
        pFVar6 = pFVar7 + -0x10;
        if (pFVar8 == pFVar6) goto LAB_1436e6ebb;
        pTVar5 = TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>,TDefaultMapHashableKeyFuncs<FString,TWeakInterfacePtr<INNERuntime>,0>,FDefaultSetAllocator>
                         *)param_2.__this,(FString *)pFVar6);
        if (pTVar5 == (TTuple<FString,TWeakInterfacePtr<INNERuntime>_> *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
        }
        if (*(longlong *)&pTVar5->field_0x18 != 0) {
          bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar5->field_0x10);
          if (bVar3) break;
        }
        local_res18[0] = pFVar6;
        bVar3 = ``UE::NNE::FRegistry::GetAllNames'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>
                ::operator()(local_res18);
      } while (!bVar3);
      if (*(void **)&pFVar8->field_0x0 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar8->field_0x0);
      }
      *(undefined8 *)&pFVar8->field_0x0 = *(undefined8 *)&pFVar6->field_0x0;
      *(undefined8 *)&pFVar6->field_0x0 = 0;
      *(undefined4 *)(pFVar8 + 8) = *(undefined4 *)(pFVar7 + -8);
      *(undefined4 *)(pFVar8 + 0xc) = *(undefined4 *)(pFVar7 + -4);
      pFVar8 = pFVar8 + 0x10;
      *(undefined8 *)(pFVar7 + -8) = 0;
      goto LAB_1436e6da7;
    }
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&pTVar5->field_0x10);
    if (!bVar3) goto LAB_1436e6dfc;
LAB_1436e6e0f:
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// StaticEnum<enum_ENNETensorDataType> @ 1436e73c0

UEnum * __cdecl StaticEnum<enum_ENNETensorDataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNE();
    Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNE_ENNETensorDataType,(UObject *)pUVar1,
                       L"ENNETensorDataType");
  }
  return Z_Registration_Info_UEnum_ENNETensorDataType.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1436e7dc0

void * __thiscall
UE::SharedBuffer::Private::TBufferOwnerTArray<unsigned_char,TSizedDefaultAllocator<32>_>::
_scalar_deleting_destructor_
          (TBufferOwnerTArray<unsigned_char,TSizedDefaultAllocator<32>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBufferOwner__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436e7e10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNE::FSharedModelData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNE::FSharedModelData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436e7e50

void * __thiscall UNNEModelData::_scalar_deleting_destructor_(UNNEModelData *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UNNEModelData__6B_;
  *(undefined4 *)&(this->ModelData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModelData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<UE::NNE::FSharedModelData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModelData);
  *(undefined4 *)&(this->AdditionalFileData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AdditionalFileData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalFileData);
  pFVar2 = (this->FileData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FileType).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->TargetRuntimes).AllocatorInstance.Data,
             (this->TargetRuntimes).ArrayNum);
  pFVar2 = (this->TargetRuntimes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436e7f50

void * __thiscall UNNERuntime::_scalar_deleting_destructor_(UNNERuntime *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436e7fb0

void * __thiscall UNNERuntimeCPU::_scalar_deleting_destructor_(UNNERuntimeCPU *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436e8010

void * __thiscall UNNERuntimeGPU::_scalar_deleting_destructor_(UNNERuntimeGPU *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436e8070

void * __thiscall UNNERuntimeNPU::_scalar_deleting_destructor_(UNNERuntimeNPU *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1436e80d0

void * __thiscall UNNERuntimeRDG::_scalar_deleting_destructor_(UNNERuntimeRDG *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNNEModelData @ 1436e8c50

void __cdecl EmptyLinkFunctionForGeneratedCodeNNEModelData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntime @ 1436e8c60

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntime(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntimeCPU @ 1436e8c70

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntimeCPU(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntimeGPU @ 1436e8c80

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntimeGPU(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntimeNPU @ 1436e8c90

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntimeNPU(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntimeRDG @ 1436e8ca0

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntimeRDG(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNETypes @ 1436e8cb0

void __cdecl EmptyLinkFunctionForGeneratedCodeNNETypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNE_init @ 1436e8cc0

void __cdecl EmptyLinkFunctionForGeneratedCodeNNE_init(void)

{
  return;
}

// Z_Construct_UClass_UNNEModelData_NoRegister @ 1436ee220

UClass * __cdecl Z_Construct_UClass_UNNEModelData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEModelData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNEModelData",
               &Z_Registration_Info_UClass_UNNEModelData.InnerSingleton,
               UNNEModelData::StaticRegisterNativesUNNEModelData,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNNEModelData>,
               InternalVTableHelperCtorCaller<UNNEModelData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEModelData.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeCPU_NoRegister @ 1436ee2d0

UClass * __cdecl Z_Construct_UClass_UNNERuntimeCPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeCPU",
               &Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton,
               UNNERuntimeCPU::StaticRegisterNativesUNNERuntimeCPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeCPU>,InternalVTableHelperCtorCaller<UNNERuntimeCPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeCPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeGPU_NoRegister @ 1436ee390

UClass * __cdecl Z_Construct_UClass_UNNERuntimeGPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeGPU",
               &Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton,
               UNNERuntimeGPU::StaticRegisterNativesUNNERuntimeGPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeGPU>,InternalVTableHelperCtorCaller<UNNERuntimeGPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeGPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeNPU_NoRegister @ 1436ee450

UClass * __cdecl Z_Construct_UClass_UNNERuntimeNPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeNPU",
               &Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton,
               UNNERuntimeNPU::StaticRegisterNativesUNNERuntimeNPU,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeNPU>,InternalVTableHelperCtorCaller<UNNERuntimeNPU>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeNPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeRDG_NoRegister @ 1436ee510

UClass * __cdecl Z_Construct_UClass_UNNERuntimeRDG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntimeRDG",
               &Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton,
               UNNERuntimeRDG::StaticRegisterNativesUNNERuntimeRDG,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeRDG>,InternalVTableHelperCtorCaller<UNNERuntimeRDG>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeRDG.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntime_NoRegister @ 1436ee5d0

UClass * __cdecl Z_Construct_UClass_UNNERuntime_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNE",L"NNERuntime",&Z_Registration_Info_UClass_UNNERuntime.InnerSingleton,
               UNNERuntime::StaticRegisterNativesUNNERuntime,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntime>,InternalVTableHelperCtorCaller<UNNERuntime>,
               local_res8,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntime.InnerSingleton;
}

// Z_Construct_UEnum_NNE_ENNETensorDataType @ 1436ee690

UEnum * __cdecl Z_Construct_UEnum_NNE_ENNETensorDataType(void)

{
  if (Z_Registration_Info_UEnum_ENNETensorDataType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENNETensorDataType.InnerSingleton,
               &Z_Construct_UEnum_NNE_ENNETensorDataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENNETensorDataType.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 150361f10

void __cdecl
`UE::NNE::FRegistry::GetInstance'::__l2::_dynamic_atexit_destructor_for__Instance__(void)

{
  `public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'::
  __l2::Instance.Runtimes._72_4_ = 0;
  if (`public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
      ::__l2::Instance.Runtimes._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
                          ::__l2::Instance.Runtimes._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TWeakInterfacePtr<INNERuntime>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_UE::NNE::FRegistry&___ptr64___cdecl_UE::NNE::FRegistry::GetInstance(void)'
                 ::__l2::Instance);
  return;
}

// `dynamic_atexit_destructor_for_'LogNNE'' @ 150361f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNNE__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNNE);
  return;
}

// `dynamic_atexit_destructor_for_'NNEModelDataVersion'' @ 150361f70

void __cdecl UE::NNE::ModelData::_dynamic_atexit_destructor_for__NNEModelDataVersion__(void)

{
  FCurrentCustomVersions::Unregister(&NNEModelDataVersion.Key);
  return;
}

// operator() @ 1504a1670

bool __thiscall
``UE::NNE::FRegistry::GetAllNames'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3353869485328040009>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<3353869485328040009>,
                         &`public:___cdecl_`public:___cdecl_`public:_class_TArray<FString,TSizedDefaultAllocator<32>_>___cdecl_UE::NNE::FRegistry::GetAllNames(void)const___ptr64'::`2'::<lambda_1>::operator()(FString_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                          ::__l2::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

