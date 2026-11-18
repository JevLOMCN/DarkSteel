// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 8

// StaticClass @ 14e5b63e0

UClass * __cdecl UGLTFProxyOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFProxyOptions",
               &Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton,
               StaticRegisterNativesUGLTFProxyOptions,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",InternalConstructor<UGLTFProxyOptions>
               ,InternalVTableHelperCtorCaller<UGLTFProxyOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton;
}

// UGLTFProxyOptions @ 14e5d3840

UGLTFProxyOptions * __thiscall
UGLTFProxyOptions::UGLTFProxyOptions(UGLTFProxyOptions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFProxyOptions__6B_;
  *(undefined8 *)&this->DefaultInputBakeSettings = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x20 = 0;
  (this->DefaultMaterialBakeSize).X = 1;
  (this->DefaultMaterialBakeSize).Y = 1;
  (this->DefaultMaterialBakeSize).bAutoDetect = false;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  return this;
}

// UGLTFProxyOptions @ 14e5d38b0

UGLTFProxyOptions * __thiscall
UGLTFProxyOptions::UGLTFProxyOptions(UGLTFProxyOptions *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UGLTFProxyOptions__6B_;
  *(undefined8 *)&this->DefaultInputBakeSettings = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x20 = 0;
  (this->DefaultMaterialBakeSize).X = 1;
  (this->DefaultMaterialBakeSize).Y = 1;
  (this->DefaultMaterialBakeSize).bAutoDetect = false;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x28 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x2c = 0x80;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x34 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DefaultInputBakeSettings).field_0x40 = 0;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  this->bBakeMaterialInputs = true;
  this->bUseThinTranslucentShadingModel = false;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  (this->DefaultMaterialBakeSize).X = FGLTFMaterialBakeSize::Default.X;
  (this->DefaultMaterialBakeSize).Y = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  (this->DefaultMaterialBakeSize).bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&(this->DefaultMaterialBakeSize).field_0x9 = uVar2;
  this->DefaultMaterialBakeFilter = '\x02';
  this->DefaultMaterialBakeTiling = '\0';
  return this;
}

// ~UGLTFProxyOptions @ 14e5d8060

void __thiscall UGLTFProxyOptions::~UGLTFProxyOptions(UGLTFProxyOptions *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UGLTFProxyOptions__6B_;
  *(undefined4 *)&(this->DefaultInputBakeSettings).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DefaultInputBakeSettings).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EGLTFMaterialPropertyGroup,FGLTFOverrideMaterialBakeSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DefaultInputBakeSettings);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e5fc9e0

UClass * __cdecl UGLTFProxyOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GLTFExporter",L"GLTFProxyOptions",
               &Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton,
               StaticRegisterNativesUGLTFProxyOptions,0x90,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"EditorPerProjectUserSettings",InternalConstructor<UGLTFProxyOptions>
               ,InternalVTableHelperCtorCaller<UGLTFProxyOptions>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGLTFProxyOptions.InnerSingleton;
}

// ResetToDefault @ 14e6117a0

void __thiscall UGLTFProxyOptions::ResetToDefault(UGLTFProxyOptions *this)

{
  int iVar1;
  undefined3 uVar2;
  
  this->bBakeMaterialInputs = true;
  this->bUseThinTranslucentShadingModel = false;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  (this->DefaultMaterialBakeSize).X = FGLTFMaterialBakeSize::Default.X;
  (this->DefaultMaterialBakeSize).Y = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  (this->DefaultMaterialBakeSize).bAutoDetect = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&(this->DefaultMaterialBakeSize).field_0x9 = uVar2;
  this->DefaultMaterialBakeFilter = '\x02';
  this->DefaultMaterialBakeTiling = '\0';
  return;
}

// StaticRegisterNativesUGLTFProxyOptions @ 14e614d50

void __cdecl UGLTFProxyOptions::StaticRegisterNativesUGLTFProxyOptions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGLTFProxyOptions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execResetToDefault @ 14e620d40

void __cdecl UGLTFProxyOptions::execResetToDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  undefined3 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined2 *)(param_1 + 1) = 1;
  iVar1 = FGLTFMaterialBakeSize::Default.Y;
  *(int *)&param_1[1].field_0x4 = FGLTFMaterialBakeSize::Default.X;
  *(int *)&param_1[1].field_0x8 = iVar1;
  uVar2 = FGLTFMaterialBakeSize::Default._9_3_;
  param_1[1].field_0xc = FGLTFMaterialBakeSize::Default.bAutoDetect;
  *(undefined3 *)&param_1[1].field_0xd = uVar2;
  *(undefined2 *)&param_1[1].field_0x10 = 2;
  return;
}

