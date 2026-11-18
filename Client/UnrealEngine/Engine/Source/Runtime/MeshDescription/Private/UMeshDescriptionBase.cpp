// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 188

// StaticClass @ 143631480

UClass * __cdecl UMeshDescriptionBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshDescription",L"MeshDescriptionBase",
               &Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionBase,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshDescriptionBase>,
               InternalVTableHelperCtorCaller<UMeshDescriptionBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton;
}

// UMeshDescriptionBase @ 143657960

UMeshDescriptionBase * __thiscall
UMeshDescriptionBase::UMeshDescriptionBase(UMeshDescriptionBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshDescriptionBase__6B_;
  FMeshDescription::FMeshDescription(&this->OwnedMeshDescription);
  (this->RequiredAttributes).Ptr = (FMeshAttributes *)0x0;
  return this;
}

// UMeshDescriptionBase @ 1436579a0

UMeshDescriptionBase * __thiscall
UMeshDescriptionBase::UMeshDescriptionBase(UMeshDescriptionBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshDescriptionBase__6B_;
  FMeshDescription::FMeshDescription(&this->OwnedMeshDescription);
  (this->RequiredAttributes).Ptr = (FMeshAttributes *)0x0;
  return this;
}

// ~UMeshDescriptionBase @ 143658470

void __thiscall UMeshDescriptionBase::~UMeshDescriptionBase(UMeshDescriptionBase *this)

{
  FMeshAttributes *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshDescriptionBase__6B_;
  pFVar1 = (this->RequiredAttributes).Ptr;
  if (pFVar1 != (FMeshAttributes *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FMeshDescription::~FMeshDescription(&this->OwnedMeshDescription);
  UObject::~UObject((UObject *)this);
  return;
}

// ComputePolygonTriangulation @ 143664830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::ComputePolygonTriangulation(UMeshDescriptionBase *this,FPolygonID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::ComputePolygonTriangulation(&this->OwnedMeshDescription,param_1);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// CreateEdge @ 143664c50

/* WARNING: Enum "Type": Some values do not have unique names */

FEdgeID __thiscall
UMeshDescriptionBase::CreateEdge(UMeshDescriptionBase *this,FVertexID param_1,FVertexID param_2)

{
  ForElementType<unsigned_int> FVar1;
  FStaticBasicLogRecord *pFVar2;
  undefined4 in_register_00000014;
  uint in_R9D;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if (((int)param_2 < 0) || (*(int *)((longlong)FVar1 + 0x18) <= (int)param_2)) {
LAB_143664d0f:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143664d2e;
    pFVar2 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) == 0) goto LAB_143664d0f;
    FVar1 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
    if ((-1 < (int)in_R9D) && ((int)in_R9D < *(int *)((longlong)FVar1 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
      }
      if ((*(uint *)((longlong)FVar1 + (ulonglong)(in_R9D >> 5) * 4) >> (in_R9D & 0x1f) & 1) != 0) {
        FMeshDescription::CreateEdge(&this->OwnedMeshDescription,param_1,param_2);
        return (FEdgeID)param_1;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143664d2e;
    pFVar2 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogMeshDescription);
LAB_143664d2e:
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = 0xffffffff;
  return (FEdgeID)param_1;
}

// CreateEdgeWithID @ 143664d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::CreateEdgeWithID
          (UMeshDescriptionBase *this,FEdgeID param_1,FVertexID param_2,FVertexID param_3)

{
  ForElementType<unsigned_int> FVar1;
  FMeshElementContainer *this_00;
  FStaticBasicLogRecord *pFVar2;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar2 = &::LOG_Static;
      goto LAB_143664e9d;
    }
  }
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) != 0) {
      FVar1 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
      if ((-1 < (int)param_3) && ((int)param_3 < *(int *)((longlong)FVar1 + 0x18))) {
        if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
        }
        if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_3 >> 5) * 4) >>
             ((uint)param_3 & 0x1f) & 1) != 0) {
          this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
          FMeshElementContainer::Insert(this_00,(int)param_1);
          FMeshDescription::CreateEdge_Internal(&this->OwnedMeshDescription,param_1,param_2,param_3)
          ;
          return;
        }
      }
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar2 = &::LOG_Static;
      goto LAB_143664e9d;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar2 = &::LOG_Static;
LAB_143664e9d:
  UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// CreatePolygon @ 143664fe0

/* WARNING: Enum "Type": Some values do not have unique names */

FPolygonID __thiscall
UMeshDescriptionBase::CreatePolygon
          (UMeshDescriptionBase *this,FPolygonGroupID param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_3)

{
  FVertexInstanceID *pFVar1;
  undefined8 uVar2;
  FPolygonID FVar3;
  ForElementType<unsigned_int> FVar4;
  TArrayView<FVertexInstanceID_const_,int> *pTVar5;
  FMeshElementContainer *this_00;
  undefined4 in_register_00000014;
  FPolygonGroupID FVar6;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *in_stack_00000028;
  TArrayView<FVertexInstanceID_const_,int> local_38;
  TArrayView<FVertexInstanceID_const_,int> local_28 [2];
  
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  FVar6 = SUB84(param_2,0);
  if ((-1 < (int)FVar6) && ((int)FVar6 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 + (((ulonglong)param_2 & 0xffffffff) >> 5) * 4) >>
         ((uint)FVar6 & 0x1f) & 1) != 0) {
      pTVar5 = TArrayView<FVertexInstanceID_const_,int>::
               TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                         (local_28,(TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_3)
      ;
      pFVar1 = pTVar5->DataPtr;
      uVar2._0_4_ = pTVar5->ArrayNum;
      uVar2._4_4_ = *(undefined4 *)&pTVar5->field_0xc;
      this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
      FVar3 = (FPolygonID)FMeshElementContainer::Add(this_00);
      *(FPolygonID *)CONCAT44(in_register_00000014,param_1) = FVar3;
      local_38.DataPtr = pFVar1;
      local_38._8_8_ = uVar2;
      FMeshDescription::CreatePolygon_Internal
                (&this->OwnedMeshDescription,FVar3,FVar6,&local_38,in_stack_00000028);
      return (FPolygonID)param_1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(FPolygonID *)CONCAT44(in_register_00000014,param_1) = (FPolygonID)0xffffffff;
  return (FPolygonID)param_1;
}

// CreatePolygonGroup @ 1436650e0

FPolygonGroupID __thiscall UMeshDescriptionBase::CreatePolygonGroup(UMeshDescriptionBase *this)

{
  int iVar1;
  FMeshElementContainer *this_00;
  int *in_RDX;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  iVar1 = FMeshElementContainer::Add(this_00);
  *in_RDX = iVar1;
  return SUB84(in_RDX,0);
}

// CreatePolygonGroupWithID @ 143665110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::CreatePolygonGroupWithID(UMeshDescriptionBase *this,FPolygonGroupID param_1)

{
  ForElementType<unsigned_int> FVar1;
  FMeshElementContainer *this_00;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      return;
    }
  }
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  FMeshElementContainer::Insert(this_00,(int)param_1);
  return;
}

// CreatePolygonWithID @ 143666ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::CreatePolygonWithID
          (UMeshDescriptionBase *this,FPolygonID param_1,FPolygonGroupID param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_4)

{
  FVertexInstanceID *pFVar1;
  undefined8 uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<FVertexInstanceID_const_,int> *pTVar4;
  FMeshElementContainer *this_00;
  FStaticBasicLogRecord *pFVar5;
  TArrayView<FVertexInstanceID_const_,int> local_38;
  TArrayView<FVertexInstanceID_const_,int> local_28 [2];
  
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar5 = &::LOG_Static;
      goto LAB_143666dfb;
    }
  }
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) != 0) {
      pTVar4 = TArrayView<FVertexInstanceID_const_,int>::
               TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                         (local_28,param_3);
      pFVar1 = pTVar4->DataPtr;
      uVar2._0_4_ = pTVar4->ArrayNum;
      uVar2._4_4_ = *(undefined4 *)&pTVar4->field_0xc;
      this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
      FMeshElementContainer::Insert(this_00,(int)param_1);
      local_38.DataPtr = pFVar1;
      local_38._8_8_ = uVar2;
      FMeshDescription::CreatePolygon_Internal
                (&this->OwnedMeshDescription,param_1,param_2,&local_38,param_4);
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar5 = &::LOG_Static;
LAB_143666dfb:
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// CreateTriangle @ 143667170

/* WARNING: Enum "Type": Some values do not have unique names */

FTriangleID __thiscall
UMeshDescriptionBase::CreateTriangle
          (UMeshDescriptionBase *this,FPolygonGroupID param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_3)

{
  FVertexInstanceID *pFVar1;
  undefined8 uVar2;
  FTriangleID FVar3;
  ForElementType<unsigned_int> FVar4;
  TArrayView<FVertexInstanceID_const_,int> *pTVar5;
  FMeshElementContainer *this_00;
  undefined4 in_register_00000014;
  FPolygonGroupID FVar6;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *in_stack_00000028;
  TArrayView<FVertexInstanceID_const_,int> local_38;
  TArrayView<FVertexInstanceID_const_,int> local_28 [2];
  
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  FVar6 = SUB84(param_2,0);
  if ((-1 < (int)FVar6) && ((int)FVar6 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 + (((ulonglong)param_2 & 0xffffffff) >> 5) * 4) >>
         ((uint)FVar6 & 0x1f) & 1) != 0) {
      pTVar5 = TArrayView<FVertexInstanceID_const_,int>::
               TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_const_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                         (local_28,(TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_3)
      ;
      pFVar1 = pTVar5->DataPtr;
      uVar2._0_4_ = pTVar5->ArrayNum;
      uVar2._4_4_ = *(undefined4 *)&pTVar5->field_0xc;
      this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
      FVar3 = (FTriangleID)FMeshElementContainer::Add(this_00);
      *(FTriangleID *)CONCAT44(in_register_00000014,param_1) = FVar3;
      local_38.DataPtr = pFVar1;
      local_38._8_8_ = uVar2;
      FMeshDescription::CreateTriangle_Internal
                (&this->OwnedMeshDescription,FVar3,FVar6,&local_38,in_stack_00000028);
      return (FTriangleID)param_1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(FTriangleID *)CONCAT44(in_register_00000014,param_1) = (FTriangleID)0xffffffff;
  return (FTriangleID)param_1;
}

// CreateTriangleWithID @ 143667270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::CreateTriangleWithID
          (UMeshDescriptionBase *this,FTriangleID param_1,FPolygonGroupID param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_4)

{
  FVertexInstanceID *pFVar1;
  undefined8 uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<FVertexInstanceID_const_,int> *pTVar4;
  FMeshElementContainer *this_00;
  FStaticBasicLogRecord *pFVar5;
  TArrayView<FVertexInstanceID_const_,int> local_38;
  TArrayView<FVertexInstanceID_const_,int> local_28 [2];
  
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar5 = &::LOG_Static;
      goto LAB_14366738b;
    }
  }
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) != 0) {
      pTVar4 = TArrayView<FVertexInstanceID_const_,int>::
               TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_const_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                         (local_28,param_3);
      pFVar1 = pTVar4->DataPtr;
      uVar2._0_4_ = pTVar4->ArrayNum;
      uVar2._4_4_ = *(undefined4 *)&pTVar4->field_0xc;
      this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
      FMeshElementContainer::Insert(this_00,(int)param_1);
      local_38.DataPtr = pFVar1;
      local_38._8_8_ = uVar2;
      FMeshDescription::CreateTriangle_Internal
                (&this->OwnedMeshDescription,param_1,param_2,&local_38,param_4);
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar5 = &::LOG_Static;
LAB_14366738b:
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// CreateVertex @ 143667980

FVertexID __thiscall UMeshDescriptionBase::CreateVertex(UMeshDescriptionBase *this)

{
  int iVar1;
  FMeshElementContainer *this_00;
  int *in_RDX;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  iVar1 = FMeshElementContainer::Add(this_00);
  *in_RDX = iVar1;
  return SUB84(in_RDX,0);
}

// CreateVertexInstance @ 1436679b0

/* WARNING: Enum "Type": Some values do not have unique names */

FVertexInstanceID __thiscall
UMeshDescriptionBase::CreateVertexInstance(UMeshDescriptionBase *this,FVertexID param_1)

{
  TMeshAttributeArraySet<FVertexID> *this_00;
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  FMeshElementContainer *this_01;
  TMeshAttributeArrayBase<FVertexID> *this_02;
  FVertexID *pFVar3;
  undefined4 in_register_00000014;
  FVertexID in_R8D;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)in_R8D) && ((int)in_R8D < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)in_R8D >> 5) * 4) >> ((uint)in_R8D & 0x1f) &
        1) != 0) {
      this_01 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
      iVar1 = FMeshElementContainer::Add(this_01);
      this_00 = (TMeshAttributeArraySet<FVertexID> *)
                (this->OwnedMeshDescription).VertexInstanceVertices.ArrayPtr;
      *(int *)CONCAT44(in_register_00000014,param_1) = iVar1;
      this_02 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel(this_00,0);
      pFVar3 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_02,iVar1);
      *pFVar3 = in_R8D;
      FMeshElementIndexer::AddReferenceToKey
                (&(this->OwnedMeshDescription).VertexToVertexInstances,(int)in_R8D,iVar1,0);
      return (FVertexInstanceID)param_1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = -1;
  return (FVertexInstanceID)param_1;
}

// CreateVertexInstanceWithID @ 143667ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::CreateVertexInstanceWithID
          (UMeshDescriptionBase *this,FVertexInstanceID param_1,FVertexID param_2)

{
  ForElementType<unsigned_int> FVar1;
  FMeshElementContainer *this_00;
  TMeshAttributeArrayBase<FVertexID> *this_01;
  FVertexID *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) != 0) {
      FVar1 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
      if (((int)param_1 < 0) || (*(int *)((longlong)FVar1 + 0x18) <= (int)param_1)) {
LAB_143667b5b:
        this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
        FMeshElementContainer::Insert(this_00,(int)param_1);
        this_01 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->OwnedMeshDescription).VertexInstanceVertices.ArrayPtr,0);
        pFVar2 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_01,(int)param_1);
        *pFVar2 = param_2;
        FMeshElementIndexer::AddReferenceToKey
                  (&(this->OwnedMeshDescription).VertexToVertexInstances,(int)param_2,(int)param_1,0
                  );
        return;
      }
      if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
      }
      if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >>
           ((uint)param_1 & 0x1f) & 1) == 0) goto LAB_143667b5b;
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar3 = &::LOG_Static;
      goto LAB_143667bc3;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar3 = &::LOG_Static;
LAB_143667bc3:
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// CreateVertexWithID @ 143667c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::CreateVertexWithID(UMeshDescriptionBase *this,FVertexID param_1)

{
  ForElementType<unsigned_int> FVar1;
  FMeshElementContainer *this_00;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      return;
    }
  }
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  FMeshElementContainer::Insert(this_00,(int)param_1);
  return;
}

