// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 12

// StaticClass @ 14e2ecc00

UClass * __cdecl UDatasmithMaterialInstanceTemplate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithMaterialInstanceTemplate",
               &Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithMaterialInstanceTemplate,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithMaterialInstanceTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithMaterialInstanceTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton;
}

// UDatasmithMaterialInstanceTemplate @ 14e2f4e10

UDatasmithMaterialInstanceTemplate * __thiscall
UDatasmithMaterialInstanceTemplate::UDatasmithMaterialInstanceTemplate
          (UDatasmithMaterialInstanceTemplate *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this_00 = &(this->ParentMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&___7UDatasmithMaterialInstanceTemplate__6B_;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->ScalarParameterValues = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x34 = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterValues = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorParameterValues).field_0x34 = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->TextureParameterValues = 0;
  *(undefined8 *)&(this->TextureParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->TextureParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->TextureParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->TextureParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureParameterValues).field_0x34 = 0;
  *(undefined8 *)&(this->TextureParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->TextureParameterValues).field_0x48 = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters.field_0x8 = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters.field_0x20 = 0;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x28 = 0;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x34 = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters.field_0x40 = 0;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x48 = 0;
  return this;
}

// UDatasmithMaterialInstanceTemplate @ 14e2f4f70

UDatasmithMaterialInstanceTemplate * __thiscall
UDatasmithMaterialInstanceTemplate::UDatasmithMaterialInstanceTemplate
          (UDatasmithMaterialInstanceTemplate *this)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this_00 = &(this->ParentMaterial).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&___7UDatasmithMaterialInstanceTemplate__6B_;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ParentMaterial).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&this->ScalarParameterValues = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x34 = 0;
  *(undefined8 *)&(this->ScalarParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->VectorParameterValues = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->VectorParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VectorParameterValues).field_0x34 = 0;
  *(undefined8 *)&(this->VectorParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 0;
  *(undefined8 *)&this->TextureParameterValues = 0;
  *(undefined8 *)&(this->TextureParameterValues).field_0x8 = 0;
  *(undefined8 *)&(this->TextureParameterValues).field_0x20 = 0;
  *(undefined4 *)&(this->TextureParameterValues).field_0x28 = 0;
  *(undefined4 *)&(this->TextureParameterValues).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextureParameterValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextureParameterValues).field_0x34 = 0;
  *(undefined8 *)&(this->TextureParameterValues).field_0x40 = 0;
  *(undefined4 *)&(this->TextureParameterValues).field_0x48 = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters.field_0x8 = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters.field_0x20 = 0;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x28 = 0;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x34 = 0;
  *(undefined8 *)&(this->StaticParameters).StaticSwitchParameters.field_0x40 = 0;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x48 = 0;
  return this;
}

// ~UDatasmithMaterialInstanceTemplate @ 14e2f6190

void __thiscall
UDatasmithMaterialInstanceTemplate::~UDatasmithMaterialInstanceTemplate
          (UDatasmithMaterialInstanceTemplate *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDatasmithMaterialInstanceTemplate__6B_;
  *(undefined4 *)&(this->StaticParameters).StaticSwitchParameters.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StaticParameters).StaticSwitchParameters.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticParameters);
  *(undefined4 *)&(this->TextureParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TextureParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<UTexture>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextureParameterValues);
  *(undefined4 *)&(this->VectorParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VectorParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VectorParameterValues);
  *(undefined4 *)&(this->ScalarParameterValues).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ScalarParameterValues).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ScalarParameterValues);
  pvVar1 = *(void **)&(this->ParentMaterial).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UDatasmithObjectTemplate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14e2f9b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UDatasmithMaterialInstanceTemplate::Equals
          (UDatasmithMaterialInstanceTemplate *this,UDatasmithObjectTemplate *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> local_c8
  ;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> local_78
  ;
  
  if (param_1 == (UDatasmithObjectTemplate *)0x0) {
    return false;
  }
  pUVar5 = StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar5->_padding_) {
    return false;
  }
  pUVar6 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)(param_1 + 1));
  if (pUVar6 == (UObject *)0x0) {
LAB_14e2f9bda:
    pUVar6 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14e2f9bda;
  }
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ParentMaterial);
  if (pUVar7 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14e2f9c14;
  }
  pUVar7 = (UObject *)0x0;
