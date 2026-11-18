// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b42ff90

UClass * __cdecl UDS_ButtonTextData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonTextData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonTextData",
               &Z_Registration_Info_UClass_UDS_ButtonTextData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonTextData,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ButtonTextData>,
               InternalVTableHelperCtorCaller<UDS_ButtonTextData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonTextData.InnerSingleton;
}

// UDS_ButtonTextData @ 14b434460

UDS_ButtonTextData * __thiscall
UDS_ButtonTextData::UDS_ButtonTextData(UDS_ButtonTextData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ButtonTextData__6B_;
  *(undefined8 *)&this->ButtonTextData = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonTextData).field_0x34 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ButtonTextData).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x48 = 0;
  return this;
}

// ~UDS_ButtonTextData @ 14b434e30

void __thiscall UDS_ButtonTextData::~UDS_ButtonTextData(UDS_ButtonTextData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ButtonTextData__6B_;
  *(undefined4 *)&(this->ButtonTextData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ButtonTextData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ButtonTextData);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4367c0

UClass * __cdecl UDS_ButtonTextData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonTextData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonTextData",
               &Z_Registration_Info_UClass_UDS_ButtonTextData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonTextData,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ButtonTextData>,
               InternalVTableHelperCtorCaller<UDS_ButtonTextData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonTextData.InnerSingleton;
}

// StaticRegisterNativesUDS_ButtonTextData @ 14b437070

void __cdecl UDS_ButtonTextData::StaticRegisterNativesUDS_ButtonTextData(void)

{
  return;
}

// UDS_ButtonTextData @ 14bce5010

UDS_ButtonTextData * __thiscall UDS_ButtonTextData::UDS_ButtonTextData(UDS_ButtonTextData *this)

{
  undefined4 local_res8 [2];
  TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> local_res10;
  undefined4 *local_28;
  FDS_ButtonTextDatas **local_20;
  
  UObject::UObject((UObject *)this);
  local_res8[0] = 1;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  this->_padding_ = (longlong)&___7UDS_ButtonTextData__6B_;
  *(undefined8 *)&this->ButtonTextData = 0;
  local_28 = local_res8;
  *(undefined8 *)&(this->ButtonTextData).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonTextData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ButtonTextData).field_0x34 = 0;
  local_20 = &local_res10.Value;
  *(undefined8 *)&(this->ButtonTextData).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x48 = 0;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_28 = local_res8;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_20 = &local_res10.Value;
  local_res8[0] = 4;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_28 = local_res8;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_20 = &local_res10.Value;
  local_res8[0] = 2;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_28 = local_res8;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_20 = &local_res10.Value;
  local_res8[0] = 8;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_28 = local_res8;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_20 = &local_res10.Value;
  local_res8[0] = 0x20;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_28 = local_res8;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_20 = &local_res10.Value;
  local_res8[0] = 0x10;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_28 = local_res8;
  local_res8[0] = 0x40;
  local_20 = &local_res10.Value;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_28 = local_res8;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_20 = &local_res10.Value;
  local_res8[0] = 0x100;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  local_28 = local_res8;
  local_res10.Value = (FDS_ButtonTextDatas *)0x0;
  local_20 = &local_res10.Value;
  local_res8[0] = 0x80;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (&this->ButtonTextData,&local_res10,(bool *)&local_28);
  return this;
}

