// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 16

// StaticClass @ 149f1ed90

UClass * __cdecl APCGWorldActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldActor",
               &Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton,
               StaticRegisterNativesAPCGWorldActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APCGWorldActor>,
               InternalVTableHelperCtorCaller<APCGWorldActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton;
}

// APCGWorldActor @ 149f30ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APCGWorldActor * __thiscall
APCGWorldActor::APCGWorldActor(APCGWorldActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bTreatPlayerControllersAsGenerationSources = true;
  this->bEnableWorldPartitionGenerationSources = false;
  this->_padding_ = (longlong)&___7APCGWorldActor__6B_;
  (this->LandscapeCacheObject).field0_0x0.DebugPtr = (UPCGLandscapeCache *)0x0;
  return this;
}

// APCGWorldActor @ 149f30f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APCGWorldActor * __thiscall
APCGWorldActor::APCGWorldActor(APCGWorldActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPCGLandscapeCache *pUVar4;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->bTreatPlayerControllersAsGenerationSources = true;
  this->bEnableWorldPartitionGenerationSources = false;
  this->_padding_ = (longlong)&___7APCGWorldActor__6B_;
  (this->LandscapeCacheObject).field0_0x0.DebugPtr = (UPCGLandscapeCache *)0x0;
  this->PartitionGridSize = 0x6400;
  pFVar2 = ::FName::FName(&local_res8,L"LandscapeCache");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UPCGLandscapeCache_NoRegister();
  pUVar4 = (UPCGLandscapeCache *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPCGLandscapeCache *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->LandscapeCacheObject).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~APCGWorldActor @ 149f34240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::~APCGWorldActor(APCGWorldActor *this)

{
  this->_padding_ = (longlong)&___7APCGWorldActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 149f3c850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::BeginDestroy(APCGWorldActor *this)

{
  UnregisterFromSubsystem(this);
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BeginPlay @ 149f3c8b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::BeginPlay(APCGWorldActor *this)

{
  int iVar1;
  APCGWorldActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  USubsystem *pUVar8;
  
  AActor::BeginPlay((AActor *)this);
  pUVar5 = AActor::GetWorld((AActor *)this);
  if (pUVar5 == (UWorld *)0x0) {
    return;
  }
  pUVar6 = UPCGSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_149f3c900;
  }
  else if (pUVar6 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_149f3c900:
    pUVar7 = UPCGSubsystem::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_149f3c930;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_149f3c930:
  pUVar8 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar5->SubsystemCollection,pUVar6);
  if ((pUVar8 != (USubsystem *)0x0) && ((char)pUVar8[1]._padding_ != '\0')) {
    pAVar2 = (APCGWorldActor *)pUVar8[2]._padding_;
    if (pAVar2 == (APCGWorldActor *)0x0) {
      pUVar8[2]._padding_ = (longlong)this;
      return;
    }
    if (this != pAVar2) {
      if ((this == (APCGWorldActor *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OtherWorldActor && this != OtherWorldActor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGWorldActor.cpp"
                             ,200,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UPCGLandscapeCache::TakeOwnership
                ((pAVar2->LandscapeCacheObject).field0_0x0.DebugPtr,
                 (this->LandscapeCacheObject).field0_0x0.DebugPtr);
    }
  }
  return;
}

// EndPlay @ 149f424c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::EndPlay(APCGWorldActor *this,Type param_1)

{
  UnregisterFromSubsystem(this);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 149f4cc30

UClass * __cdecl APCGWorldActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldActor",
               &Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton,
               StaticRegisterNativesAPCGWorldActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<APCGWorldActor>,
               InternalVTableHelperCtorCaller<APCGWorldActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APCGWorldActor.InnerSingleton;
}

// MergeFrom @ 149f55520

void __thiscall APCGWorldActor::MergeFrom(APCGWorldActor *this,APCGWorldActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 == (APCGWorldActor *)0x0) || (this == param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OtherWorldActor && this != OtherWorldActor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGWorldActor.cpp"
                       ,200,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UPCGLandscapeCache::TakeOwnership
            ((this->LandscapeCacheObject).field0_0x0.DebugPtr,
             (param_1->LandscapeCacheObject).field0_0x0.DebugPtr);
  return;
}

// PostInitProperties @ 149f57b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::PostInitProperties(APCGWorldActor *this)

{
  AActor::PostInitProperties((AActor *)this);
  return;
}

// RegisterToSubsystem @ 149f5a0b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::RegisterToSubsystem(APCGWorldActor *this)

{
  int iVar1;
  APCGWorldActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  USubsystem *pUVar8;
  
  pUVar5 = AActor::GetWorld((AActor *)this);
  if (pUVar5 == (UWorld *)0x0) {
    return;
  }
  pUVar6 = UPCGSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_149f5a0f8;
  }
  else if (pUVar6 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_149f5a0f8:
    pUVar7 = UPCGSubsystem::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_149f5a128;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_149f5a128:
  pUVar8 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar5->SubsystemCollection,pUVar6);
  if ((pUVar8 != (USubsystem *)0x0) && ((char)pUVar8[1]._padding_ != '\0')) {
    pAVar2 = (APCGWorldActor *)pUVar8[2]._padding_;
    if (pAVar2 == (APCGWorldActor *)0x0) {
      pUVar8[2]._padding_ = (longlong)this;
      return;
    }
    if (this != pAVar2) {
      if ((this == (APCGWorldActor *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("OtherWorldActor && this != OtherWorldActor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGWorldActor.cpp"
                             ,200,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UPCGLandscapeCache::TakeOwnership
                ((pAVar2->LandscapeCacheObject).field0_0x0.DebugPtr,
                 (this->LandscapeCacheObject).field0_0x0.DebugPtr);
    }
  }
  return;
}

// Serialize @ 149f5fc20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::Serialize(APCGWorldActor *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd9) {
      this->bEnableWorldPartitionGenerationSources = true;
    }
  }
  AActor::Serialize((AActor *)this,param_1);
  return;
}

// Serialize @ 149f5fc90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::Serialize(APCGWorldActor *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xd9) {
      this->bEnableWorldPartitionGenerationSources = true;
    }
  }
  AActor::Serialize((AActor *)this,(FArchive *)this_00);
  return;
}

// StaticRegisterNativesAPCGWorldActor @ 149f63880

void __cdecl APCGWorldActor::StaticRegisterNativesAPCGWorldActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_APCGWorldActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterFromSubsystem @ 149f6c4e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall APCGWorldActor::UnregisterFromSubsystem(APCGWorldActor *this)

{
  int iVar1;
  bool bVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  USubsystem *pUVar6;
  
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  pUVar4 = UPCGSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 != (UClass *)0x0) goto LAB_149f6c528;
  }
  else if (pUVar4 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_149f6c528:
    pUVar5 = UPCGSubsystem::StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_149f6c558;
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_149f6c558:
  pUVar6 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->SubsystemCollection,pUVar4);
  if (((pUVar6 != (USubsystem *)0x0) && ((char)pUVar6[1]._padding_ != '\0')) &&
     ((APCGWorldActor *)pUVar6[2]._padding_ == this)) {
    pUVar6[2]._padding_ = 0;
  }
  return;
}

// execBP_GetPCGGridSize @ 149f6f880

void __cdecl APCGWorldActor::execBP_GetPCGGridSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(ulonglong *)param_3 = (ulonglong)*(uint *)&param_1[0x11].field_0x18;
  return;
}

