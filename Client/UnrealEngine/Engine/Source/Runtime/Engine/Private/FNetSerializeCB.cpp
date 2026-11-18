// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// GatherGuidReferencesForFastArray @ 147a49d60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetSerializeCB::GatherGuidReferencesForFastArray
          (FNetSerializeCB *this,FFastArrayDeltaSerializeParams *param_1)

{
  TSharedPtr<FRepLayout,1> *pTVar1;
  UStruct *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FRepLayout,1> *pTVar7;
  TSharedPtr<FRepLayout,1> *pTVar8;
  TSharedPtr<FRepLayout,1> local_38;
  TSharedPtr<FRepLayout,1> local_28;
  TSharedPtr<FRepLayout,1> local_18;
  
  pUVar2 = param_1->DeltaSerializeInfo->Struct;
  pTVar1 = &(this->CachedRequestState).RepLayout;
  pUVar3 = *(UClass **)&param_1->DeltaSerializeInfo->Object->field_0x10;
  if ((this->CachedRequestState).ObjectClass != pUVar3) {
    (this->CachedRequestState).ObjectClass = pUVar3;
    pUVar6 = CastChecked<UScriptStruct,UStruct>(pUVar2);
    (this->CachedRequestState).Struct = pUVar6;
    (this->CachedRequestState).bWasRequestFromClass = true;
    local_38.Object = (FRepLayout *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != &local_38) {
      pTVar1->Object = (FRepLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                 &local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (pTVar1->Object == (FRepLayout *)0x0) {
    if ((this->CachedRequestState).bWasRequestFromClass == false) {
      pTVar7 = UNetDriver::GetStructRepLayout
                         (this->Driver,&local_18,(UStruct *)(this->CachedRequestState).Struct);
      pTVar8 = &(this->CachedRequestState).RepLayout;
      if (pTVar8 != pTVar7) {
        pTVar8->Object = pTVar7->Object;
        pTVar7->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar7->SharedReferenceCount);
      }
    }
    else {
      pTVar7 = UNetDriver::GetObjectClassRepLayout
                         (this->Driver,&local_28,(this->CachedRequestState).ObjectClass);
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (pTVar1 != pTVar7) {
        pTVar1->Object = pTVar7->Object;
        pTVar7->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar7->SharedReferenceCount);
        local_18.SharedReferenceCount.ReferenceController =
             local_28.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (FRepLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FRepLayout::GatherGuidReferencesForFastArray(pTVar1->Object,param_1);
  return;
}

// MoveGuidToUnmappedForFastArray @ 147a65b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNetSerializeCB::MoveGuidToUnmappedForFastArray
          (FNetSerializeCB *this,FFastArrayDeltaSerializeParams *param_1)

{
  TSharedPtr<FRepLayout,1> *pTVar1;
  UStruct *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UScriptStruct *pUVar7;
  TSharedPtr<FRepLayout,1> *pTVar8;
  TSharedPtr<FRepLayout,1> *pTVar9;
  TSharedPtr<FRepLayout,1> local_38;
  TSharedPtr<FRepLayout,1> local_28;
  TSharedPtr<FRepLayout,1> local_18;
  
  pUVar2 = param_1->DeltaSerializeInfo->Struct;
  pTVar1 = &(this->CachedRequestState).RepLayout;
  pUVar3 = *(UClass **)&param_1->DeltaSerializeInfo->Object->field_0x10;
  if ((this->CachedRequestState).ObjectClass != pUVar3) {
    (this->CachedRequestState).ObjectClass = pUVar3;
    pUVar7 = CastChecked<UScriptStruct,UStruct>(pUVar2);
    (this->CachedRequestState).Struct = pUVar7;
    (this->CachedRequestState).bWasRequestFromClass = true;
    local_38.Object = (FRepLayout *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != &local_38) {
      pTVar1->Object = (FRepLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                 &local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (pTVar1->Object == (FRepLayout *)0x0) {
    if ((this->CachedRequestState).bWasRequestFromClass == false) {
      pTVar8 = UNetDriver::GetStructRepLayout
                         (this->Driver,&local_18,(UStruct *)(this->CachedRequestState).Struct);
      pTVar9 = &(this->CachedRequestState).RepLayout;
      if (pTVar9 != pTVar8) {
        pTVar9->Object = pTVar8->Object;
        pTVar8->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar8->SharedReferenceCount);
      }
    }
    else {
      pTVar8 = UNetDriver::GetObjectClassRepLayout
                         (this->Driver,&local_28,(this->CachedRequestState).ObjectClass);
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (pTVar1 != pTVar8) {
        pTVar1->Object = pTVar8->Object;
        pTVar8->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar8->SharedReferenceCount);
        local_18.SharedReferenceCount.ReferenceController =
             local_28.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (FRepLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  bVar5 = FRepLayout::MoveMappedObjectToUnmappedForFastArray(pTVar1->Object,param_1);
  return bVar5;
}

// NetDeltaSerializeForFastArray @ 147a65f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNetSerializeCB::NetDeltaSerializeForFastArray
          (FNetSerializeCB *this,FFastArrayDeltaSerializeParams *param_1)

{
  TSharedPtr<FRepLayout,1> *pTVar1;
  UStruct *pUVar2;
  UClass *pUVar3;
  UNetConnection *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ERepLayoutResult EVar7;
  UScriptStruct *pUVar8;
  TSharedPtr<FRepLayout,1> *pTVar9;
  TSharedPtr<FRepLayout,1> *pTVar10;
  TSharedPtr<FRepLayout,1> local_38;
  TSharedPtr<FRepLayout,1> local_28;
  TSharedPtr<FRepLayout,1> local_18;
  
  pUVar2 = param_1->DeltaSerializeInfo->Struct;
  pTVar1 = &(this->CachedRequestState).RepLayout;
  pUVar3 = *(UClass **)&param_1->DeltaSerializeInfo->Object->field_0x10;
  if ((this->CachedRequestState).ObjectClass != pUVar3) {
    (this->CachedRequestState).ObjectClass = pUVar3;
    pUVar8 = CastChecked<UScriptStruct,UStruct>(pUVar2);
    (this->CachedRequestState).Struct = pUVar8;
    (this->CachedRequestState).bWasRequestFromClass = true;
    local_38.Object = (FRepLayout *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != &local_38) {
      pTVar1->Object = (FRepLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                 &local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (pTVar1->Object == (FRepLayout *)0x0) {
    if ((this->CachedRequestState).bWasRequestFromClass == false) {
      pTVar10 = UNetDriver::GetStructRepLayout
                          (this->Driver,&local_18,(UStruct *)(this->CachedRequestState).Struct);
      pTVar9 = &(this->CachedRequestState).RepLayout;
      if (pTVar9 != pTVar10) {
        pTVar9->Object = pTVar10->Object;
        pTVar10->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar10->SharedReferenceCount);
      }
    }
    else {
      pTVar9 = UNetDriver::GetObjectClassRepLayout
                         (this->Driver,&local_28,(this->CachedRequestState).ObjectClass);
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (pTVar1 != pTVar9) {
        pTVar1->Object = pTVar9->Object;
        pTVar9->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar9->SharedReferenceCount);
        local_18.SharedReferenceCount.ReferenceController =
             local_28.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (FRepLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  EVar7 = FRepLayout::DeltaSerializeFastArrayProperty
                    (pTVar1->Object,param_1,(this->ChangelistMgr).Object);
  if ((EVar7 == FatalError) &&
     (this_00 = param_1->DeltaSerializeInfo->Connection, this_00 != (UNetConnection *)0x0)) {
    UNetConnection::SetPendingCloseDueToReplicationFailure(this_00);
  }
  return EVar7 == Success;
}

// NetSerializeStruct @ 147a660d0

/* WARNING: Removing unreachable block (ram,0x000147a6629f) */
/* WARNING: Removing unreachable block (ram,0x000147a662ac) */
/* WARNING: Removing unreachable block (ram,0x000147a662c9) */
/* WARNING: Removing unreachable block (ram,0x000147a662cc) */
/* WARNING: Removing unreachable block (ram,0x000147a662f3) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetSerializeCB::NetSerializeStruct(FNetSerializeCB *this,FNetDeltaSerializeInfo *param_1)

{
  UScriptStruct **ppUVar1;
  ICppStructOps *pIVar2;
  UPackageMap *pUVar3;
  FStructOpsFakeVTable *pFVar4;
  FRepLayout *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  UScriptStruct *pUVar9;
  TSharedPtr<FRepLayout,1> *pTVar10;
  TSharedPtr<FRepLayout,1> *pTVar11;
  ulonglong uVar12;
  EStructOpsFakeVTableFlags EVar13;
  FNetBitWriter *pFVar14;
  bool local_res10 [8];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_98;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  FString local_78 [2];
  TSharedPtr<FRepLayout,1> local_58;
  TSharedPtr<FRepLayout,1> local_48;
  
  uVar12 = 0;
  pUVar9 = (UScriptStruct *)param_1->Struct;
  ppUVar1 = &(this->CachedRequestState).Struct;
  if ((*ppUVar1 != pUVar9) || ((this->CachedRequestState).ObjectClass != (UClass *)0x0)) {
    (this->CachedRequestState).ObjectClass = (UClass *)0x0;
    pUVar9 = CastChecked<UScriptStruct,UStruct>((UStruct *)pUVar9);
    *ppUVar1 = pUVar9;
    pTVar11 = &(this->CachedRequestState).RepLayout;
    (this->CachedRequestState).bWasRequestFromClass = false;
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar11 != (TSharedPtr<FRepLayout,1> *)&local_88) {
      pTVar11->Object = (FRepLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedRequestState).RepLayout.SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
  }
  pTVar11 = &(this->CachedRequestState).RepLayout;
  pFVar14 = (FNetBitWriter *)param_1->Reader;
  if (pFVar14 == (FNetBitWriter *)0x0) {
    pFVar14 = (FNetBitWriter *)param_1->Writer;
  }
  param_1->bOutHasMoreUnmapped = false;
  pUVar9 = (this->CachedRequestState).Struct;
  if ((pUVar9->StructFlags & STRUCT_NetSerializeNative) == STRUCT_NoFlags) {
    if (pTVar11->Object == (FRepLayout *)0x0) {
      if ((this->CachedRequestState).bWasRequestFromClass == false) {
        pTVar11 = UNetDriver::GetStructRepLayout(this->Driver,&local_48,(UStruct *)pUVar9);
        pTVar10 = &(this->CachedRequestState).RepLayout;
        if (pTVar10 != pTVar11) {
          pTVar10->Object = pTVar11->Object;
          pTVar11->Object = (FRepLayout *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                     &pTVar11->SharedReferenceCount);
        }
      }
      else {
        pTVar10 = UNetDriver::GetObjectClassRepLayout
                            (this->Driver,&local_58,(this->CachedRequestState).ObjectClass);
        local_48.SharedReferenceCount.ReferenceController =
             local_58.SharedReferenceCount.ReferenceController;
        if (pTVar11 != pTVar10) {
          pTVar11->Object = pTVar10->Object;
          pTVar10->Object = (FRepLayout *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                     &pTVar10->SharedReferenceCount);
          local_48.SharedReferenceCount.ReferenceController =
               local_58.SharedReferenceCount.ReferenceController;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    pUVar3 = param_1->Map;
    if ((pUVar3 == (UPackageMap *)0x0) ||
       ((*(byte *)(*(longlong *)&pUVar3[1].TrackedUnmappedNetGuids.Elements.field_0x20 + 0xfc) & 1)
        == 0)) {
      if (((this->CachedRequestState).RepLayout.Object == (FRepLayout *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FRepLayout::SerializePropertiesForStruct
                ((this->CachedRequestState).RepLayout.Object,param_1->Struct,(FBitArchive *)pFVar14,
                 param_1->Map,(TRepDataBufferBase<0,unsigned_char>)param_1->Data,
                 &param_1->bOutHasMoreUnmapped,param_1->Object);
    }
    else {
      pFVar5 = (this->CachedRequestState).RepLayout.Object;
      if ((pFVar14->_padding_ & 4) == 0) {
        local_res10[0] = false;
        if ((pFVar5 == (FRepLayout *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FRepLayout::ReceiveProperties_BackwardsCompatible
                  ((this->CachedRequestState).RepLayout.Object,
                   *(UNetConnection **)&pUVar3[1].TrackedUnmappedNetGuids.Elements.field_0x20,
                   (FReceivingRepState *)0x0,(TRepDataBufferBase<0,unsigned_char>)param_1->Data,
                   (FNetBitReader *)pFVar14,&param_1->bOutHasMoreUnmapped,false,local_res10,
                   param_1->Object);
      }
      else {
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
        if ((pFVar5 == (FRepLayout *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FRepLayout::SendProperties_BackwardsCompatible
                  ((this->CachedRequestState).RepLayout.Object,(FSendingRepState *)0x0,
                   (FRepChangedPropertyTracker *)0x0,
                   (TRepDataBufferBase<0,unsigned_char_const_>)param_1->Data,
                   *(UNetConnection **)&pUVar3[1].TrackedUnmappedNetGuids.Elements.field_0x20,
                   pFVar14,&local_98);
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    if (pUVar9->bPrepareCppStructOpsCompleted == false) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar9,local_78,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrepareCppStructOpsCompleted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x8f6,
                         L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s")
      ;
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar2 = pUVar9->CppStructOps;
    if ((pIVar2 == (ICppStructOps *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataReplication.cpp"
                           ,0xb1,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar3 = param_1->Map;
    pFVar4 = pIVar2->FakeVPtr;
    if ((pFVar4->Capabilities).HasNetSerializer) {
      if (((pFVar4->Flags & NetSerialize) == None) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      for (EVar13 = pFVar4->Flags &
                    (PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|
                    Construct); EVar13 != None; EVar13 = EVar13 & EVar13 - Construct) {
        uVar12 = (ulonglong)((int)uVar12 + 1);
      }
      cVar8 = (**(code **)(&pFVar4[1].Flags + uVar12 * 2))(pFVar14,pUVar3);
      if (cVar8 != '\0') {
        return;
      }
    }
    param_1->bOutHasMoreUnmapped = true;
  }
  return;
}

// UpdateUnmappedGuidsForFastArray @ 147a9e620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNetSerializeCB::UpdateUnmappedGuidsForFastArray
          (FNetSerializeCB *this,FFastArrayDeltaSerializeParams *param_1)

{
  TSharedPtr<FRepLayout,1> *pTVar1;
  UStruct *pUVar2;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  TSharedPtr<FRepLayout,1> *pTVar7;
  TSharedPtr<FRepLayout,1> *pTVar8;
  TSharedPtr<FRepLayout,1> local_38;
  TSharedPtr<FRepLayout,1> local_28;
  TSharedPtr<FRepLayout,1> local_18;
  
  pUVar2 = param_1->DeltaSerializeInfo->Struct;
  pTVar1 = &(this->CachedRequestState).RepLayout;
  pUVar3 = *(UClass **)&param_1->DeltaSerializeInfo->Object->field_0x10;
  if ((this->CachedRequestState).ObjectClass != pUVar3) {
    (this->CachedRequestState).ObjectClass = pUVar3;
    pUVar6 = CastChecked<UScriptStruct,UStruct>(pUVar2);
    (this->CachedRequestState).Struct = pUVar6;
    (this->CachedRequestState).bWasRequestFromClass = true;
    local_38.Object = (FRepLayout *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != &local_38) {
      pTVar1->Object = (FRepLayout *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                 &local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  if (pTVar1->Object == (FRepLayout *)0x0) {
    if ((this->CachedRequestState).bWasRequestFromClass == false) {
      pTVar7 = UNetDriver::GetStructRepLayout
                         (this->Driver,&local_18,(UStruct *)(this->CachedRequestState).Struct);
      pTVar8 = &(this->CachedRequestState).RepLayout;
      if (pTVar8 != pTVar7) {
        pTVar8->Object = pTVar7->Object;
        pTVar7->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar7->SharedReferenceCount);
      }
    }
    else {
      pTVar7 = UNetDriver::GetObjectClassRepLayout
                         (this->Driver,&local_28,(this->CachedRequestState).ObjectClass);
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (pTVar1 != pTVar7) {
        pTVar1->Object = pTVar7->Object;
        pTVar7->Object = (FRepLayout *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CachedRequestState).RepLayout.SharedReferenceCount,
                   &pTVar7->SharedReferenceCount);
        local_18.SharedReferenceCount.ReferenceController =
             local_28.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if ((pTVar1->Object == (FRepLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FRepLayout::UpdateUnmappedGuidsForFastArray(pTVar1->Object,param_1);
  return;
}