// DeleteEdge @ 143667d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::DeleteEdge
          (UMeshDescriptionBase *this,FEdgeID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::DeleteEdge_Internal<TArray>(&this->OwnedMeshDescription,param_1,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// DeletePolygon @ 143667db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::DeletePolygon
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *param_4)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::DeletePolygon_Internal<TArray>
                (&this->OwnedMeshDescription,param_1,param_2,param_3,param_4);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// DeletePolygonGroup @ 143667f10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::DeletePolygonGroup(UMeshDescriptionBase *this,FPolygonGroupID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::DeletePolygonGroup(&this->OwnedMeshDescription,param_1);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// DeleteTriangle @ 143668cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::DeleteTriangle
          (UMeshDescriptionBase *this,FTriangleID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *param_4)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::DeleteTriangle_Internal<TArray>
                (&this->OwnedMeshDescription,param_1,param_2,param_3,param_4);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// DeleteVertex @ 143669b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMeshDescriptionBase::DeleteVertex(UMeshDescriptionBase *this,FVertexID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::DeleteVertex(&this->OwnedMeshDescription,param_1);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// DeleteVertexInstance @ 143669cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::DeleteVertexInstance
          (UMeshDescriptionBase *this,FVertexInstanceID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar2;
  FMeshElementContainer *this_01;
  TArrayView<int_const_,int> *pTVar3;
  FVertexID local_res10 [2];
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->OwnedMeshDescription).VertexInstanceVertices.ArrayPtr,0);
      pFVar2 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)param_1);
      local_res10[0] = *pFVar2;
      FMeshElementIndexer::RemoveReferenceFromKey
                (&(this->OwnedMeshDescription).VertexToVertexInstances,(int)local_res10[0],
                 (int)param_1,0);
      this_01 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
      FMeshElementContainer::Remove(this_01,(int)param_1);
      FMeshElementIndexer::RemoveKey
                (&(this->OwnedMeshDescription).VertexInstanceToTriangles,(int)param_1,0);
      if (param_2 == (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
        return;
      }
      pTVar3 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).VertexToVertexInstances,&local_18,
                          (int)local_res10[0],0);
      if (pTVar3->ArrayNum != 0) {
        return;
      }
      pTVar3 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).VertexToEdges,&local_18,(int)local_res10[0],
                          0);
      if (pTVar3->ArrayNum != 0) {
        return;
      }
      TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                (param_2,local_res10);
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// Empty @ 14366c2b0

void __thiscall UMeshDescriptionBase::Empty(UMeshDescriptionBase *this)

{
  FMeshDescription::Empty(&this->OwnedMeshDescription);
  return;
}

// GetEdgeConnectedPolygons @ 143671980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetEdgeConnectedPolygons
          (UMeshDescriptionBase *this,FEdgeID param_1,
          TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FTriangleID FVar2;
  FMeshAttributeArraySetBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<int_const_,int> *pTVar7;
  FPolygonID *pFVar8;
  FMeshAttributeArraySetBase *this_00;
  FTriangleID *pFVar9;
  TArrayView<FTriangleID_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar7 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).EdgeToTriangles,&local_28,(int)param_1,0);
      uVar1 = pTVar7->ArrayNum;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
      FMeshElementIndexer::Find<FTriangleID>
                (&(this->OwnedMeshDescription).EdgeToTriangles,&local_38,(int)param_1,0);
      pFVar9 = local_38.DataPtr;
      while( true ) {
        if (pFVar9 == local_38.DataPtr + local_38.ArrayNum) {
          return;
        }
        pFVar3 = (this->OwnedMeshDescription).TrianglePolygons.ArrayPtr;
        FVar2 = *pFVar9;
        if (((int)pFVar3[2].Type < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        this_00 = pFVar3 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          this_00 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
        }
        pFVar8 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                           ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar2);
        TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
                  (param_2,pFVar8);
        pFVar9 = pFVar9 + 1;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// GetEdgeConnectedTriangles @ 143671b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetEdgeConnectedTriangles
          (UMeshDescriptionBase *this,FEdgeID param_1,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  TArrayView<FTriangleID_const_,int> local_18;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                (&(this->OwnedMeshDescription).EdgeToTriangles,&local_18,(int)param_1,0);
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_18.ArrayNum;
      if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (local_18.ArrayNum == 0) {
        return;
      }
      memcpy((param_2->AllocatorInstance).Data,local_18.DataPtr,(longlong)local_18.ArrayNum << 2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetEdgeVertex @ 143671c60

/* WARNING: Enum "Type": Some values do not have unique names */

FVertexID __thiscall
UMeshDescriptionBase::GetEdgeVertex(UMeshDescriptionBase *this,FEdgeID param_1,int param_2)

{
  FVertexID *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVertexID FVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<FVertexID,int> *pTVar7;
  FStaticBasicLogRecord *pFVar8;
  undefined4 in_register_00000014;
  uint in_R9D;
  TArrayView<FVertexID,int> local_18;
  
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((param_2 < 0) || (*(int *)((longlong)FVar6 + 0x18) <= param_2)) {
LAB_143671d47:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143671d66;
    pFVar8 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_2 >> 5) * 4) >> (param_2 & 0x1fU) & 1)
        == 0) goto LAB_143671d47;
    if (in_R9D < 2) {
      pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                         (&(this->OwnedMeshDescription).EdgeVertices,&local_18,param_2);
      pFVar1 = pTVar7->DataPtr;
      uVar4 = 0;
      if ((int)in_R9D < pTVar7->ArrayNum) {
        uVar4 = ~in_R9D >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FVertexID)(*pcVar2)();
        return FVar5;
      }
      *(FVertexID *)CONCAT44(in_register_00000014,param_1) = pFVar1[(int)in_R9D];
      return (FVertexID)param_1;
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143671d66;
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogMeshDescription);
LAB_143671d66:
  *(FVertexID *)CONCAT44(in_register_00000014,param_1) = (FVertexID)0xffffffff;
  return (FVertexID)param_1;
}

// GetEdgeVertices @ 143671d90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetEdgeVertices
          (UMeshDescriptionBase *this,FEdgeID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<FVertexID,int> *pTVar2;
  TArrayView<FVertexID_const_,int> local_28;
  TArrayView<FVertexID,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                         (&(this->OwnedMeshDescription).EdgeVertices,&local_18,(int)param_1);
      local_28.DataPtr = pTVar2->DataPtr;
      local_28.ArrayNum = pTVar2->ArrayNum;
      Algo::Copy<TArrayView<FVertexID_const_,int>,TArray<FVertexID,TSizedDefaultAllocator<32>_>_>
                (&local_28,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetNumEdgeConnectedPolygons @ 1436731e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumEdgeConnectedPolygons(UMeshDescriptionBase *this,FEdgeID param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  undefined1 auStack_68 [32];
  TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar3 = FMeshDescription::
               GetEdgeConnectedPolygons<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         (&this->OwnedMeshDescription,&local_48,param_1);
      iVar1 = pTVar3->ArrayNum;
      if (local_48.AllocatorInstance.SecondaryData == (ForElementType<FPolygonID>)0x0) {
        return iVar1;
      }
      FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
      return iVar1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumEdgeConnectedTriangles @ 1436732a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumEdgeConnectedTriangles(UMeshDescriptionBase *this,FEdgeID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<int_const_,int> *pTVar2;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).EdgeToTriangles,&local_18,(int)param_1,0);
      return pTVar2->ArrayNum;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumPolygonGroupPolygons @ 143673440

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumPolygonGroupPolygons(UMeshDescriptionBase *this,FPolygonGroupID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<int_const_,int> *pTVar2;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).PolygonGroupToPolygons,&local_18,
                          (int)param_1,0);
      return pTVar2->ArrayNum;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumPolygonInternalEdges @ 1436734e0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumPolygonInternalEdges(UMeshDescriptionBase *this,FPolygonID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<int_const_,int> *pTVar2;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).PolygonToTriangles,&local_18,(int)param_1,0)
      ;
      return pTVar2->ArrayNum + -1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumPolygonTriangles @ 143673590

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumPolygonTriangles(UMeshDescriptionBase *this,FPolygonID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<int_const_,int> *pTVar2;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).PolygonToTriangles,&local_18,(int)param_1,0)
      ;
      return pTVar2->ArrayNum;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumPolygonVertices @ 143673630

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumPolygonVertices(UMeshDescriptionBase *this,FPolygonID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<FTriangleID_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                (&(this->OwnedMeshDescription).PolygonToTriangles,&local_18,(int)param_1,0);
      return local_18.ArrayNum + 2;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumVertexConnectedEdges @ 1436736e0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumVertexConnectedEdges(UMeshDescriptionBase *this,FVertexID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<int_const_,int> *pTVar2;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).VertexToEdges,&local_18,(int)param_1,0);
      return pTVar2->ArrayNum;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumVertexConnectedPolygons @ 143673a30

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumVertexConnectedPolygons(UMeshDescriptionBase *this,FVertexID param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      iVar1 = FMeshDescription::GetNumVertexConnectedPolygons(&this->OwnedMeshDescription,param_1);
      return iVar1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumVertexConnectedTriangles @ 143673b50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumVertexConnectedTriangles(UMeshDescriptionBase *this,FVertexID param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      iVar1 = FMeshDescription::GetNumVertexConnectedTriangles(&this->OwnedMeshDescription,param_1);
      return iVar1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumVertexInstanceConnectedPolygons @ 143673e60

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons
          (UMeshDescriptionBase *this,FVertexInstanceID param_1)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      iVar1 = FMeshDescription::GetNumVertexInstanceConnectedPolygons
                        (&this->OwnedMeshDescription,param_1);
      return iVar1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumVertexInstanceConnectedTriangles @ 143673ef0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles
          (UMeshDescriptionBase *this,FVertexInstanceID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<int_const_,int> *pTVar2;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).VertexInstanceToTriangles,&local_18,
                          (int)param_1,0);
      return pTVar2->ArrayNum;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetNumVertexVertexInstances @ 143673f90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UMeshDescriptionBase::GetNumVertexVertexInstances(UMeshDescriptionBase *this,FVertexID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<int_const_,int> *pTVar2;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar2 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).VertexToVertexInstances,&local_18,
                          (int)param_1,0);
      return pTVar2->ArrayNum;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return 0;
}

// GetPolygonAdjacentPolygons @ 143674030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetPolygonAdjacentPolygons
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::GetPolygonAdjacentPolygons<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,param_1,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetPolygonGroupPolygons @ 1436741d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetPolygonGroupPolygons
          (UMeshDescriptionBase *this,FPolygonGroupID param_1,
          TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  TArrayView<FPolygonID_const_,int> local_18;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshElementIndexer::Find<FPolygonID>
                (&(this->OwnedMeshDescription).PolygonGroupToPolygons,&local_18,(int)param_1,0);
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_18.ArrayNum;
      if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (local_18.ArrayNum == 0) {
        return;
      }
      memcpy((param_2->AllocatorInstance).Data,local_18.DataPtr,(longlong)local_18.ArrayNum << 2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetPolygonInternalEdges @ 1436742f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetPolygonInternalEdges
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::GetPolygonInternalEdges<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,param_1,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetPolygonPerimeterEdges @ 143674390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetPolygonPerimeterEdges
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::GetPolygonPerimeterEdges<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,param_1,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetPolygonPolygonGroup @ 143674430

/* WARNING: Enum "Type": Some values do not have unique names */

FPolygonGroupID __thiscall
UMeshDescriptionBase::GetPolygonPolygonGroup(UMeshDescriptionBase *this,FPolygonID param_1)

{
  ForElementType<unsigned_int> FVar1;
  FPolygonGroupID *pFVar2;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)in_R8D) && ((int)in_R8D < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)(in_R8D >> 5) * 4) >> (in_R8D & 0x1f) & 1) != 0) {
      pFVar2 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                         (&(this->OwnedMeshDescription).PolygonPolygonGroups,in_R8D);
      *(FPolygonGroupID *)CONCAT44(in_register_00000014,param_1) = *pFVar2;
      return (FPolygonGroupID)param_1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(FPolygonGroupID *)CONCAT44(in_register_00000014,param_1) = (FPolygonGroupID)0xffffffff;
  return (FPolygonGroupID)param_1;
}

// GetPolygonTriangles @ 1436744f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetPolygonTriangles
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  TArrayView<FTriangleID_const_,int> local_18;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                (&(this->OwnedMeshDescription).PolygonToTriangles,&local_18,(int)param_1,0);
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_18.ArrayNum;
      if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (local_18.ArrayNum == 0) {
        return;
      }
      memcpy((param_2->AllocatorInstance).Data,local_18.DataPtr,(longlong)local_18.ArrayNum << 2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetPolygonVertexInstances @ 143674610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetPolygonVertexInstances
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_18;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      FMeshDescription::GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,param_1,&local_18);
      if (param_2 != &local_18) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_2->AllocatorInstance).Data = local_18.AllocatorInstance.Data;
        param_2->ArrayNum = local_18.ArrayNum;
        param_2->ArrayMax = local_18.ArrayMax;
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_18.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_18.AllocatorInstance.Data);
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// GetPolygonVertices @ 143674720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetPolygonVertices
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::GetPolygonVertices<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,param_1,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetPrivateStaticClass @ 1436747c0

UClass * __cdecl UMeshDescriptionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshDescription",L"MeshDescriptionBase",
               &Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionBase,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMeshDescriptionBase>,
               InternalVTableHelperCtorCaller<UMeshDescriptionBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBase.InnerSingleton;
}

// GetRequiredAttributes @ 143674920

FMeshAttributes * __thiscall UMeshDescriptionBase::GetRequiredAttributes(UMeshDescriptionBase *this)

{
  return (this->RequiredAttributes).Ptr;
}

// GetRequiredAttributes @ 143674930

FMeshAttributes * __thiscall UMeshDescriptionBase::GetRequiredAttributes(UMeshDescriptionBase *this)

{
  return (this->RequiredAttributes).Ptr;
}

// GetTriangleAdjacentTriangles @ 143674940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetTriangleAdjacentTriangles
          (UMeshDescriptionBase *this,FTriangleID param_1,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::GetTriangleAdjacentTriangles<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,param_1,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetTriangleEdges @ 1436749e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetTriangleEdges
          (UMeshDescriptionBase *this,FTriangleID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  FEdgeID FVar1;
  FEdgeID *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  FEdgeID *pFVar7;
  TArrayView<FEdgeID,int> local_18;
  
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      TArray<FEdgeID,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,3,Default);
      TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                (&(this->OwnedMeshDescription).TriangleEdges,&local_18,(int)param_1);
      pFVar7 = local_18.DataPtr;
      while( true ) {
        if (pFVar7 == local_18.DataPtr + local_18.ArrayNum) {
          return;
        }
        pFVar2 = (FEdgeID *)(param_2->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + param_2->ArrayMax)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) break;
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        FVar1 = *pFVar7;
        pFVar7 = pFVar7 + 1;
        *(FEdgeID *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4) = FVar1;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// GetTrianglePolygon @ 143674b70

/* WARNING: Enum "Type": Some values do not have unique names */

FPolygonID __thiscall
UMeshDescriptionBase::GetTrianglePolygon(UMeshDescriptionBase *this,FTriangleID param_1)

{
  ForElementType<unsigned_int> FVar1;
  FPolygonID *pFVar2;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)in_R8D) && ((int)in_R8D < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)(in_R8D >> 5) * 4) >> (in_R8D & 0x1f) & 1) != 0) {
      pFVar2 = TMeshAttributesRef<int,FPolygonID>::operator[]
                         (&(this->OwnedMeshDescription).TrianglePolygons,in_R8D);
      *(FPolygonID *)CONCAT44(in_register_00000014,param_1) = *pFVar2;
      return (FPolygonID)param_1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(FPolygonID *)CONCAT44(in_register_00000014,param_1) = (FPolygonID)0xffffffff;
  return (FPolygonID)param_1;
}

// GetTrianglePolygonGroup @ 143674c30

/* WARNING: Enum "Type": Some values do not have unique names */

FPolygonGroupID __thiscall
UMeshDescriptionBase::GetTrianglePolygonGroup(UMeshDescriptionBase *this,FTriangleID param_1)

{
  ForElementType<unsigned_int> FVar1;
  FPolygonGroupID *pFVar2;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)in_R8D) && ((int)in_R8D < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)(in_R8D >> 5) * 4) >> (in_R8D & 0x1f) & 1) != 0) {
      pFVar2 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                         (&(this->OwnedMeshDescription).TrianglePolygonGroups,in_R8D);
      *(FPolygonGroupID *)CONCAT44(in_register_00000014,param_1) = *pFVar2;
      return (FPolygonGroupID)param_1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(FPolygonGroupID *)CONCAT44(in_register_00000014,param_1) = (FPolygonGroupID)0xffffffff;
  return (FPolygonGroupID)param_1;
}

// GetTriangleVertexInstance @ 143674cf0

