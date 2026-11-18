// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 38

// Construct<FAnimNode_RigLogic> @ 14a65a4a0

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_RigLogic>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_RigLogic__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  return;
}

// ConstructForTests<FAnimNode_RigLogic> @ 14a65a500

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_RigLogic>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_RigLogic__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  return;
}

// Destruct<FAnimNode_RigLogic> @ 14a65a560

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_RigLogic>(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x48);
  *(undefined ***)param_1 = &___7FAnimNode_RigLogic__6B_;
  if (pvVar1 != (void *)0x0) {
    rl4::RigInstance::destroy(*(RigInstance **)((longlong)pvVar1 + 0x10));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 8));
    ::operator_delete(pvVar1,0x18);
    *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  }
  DestructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
            (*(FCurveElementControlAttributeMapping **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FAnimNode_RigLogic::FCachedJointMapping,int>
            (*(FCachedJointMapping **)((longlong)param_1 + 0x50),*(int *)((longlong)param_1 + 0x58))
  ;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x30));
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_RigLogic> @ 14a65a5b0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_RigLogic>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  FCachedJointMapping *pFVar7;
  FCurveElementControlAttributeMapping *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  void *pvVar10;
  
  pvVar10 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar10 + 8) =
         *(undefined8 *)((longlong)pvVar10 + (longlong)param_2 + (8 - (longlong)param_1));
    uVar6 = *(undefined8 *)((longlong)pvVar10 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar10 + 0x10) =
         *(undefined8 *)((longlong)pvVar10 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar10 + 0x18) = uVar6;
    *(undefined1 *)((longlong)pvVar10 + 0x20) =
         *(undefined1 *)((longlong)pvVar10 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar10 + 0x24) =
         *(undefined4 *)((longlong)pvVar10 + (longlong)param_2 + (0x24 - (longlong)param_1));
    lVar5 = *(longlong *)((longlong)pvVar10 + (longlong)param_2 + (0x30 - (longlong)param_1));
    uVar6 = *(undefined8 *)((longlong)pvVar10 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    pTVar9 = *(TReferenceControllerBase<1> **)((longlong)pvVar10 + 0x30);
    *(undefined8 *)((longlong)pvVar10 + 0x28) = uVar6;
    *(longlong *)((longlong)pvVar10 + 0x30) = lVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    lVar5 = *(longlong *)((longlong)pvVar10 + (longlong)param_2 + (0x40 - (longlong)param_1));
    uVar6 = *(undefined8 *)((longlong)pvVar10 + (longlong)param_2 + (0x38 - (longlong)param_1));
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    pTVar9 = *(TReferenceControllerBase<1> **)((longlong)pvVar10 + 0x40);
    *(undefined8 *)((longlong)pvVar10 + 0x38) = uVar6;
    *(longlong *)((longlong)pvVar10 + 0x40) = lVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar10 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar10 + 0x48) =
         *(undefined8 *)((longlong)pvVar10 + (longlong)param_2 + (0x48 - (longlong)param_1));
    pFVar2 = (ForAnyElementType *)((longlong)pvVar10 + 0x50);
    if (pFVar2 != pFVar1) {
      DestructItems<FAnimNode_RigLogic::FCachedJointMapping,int>
                ((FCachedJointMapping *)pFVar2->Data,*(int *)((longlong)pvVar10 + 0x58));
      iVar4 = *(int *)((longlong)pvVar10 + (longlong)param_2 + (0x58 - (longlong)param_1));
      piVar3 = (int *)((longlong)pvVar10 + 0x5c);
      pFVar7 = (FCachedJointMapping *)pFVar1->Data;
      *(int *)((longlong)pvVar10 + 0x58) = iVar4;
      if ((iVar4 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
        ConstructItems<FAnimNode_RigLogic::FCachedJointMapping,FAnimNode_RigLogic::FCachedJointMapping,int>
                  (pFVar2->Data,pFVar7,iVar4);
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar10 + (longlong)param_2 + (0x60 - (longlong)param_1));
    pFVar2 = (ForAnyElementType *)((longlong)pvVar10 + 0x60);
    if (pFVar2 != pFVar1) {
      DestructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
                ((FCurveElementControlAttributeMapping *)pFVar2->Data,
                 *(int *)((longlong)pvVar10 + 0x68));
      iVar4 = *(int *)((longlong)pvVar10 + (longlong)param_2 + (0x68 - (longlong)param_1));
      piVar3 = (int *)((longlong)pvVar10 + 0x6c);
      pFVar8 = (FCurveElementControlAttributeMapping *)pFVar1->Data;
      *(int *)((longlong)pvVar10 + 0x68) = iVar4;
      if ((iVar4 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
        ConstructItems<FAnimNode_RigLogic::FCurveElementControlAttributeMapping,FAnimNode_RigLogic::FCurveElementControlAttributeMapping,int>
                  (pFVar2->Data,pFVar8,iVar4);
      }
    }
    pvVar10 = (void *)((longlong)pvVar10 + 0x70);
  }
  return true;
}

// Construct<FVertexLayout> @ 14a65aa90

void __cdecl UE::CoreUObject::Private::Construct<FVertexLayout>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FVertexLayout> @ 14a65aaa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVertexLayout>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FVertexLayout> @ 14a65aab0

void __cdecl UE::CoreUObject::Private::Destruct<FVertexLayout>(void *param_1)

{
  return;
}

// Copy<FVertexLayout> @ 14a65aac0

bool __cdecl UE::CoreUObject::Private::Copy<FVertexLayout>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTextureCoordinate> @ 14a65af50

void __cdecl UE::CoreUObject::Private::Construct<FTextureCoordinate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTextureCoordinate> @ 14a65af60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTextureCoordinate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTextureCoordinate> @ 14a65af70

void __cdecl UE::CoreUObject::Private::Destruct<FTextureCoordinate>(void *param_1)

{
  return;
}

// Copy<FTextureCoordinate> @ 14a65af80

bool __cdecl
UE::CoreUObject::Private::Copy<FTextureCoordinate>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMeshBlendShapeChannelMapping> @ 14a65b080

void __cdecl UE::CoreUObject::Private::Construct<FMeshBlendShapeChannelMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMeshBlendShapeChannelMapping> @ 14a65b090

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMeshBlendShapeChannelMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMeshBlendShapeChannelMapping> @ 14a65b0a0

void __cdecl UE::CoreUObject::Private::Destruct<FMeshBlendShapeChannelMapping>(void *param_1)

{
  return;
}

// Copy<FMeshBlendShapeChannelMapping> @ 14a65b0f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMeshBlendShapeChannelMapping>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCoordinateSystem> @ 14a65b120

void __cdecl UE::CoreUObject::Private::Construct<FCoordinateSystem>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// ConstructForTests<FCoordinateSystem> @ 14a65b130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCoordinateSystem>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FCoordinateSystem> @ 14a65b140

void __cdecl UE::CoreUObject::Private::Destruct<FCoordinateSystem>(void *param_1)

{
  return;
}

// Copy<FCoordinateSystem> @ 14a65b150

bool __cdecl
UE::CoreUObject::Private::Copy<FCoordinateSystem>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigUnit_RigLogic> @ 14a65b250

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_RigLogic>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_RigLogic__6B_;
  FRigUnit_RigLogic_Data::FRigUnit_RigLogic_Data
            ((FRigUnit_RigLogic_Data *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  return;
}

// ConstructForTests<FRigUnit_RigLogic> @ 14a65b290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_RigLogic>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FRigVMExecutePin__6B_;
  *(undefined ***)param_1 = &___7FRigUnit_RigLogic__6B_;
  FRigUnit_RigLogic_Data::FRigUnit_RigLogic_Data
            ((FRigUnit_RigLogic_Data *)((longlong)param_1 + 0x10));
  *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
  return;
}

// Destruct<FRigUnit_RigLogic> @ 14a65b2d0

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_RigLogic>(void *param_1)

{
  FRigUnit_RigLogic_Data::~FRigUnit_RigLogic_Data
            ((FRigUnit_RigLogic_Data *)((longlong)param_1 + 0x10));
  *(undefined ***)param_1 = &___7FRigVMStruct__6B_;
  return;
}

// Copy<FRigUnit_RigLogic> @ 14a65b300

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_RigLogic>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FRigUnit_RigLogic_Data::operator=
              ((FRigUnit_RigLogic_Data *)((longlong)pvVar1 + 0x10),
               (FRigUnit_RigLogic_Data *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar1 + 0xb8) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0xc0);
  }
  return true;
}

