// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 9

// StaticClass @ 14e2eaa40

UClass * __cdecl UDatasmithSceneComponentTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithSceneComponentTemplate,0x120,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSceneComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSceneComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton;
}

// UDatasmithSceneComponentTemplate @ 14e2f52a0

UDatasmithSceneComponentTemplate * __thiscall
UDatasmithSceneComponentTemplate::UDatasmithSceneComponentTemplate
          (UDatasmithSceneComponentTemplate *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->field_0x28 = 0;
  *(undefined ***)this = &___7UDatasmithSceneComponentTemplate__6B_;
  this_00 = &(this->AttachParent).SoftObjectPtr.field_0x18;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bCastShadow = true;
  *(undefined8 *)&(this->Tags).Elements = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tags).Elements.field_0x34 = 0;
  (this->Tags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Tags).HashSize = 0;
  return this;
}

// UDatasmithSceneComponentTemplate @ 14e2f53a0

UDatasmithSceneComponentTemplate * __thiscall
UDatasmithSceneComponentTemplate::UDatasmithSceneComponentTemplate
          (UDatasmithSceneComponentTemplate *this)

{
  undefined1 *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this);
  this->field_0x28 = 0;
  *(undefined ***)this = &___7UDatasmithSceneComponentTemplate__6B_;
  this_00 = &(this->AttachParent).SoftObjectPtr.field_0x18;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->RelativeTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->RelativeTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->RelativeTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->RelativeTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->RelativeTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->RelativeTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AttachParent).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bCastShadow = true;
  *(undefined8 *)&(this->Tags).Elements = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tags).Elements.field_0x34 = 0;
  (this->Tags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Tags).HashSize = 0;
  return this;
}

// ~UDatasmithSceneComponentTemplate @ 14e2f6310

void __thiscall
UDatasmithSceneComponentTemplate::~UDatasmithSceneComponentTemplate
          (UDatasmithSceneComponentTemplate *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  *(undefined ***)this = &___7UDatasmithSceneComponentTemplate__6B_;
  (this->Tags).HashSize = 0;
  FVar1 = (this->Tags).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Tags).Elements);
  pvVar2 = *(void **)&(this->AttachParent).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)this = &___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9f50

bool __thiscall
UDatasmithSceneComponentTemplate::Equals
          (UDatasmithSceneComponentTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UDatasmithObjectTemplate *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar2 = ::`anonymous_namespace'::AreTransformsEqual
                        (&this->RelativeTransform,(TTransform<double> *)(param_1 + 1));
      if ((bVar2) &&
         ((((this->Mobility).Value == (uchar)param_1[3]._padding_ &&
           (this->bVisible == (bool)(char)param_1[4]._padding_)) &&
          (this->bCastShadow == (bool)*(char *)((longlong)&param_1[4]._padding_ + 1))))) {
        bVar2 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)&(this->AttachParent).SoftObjectPtr.field_0x8,
                           (FSoftObjectPath *)&param_1[3]._padding_);
        if (bVar2) {
          if (*(int *)&(this->Tags).Elements.field_0x8 - *(int *)&(this->Tags).Elements.field_0x34
              == (int)param_1[4]._padding_ - *(int *)((longlong)&param_1[5]._padding_ + 4)) {
            bVar2 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Includes
                              (&this->Tags,
                               (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                               &param_1[4]._padding_);
            if (bVar2) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fcf80

UClass * __cdecl UDatasmithSceneComponentTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneComponentTemplate",
               &Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithSceneComponentTemplate,0x120,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithSceneComponentTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithSceneComponentTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithSceneComponentTemplate.InnerSingleton;
}

// Load @ 14e2fe180

void __thiscall
UDatasmithSceneComponentTemplate::Load(UDatasmithSceneComponentTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithSceneComponentTemplate @ 14e2fee00

void __cdecl
UDatasmithSceneComponentTemplate::StaticRegisterNativesUDatasmithSceneComponentTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffdd0

UObject * __thiscall
UDatasmithSceneComponentTemplate::UpdateObject
          (UDatasmithSceneComponentTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return param_1;
    }
  }
  return (UObject *)0x0;
}

