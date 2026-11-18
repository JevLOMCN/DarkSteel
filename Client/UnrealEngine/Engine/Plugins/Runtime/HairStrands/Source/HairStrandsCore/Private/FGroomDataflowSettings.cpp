// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// StaticStruct @ 14df8ec10

UScriptStruct * __cdecl FGroomDataflowSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGroomDataflowSettings,(UObject *)pUVar1,
                         L"GroomDataflowSettings");
  }
  return Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton;
}

// FGroomDataflowSettings @ 14dfabb20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGroomDataflowSettings * __thiscall
FGroomDataflowSettings::FGroomDataflowSettings
          (FGroomDataflowSettings *this,UObject *param_1,UDataflow *param_2,FName param_3)

{
  TSharedPtr<FManagedArrayCollection,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGroomDataflowSettings *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FManagedArrayCollection *pFVar7;
  FManagedArrayCollection *local_28;
  FSharedReferencer<1> FStack_20;
  
  FDataflowInstance::FDataflowInstance((FDataflowInstance *)this,param_1,param_2,param_3);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar1 = &this->RestCollection;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  (this->MeshLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshLODs).ArrayNum = 0;
  (this->MeshLODs).ArrayMax = 0;
  pTVar1->Object = (FManagedArrayCollection *)0x0;
  (this->RestCollection).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar4 = ::operator_new(0xc0);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FManagedArrayCollection *)&DAT_00000010;
    FStack_20.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFManagedArrayCollection___00_SharedPointerInternals__6B_
    ;
    FManagedArrayCollection::FManagedArrayCollection((FManagedArrayCollection *)(pTVar4 + 1));
    pFVar7 = (FManagedArrayCollection *)(pTVar4 + 1);
    if (pFVar7 == (FManagedArrayCollection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGroomDataflowSettings *)(*pcVar2)();
        return pFVar5;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FStack_20.ReferenceController = pTVar4;
    pTVar6 = pTVar4;
    local_28 = pFVar7;
  }
  if (pTVar1 != (TSharedPtr<FManagedArrayCollection,1> *)&local_28) {
    pTVar1->Object = pFVar7;
    local_28 = (FManagedArrayCollection *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RestCollection).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return this;
}

// GetDataflowAssetMemberName @ 14dfc68f0

FName __cdecl FGroomDataflowSettings::GetDataflowAssetMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"DataflowAsset");
  return in_RCX;
}

// GetDataflowTerminalMemberName @ 14dfc6970

FName __cdecl FGroomDataflowSettings::GetDataflowTerminalMemberName(void)

{
  FName in_RCX;
  
  ::FName::FName((FName *)in_RCX,"DataflowTerminal");
  return in_RCX;
}

// Serialize @ 14dfd6530

bool __thiscall FGroomDataflowSettings::Serialize(FGroomDataflowSettings *this,FArchive *param_1)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UPackage *pUVar5;
  FChaosArchiveContext *this_00;
  FChaosArchiveContext *pFVar6;
  FArchiveProxy local_a8;
  FChaosArchiveContext *local_10;
  
  pFVar6 = (FChaosArchiveContext *)0x0;
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_HairStrandsCore();
      Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGroomDataflowSettings,(UObject *)pUVar5,
                           L"GroomDataflowSettings");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton,
               param_1,(uchar *)this,
               (UStruct *)Z_Registration_Info_UScriptStruct_FGroomDataflowSettings.OuterSingleton,
               (uchar *)0x0,(UObject *)0x0);
  }
  if ((this->RestCollection).Object != (FManagedArrayCollection *)0x0) {
    FArchiveProxy::FArchiveProxy(&local_a8,param_1);
    local_a8._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
    this_00 = ::operator_new(0x158);
    if (this_00 != (FChaosArchiveContext *)0x0) {
      pFVar6 = Chaos::FChaosArchiveContext::FChaosArchiveContext(this_00);
    }
    local_10 = pFVar6;
    if ((this->RestCollection).Object == (FManagedArrayCollection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = (this->RestCollection).Object;
    (**(code **)(pFVar1->_padding_ + 0x40))(pFVar1,&local_a8);
    pFVar6 = local_10;
    if (local_10 != (FChaosArchiveContext *)0x0) {
      Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_10);
      ::operator_delete(pFVar6,0x158);
    }
    FArchiveProxy::~FArchiveProxy(&local_a8);
  }
  return true;
}

