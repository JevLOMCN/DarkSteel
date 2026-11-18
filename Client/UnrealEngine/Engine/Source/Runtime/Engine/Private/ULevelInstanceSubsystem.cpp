// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 147e42df0

UClass * __cdecl ULevelInstanceSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceSubsystem",
               &Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton,
               StaticRegisterNativesULevelInstanceSubsystem,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelInstanceSubsystem>,
               InternalVTableHelperCtorCaller<ULevelInstanceSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton;
}

// ULevelInstanceSubsystem @ 147e55b00

ULevelInstanceSubsystem * __thiscall
ULevelInstanceSubsystem::ULevelInstanceSubsystem
          (ULevelInstanceSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IStreamingWorldSubsystemInterface__;
  *(undefined8 *)&this->LevelInstancesToLoadOrUpdate = 0;
  *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x20 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x28 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x34 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x40 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x48 = 0;
  *(undefined8 *)&(this->LevelInstancesToUnload).Elements = 0;
  *(undefined8 *)&(this->LevelInstancesToUnload).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LevelInstancesToUnload).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x30 = 0xffffffff;
  (this->LevelInstancesToUnload).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LevelInstancesToUnload).HashSize = 0;
  *(undefined8 *)&(this->LoadingLevelInstances).Elements = 0;
  *(undefined8 *)&(this->LoadingLevelInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoadingLevelInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x30 = 0xffffffff;
  (this->LoadingLevelInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoadingLevelInstances).HashSize = 0;
  *(undefined8 *)&this->LoadedLevelInstances = 0;
  *(undefined8 *)&(this->LoadedLevelInstances).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedLevelInstances).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x34 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LoadedLevelInstances).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredLevelInstances = 0;
  *(undefined8 *)&(this->RegisteredLevelInstances).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredLevelInstances).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredLevelInstances).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x48 = 0;
  return this;
}

// ULevelInstanceSubsystem @ 147e55c70

ULevelInstanceSubsystem * __thiscall
ULevelInstanceSubsystem::ULevelInstanceSubsystem(ULevelInstanceSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IStreamingWorldSubsystemInterface__;
  *(undefined8 *)&this->LevelInstancesToLoadOrUpdate = 0;
  *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x8 = 0;
  *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x20 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x28 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x34 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x40 = 0;
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x48 = 0;
  *(undefined8 *)&(this->LevelInstancesToUnload).Elements = 0;
  *(undefined8 *)&(this->LevelInstancesToUnload).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LevelInstancesToUnload).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LevelInstancesToUnload).Elements.field_0x30 = 0xffffffff;
  (this->LevelInstancesToUnload).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LevelInstancesToUnload).HashSize = 0;
  *(undefined8 *)&(this->LoadingLevelInstances).Elements = 0;
  *(undefined8 *)&(this->LoadingLevelInstances).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LoadingLevelInstances).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LoadingLevelInstances).Elements.field_0x30 = 0xffffffff;
  (this->LoadingLevelInstances).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LoadingLevelInstances).HashSize = 0;
  *(undefined8 *)&this->LoadedLevelInstances = 0;
  *(undefined8 *)&(this->LoadedLevelInstances).field_0x8 = 0;
  *(undefined8 *)&(this->LoadedLevelInstances).field_0x20 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x28 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x34 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LoadedLevelInstances).field_0x40 = 0;
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredLevelInstances = 0;
  *(undefined8 *)&(this->RegisteredLevelInstances).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredLevelInstances).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x34 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RegisteredLevelInstances).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x48 = 0;
  return this;
}

// ~ULevelInstanceSubsystem @ 147e57b80

void __thiscall ULevelInstanceSubsystem::~ULevelInstanceSubsystem(ULevelInstanceSubsystem *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__IStreamingWorldSubsystemInterface__;
  *(undefined4 *)&(this->RegisteredLevelInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RegisteredLevelInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredLevelInstances);
  *(undefined4 *)&(this->LoadedLevelInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LoadedLevelInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LoadedLevelInstances);
  (this->LoadingLevelInstances).HashSize = 0;
  FVar2 = (this->LoadingLevelInstances).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadingLevelInstances).Elements);
  (this->LevelInstancesToUnload).HashSize = 0;
  FVar2 = (this->LevelInstancesToUnload).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LevelInstancesToUnload).Elements);
  *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LevelInstancesToLoadOrUpdate).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LevelInstancesToLoadOrUpdate);
  this->_padding_ = (longlong)&___7IStreamingWorldSubsystemInterface__6B_;
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// operator() @ 147e59270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`ULevelInstanceSubsystem::CheckForLoop'::__l8::<lambda_1>::operator()
          (void *this,ILevelInstanceInterface *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  AActor *this_00;
  ULevel *this_01;
  UPackage *this_02;
  FPackagePath *this_03;
  FPackagePath *pFVar10;
  undefined8 *puVar11;
  FString *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FSoftObjectPath *this_04;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  FName local_res20;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1b8;
  undefined1 local_1a8 [24];
  FUtf8String local_190;
  undefined8 local_180;
  FText local_178;
  FText local_168;
  FText local_158;
  FString local_148;
  FTextFormat local_138;
  FFormatArgumentValue local_128;
  FString local_108;
  FText local_f8;
  undefined1 local_e8 [24];
  void *local_d0;
  undefined8 local_c0;
  FSoftObjectPath local_b8;
  undefined1 local_98 [24];
  void *local_80;
  undefined8 local_70;
  FSoftObjectPath local_68;
  FPackagePath local_48;
  FTextFormat local_38;
  
  local_res8[0] = 0;
  FSoftObjectPath::GetLongPackageName
            ((FSoftObjectPath *)(*(longlong *)((longlong)this + 8) + 8),&local_148);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_148.Data.ArrayNum != 0) {
    FVar15.Data = local_148.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res20,(wchar_t *)FVar15.Data);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  this_00 = CastChecked<AActor,ILevelInstanceInterface_const_>(param_1);
  if (local_res20 != (FName)0x0) {
    this_01 = AActor::GetLevel(this_00);
    if (this_01 != (ULevel *)0x0) {
      this_02 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
      if (this_02 != (UPackage *)0x0) {
        this_03 = UPackage::GetLoadedPath(this_02);
        pFVar10 = FPackagePath::FromPackageNameChecked(&local_48,local_res20);
        bVar7 = FPackagePath::operator==(this_03,pFVar10);
        if (bVar7) {
          **(undefined1 **)this = 0;
          if (*(undefined8 **)((longlong)this + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)((longlong)this + 0x20) = param_1;
          }
        }
      }
    }
  }
  if (*(longlong *)((longlong)this + 0x18) != 0) {
    if (param_1 == *(ILevelInstanceInterface **)((longlong)this + 0x10)) {
      puVar11 = *(undefined8 **)((longlong)this + 8);
      puVar17 = &local_70;
      this_04 = &local_68;
      bVar6 = true;
      bVar5 = false;
      bVar7 = false;
      bVar4 = false;
      local_70 = *puVar11;
    }
    else {
      bVar7 = param_1 == (ILevelInstanceInterface *)0x0;
      if (bVar7) {
        local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_190.Data.ArrayNum = 0;
        local_190.Data.ArrayMax = 0;
        local_1a8._0_8_ = 0;
        local_1a8._16_8_ = 0;
        local_1a8._8_8_ = 0;
        FUtf8String::Reset(&local_190,0);
        local_180 = 0;
        FSoftObjectPtr::operator=((FSoftObjectPtr *)local_1a8,(FObjectPtr)&local_180);
        puVar11 = (undefined8 *)local_1a8;
        local_98._0_8_ = local_1a8._0_8_;
      }
      else {
        puVar11 = (undefined8 *)(**(code **)((longlong)*param_1 + 0x28))(param_1);
        local_e8._0_8_ = *puVar11;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_e8 + 8),(FSoftObjectPath *)(puVar11 + 1));
        puVar11 = (undefined8 *)local_e8;
        local_98._0_8_ = local_e8._0_8_;
      }
      bVar6 = false;
      bVar5 = !bVar7;
      bVar4 = true;
      puVar17 = (undefined8 *)local_98;
      this_04 = (FSoftObjectPath *)(local_98 + 8);
    }
    FSoftObjectPath::FSoftObjectPath(this_04,(FSoftObjectPath *)(puVar11 + 1));
    local_c0 = *puVar17;
    FSoftObjectPath::FSoftObjectPath(&local_b8,(FSoftObjectPath *)(puVar17 + 1));
    if (bVar4) {
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
    }
    if (bVar7) {
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
    if (bVar5) {
      if (local_d0 != (void *)0x0) {
        FMemory::Free(local_d0);
      }
    }
    if ((bVar6) &&
       (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
    }
    pFVar12 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)this_00,&local_108,(UObject *)0x0);
    FText::FromString(&local_158,pFVar12);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_178.TextData.Reference = local_158.TextData.Reference;
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 8))
                (local_158.TextData.Reference,local_res8);
    }
    local_178.Flags = local_158.Flags;
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"LevelInstanceSubsystem",L"LevelInstanceLoopLink",
                         L"-> Actor: {0} loads");
    pFVar14 = FTextFormat::FTextFormat(&local_38,pFVar13,Default);
    local_128.Type = Text;
    FText::FText((FText *)&local_128.TextValue,&local_178);
    if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
    }
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_1b8.AllocatorInstance,1,&local_1b8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_1b8.AllocatorInstance.Data,&local_128,1);
    local_138.TextFormatData.Object = (pFVar14->TextFormatData).Object;
    local_138.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar14->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_138.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_138.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_138.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_168,&local_138,&local_1b8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data,local_1b8.ArrayNum);
    if ((FFormatArgumentValue *)local_1b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar14->TextFormatData).SharedReferenceCount.ReferenceController);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar9 = *(int *)&pFVar2[1].Data;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar9 + 1;
    pFVar16 = pFVar2->Data + (longlong)iVar9 * 0x38;
    *(undefined8 *)pFVar16 = 0;
    *(ITextData **)pFVar16 = local_168.TextData.Reference;
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 8))
                (local_168.TextData.Reference,local_res18);
    }
    *(uint *)(pFVar16 + 8) = local_168.Flags;
    *(undefined8 *)(pFVar16 + 0x10) = local_c0;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(pFVar16 + 0x18),&local_b8);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  return (bool)**(undefined1 **)this;
}

// AddReferencedObjects @ 147e5bd80

void __cdecl
ULevelInstanceSubsystem::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  UObject::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULevelInstanceSubsystem>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return;
  }
  pFVar3 = GetTypeName<ULevelInstanceSubsystem>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CanUseWorldAsset @ 147e5f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ULevelInstanceSubsystem::CanUseWorldAsset
          (ILevelInstanceInterface *param_1,TSoftObjectPtr<UWorld> *param_2,FString *param_3)