// Construct<FRigUnit_RigLogic_Data> @ 14a65b710

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_RigLogic_Data>(void *param_1)

{
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// ConstructForTests<FRigUnit_RigLogic_Data> @ 14a65b720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_RigLogic_Data>(void *param_1)

{
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(param_1,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FRigUnit_RigLogic_Data> @ 14a65b730

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_RigLogic_Data>(void *param_1)

{
  void *pvVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_1 + 8) != &uStack_18) {
    *(undefined8 *)((longlong)param_1 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 0x10),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            (*(FRigUnit_RigLogic_IntArray **)((longlong)param_1 + 0x90),
             *(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            (*(FRigUnit_RigLogic_IntArray **)((longlong)param_1 + 0x80),
             *(int *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            (*(FRigUnit_RigLogic_IntArray **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FRigUnit_RigLogic_IntArray,int>
            (*(FRigUnit_RigLogic_IntArray **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    rl4::RigInstance::destroy(*(RigInstance **)((longlong)pvVar1 + 0x10));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 8));
    ::operator_delete(pvVar1,0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FRigUnit_RigLogic_Data> @ 14a65b740

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_RigLogic_Data>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((undefined8 *)((longlong)param_1 + 8) != &local_38) {
        *(undefined8 *)((longlong)param_1 + 8) = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)((longlong)param_1 + 0x10),&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      pvVar1 = *(void **)((longlong)param_1 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x18) = 0;
      if (pvVar1 != (void *)0x0) {
        rl4::RigInstance::destroy(*(RigInstance **)((longlong)pvVar1 + 0x10));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 8));
        ::operator_delete(pvVar1,0x18);
      }
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar2 + 0x20));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar2 + 0x30));
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40),
                 (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar2 + 0x40));
      TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x60),
                 (TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x60));
      TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x70),
                 (TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x70));
      TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x80),
                 (TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x80));
      TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 0x90),
                 (TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar2 + 0x90));
      *(undefined4 *)((longlong)param_1 + 0xa0) = *(undefined4 *)((longlong)param_1 + lVar2 + 0xa0);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xa8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigUnit_RigLogic_IntArray> @ 14a65bd20

