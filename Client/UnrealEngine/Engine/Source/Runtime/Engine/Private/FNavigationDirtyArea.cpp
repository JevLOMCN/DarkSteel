// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FNavigationDirtyArea @ 14737add0

FNavigationDirtyArea * __thiscall
FNavigationDirtyArea::FNavigationDirtyArea(FNavigationDirtyArea *this,FNavigationDirtyArea *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  
  dVar1 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->Bounds).Pad[0];
  uVar3 = (param_1->Bounds).Pad[1];
  uVar4 = (param_1->Bounds).Pad[2];
  uVar5 = (param_1->Bounds).Pad[3];
  uVar6 = (param_1->Bounds).Pad[4];
  uVar7 = (param_1->Bounds).Pad[5];
  uVar8 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar2;
  (this->Bounds).Pad[1] = uVar3;
  (this->Bounds).Pad[2] = uVar4;
  (this->Bounds).Pad[3] = uVar5;
  (this->Bounds).Pad[4] = uVar6;
  (this->Bounds).Pad[5] = uVar7;
  (this->Bounds).Pad[6] = uVar8;
  (this->OptionalSourceElement).Object = (param_1->OptionalSourceElement).Object;
  (this->OptionalSourceElement).SharedReferenceCount.ReferenceController =
       (param_1->OptionalSourceElement).SharedReferenceCount.ReferenceController;
  (param_1->OptionalSourceElement).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->OptionalSourceElement).Object = (FNavigationElement *)0x0;
  this->Flags = param_1->Flags;
  return this;
}

// FNavigationDirtyArea @ 14737ae20

FNavigationDirtyArea * __thiscall
FNavigationDirtyArea::FNavigationDirtyArea(FNavigationDirtyArea *this,FNavigationDirtyArea *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  dVar2 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = (param_1->Bounds).Pad[0];
  uVar4 = (param_1->Bounds).Pad[1];
  uVar5 = (param_1->Bounds).Pad[2];
  uVar6 = (param_1->Bounds).Pad[3];
  uVar7 = (param_1->Bounds).Pad[4];
  uVar8 = (param_1->Bounds).Pad[5];
  uVar9 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar3;
  (this->Bounds).Pad[1] = uVar4;
  (this->Bounds).Pad[2] = uVar5;
  (this->Bounds).Pad[3] = uVar6;
  (this->Bounds).Pad[4] = uVar7;
  (this->Bounds).Pad[5] = uVar8;
  (this->Bounds).Pad[6] = uVar9;
  (this->OptionalSourceElement).Object = (param_1->OptionalSourceElement).Object;
  pTVar1 = (param_1->OptionalSourceElement).SharedReferenceCount.ReferenceController;
  (this->OptionalSourceElement).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Flags = param_1->Flags;
  return this;
}

// FNavigationDirtyArea @ 14737ae70

FNavigationDirtyArea * __thiscall
FNavigationDirtyArea::FNavigationDirtyArea
          (FNavigationDirtyArea *this,TBox<double> *param_1,int param_2,UObject *param_3)

{
  TSharedPtr<FNavigationElement_const_,1> local_18;
  
  local_18.Object = (FNavigationElement *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FNavigationDirtyArea(this,param_1,(ENavigationDirtyFlag)param_2,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return this;
}

// FNavigationDirtyArea @ 14737aeb0

/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationDirtyArea * __thiscall
FNavigationDirtyArea::FNavigationDirtyArea
          (FNavigationDirtyArea *this,TBox<double> *param_1,ENavigationDirtyFlag param_2,
          TSharedPtr<FNavigationElement_const_,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationElement *this_00;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  bool bVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FString local_48;
  FString local_38;
  FString local_28;
  
  dVar2 = (param_1->Min).field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Max).field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Max).field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar2;
  uVar3 = param_1->Pad[0];
  uVar4 = param_1->Pad[1];
  uVar5 = param_1->Pad[2];
  uVar6 = param_1->Pad[3];
  uVar7 = param_1->Pad[4];
  uVar8 = param_1->Pad[5];
  uVar9 = param_1->Pad[6];
  (this->Bounds).IsValid = param_1->IsValid;
  (this->Bounds).Pad[0] = uVar3;
  (this->Bounds).Pad[1] = uVar4;
  (this->Bounds).Pad[2] = uVar5;
  (this->Bounds).Pad[3] = uVar6;
  (this->Bounds).Pad[4] = uVar7;
  (this->Bounds).Pad[5] = uVar8;
  (this->Bounds).Pad[6] = uVar9;
  (this->OptionalSourceElement).Object = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  (this->OptionalSourceElement).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Flags = param_2;
  if ((((this->Bounds).IsValid == '\0') ||
      (bVar10 = UE::Math::TBox<double>::ContainsNaN(&this->Bounds), bVar10)) &&
     (2 < (byte)LogNavigation._0_1_)) {
    this_00 = (this->OptionalSourceElement).Object;
    if (this_00 == (FNavigationElement *)0x0) {
      pFVar11 = ::FString::FString(&local_48,L"None");
      pFVar13 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      FVar12.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      pFVar11 = FNavigationElement::GetFullName(this_00,&local_38);
      pFVar13 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      FVar12.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (FVar12.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar12.Data);
    }
    ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_48,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_28,L"IsValid=%s, Min=(%s), Max=(%s)");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    UE::Math::TBox<double>::ContainsNaN(&this->Bounds);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
  }
  return this;
}