{
  undefined1 *this;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TTuple<FText,TSoftObjectPtr<UWorld>_> **ppTVar3;
  char cVar4;
  TTuple<FText,TSoftObjectPtr<UWorld>_> *pTVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 uVar8;
  FString *pFVar9;
  ULevelInstanceSubsystem *this_00;
  AActor *pAVar10;
  UClass *pUVar11;
  ILevelInstanceInterface *pIVar12;
  ULevel *pUVar13;
  UObject *pUVar14;
  void *pvVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  int iVar18;
  wchar_t *pwVar19;
  int iVar20;
  TTuple<FText,TSoftObjectPtr<UWorld>_> **ppTVar21;
  longlong lVar22;
  undefined1 auStackY_2f8 [32];
  char local_2b8 [8];
  TTuple<FText,TSoftObjectPtr<UWorld>_> *local_2b0;
  undefined8 local_2a8;
  FString local_2a0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_290;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_280;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_270;
  TTuple<FText,TSoftObjectPtr<UWorld>_> *local_260;
  undefined8 local_258;
  TSoftObjectPtr<UWorld> *local_250;
  undefined1 local_248 [8];
  FSoftObjectPath local_240;
  UObject *local_220;
  FName local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  char *local_1d0;
  undefined8 *local_1c8;
  ILevelInstanceInterface *local_1c0;
  TTuple<FText,TSoftObjectPtr<UWorld>_> **local_1b8;
  TTuple<FText,TSoftObjectPtr<UWorld>_> **local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  undefined8 local_158;
  FSoftObjectPath local_150;
  FStringFormatArg local_130;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  FString local_c8;
  FString local_b8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_250 = param_2;
  if (param_3 != (FString *)0x0) {
    pFVar9 = ::FString::FString(&local_1a8,L"");
    if (param_3 != pFVar9) {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_3->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_3->Data).ArrayNum = (pFVar9->Data).ArrayNum;
      (param_3->Data).ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  this = &(param_2->SoftObjectPtr).field_0x8;
  if (*(longlong *)&(param_2->SoftObjectPtr).field_0x8 == 0) {
    pvVar15 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
LAB_147e5f983:
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
    bVar7 = true;
  }
  else {
    FSoftObjectPath::GetLongPackageName((FSoftObjectPath *)this,&local_200);
    bVar7 = FPackageName::DoesPackageExist(&local_200,(FString *)0x0,true);
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      local_158 = *(undefined8 *)&param_2->SoftObjectPtr;
      local_2b0 = (TTuple<FText,TSoftObjectPtr<UWorld>_> *)0x0;
      local_2a8 = 0;
      local_260 = (TTuple<FText,TSoftObjectPtr<UWorld>_> *)0x0;
      FSoftObjectPath::FSoftObjectPath(&local_150,(FSoftObjectPath *)this);
      local_2b8[0] = '\x01';
      ppTVar21 = &local_2b0;
      ppTVar3 = &local_260;
      if (param_3 == (FString *)0x0) {
        ppTVar21 = (TTuple<FText,TSoftObjectPtr<UWorld>_> **)0x0;
        ppTVar3 = (TTuple<FText,TSoftObjectPtr<UWorld>_> **)0x0;
      }
      if ((param_1 != (ILevelInstanceInterface *)0x0) &&
         (this_00 = (ULevelInstanceSubsystem *)(**(code **)((longlong)*param_1 + 0x40))(param_1),
         this_00 != (ULevelInstanceSubsystem *)0x0)) {
        local_1d0 = local_2b8;
        local_1c8 = &local_158;
        local_1c0 = param_1;
        local_1b8 = ppTVar21;
        local_1b0 = ppTVar3;
        pAVar10 = CastChecked<AActor,ILevelInstanceInterface_const_>(param_1);
        if (pAVar10 != (AActor *)0x0) {
          pUVar11 = Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
          pIVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pAVar10,pUVar11);
          if ((pIVar12 == (ILevelInstanceInterface *)0x0) ||
             (bVar7 = `ULevelInstanceSubsystem::CheckForLoop'::__l8::<lambda_1>::operator()
                                (&local_1d0,pIVar12), bVar7)) {
            while( true ) {
              pUVar13 = AActor::GetLevel(pAVar10);
              pIVar12 = GetOwningLevelInstance(this_00,pUVar13);
              if ((pIVar12 == (ILevelInstanceInterface *)0x0) ||
                 (pAVar10 = (AActor *)(**(code **)((longlong)*pIVar12 + 8))(pIVar12),
                 pAVar10 == (AActor *)0x0)) break;
              pUVar11 = Z_Construct_UClass_AActor_NoRegister();
              iVar18 = (int)pUVar11->_padding_;
              if (((*(int *)(pAVar10->_padding_ + 0x38) < iVar18) ||
                  ((longlong *)
                   *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar18 * 8)
                   != &pUVar11->_padding_)) ||
                 (bVar7 = `ULevelInstanceSubsystem::CheckForLoop'::__l8::<lambda_1>::operator()
                                    (&local_1d0,pIVar12), !bVar7)) break;
            }
          }
        }
      }
      cVar4 = local_2b8[0];
      pwVar16 = L"";
      if (local_150.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.SubPathString.Data.AllocatorInstance.Data);
      }
      pTVar5 = local_260;
      if (cVar4 != '\0') {
        DestructItems<TTuple<FText,TSoftObjectPtr<UWorld>_>,int>(local_2b0,(int)local_2a8);
        if (local_2b0 != (TTuple<FText,TSoftObjectPtr<UWorld>_> *)0x0) {
          FMemory::Free(local_2b0);
        }
        pvVar15 = *(void **)&(local_250->SoftObjectPtr).field_0x18;
        goto LAB_147e5f983;
      }
      if (param_3 != (FString *)0x0) {
        if (local_260 == (TTuple<FText,TSoftObjectPtr<UWorld>_> *)0x0) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3959935657656188070>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                             ,0x35a,"LoopStart");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            uVar8 = (*pcVar2)();
            return (bool)uVar8;
          }
        }
        else {
          pAVar10 = (AActor *)
                    (**(code **)((longlong)*(ILevelInstanceInterface *)local_260 + 8))(local_260);
          if (pAVar10 == (AActor *)0x0) {
LAB_147e5f9b9:
            pFVar9 = GetTypeName<AActor>(&local_c8);
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar19 = L"";
            }
            else {
              pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            pFVar9 = GetFullNameForCastLogError<ILevelInstanceInterface_const_>
                               (&local_b8,(ILevelInstanceInterface *)pTVar5);
            if ((pFVar9->Data).ArrayNum != 0) {
              pwVar16 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar16,pwVar19);
          }
          pUVar11 = Z_Construct_UClass_AActor_NoRegister();
          iVar18 = (int)pUVar11->_padding_;
          if ((*(int *)(pAVar10->_padding_ + 0x38) < iVar18) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
              &pUVar11->_padding_)) goto LAB_147e5f9b9;
          pUVar13 = AActor::GetLevel(pAVar10);
          pUVar11 = Z_Construct_UClass_UWorld_NoRegister();
          pUVar14 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar13,pUVar11);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          local_240.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_240.AssetPath.AssetName.ComparisonIndex.Value = 0;
          local_240.AssetPath.AssetName.Number = 0;
          local_240.AssetPath.PackageName.ComparisonIndex.Value = 0;
          local_240.AssetPath.PackageName.Number = 0;
          local_240.SubPathString.Data.ArrayNum = 0;
          local_240.SubPathString.Data.ArrayMax = 0;
          local_248 = (undefined1  [8])0x0;
          local_258 = 0;
          FUtf8String::Reset(&local_240.SubPathString,0);
          local_220 = pUVar14;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          FSoftObjectPtr::operator=((FSoftObjectPtr *)local_248,(FObjectPtr)&local_220);
          FSoftObjectPath::GetLongPackageName((FSoftObjectPath *)this,&local_188);
          FStringFormatArg::FStringFormatArg(&local_a8,&local_188);
          local_218 = (FName)pAVar10->_padding_;
          ::FName::ToString(&local_218,&local_178);
          FStringFormatArg::FStringFormatArg(&local_88,&local_178);
          FSoftObjectPath::GetLongPackageName(&local_240,&local_168);
          FStringFormatArg::FStringFormatArg(&local_68,&local_168);
          local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_280.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_280.AllocatorInstance,3,&local_280.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_280.AllocatorInstance.Data,&local_a8,3);
          ::FString::FormatImpl
                    (&local_1f0,L"Setting LevelInstance to {0} would cause loop {1}:{2}\n",
                     &local_280);
          ::FString::operator=(param_3,&local_1f0);
          if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_280.AllocatorInstance.Data,local_280.ArrayNum);
          if ((FStringFormatArg *)local_280.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_280.AllocatorInstance.Data);
          }
          if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
          }
          iVar18 = (int)local_2a8 + -1;
          if (-1 < iVar18) {
            lVar22 = (longlong)iVar18 * 0x38;
            do {
              if (((int)local_2a8 <= iVar18) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              pFVar9 = FText::ToString((FText *)(&local_2b0->field_0x0 + lVar22));
              if ((pFVar9->Data).ArrayNum == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
              }
              FStringFormatArg::FStringFormatArg(&local_108,pwVar16);
              if (((int)local_2a8 <= iVar18) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                uVar8 = (*pcVar2)();
                return (bool)uVar8;
              }
              FSoftObjectPath::GetLongPackageName
                        ((FSoftObjectPath *)(&local_2b0->field_0x18 + lVar22),&local_1e0);
              FVar6.Data = local_1e0.Data.AllocatorInstance.Data;
              FVar17.Data = (FScriptContainerElement *)L"";
              if (local_1e0.Data.ArrayNum != 0) {
                FVar17.Data = local_1e0.Data.AllocatorInstance.Data;
              }
              FStringFormatArg::FStringFormatArg(&local_e8,(wchar_t *)FVar17.Data);
              local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_270.ArrayNum = 2;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,2,0,&local_270.AllocatorInstance,2,&local_270.ArrayMax);
              ConstructItems<FStringFormatArg,FStringFormatArg,int>
                        (local_270.AllocatorInstance.Data,&local_108,2);
              ::FString::FormatImpl(&local_210,L"{0} {1}\n",&local_270);
              iVar20 = 0;
              if (local_210.Data.ArrayNum != 0) {
                iVar20 = local_210.Data.ArrayNum + -1;
              }
              ::FString::AppendChars
                        (param_3,(wchar_t *)local_210.Data.AllocatorInstance.Data,iVar20);
              if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_210.Data.AllocatorInstance.Data);
              }
              DestructItems<FStringFormatArg,int>
                        ((FStringFormatArg *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
              if ((FStringFormatArg *)local_270.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
                FMemory::Free(local_270.AllocatorInstance.Data);
              }
              if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                 ) {
                FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
              }
              if (local_108.StringValue.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
              }
              if (FVar6.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar6.Data);
              }
              lVar22 = lVar22 + -0x38;
              iVar18 = iVar18 + -1;
            } while (-1 < iVar18);
          }
          if (local_240.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_240.SubPathString.Data.AllocatorInstance.Data);
          }
        }
      }
      DestructItems<TTuple<FText,TSoftObjectPtr<UWorld>_>,int>(local_2b0,(int)local_2a8);
      if (local_2b0 != (TTuple<FText,TSoftObjectPtr<UWorld>_> *)0x0) {
        FMemory::Free(local_2b0);
      }
      pvVar15 = *(void **)&(local_250->SoftObjectPtr).field_0x18;
    }
    else {
      if (param_3 != (FString *)0x0) {
        FSoftObjectPath::GetLongPackageName((FSoftObjectPath *)this,&local_198);
        FStringFormatArg::FStringFormatArg(&local_130,&local_198);
        local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_290.AllocatorInstance,1,&local_290.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_290.AllocatorInstance.Data,&local_130,1);
        ::FString::FormatImpl
                  (&local_2a0,
                   L"Attempting to set Level Instance to package {0} which does not exist. Ensure the level was saved before attepting to set the level instance world asset."
                   ,&local_290);
        if (param_3 != &local_2a0) {
          pFVar1 = (param_3->Data).AllocatorInstance.Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_3->Data).AllocatorInstance.Data = local_2a0.Data.AllocatorInstance.Data;
          (param_3->Data).ArrayNum = local_2a0.Data.ArrayNum;
          (param_3->Data).ArrayMax = local_2a0.Data.ArrayMax;
          local_2a0.Data.ArrayNum = 0;
          local_2a0.Data.ArrayMax = 0;
          local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_290.AllocatorInstance.Data,local_290.ArrayNum);
        if ((FStringFormatArg *)local_290.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_290.AllocatorInstance.Data);
        }
        if (local_130.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.StringValue.Data.AllocatorInstance.Data);
        }
      }
      pvVar15 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
    }
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
    bVar7 = false;
  }
  return bVar7;
}

