// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// FAsyncPathFindingQuery @ 146d72910

FAsyncPathFindingQuery * __thiscall
FAsyncPathFindingQuery::FAsyncPathFindingQuery
          (FAsyncPathFindingQuery *this,FAsyncPathFindingQuery *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  FPathFindingQueryData::FPathFindingQueryData
            ((FPathFindingQueryData *)this,(FPathFindingQueryData *)param_1);
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties
            ((FNavAgentProperties *)&this->_padding_,(FNavAgentProperties *)&param_1->_padding_);
  this->QueryID = param_1->QueryID;
  TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
            (&this->OnDoneDelegate,&param_1->OnDoneDelegate);
  (this->Mode).Value = (param_1->Mode).Value;
  (this->Result).Path.Object = (param_1->Result).Path.Object;
  pTVar2 = (param_1->Result).Path.SharedReferenceCount.ReferenceController;
  (this->Result).Path.SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Result).Result = (param_1->Result).Result;
  return this;
}

// FAsyncPathFindingQuery @ 146d729d0

FAsyncPathFindingQuery * __thiscall
FAsyncPathFindingQuery::FAsyncPathFindingQuery
          (FAsyncPathFindingQuery *this,FPathFindingQuery *param_1,
          TDelegate<void___cdecl(unsigned_int,ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
          *param_2,Type param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FPathFindingQueryData::FPathFindingQueryData
            ((FPathFindingQueryData *)this,(FPathFindingQueryData *)param_1);
  this->_padding_ = (longlong)(param_1->NavData).WeakPtr;
  this->_padding_ = (longlong)(param_1->PathInstanceToFill).Object;
  pTVar1 = (param_1->PathInstanceToFill).SharedReferenceCount.ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FNavAgentProperties::FNavAgentProperties
            ((FNavAgentProperties *)&this->_padding_,&param_1->NavAgentProperties);
  LastPathFindingUniqueID = LastPathFindingUniqueID + 1;
  this->QueryID = LastPathFindingUniqueID;
  TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
            (&this->OnDoneDelegate,param_2);
  (this->Result).Path.Object = (FNavigationPath *)0x0;
  (this->Result).Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Result).Result = Invalid;
  (this->Mode).Value = (uchar)param_3;
  return this;
}

// FAsyncPathFindingQuery @ 146d72a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAsyncPathFindingQuery * __thiscall
FAsyncPathFindingQuery::FAsyncPathFindingQuery
          (FAsyncPathFindingQuery *this,UObject *param_1,ANavigationData *param_2,
          TVector<double> *param_3,TVector<double> *param_4,
          TDelegate<void___cdecl(unsigned_int,ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
          *param_5,TSharedPtr<FNavigationQueryFilter_const_,1> *param_6,double param_7)

{
  TSharedPtr<FNavigationQueryFilter_const_,1> local_28;
  TSharedPtr<FNavigationPath,1> local_18;
  
  local_18.Object = (FNavigationPath *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.Object = param_6->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FPathFindingQuery::FPathFindingQuery
            ((FPathFindingQuery *)this,param_1,param_2,param_3,param_4,&local_28,&local_18,
             __real_7fefffffffffffff,true);
  LastPathFindingUniqueID = LastPathFindingUniqueID + 1;
  this->QueryID = LastPathFindingUniqueID;
  TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(unsigned_int,enum_ENavigationQueryResult::Type,TSharedPtr<FNavigationPath,1>),FDefaultDelegateUserPolicy>
            (&this->OnDoneDelegate,param_5);
  (this->Mode).Value = '\0';
  (this->Result).Path.Object = (FNavigationPath *)0x0;
  (this->Result).Path.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Result).Result = Invalid;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return this;
}

