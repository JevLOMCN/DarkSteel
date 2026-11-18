// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// FDynamicMeshSelector @ 14cb61200

FDynamicMeshSelector * __thiscall
FDynamicMeshSelector::FDynamicMeshSelector(FDynamicMeshSelector *this)

{
  undefined8 local_res8;
  
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 2;
  this->_padding_ = (longlong)&___7FBaseDynamicMeshSelector__6B_;
  this->_padding_ = 1;
  local_res8 = 0;
  this->_padding_ = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  this->_padding_ = (longlong)&___7FDynamicMeshSelector__6B_;
  (this->ActiveTransformer).Object = (FBasicDynamicMeshSelectionTransformer *)0x0;
  (this->ActiveTransformer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// InitializeTransformation @ 14cba31f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

IGeometrySelectionTransformer * __thiscall
FDynamicMeshSelector::InitializeTransformation
          (FDynamicMeshSelector *this,FGeometrySelection *param_1)

{
  TSharedPtr<FBasicDynamicMeshSelectionTransformer,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  IGeometrySelectionTransformer *pIVar5;
  UClass *pUVar6;
  UDynamicMeshComponent *pUVar7;
  FSharedReferencer<1> FVar8;
  FBasicDynamicMeshSelectionTransformer *pFVar9;
  UDynamicMeshComponent *pUVar10;
  longlong *local_48;
  FSharedReferencer<1> FStack_40;
  longlong *local_38;
  FSharedReferencer<1> FStack_30;
  int local_28;
  int local_24;
  FWeakObjectPtr local_20;
  
  pTVar1 = &this->ActiveTransformer;
  if (pTVar1->Object != (FBasicDynamicMeshSelectionTransformer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ActiveTransformer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\DynamicMeshSelector.cpp"
                       ,0x34f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (IGeometrySelectionTransformer *)(*pcVar3)();
      return pIVar5;
    }
  }
  (**(code **)(this->_padding_ + 0xd0))(this);
  pUVar10 = (UDynamicMeshComponent *)0x0;
  if (local_24 != 1) goto LAB_14cba32d9;
  if (local_28 == 1) {
    pUVar7 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&local_20);
    if (pUVar7 == (UDynamicMeshComponent *)0x0) goto LAB_14cba32cc;
    pUVar6 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) goto LAB_14cba32cc;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2893480907098816407>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\GeometrySelector.h"
                       ,0x69,"TargetType == ETargetType::PrimitiveComponent");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (IGeometrySelectionTransformer *)(*pcVar3)();
      return pIVar5;
    }
LAB_14cba32cc:
    pUVar7 = pUVar10;
  }
  UDynamicMeshComponent::SetTransientDeferCollisionUpdates(pUVar7,true);