LAB_14e2f9c14:
  uVar3 = _UNK_150631d98;
  uVar2 = ___xmm_00000000ffffffff0000008000000000;
  if (pUVar6 == pUVar7) {
    local_c8.Elements._0_8_ = 0;
    local_c8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_c8.Elements._48_8_ = _UNK_150631d98;
    local_c8.Elements._8_8_ = 0;
    local_c8.Elements._32_8_ = 0;
    local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_c8.HashSize = 0;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    operator=(&local_c8,
              (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
               *)&param_1[1].bIsActorTemplate);
    local_78.Elements._0_8_ = 0;
    local_78.Elements._8_8_ = 0;
    local_78.Elements._32_8_ = 0;
    local_78.Elements._40_8_ = uVar2;
    local_78.Elements._48_8_ = uVar3;
    local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_78.HashSize = 0;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    operator=(&local_78,
              (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
               *)&this->ScalarParameterValues);
    bVar4 = DatasmithMaterialInstanceTemplateImpl::
            MapEquals<TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_>
                      ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                        *)&local_78,
                       (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                        *)&local_c8);
    if (bVar4) {
      local_78.Elements._0_8_ = 0;
      local_78.Elements._8_8_ = 0;
      local_78.Elements._32_8_ = 0;
      local_78.Elements._40_8_ = uVar2;
      local_78.Elements._48_8_ = uVar3;
      local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_78.HashSize = 0;
      TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                   *)&local_78,
                  (TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                   *)&param_1[3]._padding_);
      local_c8.Elements._0_8_ = 0;
      local_c8.Elements._8_8_ = 0;
      local_c8.Elements._32_8_ = 0;
      local_c8.Elements._40_8_ = uVar2;
      local_c8.Elements._48_8_ = uVar3;
      local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_c8.HashSize = 0;
      TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                   *)&local_c8,
                  (TSet<TTuple<FName,FLinearColor>,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>,FDefaultSetAllocator>
                   *)&this->VectorParameterValues);
      bVar4 = DatasmithMaterialInstanceTemplateImpl::
              MapEquals<TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>_>
                        ((TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                          *)&local_c8,
                         (TMap<FName,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLinearColor,0>_>
                          *)&local_78);
      if (bVar4) {
        local_78.Elements._0_8_ = 0;
        local_78.Elements._8_8_ = 0;
        local_78.Elements._32_8_ = 0;
        local_78.Elements._40_8_ = uVar2;
        local_78.Elements._48_8_ = uVar3;
        local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_78.HashSize = 0;
        TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
                     *)&local_78,
                    (TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
                     *)&param_1[5]._padding_);
        local_c8.Elements._0_8_ = 0;
        local_c8.Elements._8_8_ = 0;
        local_c8.Elements._32_8_ = 0;
        local_c8.Elements._40_8_ = uVar2;
        local_c8.Elements._48_8_ = uVar3;
        local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_c8.HashSize = 0;
        TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
                     *)&local_c8,
                    (TSet<TTuple<FName,TSoftObjectPtr<UTexture>_>,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>,FDefaultSetAllocator>
                     *)&this->TextureParameterValues);
        bVar4 = DatasmithMaterialInstanceTemplateImpl::
                MapEquals<TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>_>
                          ((TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>
                            *)&local_c8,
                           (TMap<FName,TSoftObjectPtr<UTexture>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSoftObjectPtr<UTexture>,0>_>
                            *)&local_78);
        if (bVar4) {
          local_78.Elements._0_8_ = 0;
          local_78.Elements._8_8_ = 0;
          local_78.Elements._32_8_ = 0;
          local_78.Elements._40_8_ = uVar2;
          local_78.Elements._48_8_ = uVar3;
          local_78.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_78.HashSize = 0;
          TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
          operator=((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                     *)&local_78,
                    (TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                     *)&param_1[6].bIsActorTemplate);
          local_c8.Elements._0_8_ = 0;
          local_c8.Elements._8_8_ = 0;
          local_c8.Elements._32_8_ = 0;
          local_c8.Elements._40_8_ = uVar2;
          local_c8.Elements._48_8_ = uVar3;
          local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_c8.HashSize = 0;
          TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>::
          operator=((TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                     *)&local_c8,
                    (TSet<TTuple<FName,bool>,TDefaultMapHashableKeyFuncs<FName,bool,0>,FDefaultSetAllocator>
                     *)&this->StaticParameters);
          bVar4 = DatasmithMaterialInstanceTemplateImpl::
                  MapEquals<TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>_>
                            ((TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
                              *)&local_c8,
                             (TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
                              *)&local_78);
          if (bVar4) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// GetPrivateStaticClass @ 14e2fcb30

UClass * __cdecl UDatasmithMaterialInstanceTemplate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithMaterialInstanceTemplate",
               &Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton,
               StaticRegisterNativesUDatasmithMaterialInstanceTemplate,0x198,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithMaterialInstanceTemplate>,
               InternalVTableHelperCtorCaller<UDatasmithMaterialInstanceTemplate>,local_res8,
               UDatasmithObjectTemplate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithMaterialInstanceTemplate.InnerSingleton;
}

// HasSameBase @ 14e2fd990

bool __thiscall
UDatasmithMaterialInstanceTemplate::HasSameBase
          (UDatasmithMaterialInstanceTemplate *this,UDatasmithObjectTemplate *param_1)

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
      bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)&(this->ParentMaterial).SoftObjectPtr.field_0x8,
                         (FSoftObjectPath *)&param_1[1]._padding_);
      return bVar2;
    }
  }
  return false;
}

// Load @ 14e2fe140

void __thiscall
UDatasmithMaterialInstanceTemplate::Load(UDatasmithMaterialInstanceTemplate *this,UObject *param_1)

{
  return;
}

// LoadAll @ 14e2fe1d0

void __thiscall
UDatasmithMaterialInstanceTemplate::LoadAll
          (UDatasmithMaterialInstanceTemplate *this,UObject *param_1)

{
  return;
}

// LoadRebase @ 14e2fe1f0

void __thiscall
UDatasmithMaterialInstanceTemplate::LoadRebase
          (UDatasmithMaterialInstanceTemplate *this,UObject *param_1,
          UDatasmithObjectTemplate *param_2,bool param_3)

{
  return;
}

// StaticRegisterNativesUDatasmithMaterialInstanceTemplate @ 14e2feda0

void __cdecl
UDatasmithMaterialInstanceTemplate::StaticRegisterNativesUDatasmithMaterialInstanceTemplate(void)

{
  return;
}

// UpdateObject @ 14e2ffca0

UObject * __thiscall
UDatasmithMaterialInstanceTemplate::UpdateObject
          (UDatasmithMaterialInstanceTemplate *this,UObject *param_1,bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
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