/* WARNING: Enum "Type": Some values do not have unique names */

FVertexInstanceID __thiscall
UMeshDescriptionBase::GetTriangleVertexInstance
          (UMeshDescriptionBase *this,FTriangleID param_1,int param_2)

{
  FVertexInstanceID *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVertexInstanceID FVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<FVertexInstanceID,int> *pTVar7;
  FStaticBasicLogRecord *pFVar8;
  undefined4 in_register_00000014;
  uint in_R9D;
  TArrayView<FVertexInstanceID,int> local_18;
  
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((param_2 < 0) || (*(int *)((longlong)FVar6 + 0x18) <= param_2)) {
LAB_143674dcf:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143674dee;
    pFVar8 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_2 >> 5) * 4) >> (param_2 & 0x1fU) & 1)
        == 0) goto LAB_143674dcf;
    if (in_R9D < 3) {
      pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         (&(this->OwnedMeshDescription).TriangleVertexInstances,&local_18,param_2);
      pFVar1 = pTVar7->DataPtr;
      uVar4 = 0;
      if ((int)in_R9D < pTVar7->ArrayNum) {
        uVar4 = ~in_R9D >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FVertexInstanceID)(*pcVar2)();
        return FVar5;
      }
      *(FVertexInstanceID *)CONCAT44(in_register_00000014,param_1) = pFVar1[(int)in_R9D];
      return (FVertexInstanceID)param_1;
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143674dee;
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogMeshDescription);
LAB_143674dee:
  *(FVertexInstanceID *)CONCAT44(in_register_00000014,param_1) = (FVertexInstanceID)0xffffffff;
  return (FVertexInstanceID)param_1;
}

// GetTriangleVertexInstances @ 143674e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetTriangleVertexInstances
          (UMeshDescriptionBase *this,FTriangleID param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  FVertexInstanceID *pFVar1;
  FVertexInstanceID FVar2;
  FVertexInstanceID *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  TArrayView<FVertexInstanceID,int> *pTVar8;
  FVertexInstanceID *pFVar9;
  TArrayView<FVertexInstanceID,int> local_18;
  
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar8 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         (&(this->OwnedMeshDescription).TriangleVertexInstances,&local_18,
                          (int)param_1);
      pFVar9 = pTVar8->DataPtr;
      pFVar1 = pFVar9 + pTVar8->ArrayNum;
      while( true ) {
        if (pFVar9 == pFVar1) {
          return;
        }
        pFVar3 = (FVertexInstanceID *)(param_2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + param_2->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) break;
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        FVar2 = *pFVar9;
        pFVar9 = pFVar9 + 1;
        *(FVertexInstanceID *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) = FVar2;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// GetTriangleVertices @ 143674fa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetTriangleVertices
          (UMeshDescriptionBase *this,FTriangleID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  TArrayView<FVertexID,int> *pTVar2;
  TArrayView<FVertexID_const_,int> local_28;
  TArrayView<FVertexID,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_2,3,Default);
      pTVar2 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                         (&(this->OwnedMeshDescription).TriangleVertices,&local_18,(int)param_1);
      local_28.DataPtr = pTVar2->DataPtr;
      local_28.ArrayNum = pTVar2->ArrayNum;
      Algo::Copy<TArrayView<FVertexID_const_,int>,TArray<FVertexID,TSizedDefaultAllocator<32>_>_>
                (&local_28,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetVertexAdjacentVertices @ 143675080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetVertexAdjacentVertices
          (UMeshDescriptionBase *this,FVertexID param_1,
          TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_2)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::GetVertexAdjacentVertices<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,param_1,param_2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetVertexConnectedEdges @ 143675120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetVertexConnectedEdges
          (UMeshDescriptionBase *this,FVertexID param_1,
          TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  TArrayView<FEdgeID_const_,int> local_18;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshElementIndexer::Find<FEdgeID>
                (&(this->OwnedMeshDescription).VertexToEdges,&local_18,(int)param_1,0);
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_18.ArrayNum;
      if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (local_18.ArrayNum == 0) {
        return;
      }
      memcpy((param_2->AllocatorInstance).Data,local_18.DataPtr,(longlong)local_18.ArrayNum << 2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetVertexConnectedPolygons @ 143675240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetVertexConnectedPolygons
          (UMeshDescriptionBase *this,FVertexID param_1,
          TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  FTriangleID *pFVar1;
  FTriangleID FVar2;
  FMeshAttributeArraySetBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  FPolygonID *pFVar7;
  FMeshAttributeArraySetBase *this_00;
  FTriangleID *pFVar8;
  FVertexInstanceID *pFVar9;
  TArrayView<FVertexInstanceID_const_,int> local_48;
  TArrayView<FTriangleID_const_,int> local_38;
  
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
      FMeshElementIndexer::Find<FVertexInstanceID>
                (&(this->OwnedMeshDescription).VertexToVertexInstances,&local_48,(int)param_1,0);
      pFVar9 = local_48.DataPtr;
      do {
        if (pFVar9 == local_48.DataPtr + local_48.ArrayNum) {
          return;
        }
        FMeshElementIndexer::Find<FTriangleID>
                  (&(this->OwnedMeshDescription).VertexInstanceToTriangles,&local_38,(int)*pFVar9,0)
        ;
        pFVar1 = local_38.DataPtr + local_38.ArrayNum;
        for (pFVar8 = local_38.DataPtr; pFVar8 != pFVar1; pFVar8 = pFVar8 + 1) {
          pFVar3 = (this->OwnedMeshDescription).TrianglePolygons.ArrayPtr;
          FVar2 = *pFVar8;
          if (((int)pFVar3[2].Type < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this_00 = pFVar3 + 1;
          if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0
             ) {
            this_00 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
          }
          pFVar7 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                             ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar2);
          TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
                    (param_2,pFVar7);
        }
        pFVar9 = pFVar9 + 1;
      } while( true );
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// GetVertexConnectedTriangles @ 143675430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetVertexConnectedTriangles
          (UMeshDescriptionBase *this,FVertexID param_1,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  FTriangleID *_Src;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  FVertexInstanceID *pFVar7;
  longlong lVar8;
  TArrayView<FVertexInstanceID_const_,int> local_48;
  TArrayView<FTriangleID_const_,int> local_38;
  
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      uVar4 = FMeshDescription::GetNumVertexConnectedTriangles(&this->OwnedMeshDescription,param_1);
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar4,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
      FMeshElementIndexer::Find<FVertexInstanceID>
                (&(this->OwnedMeshDescription).VertexToVertexInstances,&local_48,(int)param_1,0);
      if (local_48.DataPtr == local_48.DataPtr + local_48.ArrayNum) {
        return;
      }
      pFVar7 = local_48.DataPtr;
      do {
        FMeshElementIndexer::Find<FTriangleID>
                  (&(this->OwnedMeshDescription).VertexInstanceToTriangles,&local_38,(int)*pFVar7,0)
        ;
        iVar2 = local_38.ArrayNum;
        _Src = local_38.DataPtr;
        lVar8 = (longlong)local_38.ArrayNum;
        if (((local_38.DataPtr == (FTriangleID *)0x0) && (local_38.ArrayNum != 0)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        if (iVar2 != 0) {
          memcpy((param_2->AllocatorInstance).Data + (longlong)iVar5 * 4,_Src,lVar8 << 2);
        }
        pFVar7 = pFVar7 + 1;
      } while (pFVar7 != local_48.DataPtr + local_48.ArrayNum);
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// GetVertexInstanceConnectedPolygons @ 143675630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetVertexInstanceConnectedPolygons
          (UMeshDescriptionBase *this,FVertexInstanceID param_1,
          TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FTriangleID FVar2;
  FMeshAttributeArraySetBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<int_const_,int> *pTVar7;
  FPolygonID *pFVar8;
  FMeshAttributeArraySetBase *this_00;
  FTriangleID *pFVar9;
  TArrayView<FTriangleID_const_,int> local_38;
  TArrayView<int_const_,int> local_28;
  
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pTVar7 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).VertexInstanceToTriangles,&local_28,
                          (int)param_1,0);
      uVar1 = pTVar7->ArrayNum;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      param_2->ArrayNum = 0;
      if (param_2->ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      }
      FMeshElementIndexer::Find<FTriangleID>
                (&(this->OwnedMeshDescription).VertexInstanceToTriangles,&local_38,(int)param_1,0);
      pFVar9 = local_38.DataPtr;
      while( true ) {
        if (pFVar9 == local_38.DataPtr + local_38.ArrayNum) {
          return;
        }
        pFVar3 = (this->OwnedMeshDescription).TrianglePolygons.ArrayPtr;
        FVar2 = *pFVar9;
        if (((int)pFVar3[2].Type < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        this_00 = pFVar3 + 1;
        if ((FMeshAttributeArraySetBase *)pFVar3[2]._padding_ != (FMeshAttributeArraySetBase *)0x0)
        {
          this_00 = (FMeshAttributeArraySetBase *)pFVar3[2]._padding_;
        }
        pFVar8 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase
                           ((TMeshAttributeArrayBase<FPolygonID> *)this_00,(int)FVar2);
        TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
                  (param_2,pFVar8);
        pFVar9 = pFVar9 + 1;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// GetVertexInstanceConnectedTriangles @ 1436757f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetVertexInstanceConnectedTriangles
          (UMeshDescriptionBase *this,FVertexInstanceID param_1,
          TArray<FTriangleID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  TArrayView<FTriangleID_const_,int> local_18;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                (&(this->OwnedMeshDescription).VertexInstanceToTriangles,&local_18,(int)param_1,0);
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_18.ArrayNum;
      if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (local_18.ArrayNum == 0) {
        return;
      }
      memcpy((param_2->AllocatorInstance).Data,local_18.DataPtr,(longlong)local_18.ArrayNum << 2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// GetVertexInstanceForPolygonVertex @ 143675910

/* WARNING: Enum "Type": Some values do not have unique names */

FVertexInstanceID __thiscall
UMeshDescriptionBase::GetVertexInstanceForPolygonVertex
          (UMeshDescriptionBase *this,FPolygonID param_1,FVertexID param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar4;
  undefined4 in_register_00000014;
  ForAnyElementType FVar5;
  FVertexID in_R9D;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_28;
  
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) != 0) {
      local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ArrayNum = 0;
      local_28.ArrayMax = 0;
      FMeshDescription::GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>
                (&this->OwnedMeshDescription,(FPolygonID)param_2,&local_28);
      pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 4;
      FVar5.Data = local_28.AllocatorInstance.Data;
      do {
        if (FVar5.Data == pFVar1) {
          iVar2 = -1;
LAB_1436759e1:
          *(int *)CONCAT44(in_register_00000014,param_1) = iVar2;
          if (local_28.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return (FVertexInstanceID)param_1;
          }
          FMemory::Free(local_28.AllocatorInstance.Data);
          return (FVertexInstanceID)param_1;
        }
        iVar2 = *(int *)FVar5.Data;
        this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->OwnedMeshDescription).VertexInstanceVertices.ArrayPtr,0);
        pFVar4 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar2);
        if (*pFVar4 == in_R9D) {
          iVar2 = *(int *)FVar5.Data;
          goto LAB_1436759e1;
        }
        FVar5.Data = FVar5.Data + 4;
      } while( true );
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = -1;
  return (FVertexInstanceID)param_1;
}

// GetVertexInstanceForTriangleVertex @ 143675a60

/* WARNING: Enum "Type": Some values do not have unique names */

FVertexInstanceID __thiscall
UMeshDescriptionBase::GetVertexInstanceForTriangleVertex
          (UMeshDescriptionBase *this,FTriangleID param_1,FVertexID param_2)

{
  FVertexInstanceID *pFVar1;
  FVertexInstanceID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<FVertexInstanceID,int> *pTVar4;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar5;
  undefined4 in_register_00000014;
  FVertexInstanceID *pFVar6;
  FVertexID in_R9D;
  TArrayView<FVertexInstanceID,int> local_28;
  
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) != 0) {
      pTVar4 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         (&(this->OwnedMeshDescription).TriangleVertexInstances,&local_28,
                          (int)param_2);
      pFVar6 = pTVar4->DataPtr;
      pFVar1 = pFVar6 + pTVar4->ArrayNum;
      do {
        if (pFVar6 == pFVar1) {
          FVar2 = (FVertexInstanceID)0xffffffff;
LAB_143675b1c:
          *(FVertexInstanceID *)CONCAT44(in_register_00000014,param_1) = FVar2;
          return (FVertexInstanceID)param_1;
        }
        FVar2 = *pFVar6;
        this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            ((TMeshAttributeArraySet<FVertexID> *)
                             (this->OwnedMeshDescription).VertexInstanceVertices.ArrayPtr,0);
        pFVar5 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)FVar2);
        if (*pFVar5 == in_R9D) {
          FVar2 = *pFVar6;
          goto LAB_143675b1c;
        }
        pFVar6 = pFVar6 + 1;
      } while( true );
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(FVertexInstanceID *)CONCAT44(in_register_00000014,param_1) = (FVertexInstanceID)0xffffffff;
  return (FVertexInstanceID)param_1;
}

// GetVertexInstancePairEdge @ 143675e80

/* WARNING: Enum "Type": Some values do not have unique names */

FEdgeID __thiscall
UMeshDescriptionBase::GetVertexInstancePairEdge
          (UMeshDescriptionBase *this,FVertexInstanceID param_1,FVertexInstanceID param_2)

{
  ForElementType<unsigned_int> FVar1;
  FStaticBasicLogRecord *pFVar2;
  undefined4 in_register_00000014;
  uint in_R9D;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if (((int)param_2 < 0) || (*(int *)((longlong)FVar1 + 0x18) <= (int)param_2)) {
LAB_143675f49:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143675f68;
    pFVar2 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) == 0) goto LAB_143675f49;
    FVar1 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
    if ((-1 < (int)in_R9D) && ((int)in_R9D < *(int *)((longlong)FVar1 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
      }
      if ((*(uint *)((longlong)FVar1 + (ulonglong)(in_R9D >> 5) * 4) >> (in_R9D & 0x1f) & 1) != 0) {
        FMeshDescription::GetVertexInstancePairEdge(&this->OwnedMeshDescription,param_1,param_2);
        return (FEdgeID)param_1;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143675f68;
    pFVar2 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogMeshDescription);
LAB_143675f68:
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = 0xffffffff;
  return (FEdgeID)param_1;
}

// GetVertexInstanceVertex @ 143675fa0

/* WARNING: Enum "Type": Some values do not have unique names */

FVertexID __thiscall
UMeshDescriptionBase::GetVertexInstanceVertex(UMeshDescriptionBase *this,FVertexInstanceID param_1)

{
  ForElementType<unsigned_int> FVar1;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar2;
  undefined4 in_register_00000014;
  uint in_R8D;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if ((-1 < (int)in_R8D) && ((int)in_R8D < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)(in_R8D >> 5) * 4) >> (in_R8D & 0x1f) & 1) != 0) {
      this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          ((TMeshAttributeArraySet<FVertexID> *)
                           (this->OwnedMeshDescription).VertexInstanceVertices.ArrayPtr,0);
      pFVar2 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,in_R8D);
      *(FVertexID *)CONCAT44(in_register_00000014,param_1) = *pFVar2;
      return (FVertexID)param_1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(FVertexID *)CONCAT44(in_register_00000014,param_1) = (FVertexID)0xffffffff;
  return (FVertexID)param_1;
}

// GetVertexPairEdge @ 143676330

/* WARNING: Enum "Type": Some values do not have unique names */

FEdgeID __thiscall
UMeshDescriptionBase::GetVertexPairEdge
          (UMeshDescriptionBase *this,FVertexID param_1,FVertexID param_2)

{
  ForElementType<unsigned_int> FVar1;
  FStaticBasicLogRecord *pFVar2;
  undefined4 in_register_00000014;
  uint in_R9D;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if (((int)param_2 < 0) || (*(int *)((longlong)FVar1 + 0x18) <= (int)param_2)) {
LAB_1436763ef:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14367640e;
    pFVar2 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_2 >> 5) * 4) >> ((uint)param_2 & 0x1f)
        & 1) == 0) goto LAB_1436763ef;
    FVar1 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
    if ((-1 < (int)in_R9D) && ((int)in_R9D < *(int *)((longlong)FVar1 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
      }
      if ((*(uint *)((longlong)FVar1 + (ulonglong)(in_R9D >> 5) * 4) >> (in_R9D & 0x1f) & 1) != 0) {
        FMeshDescription::GetVertexPairEdge(&this->OwnedMeshDescription,param_1,param_2);
        return (FEdgeID)param_1;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14367640e;
    pFVar2 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogMeshDescription);
LAB_14367640e:
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = 0xffffffff;
  return (FEdgeID)param_1;
}

// GetVertexPosition @ 143676440

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
UMeshDescriptionBase::GetVertexPosition
          (UMeshDescriptionBase *this,TVector<double> *__return_storage_ptr__,FVertexID param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  FMeshElementContainer *pFVar6;
  TVector<float> *pTVar7;
  TVector<float> local_18;
  
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pFVar6 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
      bVar4 = FAttributesSetBase::HasAttribute(&pFVar6->Attributes,MeshAttribute::Vertex::Position);
      if (bVar4) {
        pFVar6 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
        pTVar7 = TAttributesSet<FVertexID>::GetAttribute<UE::Math::TVector<float>_>
                           ((TAttributesSet<FVertexID> *)&pFVar6->Attributes,&local_18,param_1,
                            MeshAttribute::Vertex::Position,0);
        fVar1 = (pTVar7->field0_0x0)._s_0.Y;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(pTVar7->field0_0x0)._s_0.X;
        fVar2 = (pTVar7->field0_0x0)._s_0.Z;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar2;
        return __return_storage_ptr__;
      }
      if (2 < (byte)LogMeshDescription._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      }
      goto LAB_143676560;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_143676560:
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetVertexVertexInstances @ 143676590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::GetVertexVertexInstances
          (UMeshDescriptionBase *this,FVertexID param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ForElementType<unsigned_int> FVar2;
  TArrayView<FVertexInstanceID_const_,int> local_18;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshElementIndexer::Find<FVertexInstanceID>
                (&(this->OwnedMeshDescription).VertexToVertexInstances,&local_18,(int)param_1,0);
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_18.ArrayNum;
      if ((local_18.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_18.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_18.ArrayNum,piVar1)
      ;
      if (local_18.ArrayNum == 0) {
        return;
      }
      memcpy((param_2->AllocatorInstance).Data,local_18.DataPtr,(longlong)local_18.ArrayNum << 2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// IsEdgeInternal @ 14367d900

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMeshDescriptionBase::IsEdgeInternal(UMeshDescriptionBase *this,FEdgeID param_1)

{
  bool bVar1;
  ForElementType<unsigned_int> FVar2;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      bVar1 = FMeshDescription::IsEdgeInternal(&this->OwnedMeshDescription,param_1);
      return bVar1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return false;
}

// IsEdgeInternalToPolygon @ 14367da20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMeshDescriptionBase::IsEdgeInternalToPolygon
          (UMeshDescriptionBase *this,FEdgeID param_1,FPolygonID param_2)

{
  bool bVar1;
  ForElementType<unsigned_int> FVar2;
  FStaticBasicLogRecord *pFVar3;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FVar2 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar2 + 0x18))) {
        if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
        }
        if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_2 >> 5) * 4) >>
             ((uint)param_2 & 0x1f) & 1) != 0) {
          bVar1 = FMeshDescription::IsEdgeInternalToPolygon
                            (&this->OwnedMeshDescription,param_1,param_2);
          return bVar1;
        }
      }
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return false;
      }
      pFVar3 = &::LOG_Static;
      goto LAB_14367daea;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return false;
  }
  pFVar3 = &::LOG_Static;
