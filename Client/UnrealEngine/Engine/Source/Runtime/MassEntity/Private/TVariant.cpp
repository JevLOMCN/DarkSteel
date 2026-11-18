// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 5

// Emplace<UE::Mass::FEntityCollection,FMassArchetypeEntityCollection_const_&> @ 1471c32d0

void __thiscall
TVariant<UE::Mass::FEntityCollection,FMassEntityHandle>::
Emplace<UE::Mass::FEntityCollection,FMassArchetypeEntityCollection_const_&>
          (TVariant<UE::Mass::FEntityCollection,FMassEntityHandle> *this,
          FMassArchetypeEntityCollection *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Mass::FEntityCollection,FMassEntityHandle>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (((param_1->Ranges).ArrayNum == 0) &&
     ((param_1->Archetype).ArchetypeHandle.DataPtr.Object == (FMassArchetypeData *)0x0)) {
    this->TypeIndex = '\0';
    return;
  }
  bVar3 = FMassArchetypeEntityCollection::ExportEntityHandles
                    (param_1,(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)this);
  if (bVar3) {
    UE::Mass::FEntityCollection::
    ConditionallyStoreCollection<FMassArchetypeEntityCollection_const_&>
              ((FEntityCollection *)this,true,param_1);
  }
  this->TypeIndex = '\0';
  return;
}

// Get<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c85e0

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
::Get<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
         this;
}

// Get<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c8630

TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
::Get<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
          (TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar3;
  
  if (this->TypeIndex != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  return (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)this;
}

// Get<FMassArchetypeCompositionDescriptor> @ 1471c8680

FMassArchetypeCompositionDescriptor * __thiscall
TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
::Get<FMassArchetypeCompositionDescriptor>
          (TVariant<UE::Mass::ObserverManager::FBufferedNotification::FEmptyComposition,FMassArchetypeCompositionDescriptor,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FMassArchetypeCompositionDescriptor *pFVar3;
  
  if (this->TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMassArchetypeCompositionDescriptor *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FMassArchetypeCompositionDescriptor *)this;
}

// TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits> @ 1471d5680

TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
* __thiscall
TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
::
TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
          (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
           *this,TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                 *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
  *pTVar4;
  
  bVar1 = param_1->TypeIndex;
  this->TypeIndex = bVar1;
  if (3 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x105,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[bVar1])(this,param_1);
  return this;
}