// CheckForLoop @ 147e5fa00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ULevelInstanceSubsystem::CheckForLoop
          (ILevelInstanceInterface *param_1,TSoftObjectPtr<UWorld> *param_2,
          TArray<TTuple<FText,TSoftObjectPtr<UWorld>_>,TSizedDefaultAllocator<32>_> *param_3,
          ILevelInstanceInterface **param_4)

{
  int iVar1;
  void *pvVar2;
  undefined1 uVar3;
  bool bVar4;
  ULevelInstanceSubsystem *this;
  AActor *this_00;
  UClass *pUVar5;
  ILevelInstanceInterface *pIVar6;
  ULevel *pUVar7;
  undefined1 local_res8 [8];
  undefined1 *local_48;
  TSoftObjectPtr<UWorld> *local_40;
  ILevelInstanceInterface *local_38;
  TArray<TTuple<FText,TSoftObjectPtr<UWorld>_>,TSizedDefaultAllocator<32>_> *local_30;
  ILevelInstanceInterface **local_28;
  
  local_res8[0] = 1;
  if ((param_1 != (ILevelInstanceInterface *)0x0) &&
     (this = (ULevelInstanceSubsystem *)(**(code **)((longlong)*param_1 + 0x40))(),
     this != (ULevelInstanceSubsystem *)0x0)) {
    local_48 = local_res8;
    local_40 = param_2;
    local_38 = param_1;
    local_30 = param_3;
    local_28 = param_4;
    this_00 = CastChecked<AActor,ILevelInstanceInterface_const_>(param_1);
    if (this_00 != (AActor *)0x0) {
      pUVar5 = Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
      pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar5);
      if ((pIVar6 == (ILevelInstanceInterface *)0x0) ||
         (bVar4 = `ULevelInstanceSubsystem::CheckForLoop'::__l8::<lambda_1>::operator()
                            (&local_48,pIVar6), bVar4)) {
        while( true ) {
          pUVar7 = AActor::GetLevel(this_00);
          pIVar6 = GetOwningLevelInstance(this,pUVar7);
          if ((pIVar6 == (ILevelInstanceInterface *)0x0) ||
             (this_00 = (AActor *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6),
             this_00 == (AActor *)0x0)) break;
          pUVar5 = Z_Construct_UClass_AActor_NoRegister();
          iVar1 = (int)pUVar5->_padding_;
          if (((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
               &pUVar5->_padding_)) ||
             (bVar4 = `ULevelInstanceSubsystem::CheckForLoop'::__l8::<lambda_1>::operator()
                                (&local_48,pIVar6), !bVar4)) break;
        }
      }
    }
  }
  uVar3 = local_res8[0];
  pvVar2 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return (bool)uVar3;
}

// Deinitialize @ 147e62b40

void __thiscall ULevelInstanceSubsystem::Deinitialize(ULevelInstanceSubsystem *this)

{
  return;
}

// DoesSupportWorldType @ 147e63ea0

bool __thiscall
ULevelInstanceSubsystem::DoesSupportWorldType(ULevelInstanceSubsystem *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = UWorldSubsystem::DoesSupportWorldType((UWorldSubsystem *)this,param_1);
  if (((!bVar1) && (param_1 != EditorPreview)) && (param_1 != Inactive)) {
    return false;
  }
  return true;
}

// ForEachActorInLevel @ 147e66310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::ForEachActorInLevel
          (ULevelInstanceSubsystem *this,ULevel *param_1,
          TFunctionRef<bool___cdecl(AActor_*)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  longlong local_res10;
  
  pFVar5 = (param_1->Actors).AllocatorInstance.Data;
  iVar2 = (param_1->Actors).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Actors).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar5 == pFVar1) break;
    lVar3 = *(longlong *)pFVar5;
    if (((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
       (local_res10 = lVar3,
       cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10), cVar4 == '\0')
       ) {
      return;
    }
    pFVar5 = pFVar5 + 8;
  }
  return;
}

// ForEachActorInLevelInstance @ 147e663a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::ForEachActorInLevelInstance
          (ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1,
          TFunctionRef<bool___cdecl(AActor_*)> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  ULevel *pUVar7;
  FScriptContainerElement *pFVar8;
  longlong local_res20;
  
  pUVar7 = GetLevelInstanceLevel(this,param_1);
  if (pUVar7 != (ULevel *)0x0) {
    iVar2 = (pUVar7->Actors).ArrayNum;
    pcVar3 = *(code **)param_2;
    uVar4 = *(undefined8 *)&param_2->field_0x8;
    pFVar8 = (pUVar7->Actors).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar7->Actors).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<AActor>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res20);
      }
      if ((pFVar8 == pFVar1) ||
         (((lVar5 = *(longlong *)pFVar8, lVar5 != 0 && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
          (local_res20 = lVar5, cVar6 = (*pcVar3)(uVar4,&local_res20), cVar6 == '\0')))) break;
      pFVar8 = pFVar8 + 8;
    }
  }
  return;
}

// ForEachLevelInstanceAncestors @ 147e66450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::ForEachLevelInstanceAncestors
          (ULevelInstanceSubsystem *this,AActor *param_1,
          TFunctionRef<bool___cdecl(ILevelInstanceInterface_*)> *param_2)

{
  int iVar1;
  char cVar2;
  ULevel *pUVar3;
  ILevelInstanceInterface *pIVar4;
  UClass *pUVar5;
  ILevelInstanceInterface *local_res20;
  
  do {
    pUVar3 = AActor::GetLevel(param_1);
    pIVar4 = GetOwningLevelInstance(this,pUVar3);
    if ((pIVar4 == (ILevelInstanceInterface *)0x0) ||
       (param_1 = (AActor *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4), param_1 == (AActor *)0x0))
    {
LAB_147e664bf:
      param_1 = (AActor *)0x0;
      if (pIVar4 == (ILevelInstanceInterface *)0x0) {
        return;
      }
    }
    else {
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_147e664bf;
    }
    local_res20 = pIVar4;
    cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20);
    if (cVar2 == '\0') {
      return;
    }
  } while( true );
}

// ForEachLevelInstanceAncestors @ 147e66500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::ForEachLevelInstanceAncestors
          (ULevelInstanceSubsystem *this,AActor *param_1,
          TFunctionRef<bool___cdecl(ILevelInstanceInterface_const_*)> *param_2)

{
  int iVar1;
  char cVar2;
  ULevel *pUVar3;
  ILevelInstanceInterface *pIVar4;
  UClass *pUVar5;
  ILevelInstanceInterface *local_res10;
  
  if (param_1 != (AActor *)0x0) {
    while( true ) {
      pUVar3 = AActor::GetLevel(param_1);
      pIVar4 = GetOwningLevelInstance(this,pUVar3);
      if ((pIVar4 == (ILevelInstanceInterface *)0x0) ||
         (param_1 = (AActor *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4), param_1 == (AActor *)0x0
         )) break;
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
        return;
      }
      if ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_) {
        return;
      }
      local_res10 = pIVar4;
      cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10);
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  return;
}

// ForEachLevelInstanceAncestorsAndSelf @ 147e665b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::ForEachLevelInstanceAncestorsAndSelf
          (ULevelInstanceSubsystem *this,AActor *param_1,
          TFunctionRef<bool___cdecl(ILevelInstanceInterface_*)> *param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  UClass *pUVar5;
  ILevelInstanceInterface *pIVar6;
  ULevel *pUVar7;
  ILevelInstanceInterface *local_res10;
  
  if (param_1 != (AActor *)0x0) {
    pUVar5 = Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
    pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar5);
    if ((pIVar6 != (ILevelInstanceInterface *)0x0) &&
       (local_res10 = pIVar6,
       cVar4 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10), cVar4 == '\0')
       ) {
      return;
    }
  }
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pcVar3 = *(code **)param_2;
  do {
    pUVar7 = AActor::GetLevel(param_1);
    pIVar6 = GetOwningLevelInstance(this,pUVar7);
    if ((pIVar6 == (ILevelInstanceInterface *)0x0) ||
       (param_1 = (AActor *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6), param_1 == (AActor *)0x0))
    {
LAB_147e6665a:
      param_1 = (AActor *)0x0;
      if (pIVar6 == (ILevelInstanceInterface *)0x0) {
        return;
      }
    }
    else {
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_147e6665a;
    }
    local_res10 = pIVar6;
    cVar4 = (*pcVar3)(uVar2,&local_res10);
    if (cVar4 == '\0') {
      return;
    }
  } while( true );
}

// ForEachLevelInstanceAncestorsAndSelf @ 147e66690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::ForEachLevelInstanceAncestorsAndSelf
          (ULevelInstanceSubsystem *this,AActor *param_1,
          TFunctionRef<bool___cdecl(ILevelInstanceInterface_const_*)> *param_2)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  ILevelInstanceInterface *pIVar4;
  ULevel *pUVar5;
  undefined8 uVar6;
  code *pcVar7;
  ILevelInstanceInterface *local_res10;
  
  if (param_1 != (AActor *)0x0) {
    pUVar3 = Z_Construct_UClass_ULevelInstanceInterface_NoRegister();
    pIVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
    if (pIVar4 != (ILevelInstanceInterface *)0x0) {
      local_res10 = pIVar4;
      cVar2 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10);
      if (cVar2 == '\0') {
        return;
      }
      pcVar7 = *(code **)param_2;
      uVar6 = *(undefined8 *)&param_2->field_0x8;
      goto LAB_147e666f1;
    }
  }
  pcVar7 = *(code **)param_2;
  uVar6 = *(undefined8 *)&param_2->field_0x8;
  if (param_1 == (AActor *)0x0) {
    return;
  }
