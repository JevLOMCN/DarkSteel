// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// FGeometryCollectionEdit @ 14635c6b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGeometryCollectionEdit * __thiscall
FGeometryCollectionEdit::FGeometryCollectionEdit
          (FGeometryCollectionEdit *this,UGeometryCollectionComponent *param_1,EEditUpdate param_2,
          bool param_3,bool param_4)

{
  UGeometryCollectionComponent *pUVar1;
  UActorComponent *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  FGeometryCollectionEdit *pFVar8;
  longlong lVar9;
  UActorComponent *local_res8;
  UGeometryCollectionComponent *local_res10;
  UGeometryCollectionComponent *local_res18 [2];
  TObjectIterator<UGeometryCollectionComponent> local_48;
  
  this->Component = param_1;
  this->EditUpdate = param_2;
  *(undefined8 *)&(this->HadPhysicsState).Elements = 0;
  *(undefined8 *)&(this->HadPhysicsState).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->HadPhysicsState).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->HadPhysicsState).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->HadPhysicsState).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->HadPhysicsState).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HadPhysicsState).Elements.field_0x34 = 0;
  (this->HadPhysicsState).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->HadPhysicsState).HashSize = 0;
  pUVar1 = this->Component;
  this->bShapeIsUnchanged = param_3;
  this->bPropagateToAllMatchingComponents = param_4;
  if ((((TObjectPtr<UGeometryCollection_const_> *)(&pUVar1->field_0x540 + 0x60))->field0_0x0).
      DebugPtr != (UGeometryCollection *)0x0) {
    if (param_4) {
      local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ObjectArray.ArrayNum = 0;
      local_48.ObjectArray.ArrayMax = 0;
      local_48.Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar7 = UGeometryCollectionComponent::StaticClass();
      GetObjectsOfClass(pUVar7,&local_48.ObjectArray,false,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|Garbage|AutoRTFMConstructionAborted
                                ));
      TObjectIterator<UGeometryCollectionComponent>::Advance(&local_48);
      while( true ) {
        lVar9 = (longlong)local_48.Index;
        if (local_48.Index < 0) break;
        if (local_48.ObjectArray.ArrayNum <= local_48.Index) break;
        pUVar1 = this->Component;
        uVar6 = 0;
        if (local_48.Index < local_48.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_48.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FGeometryCollectionEdit *)(*pcVar2)();
            return pFVar8;
          }
        }
        if (*(UGeometryCollection **)
             (*(longlong *)(local_48.ObjectArray.AllocatorInstance.Data + lVar9 * 8) + 0x5a0) ==
            (pUVar1->RestCollection).field0_0x0.DebugPtr) {
          lVar9 = (longlong)local_48.Index;
          uVar6 = 0;
          if (local_48.Index < local_48.ObjectArray.ArrayNum) {
            uVar6 = (uint)~local_48.Index >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FGeometryCollectionEdit *)(*pcVar2)();
              return pFVar8;
            }
          }
          this_00 = *(UActorComponent **)(local_48.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
          local_res8 = this_00;
          cVar4 = (**(code **)(this_00->_padding_ + 0x3c8))(this_00);
          if (((this->EditUpdate & Physics) != None) && (cVar4 != '\0')) {
            TSet<UGeometryCollectionComponent_*,DefaultKeyFuncs<UGeometryCollectionComponent_*,0>,FDefaultSetAllocator>
            ::Emplace<UGeometryCollectionComponent_*_const_&>
                      (&this->HadPhysicsState,(UGeometryCollectionComponent **)&param_4,
                       (bool *)&local_res8);
            UActorComponent::DestroyPhysicsState(this_00);
          }
        }
        TObjectIterator<UGeometryCollectionComponent>::Advance(&local_48);
      }
      if (local_48.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
        return this;
      }
    }
    else {
      local_res10 = pUVar1;
      cVar4 = (**(code **)(*(longlong *)&pUVar1->field_0x0 + 0x3c8))(pUVar1);
      if (((this->EditUpdate & Physics) != None) && (cVar4 != '\0')) {
        TSet<UGeometryCollectionComponent_*,DefaultKeyFuncs<UGeometryCollectionComponent_*,0>,FDefaultSetAllocator>
        ::Emplace<UGeometryCollectionComponent_*_const_&>
                  (&this->HadPhysicsState,local_res18,(bool *)&local_res10);
        UActorComponent::DestroyPhysicsState((UActorComponent *)pUVar1);
      }
    }
  }
  return this;
}

// ~FGeometryCollectionEdit @ 14635ece0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FGeometryCollectionEdit::~FGeometryCollectionEdit(FGeometryCollectionEdit *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->HadPhysicsState).HashSize = 0;
  FVar1 = (this->HadPhysicsState).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UGeometryCollectionComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UGeometryCollectionComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->HadPhysicsState).Elements);
  return;
}

// GetRestCollection @ 14637a140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UGeometryCollection * __thiscall
FGeometryCollectionEdit::GetRestCollection(FGeometryCollectionEdit *this)

{
  if (this->Component != (UGeometryCollectionComponent *)0x0) {
    return (this->Component->RestCollection).field0_0x0.DebugPtr;
  }
  return (UGeometryCollection *)0x0;
}