LAB_14367daea:
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogMeshDescription);
  return false;
}

// IsEdgeValid @ 14367db20

bool __thiscall UMeshDescriptionBase::IsEdgeValid(UMeshDescriptionBase *this,FEdgeID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsEmpty @ 14367ddf0

bool __thiscall UMeshDescriptionBase::IsEmpty(UMeshDescriptionBase *this)

{
  bool bVar1;
  
  bVar1 = FMeshDescription::IsEmpty(&this->OwnedMeshDescription);
  return bVar1;
}

// IsPolygonGroupValid @ 14367de00

bool __thiscall
UMeshDescriptionBase::IsPolygonGroupValid(UMeshDescriptionBase *this,FPolygonGroupID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsPolygonValid @ 14367de60

bool __thiscall UMeshDescriptionBase::IsPolygonValid(UMeshDescriptionBase *this,FPolygonID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsTrianglePartOfNgon @ 14367dec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMeshDescriptionBase::IsTrianglePartOfNgon(UMeshDescriptionBase *this,FTriangleID param_1)

{
  ForElementType<unsigned_int> FVar1;
  FPolygonID *pFVar2;
  TArrayView<int_const_,int> *pTVar3;
  TArrayView<int_const_,int> local_18;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pFVar2 = TMeshAttributesRef<int,FPolygonID>::operator[]
                         (&(this->OwnedMeshDescription).TrianglePolygons,(int)param_1);
      pTVar3 = FMeshElementIndexer::Find
                         (&(this->OwnedMeshDescription).PolygonToTriangles,&local_18,(int)*pFVar2,0)
      ;
      return 1 < pTVar3->ArrayNum;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return false;
}

// IsTriangleValid @ 14367df80

bool __thiscall
UMeshDescriptionBase::IsTriangleValid(UMeshDescriptionBase *this,FTriangleID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsVertexInstanceValid @ 14367dfe0

bool __thiscall
UMeshDescriptionBase::IsVertexInstanceValid(UMeshDescriptionBase *this,FVertexInstanceID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsVertexOrphaned @ 14367e0e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMeshDescriptionBase::IsVertexOrphaned(UMeshDescriptionBase *this,FVertexID param_1)

{
  bool bVar1;
  ForElementType<unsigned_int> FVar2;
  
  FVar2 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar2 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar2 = *(ForElementType<unsigned_int> *)((longlong)FVar2 + 0x10);
    }
    if ((*(uint *)((longlong)FVar2 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      bVar1 = FMeshDescription::IsVertexOrphaned(&this->OwnedMeshDescription,param_1);
      return bVar1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return false;
}

// IsVertexValid @ 14367e170

bool __thiscall UMeshDescriptionBase::IsVertexValid(UMeshDescriptionBase *this,FVertexID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

// RegisterAttributes @ 14367f140

void __thiscall UMeshDescriptionBase::RegisterAttributes(UMeshDescriptionBase *this)

{
  FMeshAttributes *pFVar1;
  FMeshAttributes *pFVar2;
  undefined8 *puVar3;
  TUniquePtr<FMeshAttributes,TDefaultDelete<FMeshAttributes>_> *pTVar4;
  undefined8 local_18 [2];
  
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 == (FMeshAttributes *)0x0) {
    pFVar2 = (FMeshAttributes *)0x0;
  }
  else {
    pFVar2->_padding_ = (longlong)&___7FMeshAttributes__6B_;
    pFVar2->MeshDescription = &this->OwnedMeshDescription;
  }
  pTVar4 = &this->RequiredAttributes;
  if (pTVar4 == (TUniquePtr<FMeshAttributes,TDefaultDelete<FMeshAttributes>_> *)local_18) {
    if (pFVar2 == (FMeshAttributes *)0x0) goto LAB_14367f1a4;
    puVar3 = (undefined8 *)pFVar2->_padding_;
  }
  else {
    pFVar1 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar2;
    if (pFVar1 == (FMeshAttributes *)0x0) goto LAB_14367f1a4;
    puVar3 = (undefined8 *)pFVar1->_padding_;
    pFVar2 = pFVar1;
  }
  (*(code *)*puVar3)(pFVar2,1);
LAB_14367f1a4:
                    /* WARNING: Could not recover jumptable at 0x00014367f1b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pTVar4->Ptr->_padding_ + 8))(pTVar4->Ptr,0);
  return;
}

// ReserveNewEdges @ 143689990

void __thiscall UMeshDescriptionBase::ReserveNewEdges(UMeshDescriptionBase *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  pFVar1 = FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewPolygonGroups @ 1436899f0

void __thiscall
UMeshDescriptionBase::ReserveNewPolygonGroups(UMeshDescriptionBase *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  pFVar1 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewPolygons @ 143689a50

void __thiscall UMeshDescriptionBase::ReserveNewPolygons(UMeshDescriptionBase *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  pFVar1 = FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewTriangles @ 143689ab0

void __thiscall UMeshDescriptionBase::ReserveNewTriangles(UMeshDescriptionBase *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  pFVar1 = FMeshElementChannels::Get((this->OwnedMeshDescription).TriangleElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewVertexInstances @ 143689b10

void __thiscall
UMeshDescriptionBase::ReserveNewVertexInstances(UMeshDescriptionBase *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  pFVar1 = FMeshElementChannels::Get((this->OwnedMeshDescription).EdgeElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// ReserveNewVertices @ 143689b70

void __thiscall UMeshDescriptionBase::ReserveNewVertices(UMeshDescriptionBase *this,int param_1)

{
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar1;
  
  this_00 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  pFVar1 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar1->BitArray).NumBits - pFVar1->NumHoles) + param_1);
  return;
}

// Reset @ 143689c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshDescriptionBase::Reset(UMeshDescriptionBase *this)

{
  FMeshDescription *pFVar1;
  undefined1 auStack_2f8 [32];
  FMeshDescription local_2d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  pFVar1 = FMeshDescription::FMeshDescription(&local_2d8);
  FMeshDescription::operator=(&this->OwnedMeshDescription,pFVar1);
  FMeshDescription::~FMeshDescription(&local_2d8);
  (**(code **)(this->_padding_ + 0x2b0))(this);
  return;
}

// ReversePolygonFacing @ 14368ada0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::ReversePolygonFacing(UMeshDescriptionBase *this,FPolygonID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FMeshDescription::ReversePolygonFacing(&this->OwnedMeshDescription,param_1);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// Serialize @ 14368c2f0

void __thiscall UMeshDescriptionBase::Serialize(UMeshDescriptionBase *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x2b & 1) == 0) {
    if (((param_1->field_0x28 & 1) != 0) &&
       (iVar1 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
       iVar1 < 0x19)) {
      return;
    }
    FMeshDescription::Serialize(&this->OwnedMeshDescription,param_1);
  }
  return;
}

// Serialize @ 14368c360

void __thiscall
UMeshDescriptionBase::Serialize(UMeshDescriptionBase *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  if (this_00->ArIsObjectReferenceCollector == 0) {
    if ((this_00->ArIsLoading != 0) &&
       (iVar1 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID), iVar1 < 0x19))
    {
      return;
    }
    FMeshDescription::Serialize(&this->OwnedMeshDescription,(FArchive *)this_00);
  }
  return;
}

// SetPolygonPolygonGroup @ 143695b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::SetPolygonPolygonGroup
          (UMeshDescriptionBase *this,FPolygonID param_1,FPolygonGroupID param_2)

{
  ForElementType<unsigned_int> FVar1;
  FStaticBasicLogRecord *pFVar2;
  
  FVar1 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      FVar1 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonGroupElements,0);
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)((longlong)FVar1 + 0x18))) {
        if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
        }
        if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_2 >> 5) * 4) >>
             ((uint)param_2 & 0x1f) & 1) != 0) {
          FMeshDescription::SetPolygonPolygonGroup(&this->OwnedMeshDescription,param_1,param_2);
          return;
        }
      }
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar2 = &::LOG_Static;
      goto LAB_143695c3a;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar2 = &::LOG_Static;
LAB_143695c3a:
  UE::Logging::Private::BasicLog<3>(pFVar2,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// SetPolygonVertexInstances @ 1436961f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::SetPolygonVertexInstances
          (UMeshDescriptionBase *this,FPolygonID param_1,
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FVertexInstanceID *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res10 [8];
  undefined4 uStack_3c;
  TArrayView<FVertexInstanceID_const_,int> local_38;
  
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).PolygonElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      iVar2 = param_2->ArrayNum;
      pFVar8 = (param_2->AllocatorInstance).Data;
      pFVar1 = pFVar8 + (longlong)iVar2 * 4;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FVertexInstanceID_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar8 == pFVar1) {
          pFVar3 = (FVertexInstanceID *)(param_2->AllocatorInstance).Data;
          iVar2 = param_2->ArrayNum;
          if ((iVar2 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FMeshDescription::RemovePolygonTriangles(&this->OwnedMeshDescription,param_1);
          local_38._12_4_ = uStack_3c;
          local_38.ArrayNum = iVar2;
          local_38.DataPtr = pFVar3;
          FMeshDescription::CreatePolygonTriangles(&this->OwnedMeshDescription,param_1,&local_38);
          return;
        }
        uVar6 = *(uint *)pFVar8;
        FVar7 = (ForElementType<unsigned_int>)
                FMeshElementChannels::Get((this->OwnedMeshDescription).VertexInstanceElements,0);
        if (((int)uVar6 < 0) || (*(int *)((longlong)FVar7 + 0x18) <= (int)uVar6)) break;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
        }
        uVar9 = uVar6 & 0x1f;
        if ((int)uVar6 < 0) {
          uVar6 = uVar6 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar7 + (longlong)((int)uVar6 >> 5) * 4) >> uVar9 & 1) == 0) break;
        pFVar8 = pFVar8 + 4;
      }
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      return;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// SetVertexPosition @ 143696740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMeshDescriptionBase::SetVertexPosition
          (UMeshDescriptionBase *this,FVertexID param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  code *pcVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  FMeshElementContainer *pFVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar10;
  
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pFVar8 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
      bVar6 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,MeshAttribute::Vertex::Position);
      if (!bVar6) {
        if ((byte)LogMeshDescription._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
        return;
      }
      pFVar8 = FMeshElementChannels::Get((this->OwnedMeshDescription).VertexElements,0);
      dVar1 = (param_2->field0_0x0)._s_0.X;
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      dVar3 = (param_2->field0_0x0)._s_0.Z;
      pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                       *)&pFVar8->Attributes,MeshAttribute::Vertex::Position);
      if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = *(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)&pTVar9->field_0x8;
      iVar4 = *(int *)((longlong)&this_00->_padding_ + 4);
      if (((int)this_00->_padding_ != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<std::remove_cv_t<RealAttributeType>>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x830,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((iVar4 != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x831,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
      pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (this_01,(int)param_1);
      *(ulonglong *)&pTVar10->field0_0x0 = CONCAT44((float)dVar2,(float)dVar1);
      (pTVar10->field0_0x0)._s_0.Z = (float)dVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// StaticRegisterNativesUMeshDescriptionBase @ 143696e70

void __cdecl UMeshDescriptionBase::StaticRegisterNativesUMeshDescriptionBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x5b;
  local_18.DataPtr = Z_Construct_UClass_UMeshDescriptionBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execComputePolygonTriangulation @ 143698230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execComputePolygonTriangulation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID FVar2;
  ForElementType<unsigned_int> FVar3;
  FPolygonID local_res8 [2];
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::ComputePolygonTriangulation((FMeshDescription *)(param_1 + 1),FVar2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// execCreateEdge @ 143698330

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMeshDescriptionBase::execCreateEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  FVertexID FVar3;
  FEdgeID FVar4;
  ForElementType<unsigned_int> FVar5;
  FMeshElementContainer *this;
  FStaticBasicLogRecord *pFVar6;
  FVertexID local_res8 [2];
  FVertexID local_res10 [2];
  
  local_res10[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar3 = local_res10[0];
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if (((int)FVar3 < 0) || (*(int *)((longlong)FVar5 + 0x18) <= (int)FVar3)) {
LAB_1436984ce:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_1436984ed;
    pFVar6 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) == 0) goto LAB_1436984ce;
    FVar5 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
    if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar5 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
      }
      if ((*(uint *)((longlong)FVar5 +
                    (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           ((uint)FVar2 & 0x1f) & 1) != 0) {
        this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
        FVar4 = (FEdgeID)FMeshElementContainer::Add(this);
        FMeshDescription::CreateEdge_Internal((FMeshDescription *)(param_1 + 1),FVar4,FVar3,FVar2);
        *(FEdgeID *)param_3 = FVar4;
        return;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_1436984ed;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogMeshDescription);
LAB_1436984ed:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execCreateEdgeWithID @ 143698510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreateEdgeWithID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FVertexID FVar3;
  FVertexID FVar4;
  FEdgeID FVar5;
  ForElementType<unsigned_int> FVar6;
  FMeshElementContainer *this;
  FStaticBasicLogRecord *pFVar7;
  FVertexID local_res8 [2];
  FVertexID local_res10 [2];
  FEdgeID local_res20 [2];
  
  local_res20[0] = (FEdgeID)0xffffffff;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar5 = local_res20[0];
  FVar4 = local_res10[0];
  FVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)FVar5) && ((int)FVar5 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)((int)FVar5 + ((int)FVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar5 & 0x1f) & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar7 = &::LOG_Static;
      goto LAB_143698745;
    }
  }
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar4) && ((int)FVar4 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)((int)FVar4 + ((int)FVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar4 & 0x1f) & 1) != 0) {
      FVar6 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
      if ((-1 < (int)FVar3) && ((int)FVar3 < *(int *)((longlong)FVar6 + 0x18))) {
        if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
        }
        if ((*(uint *)((longlong)FVar6 +
                      (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
             ((uint)FVar3 & 0x1f) & 1) != 0) {
          this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
          FMeshElementContainer::Insert(this,(int)FVar5);
          FMeshDescription::CreateEdge_Internal((FMeshDescription *)(param_1 + 1),FVar5,FVar4,FVar3)
          ;
          return;
        }
      }
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar7 = &::LOG_Static;
      goto LAB_143698745;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar7 = &::LOG_Static;
LAB_143698745:
  UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// execCreatePolygon @ 143698770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMeshDescriptionBase::execCreatePolygon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexInstanceID *pFVar2;
  undefined8 uVar3;
  FPolygonGroupID FVar4;
  FPolygonID FVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<FVertexInstanceID_const_,int> *pTVar7;
  FMeshElementContainer *this;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar9;
  FPolygonGroupID local_res8 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_68;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FVertexInstanceID_const_,int> local_48;
  TArrayView<FVertexInstanceID_const_,int> local_38 [2];
  
  local_res8[0] = (FPolygonGroupID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar9 = &local_58;
  if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FVar4 = local_res8[0];
  pTVar8 = &local_68;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)FVar4) && ((int)FVar4 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)((int)FVar4 + ((int)FVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar4 & 0x1f) & 1) != 0) {
      pTVar7 = TArrayView<FVertexInstanceID_const_,int>::
               TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                         (local_38,pTVar9);
      pFVar2 = pTVar7->DataPtr;
      uVar3._0_4_ = pTVar7->ArrayNum;
      uVar3._4_4_ = *(undefined4 *)&pTVar7->field_0xc;
      this = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
      FVar5 = (FPolygonID)FMeshElementContainer::Add(this);
      local_48.DataPtr = pFVar2;
      local_48._8_8_ = uVar3;
      FMeshDescription::CreatePolygon_Internal
                ((FMeshDescription *)(param_1 + 1),FVar5,FVar4,&local_48,pTVar8);
      goto LAB_14369896a;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  FVar5 = (FPolygonID)0xffffffff;
LAB_14369896a:
  *(FPolygonID *)param_3 = FVar5;
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execCreatePolygonGroup @ 1436989d0

void __cdecl
UMeshDescriptionBase::execCreatePolygonGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FMeshElementContainer *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  iVar1 = FMeshElementContainer::Add(this);
  *(int *)param_3 = iVar1;
  return;
}

// execCreatePolygonGroupWithID @ 143698a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreatePolygonGroupWithID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  FMeshElementContainer *this;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      return;
    }
  }
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  FMeshElementContainer::Insert(this,uVar2);
  return;
}

// execCreatePolygonWithID @ 143698b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreatePolygonWithID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FVertexInstanceID *pFVar3;
  undefined8 uVar4;
  FPolygonGroupID FVar5;
  FPolygonID FVar6;
  ForElementType<unsigned_int> FVar7;
  TArrayView<FVertexInstanceID_const_,int> *pTVar8;
  FMeshElementContainer *this;
  FStaticBasicLogRecord *pFVar9;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar11;
  FPolygonGroupID local_res8 [2];
  FPolygonID local_res10 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_78;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<FVertexInstanceID_const_,int> local_58;
  TArrayView<FVertexInstanceID_const_,int> local_48 [2];
  
  local_res10[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FPolygonGroupID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pTVar11 = &local_68;
  if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FVar6 = local_res10[0];
  FVar5 = local_res8[0];
  pTVar10 = &local_78;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if (((int)FVar6 < 0) || (*(int *)((longlong)FVar7 + 0x18) <= (int)FVar6)) {
LAB_143698ce2:
    FVar7 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
    if ((-1 < (int)FVar5) && ((int)FVar5 < *(int *)((longlong)FVar7 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
      }
      if ((*(uint *)((longlong)FVar7 +
                    (longlong)((int)((int)FVar5 + ((int)FVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           ((uint)FVar5 & 0x1f) & 1) != 0) {
        pTVar8 = TArrayView<FVertexInstanceID_const_,int>::
                 TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                           (local_48,pTVar11);
        pFVar3 = pTVar8->DataPtr;
        uVar4._0_4_ = pTVar8->ArrayNum;
        uVar4._4_4_ = *(undefined4 *)&pTVar8->field_0xc;
        this = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
        FMeshElementContainer::Insert(this,(int)FVar6);
        local_58.DataPtr = pFVar3;
        local_58._8_8_ = uVar4;
        FMeshDescription::CreatePolygon_Internal
                  ((FMeshDescription *)(param_1 + 1),FVar6,FVar5,&local_58,pTVar10);
        goto LAB_143698d94;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143698d94;
    pFVar9 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 +
                  (longlong)((int)((int)FVar6 + ((int)FVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar6 & 0x1f) & 1) == 0) goto LAB_143698ce2;
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_143698d94;
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogMeshDescription);
LAB_143698d94:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execCreateTriangle @ 143698df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreateTriangle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexInstanceID *pFVar2;
  undefined8 uVar3;
  FPolygonGroupID FVar4;
  FTriangleID FVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<FVertexInstanceID_const_,int> *pTVar7;
  FMeshElementContainer *this;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar9;
  FPolygonGroupID local_res8 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_68;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FVertexInstanceID_const_,int> local_48;
  TArrayView<FVertexInstanceID_const_,int> local_38 [2];
  
  local_res8[0] = (FPolygonGroupID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar9 = &local_58;
  if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FVar4 = local_res8[0];
  pTVar8 = &local_68;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)FVar4) && ((int)FVar4 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)((int)FVar4 + ((int)FVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar4 & 0x1f) & 1) != 0) {
      pTVar7 = TArrayView<FVertexInstanceID_const_,int>::
               TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_const_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                         (local_38,pTVar9);
      pFVar2 = pTVar7->DataPtr;
      uVar3._0_4_ = pTVar7->ArrayNum;
      uVar3._4_4_ = *(undefined4 *)&pTVar7->field_0xc;
      this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
      FVar5 = (FTriangleID)FMeshElementContainer::Add(this);
      local_48.DataPtr = pFVar2;
      local_48._8_8_ = uVar3;
      FMeshDescription::CreateTriangle_Internal
                ((FMeshDescription *)(param_1 + 1),FVar5,FVar4,&local_48,pTVar8);
      goto LAB_143698fea;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  FVar5 = (FTriangleID)0xffffffff;
LAB_143698fea:
  *(FTriangleID *)param_3 = FVar5;
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execCreateTriangleWithID @ 143699050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreateTriangleWithID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FVertexInstanceID *pFVar3;
  undefined8 uVar4;
  FPolygonGroupID FVar5;
  FTriangleID FVar6;
  ForElementType<unsigned_int> FVar7;
  TArrayView<FVertexInstanceID_const_,int> *pTVar8;
  FMeshElementContainer *this;
  FStaticBasicLogRecord *pFVar9;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar11;
  FPolygonGroupID local_res8 [2];
  FTriangleID local_res10 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_78;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<FVertexInstanceID_const_,int> local_58;
  TArrayView<FVertexInstanceID_const_,int> local_48 [2];
  
  local_res10[0] = (FTriangleID)0xffffffff;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FPolygonGroupID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pTVar11 = &local_68;
  if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
              param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FVar6 = local_res10[0];
  FVar5 = local_res8[0];
  pTVar10 = &local_78;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar10 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if (((int)FVar6 < 0) || (*(int *)((longlong)FVar7 + 0x18) <= (int)FVar6)) {
LAB_143699202:
    FVar7 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
    if ((-1 < (int)FVar5) && ((int)FVar5 < *(int *)((longlong)FVar7 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
      }
      if ((*(uint *)((longlong)FVar7 +
                    (longlong)((int)((int)FVar5 + ((int)FVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           ((uint)FVar5 & 0x1f) & 1) != 0) {
        pTVar8 = TArrayView<FVertexInstanceID_const_,int>::
                 TArrayView<FVertexInstanceID_const_,int><TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_const_&,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>_>
                           (local_48,pTVar11);
        pFVar3 = pTVar8->DataPtr;
        uVar4._0_4_ = pTVar8->ArrayNum;
        uVar4._4_4_ = *(undefined4 *)&pTVar8->field_0xc;
        this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
        FMeshElementContainer::Insert(this,(int)FVar6);
        local_58.DataPtr = pFVar3;
        local_58._8_8_ = uVar4;
        FMeshDescription::CreateTriangle_Internal
                  ((FMeshDescription *)(param_1 + 1),FVar6,FVar5,&local_58,pTVar10);
        goto LAB_1436992b4;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_1436992b4;
    pFVar9 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 +
                  (longlong)((int)((int)FVar6 + ((int)FVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar6 & 0x1f) & 1) == 0) goto LAB_143699202;
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_1436992b4;
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogMeshDescription);
LAB_1436992b4:
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execCreateVertex @ 143699310

void __cdecl UMeshDescriptionBase::execCreateVertex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FMeshElementContainer *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  iVar1 = FMeshElementContainer::Add(this);
  *(int *)param_3 = iVar1;
  return;
}

// execCreateVertexInstance @ 143699350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreateVertexInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  FMeshElementContainer *this;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar5;
  FVertexID local_res8 [2];
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
      iVar3 = FMeshElementContainer::Add(this);
      this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                          (*(TMeshAttributeArraySet<FVertexID> **)&param_1[4].field_0x10,0);
      pFVar5 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar3);
      *pFVar5 = FVar2;
      FMeshElementIndexer::AddReferenceToKey
                ((FMeshElementIndexer *)&param_1[7].field_0x10,(int)FVar2,iVar3,0);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execCreateVertexInstanceWithID @ 1436994b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreateVertexInstanceWithID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  uint uVar3;
  ForElementType<unsigned_int> FVar4;
  FMeshElementContainer *this;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  FVertexID local_res8 [2];
  uint local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar3 = local_res10[0];
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FVar4 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
      if (((int)uVar3 < 0) || (*(int *)((longlong)FVar4 + 0x18) <= (int)uVar3)) {
LAB_143699609:
        this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
        FMeshElementContainer::Insert(this,uVar3);
        this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                            (*(TMeshAttributeArraySet<FVertexID> **)&param_1[4].field_0x10,0);
        pFVar5 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,uVar3);
        *pFVar5 = FVar2;
        FMeshElementIndexer::AddReferenceToKey
                  ((FMeshElementIndexer *)&param_1[7].field_0x10,(int)FVar2,uVar3,0);
        return;
      }
      if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
      }
      if ((*(uint *)((longlong)FVar4 +
                    (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar3 & 0x1f) & 1) == 0) goto LAB_143699609;
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar6 = &::LOG_Static;
      goto LAB_14369966f;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar6 = &::LOG_Static;
LAB_14369966f:
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// execCreateVertexWithID @ 143699690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execCreateVertexWithID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  FMeshElementContainer *this;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      return;
    }
  }
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  FMeshElementContainer::Insert(this,uVar2);
  return;
}

// execDeleteEdge @ 143699790

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMeshDescriptionBase::execDeleteEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FEdgeID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *pTVar4;
  FEdgeID local_res8 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FEdgeID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res8[0];
  pTVar4 = &local_28;
  if ((TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::DeleteEdge_Internal<TArray>((FMeshDescription *)(param_1 + 1),FVar2,pTVar4);
      goto LAB_1436998cd;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_1436998cd:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execDeletePolygon @ 143699900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMeshDescriptionBase::execDeletePolygon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FPolygonID FVar3;
  ForElementType<unsigned_int> FVar4;
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar7;
  FPolygonID local_res8 [2];
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> local_58;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_48;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_38;
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar6 = &local_38;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar7 = &local_48;
  if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FVar3 = local_res8[0];
  pTVar5 = &local_58;
  if ((TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar3) && ((int)FVar3 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) != 0) {
      FMeshDescription::DeletePolygon_Internal<TArray>
                ((FMeshDescription *)(param_1 + 1),FVar3,pTVar6,pTVar7,pTVar5);
      goto LAB_143699ad1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_143699ad1:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execDeletePolygonGroup @ 143699b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execDeletePolygonGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonGroupID FVar2;
  ForElementType<unsigned_int> FVar3;
  FPolygonGroupID local_res8 [2];
  
  local_res8[0] = (FPolygonGroupID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::DeletePolygonGroup((FMeshDescription *)(param_1 + 1),FVar2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// execDeleteTriangle @ 143699c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execDeleteTriangle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FTriangleID FVar3;
  ForElementType<unsigned_int> FVar4;
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar7;
  FTriangleID local_res8 [2];
  TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> local_58;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_48;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_38;
  
  local_res8[0] = (FTriangleID)0xffffffff;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar6 = &local_38;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar7 = &local_48;
  if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FVar3 = local_res8[0];
  pTVar5 = &local_58;
  if ((TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FPolygonGroupID,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)FVar3) && ((int)FVar3 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) != 0) {
      FMeshDescription::DeleteTriangle_Internal<TArray>
                ((FMeshDescription *)(param_1 + 1),FVar3,pTVar6,pTVar7,pTVar5);
      goto LAB_143699df1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_143699df1:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execDeleteVertex @ 143699e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMeshDescriptionBase::execDeleteVertex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  ForElementType<unsigned_int> FVar3;
  FVertexID local_res8 [2];
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::DeleteVertex((FMeshDescription *)(param_1 + 1),FVar2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// execDeleteVertexInstance @ 143699f40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execDeleteVertexInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TMeshAttributeArrayBase<FVertexID> *this;
  FVertexID *pFVar4;
  FMeshElementContainer *this_00;
  TArrayView<int_const_,int> *pTVar5;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *this_01;
  uint local_res8 [2];
  FVertexID local_res10 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_38;
  TArrayView<int_const_,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar2 = local_res8[0];
  this_01 = &local_38;
  if ((TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    this_01 = (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      this = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                       (*(TMeshAttributeArraySet<FVertexID> **)&param_1[4].field_0x10,0);
      pFVar4 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this,uVar2);
      local_res10[0] = *pFVar4;
      FMeshElementIndexer::RemoveReferenceFromKey
                ((FMeshElementIndexer *)&param_1[7].field_0x10,(int)local_res10[0],uVar2,0);
      this_00 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
      FMeshElementContainer::Remove(this_00,uVar2);
      FMeshElementIndexer::RemoveKey((FMeshElementIndexer *)&param_1[10].field_0x8,uVar2,0);
      if (this_01 != (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
        pTVar5 = FMeshElementIndexer::Find
                           ((FMeshElementIndexer *)&param_1[7].field_0x10,&local_28,
                            (int)local_res10[0],0);
        if (pTVar5->ArrayNum == 0) {
          pTVar5 = FMeshElementIndexer::Find
                             ((FMeshElementIndexer *)&param_1[8].field_0x20,&local_28,
                              (int)local_res10[0],0);
          if (pTVar5->ArrayNum == 0) {
            TArray<FVertexID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FVertexID_const_&>
                      (this_01,local_res10);
          }
        }
      }
      goto LAB_14369a124;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369a124:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execEmpty @ 14369a150

void __cdecl UMeshDescriptionBase::execEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMeshDescription::Empty((FMeshDescription *)(param_1 + 1));
  return;
}

// execGetEdgeConnectedPolygons @ 14369a180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetEdgeConnectedPolygons(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FTriangleID FVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  ForElementType<unsigned_int> FVar8;
  TArrayView<int_const_,int> *pTVar9;
  FPolygonID *pFVar10;
  TMeshAttributeArrayBase<FPolygonID> *this;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> *this_00;
  FTriangleID *pFVar11;
  uint local_res8 [2];
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FTriangleID_const_,int> local_48;
  TArrayView<int_const_,int> local_38;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  uVar6 = local_res8[0];
  this_00 = &local_58;
  if ((TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar8 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)FVar8 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar8 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) {
      pTVar9 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[0xb].field_0x18,&local_38,uVar6,0);
      uVar1 = pTVar9->ArrayNum;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,&this_00->AllocatorInstance,0,&this_00->ArrayMax);
      }
      FMeshElementIndexer::Find<FTriangleID>
                ((FMeshElementIndexer *)&param_1[0xb].field_0x18,&local_48,uVar6,0);
      for (pFVar11 = local_48.DataPtr; pFVar11 != local_48.DataPtr + local_48.ArrayNum;
          pFVar11 = pFVar11 + 1) {
        lVar4 = *(longlong *)&param_1[5].field_0x10;
        FVar2 = *pFVar11;
        if ((*(int *)(lVar4 + 0x38) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = (TMeshAttributeArrayBase<FPolygonID> *)(lVar4 + 0x18);
        if (*(TMeshAttributeArrayBase<FPolygonID> **)(lVar4 + 0x30) !=
            (TMeshAttributeArrayBase<FPolygonID> *)0x0) {
          this = *(TMeshAttributeArrayBase<FPolygonID> **)(lVar4 + 0x30);
        }
        pFVar10 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase(this,(int)FVar2);
        TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
                  (this_00,pFVar10);
      }
      goto LAB_14369a3c7;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369a3c7:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetEdgeConnectedTriangles @ 14369a400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetEdgeConnectedTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  ForAnyElementType *pFVar6;
  uint local_res8 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FTriangleID_const_,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  pFVar6 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                ((FMeshElementIndexer *)&param_1[0xb].field_0x18,&local_28,uVar4,0);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar2 = *piVar1;
      *(int *)&pFVar6[1].Data = local_28.ArrayNum;
      if ((local_28.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_28.ArrayNum,iVar2,pFVar6,local_28.ArrayNum,piVar1);
        if (local_28.ArrayNum != 0) {
          memcpy(pFVar6->Data,local_28.DataPtr,(longlong)local_28.ArrayNum << 2);
        }
      }
      goto LAB_14369a5af;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369a5af:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetEdgeCount @ 14369a5e0

void __cdecl UMeshDescriptionBase::execGetEdgeCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMeshElementContainer *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  *(int *)param_3 = (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  return;
}

// execGetEdgeVertex @ 14369a620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMeshDescriptionBase::execGetEdgeVertex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<FVertexID,int> *pTVar7;
  FStaticBasicLogRecord *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  TArrayView<FVertexID,int> local_28;
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar9 = local_res10[0];
  uVar4 = local_res8[0];
  lVar10 = (longlong)(int)local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if (((int)uVar9 < 0) || (*(int *)((longlong)FVar6 + 0x18) <= (int)uVar9)) {
LAB_14369a7ab:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369a7ca;
    pFVar8 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) == 0) goto LAB_14369a7ab;
    if (uVar4 < 2) {
      pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                         ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                          &param_1[4].field_0x18,&local_28,uVar9);
      pFVar2 = pTVar7->DataPtr;
      uVar9 = 0;
      if ((int)uVar4 < pTVar7->ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(FVertexID *)param_3 = pFVar2[lVar10];
      return;
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369a7ca;
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogMeshDescription);
LAB_14369a7ca:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetEdgeVertices @ 14369a7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetEdgeVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<FVertexID,int> *pTVar4;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *pTVar5;
  uint local_res8 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<FVertexID_const_,int> local_38;
  TArrayView<FVertexID,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  uVar2 = local_res8[0];
  pTVar5 = &local_48;
  if ((TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                         ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)
                          &param_1[4].field_0x18,&local_28,uVar2);
      local_38.DataPtr = pTVar4->DataPtr;
      local_38.ArrayNum = pTVar4->ArrayNum;
      Algo::Copy<TArrayView<FVertexID_const_,int>,TArray<FVertexID,TSizedDefaultAllocator<32>_>_>
                (&local_38,pTVar5);
      goto LAB_14369a94f;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369a94f:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// execGetNumEdgeConnectedPolygons @ 14369a980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumEdgeConnectedPolygons
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FEdgeID FVar3;
  ForElementType<unsigned_int> FVar4;
  TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  undefined1 auStack_78 [32];
  FEdgeID local_58 [2];
  TArray<FPolygonID,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_50;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58[0] = (FEdgeID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  FVar3 = local_58[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)FVar3) && ((int)FVar3 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) != 0) {
      pTVar5 = FMeshDescription::
               GetEdgeConnectedPolygons<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                         ((FMeshDescription *)(param_1 + 1),&local_50,FVar3);
      iVar1 = pTVar5->ArrayNum;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<FPolygonID>)0x0) {
        FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
      }
      *(int *)param_3 = iVar1;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumEdgeConnectedTriangles @ 14369aab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumEdgeConnectedTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<int_const_,int> *pTVar4;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[0xb].field_0x18,&local_18,uVar2,0);
      *(int *)param_3 = pTVar4->ArrayNum;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumPolygonGroupPolygons @ 14369abd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumPolygonGroupPolygons(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<int_const_,int> *pTVar4;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[0x11].field_0x8,&local_18,uVar2,0);
      *(int *)param_3 = pTVar4->ArrayNum;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumPolygonInternalEdges @ 14369acf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumPolygonInternalEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<int_const_,int> *pTVar4;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[0xe].field_0x10,&local_18,uVar2,0);
      *(int *)param_3 = pTVar4->ArrayNum + -1;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumPolygonTriangles @ 14369ae10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumPolygonTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<int_const_,int> *pTVar4;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[0xe].field_0x10,&local_18,uVar2,0);
      *(int *)param_3 = pTVar4->ArrayNum;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumPolygonVertices @ 14369af30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumPolygonVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint local_res8 [2];
  TArrayView<FTriangleID_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                ((FMeshElementIndexer *)&param_1[0xe].field_0x10,&local_18,uVar2,0);
      *(int *)param_3 = local_18.ArrayNum + 2;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumVertexConnectedEdges @ 14369b060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumVertexConnectedEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<int_const_,int> *pTVar4;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[8].field_0x20,&local_18,uVar2,0);
      *(int *)param_3 = pTVar4->ArrayNum;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumVertexConnectedPolygons @ 14369b180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumVertexConnectedPolygons
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  FVertexID local_res8 [2];
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      iVar3 = FMeshDescription::GetNumVertexConnectedPolygons
                        ((FMeshDescription *)(param_1 + 1),FVar2);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumVertexConnectedTriangles @ 14369b290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumVertexConnectedTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  FVertexID local_res8 [2];
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      iVar3 = FMeshDescription::GetNumVertexConnectedTriangles
                        ((FMeshDescription *)(param_1 + 1),FVar2);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumVertexInstanceConnectedPolygons @ 14369b3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumVertexInstanceConnectedPolygons
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexInstanceID FVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  FVertexInstanceID local_res8 [2];
  
  local_res8[0] = (FVertexInstanceID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      iVar3 = FMeshDescription::GetNumVertexInstanceConnectedPolygons
                        ((FMeshDescription *)(param_1 + 1),FVar2);
      *(int *)param_3 = iVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumVertexInstanceConnectedTriangles @ 14369b4b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumVertexInstanceConnectedTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<int_const_,int> *pTVar4;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[10].field_0x8,&local_18,uVar2,0);
      *(int *)param_3 = pTVar4->ArrayNum;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetNumVertexVertexInstances @ 14369b5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetNumVertexVertexInstances
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<int_const_,int> *pTVar4;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pTVar4 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[7].field_0x10,&local_18,uVar2,0);
      *(int *)param_3 = pTVar4->ArrayNum;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetPolygonAdjacentPolygons @ 14369b6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonAdjacentPolygons(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> *pTVar4;
  FPolygonID local_res8 [2];
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res8[0];
  pTVar4 = &local_28;
  if ((TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::GetPolygonAdjacentPolygons<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar2,pTVar4);
      goto LAB_14369b82d;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369b82d:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetPolygonCount @ 14369b860

void __cdecl
UMeshDescriptionBase::execGetPolygonCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMeshElementContainer *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  *(int *)param_3 = (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  return;
}

// execGetPolygonGroupCount @ 14369b8a0

void __cdecl
UMeshDescriptionBase::execGetPolygonGroupCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMeshElementContainer *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  *(int *)param_3 = (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  return;
}

// execGetPolygonGroupPolygons @ 14369b8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonGroupPolygons(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  ForAnyElementType *pFVar6;
  uint local_res8 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FPolygonID_const_,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  pFVar6 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      FMeshElementIndexer::Find<FPolygonID>
                ((FMeshElementIndexer *)&param_1[0x11].field_0x8,&local_28,uVar4,0);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar2 = *piVar1;
      *(int *)&pFVar6[1].Data = local_28.ArrayNum;
      if ((local_28.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_28.ArrayNum,iVar2,pFVar6,local_28.ArrayNum,piVar1);
        if (local_28.ArrayNum != 0) {
          memcpy(pFVar6->Data,local_28.DataPtr,(longlong)local_28.ArrayNum << 2);
        }
      }
      goto LAB_14369ba8f;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369ba8f:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetPolygonInternalEdges @ 14369bac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonInternalEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar4;
  FPolygonID local_res8 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res8[0];
  pTVar4 = &local_28;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::GetPolygonInternalEdges<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar2,pTVar4);
      goto LAB_14369bbfd;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369bbfd:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetPolygonPerimeterEdges @ 14369bc30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonPerimeterEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *pTVar4;
  FPolygonID local_res8 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res8[0];
  pTVar4 = &local_28;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::GetPolygonPerimeterEdges<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar2,pTVar4);
      goto LAB_14369bd6d;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369bd6d:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetPolygonPolygonGroup @ 14369bda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonPolygonGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  FPolygonGroupID *pFVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pFVar4 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                         ((TMeshAttributesRef<int,FPolygonGroupID> *)(param_1 + 7),uVar2);
      *(FPolygonGroupID *)param_3 = *pFVar4;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetPolygonTriangles @ 14369bec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  ForAnyElementType *pFVar6;
  uint local_res8 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FTriangleID_const_,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  pFVar6 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                ((FMeshElementIndexer *)&param_1[0xe].field_0x10,&local_28,uVar4,0);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar2 = *piVar1;
      *(int *)&pFVar6[1].Data = local_28.ArrayNum;
      if ((local_28.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_28.ArrayNum,iVar2,pFVar6,local_28.ArrayNum,piVar1);
        if (local_28.ArrayNum != 0) {
          memcpy(pFVar6->Data,local_28.DataPtr,(longlong)local_28.ArrayNum << 2);
        }
      }
      goto LAB_14369c06f;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369c06f:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetPolygonVertexInstances @ 14369c0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonVertexInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  FPolygonID FVar3;
  ForElementType<unsigned_int> FVar4;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar5;
  FPolygonID local_res8 [2];
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_38;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar3 = local_res8[0];
  pTVar5 = &local_28;
  if ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar3) && ((int)FVar3 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) != 0) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      FMeshDescription::GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar3,&local_38);
      if (pTVar5 != &local_38) {
        pFVar2 = (pTVar5->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pTVar5->AllocatorInstance).Data = local_38.AllocatorInstance.Data;
        pTVar5->ArrayNum = local_38.ArrayNum;
        pTVar5->ArrayMax = local_38.ArrayMax;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      goto LAB_14369c23b;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369c23b:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetPolygonVertices @ 14369c270

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetPolygonVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *pTVar4;
  FPolygonID local_res8 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res8[0];
  pTVar4 = &local_28;
  if ((TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::GetPolygonVertices<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar2,pTVar4);
      goto LAB_14369c3ad;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369c3ad:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetTriangleAdjacentTriangles @ 14369c3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetTriangleAdjacentTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FTriangleID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> *pTVar4;
  FTriangleID local_res8 [2];
  TArray<FTriangleID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FTriangleID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res8[0];
  pTVar4 = &local_28;
  if ((TArray<FTriangleID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FTriangleID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FTriangleID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::GetTriangleAdjacentTriangles<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar2,pTVar4);
      goto LAB_14369c51d;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369c51d:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetTriangleCount @ 14369c550

void __cdecl
UMeshDescriptionBase::execGetTriangleCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMeshElementContainer *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  *(int *)param_3 = (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  return;
}

// execGetTriangleEdges @ 14369c590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetTriangleEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FEdgeID *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  FEdgeID *pFVar8;
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> *this;
  uint local_res8 [2];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_38;
  TArrayView<FEdgeID,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  this = &local_38;
  if ((TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      TArray<FEdgeID,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,3,Default);
      TMeshAttributesRef<int,TArrayView<FEdgeID,int>_>::operator[]
                ((TMeshAttributesRef<int,TArrayView<FEdgeID,int>_> *)&param_1[5].field_0x18,
                 &local_28,uVar4);
      for (pFVar8 = local_28.DataPtr; pFVar8 != local_28.DataPtr + local_28.ArrayNum;
          pFVar8 = pFVar8 + 1) {
        pFVar2 = (FEdgeID *)(this->AllocatorInstance).Data;
        if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + this->ArrayMax)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = this->ArrayNum;
        if (iVar6 == this->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&this->AllocatorInstance,&this->ArrayMax);
        }
        this->ArrayNum = iVar6 + 1;
        *(FEdgeID *)((this->AllocatorInstance).Data + (longlong)iVar6 * 4) = *pFVar8;
      }
      goto LAB_14369c7a5;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369c7a5:
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execGetTrianglePolygon @ 14369c7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetTrianglePolygon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  FPolygonID *pFVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pFVar4 = TMeshAttributesRef<int,FPolygonID>::operator[]
                         ((TMeshAttributesRef<int,FPolygonID> *)&param_1[5].field_0x10,uVar2);
      *(FPolygonID *)param_3 = *pFVar4;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetTrianglePolygonGroup @ 14369c8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetTrianglePolygonGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  FPolygonGroupID *pFVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pFVar4 = TMeshAttributesRef<int,FPolygonGroupID>::operator[]
                         ((TMeshAttributesRef<int,FPolygonGroupID> *)&param_1[6].field_0x20,uVar2);
      *(FPolygonGroupID *)param_3 = *pFVar4;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetTriangleVertexInstance @ 14369ca10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetTriangleVertexInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexInstanceID *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<FVertexInstanceID,int> *pTVar7;
  FStaticBasicLogRecord *pFVar8;
  uint uVar9;
  longlong lVar10;
  uint local_res8 [2];
  uint local_res10 [2];
  TArrayView<FVertexInstanceID,int> local_28;
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar9 = local_res10[0];
  uVar4 = local_res8[0];
  lVar10 = (longlong)(int)local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if (((int)uVar9 < 0) || (*(int *)((longlong)FVar6 + 0x18) <= (int)uVar9)) {
LAB_14369cb93:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369cbb2;
    pFVar8 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) == 0) goto LAB_14369cb93;
    if (uVar4 < 3) {
      pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         ((TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)
                          (param_1 + 5),&local_28,uVar9);
      pFVar2 = pTVar7->DataPtr;
      uVar9 = 0;
      if ((int)uVar4 < pTVar7->ArrayNum) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(FVertexInstanceID *)param_3 = pFVar2[lVar10];
      return;
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369cbb2;
    pFVar8 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar8,(FLogCategoryBase *)&LogMeshDescription);
LAB_14369cbb2:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetTriangleVertexInstances @ 14369cbe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetTriangleVertexInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FVertexInstanceID *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  TArrayView<FVertexInstanceID,int> *pTVar8;
  FVertexInstanceID *pFVar9;
  ForAnyElementType *pFVar10;
  uint local_res8 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FVertexInstanceID,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  pFVar10 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar10 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      pTVar8 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         ((TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)
                          (param_1 + 5),&local_28,uVar4);
      pFVar9 = pTVar8->DataPtr;
      pFVar1 = pFVar9 + pTVar8->ArrayNum;
      for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
        if ((((FVertexInstanceID *)pFVar10->Data <= pFVar9) &&
            (pFVar9 < (FVertexInstanceID *)pFVar10->Data + *(int *)((longlong)&pFVar10[1].Data + 4))
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)&pFVar10[1].Data;
        if (iVar6 == *(int *)((longlong)&pFVar10[1].Data + 4)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar10,(int *)((longlong)&pFVar10[1].Data + 4));
        }
        *(int *)&pFVar10[1].Data = iVar6 + 1;
        *(FVertexInstanceID *)(pFVar10->Data + (longlong)iVar6 * 4) = *pFVar9;
      }
      goto LAB_14369cde4;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369cde4:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetTriangleVertices @ 14369ce10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetTriangleVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TArrayView<FVertexID,int> *pTVar4;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *this;
  uint local_res8 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<FVertexID_const_,int> local_38;
  TArrayView<FVertexID,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  uVar2 = local_res8[0];
  this = &local_48;
  if ((TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    this = (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      TArray<FVertexID,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this,3,Default);
      pTVar4 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                         ((TMeshAttributesRef<int,TArrayView<FVertexID,int>_> *)(param_1 + 6),
                          &local_28,uVar2);
      local_38.DataPtr = pTVar4->DataPtr;
      local_38.ArrayNum = pTVar4->ArrayNum;
      Algo::Copy<TArrayView<FVertexID_const_,int>,TArray<FVertexID,TSizedDefaultAllocator<32>_>_>
                (&local_38,this);
      goto LAB_14369cf7f;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369cf7f:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// execGetVertexAdjacentVertices @ 14369cfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexAdjacentVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  ForElementType<unsigned_int> FVar3;
  TArray<FVertexID,TSizedDefaultAllocator<32>_> *pTVar4;
  FVertexID local_res8 [2];
  TArray<FVertexID,TSizedDefaultAllocator<32>_> local_28;
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  FVar2 = local_res8[0];
  pTVar4 = &local_28;
  if ((TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FVertexID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::GetVertexAdjacentVertices<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar2,pTVar4);
      goto LAB_14369d0ea;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369d0ea:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execGetVertexConnectedEdges @ 14369d120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexConnectedEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  ForAnyElementType *pFVar6;
  uint local_res8 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FEdgeID_const_,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  pFVar6 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      FMeshElementIndexer::Find<FEdgeID>
                ((FMeshElementIndexer *)&param_1[8].field_0x20,&local_28,uVar4,0);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar2 = *piVar1;
      *(int *)&pFVar6[1].Data = local_28.ArrayNum;
      if ((local_28.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_28.ArrayNum,iVar2,pFVar6,local_28.ArrayNum,piVar1);
        if (local_28.ArrayNum != 0) {
          memcpy(pFVar6->Data,local_28.DataPtr,(longlong)local_28.ArrayNum << 2);
        }
      }
      goto LAB_14369d2cc;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369d2cc:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetVertexConnectedPolygons @ 14369d300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexConnectedPolygons(UObject *param_1,FFrame *param_2,void *param_3)

{
  FTriangleID *pFVar1;
  FTriangleID FVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  ForElementType<unsigned_int> FVar8;
  FPolygonID *pFVar9;
  TMeshAttributeArrayBase<FPolygonID> *this;
  FTriangleID *pFVar10;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> *this_00;
  FVertexInstanceID *pFVar11;
  uint local_res8 [2];
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FVertexInstanceID_const_,int> local_48;
  TArrayView<FTriangleID_const_,int> local_38;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  uVar6 = local_res8[0];
  this_00 = &local_58;
  if ((TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar8 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)FVar8 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar8 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) {
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&this_00->AllocatorInstance,0,&this_00->ArrayMax);
      }
      FMeshElementIndexer::Find<FVertexInstanceID>
                ((FMeshElementIndexer *)&param_1[7].field_0x10,&local_48,uVar6,0);
      for (pFVar11 = local_48.DataPtr; pFVar11 != local_48.DataPtr + local_48.ArrayNum;
          pFVar11 = pFVar11 + 1) {
        FMeshElementIndexer::Find<FTriangleID>
                  ((FMeshElementIndexer *)&param_1[10].field_0x8,&local_38,(int)*pFVar11,0);
        pFVar1 = local_38.DataPtr + local_38.ArrayNum;
        for (pFVar10 = local_38.DataPtr; pFVar10 != pFVar1; pFVar10 = pFVar10 + 1) {
          lVar4 = *(longlong *)&param_1[5].field_0x10;
          FVar2 = *pFVar10;
          if ((*(int *)(lVar4 + 0x38) < 1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this = (TMeshAttributeArrayBase<FPolygonID> *)(lVar4 + 0x18);
          if (*(TMeshAttributeArrayBase<FPolygonID> **)(lVar4 + 0x30) !=
              (TMeshAttributeArrayBase<FPolygonID> *)0x0) {
            this = *(TMeshAttributeArrayBase<FPolygonID> **)(lVar4 + 0x30);
          }
          pFVar9 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase(this,(int)FVar2);
          TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
                    (this_00,pFVar9);
        }
      }
      goto LAB_14369d57c;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369d57c:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetVertexConnectedTriangles @ 14369d5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexConnectedTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FVertexID FVar5;
  FTriangleID *_Src;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  FVertexInstanceID *pFVar10;
  ForAnyElementType *pFVar11;
  longlong lVar12;
  FVertexID local_res8 [2];
  ForAnyElementType local_58;
  undefined8 local_50;
  TArrayView<FVertexInstanceID_const_,int> local_48;
  TArrayView<FTriangleID_const_,int> local_38;
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FVar5 = local_res8[0];
  pFVar11 = &local_58;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar11 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar9 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar5) && ((int)FVar5 < *(int *)((longlong)FVar9 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10);
    }
    if ((*(uint *)((longlong)FVar9 +
                  (longlong)((int)((int)FVar5 + ((int)FVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar5 & 0x1f) & 1) != 0) {
      uVar7 = FMeshDescription::GetNumVertexConnectedTriangles
                        ((FMeshDescription *)(param_1 + 1),FVar5);
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      iVar2 = *(int *)((longlong)&pFVar11[1].Data + 4);
      piVar1 = (int *)((longlong)&pFVar11[1].Data + 4);
      *(undefined4 *)&pFVar11[1].Data = 0;
      if (iVar2 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar7,pFVar11,0,piVar1);
      }
      FMeshElementIndexer::Find<FVertexInstanceID>
                ((FMeshElementIndexer *)&param_1[7].field_0x10,&local_48,(int)FVar5,0);
      if (local_48.DataPtr != local_48.DataPtr + local_48.ArrayNum) {
        pFVar10 = local_48.DataPtr;
        do {
          FMeshElementIndexer::Find<FTriangleID>
                    ((FMeshElementIndexer *)&param_1[10].field_0x8,&local_38,(int)*pFVar10,0);
          iVar2 = local_38.ArrayNum;
          _Src = local_38.DataPtr;
          lVar12 = (longlong)local_38.ArrayNum;
          if (((local_38.DataPtr == (FTriangleID *)0x0) && (local_38.ArrayNum != 0)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ptr != nullptr || Count == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x9c1,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,iVar2,pFVar11,(int *)(pFVar11 + 1),piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar11->Data + (longlong)iVar8 * 4,_Src,lVar12 << 2);
          }
          pFVar10 = pFVar10 + 1;
        } while (pFVar10 != local_48.DataPtr + local_48.ArrayNum);
      }
      goto LAB_14369d859;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369d859:
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// execGetVertexCount @ 14369d8a0

void __cdecl
UMeshDescriptionBase::execGetVertexCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMeshElementContainer *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  *(int *)param_3 = (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  return;
}

// execGetVertexInstanceConnectedPolygons @ 14369d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexInstanceConnectedPolygons
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FTriangleID FVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  ForElementType<unsigned_int> FVar8;
  TArrayView<int_const_,int> *pTVar9;
  FPolygonID *pFVar10;
  TMeshAttributeArrayBase<FPolygonID> *this;
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> *this_00;
  FTriangleID *pFVar11;
  uint local_res8 [2];
  TArray<FPolygonID,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FTriangleID_const_,int> local_48;
  TArrayView<int_const_,int> local_38;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  uVar6 = local_res8[0];
  this_00 = &local_58;
  if ((TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)0x0) {
    this_00 = (TArray<FPolygonID,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar8 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)FVar8 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar8 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) {
      pTVar9 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[10].field_0x8,&local_38,uVar6,0);
      uVar1 = pTVar9->ArrayNum;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      this_00->ArrayNum = 0;
      if (this_00->ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,&this_00->AllocatorInstance,0,&this_00->ArrayMax);
      }
      FMeshElementIndexer::Find<FTriangleID>
                ((FMeshElementIndexer *)&param_1[10].field_0x8,&local_48,uVar6,0);
      for (pFVar11 = local_48.DataPtr; pFVar11 != local_48.DataPtr + local_48.ArrayNum;
          pFVar11 = pFVar11 + 1) {
        lVar4 = *(longlong *)&param_1[5].field_0x10;
        FVar2 = *pFVar11;
        if ((*(int *)(lVar4 + 0x38) < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this = (TMeshAttributeArrayBase<FPolygonID> *)(lVar4 + 0x18);
        if (*(TMeshAttributeArrayBase<FPolygonID> **)(lVar4 + 0x30) !=
            (TMeshAttributeArrayBase<FPolygonID> *)0x0) {
          this = *(TMeshAttributeArrayBase<FPolygonID> **)(lVar4 + 0x30);
        }
        pFVar10 = TMeshAttributeArrayBase<FPolygonID>::GetElementBase(this,(int)FVar2);
        TArray<FPolygonID,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FPolygonID_const_&>
                  (this_00,pFVar10);
      }
      goto LAB_14369db27;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369db27:
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execGetVertexInstanceConnectedTriangles @ 14369db60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexInstanceConnectedTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  ForAnyElementType *pFVar6;
  uint local_res8 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FTriangleID_const_,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  pFVar6 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      FMeshElementIndexer::Find<FTriangleID>
                ((FMeshElementIndexer *)&param_1[10].field_0x8,&local_28,uVar4,0);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar2 = *piVar1;
      *(int *)&pFVar6[1].Data = local_28.ArrayNum;
      if ((local_28.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_28.ArrayNum,iVar2,pFVar6,local_28.ArrayNum,piVar1);
        if (local_28.ArrayNum != 0) {
          memcpy(pFVar6->Data,local_28.DataPtr,(longlong)local_28.ArrayNum << 2);
        }
      }
      goto LAB_14369dd0f;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369dd0f:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execGetVertexInstanceCount @ 14369dd40

void __cdecl
UMeshDescriptionBase::execGetVertexInstanceCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FMeshElementContainer *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  *(int *)param_3 = (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  return;
}

// execGetVertexInstanceForPolygonVertex @ 14369dd80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexInstanceForPolygonVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  FVertexID FVar3;
  FPolygonID FVar4;
  ForElementType<unsigned_int> FVar5;
  TMeshAttributeArrayBase<FVertexID> *this;
  FVertexID *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FVertexID local_res8 [2];
  FPolygonID local_res10 [2];
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> local_38;
  
  local_res10[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar4 = local_res10[0];
  FVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar4) && ((int)FVar4 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)((int)FVar4 + ((int)FVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar4 & 0x1f) & 1) != 0) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      FMeshDescription::GetPolygonVertexInstances<TSizedDefaultAllocator<32>_>
                ((FMeshDescription *)(param_1 + 1),FVar4,&local_38);
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 4;
      FVar7.Data = local_38.AllocatorInstance.Data;
      do {
        if (FVar7.Data == pFVar1) {
          iVar8 = -1;
LAB_14369def1:
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
          *(int *)param_3 = iVar8;
          return;
        }
        iVar8 = *(int *)FVar7.Data;
        this = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                         (*(TMeshAttributeArraySet<FVertexID> **)&param_1[4].field_0x10,0);
        pFVar6 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this,iVar8);
        if (*pFVar6 == FVar3) {
          iVar8 = *(int *)FVar7.Data;
          goto LAB_14369def1;
        }
        FVar7.Data = FVar7.Data + 4;
      } while( true );
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetVertexInstanceForTriangleVertex @ 14369df60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexInstanceForTriangleVertex
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FVertexInstanceID *pFVar1;
  FProperty *pFVar2;
  FVertexID FVar3;
  uint uVar4;
  FVertexInstanceID FVar5;
  ForElementType<unsigned_int> FVar6;
  TArrayView<FVertexInstanceID,int> *pTVar7;
  TMeshAttributeArrayBase<FVertexID> *this;
  FVertexID *pFVar8;
  FVertexInstanceID *pFVar9;
  FVertexID local_res8 [2];
  uint local_res10 [2];
  TArrayView<FVertexInstanceID,int> local_38;
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar4 = local_res10[0];
  FVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar6 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar6 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar6 = *(ForElementType<unsigned_int> *)((longlong)FVar6 + 0x10);
    }
    if ((*(uint *)((longlong)FVar6 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                         ((TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_> *)
                          (param_1 + 5),&local_38,uVar4);
      pFVar9 = pTVar7->DataPtr;
      pFVar1 = pFVar9 + pTVar7->ArrayNum;
      do {
        if (pFVar9 == pFVar1) {
          FVar5 = (FVertexInstanceID)0xffffffff;
LAB_14369e0bc:
          *(FVertexInstanceID *)param_3 = FVar5;
          return;
        }
        FVar5 = *pFVar9;
        this = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                         (*(TMeshAttributeArraySet<FVertexID> **)&param_1[4].field_0x10,0);
        pFVar8 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this,(int)FVar5);
        if (*pFVar8 == FVar3) {
          FVar5 = *pFVar9;
          goto LAB_14369e0bc;
        }
        pFVar9 = pFVar9 + 1;
      } while( true );
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetVertexInstancePairEdge @ 14369e110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexInstancePairEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FVertexInstanceID FVar3;
  ForElementType<unsigned_int> FVar4;
  FStaticBasicLogRecord *pFVar5;
  uint local_res8 [2];
  FVertexInstanceID local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = (FVertexInstanceID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar3 = local_res10[0];
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if (((int)FVar3 < 0) || (*(int *)((longlong)FVar4 + 0x18) <= (int)FVar3)) {
LAB_14369e28c:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369e2ab;
    pFVar5 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) == 0) goto LAB_14369e28c;
    FVar4 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar4 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
      }
      if ((*(uint *)((longlong)FVar4 +
                    (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar2 & 0x1f) & 1) != 0) {
        FMeshDescription::GetVertexInstancePairEdge
                  ((FMeshDescription *)(param_1 + 1),SUB84(local_res18,0),FVar3);
        *(undefined4 *)param_3 = local_res18[0];
        return;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369e2ab;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogMeshDescription);
LAB_14369e2ab:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetVertexInstanceVertex @ 14369e2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexInstanceVertex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  TMeshAttributeArrayBase<FVertexID> *this;
  FVertexID *pFVar4;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      this = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                       (*(TMeshAttributeArraySet<FVertexID> **)&param_1[4].field_0x10,0);
      pFVar4 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this,uVar2);
      *(FVertexID *)param_3 = *pFVar4;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetVertexPairEdge @ 14369e3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexPairEdge(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  FVertexID FVar3;
  ForElementType<unsigned_int> FVar4;
  FStaticBasicLogRecord *pFVar5;
  uint local_res8 [2];
  FVertexID local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar3 = local_res10[0];
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if (((int)FVar3 < 0) || (*(int *)((longlong)FVar4 + 0x18) <= (int)FVar3)) {
LAB_14369e566:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369e585;
    pFVar5 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) == 0) goto LAB_14369e566;
    FVar4 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar4 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
      }
      if ((*(uint *)((longlong)FVar4 +
                    (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (uVar2 & 0x1f) & 1) != 0) {
        FMeshDescription::GetVertexPairEdge
                  ((FMeshDescription *)(param_1 + 1),SUB84(local_res18,0),FVar3);
        *(undefined4 *)param_3 = local_res18[0];
        return;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369e585;
    pFVar5 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogMeshDescription);
LAB_14369e585:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetVertexPosition @ 14369e5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  FVertexID FVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  FMeshElementContainer *pFVar8;
  TVector<float> *pTVar9;
  undefined8 uVar10;
  FVertexID local_res8 [2];
  TVector<float> local_28 [2];
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar5 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar5) && ((int)FVar5 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 +
                  (longlong)((int)((int)FVar5 + ((int)FVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar5 & 0x1f) & 1) != 0) {
      pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
      bVar6 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,MeshAttribute::Vertex::Position);
      if (bVar6) {
        pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
        pTVar9 = TAttributesSet<FVertexID>::GetAttribute<UE::Math::TVector<float>_>
                           ((TAttributesSet<FVertexID> *)&pFVar8->Attributes,local_28,FVar5,
                            MeshAttribute::Vertex::Position,0);
        uVar10 = (double)(pTVar9->field0_0x0)._s_0.Z;
        uVar3 = (double)(pTVar9->field0_0x0)._s_0.X;
        uVar4 = (double)(pTVar9->field0_0x0)._s_0.Y;
      }
      else {
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if (2 < (byte)LogMeshDescription._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
          uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      goto LAB_14369e715;
    }
  }
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
LAB_14369e715:
  auVar2._8_4_ = (int)uVar4;
  auVar2._0_8_ = uVar3;
  auVar2._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar10;
  return;
}

// execGetVertexVertexInstances @ 14369e740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execGetVertexVertexInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  FProperty *pFVar3;
  uint uVar4;
  ForElementType<unsigned_int> FVar5;
  ForAnyElementType *pFVar6;
  uint local_res8 [2];
  ForAnyElementType local_38;
  undefined8 local_30;
  TArrayView<FVertexInstanceID_const_,int> local_28;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  uVar4 = local_res8[0];
  pFVar6 = &local_38;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) {
      FMeshElementIndexer::Find<FVertexInstanceID>
                ((FMeshElementIndexer *)&param_1[7].field_0x10,&local_28,uVar4,0);
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar2 = *piVar1;
      *(int *)&pFVar6[1].Data = local_28.ArrayNum;
      if ((local_28.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_28.ArrayNum,iVar2,pFVar6,local_28.ArrayNum,piVar1);
        if (local_28.ArrayNum != 0) {
          memcpy(pFVar6->Data,local_28.DataPtr,(longlong)local_28.ArrayNum << 2);
        }
      }
      goto LAB_14369e8ec;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14369e8ec:
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// execIsEdgeInternal @ 14369e920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execIsEdgeInternal(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FEdgeID FVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  FEdgeID local_res8 [2];
  
  local_res8[0] = (FEdgeID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      bVar3 = FMeshDescription::IsEdgeInternal((FMeshDescription *)(param_1 + 1),FVar2);
      *(bool *)param_3 = bVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsEdgeInternalToPolygon @ 14369ea30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execIsEdgeInternalToPolygon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID FVar2;
  FEdgeID FVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  FStaticBasicLogRecord *pFVar6;
  FPolygonID local_res8 [2];
  FEdgeID local_res10 [2];
  
  local_res10[0] = (FEdgeID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar3 = local_res10[0];
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if (((int)FVar3 < 0) || (*(int *)((longlong)FVar5 + 0x18) <= (int)FVar3)) {
LAB_14369eba3:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369ebc2;
    pFVar6 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) == 0) goto LAB_14369eba3;
    FVar5 = (ForElementType<unsigned_int>)
            FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
    if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar5 + 0x18))) {
      if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
      }
      if ((*(uint *)((longlong)FVar5 +
                    (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           ((uint)FVar2 & 0x1f) & 1) != 0) {
        bVar4 = FMeshDescription::IsEdgeInternalToPolygon
                          ((FMeshDescription *)(param_1 + 1),FVar3,FVar2);
        *(bool *)param_3 = bVar4;
        return;
      }
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369ebc2;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogMeshDescription);
LAB_14369ebc2:
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsEdgeValid @ 14369ebe0

void __cdecl UMeshDescriptionBase::execIsEdgeValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsEmpty @ 14369ecd0

void __cdecl UMeshDescriptionBase::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FMeshDescription::IsEmpty((FMeshDescription *)(param_1 + 1));
  *(bool *)param_3 = bVar1;
  return;
}

// execIsPolygonGroupValid @ 14369ed10

void __cdecl
UMeshDescriptionBase::execIsPolygonGroupValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsPolygonValid @ 14369ee00

void __cdecl
UMeshDescriptionBase::execIsPolygonValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsTrianglePartOfNgon @ 14369eef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execIsTrianglePartOfNgon(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  FPolygonID *pFVar4;
  TArrayView<int_const_,int> *pTVar5;
  uint local_res8 [2];
  TArrayView<int_const_,int> local_18;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      pFVar4 = TMeshAttributesRef<int,FPolygonID>::operator[]
                         ((TMeshAttributesRef<int,FPolygonID> *)&param_1[5].field_0x10,uVar2);
      pTVar5 = FMeshElementIndexer::Find
                         ((FMeshElementIndexer *)&param_1[0xe].field_0x10,&local_18,(int)*pFVar4,0);
      *(bool *)param_3 = 1 < pTVar5->ArrayNum;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsTriangleValid @ 14369f020

void __cdecl
UMeshDescriptionBase::execIsTriangleValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsVertexInstanceValid @ 14369f110

void __cdecl
UMeshDescriptionBase::execIsVertexInstanceValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsVertexOrphaned @ 14369f200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execIsVertexOrphaned(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVertexID FVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  FVertexID local_res8 [2];
  
  local_res8[0] = (FVertexID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      bVar3 = FMeshDescription::IsVertexOrphaned((FMeshDescription *)(param_1 + 1),FVar2);
      *(bool *)param_3 = bVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsVertexValid @ 14369f310

void __cdecl UMeshDescriptionBase::execIsVertexValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  uint local_res8 [2];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execReserveNewEdges @ 14369f3f0

void __cdecl
UMeshDescriptionBase::execReserveNewEdges(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMeshElementContainer *this;
  FMeshElementContainer *pFVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  pFVar3 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this->BitArray,((pFVar3->BitArray).NumBits - pFVar3->NumHoles) + iVar2);
  return;
}

// execReserveNewPolygonGroups @ 14369f4a0

void __cdecl
UMeshDescriptionBase::execReserveNewPolygonGroups(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMeshElementContainer *this;
  FMeshElementContainer *pFVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  pFVar3 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this->BitArray,((pFVar3->BitArray).NumBits - pFVar3->NumHoles) + iVar2);
  return;
}

// execReserveNewPolygons @ 14369f550

void __cdecl
UMeshDescriptionBase::execReserveNewPolygons(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMeshElementContainer *this;
  FMeshElementContainer *pFVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  pFVar3 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this->BitArray,((pFVar3->BitArray).NumBits - pFVar3->NumHoles) + iVar2);
  return;
}

// execReserveNewTriangles @ 14369f600

void __cdecl
UMeshDescriptionBase::execReserveNewTriangles(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMeshElementContainer *this;
  FMeshElementContainer *pFVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  pFVar3 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x20,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this->BitArray,((pFVar3->BitArray).NumBits - pFVar3->NumHoles) + iVar2);
  return;
}

// execReserveNewVertexInstances @ 14369f6b0

void __cdecl
UMeshDescriptionBase::execReserveNewVertexInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMeshElementContainer *this;
  FMeshElementContainer *pFVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  pFVar3 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x18,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this->BitArray,((pFVar3->BitArray).NumBits - pFVar3->NumHoles) + iVar2);
  return;
}

// execReserveNewVertices @ 14369f760

void __cdecl
UMeshDescriptionBase::execReserveNewVertices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMeshElementContainer *this;
  FMeshElementContainer *pFVar3;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  iVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  pFVar3 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this->BitArray,((pFVar3->BitArray).NumBits - pFVar3->NumHoles) + iVar2);
  return;
}

// execReversePolygonFacing @ 14369f810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execReversePolygonFacing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID FVar2;
  ForElementType<unsigned_int> FVar3;
  FPolygonID local_res8 [2];
  
  local_res8[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar3 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar3 = *(ForElementType<unsigned_int> *)((longlong)FVar3 + 0x10);
    }
    if ((*(uint *)((longlong)FVar3 +
                  (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar2 & 0x1f) & 1) != 0) {
      FMeshDescription::ReversePolygonFacing((FMeshDescription *)(param_1 + 1),FVar2);
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// execSetPolygonPolygonGroup @ 14369f910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execSetPolygonPolygonGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonGroupID FVar2;
  FPolygonID FVar3;
  ForElementType<unsigned_int> FVar4;
  FStaticBasicLogRecord *pFVar5;
  FPolygonGroupID local_res8 [2];
  FPolygonID local_res10 [2];
  
  local_res10[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = (FPolygonGroupID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar3 = local_res10[0];
  FVar2 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if ((-1 < (int)FVar3) && ((int)FVar3 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 +
                  (longlong)((int)((int)FVar3 + ((int)FVar3 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar3 & 0x1f) & 1) != 0) {
      FVar4 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
      if ((-1 < (int)FVar2) && ((int)FVar2 < *(int *)((longlong)FVar4 + 0x18))) {
        if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
        }
        if ((*(uint *)((longlong)FVar4 +
                      (longlong)((int)((int)FVar2 + ((int)FVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
             ((uint)FVar2 & 0x1f) & 1) != 0) {
          FMeshDescription::SetPolygonPolygonGroup((FMeshDescription *)(param_1 + 1),FVar3,FVar2);
          return;
        }
      }
      if ((byte)LogMeshDescription._0_1_ < 3) {
        return;
      }
      pFVar5 = &::LOG_Static;
      goto LAB_14369fa96;
    }
  }
  if ((byte)LogMeshDescription._0_1_ < 3) {
    return;
  }
  pFVar5 = &::LOG_Static;
LAB_14369fa96:
  UE::Logging::Private::BasicLog<3>(pFVar5,(FLogCategoryBase *)&LogMeshDescription);
  return;
}

// execSetPolygonVertexInstances @ 14369fac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execSetPolygonVertexInstances(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint *puVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FPolygonID FVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  FStaticBasicLogRecord *pFVar9;
  uint *puVar10;
  uint uVar11;
  void **ppvVar12;
  undefined1 local_res8 [8];
  FPolygonID local_res10 [2];
  void *local_58;
  undefined8 local_50;
  FVertexInstanceID *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FVertexInstanceID_const_,int> local_38;
  
  local_res10[0] = (FPolygonID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FVar5 = local_res10[0];
  ppvVar12 = &local_58;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar12 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar8 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 4),0);
  if (((int)FVar5 < 0) || (*(int *)((longlong)FVar8 + 0x18) <= (int)FVar5)) {
LAB_14369fce9:
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369fd08;
    pFVar9 = &::LOG_Static;
  }
  else {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar8 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)((int)FVar5 + ((int)FVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         ((uint)FVar5 & 0x1f) & 1) == 0) goto LAB_14369fce9;
    puVar10 = *ppvVar12;
    iVar2 = *(int *)(ppvVar12 + 1);
    puVar1 = puVar10 + iVar2;
    while( true ) {
      if (*(int *)(ppvVar12 + 1) != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FVertexInstanceID_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar10 == puVar1) {
        local_48 = *ppvVar12;
        iVar2 = *(int *)(ppvVar12 + 1);
        if (iVar2 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iStack_40 = iVar2;
        FMeshDescription::RemovePolygonTriangles((FMeshDescription *)(param_1 + 1),FVar5);
        local_38._12_4_ = uStack_3c;
        local_38.ArrayNum = iStack_40;
        local_38.DataPtr = local_48;
        FMeshDescription::CreatePolygonTriangles((FMeshDescription *)(param_1 + 1),FVar5,&local_38);
        goto LAB_14369fd08;
      }
      uVar7 = *puVar10;
      FVar8 = (ForElementType<unsigned_int>)
              FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
      if (((int)uVar7 < 0) || (*(int *)((longlong)FVar8 + 0x18) <= (int)uVar7)) break;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar8 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
      }
      uVar11 = uVar7 & 0x1f;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar7 >> 5) * 4) >> uVar11 & 1) == 0) break;
      puVar10 = puVar10 + 1;
    }
    if ((byte)LogMeshDescription._0_1_ < 3) goto LAB_14369fd08;
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar9,(FLogCategoryBase *)&LogMeshDescription);
LAB_14369fd08:
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execSetVertexPosition @ 14369fd50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMeshDescriptionBase::execSetVertexPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FProperty *pFVar5;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  ForElementType<unsigned_int> FVar9;
  FMeshElementContainer *pFVar10;
  TTuple<FName,FAttributesSetEntry> *pTVar11;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar12;
  double *pdVar13;
  uint local_res8 [2];
  double local_38 [4];
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  uVar7 = local_res8[0];
  pdVar13 = local_38;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar13 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar9 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)((longlong)FVar9 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10);
    }
    if ((*(uint *)((longlong)FVar9 +
                  (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) {
      pFVar10 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
      bVar8 = FAttributesSetBase::HasAttribute(&pFVar10->Attributes,MeshAttribute::Vertex::Position)
      ;
      if (!bVar8) {
        if ((byte)LogMeshDescription._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
        return;
      }
      pFVar10 = FMeshElementChannels::Get(*(FMeshElementChannels **)(param_1 + 3),0);
      dVar1 = *pdVar13;
      dVar2 = pdVar13[1];
      dVar3 = pdVar13[2];
      pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)&pFVar10->Attributes,MeshAttribute::Vertex::Position);
      if ((pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this = *(TMeshAttributeArraySet<UE::Math::TVector<float>_> **)&pTVar11->field_0x8;
      iVar4 = *(int *)((longlong)&this->_padding_ + 4);
      if (((int)this->_padding_ != 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<std::remove_cv_t<RealAttributeType>>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x830,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((iVar4 != 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x831,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this,0);
      pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,uVar7);
      *(ulonglong *)&pTVar12->field0_0x0 = CONCAT44((float)dVar2,(float)dVar1);
      (pTVar12->field0_0x0)._s_0.Z = (float)dVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