LAB_147e666f1:
  while( true ) {
    pUVar5 = AActor::GetLevel(param_1);
    pIVar4 = GetOwningLevelInstance(this,pUVar5);
    if (pIVar4 == (ILevelInstanceInterface *)0x0) {
      return;
    }
    param_1 = (AActor *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4);
    if (param_1 == (AActor *)0x0) {
      return;
    }
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (*(int *)(param_1->_padding_ + 0x38) < iVar1) {
      return;
    }
    if ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_) break;
    local_res10 = pIVar4;
    cVar2 = (*pcVar7)(uVar6,&local_res10);
    if (cVar2 == '\0') {
      return;
    }
  }
  return;
}

// GetLevelInstance @ 147e67f00

ILevelInstanceInterface * __thiscall
ULevelInstanceSubsystem::GetLevelInstance(ULevelInstanceSubsystem *this,FLevelInstanceID *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FLevelInstanceID>
                    ((TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
                      *)&this->RegisteredLevelInstances,
                     (int)(param_1->Hash >> 0x20) * 0x17 + (int)param_1->Hash,param_1);
  if (iVar1 != -1) {
    lVar2 = (longlong)iVar1 * 0x40 + *(longlong *)&(this->RegisteredLevelInstances).field_0x0;
    puVar3 = (undefined8 *)(lVar2 + 0x30);
    if (lVar2 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      return (ILevelInstanceInterface *)*puVar3;
    }
  }
  return (ILevelInstanceInterface *)0x0;
}

// GetLevelInstanceLevel @ 147e680b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall
ULevelInstanceSubsystem::GetLevelInstanceLevel
          (ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1)

{
  char cVar1;
  int iVar2;
  FLevelInstanceID *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cVar1 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  if (cVar1 != '\0') {
    pFVar3 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    iVar2 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FLevelInstanceID>
                      ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                        *)&this->LoadedLevelInstances,
                       (int)(pFVar3->Hash >> 0x20) * 0x17 + (int)pFVar3->Hash,pFVar3);
    if (iVar2 != -1) {
      lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)&this->LoadedLevelInstances;
      plVar5 = (longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
      if (plVar5 != (longlong *)0x0) {
        return *(ULevel **)(*plVar5 + 0x1b0);
      }
    }
  }
  return (ULevel *)0x0;
}

// GetLevelInstanceLevelStreaming @ 147e68140

ULevelStreamingLevelInstance * __thiscall
ULevelInstanceSubsystem::GetLevelInstanceLevelStreaming
          (ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1)

{
  char cVar1;
  int iVar2;
  FLevelInstanceID *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  cVar1 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  if (cVar1 != '\0') {
    pFVar3 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    iVar2 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FLevelInstanceID>
                      ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                        *)&this->LoadedLevelInstances,
                       (int)(pFVar3->Hash >> 0x20) * 0x17 + (int)pFVar3->Hash,pFVar3);
    if (iVar2 != -1) {
      lVar4 = (longlong)iVar2 * 0x40 + *(longlong *)&this->LoadedLevelInstances;
      puVar5 = (undefined8 *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)0x0;
      }
      if (puVar5 != (undefined8 *)0x0) {
        return (ULevelStreamingLevelInstance *)*puVar5;
      }
    }
  }
  return (ULevelStreamingLevelInstance *)0x0;
}

// GetOwningLevel @ 147e68fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __cdecl ULevelInstanceSubsystem::GetOwningLevel(ULevel *param_1,bool param_2)

{
  int iVar1;
  double dVar2;
  ULevel *pUVar3;
  code *pcVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FLevelAnnotation *pFVar7;
  ULevel *pUVar8;
  ILevelInstanceInterface *pIVar9;
  AActor *this;
  FPlatformRWLock *SRWLock;
  FLevelAnnotation this_00;
  bool bVar10;
  FLevelAnnotation local_res8;
  FLevelAnnotation local_res18 [2];
  
  pUVar8 = (ULevel *)0x0;
  if (param_2) {
    pUVar8 = param_1;
  }
  do {
    pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
    pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar5);
    if ((UObject *)((__m128d *)&param_1->OwningWorld)->m128d_f64[0] == pUVar6) {
      return pUVar8;
    }
    if (((uint)param_1->_padding_ >> 0x1e & 1) != 0) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3914447087793601209>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                          ,0x547,"IsValid(Level)");
      if (!bVar10) {
        return pUVar8;
      }
      pcVar4 = (code *)swi(3);
      pUVar8 = (ULevel *)(*pcVar4)();
      return pUVar8;
    }
    dVar2 = ((__m128d *)&param_1->OwningWorld)->m128d_f64[0];
    if (dVar2 == 0.0) {
      return pUVar8;
    }
    pUVar3 = *(ULevel **)((longlong)dVar2 + 0x30);
    if (pUVar3 == (ULevel *)0x0) {
      bVar10 = param_1 == (ULevel *)0x0;
    }
    else {
      bVar10 = pUVar3 == param_1;
    }
    if (bVar10) {
      return pUVar8;
    }
    AcquireSRWLockShared((PSRWLOCK)&ULevelStreaming::LevelAnnotations.AnnotationCacheCritical);
    SRWLock = &ULevelStreaming::LevelAnnotations.AnnotationCacheCritical;
    this_00 = ULevelStreaming::LevelAnnotations.AnnotationCacheValue;
    if (param_1 != (ULevel *)ULevelStreaming::LevelAnnotations.AnnotationCacheKey) {
      ReleaseSRWLockShared((PSRWLOCK)&ULevelStreaming::LevelAnnotations.AnnotationCacheCritical);
      AcquireSRWLockShared((PSRWLOCK)&ULevelStreaming::LevelAnnotations.AnnotationMapCritical);
      pFVar7 = TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
               ::Find((TMapBase<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,ULevelStreaming::FLevelAnnotation,0>_>
                       *)&ULevelStreaming::LevelAnnotations.AnnotationMap,(UObjectBase *)param_1);
      if (pFVar7 == (FLevelAnnotation *)0x0) {
        local_res18[0].LevelStreaming = (ULevelStreaming *)0x0;
        FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::SetAnnotationCacheKeyAndValue
                  (&ULevelStreaming::LevelAnnotations,(UObjectBase *)param_1,local_res18);
        this_00.LevelStreaming = (ULevelStreaming *)(ULevel *)0x0;
      }
      else {
        local_res8.LevelStreaming = pFVar7->LevelStreaming;
        FUObjectAnnotationSparse<ULevelStreaming::FLevelAnnotation,0>::SetAnnotationCacheKeyAndValue
                  (&ULevelStreaming::LevelAnnotations,(UObjectBase *)param_1,&local_res8);
        this_00.LevelStreaming = (ULevelStreaming *)pFVar7->LevelStreaming;
      }
      SRWLock = &ULevelStreaming::LevelAnnotations.AnnotationMapCritical;
    }
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    if ((ULevel *)this_00.LevelStreaming == (ULevel *)0x0) {
      return pUVar8;
    }
    if (((ULevel *)
         (((ULevel *)this_00.LevelStreaming)->PrecomputedVolumeDistanceField).VolumeBox.Min.
         field0_0x0._s_0.X != param_1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LevelAnnotation.LevelStreaming->GetLoadedLevel() == Level",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelStreaming.cpp"
                            ,0x54e,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (ULevel *)(*pcVar4)();
      return pUVar8;
    }
    pUVar5 = ULevelStreamingLevelInstance::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((((*(int *)(((ULevel *)this_00.LevelStreaming)->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((ULevel *)this_00.LevelStreaming)->_padding_ + 0x30) +
           (longlong)iVar1 * 8) != &pUVar5->_padding_)) ||
        (pIVar9 = ULevelStreamingLevelInstance::GetLevelInstance
                            ((ULevelStreamingLevelInstance *)this_00.LevelStreaming),
        pIVar9 == (ILevelInstanceInterface *)0x0)) ||
       (this = (AActor *)(**(code **)((longlong)*pIVar9 + 8))(pIVar9), this == (AActor *)0x0)) {
LAB_147e691a5:
      pUVar5 = Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (*(int *)(((ULevel *)this_00.LevelStreaming)->_padding_ + 0x38) < iVar1) {
        return pUVar8;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(((ULevel *)this_00.LevelStreaming)->_padding_ + 0x30) +
           (longlong)iVar1 * 8) != &pUVar5->_padding_) {
        return pUVar8;
      }
      pUVar6 = FSoftObjectPath::ResolveObject
                         ((FSoftObjectPath *)&((ULevel *)this_00.LevelStreaming)->LevelBuildDataId);
      if (pUVar6 == (UObject *)0x0) {
        return pUVar8;
      }
      pUVar5 = ULevel::StaticClass();
      param_1 = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar6,pUVar5);
    }
    else {
      pUVar5 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_147e691a5;
      param_1 = AActor::GetLevel(this);
    }
    if (param_1 == (ULevel *)0x0) {
      return pUVar8;
    }
    pUVar8 = param_1;
    if (!param_2) {
      return param_1;
    }
  } while( true );
}

// GetOwningLevelInstance @ 147e69250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ILevelInstanceInterface * __thiscall
ULevelInstanceSubsystem::GetOwningLevelInstance(ULevelInstanceSubsystem *this,ULevel *param_1)

{
  int iVar1;
  ULevelStreamingLevelInstance *this_00;
  UClass *pUVar2;
  longlong lVar3;
  ILevelInstanceInterface *pIVar4;
  
  this_00 = (ULevelStreamingLevelInstance *)FLevelUtils::FindStreamingLevel(param_1);
  if (this_00 != (ULevelStreamingLevelInstance *)0x0) {
    while( true ) {
      pUVar2 = ULevelStreamingLevelInstance::StaticClass();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        pIVar4 = ULevelStreamingLevelInstance::GetLevelInstance(this_00);
        return pIVar4;
      }
      if (this_00 == (ULevelStreamingLevelInstance *)0x0) break;
      pUVar2 = Z_Construct_UClass_UWorldPartitionLevelStreamingDynamic_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if (*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) {
        return (ILevelInstanceInterface *)0x0;
      }
      if ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_) {
        return (ILevelInstanceInterface *)0x0;
      }
      lVar3 = (**(code **)(*(longlong *)this_00 + 0x308))(this_00);
      if (lVar3 == 0) {
        return (ILevelInstanceInterface *)0x0;
      }
      this_00 = (ULevelStreamingLevelInstance *)
                FLevelUtils::FindStreamingLevel(*(ULevel **)(lVar3 + 0x30));
      if (this_00 == (ULevelStreamingLevelInstance *)0x0) {
        return (ILevelInstanceInterface *)0x0;
      }
    }
  }
  return (ILevelInstanceInterface *)0x0;
}