void __cdecl UE::CoreUObject::Private::Construct<FRigUnit_RigLogic_IntArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FRigUnit_RigLogic_IntArray> @ 14a65bd30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigUnit_RigLogic_IntArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FRigUnit_RigLogic_IntArray> @ 14a65bd40

void __cdecl UE::CoreUObject::Private::Destruct<FRigUnit_RigLogic_IntArray>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FRigUnit_RigLogic_IntArray> @ 14a65bd60

bool __cdecl
UE::CoreUObject::Private::Copy<FRigUnit_RigLogic_IntArray>(void *param_1,void *param_2,int param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<int,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRigLogicConfiguration> @ 14a65bdb0

void __cdecl UE::CoreUObject::Private::Construct<FRigLogicConfiguration>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010104;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3010101;
  *(undefined2 *)((longlong)param_1 + 8) = 0x504;
  *(undefined1 *)((longlong)param_1 + 10) = 3;
  return;
}

// ConstructForTests<FRigLogicConfiguration> @ 14a65bde0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRigLogicConfiguration>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010104;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3010101;
  *(undefined2 *)((longlong)param_1 + 8) = 0x504;
  *(undefined1 *)((longlong)param_1 + 10) = 3;
  return;
}

// Destruct<FRigLogicConfiguration> @ 14a65be10

void __cdecl UE::CoreUObject::Private::Destruct<FRigLogicConfiguration>(void *param_1)

{
  return;
}

// Copy<FRigLogicConfiguration> @ 14a65be20

bool __cdecl
UE::CoreUObject::Private::Copy<FRigLogicConfiguration>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBoneIndexControlAttributeMapping> @ 14a65bf60

void __cdecl UE::CoreUObject::Private::Construct<FBoneIndexControlAttributeMapping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FBoneIndexControlAttributeMapping> @ 14a65bf80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBoneIndexControlAttributeMapping>(void *param_1)

{
  return;
}