// operator= @ 14737e2b0

FNavigationDirtyArea * __thiscall
FNavigationDirtyArea::operator=(FNavigationDirtyArea *this,FNavigationDirtyArea *param_1)

{
  double dVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  TSharedPtr<FNavigationElement_const_,1> *pTVar9;
  
  dVar1 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar1;
  uVar2 = (param_1->Bounds).Pad[0];
  uVar3 = (param_1->Bounds).Pad[1];
  uVar4 = (param_1->Bounds).Pad[2];
  uVar5 = (param_1->Bounds).Pad[3];
  uVar6 = (param_1->Bounds).Pad[4];
  uVar7 = (param_1->Bounds).Pad[5];
  uVar8 = (param_1->Bounds).Pad[6];
  pTVar9 = &param_1->OptionalSourceElement;
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar2;
  (this->Bounds).Pad[1] = uVar3;
  (this->Bounds).Pad[2] = uVar4;
  (this->Bounds).Pad[3] = uVar5;
  (this->Bounds).Pad[4] = uVar6;
  (this->Bounds).Pad[5] = uVar7;
  (this->Bounds).Pad[6] = uVar8;
  if (&this->OptionalSourceElement != pTVar9) {
    (this->OptionalSourceElement).Object = pTVar9->Object;
    pTVar9->Object = (FNavigationElement *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OptionalSourceElement).SharedReferenceCount,
               &(param_1->OptionalSourceElement).SharedReferenceCount);
  }
  this->Flags = param_1->Flags;
  return this;
}

// operator= @ 14737e330

FNavigationDirtyArea * __thiscall
FNavigationDirtyArea::operator=(FNavigationDirtyArea *this,FNavigationDirtyArea *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNavigationElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  
  dVar4 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  (this->Bounds).Min.field0_0x0._s_0.X = (param_1->Bounds).Min.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  (this->Bounds).Min.field0_0x0._s_0.Z = (param_1->Bounds).Min.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  (this->Bounds).Max.field0_0x0._s_0.Y = (param_1->Bounds).Max.field0_0x0._s_0.Y;
  (this->Bounds).Max.field0_0x0._s_0.Z = dVar4;
  uVar5 = (param_1->Bounds).Pad[0];
  uVar6 = (param_1->Bounds).Pad[1];
  uVar7 = (param_1->Bounds).Pad[2];
  uVar8 = (param_1->Bounds).Pad[3];
  uVar9 = (param_1->Bounds).Pad[4];
  uVar10 = (param_1->Bounds).Pad[5];
  uVar11 = (param_1->Bounds).Pad[6];
  (this->Bounds).IsValid = (param_1->Bounds).IsValid;
  (this->Bounds).Pad[0] = uVar5;
  (this->Bounds).Pad[1] = uVar6;
  (this->Bounds).Pad[2] = uVar7;
  (this->Bounds).Pad[3] = uVar8;
  (this->Bounds).Pad[4] = uVar9;
  (this->Bounds).Pad[5] = uVar10;
  (this->Bounds).Pad[6] = uVar11;
  pTVar1 = (param_1->OptionalSourceElement).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->OptionalSourceElement).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->OptionalSourceElement).SharedReferenceCount.ReferenceController;
  (this->OptionalSourceElement).Object = pFVar2;
  (this->OptionalSourceElement).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->Flags = param_1->Flags;
  return this;
}

// GetSourceDescription @ 1473a1310

FString * __thiscall
FNavigationDirtyArea::GetSourceDescription
          (FNavigationDirtyArea *this,FString *__return_storage_ptr__)

{
  FNavigationElement *this_00;
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  this_00 = (this->OptionalSourceElement).Object;
  bVar2 = this_00 == (FNavigationElement *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"");
  }
  else {
    pFVar1 = FNavigationElement::GetFullName(this_00,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