// GetPrivateStaticClass @ 147e6a0f0

UClass * __cdecl ULevelInstanceSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceSubsystem",
               &Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton,
               StaticRegisterNativesULevelInstanceSubsystem,0x1d0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelInstanceSubsystem>,
               InternalVTableHelperCtorCaller<ULevelInstanceSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceSubsystem.InnerSingleton;
}

// Initialize @ 147e6d470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::Initialize(ULevelInstanceSubsystem *this,FSubsystemCollectionBase *param_1)

{
  int iVar1;
  UWorld *this_00;
  bool bVar2;
  UClass *pUVar3;
  ULevelInstanceSubsystem *pUStackX_8;
  
  this_00 = (UWorld *)this->_padding_;
  if (this_00 != (UWorld *)0x0) {
    pUVar3 = Z_Construct_UClass_UWorld_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (((this->_padding_ & 1) == 0) && (this_00->bIsWorldInitialized != '\0')) {
        (**(code **)(this->_padding_ + 0x2c8))(this);
        if ((this->_padding_ & 1) == 0) {
          pUStackX_8 = this;
          `UWorldSubsystem::EnsureHasCalledPostInitialize'::__l2::<lambda_1>::operator()
                    (&pUStackX_8);
        }
      }
      if ((this->_padding_ & 2) == 0) {
        bVar2 = UWorld::HasBegunPlay(this_00);
        if (bVar2) {
          (**(code **)(this->_padding_ + 0x2d8))(this,this_00);
          if ((this->_padding_ & 2) == 0) {
            pUStackX_8 = this;
            `UWorldSubsystem::EnsureHasCalledBeginPlay'::__l2::<lambda_1>::operator()(&pUStackX_8);
          }
        }
      }
    }
  }
  return;
}

// IsLoaded @ 147e6e100

bool __thiscall
ULevelInstanceSubsystem::IsLoaded(ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1)

{
  char cVar1;
  int iVar2;
  FLevelInstanceID *pFVar3;
  
  cVar1 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  if (cVar1 != '\0') {
    pFVar3 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    iVar2 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FLevelInstanceID>
                      ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                        *)&this->LoadedLevelInstances,
                       (int)(pFVar3->Hash >> 0x20) * 0x17 + (int)pFVar3->Hash,pFVar3);
    if (iVar2 != -1) {
      return true;
    }
  }
  return false;
}

// IsLoading @ 147e6e170

bool __thiscall
ULevelInstanceSubsystem::IsLoading(ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1)

{
  char cVar1;
  int iVar2;
  FLevelInstanceID *pFVar3;
  
  cVar1 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  if (cVar1 != '\0') {
    pFVar3 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    iVar2 = TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
            FindIndexByHash<FLevelInstanceID>
                      (&this->LoadingLevelInstances,
                       (int)(pFVar3->Hash >> 0x20) * 0x17 + (int)pFVar3->Hash,pFVar3);
    if (iVar2 != -1) {
      return true;
    }
  }
  return false;
}

// LoadLevelInstance @ 147e6ea80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::LoadLevelInstance
          (ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  AActor *pAVar5;
  FLevelInstanceID *pFVar6;
  FUObjectItem *pFVar7;
  longlong lVar8;
  ULevelStreamingLevelInstance *pUVar9;
  UWorld *this_00;
  
  if ((param_1 == (ILevelInstanceInterface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LevelInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                         ,0x23c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar5 = CastChecked<AActor,ILevelInstanceInterface>(param_1);
  cVar3 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
  if (cVar3 != '\0') {
    pFVar6 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
    iVar4 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FLevelInstanceID>
                      ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                        *)&this->LoadedLevelInstances,
                       (int)(pFVar6->Hash >> 0x20) * 0x17 + (int)pFVar6->Hash,pFVar6);
    if (iVar4 != -1) {
      return;
    }
  }
  if ((pAVar5 == (AActor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((uint)pAVar5->_padding_ >> 0x1e & 1) == 0) {
    iVar4 = *(int *)((longlong)&pAVar5->_padding_ + 4);
    if ((iVar4 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (iVar4 < GUObjectArray.ObjObjects.NumElements) {
      pFVar7 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar4);
    }
    else {
      pFVar7 = (FUObjectItem *)0x0;
    }
    if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) &&
       (lVar8 = (**(code **)((longlong)*param_1 + 0x28))(param_1), *(longlong *)(lVar8 + 8) != 0)) {
      cVar3 = (**(code **)((longlong)*param_1 + 0x18))(param_1);
      if (cVar3 == '\0') {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3959935657656188349>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                           ,0x243,"LevelInstance->HasValidLevelInstanceID()");
        if (bVar2) {
code_r0x000147e6ed6e:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        pFVar6 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
        iVar4 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FLevelInstanceID>
                          ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                            *)&this->LoadedLevelInstances,
                           (int)(pFVar6->Hash >> 0x20) * 0x17 + (int)pFVar6->Hash,pFVar6);
        if ((iVar4 != -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LoadedLevelInstances.Contains(LevelInstanceID)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                               ,0x249,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
                FindIndexByHash<FLevelInstanceID>
                          (&this->LoadingLevelInstances,
                           (int)(pFVar6->Hash >> 0x20) * 0x17 + (int)pFVar6->Hash,pFVar6);
        if ((iVar4 != -1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!LoadingLevelInstances.Contains(LevelInstanceID)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                               ,0x24a,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
        Emplace<FLevelInstanceID_const_&>
                  (&this->LoadingLevelInstances,(FLevelInstanceID *)&stack0x00000010,(bool *)pFVar6)
        ;
        pUVar9 = ULevelStreamingLevelInstance::LoadInstance(param_1);
        if (pUVar9 == (ULevelStreamingLevelInstance *)0x0) {
          if (*(int *)&(this->LoadingLevelInstances).Elements.field_0x8 !=
              *(int *)&(this->LoadingLevelInstances).Elements.field_0x34) {
            TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
            RemoveImpl<FLevelInstanceID>
                      (&this->LoadingLevelInstances,
                       (int)(pFVar6->Hash >> 0x20) * 0x17 + (int)pFVar6->Hash,pFVar6);
          }
        }
        else {
          this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
          bVar2 = UWorld::IsGameWorld(this_00);
          if (((bVar2) && (bVar2 = IsLoading(this,param_1), bVar2)) &&
             (*(longlong *)&pUVar9->field_0x1b0 != 0)) {
            RegisterLoadedLevelStreamingLevelInstance(this,pUVar9);
            bVar2 = IsLoading(this,param_1);
            if ((bVar2) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!IsLoading(LevelInstance)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                                   ,599,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            bVar2 = IsLoaded(this,param_1);
            if ((!bVar2) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsLoaded(LevelInstance)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                                   ,600,L""), bVar2)) goto code_r0x000147e6ed6e;
          }
        }
      }
    }
  }
  return;
}

// OnUpdateStreamingState @ 147e71cd0

void __thiscall ULevelInstanceSubsystem::OnUpdateStreamingState(ULevelInstanceSubsystem *this)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId270,"ULevelInstanceSubsystem::UpdateStreamingState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
               ,0x10e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId270);
  }
  if ((*(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x20 !=
       *(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x4c) ||
     ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4))) {
    UpdateStreamingStateInternal
              ((ULevelInstanceSubsystem *)&this[-1].RegisteredLevelInstances.field_0x18);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterLevelInstance @ 147e770d0

FLevelInstanceID * __thiscall
ULevelInstanceSubsystem::RegisterLevelInstance
          (ULevelInstanceSubsystem *this,FLevelInstanceID *__return_storage_ptr__,
          ILevelInstanceInterface *param_1)

{
  code *pcVar1;
  bool bVar2;
  FLevelInstanceID *pFVar3;
  ILevelInstanceInterface **ppIVar4;
  
  FLevelInstanceID::FLevelInstanceID(__return_storage_ptr__,this,param_1);
  if ((((__return_storage_ptr__->ContainerID).Guid.D == 0 &&
       (__return_storage_ptr__->ContainerID).Guid.C == 0) &&
      (__return_storage_ptr__->ContainerID).Guid.B == 0) &&
      (__return_storage_ptr__->ContainerID).Guid.A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelInstanceID.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                       ,0xc5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLevelInstanceID *)(*pcVar1)();
      return pFVar3;
    }
  }
  ppIVar4 = TMapBase<FLevelInstanceID,ILevelInstanceInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>_>
            ::FindOrAddImpl<FLevelInstanceID_const_&>
                      ((TMapBase<FLevelInstanceID,ILevelInstanceInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>_>
                        *)&this->RegisteredLevelInstances,
                       (int)(__return_storage_ptr__->Hash >> 0x20) * 0x17 +
                       (int)__return_storage_ptr__->Hash,__return_storage_ptr__);
  if (((GIsReinstancing == (atomic<bool>)0x0) && (*ppIVar4 != (ILevelInstanceInterface *)0x0)) &&
     (*ppIVar4 != param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsReinstancing || Value == nullptr || Value == LevelInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                       ,199,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLevelInstanceID *)(*pcVar1)();
      return pFVar3;
    }
  }
  *ppIVar4 = param_1;
  return __return_storage_ptr__;
}

// RegisterLoadedLevelStreamingLevelInstance @ 147e771b0

void __thiscall
ULevelInstanceSubsystem::RegisterLoadedLevelStreamingLevelInstance
          (ULevelInstanceSubsystem *this,ULevelStreamingLevelInstance *param_1)

