// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b516b40

UClass * __cdecl UDS_M_StatusBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_StatusBase.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_StatusBase",
               &Z_Registration_Info_UClass_UDS_M_StatusBase.InnerSingleton,
               StaticRegisterNativesUDS_M_StatusBase,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_StatusBase>,
               InternalVTableHelperCtorCaller<UDS_M_StatusBase>,aFStackX_8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_StatusBase.InnerSingleton;
}

// UDS_M_StatusBase @ 14b522370

UDS_M_StatusBase * __thiscall
UDS_M_StatusBase::UDS_M_StatusBase(UDS_M_StatusBase *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_StatusBase__6B_;
  return this;
}

// UDS_M_StatusBase @ 14b5223a0

UDS_M_StatusBase * __thiscall
UDS_M_StatusBase::UDS_M_StatusBase(UDS_M_StatusBase *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_StatusBase__6B_;
  return this;
}

// ~UDS_M_StatusBase @ 14b523600

void __thiscall UDS_M_StatusBase::~UDS_M_StatusBase(UDS_M_StatusBase *this)

{
  *(undefined ***)this = &___7UDS_M_StatusBase__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526520

UClass * __cdecl UDS_M_StatusBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_StatusBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_StatusBase",
               &Z_Registration_Info_UClass_UDS_M_StatusBase.InnerSingleton,
               StaticRegisterNativesUDS_M_StatusBase,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_StatusBase>,
               InternalVTableHelperCtorCaller<UDS_M_StatusBase>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_StatusBase.InnerSingleton;
}

// StaticRegisterNativesUDS_M_StatusBase @ 14b527580

void __cdecl UDS_M_StatusBase::StaticRegisterNativesUDS_M_StatusBase(void)

{
  return;
}

// GetSocketName @ 14bd61c00

FDS_Text * __thiscall
UDS_M_StatusBase::GetSocketName(UDS_M_StatusBase *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStatusName01 @ 14bd62ec0

FDS_Text * __thiscall
UDS_M_StatusBase::GetStatusName01(UDS_M_StatusBase *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStatusName02 @ 14bd62f00

FDS_Text * __thiscall
UDS_M_StatusBase::GetStatusName02(UDS_M_StatusBase *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetStatusValue01 @ 14bd62f40

FText * __thiscall
UDS_M_StatusBase::GetStatusValue01(UDS_M_StatusBase *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetStatusValue02 @ 14bd62f60

FText * __thiscall
UDS_M_StatusBase::GetStatusValue02(UDS_M_StatusBase *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetStatusValue03 @ 14bd62f80

FText * __thiscall
UDS_M_StatusBase::GetStatusValue03(UDS_M_StatusBase *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetStyleIDStatusName02 @ 14bd63450

int __thiscall UDS_M_StatusBase::GetStyleIDStatusName02(UDS_M_StatusBase *this)

{
  return 0;
}

// GetStyleIDStatusValue02 @ 14bd63460

int __thiscall UDS_M_StatusBase::GetStyleIDStatusValue02(UDS_M_StatusBase *this)

{
  return 0;
}