LAB_14cba32d9:
  if (param_1->TopologyType == Polygroup) {
    pUVar7 = ::operator_new(0x1d0);
    if (pUVar7 == (UDynamicMeshComponent *)0x0) {
      local_48 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FBasicDynamicMeshSelectionTransformer *)&DAT_00000010;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&pUVar7->_padding_ = 1;
      *(undefined4 *)((longlong)&pUVar7->_padding_ + 4) = 1;
      pUVar7->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFDynamicMeshPolygroupTransformer___00_SharedPointerInternals__6B_
      ;
      memset(&pUVar7->_padding_,0,0x1c0);
      FBasicDynamicMeshSelectionTransformer::FBasicDynamicMeshSelectionTransformer
                ((FBasicDynamicMeshSelectionTransformer *)&pUVar7->_padding_);
      *(undefined1 *)&pUVar7->_padding_ = 0;
      pUVar7->_padding_ = (longlong)&___7FDynamicMeshPolygroupTransformer__6B_;
      pFVar9 = (FBasicDynamicMeshSelectionTransformer *)&pUVar7->_padding_;
      pUVar7->_padding_ = 0;
      pUVar7->_padding_ = 0;
      pUVar7->_padding_ = 0;
      *(undefined4 *)&pUVar7->_padding_ = 0;
      *(undefined4 *)((longlong)&pUVar7->_padding_ + 4) = 0x80;
      *(undefined4 *)&pUVar7->_padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pUVar7->_padding_ + 4) = 0;
      pUVar7->_padding_ = 0;
      *(undefined4 *)&pUVar7->_padding_ = 0;
      pUVar7->_padding_ = 0;
      if (pFVar9 == (FBasicDynamicMeshSelectionTransformer *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pIVar5 = (IGeometrySelectionTransformer *)(*pcVar3)();
          return pIVar5;
        }
      }
      LOCK();
      *(int *)&pUVar7->_padding_ = (int)pUVar7->_padding_ + 1;
      UNLOCK();
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)pUVar7;
      pUVar10 = pUVar7;
      local_48 = (longlong *)pFVar9;
    }
    FVar8.ReferenceController = FStack_40.ReferenceController;
    if (pTVar1 != (TSharedPtr<FBasicDynamicMeshSelectionTransformer,1> *)&local_48) {
      pTVar1->Object = pFVar9;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveTransformer).SharedReferenceCount,&FStack_40);
      FVar8.ReferenceController = FStack_40.ReferenceController;
    }
  }
  else {
    FVar8.ReferenceController = ::operator_new(0x170);
    if ((UDynamicMeshComponent *)FVar8.ReferenceController == (UDynamicMeshComponent *)0x0) {
      local_38 = ___xmm_00000000000000000000000000000010;
      pFVar9 = (FBasicDynamicMeshSelectionTransformer *)&DAT_00000010;
      FVar8.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_ = 1;
      *(undefined4 *)
       ((longlong)&((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_ + 4) = 1;
      ((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFBasicDynamicMeshSelectionTransformer___00_SharedPointerInternals__6B_
      ;
      memset(&((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_,0,0x160);
      FBasicDynamicMeshSelectionTransformer::FBasicDynamicMeshSelectionTransformer
                ((FBasicDynamicMeshSelectionTransformer *)
                 &((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_);
      pFVar9 = (FBasicDynamicMeshSelectionTransformer *)
               &((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_;
      if (pFVar9 == (FBasicDynamicMeshSelectionTransformer *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pIVar5 = (IGeometrySelectionTransformer *)(*pcVar3)();
          return pIVar5;
        }
      }
      LOCK();
      *(int *)&((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_ =
           (int)((UDynamicMeshComponent *)FVar8.ReferenceController)->_padding_ + 1;
      UNLOCK();
      pUVar10 = (UDynamicMeshComponent *)FVar8.ReferenceController;
      local_38 = (longlong *)pFVar9;
    }
    FStack_30.ReferenceController = FVar8.ReferenceController;
    if (pTVar1 != (TSharedPtr<FBasicDynamicMeshSelectionTransformer,1> *)&local_38) {
      pTVar1->Object = pFVar9;
      local_38 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveTransformer).SharedReferenceCount,&FStack_30);
      FVar8.ReferenceController = FStack_30.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pUVar10);
  if (pTVar1->Object == (FBasicDynamicMeshSelectionTransformer *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar5 = (IGeometrySelectionTransformer *)(*pcVar3)();
      return pIVar5;
    }
  }
  (**(code **)(pTVar1->Object->_padding_ + 0x30))(pTVar1->Object,this);
  return (IGeometrySelectionTransformer *)pTVar1->Object;
}

// ShutdownTransformation @ 14cbb3220

void __thiscall
FDynamicMeshSelector::ShutdownTransformation
          (FDynamicMeshSelector *this,IGeometrySelectionTransformer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDynamicMeshComponent *pUVar4;
  UClass *pUVar5;
  UDynamicMeshComponent *pUVar6;
  int local_28;
  int local_24;
  FWeakObjectPtr local_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pUVar6 = (UDynamicMeshComponent *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ActiveTransformer != (TSharedPtr<FBasicDynamicMeshSelectionTransformer,1> *)&local_18)
  {
    (this->ActiveTransformer).Object = (FBasicDynamicMeshSelectionTransformer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveTransformer).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (**(code **)(this->_padding_ + 0xd0))(this);
  if (local_24 != 1) {
    return;
  }
  if (local_28 == 1) {
    pUVar4 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&local_20);
    if (pUVar4 != (UDynamicMeshComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) goto LAB_14cbb32f3;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2893480907098816407>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\GeometrySelector.h"
                       ,0x69,"TargetType == ETargetType::PrimitiveComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar4 = pUVar6;
LAB_14cbb32f3:
  UDynamicMeshComponent::SetTransientDeferCollisionUpdates(pUVar4,false);
  if (local_28 == 1) {
    pUVar4 = (UDynamicMeshComponent *)FWeakObjectPtr::Get(&local_20);
    if (pUVar4 != (UDynamicMeshComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         (pUVar6 = (UDynamicMeshComponent *)0x0,
         (longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar5->_padding_)) {
        pUVar6 = pUVar4;
      }
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2893480907098816407>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\GeometrySelector.h"
                       ,0x69,"TargetType == ETargetType::PrimitiveComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(pUVar6->_padding_ + 0xd68))(pUVar6,1);
  return;
}