{
  TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator> *this_00;
  TMap<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>_>
  *this_01;
  code *pcVar1;
  int iVar2;
  int iVar3;
  ILevelInstanceInterface *pIVar4;
  undefined1 *puVar5;
  ForElementType<FSetElementId> FVar6;
  undefined8 uVar7;
  ulong64 *puVar8;
  ulong64 uVar9;
  bool bVar10;
  TKeyInitializer<FLevelInstanceID_const_&> local_res8;
  FLevelInstanceID *local_res10;
  FLevelInstanceID local_58;
  
  local_58.Hash = (param_1->LevelInstanceID).Hash;
  local_58.ContainerID.Guid.A = (param_1->LevelInstanceID).ContainerID.Guid.A;
  local_58.ContainerID.Guid.B = (param_1->LevelInstanceID).ContainerID.Guid.B;
  local_58.ContainerID.Guid.C = (param_1->LevelInstanceID).ContainerID.Guid.C;
  local_58.ContainerID.Guid.D = (param_1->LevelInstanceID).ContainerID.Guid.D;
  local_58.ActorName = (param_1->LevelInstanceID).ActorName;
  ::FString::FString(&local_58.PackageShortName,&(param_1->LevelInstanceID).PackageShortName);
  this_00 = &this->LoadingLevelInstances;
  if (*(int *)&(this->LoadingLevelInstances).Elements.field_0x8 !=
      *(int *)&(this->LoadingLevelInstances).Elements.field_0x34) {
    FVar6 = (this->LoadingLevelInstances).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->LoadingLevelInstances).Hash;
    }
    uVar9 = local_58.Hash;
    uVar7 = local_58.PackageShortName.Data._8_8_;
    for (iVar2 = *(int *)((longlong)FVar6 +
                         (ulonglong)
                         ((this->LoadingLevelInstances).HashSize - 1U &
                         (int)(local_58.Hash >> 0x20) * 0x17 + (int)local_58.Hash) * 4); iVar2 != -1
        ; iVar2 = *(int *)((longlong)iVar2 * 0x38 + 0x30 + *(longlong *)&this_00->Elements)) {
      puVar8 = (ulong64 *)(*(longlong *)&this_00->Elements + (longlong)iVar2 * 0x38);
      if (*puVar8 == uVar9) {
        if ((((local_58.ContainerID.Guid.D == *(uint *)((longlong)puVar8 + 0x14) &&
              local_58.ContainerID.Guid.C == (uint)puVar8[2]) &&
             local_58.ContainerID.Guid.B == *(uint *)((longlong)puVar8 + 0xc)) &&
             local_58.ContainerID.Guid.A == (uint)puVar8[1]) &&
           (*(FName *)(puVar8 + 3) == local_58.ActorName)) {
          iVar3 = (int)puVar8[5];
          if (iVar3 == (int)uVar7) {
            if (1 < iVar3) {
              iVar3 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)puVar8[4],
                                 (wchar_t *)local_58.PackageShortName.Data.AllocatorInstance.Data);
              bVar10 = iVar3 == 0;
              uVar7 = local_58.PackageShortName.Data._8_8_;
              uVar9 = local_58.Hash;
              goto LAB_147e772bd;
            }
          }
          else {
            bVar10 = iVar3 + (int)uVar7 == 1;
LAB_147e772bd:
            if (!bVar10) goto LAB_147e772c4;
          }
          if (iVar2 != -1) goto LAB_147e77305;
          break;
        }
      }
LAB_147e772c4:
    }
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("LoadingLevelInstances.Contains(LevelInstanceID)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                      ,0x174,L"");
  uVar7 = local_58.PackageShortName.Data._8_8_;
  uVar9 = local_58.Hash;
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_147e77305:
  if (*(int *)&(this->LoadingLevelInstances).Elements.field_0x8 !=
      *(int *)&(this->LoadingLevelInstances).Elements.field_0x34) {
    TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
    RemoveImpl<FLevelInstanceID>(this_00,(int)(uVar9 >> 0x20) * 0x17 + (int)uVar9,&local_58);
    uVar7 = local_58.PackageShortName.Data._8_8_;
    uVar9 = local_58.Hash;
  }
  this_01 = &this->LoadedLevelInstances;
  if (*(int *)&(this->LoadedLevelInstances).field_0x8 !=
      *(int *)&(this->LoadedLevelInstances).field_0x34) {
    puVar5 = *(undefined1 **)&(this->LoadedLevelInstances).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->LoadedLevelInstances).field_0x38;
    }
    for (iVar2 = *(int *)(puVar5 + (ulonglong)
                                   (*(int *)&(this->LoadedLevelInstances).field_0x48 - 1U &
                                   (int)(uVar9 >> 0x20) * 0x17 + (int)uVar9) * 4); iVar2 != -1;
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + *(longlong *)&this_01->field_0x0)) {
      puVar8 = (ulong64 *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar2 * 0x40);
      if (*puVar8 == uVar9) {
        if ((((local_58.ContainerID.Guid.D == *(uint *)((longlong)puVar8 + 0x14) &&
              local_58.ContainerID.Guid.C == (uint)puVar8[2]) &&
             local_58.ContainerID.Guid.B == *(uint *)((longlong)puVar8 + 0xc)) &&
             local_58.ContainerID.Guid.A == (uint)puVar8[1]) &&
           (*(FName *)(puVar8 + 3) == local_58.ActorName)) {
          iVar3 = (int)puVar8[5];
          if (iVar3 == (int)uVar7) {
            if (1 < iVar3) {
              iVar3 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)puVar8[4],
                                 (wchar_t *)local_58.PackageShortName.Data.AllocatorInstance.Data);
              bVar10 = iVar3 == 0;
              uVar7 = local_58.PackageShortName.Data._8_8_;
              uVar9 = local_58.Hash;
              goto LAB_147e773ed;
            }
          }
          else {
            bVar10 = iVar3 + (int)uVar7 == 1;
LAB_147e773ed:
            if (!bVar10) goto LAB_147e773f4;
          }
          if ((iVar2 != -1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!LoadedLevelInstances.Contains(LevelInstanceID)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                                  ,0x176,L""), bVar10)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          break;
        }
      }
LAB_147e773f4:
    }
  }
  local_res10 = &local_58;
  TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FLevelInstanceID_const_&>_>
            ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
              *)this_01,&local_res8,(bool *)&local_res10);
  *(ULevelStreamingLevelInstance **)
   ((longlong)(int)local_res8.Key * 0x40 + 0x30 + *(longlong *)&this_01->field_0x0) = param_1;
  pIVar4 = ULevelStreamingLevelInstance::GetLevelInstance(param_1);
  if (pIVar4 == (ILevelInstanceInterface *)0x0) {
    if (*(int *)&(this->LevelInstancesToUnload).Elements.field_0x8 !=
        *(int *)&(this->LevelInstancesToUnload).Elements.field_0x34) {
      FVar6 = (this->LevelInstancesToUnload).Hash.SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&(this->LevelInstancesToUnload).Hash;
      }
      uVar9 = local_58.Hash;
      uVar7 = local_58.PackageShortName.Data._8_8_;
      for (iVar2 = *(int *)((longlong)FVar6 +
                           (ulonglong)
                           ((this->LevelInstancesToUnload).HashSize - 1U &
                           (int)(local_58.Hash >> 0x20) * 0x17 + (int)local_58.Hash) * 4);
          iVar2 != -1;
          iVar2 = *(int *)((longlong)iVar2 * 0x38 + 0x30 +
                          *(longlong *)&(this->LevelInstancesToUnload).Elements)) {
        puVar8 = (ulong64 *)
                 (*(longlong *)&(this->LevelInstancesToUnload).Elements + (longlong)iVar2 * 0x38);
        if (*puVar8 == uVar9) {
          if ((((local_58.ContainerID.Guid.D == *(uint *)((longlong)puVar8 + 0x14) &&
                local_58.ContainerID.Guid.C == (uint)puVar8[2]) &&
               local_58.ContainerID.Guid.B == *(uint *)((longlong)puVar8 + 0xc)) &&
               local_58.ContainerID.Guid.A == (uint)puVar8[1]) &&
             (*(FName *)(puVar8 + 3) == local_58.ActorName)) {
            iVar3 = (int)puVar8[5];
            if (iVar3 == (int)uVar7) {
              if (1 < iVar3) {
                iVar3 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)puVar8[4],
                                   (wchar_t *)local_58.PackageShortName.Data.AllocatorInstance.Data)
                ;
                bVar10 = iVar3 == 0;
                uVar7 = local_58.PackageShortName.Data._8_8_;
                uVar9 = local_58.Hash;
                goto LAB_147e775df;
              }
            }
            else {
              bVar10 = iVar3 + (int)uVar7 == 1;
LAB_147e775df:
              if (!bVar10) goto LAB_147e775e6;
            }
            if (iVar2 != -1) goto LAB_147e77627;
            break;
          }
        }
LAB_147e775e6:
      }
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LevelInstancesToUnload.Contains(LevelInstanceID)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                        ,0x184,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_147e77627;
  }
  puVar8 = (ulong64 *)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
  if (*puVar8 == local_58.Hash) {
    if ((((local_58.ContainerID.Guid.D != *(uint *)((longlong)puVar8 + 0x14) ||
          local_58.ContainerID.Guid.C != (uint)puVar8[2]) ||
         local_58.ContainerID.Guid.B != *(uint *)((longlong)puVar8 + 0xc)) ||
         local_58.ContainerID.Guid.A != (uint)puVar8[1]) ||
       (*(FName *)(puVar8 + 3) != local_58.ActorName)) goto LAB_147e774dd;
    iVar2 = (int)puVar8[5];
    if (iVar2 == local_58.PackageShortName.Data.ArrayNum) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)puVar8[4],
                           (wchar_t *)local_58.PackageShortName.Data.AllocatorInstance.Data);
        bVar10 = iVar2 == 0;
        goto LAB_147e774d6;
      }
    }
    else {
      bVar10 = iVar2 + local_58.PackageShortName.Data.ArrayNum == 1;
LAB_147e774d6:
      if (!bVar10) goto LAB_147e774dd;
    }
  }
  else {
LAB_147e774dd:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LevelInstance->GetLevelInstanceID() == LevelInstanceID",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                        ,0x17e,L"");
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4);
LAB_147e77627:
  if (local_58.PackageShortName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PackageShortName.Data.AllocatorInstance.Data);
  }
  return;
}

