// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 34

// StaticStruct @ 14d4dace0

UScriptStruct * __cdecl FStateTreeInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceData,(UObject *)pUVar1,
                         L"StateTreeInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeInstanceData.OuterSingleton;
}

// FStateTreeInstanceData @ 14d4eb160

FStateTreeInstanceData * __thiscall
FStateTreeInstanceData::FStateTreeInstanceData
          (FStateTreeInstanceData *this,FStateTreeInstanceData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FStateTreeInstanceStorage *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar4;
  TSharedRef<FStateTreeInstanceStorage,1> local_18;
  
  MakeShared<FStateTreeInstanceStorage,1>(&this->InstanceStorage);
  pTVar1 = (param_1->InstanceStorage).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->InstanceStorage).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
  (this->InstanceStorage).Object = pFVar2;
  (this->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar4 = MakeShared<FStateTreeInstanceStorage,1>(&local_18);
  pFVar2 = (param_1->InstanceStorage).Object;
  pTVar1 = (param_1->InstanceStorage).SharedReferenceCount.ReferenceController;
  pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
  (param_1->InstanceStorage).Object = pTVar4->Object;
  (param_1->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar3;
  pTVar4->Object = pFVar2;
  (pTVar4->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// FStateTreeInstanceData @ 14d4eb1e0

FStateTreeInstanceData * __thiscall
FStateTreeInstanceData::FStateTreeInstanceData
          (FStateTreeInstanceData *this,FStateTreeInstanceData *param_1)

{
  FStateTreeInstanceStorage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar4;
  TSharedRef<FStateTreeInstanceStorage,1> local_18;
  
  MakeShared<FStateTreeInstanceStorage,1>(&this->InstanceStorage);
  pTVar4 = MakeShared<FStateTreeInstanceStorage,1,FStateTreeInstanceStorage_&>
                     (&local_18,(param_1->InstanceStorage).Object);
  pFVar1 = (this->InstanceStorage).Object;
  pTVar2 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
  pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
  (this->InstanceStorage).Object = pTVar4->Object;
  (this->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar3;
  pTVar4->Object = pFVar1;
  (pTVar4->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// FStateTreeInstanceData @ 14d4eb230

FStateTreeInstanceData * __thiscall
FStateTreeInstanceData::FStateTreeInstanceData(FStateTreeInstanceData *this)

{
  MakeShared<FStateTreeInstanceStorage,1>(&this->InstanceStorage);
  return this;
}

// ~FStateTreeInstanceData @ 14d4ec860

void __thiscall FStateTreeInstanceData::~FStateTreeInstanceData(FStateTreeInstanceData *this)

{
  FStateTreeInstanceStorage::Reset((this->InstanceStorage).Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstanceStorage).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14d4ed1b0

FStateTreeInstanceData * __thiscall
FStateTreeInstanceData::operator=(FStateTreeInstanceData *this,FStateTreeInstanceData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FStateTreeInstanceStorage *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar4;
  TSharedRef<FStateTreeInstanceStorage,1> local_18;
  
  pTVar1 = (param_1->InstanceStorage).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->InstanceStorage).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
  (this->InstanceStorage).Object = pFVar2;
  (this->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar4 = MakeShared<FStateTreeInstanceStorage,1>(&local_18);
  pFVar2 = (param_1->InstanceStorage).Object;
  pTVar1 = (param_1->InstanceStorage).SharedReferenceCount.ReferenceController;
  pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
  (param_1->InstanceStorage).Object = pTVar4->Object;
  (param_1->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar3;
  pTVar4->Object = pFVar2;
  (pTVar4->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14d4ed220

FStateTreeInstanceData * __thiscall
FStateTreeInstanceData::operator=(FStateTreeInstanceData *this,FStateTreeInstanceData *param_1)

{
  FStateTreeInstanceStorage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar4;
  TSharedRef<FStateTreeInstanceStorage,1> local_18;
  
  pTVar4 = MakeShared<FStateTreeInstanceStorage,1,FStateTreeInstanceStorage_&>
                     (&local_18,(param_1->InstanceStorage).Object);
  pFVar1 = (this->InstanceStorage).Object;
  pTVar2 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
  pTVar3 = (pTVar4->SharedReferenceCount).ReferenceController;
  (this->InstanceStorage).Object = pTVar4->Object;
  (this->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar3;
  pTVar4->Object = pFVar1;
  (pTVar4->SharedReferenceCount).ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// AddStructReferencedObjects @ 14d4ef630

void __thiscall
FStateTreeInstanceData::AddStructReferencedObjects
          (FStateTreeInstanceData *this,FReferenceCollector *param_1)

{
  FStateTreeInstanceStorage *pFVar1;
  FStateTreeEventQueue *pFVar2;
  UPackage *pUVar3;
  
  pFVar1 = (this->InstanceStorage).Object;
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar3,
                         L"StateTreeInstanceStorage");
  }
  FReferenceCollector::AddPropertyReferencesWithStructARO
            (param_1,Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton,
             pFVar1,(UObject *)0x0);
  pFVar2 = (pFVar1->EventQueue).Object;
  if (Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar3 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEventQueue,(UObject *)pUVar3,
                         L"StateTreeEventQueue");
  }
  FReferenceCollector::AddPropertyReferencesWithStructARO
            (param_1,Z_Registration_Info_UScriptStruct_FStateTreeEventQueue.OuterSingleton,pFVar2,
             (UObject *)0x0);
  return;
}

// AddTransitionRequest @ 14d4efb60

void __thiscall
FStateTreeInstanceData::AddTransitionRequest
          (FStateTreeInstanceData *this,UObject *param_1,FStateTreeTransitionRequest *param_2)

{
  FStateTreeInstanceStorage::AddTransitionRequest((this->InstanceStorage).Object,param_1,param_2);
  return;
}

// Append @ 14d4f0280

void __thiscall
FStateTreeInstanceData::Append
          (FStateTreeInstanceData *this,UObject *param_1,
          TArrayView<FConstStructView_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  FStateTreeInstanceStorage *this_00;
  TArrayView<FConstStructView_const_,int> local_18;
  
  if (param_1 != (UObject *)0x0) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    this_00 = (this->InstanceStorage).Object;
    iVar1 = (this_00->InstanceStructs).NumItems;
    FInstancedStructContainer::Append(&this_00->InstanceStructs,&local_18);
    UE::StateTree::InstanceData::Private::PostAppendToInstanceStructContainer
              (&this_00->InstanceStructs,(TNotNull<UObject_*>)param_1,
               param_3.bDuplicateWrappedObject,iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Append @ 14d4f02f0

void __thiscall
FStateTreeInstanceData::Append
          (FStateTreeInstanceData *this,UObject *param_1,
          TArrayView<FConstStructView_const_,int> *param_2,
          TArrayView<FInstancedStruct_*_const,int> *param_3,FAddArgs param_4)

{
  int iVar1;
  FStateTreeInstanceStorage *this_00;
  UScriptStruct *pUVar2;
  FInstancedStruct *this_01;
  UScriptStruct *pUVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  UPackage *pUVar9;
  TNotNull<UObject_*> TVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uchar *puVar15;
  undefined1 local_58 [16];
  TArrayView<FConstStructView_const_,int> local_48;
  
  if ((param_2->ArrayNum != param_3->ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStructs.Num() == InInstancesToMove.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                         ,0x3f2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (this->InstanceStorage).Object;
  local_48.DataPtr = param_2->DataPtr;
  local_48.ArrayNum = param_2->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
  iVar1 = (this_00->InstanceStructs).NumItems;
  FInstancedStructContainer::Append(&this_00->InstanceStructs,&local_48);
  iVar13 = (this_00->InstanceStructs).NumItems;
  if (iVar1 < iVar13) {
    iVar12 = iVar1 << 4;
    lVar14 = 0;
    iVar11 = iVar1;
    do {
      if ((((iVar13 < 1) || (iVar11 < 0)) || (iVar13 <= iVar11)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x84,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = (this_00->InstanceStructs).NumItems;
      if (((iVar13 < 1) || (iVar13 <= iVar11)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar15 = (this_00->InstanceStructs).Memory;
      lVar8 = (longlong)((this_00->InstanceStructs).AllocatedSize - iVar12);
      pUVar2 = *(UScriptStruct **)(puVar15 + lVar8 + -0x10);
      puVar15 = puVar15 + *(int *)(puVar15 + lVar8 + -8);
      uVar7 = 0;
      if (iVar11 - iVar1 < param_3->ArrayNum) {
        uVar7 = (uint)~(iVar11 - iVar1) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = *(FInstancedStruct **)(lVar14 + (longlong)param_3->DataPtr);
      if ((puVar15 != (uchar *)0x0) && (pUVar2 != (UScriptStruct *)0x0)) {
        if ((this_01 == (FInstancedStruct *)0x0) ||
           ((this_01->StructMemory == (uchar *)0x0 ||
            (pUVar3 = (this_01->ScriptStruct).field0_0x0.DebugPtr, pUVar3 == (UScriptStruct *)0x0)))
           ) {
          if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar9 = Z_Construct_UPackage__Script_StateTreeModule();
            Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                 (UObject *)pUVar9,L"StateTreeInstanceObjectWrapper");
          }
          if (pUVar2 == Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.
                        OuterSingleton) {
LAB_14d4f0581:
            if (*(UObject **)puVar15 != (UObject *)0x0) {
              if (param_1 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::ReportNotNullPtr();
              }
              TVar10 = UE::StateTree::InstanceData::Private::CopyNodeInstance
                                 ((UObject *)local_58,*(UObject **)puVar15,SUB81(param_1,0));
                    /* WARNING: Load size is inaccurate */
              pUVar4 = *TVar10.Val;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar4);
              }
              *(UObject **)puVar15 = pUVar4;
            }
          }
          else {
            if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar9 = Z_Construct_UPackage__Script_StateTreeModule();
              Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                   (UObject *)pUVar9,L"StateTreeInstanceObjectWrapper");
            }
            if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton !=
                (UScriptStruct *)0x0) {
              iVar13 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.
                            OuterSingleton)->_padding_;
              if (((int)pUVar2->_padding_ < iVar13) ||
                 ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar13 * 8) !=
                  &(Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton
                   )->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) goto LAB_14d4f0581;
            }
          }
        }
        else {
          if ((pUVar2 != pUVar3) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Struct.GetScriptStruct() == Source->GetScriptStruct()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                                 ,0x406,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar13 = (int)*(short *)((longlong)&pUVar2->_padding_ + 4);
          FGenericPlatformMemory::Memswap
                    (puVar15,this_01->StructMemory,
                     (longlong)((int)pUVar2->_padding_ + -1 + iVar13 & -iVar13));
          FInstancedStruct::Reset(this_01);
        }
      }
      iVar11 = iVar11 + 1;
      iVar13 = (this_00->InstanceStructs).NumItems;
      iVar12 = iVar12 + 0x10;
      lVar14 = lVar14 + 8;
    } while (iVar11 < iVar13);
  }
  return;
}

// Append @ 14d4f0620

void __thiscall
FStateTreeInstanceData::Append
          (FStateTreeInstanceData *this,UObject *param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  FStateTreeInstanceStorage *this_00;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  if (param_1 != (UObject *)0x0) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    this_00 = (this->InstanceStorage).Object;
    iVar1 = (this_00->InstanceStructs).NumItems;
    FInstancedStructContainer::Append(&this_00->InstanceStructs,&local_18);
    UE::StateTree::InstanceData::Private::PostAppendToInstanceStructContainer
              (&this_00->InstanceStructs,(TNotNull<UObject_*>)param_1,
               param_3.bDuplicateWrappedObject,iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AreAllInstancesValid @ 14d4f06a0

bool __thiscall FStateTreeInstanceData::AreAllInstancesValid(FStateTreeInstanceData *this)

{
  FStateTreeInstanceStorage *pFVar1;
  bool bVar2;
  
  pFVar1 = (this->InstanceStorage).Object;
  bVar2 = UE::StateTree::InstanceData::Private::AreAllInstancesValid(&pFVar1->InstanceStructs);
  if (bVar2) {
    bVar2 = UE::StateTree::InstanceData::Private::AreAllInstancesValid
                      (&(pFVar1->ExecutionRuntimeData).InstanceStructs);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// CopyFrom @ 14d4f34f0

void __thiscall
FStateTreeInstanceData::CopyFrom
          (FStateTreeInstanceData *this,UObject *param_1,FStateTreeInstanceData *param_2)

{
  int iVar1;
  int iVar2;
  FStateTreeInstanceStorage *this_00;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  TNotNull<UObject_*> TVar10;
  longlong lVar11;
  int iVar12;
  uchar *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  
  if (param_2 != this) {
    this_00 = (this->InstanceStorage).Object;
    FInstancedStructContainer::operator=
              (&this_00->InstanceStructs,&((param_2->InstanceStorage).Object)->InstanceStructs);
    iVar1 = (this_00->InstanceStructs).NumItems;
    iVar14 = 0;
    if (iVar1 != 0) {
      iVar12 = 0;
      pUVar9 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton;
      do {
        iVar2 = (this_00->InstanceStructs).NumItems;
        if (((iVar2 < 1) || (iVar2 <= iVar14)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""),
           pUVar9 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar3 = (this_00->InstanceStructs).Memory;
        lVar11 = (longlong)((this_00->InstanceStructs).AllocatedSize - iVar12);
        puVar13 = puVar3 + *(int *)(puVar3 + lVar11 + -8);
        if ((puVar13 != (uchar *)0x0) &&
           (pUVar4 = *(UScriptStruct **)(puVar3 + lVar11 + -0x10), pUVar4 != (UScriptStruct *)0x0))
        {
          if (pUVar9 == (UScriptStruct *)0x0) {
            pUVar8 = Z_Construct_UPackage__Script_StateTreeModule();
            pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                     (UObject *)pUVar8,L"StateTreeInstanceObjectWrapper");
            Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
                 pUVar9;
          }
          if (pUVar4 != pUVar9) {
            if (pUVar9 == (UScriptStruct *)0x0) {
              pUVar8 = Z_Construct_UPackage__Script_StateTreeModule();
              pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceObjectWrapper,
                                       (UObject *)pUVar8,L"StateTreeInstanceObjectWrapper");
              Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.OuterSingleton =
                   pUVar9;
              if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14d4f366c;
            }
            iVar2 = (int)pUVar9->_padding_;
            if (((int)pUVar4->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_14d4f366c;
          }
          if (*(UObject **)puVar13 != (UObject *)0x0) {
            if (param_1 == (UObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            TVar10 = UE::StateTree::InstanceData::Private::CopyNodeInstance
                               ((UObject *)local_res8,*(UObject **)puVar13,SUB81(param_1,0));
                    /* WARNING: Load size is inaccurate */
            pUVar5 = *TVar10.Val;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar5);
            }
            *(UObject **)puVar13 = pUVar5;
            pUVar9 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceObjectWrapper.
                     OuterSingleton;
          }
        }
LAB_14d4f366c:
        iVar14 = iVar14 + 1;
        iVar12 = iVar12 + 0x10;
      } while (iVar14 != iVar1);
    }
  }
  return;
}

// GetEstimatedMemoryUsage @ 14d4fdc40

int __thiscall FStateTreeInstanceData::GetEstimatedMemoryUsage(FStateTreeInstanceData *this)

{
  FStateTreeInstanceStorage *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = (this->InstanceStorage).Object;
  iVar2 = UE::StateTree::InstanceData::Private::GetAllocatedMemory(&pFVar1->InstanceStructs);
  iVar3 = UE::StateTree::InstanceData::Private::GetAllocatedMemory
                    (&(pFVar1->ExecutionRuntimeData).InstanceStructs);
  return iVar3 + 0x10 + iVar2;
}

// GetEventQueue @ 14d4fdc80

FStateTreeEventQueue * __thiscall
FStateTreeInstanceData::GetEventQueue(FStateTreeInstanceData *this)

{
  return (((this->InstanceStorage).Object)->EventQueue).Object;
}

// GetMutableEventQueue @ 14d4fe480

FStateTreeEventQueue * __thiscall
FStateTreeInstanceData::GetMutableEventQueue(FStateTreeInstanceData *this)

{
  return (((this->InstanceStorage).Object)->EventQueue).Object;
}

// GetMutableStorage @ 14d4fe600

FStateTreeInstanceStorage * __thiscall
FStateTreeInstanceData::GetMutableStorage(FStateTreeInstanceData *this)

{
  return (this->InstanceStorage).Object;
}

// GetPreloadDependencies @ 14d4fefb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStateTreeInstanceData::GetPreloadDependencies
          (FStateTreeInstanceData *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FStateTreeInstanceStorage *pFVar2;
  UObjectBaseUtility *this_00;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  UScriptStruct *this_01;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UPackage *pUVar10;
  ICppStructOps *this_02;
  FFieldClass *pFVar11;
  TTuple<FProperty_const_*,void_const_*> *pTVar12;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar13;
  uint uVar14;
  undefined1 auStackY_7a8 [32];
  UScriptStruct *local_758;
  FString local_750;
  FPropertyValueIterator local_740;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar10,
                         L"StateTreeInstanceStorage");
  }
  this_01 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton;
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_758 = Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton;
  if (((pFVar1 <= (FScriptContainerElement *)&local_758) &&
      ((FScriptContainerElement *)&local_758 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 == param_1->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar8 + 1;
  *(UScriptStruct **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_758;
  this_02 = UScriptStruct::GetCppStructOps(this_01);
  if (this_02 != (ICppStructOps *)0x0) {
    UScriptStruct::ICppStructOps::GetPreloadDependencies
              (this_02,(this->InstanceStorage).Object,param_1);
  }
  pFVar2 = (this->InstanceStorage).Object;
  pFVar11 = FStructProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_740,pFVar11,(UStruct *)this_01,pFVar2,FullRecursion,IncludeDeprecated);
  do {
    if (local_740.PropertyIteratorStack.ArrayNum < 1) {
      FVar13 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_740;
      if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar13 = local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar13,local_740.PropertyIteratorStack.ArrayNum);
      if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
      return;
    }
    pTVar12 = FPropertyValueIterator::operator->(&local_740);
    this_00 = *(UObjectBaseUtility **)(*(longlong *)pTVar12 + 0x70);
    if (this_00[4].field_0x14 == '\0') {
      UObjectBaseUtility::GetPathName(this_00,&local_750,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrepareCppStructOpsCompleted",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x8f6,
                         L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s")
      ;
      if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_750.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar3 = *(undefined8 **)&this_00[4].field_0x18;
    if (puVar3 != (undefined8 *)0x0) {
      pTVar12 = FPropertyValueIterator::operator->(&local_740);
      puVar4 = (uint *)*puVar3;
      uVar5 = *(undefined8 *)&pTVar12->field_0x8;
      if ((*(byte *)((longlong)puVar4 + 0x17) & 4) != 0) {
        if (((*puVar4 & 0x200) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!(this->Flags & FuncFlag)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x660,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar14 = 0;
        for (uVar9 = *puVar4 & 0x1ff; uVar9 != 0; uVar9 = uVar9 & uVar9 - 1) {
          uVar14 = uVar14 + 1;
        }
        (**(code **)(puVar4 + (ulonglong)uVar14 * 2 + 6))(uVar5,param_1);
      }
    }
    FPropertyValueIterator::IterateToNext(&local_740);
  } while( true );
}

// GetSharedMutableEventQueue @ 14d4ff5a0

TSharedRef<FStateTreeEventQueue,1> * __thiscall
FStateTreeInstanceData::GetSharedMutableEventQueue(FStateTreeInstanceData *this)

{
  return &((this->InstanceStorage).Object)->EventQueue;
}

// GetStorage @ 14d500070

FStateTreeInstanceStorage * __thiscall
FStateTreeInstanceData::GetStorage(FStateTreeInstanceData *this)

{
  return (this->InstanceStorage).Object;
}

// GetTransitionRequests @ 14d500660

TArrayView<FStateTreeTransitionRequest_const_,int> * __thiscall
FStateTreeInstanceData::GetTransitionRequests
          (FStateTreeInstanceData *this,
          TArrayView<FStateTreeTransitionRequest_const_,int> *__return_storage_ptr__)

{
  FStateTreeInstanceStorage::GetTransitionRequests
            ((this->InstanceStorage).Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetWeakMutableStorage @ 14d500ad0

TWeakPtr<FStateTreeInstanceStorage,1> * __thiscall
FStateTreeInstanceData::GetWeakMutableStorage
          (FStateTreeInstanceData *this,
          TWeakPtr<FStateTreeInstanceStorage,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->InstanceStorage).Object;
  pTVar1 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetWeakStorage @ 14d500b00

TWeakPtr<FStateTreeInstanceStorage_const_,1> * __thiscall
FStateTreeInstanceData::GetWeakStorage
          (FStateTreeInstanceData *this,
          TWeakPtr<FStateTreeInstanceStorage_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->InstanceStorage).Object;
  pTVar1 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// Identical @ 14d500b60

bool __thiscall
FStateTreeInstanceData::Identical
          (FStateTreeInstanceData *this,FStateTreeInstanceData *param_1,uint param_2)

{
  FStateTreeInstanceStorage *this_00;
  FStateTreeInstanceStorage *this_01;
  UObject *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  FConstStructView *pFVar4;
  FStateTreeInstanceObjectWrapper *pFVar5;
  FStateTreeInstanceObjectWrapper *pFVar6;
  int iVar7;
  FConstStructView local_38;
  FConstStructView local_28;
  
  if (param_1 != (FStateTreeInstanceData *)0x0) {
    this_00 = (this->InstanceStorage).Object;
    this_01 = (param_1->InstanceStorage).Object;
    bVar3 = FInstancedPropertyBag::Identical
                      (&this_00->GlobalParameters,&this_01->GlobalParameters,param_2);
    if ((bVar3) &&
       (bVar3 = FInstancedStructContainer::Identical
                          (&this_00->InstanceStructs,&this_01->InstanceStructs,param_2), bVar3)) {
      iVar7 = 0;
      if (0 < (this_00->InstanceStructs).NumItems) {
        do {
          pFVar4 = FInstancedStructContainer::operator[](&this_00->InstanceStructs,&local_38,iVar7);
          pFVar5 = FConstStructView::GetPtr<FStateTreeInstanceObjectWrapper_const_>(pFVar4);
          pFVar4 = FInstancedStructContainer::operator[](&this_01->InstanceStructs,&local_28,iVar7);
          pFVar6 = FConstStructView::GetPtr<FStateTreeInstanceObjectWrapper_const_>(pFVar4);
          if ((pFVar5 != (FStateTreeInstanceObjectWrapper *)0x0) &&
             ((pFVar6 == (FStateTreeInstanceObjectWrapper *)0x0 ||
              (((pUVar1 = (pFVar5->InstanceObject).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0 &&
                (pUVar2 = (pFVar6->InstanceObject).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0))
               && (((param_2 >> 0x16 & 1) != 0 ||
                   (((pUVar1 != pUVar2 && ((param_2 & 0x300) != 0)) &&
                    (bVar3 = FObjectPropertyBase::StaticIdentical(pUVar1,pUVar2,param_2), !bVar3))))
                  )))))) {
            return false;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (this_00->InstanceStructs).NumItems);
      }
      return true;
    }
  }
  return false;
}

// Init @ 14d500e70

void __thiscall
FStateTreeInstanceData::Init
          (FStateTreeInstanceData *this,UObject *param_1,
          TArrayView<FConstStructView_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  FStateTreeInstanceStorage *this_00;
  TArrayView<FConstStructView_const_,int> local_18;
  
  FStateTreeInstanceStorage::Reset((this->InstanceStorage).Object);
  if (param_1 != (UObject *)0x0) {
    this_00 = (this->InstanceStorage).Object;
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    iVar1 = (this_00->InstanceStructs).NumItems;
    FInstancedStructContainer::Append(&this_00->InstanceStructs,&local_18);
    UE::StateTree::InstanceData::Private::PostAppendToInstanceStructContainer
              (&this_00->InstanceStructs,(TNotNull<UObject_*>)param_1,
               param_3.bDuplicateWrappedObject,iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Init @ 14d500f00

void __thiscall
FStateTreeInstanceData::Init
          (FStateTreeInstanceData *this,UObject *param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2,FAddArgs param_3)

{
  int iVar1;
  FStateTreeInstanceStorage *this_00;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  FStateTreeInstanceStorage::Reset((this->InstanceStorage).Object);
  if (param_1 != (UObject *)0x0) {
    this_00 = (this->InstanceStorage).Object;
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    iVar1 = (this_00->InstanceStructs).NumItems;
    FInstancedStructContainer::Append(&this_00->InstanceStructs,&local_18);
    UE::StateTree::InstanceData::Private::PostAppendToInstanceStructContainer
              (&this_00->InstanceStructs,(TNotNull<UObject_*>)param_1,
               param_3.bDuplicateWrappedObject,iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsOwningEventQueue @ 14d501a80

bool __thiscall FStateTreeInstanceData::IsOwningEventQueue(FStateTreeInstanceData *this)

{
  return ((this->InstanceStorage).Object)->bIsOwningEventQueue;
}

// Reset @ 14d506690

void __thiscall FStateTreeInstanceData::Reset(FStateTreeInstanceData *this)

{
  FStateTreeInstanceStorage::Reset((this->InstanceStorage).Object);
  return;
}

// ResetTemporaryInstances @ 14d506990

void __thiscall FStateTreeInstanceData::ResetTemporaryInstances(FStateTreeInstanceData *this)

{
  int *piVar1;
  int iVar2;
  FStateTreeInstanceStorage *pFVar3;
  FStateTreeTemporaryInstanceData *pFVar4;
  
  pFVar3 = (this->InstanceStorage).Object;
  pFVar4 = (FStateTreeTemporaryInstanceData *)(pFVar3->TemporaryInstances).AllocatorInstance.Data;
  piVar1 = &(pFVar3->TemporaryInstances).ArrayMax;
  iVar2 = (pFVar3->TemporaryInstances).ArrayNum;
  if (-1 < (pFVar3->TemporaryInstances).ArrayMax) {
    DestructItems<FStateTreeTemporaryInstanceData,int>(pFVar4,iVar2);
    (pFVar3->TemporaryInstances).ArrayNum = 0;
    return;
  }
  DestructItems<FStateTreeTemporaryInstanceData,int>(pFVar4,iVar2);
  (pFVar3->TemporaryInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(pFVar3->TemporaryInstances).AllocatorInstance,0,piVar1);
  }
  return;
}

// ResetTransitionRequests @ 14d506a90

void __thiscall FStateTreeInstanceData::ResetTransitionRequests(FStateTreeInstanceData *this)

{
  FStateTreeInstanceStorage *pFVar1;
  
  pFVar1 = (this->InstanceStorage).Object;
  (pFVar1->TransitionRequests).ArrayNum = 0;
  if ((pFVar1->TransitionRequests).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(pFVar1->TransitionRequests).AllocatorInstance,0,
               &(pFVar1->TransitionRequests).ArrayMax);
  }
  return;
}

// Serialize @ 14d513830

bool __thiscall FStateTreeInstanceData::Serialize(FStateTreeInstanceData *this,FArchive *param_1)

{
  FStateTreeInstanceStorage *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  int iVar4;
  TSharedRef<FStateTreeInstanceStorage,1> *pTVar5;
  UPackage *pUVar6;
  TSharedRef<FStateTreeInstanceStorage,1> local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FStateTreeInstanceStorageCustomVersion::GUID)
  ;
  if ((param_1->field_0x28 & 1) != 0) {
    iVar4 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FStateTreeInstanceStorageCustomVersion::GUID);
    if (iVar4 < 1) {
      pTVar5 = MakeShared<FStateTreeInstanceStorage,1>(&local_18);
      pFVar1 = (this->InstanceStorage).Object;
      pTVar2 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
      pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
      (this->InstanceStorage).Object = pTVar5->Object;
      (this->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar3;
      pTVar5->Object = pFVar1;
      (pTVar5->SharedReferenceCount).ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return true;
    }
    pTVar5 = MakeShared<FStateTreeInstanceStorage,1>(&local_18);
    pFVar1 = (this->InstanceStorage).Object;
    pTVar2 = (this->InstanceStorage).SharedReferenceCount.ReferenceController;
    pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
    (this->InstanceStorage).Object = pTVar5->Object;
    (this->InstanceStorage).SharedReferenceCount.ReferenceController = pTVar3;
    pTVar5->Object = pFVar1;
    (pTVar5->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeInstanceStorage,(UObject *)pUVar6,
                         L"StateTreeInstanceStorage");
  }
  UScriptStruct::SerializeItem
            (Z_Registration_Info_UScriptStruct_FStateTreeInstanceStorage.OuterSingleton,param_1,
             (this->InstanceStorage).Object,(void *)0x0);
  return true;
}

// SetSharedEventQueue @ 14d515010

void __thiscall
FStateTreeInstanceData::SetSharedEventQueue
          (FStateTreeInstanceData *this,TSharedRef<FStateTreeEventQueue,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FStateTreeInstanceStorage *pFVar2;
  FStateTreeEventQueue *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = (this->InstanceStorage).Object;
  pFVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar2->EventQueue).SharedReferenceCount.ReferenceController;
  (pFVar2->EventQueue).Object = pFVar3;
  (pFVar2->EventQueue).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pFVar2->bIsOwningEventQueue = false;
  return;
}

// ShrinkTo @ 14d5155f0

void __thiscall FStateTreeInstanceData::ShrinkTo(FStateTreeInstanceData *this,int param_1)

{
  FStateTreeInstanceStorage *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->InstanceStorage).Object;
  if ((this_00->InstanceStructs).NumItems < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumStructs <= Storage.InstanceStructs.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\StateTreeInstanceData.cpp"
                       ,0x41a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FInstancedStructContainer::SetNum(&this_00->InstanceStructs,param_1);
  return;
}

