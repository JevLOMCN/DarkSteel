// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 7

// StaticClass @ 14e2eac00

UClass * __cdecl ADatasmithSceneActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneActor",
               &Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton,
               StaticRegisterNativesADatasmithSceneActor,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADatasmithSceneActor>,
               InternalVTableHelperCtorCaller<ADatasmithSceneActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton;
}

// ADatasmithSceneActor @ 14e2f3bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADatasmithSceneActor * __thiscall
ADatasmithSceneActor::ADatasmithSceneActor(ADatasmithSceneActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADatasmithSceneActor__6B_;
  (this->Scene).field0_0x0.DebugPtr = (UDatasmithScene *)0x0;
  *(undefined8 *)&this->RelatedActors = 0;
  *(undefined8 *)&(this->RelatedActors).field_0x8 = 0;
  *(undefined8 *)&(this->RelatedActors).field_0x20 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x28 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->RelatedActors).field_0x34 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RelatedActors).field_0x40 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x48 = 0;
  return this;
}

// ADatasmithSceneActor @ 14e2f3c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADatasmithSceneActor * __thiscall
ADatasmithSceneActor::ADatasmithSceneActor(ADatasmithSceneActor *this)

{
  AActor::AActor((AActor *)this);
  this->_padding_ = (longlong)&___7ADatasmithSceneActor__6B_;
  (this->Scene).field0_0x0.DebugPtr = (UDatasmithScene *)0x0;
  *(undefined8 *)&this->RelatedActors = 0;
  *(undefined8 *)&(this->RelatedActors).field_0x8 = 0;
  *(undefined8 *)&(this->RelatedActors).field_0x20 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x28 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x2c = 0x80;
  *(undefined4 *)&(this->RelatedActors).field_0x34 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RelatedActors).field_0x40 = 0;
  *(undefined4 *)&(this->RelatedActors).field_0x48 = 0;
  return this;
}

// ~ADatasmithSceneActor @ 14e2f5cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADatasmithSceneActor::~ADatasmithSceneActor(ADatasmithSceneActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ADatasmithSceneActor__6B_;
  *(undefined4 *)&(this->RelatedActors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RelatedActors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RelatedActors);
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 14e2f8660

void __thiscall ADatasmithSceneActor::BeginDestroy(ADatasmithSceneActor *this)

{
  int iVar1;
  uint uVar2;
  UClass *pUVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((this->_padding_ & 0x30) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
    pUVar3 = GetParentNativeClass((UClass *)this->_padding_);
    piVar5 = (int *)0x0;
    if (pUVar3 != (UClass *)0x0) {
      piVar5 = (int *)pUVar3->_padding_;
    }
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)piVar5);
    if (CSVActorClassNameToCountMap._8_4_ != CSVActorClassNameToCountMap._52_4_) {
      lVar4 = 0x154c1e3c8;
      if (CSVActorClassNameToCountMap._64_8_ != 0) {
        lVar4 = CSVActorClassNameToCountMap._64_8_;
      }
      iVar1 = *(int *)(lVar4 + (ulonglong)
                               (CSVActorClassNameToCountMap._72_4_ - 1 &
                               (int)((ulonglong)piVar5 >> 0x20) + uVar2) * 4);
      while (iVar1 != -1) {
        lVar4 = CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14;
        if (*(int **)(CSVActorClassNameToCountMap._0_8_ + (longlong)iVar1 * 0x14) == piVar5) {
          piVar5 = (int *)(lVar4 + 8);
          if (lVar4 == 0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar5 + -1;
          }
          break;
        }
        iVar1 = *(int *)(lVar4 + 0xc);
      }
    }
    CSVActorTotalCount = CSVActorTotalCount + -1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&CSVActorClassNameToCountMapLock);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fbb90

UClass * __cdecl ADatasmithSceneActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithSceneActor",
               &Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton,
               StaticRegisterNativesADatasmithSceneActor,0x318,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADatasmithSceneActor>,
               InternalVTableHelperCtorCaller<ADatasmithSceneActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADatasmithSceneActor.InnerSingleton;
}

// StaticRegisterNativesADatasmithSceneActor @ 14e2fec20

void __cdecl ADatasmithSceneActor::StaticRegisterNativesADatasmithSceneActor(void)

{
  return;
}