// RequestLoadLevelInstance @ 147e7bc00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::RequestLoadLevelInstance
          (ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  AActor *pAVar4;
  FUObjectItem *pFVar5;
  longlong lVar6;
  FLevelInstanceID *pFVar7;
  uint uVar8;
  undefined1 *puVar9;
  FUObjectItem *pFVar10;
  FUObjectItem *pFVar11;
  ILevelInstanceInterface *local_res10;
  byte local_res18 [16];
  ILevelInstanceInterface **local_28;
  byte *local_20;
  
  pFVar11 = (FUObjectItem *)0x0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (param_1 == (ILevelInstanceInterface *)0x0) {
LAB_147e7bcbd:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LevelInstance && IsValidChecked(CastChecked<AActor>(LevelInstance)) && !CastChecked<AActor>(LevelInstance)->IsUnreachable()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pAVar4 = CastChecked<AActor,ILevelInstanceInterface>(param_1);
    if ((pAVar4 == (AActor *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Test",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                           ,0x760,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((uint)pAVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_147e7bcbd;
    pAVar4 = CastChecked<AActor,ILevelInstanceInterface>(local_res10);
    iVar3 = *(int *)((longlong)&pAVar4->_padding_ + 4);
    if ((iVar3 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x443,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = pFVar11;
    if (iVar3 < GUObjectArray.ObjObjects.NumElements) {
      pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar3);
    }
    if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)
    goto LAB_147e7bcbd;
  }
  lVar6 = (**(code **)((longlong)*local_res10 + 0x28))();
  if (*(longlong *)(lVar6 + 8) != 0) {
    pFVar7 = (FLevelInstanceID *)(**(code **)((longlong)*local_res10 + 0x10))();
    if (*(int *)&(this->LevelInstancesToUnload).Elements.field_0x8 !=
        *(int *)&(this->LevelInstancesToUnload).Elements.field_0x34) {
      TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
      RemoveImpl<FLevelInstanceID>
                (&this->LevelInstancesToUnload,
                 (int)(pFVar7->Hash >> 0x20) * 0x17 + (int)pFVar7->Hash,pFVar7);
    }
    bVar2 = IsLoading(this,local_res10);
    if (!bVar2) {
      uVar8 = ((uint)((ulonglong)local_res10 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res10 >> 4)
              ) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      pFVar5 = pFVar11;
      if (*(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x8 !=
          *(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x34) {
        puVar9 = *(undefined1 **)&(this->LevelInstancesToLoadOrUpdate).field_0x40;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = &(this->LevelInstancesToLoadOrUpdate).field_0x38;
        }
        iVar3 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x48 - 1U &
                                  (uVar8 >> 0x10 ^ uVar8)) * 4);
        if (iVar3 != -1) {
          do {
            pFVar5 = (FUObjectItem *)
                     (*(longlong *)&this->LevelInstancesToLoadOrUpdate + (longlong)iVar3 * 0x18);
            if (*(ILevelInstanceInterface **)
                 (*(longlong *)&this->LevelInstancesToLoadOrUpdate + (longlong)iVar3 * 0x18) ==
                local_res10) break;
            iVar3 = pFVar5->SerialNumber;
            pFVar5 = pFVar11;
          } while (iVar3 != -1);
        }
      }
      pFVar10 = (FUObjectItem *)&pFVar5->field1_0x8;
      if (pFVar5 == (FUObjectItem *)0x0) {
        pFVar10 = pFVar11;
      }
      bVar2 = IsLoaded(this,local_res10);
      if ((bVar2) && (local_res18[0] == 0)) {
        if (pFVar10 != (FUObjectItem *)0x0) {
          if ((pFVar10->field0_0x0).RemoteId == '\0') {
            return;
          }
LAB_147e7be0a:
          (pFVar10->field0_0x0).RemoteId = (pFVar10->field0_0x0).RemoteId | local_res18[0];
          return;
        }
      }
      else {
        if (pFVar10 != (FUObjectItem *)0x0) goto LAB_147e7be0a;
        local_28 = &local_res10;
        local_20 = local_res18;
        TSet<TTuple<ILevelInstanceInterface_*,bool>,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<ILevelInstanceInterface_*_const_&,bool_const_&>_>
                  ((TSet<TTuple<ILevelInstanceInterface_*,bool>,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>,FDefaultSetAllocator>
                    *)&this->LevelInstancesToLoadOrUpdate,
                   (TPairInitializer<ILevelInstanceInterface_*_const_&,bool_const_&> *)
                   (local_res18 + 8),(bool *)&local_28);
      }
    }
  }
  return;
}

// RequestUnloadLevelInstance @ 147e7be60

void __thiscall
ULevelInstanceSubsystem::RequestUnloadLevelInstance
          (ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1)

{
  int iVar1;
  FLevelInstanceID *pFVar2;
  uint uVar3;
  ILevelInstanceInterface *local_res8;
  
  pFVar2 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  iVar1 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FLevelInstanceID>
                    ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                      *)&this->LoadedLevelInstances,
                     (int)(pFVar2->Hash >> 0x20) * 0x17 + (int)pFVar2->Hash,pFVar2);
  if (iVar1 == -1) {
    iVar1 = TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
            FindIndexByHash<FLevelInstanceID>
                      (&this->LoadingLevelInstances,
                       (int)(pFVar2->Hash >> 0x20) * 0x17 + (int)pFVar2->Hash,pFVar2);
    if (iVar1 == -1) goto LAB_147e7bee0;
  }
  TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
  Emplace<FLevelInstanceID_const_&>
            (&this->LevelInstancesToUnload,(FLevelInstanceID *)&local_res8,(bool *)pFVar2);
LAB_147e7bee0:
  if (*(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x8 !=
      *(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x34) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    local_res8 = param_1;
    TSet<TTuple<ILevelInstanceInterface_*,bool>,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>,FDefaultSetAllocator>
    ::RemoveImpl<ILevelInstanceInterface_const_*>
              ((TSet<TTuple<ILevelInstanceInterface_*,bool>,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>,FDefaultSetAllocator>
                *)&this->LevelInstancesToLoadOrUpdate,uVar3 >> 0x10 ^ uVar3,&local_res8);
  }
  return;
}

// StaticRegisterNativesULevelInstanceSubsystem @ 147e82350

void __cdecl ULevelInstanceSubsystem::StaticRegisterNativesULevelInstanceSubsystem(void)

{
  return;
}

// UnloadLevelInstance @ 147e83740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULevelInstanceSubsystem::UnloadLevelInstance
          (ULevelInstanceSubsystem *this,FLevelInstanceID *param_1)

{
  TMap<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>_>
  *this_00;
  uint uVar1;
  ULevelStreaming *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UWorld *pUVar5;
  undefined1 *puVar6;
  uint *puVar7;
  longlong lVar8;
  
  pUVar5 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  bVar3 = UWorld::IsGameWorld(pUVar5);
  if (!bVar3) {
    return;
  }
  this_00 = &this->LoadedLevelInstances;
  uVar4 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FLevelInstanceID>
                    ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                      *)this_00,(int)(param_1->Hash >> 0x20) * 0x17 + (int)param_1->Hash,param_1);
  if (uVar4 == 0xffffffff) {
    return;
  }
  this_01 = *(ULevelStreaming **)
             ((longlong)(int)uVar4 * 0x40 + 0x30 + *(longlong *)&this_00->field_0x0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&(this->LoadedLevelInstances).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->LoadedLevelInstances).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->LoadedLevelInstances).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) goto LAB_147e83811;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_147e83811:
  puVar6 = *(undefined1 **)&(this->LoadedLevelInstances).field_0x40;
  lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)(int)uVar4 * 0x40;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &(this->LoadedLevelInstances).field_0x38;
  }
  puVar7 = (uint *)(puVar6 + (longlong)*(int *)(lVar8 + 0x3c) * 4);
  do {
    uVar1 = *puVar7;
    if (uVar1 == 0xffffffff) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (uVar1 == uVar4) {
      *puVar7 = *(uint *)(lVar8 + 0x38);
      TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this_00,uVar4,1);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,uVar4,1);
      bVar3 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this_01,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (bVar3) {
        pUVar5 = (UWorld *)0x0;
      }
      else {
        pUVar5 = CastChecked<UWorld,UObject>((UObject *)this_01->_padding_);
      }
      bVar3 = UWorld::IsGameWorld(pUVar5);
      if (!bVar3) {
        return;
      }
      (**(code **)(this_01->_padding_ + 0x2d0))(this_01,0);
      if (this_01->bShouldBeVisible != '\0') {
        this_01->field_0xf8 = this_01->field_0xf8 & 0xf7;
        bVar3 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)this_01,RF_ArchetypeObject|RF_ClassDefaultObject);
        if ((!bVar3) &&
           (pUVar5 = CastChecked<UWorld,UObject>((UObject *)this_01->_padding_),
           pUVar5 != (UWorld *)0x0)) {
          UWorld::UpdateStreamingLevelShouldBeConsidered(pUVar5,this_01);
        }
      }
      if (this_01->bIsRequestingUnloadAndRemoval != 0) {
        return;
      }
      this_01->field_0xf8 = this_01->field_0xf8 | 1;
      bVar3 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this_01,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (bVar3) {
        return;
      }
      pUVar5 = CastChecked<UWorld,UObject>((UObject *)this_01->_padding_);
      if (pUVar5 == (UWorld *)0x0) {
        return;
      }
      UWorld::UpdateStreamingLevelShouldBeConsidered(pUVar5,this_01);
      return;
    }
    puVar7 = (uint *)(*(longlong *)&this_00->field_0x0 + 0x38 + (longlong)(int)uVar1 * 0x40);
  } while( true );
}

// UnregisterLevelInstance @ 147e83a60

void __thiscall
ULevelInstanceSubsystem::UnregisterLevelInstance
          (ULevelInstanceSubsystem *this,ILevelInstanceInterface *param_1)

{
  FLevelInstanceID *pFVar1;
  
  pFVar1 = (FLevelInstanceID *)(**(code **)((longlong)*param_1 + 0x10))(param_1);
  if (*(int *)&(this->RegisteredLevelInstances).field_0x8 !=
      *(int *)&(this->RegisteredLevelInstances).field_0x34) {
    TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FLevelInstanceID>
              ((TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
                *)&this->RegisteredLevelInstances,
               (int)(pFVar1->Hash >> 0x20) * 0x17 + (int)pFVar1->Hash,pFVar1);
    return;
  }
  return;
}

// UpdateStreamingStateInternal @ 147e85090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall ULevelInstanceSubsystem::UpdateStreamingStateInternal(ULevelInstanceSubsystem *this)

