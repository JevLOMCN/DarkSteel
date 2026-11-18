// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FContentBundle @ 148a41740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FContentBundle * __thiscall
FContentBundle::FContentBundle
          (FContentBundle *this,TSharedPtr<FContentBundleClient,1> *param_1,UWorld *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FContentBundle *pFVar4;
  UObject *pUVar5;
  
  this->_padding_ = (longlong)&___7FContentBundleBase__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->_padding_ = (longlong)param_2;
  if (param_1->Object == (FContentBundleClient *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FContentBundle *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar5 = FWeakObjectPtr::Get(&(param_1->Object->ContentBundleDescriptor).WeakPtr);
  this->_padding_ = (longlong)pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&___7FContentBundle__6B_;
  (this->ExternalStreamingObjectPackage).field0_0x0.DebugPtr = (UPackage *)0x0;
  (this->ExternalStreamingObject).field0_0x0.DebugPtr =
       (URuntimeHashExternalStreamingObjectBase *)0x0;
  return this;
}

// AddReferencedObjects @ 148a499b0

void __thiscall
FContentBundle::AddReferencedObjects(FContentBundle *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ExternalStreamingObjectPackage,0,0);
                    /* WARNING: Could not recover jumptable at 0x000148a49a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ExternalStreamingObject,0,0);
  return;
}

// DoInitialize @ 148a501e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundle::DoInitialize(FContentBundle *this)

{
  int iVar1;
  bool bVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  URuntimeHashExternalStreamingObjectBase *this_00;
  UClass *pUVar5;
  FStaticBasicLogRecord *pFVar6;
  ForAnyElementType FVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FContentBundleBase::GetExternalStreamingObjectPackagePath((FContentBundleBase *)this,&local_38);
  bVar2 = FPackageName::DoesPackageExist(&local_38,(FString *)0x0,true);
  if (bVar2) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    pUVar3 = LoadPackage((UPackage *)0x0,(wchar_t *)FVar7.Data,0,(FArchive *)0x0,
                         (FLinkerInstancingContext *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (UPackage *)0x0)) {
      (this->ExternalStreamingObjectPackage).field0_0x0.DebugPtr = pUVar3;
      if (pUVar3 != (UPackage *)0x0) goto LAB_148a5026d;
      if ((byte)LogContentBundle._0_1_ < 2) goto LAB_148a50407;
      FContentBundleBase::GetExternalStreamingObjectPackagePath
                ((FContentBundleBase *)this,&local_18);
      ContentBundle::LogPrivate::MakeDebugInfoString
                (&local_28,(UContentBundleDescriptor *)this->_padding_,(UWorld *)this->_padding_);
      pFVar6 = &::LOG_Static;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (this->ExternalStreamingObjectPackage).field0_0x0.DebugPtr = pUVar3;
LAB_148a5026d:
      pUVar4 = Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
      this_00 = (URuntimeHashExternalStreamingObjectBase *)
                FindObjectWithOuter((UObjectBase *)
                                    (this->ExternalStreamingObjectPackage).field0_0x0.DebugPtr,
                                    pUVar4,(FName)0x0);
      if (this_00 == (URuntimeHashExternalStreamingObjectBase *)0x0) {
LAB_148a502b7:
        this_00 = (URuntimeHashExternalStreamingObjectBase *)0x0;
      }
      else {
        pUVar5 = Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
        pUVar4 = (((TNonAccessTrackedObjectPtr<UClass> *)&this_00->_padding_)->ObjectPtr).field0_0x0
                 .DebugPtr;
        iVar1 = (int)pUVar5->_padding_;
        if (((int)pUVar4->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) goto LAB_148a502b7;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (URuntimeHashExternalStreamingObjectBase *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
        (this->ExternalStreamingObject).field0_0x0.DebugPtr = this_00;
        URuntimeHashExternalStreamingObjectBase::OnStreamingObjectLoaded
                  (this_00,(UWorld *)this->_padding_);
        goto LAB_148a50407;
      }
      (this->ExternalStreamingObject).field0_0x0.DebugPtr = this_00;
      if (this_00 != (URuntimeHashExternalStreamingObjectBase *)0x0) {
        URuntimeHashExternalStreamingObjectBase::OnStreamingObjectLoaded
                  (this_00,(UWorld *)this->_padding_);
        goto LAB_148a50407;
      }
      if ((byte)LogContentBundle._0_1_ < 2) goto LAB_148a50407;
      FContentBundleBase::GetExternalStreamingObjectPackagePath
                ((FContentBundleBase *)this,&local_18);
      ContentBundle::LogPrivate::MakeDebugInfoString
                (&local_28,(UContentBundleDescriptor *)this->_padding_,(UWorld *)this->_padding_);
      pFVar6 = &::LOG_Static;
    }
    UE::Logging::Private::BasicLog<2>(pFVar6,(FLogCategoryBase *)&LogContentBundle);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    if ((byte)LogContentBundle._0_1_ < 5) goto LAB_148a50407;
    ContentBundle::LogPrivate::MakeDebugInfoString
              (&local_28,(UContentBundleDescriptor *)this->_padding_,(UWorld *)this->_padding_);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148a50407:
  FContentBundleBase::SetStatus((FContentBundleBase *)this,Registered);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// DoInjectContent @ 148a50440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundle::DoInjectContent(FContentBundle *this)

{
  bool bVar1;
  UWorldPartition *this_00;
  FStaticBasicLogRecord *pFVar2;
  FString local_18;
  
  if ((this->ExternalStreamingObject).field0_0x0.DebugPtr ==
      (URuntimeHashExternalStreamingObjectBase *)0x0) {
    if ((byte)LogContentBundle._0_1_ < 5) goto LAB_148a50548;
    ContentBundle::LogPrivate::MakeDebugInfoString
              (&local_18,(UContentBundleDescriptor *)this->_padding_,(UWorld *)this->_padding_);
    pFVar2 = &::LOG_Static;
  }
  else {
    this_00 = UWorld::GetWorldPartition((UWorld *)this->_padding_);
    bVar1 = UWorldPartition::InjectExternalStreamingObject
                      (this_00,(this->ExternalStreamingObject).field0_0x0.DebugPtr);
    if (!bVar1) {
      if (1 < (byte)LogContentBundle._0_1_) {
        ContentBundle::LogPrivate::MakeDebugInfoString
                  (&local_18,(UContentBundleDescriptor *)this->_padding_,(UWorld *)this->_padding_);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      FContentBundleBase::SetStatus((FContentBundleBase *)this,FailedToInject);
      return;
    }
    if ((byte)LogContentBundle._0_1_ < 5) goto LAB_148a50548;
    ContentBundle::LogPrivate::MakeDebugInfoString
              (&local_18,(UContentBundleDescriptor *)this->_padding_,(UWorld *)this->_padding_);
    pFVar2 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar2,(FLogCategoryBase *)&LogContentBundle);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148a50548:
  FContentBundleBase::SetStatus((FContentBundleBase *)this,ContentInjected);
  return;
}

// DoRemoveContent @ 148a505a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundle::DoRemoveContent(FContentBundle *this)

{
  bool bVar1;
  UWorldPartition *this_00;
  FString local_18;
  
  if ((this->ExternalStreamingObject).field0_0x0.DebugPtr !=
      (URuntimeHashExternalStreamingObjectBase *)0x0) {
    this_00 = UWorld::GetWorldPartition((UWorld *)this->_padding_);
    bVar1 = UWorldPartition::RemoveExternalStreamingObject
                      (this_00,(this->ExternalStreamingObject).field0_0x0.DebugPtr);
    if ((!bVar1) && (1 < (byte)LogContentBundle._0_1_)) {
      ContentBundle::LogPrivate::MakeDebugInfoString
                (&local_18,(UContentBundleDescriptor *)this->_padding_,(UWorld *)this->_padding_);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  FContentBundleBase::SetStatus((FContentBundleBase *)this,Registered);
  return;
}

// DoUninitialize @ 148a50630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundle::DoUninitialize(FContentBundle *this)

{
  FContentBundleBase::SetStatus((FContentBundleBase *)this,Unknown);
  (this->ExternalStreamingObject).field0_0x0.DebugPtr =
       (URuntimeHashExternalStreamingObjectBase *)0x0;
  (this->ExternalStreamingObjectPackage).field0_0x0.DebugPtr = (UPackage *)0x0;
  return;
}

// HasContent @ 148a5b680

bool __thiscall FContentBundle::HasContent(FContentBundle *this)

{
  return (this->ExternalStreamingObject).field0_0x0.DebugPtr !=
         (URuntimeHashExternalStreamingObjectBase *)0x0;
}

// IsValid @ 148a5ed00

bool __thiscall FContentBundle::IsValid(FContentBundle *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if ((((*(int *)(lVar1 + 0x48) != 0 || *(int *)(lVar1 + 0x44) != 0) || *(int *)(lVar1 + 0x40) != 0)
       || *(int *)(lVar1 + 0x3c) != 0) && (1 < *(int *)(lVar1 + 0x30))) {
    return true;
  }
  return false;
}

