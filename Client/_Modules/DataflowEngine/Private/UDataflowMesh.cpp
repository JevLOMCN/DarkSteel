// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 11

// StaticClass @ 1462c16b0

UClass * __cdecl UDataflowMesh::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowMesh",
               &Z_Registration_Info_UClass_UDataflowMesh.InnerSingleton,
               StaticRegisterNativesUDataflowMesh,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowMesh>,InternalVTableHelperCtorCaller<UDataflowMesh>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowMesh.InnerSingleton;
}

// UDataflowMesh @ 1462cf420

UDataflowMesh * __thiscall UDataflowMesh::UDataflowMesh(UDataflowMesh *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowMesh__6B_;
  (this->DynamicMesh).Ptr = (FDynamicMesh3 *)0x0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  return this;
}

// UDataflowMesh @ 1462cf460

UDataflowMesh * __thiscall
UDataflowMesh::UDataflowMesh(UDataflowMesh *this,FObjectInitializer *param_1)

{
  FDynamicMesh3 *this_00;
  FDynamicMesh3 *pFVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDataflowMesh__6B_;
  this_00 = ::operator_new(0x230);
  pFVar1 = (FDynamicMesh3 *)0x0;
  if (this_00 != (FDynamicMesh3 *)0x0) {
    pFVar1 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(this_00);
  }
  (this->DynamicMesh).Ptr = pFVar1;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  return this;
}

// ~UDataflowMesh @ 1462d0380

void __thiscall UDataflowMesh::~UDataflowMesh(UDataflowMesh *this)

{
  FScriptContainerElement *pFVar1;
  FDynamicMesh3 *pFVar2;
  
  this->_padding_ = (longlong)&___7UDataflowMesh__6B_;
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->DynamicMesh).Ptr;
  if (pFVar2 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetDynamicMesh @ 1462dcd80

FDynamicMesh3 * __thiscall UDataflowMesh::GetDynamicMesh(UDataflowMesh *this)

{
  return (this->DynamicMesh).Ptr;
}

// GetDynamicMeshRef @ 1462dcee0

FDynamicMesh3 * __thiscall UDataflowMesh::GetDynamicMeshRef(UDataflowMesh *this)

{
  return (this->DynamicMesh).Ptr;
}

// GetMaterials @ 1462dd590

TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> * __thiscall
UDataflowMesh::GetMaterials(UDataflowMesh *this)

{
  return &this->Materials;
}

// GetPrivateStaticClass @ 1462de020

UClass * __cdecl UDataflowMesh::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowMesh.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowMesh",
               &Z_Registration_Info_UClass_UDataflowMesh.InnerSingleton,
               StaticRegisterNativesUDataflowMesh,0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDataflowMesh>,InternalVTableHelperCtorCaller<UDataflowMesh>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowMesh.InnerSingleton;
}

// Serialize @ 1462e4640

void __thiscall UDataflowMesh::Serialize(UDataflowMesh *this,FArchive *param_1)

{
  uint *puVar1;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar2;
  byte bVar3;
  uint uVar4;
  ulonglong *puVar5;
  FDynamicMesh3 *pFVar6;
  FDynamicMesh3 *pFVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint local_res8 [2];
  longlong local_28 [2];
  
  UObject::Serialize((UObject *)this,param_1);
  bVar3 = param_1->field_0x28;
  if ((bVar3 & 4) == 0) {
    if ((bVar3 & 1) == 0) goto LAB_1462e47cd;
    puVar5 = *(ulonglong **)&param_1->field_0x8;
    pFVar7 = (FDynamicMesh3 *)0x0;
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar4 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_1462e474e;
    }
    else {
      uVar4 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
LAB_1462e474e:
      if (uVar4 != 0) {
        pFVar6 = ::operator_new(0x230);
        if (pFVar6 != (FDynamicMesh3 *)0x0) {
          pFVar7 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar6);
        }
        pTVar2 = &this->DynamicMesh;
        if (pTVar2 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                       *)local_28) {
          if (pFVar7 != (FDynamicMesh3 *)0x0) {
            puVar8 = (undefined8 *)pFVar7->_padding_;
            goto LAB_1462e479d;
          }
        }
        else {
          pFVar6 = pTVar2->Ptr;
          pTVar2->Ptr = pFVar7;
          if (pFVar6 != (FDynamicMesh3 *)0x0) {
            puVar8 = (undefined8 *)pFVar6->_padding_;
            pFVar7 = pFVar6;
LAB_1462e479d:
            (*(code *)*puVar8)(pFVar7,1);
          }
        }
        UE::Geometry::FDynamicMesh3::Serialize(pTVar2->Ptr,param_1);
        goto LAB_1462e47cd;
      }
    }
    pFVar7 = (this->DynamicMesh).Ptr;
    if (pFVar7 != (FDynamicMesh3 *)0x0) {
      (this->DynamicMesh).Ptr = (FDynamicMesh3 *)0x0;
      (**(code **)pFVar7->_padding_)(pFVar7,1);
    }
    goto LAB_1462e47cd;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  pFVar7 = (this->DynamicMesh).Ptr;
  bVar9 = pFVar7 != (FDynamicMesh3 *)0x0;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    local_res8[0] = 0;
    if ((bVar3 & 1) == 0) {
      local_res8[0] = (uint)(pFVar7 != (FDynamicMesh3 *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_1462e46d1;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
LAB_1462e46d1:
    bVar9 = uVar4 != 0;
  }
  if (bVar9) {
    UE::Geometry::FDynamicMesh3::Serialize((this->DynamicMesh).Ptr,param_1);
  }
LAB_1462e47cd:
  TArrayPrivateFriend::Serialize<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>
            (param_1,&this->Materials);
  return;
}

// Serialize @ 1462e47f0

void __thiscall UDataflowMesh::Serialize(UDataflowMesh *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUDataflowMesh @ 1462e6290

void __cdecl UDataflowMesh::StaticRegisterNativesUDataflowMesh(void)

{
  return;
}