{
  TMap<ILevelInstanceInterface_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>_>
  *pTVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  FLevelInstanceID *pFVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [6];
  undefined8 local_230;
  longlong *local_228;
  uint uStack_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  uint local_208;
  uint uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  uint uStack_1f0;
  uint uStack_1ec;
  FScriptContainerElement *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8;
  int local_1c4;
  undefined1 local_1c0 [24];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  uint local_78 [4];
  uint *local_68;
  uint local_60;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_230 = 1;
  if (*(int *)&(this->LevelInstancesToUnload).Elements.field_0x8 !=
      *(int *)&(this->LevelInstancesToUnload).Elements.field_0x34) {
    TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
    TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>
              ((TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator> *)
               local_88,&this->LevelInstancesToUnload);
    uVar15 = local_60;
    uStack_1f0 = 0;
    local_1d8 = 0;
    uStack_1dc = 0;
    uStack_1ec = 1;
    if (local_60 != 0) {
      puVar13 = local_78;
      if (local_68 != (uint *)0x0) {
        puVar13 = local_68;
      }
      uVar14 = *puVar13;
      while (uVar14 == 0) {
        lVar10 = (longlong)(int)uStack_1f0;
        local_1d8 = local_1d8 + 0x20;
        uStack_1f0 = uStack_1f0 + 1;
        uStack_1dc = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1f0)
        goto LAB_147e85180;
        uVar14 = puVar13[lVar10 + 1];
      }
      uStack_1ec = -uVar14 & uVar14;
      uVar4 = (ulonglong)uStack_1ec * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c8 = (int)lVar10;
      uStack_1dc = local_1d8 + -1 + local_1c8;
      if ((int)local_60 < (int)uStack_1dc) {
        uStack_1dc = local_60;
      }
    }
LAB_147e85180:
    local_1f8 = (longlong *)local_88;
    uStack_1d4 = local_104;
    local_1e8 = (FScriptContainerElement *)local_78;
    uVar14 = local_60 & 0xffffffe0;
    iStack_1d0 = local_88._8_4_ - local_54;
    uStack_1e0 = 0xffffffff;
    TStack_1a8.CurrentBitIndex = uStack_1dc;
    TStack_1a8.UnvisitedBitMask = -1;
    TStack_1a8._padding_._4_4_ = uStack_1ec;
    TStack_1a8._padding_._0_4_ = uStack_1f0;
    iVar11 = (int)local_60 >> 5;
    TStack_1a8._28_4_ = local_104;
    TStack_1a8.BaseBitIndex = local_1d8;
    uStack_188 = CONCAT44(uStack_1cc,iStack_1d0);
    bVar9 = (byte)local_60;
    local_1c0._16_8_ = local_1f8;
    TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1e8;
    if (((int)local_60 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar15 != local_60) {
      puVar13 = local_78;
      if (local_68 != (uint *)0x0) {
        puVar13 = local_68;
      }
      uVar15 = -1 << (bVar9 & 0x1f) & puVar13[iVar11];
      while (uVar15 == 0) {
        lVar10 = (longlong)iVar11;
        uVar14 = uVar14 + 0x20;
        iVar11 = iVar11 + 1;
        uVar15 = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_147e852a0;
        uVar15 = puVar13[lVar10 + 1];
      }
      uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c4 = (int)lVar10;
      uVar15 = local_1c4 + -1 + uVar14;
      if ((int)local_60 < (int)uVar15) {
        uVar15 = local_60;
      }
    }
LAB_147e852a0:
    while( true ) {
      uVar7 = local_1c0._16_8_;
      if ((int)*(longlong *)(local_1c0._16_8_ + 8) - *(int *)(local_1c0._16_8_ + 0x34) !=
          (int)uStack_188) {
        local_238 = 0;
        `TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_238);
      }
      if (((TStack_1a8.CurrentBitIndex == uVar15) &&
          (TStack_1a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)local_78)) &&
         ((undefined1 *)uVar7 == local_88)) break;
      pFVar12 = (FLevelInstanceID *)
                (*(longlong *)uVar7 + (longlong)TStack_1a8.CurrentBitIndex * 0x38);
      iVar11 = TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
               FindIndexByHash<FLevelInstanceID>
                         (&this->LoadingLevelInstances,
                          (int)(pFVar12->Hash >> 0x20) * 0x17 + (int)pFVar12->Hash,pFVar12);
      if (iVar11 == -1) {
        UnloadLevelInstance(this,pFVar12);
      }
      else {
        TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
        Emplace<FLevelInstanceID_const_&>
                  (&this->LevelInstancesToUnload,(FLevelInstanceID *)local_1c0,(bool *)pFVar12);
      }
      TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FLevelInstanceID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  uVar15 = 0;
  if (*(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x8 !=
      *(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x34) {
    pTVar1 = &this->LevelInstancesToLoadOrUpdate;
    local_d8._0_8_ = 0;
    local_d8._8_8_ = 0;
    local_b8 = (uint *)0x0;
    iStack_200 = 0;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    uStack_220 = 0;
    local_a4 = 0;
    if ((TMap<ILevelInstanceInterface_*,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>_>
         *)local_d8 != pTVar1) {
      local_d8._0_8_ = *(undefined8 *)pTVar1;
      puVar2 = &(this->LevelInstancesToLoadOrUpdate).field_0x10;
      *(undefined8 *)pTVar1 = 0;
      puVar3 = &(this->LevelInstancesToLoadOrUpdate).field_0x8;
      iStack_200 = *(int *)puVar3;
      local_d8._8_8_ = *(undefined8 *)puVar3;
      *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x8 = 0;
      if (local_d8 + 0x10 != puVar2) {
        local_b8 = *(uint **)&(this->LevelInstancesToLoadOrUpdate).field_0x20;
        if (local_b8 == (uint *)0x0) {
          local_d8._16_8_ = *(undefined8 *)puVar2;
          local_d8._24_8_ = *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x18;
        }
        *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x20 = 0;
        local_b0 = *(uint *)&(this->LevelInstancesToLoadOrUpdate).field_0x28;
        local_ac = *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x2c;
        *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x28 = 0;
      }
      local_a8 = *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x30;
      local_a4 = *(int *)&(this->LevelInstancesToLoadOrUpdate).field_0x34;
      *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x34 = 0;
    }
    uVar14 = local_b0;
    local_98 = *(void **)&(this->LevelInstancesToLoadOrUpdate).field_0x40;
    if (local_98 == (void *)0x0) {
      local_a0 = *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x38;
    }
    *(undefined8 *)&(this->LevelInstancesToLoadOrUpdate).field_0x40 = 0;
    uStack_21c = (uint)local_230;
    local_90 = *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x48;
    *(undefined4 *)&(this->LevelInstancesToLoadOrUpdate).field_0x48 = 0;
    uStack_20c = uStack_220;
    local_208 = uStack_220;
    if (local_b0 != 0) {
      puVar13 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar13 = local_b8;
      }
      uVar16 = *puVar13;
      local_208 = uVar15;
      uStack_220 = uVar15;
      while (uVar16 == 0) {
        lVar10 = (longlong)(int)uStack_220;
        local_208 = local_208 + 0x20;
        uStack_220 = uStack_220 + 1;
        uStack_20c = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_220)
        goto LAB_147e85540;
        uVar16 = puVar13[lVar10 + 1];
      }
      uStack_21c = -uVar16 & uVar16;
      uVar4 = (ulonglong)uStack_21c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c0._4_4_ = (undefined4)lVar10;
      uStack_20c = (local_208 - 1) + local_1c0._4_4_;
      if ((int)local_b0 < (int)uStack_20c) {
        uStack_20c = local_b0;
      }
    }
LAB_147e85540:
    iStack_200 = iStack_200 - local_a4;
    local_228 = (longlong *)local_d8;
    local_218 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    TStack_178._padding_ = CONCAT44(uStack_21c,uStack_220);
    uStack_210 = 0xffffffff;
    uVar16 = local_b0 & 0xffffffe0;
    TStack_178.CurrentBitIndex = uStack_20c;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    uStack_204 = local_e4;
    TStack_178._28_4_ = local_e4;
    TStack_178.BaseBitIndex = local_208;
    uStack_158 = CONCAT44(uStack_1fc,iStack_200);
    iVar11 = (int)local_b0 >> 5;
    bVar9 = (byte)local_b0;
    local_180 = local_228;
    TStack_178.Array = local_218;
    if (((int)local_b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar14 != local_b0) {
      puVar13 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar13 = local_b8;
      }
      uVar14 = -1 << (bVar9 & 0x1f) & puVar13[iVar11];
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar16 = uVar16 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_147e85652;
        uVar14 = puVar13[lVar10 + 1];
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c0._8_4_ = (undefined4)lVar10;
      uVar14 = (local_1c0._8_4_ - 1) + uVar16;
      if ((int)local_b0 < (int)uVar14) {
        uVar14 = local_b0;
      }
    }
LAB_147e85652:
    while( true ) {
      plVar5 = local_180;
      if ((int)local_180[1] - *(int *)((longlong)local_180 + 0x34) != (int)uStack_158) {
        local_237 = 0;
        `TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_237);
      }
      uVar16 = local_b0;
      if (((TStack_178.CurrentBitIndex == uVar14) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
         (plVar5 == (longlong *)local_d8)) break;
      lVar10 = *plVar5;
      plVar5 = *(longlong **)(lVar10 + (longlong)TStack_178.CurrentBitIndex * 0x18);
      if (*(char *)(lVar10 + 8 + (longlong)TStack_178.CurrentBitIndex * 0x18) != '\0') {
        pFVar12 = (FLevelInstanceID *)(**(code **)(*plVar5 + 0x10))(plVar5);
        UnloadLevelInstance(this,pFVar12);
      }
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    uStack_220 = uVar15;
    local_208 = uVar15;
    if (local_b0 == 0) {
LAB_147e85761:
      uStack_21c = (uint)local_230;
      uStack_20c = uVar15;
    }
    else {
      puVar13 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar13 = local_b8;
      }
      uStack_21c = *puVar13;
      while (uStack_21c == 0) {
        lVar10 = (longlong)(int)uStack_220;
        local_208 = local_208 + 0x20;
        uStack_220 = uStack_220 + 1;
        uVar15 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_220)
        goto LAB_147e85761;
        uStack_21c = puVar13[lVar10 + 1];
      }
      uStack_21c = -uStack_21c & uStack_21c;
      uVar4 = (ulonglong)uStack_21c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_1c0._12_4_ = (undefined4)lVar10;
      uStack_20c = (local_208 - 1) + local_1c0._12_4_;
      if ((int)local_b0 < (int)uStack_20c) {
        uStack_20c = local_b0;
      }
    }
    local_228 = (longlong *)local_d8;
    uStack_204 = uStack_1dc;
    local_218 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    uVar15 = local_b0 & 0xffffffe0;
    iStack_200 = local_d8._8_4_ - local_a4;
    uStack_210 = 0xffffffff;
    TStack_148.CurrentBitIndex = uStack_20c;
    TStack_148.UnvisitedBitMask = 0xffffffff;
    TStack_148._padding_ = CONCAT44(uStack_21c,uStack_220);
    iVar11 = (int)local_b0 >> 5;
    TStack_148._28_4_ = uStack_1dc;
    TStack_148.BaseBitIndex = local_208;
    uStack_128 = CONCAT44(uStack_1fc,iStack_200);
    bVar9 = (byte)local_b0;
    local_150 = local_228;
    TStack_148.Array = local_218;
    if (((int)local_b0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar16 != local_b0) {
      puVar13 = (uint *)(local_d8 + 0x10);
      if (local_b8 != (uint *)0x0) {
        puVar13 = local_b8;
      }
      uVar14 = -1 << (bVar9 & 0x1f) & puVar13[iVar11];
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar15 = uVar15 + 0x20;
        iVar11 = iVar11 + 1;
        uVar16 = local_b0;
        if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_147e8587e;
        uVar14 = puVar13[lVar10 + 1];
      }
      uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar16 = (uVar15 - 1) + (int)lVar10;
      if ((int)local_b0 < (int)uVar16) {
        uVar16 = local_b0;
      }
    }
LAB_147e8587e:
    while( true ) {
      plVar5 = local_150;
      if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
        `TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_236);
      }
      if (((TStack_148.CurrentBitIndex == uVar16) &&
          (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
         (plVar5 == (longlong *)local_d8)) break;
      LoadLevelInstance(this,*(ILevelInstanceInterface **)
                              (*plVar5 + (longlong)TStack_148.CurrentBitIndex * 0x18));
      TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
    }
    local_90 = 0;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<ILevelInstanceInterface_*,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
  }
  return;
}

// _getUObject @ 147e87f60

UObject * __thiscall ULevelInstanceSubsystem::_getUObject(ULevelInstanceSubsystem *this)

{
  return (UObject *)&this[-1].RegisteredLevelInstances.field_0x18;
}

