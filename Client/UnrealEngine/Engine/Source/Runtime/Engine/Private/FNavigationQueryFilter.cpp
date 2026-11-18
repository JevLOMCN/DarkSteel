// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FNavigationQueryFilter @ 14737beb0

FNavigationQueryFilter * __thiscall
FNavigationQueryFilter::FNavigationQueryFilter
          (FNavigationQueryFilter *this,FNavigationQueryFilter *param_1)

{
  INavigationQueryFilterInterface *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->QueryFilterImpl).Object = (INavigationQueryFilterInterface *)0x0;
  (this->QueryFilterImpl).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pIVar1 = (param_1->QueryFilterImpl).Object;
  if (pIVar1 != (INavigationQueryFilterInterface *)0x0) {
    pTVar2 = (param_1->QueryFilterImpl).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->QueryFilterImpl).SharedReferenceCount.ReferenceController;
    (this->QueryFilterImpl).Object = pIVar1;
    (this->QueryFilterImpl).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  this->MaxSearchNodes = param_1->MaxSearchNodes;
  return this;
}

// FNavigationQueryFilter @ 14737bf20

FNavigationQueryFilter * __thiscall
FNavigationQueryFilter::FNavigationQueryFilter
          (FNavigationQueryFilter *this,FNavigationQueryFilter *param_1)

{
  this->MaxSearchNodes = 0x800;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->QueryFilterImpl).Object = (INavigationQueryFilterInterface *)0x0;
  (this->QueryFilterImpl).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1 != (FNavigationQueryFilter *)0x0) {
    Assign(this,param_1);
  }
  return this;
}

// FNavigationQueryFilter @ 14737bf60

FNavigationQueryFilter * __thiscall
FNavigationQueryFilter::FNavigationQueryFilter
          (FNavigationQueryFilter *this,TSharedPtr<FNavigationQueryFilter,1> *param_1)

{
  TSharedPtr<INavigationQueryFilterInterface,1> *pTVar1;
  INavigationQueryFilterInterface *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  INavigationQueryFilterInterface *local_28;
  FSharedReferencer<1> local_20;
  
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  this->MaxSearchNodes = 0x800;
  pTVar1 = &this->QueryFilterImpl;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pTVar1->Object = (INavigationQueryFilterInterface *)0x0;
  (this->QueryFilterImpl).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (param_1->Object != (FNavigationQueryFilter *)0x0) {
    pIVar2 = (INavigationQueryFilterInterface *)
             (**(code **)((longlong)*(param_1->Object->QueryFilterImpl).Object + 0x80))();
    local_28 = pIVar2;
    pTVar3 = ::operator_new(0x18);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      pTVar3->SharedReferenceCount = (atomic<int>)0x1;
      pTVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_VINavigationQueryFilterInterface__U__DefaultDeleter_VINavigationQueryFilterInterface___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      pTVar3->WeakReferenceCount = (atomic<int>)0x1;
      pTVar3[1]._padding_ = (longlong)pIVar2;
      pTVar4 = pTVar3;
    }
    local_20.ReferenceController = pTVar4;
    if (pTVar1 != (TSharedPtr<INavigationQueryFilterInterface,1> *)&local_28) {
      pTVar1->Object = pIVar2;
      local_28 = (INavigationQueryFilterInterface *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->QueryFilterImpl).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// operator= @ 14737e4e0

FNavigationQueryFilter * __thiscall
FNavigationQueryFilter::operator=(FNavigationQueryFilter *this,FNavigationQueryFilter *param_1)

{
  INavigationQueryFilterInterface *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = (param_1->QueryFilterImpl).Object;
  if (pIVar1 != (INavigationQueryFilterInterface *)0x0) {
    pTVar2 = (param_1->QueryFilterImpl).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->QueryFilterImpl).SharedReferenceCount.ReferenceController;
    (this->QueryFilterImpl).Object = pIVar1;
    (this->QueryFilterImpl).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  this->MaxSearchNodes = param_1->MaxSearchNodes;
  return this;
}

// Assign @ 147384370

void __thiscall
FNavigationQueryFilter::Assign(FNavigationQueryFilter *this,FNavigationQueryFilter *param_1)

{
  INavigationQueryFilterInterface *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pIVar1 = (param_1->QueryFilterImpl).Object;
  if (pIVar1 != (INavigationQueryFilterInterface *)0x0) {
    pTVar2 = (param_1->QueryFilterImpl).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->QueryFilterImpl).SharedReferenceCount.ReferenceController;
    (this->QueryFilterImpl).Object = pIVar1;
    (this->QueryFilterImpl).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    this->MaxSearchNodes = param_1->MaxSearchNodes;
    return;
  }
  this->MaxSearchNodes = param_1->MaxSearchNodes;
  return;
}

// GetAllAreaCosts @ 147397b70

void __thiscall
FNavigationQueryFilter::GetAllAreaCosts
          (FNavigationQueryFilter *this,float *param_1,float *param_2,int param_3)

{
  INavigationQueryFilterInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x000147397be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1,param_2,param_3);
  return;
}

