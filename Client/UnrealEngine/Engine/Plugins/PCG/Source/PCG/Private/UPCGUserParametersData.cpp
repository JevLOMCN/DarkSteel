// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// StaticClass @ 14972ae00

UClass * __cdecl UPCGUserParametersData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUserParametersData",
               &Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton,
               StaticRegisterNativesUPCGUserParametersData,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGUserParametersData>,
               InternalVTableHelperCtorCaller<UPCGUserParametersData>,local_res8,
               UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton;
}

// UPCGUserParametersData @ 14973ce30

UPCGUserParametersData * __thiscall
UPCGUserParametersData::UPCGUserParametersData(UPCGUserParametersData *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGUserParametersData__6B_;
  FInstancedStruct::FInstancedStruct(&this->UserParameters);
  this_00 = &(this->UpstreamData).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->UpstreamData).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// UPCGUserParametersData @ 14973ceb0

UPCGUserParametersData * __thiscall
UPCGUserParametersData::UPCGUserParametersData
          (UPCGUserParametersData *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  undefined8 local_res8;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGUserParametersData__6B_;
  FInstancedStruct::FInstancedStruct(&this->UserParameters);
  this_00 = &(this->UpstreamData).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->UpstreamData).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->UpstreamData).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UPCGUserParametersData @ 14973eb80

void __thiscall UPCGUserParametersData::~UPCGUserParametersData(UPCGUserParametersData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGUserParametersData__6B_;
  pvVar1 = *(void **)&(this->UpstreamData).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FInstancedStruct::Reset(&this->UserParameters);
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// AddToCrc @ 149746080

void __thiscall
UPCGUserParametersData::AddToCrc(UPCGUserParametersData *this,FArchiveCrc32 *param_1,bool param_2)

{
  longlong *plVar1;
  ulong64 auStackX_8 [4];
  
  auStackX_8[0] = this->_padding_;
  plVar1 = (longlong *)param_1->_padding_;
  if (*plVar1 + 8U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 8;
    return;
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,auStackX_8,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,auStackX_8);
  return;
}

// GetDataType @ 149754ab0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGUserParametersData::GetDataType(UPCGUserParametersData *this)

{
  return Other;
}

// GetPrivateStaticClass @ 14975d000

UClass * __cdecl UPCGUserParametersData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUserParametersData",
               &Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton,
               StaticRegisterNativesUPCGUserParametersData,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGUserParametersData>,
               InternalVTableHelperCtorCaller<UPCGUserParametersData>,local_res8,
               UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUserParametersData.InnerSingleton;
}

// StaticRegisterNativesUPCGUserParametersData @ 149778910

void __cdecl UPCGUserParametersData::StaticRegisterNativesUPCGUserParametersData(void)

{
  return;
}

