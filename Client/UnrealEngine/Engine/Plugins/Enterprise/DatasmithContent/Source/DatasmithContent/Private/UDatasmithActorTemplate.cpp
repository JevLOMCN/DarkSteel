// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 8

// StaticClass @ 14e2ebfe0

UClass * __cdecl UDatasmithActorTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithActorTemplate,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton;
}

// UDatasmithActorTemplate @ 14e2f43e0

UDatasmithActorTemplate * __thiscall
UDatasmithActorTemplate::UDatasmithActorTemplate
          (UDatasmithActorTemplate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDatasmithActorTemplate__6B_;
  *(undefined8 *)&(this->Layers).Elements = 0;
  *(undefined8 *)&(this->Layers).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Layers).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Layers).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Layers).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Layers).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Layers).Elements.field_0x30 = 0xffffffff;
  (this->Layers).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Layers).HashSize = 0;
  *(undefined8 *)&(this->Tags).Elements = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Tags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Tags).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Tags).Elements.field_0x30 = 0xffffffff;
  (this->Tags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Tags).HashSize = 0;
  return this;
}

// ~UDatasmithActorTemplate @ 14e2f5d20

void __thiscall UDatasmithActorTemplate::~UDatasmithActorTemplate(UDatasmithActorTemplate *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithActorTemplate__6B_;
  (this->Tags).HashSize = 0;
  FVar1 = (this->Tags).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Tags).Elements);
  (this->Layers).HashSize = 0;
  FVar1 = (this->Layers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Layers).Elements);
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9350

bool __thiscall
UDatasmithActorTemplate::Equals(UDatasmithActorTemplate *this,UDatasmithObjectTemplate *param_1)

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
      if ((int)param_1[1]._padding_ - *(int *)((longlong)&param_1[2]._padding_ + 4) ==
          *(int *)&(this->Layers).Elements.field_0x8 - *(int *)&(this->Layers).Elements.field_0x34)
      {
        bVar2 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Includes
                          ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                           (param_1 + 1),&this->Layers);
        if (bVar2) {
          if (*(int *)&param_1[2].bIsActorTemplate - *(int *)((longlong)&param_1[3]._padding_ + 4)
              == *(int *)&(this->Tags).Elements.field_0x8 -
                 *(int *)&(this->Tags).Elements.field_0x34) {
            bVar2 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Includes
                              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
                               &param_1[2]._padding_,&this->Tags);
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

// GetPrivateStaticClass @ 14e2fbc50

UClass * __cdecl UDatasmithActorTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithActorTemplate",
               &Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithActorTemplate,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDatasmithActorTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithActorTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithActorTemplate.InnerSingleton;
}

// Load @ 14e2fe0d0

void __thiscall UDatasmithActorTemplate::Load(UDatasmithActorTemplate *this,UObject *param_1)

{
  return;
}

// StaticRegisterNativesUDatasmithActorTemplate @ 14e2fec30

void __cdecl UDatasmithActorTemplate::StaticRegisterNativesUDatasmithActorTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ff9a0

UObject * __thiscall
UDatasmithActorTemplate::UpdateObject(UDatasmithActorTemplate *this,UObject *param_1,bool param_2)

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
      return *(UObject **)&param_1[4].field_0x8;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
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