// GetCopy @ 14739a9c0

TSharedPtr<FNavigationQueryFilter,1> * __thiscall
FNavigationQueryFilter::GetCopy
          (FNavigationQueryFilter *this,TSharedPtr<FNavigationQueryFilter,1> *__return_storage_ptr__
          )

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FNavigationQueryFilter *pFVar4;
  TSharedPtr<FNavigationQueryFilter,1> *pTVar5;
  TRawPtrProxy<FNavigationQueryFilter> local_res8;
  TRawPtrProxy<INavigationQueryFilterInterface> local_res10;
  
  pFVar4 = ::operator_new(0x28);
  local_res8.Object = (FNavigationQueryFilter *)0x0;
  if (pFVar4 != (FNavigationQueryFilter *)0x0) {
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    (pFVar4->QueryFilterImpl).Object = (INavigationQueryFilterInterface *)0x0;
    (pFVar4->QueryFilterImpl).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar4->MaxSearchNodes = 0x800;
    local_res8.Object = pFVar4;
  }
  TSharedPtr<FNavigationQueryFilter,1>::TSharedPtr<FNavigationQueryFilter,1><FNavigationQueryFilter>
            (__return_storage_ptr__,&local_res8);
  if (((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FNavigationQueryFilter,1> *)(*pcVar2)();
    return pTVar5;
  }
  local_res10.Object =
       (INavigationQueryFilterInterface *)
       (**(code **)((longlong)*(this->QueryFilterImpl).Object + 0x80))();
  if ((__return_storage_ptr__->Object == (FNavigationQueryFilter *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FNavigationQueryFilter,1> *)(*pcVar2)();
    return pTVar5;
  }
  TSharedPtr<INavigationQueryFilterInterface,1>::operator=<INavigationQueryFilterInterface>
            (&__return_storage_ptr__->Object->QueryFilterImpl,&local_res10);
  uVar1 = this->MaxSearchNodes;
  if ((__return_storage_ptr__->Object == (FNavigationQueryFilter *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedPtr<FNavigationQueryFilter,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object->MaxSearchNodes = uVar1;
  return __return_storage_ptr__;
}

// GetExcludeFlags @ 14739b5a0

ushort __thiscall FNavigationQueryFilter::GetExcludeFlags(FNavigationQueryFilter *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014739b5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*(this->QueryFilterImpl).Object + 0x70))();
  return uVar3;
}

// GetIncludeFlags @ 14739c740

ushort __thiscall FNavigationQueryFilter::GetIncludeFlags(FNavigationQueryFilter *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014739c782. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((longlong)*(this->QueryFilterImpl).Object + 0x60))();
  return uVar3;
}

// SetAllAreaCosts @ 1473b5840

void __thiscall
FNavigationQueryFilter::SetAllAreaCosts
          (FNavigationQueryFilter *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  INavigationQueryFilterInterface *pIVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pIVar3 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001473b58a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,pFVar2,iVar1);
  return;
}

// SetAllAreaCosts @ 1473b58b0

void __thiscall
FNavigationQueryFilter::SetAllAreaCosts(FNavigationQueryFilter *this,float *param_1,int param_2)

{
  INavigationQueryFilterInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001473b5911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1,param_2);
  return;
}

// SetAreaCost @ 1473b5bf0

void __thiscall
FNavigationQueryFilter::SetAreaCost(FNavigationQueryFilter *this,uchar param_1,float param_2)

{
  INavigationQueryFilterInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryFilterImpl.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationTypes.cpp"
                       ,0x148,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001473b5c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1,param_2);
  return;
}

// SetExcludeFlags @ 1473b69d0

void __thiscall FNavigationQueryFilter::SetExcludeFlags(FNavigationQueryFilter *this,ushort param_1)

{
  INavigationQueryFilterInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001473b6a21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,param_1);
  return;
}

// SetExcludedArea @ 1473b6a30

void __thiscall FNavigationQueryFilter::SetExcludedArea(FNavigationQueryFilter *this,uchar param_1)

{
  INavigationQueryFilterInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001473b6a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_1);
  return;
}

// SetFixedAreaEnteringCost @ 1473b6c20

void __thiscall
FNavigationQueryFilter::SetFixedAreaEnteringCost
          (FNavigationQueryFilter *this,uchar param_1,float param_2)

{
  INavigationQueryFilterInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("QueryFilterImpl.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationTypes.cpp"
                       ,0x14e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001473b6caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,param_2);
  return;
}

// SetIncludeFlags @ 1473b6ce0

void __thiscall FNavigationQueryFilter::SetIncludeFlags(FNavigationQueryFilter *this,ushort param_1)

{
  INavigationQueryFilterInterface *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->QueryFilterImpl).Object;
                    /* WARNING: Could not recover jumptable at 0x0001473b6d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,param_1);
  return;
}

