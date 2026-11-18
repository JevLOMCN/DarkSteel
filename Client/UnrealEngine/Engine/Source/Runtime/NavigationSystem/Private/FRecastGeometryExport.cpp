// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 18

// FRecastGeometryExport @ 146e35f00

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FRecastGeometryExport * __thiscall
FRecastGeometryExport::FRecastGeometryExport
          (FRecastGeometryExport *this,FNavigationRelevantData *param_1)

{
  FNavigationRelevantData *pFVar1;
  
  this->Data = param_1;
  this->_padding_ = (longlong)&___7FRecastGeometryExport__6B_;
  *(undefined8 *)&this->VertexBuffer = 0;
  *(undefined8 *)&(this->VertexBuffer).field_0x8 = 0;
  *(undefined8 *)&(this->VertexBuffer).field_0x10 = 0;
  *(undefined8 *)&this->IndexBuffer = 0;
  *(undefined8 *)&(this->IndexBuffer).field_0x8 = 0;
  *(undefined8 *)&(this->IndexBuffer).field_0x10 = 0;
  (this->SlopeOverride).WalkableSlopeBehavior.Value = '\0';
  (this->SlopeOverride).WalkableSlopeAngle = 0.0;
  (this->SlopeOverride).CachedSlopeAngle = 0.0;
  (this->SlopeOverride).CachedSlopeCos = 1.0;
  pFVar1 = this->Data;
  (pFVar1->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (pFVar1->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (pFVar1->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (pFVar1->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (pFVar1->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (pFVar1->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (pFVar1->Bounds).IsValid = '\0';
  (pFVar1->Bounds).Pad[0] = '\0';
  (pFVar1->Bounds).Pad[1] = '\0';
  (pFVar1->Bounds).Pad[2] = '\0';
  (pFVar1->Bounds).Pad[3] = '\0';
  (pFVar1->Bounds).Pad[4] = '\0';
  (pFVar1->Bounds).Pad[5] = '\0';
  (pFVar1->Bounds).Pad[6] = '\0';
  return this;
}

// AddNavModifiers @ 146e3f500

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::AddNavModifiers(FRecastGeometryExport *this,FCompositeNavModifier *param_1)

{
  FCompositeNavModifier::Add(&this->Data->Modifiers,param_1);
  return;
}

// ConvertVertexBufferToRecast @ 146e460f0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRecastGeometryExport::ConvertVertexBufferToRecast(FRecastGeometryExport *this)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  FString local_18;
  
  iVar5 = *(int *)&(this->VertexBuffer).field_0x10;
  iVar4 = iVar5 / 3 + (iVar5 >> 0x1f) +
          (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if (iVar5 == iVar4 * 3) {
    if (iVar5 != 0) {
      puVar3 = *(undefined8 **)&this->VertexBuffer;
      iVar5 = 0;
      uVar7 = (uint)__xmm_80000000000000008000000000000000;
      uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      if (3 < iVar4) {
        uVar2 = (iVar4 - 4U >> 2) + 1;
        uVar6 = (ulonglong)uVar2;
        iVar5 = uVar2 * 4;
        do {
          uVar1 = puVar3[2];
          *puVar3 = CONCAT44((uint)((ulonglong)*puVar3 >> 0x20) ^ uVar8,(uint)*puVar3 ^ uVar7);
          puVar3[2] = CONCAT44((uint)((ulonglong)puVar3[1] >> 0x20) ^ uVar8,(uint)puVar3[1] ^ uVar7)
          ;
          puVar3[3] = CONCAT44((uint)((ulonglong)puVar3[3] >> 0x20) ^ uVar8,(uint)puVar3[3] ^ uVar7)
          ;
          puVar3[1] = uVar1;
          uVar1 = puVar3[5];
          puVar3[5] = CONCAT44((uint)((ulonglong)puVar3[4] >> 0x20) ^ uVar8,(uint)puVar3[4] ^ uVar7)
          ;
          puVar3[4] = uVar1;
          uVar1 = puVar3[8];
          puVar3[6] = CONCAT44((uint)((ulonglong)puVar3[6] >> 0x20) ^ uVar8,(uint)puVar3[6] ^ uVar7)
          ;
          puVar3[8] = CONCAT44((uint)((ulonglong)puVar3[7] >> 0x20) ^ uVar8,(uint)puVar3[7] ^ uVar7)
          ;
          puVar3[7] = uVar1;
          uVar1 = puVar3[0xb];
          puVar3[9] = CONCAT44((uint)((ulonglong)puVar3[9] >> 0x20) ^ uVar8,(uint)puVar3[9] ^ uVar7)
          ;
          puVar3[0xb] = CONCAT44((uint)((ulonglong)puVar3[10] >> 0x20) ^ uVar8,
                                 (uint)puVar3[10] ^ uVar7);
          puVar3[10] = uVar1;
          puVar3 = puVar3 + 0xc;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (iVar5 < iVar4) {
        puVar3 = puVar3 + 2;
        uVar6 = (ulonglong)(uint)(iVar4 - iVar5);
        do {
          uVar1 = *puVar3;
          puVar3[-2] = CONCAT44((uint)((ulonglong)puVar3[-2] >> 0x20) ^ uVar8,
                                (uint)puVar3[-2] ^ uVar7);
          *puVar3 = CONCAT44((uint)((ulonglong)puVar3[-1] >> 0x20) ^ uVar8,(uint)puVar3[-1] ^ uVar7)
          ;
          puVar3[-1] = uVar1;
          puVar3 = puVar3 + 3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
  }
  else if (2 < (byte)LogNavigation._0_1_) {
    GetDataOwnerName(this,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// ExportAggregatedGeometry @ 146e48490

void __cdecl
FRecastGeometryExport::ExportAggregatedGeometry
          (FKAggregateGeom *param_1,TNavStatArray<UE::Math::TVector<double>_> *param_2,
          TNavStatArray<int> *param_3,TNavStatArray<int> *param_4,TBox<double> *param_5,
          TTransform<double> *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  TNavStatArray<double> local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  iVar11 = *(int *)&param_2->field_0x10;
  local_78._16_8_ = 0;
  local_78._0_8_ = 0;
  local_78._8_8_ = 0;
  RecastGeometryExport::ExportRigidBodyBoxElements
            (param_1,&local_78,param_3,param_4,param_5,param_6,iVar11);
  RecastGeometryExport::ExportRigidBodySphylElements
            (param_1,&local_78,param_3,param_4,param_5,param_6,iVar11);
  RecastGeometryExport::ExportRigidBodySphereElements
            (param_1,&local_78,param_3,param_4,param_5,param_6,iVar11);
  uVar9 = (int)(((longlong)(int)local_78._16_4_ / 3 + ((longlong)(int)local_78._16_4_ >> 0x3f) &
                0xffffffffU) >> 0x1f) + (int)local_78._16_4_ / 3 + ((int)local_78._16_4_ >> 0x1f) +
          *(int *)&param_2->field_0x10;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  puVar2 = &param_2->field_0x14;
  lVar12 = 8;
  if (*(int *)puVar2 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar9,(ForAnyElementType *)param_2,*(int *)&param_2->field_0x10,(int *)puVar2)
    ;
  }
  if (0 < (int)local_78._16_4_) {
    iVar11 = local_78._16_4_;
    uVar9 = 1;
    do {
      uVar10 = 0;
      if ((int)(uVar9 + 1) < iVar11) {
        uVar10 = ~(uVar9 + 1) >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = local_78._16_4_;
      }
      uVar4 = *(undefined8 *)(lVar12 + 8 + local_78._0_8_);
      uVar10 = 0;
      if ((int)uVar9 < iVar11) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = local_78._16_4_;
      }
      uVar5 = *(undefined8 *)(lVar12 + local_78._0_8_);
      uVar10 = 0;
      if ((int)(uVar9 - 1) < iVar11) {
        uVar10 = ~(uVar9 - 1) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_60 = *(undefined8 *)(lVar12 + -8 + local_78._0_8_);
      uStack_58 = uVar5;
      local_50 = uVar4;
      if (((*(undefined8 **)param_2 <= &local_60) &&
          (&local_60 < *(undefined8 **)param_2 + (longlong)*(int *)puVar2 * 3)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = *(int *)&param_2->field_0x10;
      if (iVar11 == *(int *)puVar2) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,(int *)puVar2);
      }
      lVar12 = lVar12 + 0x18;
      *(int *)&param_2->field_0x10 = iVar11 + 1;
      lVar6 = *(longlong *)param_2;
      puVar3 = (undefined8 *)(lVar6 + (longlong)iVar11 * 0x18);
      *puVar3 = local_60;
      puVar3[1] = uStack_58;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar11 * 0x18) = local_50;
      iVar1 = uVar9 + 2;
      iVar11 = local_78._16_4_;
      uVar9 = uVar9 + 3;
    } while (iVar1 < (int)local_78._16_4_);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&local_78);
  return;
}

// ExportChaosConvexMesh @ 146e487d0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::ExportChaosConvexMesh
          (FRecastGeometryExport *this,FKConvexElem *param_1,TTransform<double> *param_2)

{
  RecastGeometryExport::ExportChaosConvexMesh
            (param_1,param_2,&this->VertexBuffer,&this->IndexBuffer,&this->Data->Bounds);
  return;
}

// ExportChaosHeightField @ 146e492b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::ExportChaosHeightField
          (FRecastGeometryExport *this,FHeightField *param_1,TTransform<double> *param_2)

{
  RecastGeometryExport::ExportChaosHeightField
            (param_1,param_2,&this->VertexBuffer,&this->IndexBuffer,&this->Data->Bounds);
  return;
}

// ExportChaosHeightFieldSlice @ 146e49ef0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::ExportChaosHeightFieldSlice
          (FRecastGeometryExport *this,FNavHeightfieldSamples *param_1,int param_2,int param_3,
          TTransform<double> *param_4,TBox<double> *param_5)

{
  RecastGeometryExport::ExportChaosHeightFieldSlice
            (param_1,param_2,param_3,param_4,&this->VertexBuffer,&this->IndexBuffer,param_5,
             &this->Data->Bounds);
  return;
}

// ExportChaosTriMesh @ 146e4afa0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::ExportChaosTriMesh
          (FRecastGeometryExport *this,FTriangleMeshImplicitObject *param_1,
          TTransform<double> *param_2)

{
  int iVar1;
  FTrimeshIndexBuffer *pFVar2;
  int local_res8 [2];
  FTriangleMeshImplicitObject *local_res10 [3];
  FTriangleMeshImplicitObject **local_38;
  TNavStatArray<double> *local_30;
  TNavStatArray<int> *local_28;
  TTransform<double> *local_20;
  TBox<double> *local_18;
  int *local_10;
  
  local_30 = &this->VertexBuffer;
  if (param_1 != (FTriangleMeshImplicitObject *)0x0) {
    iVar1 = *(int *)&(this->VertexBuffer).field_0x10;
    local_res8[0] =
         iVar1 / 3 + (iVar1 >> 0x1f) +
         (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f);
    local_38 = local_res10;
    local_28 = &this->IndexBuffer;
    local_18 = &this->Data->Bounds;
    local_10 = local_res8;
    local_res10[0] = param_1;
    local_20 = param_2;
    pFVar2 = Chaos::FTriangleMeshImplicitObject::Elements(param_1);
    if (pFVar2->bRequiresLargeIndices != false) {
      `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
      operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                (&local_38,&pFVar2->LargeIdxBuffer);
      return;
    }
    `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
    operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
              (&local_38,&pFVar2->SmallIdxBuffer);
  }
  return;
}

// ExportCustomMesh @ 146e4b0b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::ExportCustomMesh
          (FRecastGeometryExport *this,TVector<double> *param_1,int param_2,int *param_3,int param_4
          ,TTransform<double> *param_5)

{
  FString local_18;
  
  if (param_4 ==
      (param_4 / 3 + (param_4 >> 0x1f) +
      (int)(((longlong)param_4 / 3 + ((longlong)param_4 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3) {
    RecastGeometryExport::ExportCustomMesh
              (param_1,param_2,param_3,param_4,param_5,&this->VertexBuffer,&this->IndexBuffer,
               &this->Data->Bounds);
  }
  else if (2 < (byte)LogNavigation._0_1_) {
    GetDataOwnerName(this,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// ExportElementGeometry @ 146e4b8e0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRecastGeometryExport::ExportElementGeometry
          (FNavigationElement *param_1,FNavigationRelevantData *param_2)

{
  undefined8 uVar1;
  uchar auVar2 [8];
  uchar auVar3 [8];
  uint uVar4;
  uint uVar5;
  UObject *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  FName FVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  FString local_d8;
  FStatMessage local_c8;
  undefined1 local_b8 [16];
  undefined8 *local_a8;
  uchar auStack_a0 [8];
  undefined8 local_98;
  void *local_90;
  uchar local_88 [8];
  undefined8 local_80;
  TEnumAsByte<EWalkableSlopeBehavior> local_78;
  undefined8 local_74;
  float local_6c;
  undefined1 local_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  
  iVar16 = 0;
  local_a8 = (undefined8 *)0x0;
  auStack_a0[0] = '\0';
  auStack_a0[1] = '\0';
  auStack_a0[2] = '\0';
  auStack_a0[3] = '\0';
  auStack_a0[4] = '\0';
  auStack_a0[5] = '\0';
  auStack_a0[6] = '\0';
  auStack_a0[7] = '\0';
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_80 = 0;
  local_78.Value = '\0';
  local_74._0_4_ = 0.0;
  local_74._4_4_ = 0.0;
  local_6c = 1.0;
  local_b8._0_8_ = &___7FRecastGeometryExport__6B_;
  (param_2->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (param_2->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  uStack_37 = 0;
  (param_2->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (param_2->Bounds).Max.field0_0x0._s_0.X = 0.0;
  uStack_33 = 0;
  (param_2->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (param_2->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  uStack_31 = 0;
  local_38 = 0;
  (param_2->Bounds).IsValid = '\0';
  (param_2->Bounds).Pad[0] = '\0';
  (param_2->Bounds).Pad[1] = '\0';
  (param_2->Bounds).Pad[2] = '\0';
  (param_2->Bounds).Pad[3] = '\0';
  (param_2->Bounds).Pad[4] = '\0';
  (param_2->Bounds).Pad[5] = '\0';
  (param_2->Bounds).Pad[6] = '\0';
  local_b8._8_8_ = param_2;
  RecastGeometryExport::ExportObject(param_1,(FRecastGeometryExport *)local_b8);
  local_d8.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)
        &(((TSharedRef<FNavigationElement_const_,1> *)(local_b8._8_8_ + 0x100))->Object->
         OwnerUObject).WeakPtr;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d8);
  if ((pUVar6 != (UObject *)0x0) &&
     (lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6), lVar7 != 0)) {
    lVar7 = *(longlong *)(lVar7 + 0x1a0);
    if (lVar7 == 0) {
LAB_146e4b9de:
      lVar7 = 0;
    }
    else {
      pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
      iVar14 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar14) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar14 * 8)
          != &pUVar8->_padding_)) goto LAB_146e4b9de;
    }
    if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x6c))) {
      if ((int)local_98 / 9 <= *(int *)(lVar7 + 0x6c)) goto LAB_146e4baa9;
      FNavigationElement::GetFullName
                (((TSharedRef<FNavigationElement_const_,1> *)(local_b8._8_8_ + 0x100))->Object,
                 &local_d8);
      FVar15 = (FName)L"";
      if (local_d8.Data.ArrayNum != 0) {
        FVar15 = (FName)local_d8.Data.AllocatorInstance;
      }
      iVar14 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar14 = 0;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,(wchar_t *)FVar15);
      if ((uVar4 != `void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
                    ::__l11::LastNameHash) && (2 < (byte)LogNavigation._0_1_)) {
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
                    ::__l15::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      }
      `void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
      ::__l11::LastNameHash = uVar4;
      if ((FName)local_d8.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_146e4baa9:
  if ((int)local_98 != 0) {
    uVar4 = (uint)__xmm_80000000000000008000000000000000;
    uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    iVar14 = (int)local_98 / 3 + ((int)local_98 >> 0x1f) +
             (int)(((longlong)(int)local_98 / 3 + ((longlong)(int)local_98 >> 0x3f) & 0xffffffffU)
                  >> 0x1f);
    puVar13 = local_a8;
    if (3 < iVar14) {
      uVar5 = (iVar14 - 4U >> 2) + 1;
      uVar17 = (ulonglong)uVar5;
      iVar16 = uVar5 * 4;
      do {
        uVar1 = puVar13[2];
        *puVar13 = CONCAT44((uint)((ulonglong)*puVar13 >> 0x20) ^ uVar18,(uint)*puVar13 ^ uVar4);
        puVar13[2] = CONCAT44((uint)((ulonglong)puVar13[1] >> 0x20) ^ uVar18,
                              (uint)puVar13[1] ^ uVar4);
        puVar13[3] = CONCAT44((uint)((ulonglong)puVar13[3] >> 0x20) ^ uVar18,
                              (uint)puVar13[3] ^ uVar4);
        puVar13[1] = uVar1;
        uVar1 = puVar13[5];
        puVar13[5] = CONCAT44((uint)((ulonglong)puVar13[4] >> 0x20) ^ uVar18,
                              (uint)puVar13[4] ^ uVar4);
        puVar13[4] = uVar1;
        uVar1 = puVar13[8];
        puVar13[6] = CONCAT44((uint)((ulonglong)puVar13[6] >> 0x20) ^ uVar18,
                              (uint)puVar13[6] ^ uVar4);
        puVar13[8] = CONCAT44((uint)((ulonglong)puVar13[7] >> 0x20) ^ uVar18,
                              (uint)puVar13[7] ^ uVar4);
        puVar13[7] = uVar1;
        uVar1 = puVar13[0xb];
        puVar13[9] = CONCAT44((uint)((ulonglong)puVar13[9] >> 0x20) ^ uVar18,
                              (uint)puVar13[9] ^ uVar4);
        puVar13[0xb] = CONCAT44((uint)((ulonglong)puVar13[10] >> 0x20) ^ uVar18,
                                (uint)puVar13[10] ^ uVar4);
        puVar13[10] = uVar1;
        puVar13 = puVar13 + 0xc;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (iVar16 < iVar14) {
      puVar13 = puVar13 + 2;
      uVar17 = (ulonglong)(uint)(iVar14 - iVar16);
      do {
        uVar1 = *puVar13;
        puVar13[-2] = CONCAT44((uint)((ulonglong)puVar13[-2] >> 0x20) ^ uVar18,
                               (uint)puVar13[-2] ^ uVar4);
        *puVar13 = CONCAT44((uint)((ulonglong)puVar13[-1] >> 0x20) ^ uVar18,
                            (uint)puVar13[-1] ^ uVar4);
        puVar13[-1] = uVar1;
        puVar13 = puVar13 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  RecastGeometryExport::StoreCollisionCache((FRecastGeometryExport *)local_b8);
  auVar2 = local_88;
  if (local_88 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar9 = ::FName::FName((FName *)&local_d8,"STAT_NavigationMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar9,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar15 = *(FName *)FVar10;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar15;
    if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      auVar3 = local_88;
      local_c8.NameAndInfo.Number = FVar15.Number & 0xffffbfff | 0xb000;
      local_88[0] = auVar2[0];
      local_88[1] = auVar2[1];
      local_88[2] = auVar2[2];
      local_88[3] = auVar2[3];
      local_88[4] = auVar2[4];
      local_88[5] = auVar2[5];
      local_88[6] = auVar2[6];
      local_88[7] = auVar2[7];
      local_c8.StatData.Pad[0] = local_88[0];
      local_c8.StatData.Pad[1] = local_88[1];
      local_c8.StatData.Pad[2] = local_88[2];
      local_c8.StatData.Pad[3] = local_88[3];
      local_c8.StatData.Pad[4] = local_88[4];
      local_c8.StatData.Pad[5] = local_88[5];
      local_c8.StatData.Pad[6] = local_88[6];
      local_c8.StatData.Pad[7] = local_88[7];
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar15;
      local_c8.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      local_88 = auVar3;
      FThreadStats::AddStatMessage(pFVar11,&local_c8);
      FStatsTrace::Add((FName *)&local_d8,-(longlong)auVar2);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  auVar2 = auStack_a0;
  if (auStack_a0 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar9 = ::FName::FName((FName *)&local_d8,"STAT_NavigationMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar9,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar15 = *(FName *)FVar10;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar15;
    if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      auVar3 = auStack_a0;
      local_c8.NameAndInfo.Number = FVar15.Number & 0xffffbfff | 0xb000;
      auStack_a0[0] = auVar2[0];
      auStack_a0[1] = auVar2[1];
      auStack_a0[2] = auVar2[2];
      auStack_a0[3] = auVar2[3];
      auStack_a0[4] = auVar2[4];
      auStack_a0[5] = auVar2[5];
      auStack_a0[6] = auVar2[6];
      auStack_a0[7] = auVar2[7];
      local_c8.StatData.Pad[0] = auStack_a0[0];
      local_c8.StatData.Pad[1] = auStack_a0[1];
      local_c8.StatData.Pad[2] = auStack_a0[2];
      local_c8.StatData.Pad[3] = auStack_a0[3];
      local_c8.StatData.Pad[4] = auStack_a0[4];
      local_c8.StatData.Pad[5] = auStack_a0[5];
      local_c8.StatData.Pad[6] = auStack_a0[6];
      local_c8.StatData.Pad[7] = auStack_a0[7];
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar15;
      local_c8.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      auStack_a0 = auVar3;
      FThreadStats::AddStatMessage(pFVar11,&local_c8);
      FStatsTrace::Add((FName *)&local_d8,-(longlong)auVar2);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if (local_a8 != (undefined8 *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// ExportRigidBodyGeometry @ 146e50bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FRecastGeometryExport::ExportRigidBodyGeometry
          (UBodySetup *param_1,TNavStatArray<UE::Math::TVector<double>_> *param_2,
          TNavStatArray<int> *param_3,TNavStatArray<UE::Math::TVector<double>_> *param_4,
          TNavStatArray<int> *param_5,TNavStatArray<int> *param_6,TBox<double> *param_7,
          TTransform<double> *param_8)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  TTransform<double> *pTVar9;
  UBodySetup *pUVar10;
  TNavStatArray<int> *pTVar11;
  TBox<double> *pTVar12;
  FKAggregateGeom *pFVar13;
  TEnumAsByte<ECollisionTraceFlag> TVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined7 extraout_var;
  FTrimeshIndexBuffer *pFVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  TTransform<double> *pTVar22;
  longlong lVar23;
  FKConvexElem *pFVar24;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [8];
  TNavStatArray<double> local_1f0;
  int local_1d8 [2];
  TTransform<double> *local_1d0;
  UBodySetup *local_1c8;
  TNavStatArray<int> *local_1c0;
  int local_1b8 [2];
  TNavStatArray<UE::Math::TVector<double>_> *local_1b0;
  TBox<double> *local_1a8;
  FKAggregateGeom *local_1a0;
  TNavStatArray<UE::Math::TVector<double>_> *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  FTriangleMeshImplicitObject *local_160;
  FTriangleMeshImplicitObject **local_158;
  TNavStatArray<double> *local_150;
  TNavStatArray<int> *local_148;
  TTransform<double> *local_140;
  TBox<double> *local_138;
  int *local_130;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1c0 = param_5;
  local_1a8 = param_7;
  local_1d0 = param_8;
  local_1a0 = (FKAggregateGeom *)param_6;
  local_1c8 = param_1;
  local_1b0 = param_2;
  local_198 = param_4;
  (**(code **)(param_1->_padding_ + 0x2b0))();
  local_1f0._0_8_ = 0;
  local_1f0._8_8_ = 0;
  local_1f0._16_8_ = 0;
  TVar14 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)param_1);
  pTVar12 = local_1a8;
  pUVar10 = local_1c8;
  pTVar9 = local_1d0;
  if (*(char *)CONCAT71(extraout_var,TVar14.Value) == '\x03') {
    pFVar21 = (param_1->TriMeshGeometries).AllocatorInstance.Data;
    iVar17 = (param_1->TriMeshGeometries).ArrayNum;
    pFVar2 = pFVar21 + (longlong)iVar17 * 8;
    while( true ) {
      if ((pUVar10->TriMeshGeometries).ArrayNum != iVar17) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1f8);
      }
      param_2 = local_1b0;
      param_6 = (TNavStatArray<int> *)local_1a0;
      param_4 = local_198;
      if (pFVar21 == pFVar2) break;
      local_160 = *(FTriangleMeshImplicitObject **)pFVar21;
      if (local_160 == (FTriangleMeshImplicitObject *)0x0) {
LAB_146e50cfa:
        pFVar21 = pFVar21 + 8;
      }
      else {
        local_140 = pTVar9;
        local_138 = pTVar12;
        local_1b8[0] = (int)local_1f0._16_4_ / 3 + ((int)local_1f0._16_4_ >> 0x1f) +
                       (int)(((longlong)(int)local_1f0._16_4_ / 3 +
                              ((longlong)(int)local_1f0._16_4_ >> 0x3f) & 0xffffffffU) >> 0x1f);
        local_158 = &local_160;
        local_150 = &local_1f0;
        local_130 = local_1b8;
        local_148 = param_3;
        pFVar19 = Chaos::FTriangleMeshImplicitObject::Elements(local_160);
        if (pFVar19->bRequiresLargeIndices == false) {
          `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
          operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
                    (&local_158,&pFVar19->SmallIdxBuffer);
          goto LAB_146e50cfa;
        }
        `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
        operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                  (&local_158,&pFVar19->LargeIdxBuffer);
        pFVar21 = pFVar21 + 8;
      }
    }
  }
  uVar20 = (int)(((longlong)(int)local_1f0._16_4_ / 3 + ((longlong)(int)local_1f0._16_4_ >> 0x3f) &
                 0xffffffffU) >> 0x1f) + (int)local_1f0._16_4_ / 3 + ((int)local_1f0._16_4_ >> 0x1f)
           + *(int *)&param_2->field_0x10;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if (*(int *)&param_2->field_0x14 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar20,(ForAnyElementType *)param_2,*(int *)&param_2->field_0x10,
               (int *)&param_2->field_0x14);
  }
  if (0 < (int)local_1f0._16_4_) {
    lVar23 = 8;
    iVar17 = local_1f0._16_4_;
    uVar20 = 1;
    do {
      uVar16 = 0;
      if ((int)(uVar20 + 1) < iVar17) {
        uVar16 = ~(uVar20 + 1) >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = local_1f0._16_4_;
      }
      uVar4 = *(undefined8 *)(lVar23 + 8 + local_1f0._0_8_);
      uVar16 = 0;
      if ((int)uVar20 < iVar17) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = local_1f0._16_4_;
      }
      uVar5 = *(undefined8 *)(lVar23 + local_1f0._0_8_);
      uVar16 = 0;
      if ((int)(uVar20 - 1) < iVar17) {
        uVar16 = ~(uVar20 - 1) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_190 = *(undefined8 *)(lVar23 + -8 + local_1f0._0_8_);
      uStack_188 = uVar5;
      local_180 = uVar4;
      if (((*(undefined8 **)param_2 <= &local_190) &&
          (&local_190 < *(undefined8 **)param_2 + (longlong)*(int *)&param_2->field_0x14 * 3)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar17 = *(int *)&param_2->field_0x10;
      if (iVar17 == *(int *)&param_2->field_0x14) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,(int *)&param_2->field_0x14);
      }
      lVar23 = lVar23 + 0x18;
      *(int *)&param_2->field_0x10 = iVar17 + 1;
      lVar6 = *(longlong *)param_2;
      puVar3 = (undefined8 *)(lVar6 + (longlong)iVar17 * 0x18);
      *puVar3 = local_190;
      puVar3[1] = uStack_188;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar17 * 0x18) = local_180;
      iVar18 = uVar20 + 2;
      iVar17 = local_1f0._16_4_;
      uVar20 = uVar20 + 3;
    } while (iVar18 < (int)local_1f0._16_4_);
  }
  uVar8 = local_1f0._20_4_;
  iVar17 = *(int *)&param_4->field_0x10;
  if ((longlong)local_1f0._16_8_ < 0) {
    local_1f0._16_8_ = (ulonglong)(uint)local_1f0._20_4_ << 0x20;
    if (uVar8 != 0) {
      UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&local_1f0,0,(int *)&local_1f0.field_0x14);
    }
  }
  else {
    local_1f0._16_8_ = (ulonglong)(uint)local_1f0._20_4_ << 0x20;
  }
  pTVar12 = local_1a8;
  pTVar11 = local_1c0;
  pTVar9 = local_1d0;
  uVar20 = (local_1c8->AggGeom).ConvexElems.ArrayNum;
  local_1a0 = &local_1c8->AggGeom;
  pFVar24 = (FKConvexElem *)(local_1c8->AggGeom).ConvexElems.AllocatorInstance.Data;
  if (0 < (int)uVar20) {
    pTVar22 = &pFVar24->Transform;
    local_1c8 = (UBodySetup *)(ulonglong)uVar20;
    do {
      local_1d8[0] = (int)local_1f0._16_4_ / 3 + ((int)local_1f0._16_4_ >> 0x1f) +
                     (int)(((longlong)(int)local_1f0._16_4_ / 3 +
                            ((longlong)(int)local_1f0._16_4_ >> 0x3f) & 0xffffffffU) >> 0x1f);
      if (((*(int **)param_6 <= local_1d8) &&
          (local_1d8 < *(int **)param_6 + *(int *)&param_6->field_0x14)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar18 = *(int *)&param_6->field_0x10;
      if (iVar18 == *(int *)&param_6->field_0x14) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x404,(ForAnyElementType *)param_6,(int *)&param_6->field_0x14);
      }
      *(int *)&param_6->field_0x10 = iVar18 + 1;
      *(int *)(*(longlong *)param_6 + (longlong)iVar18 * 4) = local_1d8[0];
      if (((TRefCountPtr<Chaos::FConvex> *)(pTVar22 + 1))->Reference != (FConvex *)0x0) {
        local_c8.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
        local_c8.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
        local_c8.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
        local_c8.Rotation.ZW.m128d_f64[1] = (pTVar22->Rotation).ZW.m128d_f64[1];
        local_c8.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
        local_c8.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
        local_c8.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
        local_c8.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
        local_c8.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
        local_c8.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
        local_c8.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
        local_c8.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
        local_128.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_128.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_128.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_128.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_128.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_128.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_128,&local_c8,pTVar9);
        RecastGeometryExport::ExportChaosConvexMesh(pFVar24,&local_128,&local_1f0,pTVar11,pTVar12);
      }
      pFVar24 = pFVar24 + 1;
      pTVar22 = (TTransform<double> *)((longlong)(pTVar22 + 2) + 0x40);
      local_1c8 = (UBodySetup *)((longlong)local_1c8 - 1);
    } while (local_1c8 != (UBodySetup *)0x0);
    local_1c8 = (UBodySetup *)0x0;
    param_4 = local_198;
  }
  pFVar13 = local_1a0;
  pTVar12 = local_1a8;
  lVar23 = 8;
  RecastGeometryExport::ExportRigidBodyBoxElements
            (local_1a0,&local_1f0,local_1c0,param_6,local_1a8,local_1d0,iVar17);
  RecastGeometryExport::ExportRigidBodySphylElements
            (pFVar13,&local_1f0,local_1c0,param_6,pTVar12,local_1d0,iVar17);
  RecastGeometryExport::ExportRigidBodySphereElements
            (pFVar13,&local_1f0,local_1c0,param_6,pTVar12,local_1d0,iVar17);
  uVar20 = (int)(((longlong)(int)local_1f0._16_4_ / 3 + ((longlong)(int)local_1f0._16_4_ >> 0x3f) &
                 0xffffffffU) >> 0x1f) + (int)local_1f0._16_4_ / 3 + ((int)local_1f0._16_4_ >> 0x1f)
           + *(int *)&param_4->field_0x10;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  puVar1 = &param_4->field_0x14;
  if (*(int *)&param_4->field_0x14 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar20,(ForAnyElementType *)param_4,*(int *)&param_4->field_0x10,(int *)puVar1
              );
  }
  iVar17 = local_1f0._16_4_;
  uVar20 = 1;
  if (0 < (int)local_1f0._16_4_) {
    do {
      uVar16 = 0;
      if ((int)(uVar20 + 1) < iVar17) {
        uVar16 = ~(uVar20 + 1) >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = local_1f0._16_4_;
      }
      uVar4 = *(undefined8 *)(lVar23 + 8 + local_1f0._0_8_);
      uVar16 = 0;
      if ((int)uVar20 < iVar17) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar17 = local_1f0._16_4_;
      }
      uVar5 = *(undefined8 *)(lVar23 + local_1f0._0_8_);
      uVar16 = 0;
      if ((int)(uVar20 - 1) < iVar17) {
        uVar16 = ~(uVar20 - 1) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_178 = *(undefined8 *)(lVar23 + -8 + local_1f0._0_8_);
      uStack_170 = uVar5;
      local_168 = uVar4;
      if (((*(undefined8 **)param_4 <= &local_178) &&
          (&local_178 < *(undefined8 **)param_4 + (longlong)*(int *)puVar1 * 3)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar17 = *(int *)&param_4->field_0x10;
      if (iVar17 == *(int *)puVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_4,(int *)puVar1);
      }
      lVar23 = lVar23 + 0x18;
      *(int *)&param_4->field_0x10 = iVar17 + 1;
      lVar6 = *(longlong *)param_4;
      puVar3 = (undefined8 *)(lVar6 + (longlong)iVar17 * 0x18);
      *puVar3 = local_178;
      puVar3[1] = uStack_170;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar17 * 0x18) = local_168;
      iVar18 = uVar20 + 2;
      iVar17 = local_1f0._16_4_;
      uVar20 = uVar20 + 3;
    } while (iVar18 < (int)local_1f0._16_4_);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&local_1f0);
  return;
}

// ExportRigidBodyGeometry @ 146e51490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRecastGeometryExport::ExportRigidBodyGeometry
          (UBodySetup *param_1,TNavStatArray<UE::Math::TVector<double>_> *param_2,
          TNavStatArray<int> *param_3,TBox<double> *param_4,TTransform<double> *param_5)

{
  int iVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  FName FVar8;
  code *pcVar9;
  undefined4 uVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  FKAggregateGeom *pFVar13;
  TEnumAsByte<ECollisionTraceFlag> TVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined7 extraout_var;
  FTrimeshIndexBuffer *pFVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar21;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FScriptContainerElement *pFVar22;
  TTransform<double> *pTVar23;
  FKConvexElem *pFVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auStackY_248 [32];
  undefined1 local_1e8 [4];
  int local_1e4 [3];
  undefined1 local_1d8 [8];
  uchar auStack_1d0 [8];
  undefined8 local_1c8;
  FName local_1c0;
  FKAggregateGeom *local_1b8;
  int local_1b0 [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  FTriangleMeshImplicitObject *local_190;
  FName local_188;
  FStatMessage local_180;
  FTriangleMeshImplicitObject **local_170;
  undefined1 *local_168;
  TNavStatArray<int> *local_160;
  TTransform<double> *local_158;
  TBox<double> *local_150;
  int *local_148;
  FName local_140;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1b8 = (FKAggregateGeom *)param_5;
  local_1d8 = (undefined1  [8])0x0;
  auStack_1d0[0] = '\0';
  auStack_1d0[1] = '\0';
  auStack_1d0[2] = '\0';
  auStack_1d0[3] = '\0';
  auStack_1d0[4] = '\0';
  auStack_1d0[5] = '\0';
  auStack_1d0[6] = '\0';
  auStack_1d0[7] = '\0';
  local_1c8 = 0;
  local_1c0 = (FName)param_2;
  (**(code **)(param_1->_padding_ + 0x2b0))();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._16_8_ = 0;
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._0_8_ = 0;
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._8_8_ = 0;
    atexit(`RecastGeometryExport::ExportRigidBodySetup'::__l2::
           _dynamic_atexit_destructor_for__TemporaryShapeBuffer__);
    _Init_thread_footer(&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar14 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)param_1);
  pFVar13 = local_1b8;
  if (*(char *)CONCAT71(extraout_var,TVar14.Value) == '\x03') {
    pFVar22 = (param_1->TriMeshGeometries).AllocatorInstance.Data;
    iVar16 = (param_1->TriMeshGeometries).ArrayNum;
    pFVar3 = pFVar22 + (longlong)iVar16 * 8;
    while( true ) {
      if ((param_1->TriMeshGeometries).ArrayNum != iVar16) {
        local_1e8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_1e8);
      }
      param_2 = (TNavStatArray<UE::Math::TVector<double>_> *)local_1c0;
      param_5 = (TTransform<double> *)local_1b8;
      if (pFVar22 == pFVar3) break;
      local_190 = *(FTriangleMeshImplicitObject **)pFVar22;
      if (local_190 == (FTriangleMeshImplicitObject *)0x0) {
LAB_146e515d6:
        pFVar22 = pFVar22 + 8;
      }
      else {
        local_158 = (TTransform<double> *)pFVar13;
        local_1b0[0] = (int)local_1c8 / 3 + ((int)local_1c8 >> 0x1f) +
                       (int)(((longlong)(int)local_1c8 / 3 + ((longlong)(int)local_1c8 >> 0x3f) &
                             0xffffffffU) >> 0x1f);
        local_170 = &local_190;
        local_168 = local_1d8;
        local_148 = local_1b0;
        local_160 = param_3;
        local_150 = param_4;
        pFVar19 = Chaos::FTriangleMeshImplicitObject::Elements(local_190);
        if (pFVar19->bRequiresLargeIndices == false) {
          `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
          operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
                    (&local_170,&pFVar19->SmallIdxBuffer);
          goto LAB_146e515d6;
        }
        `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
        operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                  (&local_170,&pFVar19->LargeIdxBuffer);
        pFVar22 = pFVar22 + 8;
      }
    }
  }
  uVar17 = (param_1->AggGeom).ConvexElems.ArrayNum;
  local_1b8 = &param_1->AggGeom;
  pFVar24 = (FKConvexElem *)(param_1->AggGeom).ConvexElems.AllocatorInstance.Data;
  if (0 < (int)uVar17) {
    pTVar23 = &pFVar24->Transform;
    uVar26 = (ulonglong)uVar17;
    do {
      local_1e4[0] = (int)local_1c8 / 3 + ((int)local_1c8 >> 0x1f) +
                     (int)(((longlong)(int)local_1c8 / 3 + ((longlong)(int)local_1c8 >> 0x3f) &
                           0xffffffffU) >> 0x1f);
      if ((((ulonglong)
            `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
            ::__l2::TemporaryShapeBuffer._0_8_ <= local_1e4) &&
          (local_1e4 <
           (int *)(`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                   ::__l2::TemporaryShapeBuffer._0_8_ +
                  (longlong)
                  (int)`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                       ::__l2::TemporaryShapeBuffer._20_4_ * 4))) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
               ::__l2::TemporaryShapeBuffer._16_4_;
      if (`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._16_4_ ==
          `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._20_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x404,(ForAnyElementType *)
                                  &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                                   ::__l2::TemporaryShapeBuffer,
                            (int *)&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                                    ::__l2::TemporaryShapeBuffer.field_0x14);
      }
      `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
      ::__l2::TemporaryShapeBuffer._16_4_ = iVar16 + 1;
      *(int *)(`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
               ::__l2::TemporaryShapeBuffer._0_8_ + (longlong)iVar16 * 4) = local_1e4[0];
      if (((TRefCountPtr<Chaos::FConvex> *)(pTVar23 + 1))->Reference != (FConvex *)0x0) {
        local_d8.Rotation.XY.m128d_f64[0] = (pTVar23->Rotation).XY.m128d_f64[0];
        local_d8.Rotation.XY.m128d_f64[1] = (pTVar23->Rotation).XY.m128d_f64[1];
        local_d8.Rotation.ZW.m128d_f64[0] = (pTVar23->Rotation).ZW.m128d_f64[0];
        local_d8.Rotation.ZW.m128d_f64[1] = (pTVar23->Rotation).ZW.m128d_f64[1];
        local_d8.Translation.XY.m128d_f64[0] = (pTVar23->Translation).XY.m128d_f64[0];
        local_d8.Translation.XY.m128d_f64[1] = (pTVar23->Translation).XY.m128d_f64[1];
        local_d8.Translation.ZW.m128d_f64[0] = (pTVar23->Translation).ZW.m128d_f64[0];
        local_d8.Translation.ZW.m128d_f64[1] = (pTVar23->Translation).ZW.m128d_f64[1];
        local_d8.Scale3D.XY.m128d_f64[0] = (pTVar23->Scale3D).XY.m128d_f64[0];
        local_d8.Scale3D.XY.m128d_f64[1] = (pTVar23->Scale3D).XY.m128d_f64[1];
        local_d8.Scale3D.ZW.m128d_f64[0] = (pTVar23->Scale3D).ZW.m128d_f64[0];
        local_d8.Scale3D.ZW.m128d_f64[1] = (pTVar23->Scale3D).ZW.m128d_f64[1];
        local_138.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_138.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_138.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_138.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_138.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_138.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_138.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_138.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_138.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_138.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_138,&local_d8,param_5);
        RecastGeometryExport::ExportChaosConvexMesh
                  (pFVar24,&local_138,(TNavStatArray<double> *)local_1d8,param_3,param_4);
      }
      pFVar24 = pFVar24 + 1;
      pTVar23 = (TTransform<double> *)((longlong)(pTVar23 + 2) + 0x40);
      uVar26 = uVar26 - 1;
      param_2 = (TNavStatArray<UE::Math::TVector<double>_> *)local_1c0;
    } while (uVar26 != 0);
  }
  pFVar13 = local_1b8;
  RecastGeometryExport::ExportRigidBodyBoxElements
            (local_1b8,(TNavStatArray<double> *)local_1d8,param_3,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,param_4,param_5,0);
  RecastGeometryExport::ExportRigidBodySphylElements
            (pFVar13,(TNavStatArray<double> *)local_1d8,param_3,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,param_4,param_5,0);
  RecastGeometryExport::ExportRigidBodySphereElements
            (pFVar13,(TNavStatArray<double> *)local_1d8,param_3,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,param_4,param_5,0);
  uVar5 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._16_8_;
  uVar10 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
           ::__l2::TemporaryShapeBuffer._20_4_;
  `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
  ::__l2::TemporaryShapeBuffer._16_8_ =
       (ulonglong)
       (uint)`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
             ::__l2::TemporaryShapeBuffer._20_4_ << 0x20;
  if (((longlong)uVar5 < 0) && (uVar10 != 0)) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)
                     &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                      ::__l2::TemporaryShapeBuffer,0,
               (int *)&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                       ::__l2::TemporaryShapeBuffer.field_0x14);
  }
  uVar17 = (int)(((longlong)(int)local_1c8 / 3 + ((longlong)(int)local_1c8 >> 0x3f) & 0xffffffffU)
                >> 0x1f) + (int)local_1c8 / 3 + ((int)local_1c8 >> 0x1f) +
           *(int *)((longlong)param_2 + 0x10);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar2 = (int *)((longlong)param_2 + 0x14);
  lVar25 = 8;
  if (*piVar2 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,uVar17,(ForAnyElementType *)param_2,*(int *)((longlong)param_2 + 0x10),piVar2)
    ;
  }
  if (0 < (int)local_1c8) {
    uVar17 = 1;
    iVar16 = (int)local_1c8;
    do {
      uVar18 = 0;
      if ((int)(uVar17 + 1) < iVar16) {
        uVar18 = ~(uVar17 + 1) >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar16 = (int)local_1c8;
      }
      uVar5 = *(undefined8 *)(lVar25 + 8 + (longlong)local_1d8);
      uVar18 = 0;
      if ((int)uVar17 < iVar16) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar16 = (int)local_1c8;
      }
      uVar6 = *(undefined8 *)(lVar25 + (longlong)local_1d8);
      uVar18 = 0;
      if ((int)(uVar17 - 1) < iVar16) {
        uVar18 = ~(uVar17 - 1) >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_1a8 = *(undefined8 *)(lVar25 + -8 + (longlong)local_1d8);
      uStack_1a0 = uVar6;
      local_198 = uVar5;
      if (((*(undefined8 **)param_2 <= &local_1a8) &&
          (&local_1a8 < *(undefined8 **)param_2 + (longlong)*piVar2 * 3)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar16 = *(int *)((longlong)param_2 + 0x10);
      if (iVar16 == *piVar2) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x818,(ForAnyElementType *)param_2,piVar2);
      }
      lVar25 = lVar25 + 0x18;
      *(int *)((longlong)param_2 + 0x10) = iVar16 + 1;
      lVar7 = *(longlong *)param_2;
      puVar4 = (undefined8 *)(lVar7 + (longlong)iVar16 * 0x18);
      *puVar4 = local_1a8;
      puVar4[1] = uStack_1a0;
      *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar16 * 0x18) = local_198;
      iVar1 = uVar17 + 2;
      uVar17 = uVar17 + 3;
      iVar16 = (int)local_1c8;
    } while (iVar1 < (int)local_1c8);
  }
  auVar11 = auStack_1d0;
  if (auStack_1d0 != (uchar  [8])0x0) {
    FVar21 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar20 = ::FName::FName(&local_140,"STAT_NavigationMemory");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar20,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar8 = *(FName *)FVar21;
    local_1c0 = FVar8;
    if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      auVar12 = auStack_1d0;
      local_180.NameAndInfo.Number = FVar8.Number & 0xffffbfff | 0xb000;
      auStack_1d0[0] = auVar11[0];
      auStack_1d0[1] = auVar11[1];
      auStack_1d0[2] = auVar11[2];
      auStack_1d0[3] = auVar11[3];
      auStack_1d0[4] = auVar11[4];
      auStack_1d0[5] = auVar11[5];
      auStack_1d0[6] = auVar11[6];
      auStack_1d0[7] = auVar11[7];
      local_180.StatData.Pad[0] = auStack_1d0[0];
      local_180.StatData.Pad[1] = auStack_1d0[1];
      local_180.StatData.Pad[2] = auStack_1d0[2];
      local_180.StatData.Pad[3] = auStack_1d0[3];
      local_180.StatData.Pad[4] = auStack_1d0[4];
      local_180.StatData.Pad[5] = auStack_1d0[5];
      local_180.StatData.Pad[6] = auStack_1d0[6];
      local_180.StatData.Pad[7] = auStack_1d0[7];
      auStack_1d0 = auVar12;
      local_188 = FVar8;
      local_180.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_180);
      FStatsTrace::Add(&local_188,-(longlong)auVar11);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (local_1d8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_1d8);
  }
  return;
}

// ExportRigidBodySetup @ 146e51cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::ExportRigidBodySetup
          (FRecastGeometryExport *this,UBodySetup *param_1,TTransform<double> *param_2)

{
  TNavStatArray<double> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  FKAggregateGeom *pFVar8;
  TEnumAsByte<ECollisionTraceFlag> TVar9;
  bool bVar10;
  int iVar11;
  undefined7 extraout_var;
  FTrimeshIndexBuffer *pFVar12;
  FScriptContainerElement *pFVar13;
  TTransform<double> *pTVar14;
  FKConvexElem *pFVar15;
  FKAggregateGeom *pFVar16;
  ulonglong uVar17;
  TBox<double> *pTVar18;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168 [4];
  int local_164 [3];
  FKAggregateGeom *local_158;
  int local_150 [2];
  FTriangleMeshImplicitObject *local_148;
  FTriangleMeshImplicitObject **local_140;
  TNavStatArray<double> *local_138;
  TNavStatArray<int> *local_130;
  TTransform<double> *local_128;
  TBox<double> *local_120;
  int *local_118;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pTVar1 = &this->VertexBuffer;
  pTVar18 = &this->Data->Bounds;
  local_158 = (FKAggregateGeom *)&this->IndexBuffer;
  (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._16_8_ = 0;
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._0_8_ = 0;
    `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
    ::__l2::TemporaryShapeBuffer._8_8_ = 0;
    atexit(`RecastGeometryExport::ExportRigidBodySetup'::__l2::
           _dynamic_atexit_destructor_for__TemporaryShapeBuffer__);
    _Init_thread_footer(&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar9 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)param_1);
  pFVar16 = (FKAggregateGeom *)&this->IndexBuffer;
  if (*(char *)CONCAT71(extraout_var,TVar9.Value) == '\x03') {
    pFVar13 = (param_1->TriMeshGeometries).AllocatorInstance.Data;
    iVar11 = (param_1->TriMeshGeometries).ArrayNum;
    pFVar2 = pFVar13 + (longlong)iVar11 * 8;
    while( true ) {
      if ((param_1->TriMeshGeometries).ArrayNum != iVar11) {
        local_168[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<Chaos::FTriangleMeshImplicitObject>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_168);
      }
      pFVar16 = local_158;
      if (pFVar13 == pFVar2) break;
      local_148 = *(FTriangleMeshImplicitObject **)pFVar13;
      if (local_148 == (FTriangleMeshImplicitObject *)0x0) {
LAB_146e51e04:
        pFVar13 = pFVar13 + 8;
      }
      else {
        iVar3 = *(int *)&(this->VertexBuffer).field_0x10;
        local_150[0] = iVar3 / 3 + (iVar3 >> 0x1f) +
                       (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f
                            );
        local_140 = &local_148;
        local_130 = (TNavStatArray<int> *)local_158;
        local_118 = local_150;
        local_138 = pTVar1;
        local_128 = param_2;
        local_120 = pTVar18;
        pFVar12 = Chaos::FTriangleMeshImplicitObject::Elements(local_148);
        if (pFVar12->bRequiresLargeIndices == false) {
          `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
          operator()<TArray<Chaos::TVector<unsigned_short,3>,TSizedDefaultAllocator<32>_>_>
                    (&local_140,&pFVar12->SmallIdxBuffer);
          goto LAB_146e51e04;
        }
        `RecastGeometryExport::ExportChaosTriMesh'::__l2::<lambda_1>::
        operator()<TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>_>
                  (&local_140,&pFVar12->LargeIdxBuffer);
        pFVar13 = pFVar13 + 8;
      }
    }
  }
  uVar4 = (param_1->AggGeom).ConvexElems.ArrayNum;
  local_158 = &param_1->AggGeom;
  pFVar15 = (FKConvexElem *)(param_1->AggGeom).ConvexElems.AllocatorInstance.Data;
  if (0 < (int)uVar4) {
    pTVar14 = &pFVar15->Transform;
    uVar17 = (ulonglong)uVar4;
    do {
      iVar11 = *(int *)&(this->VertexBuffer).field_0x10;
      local_164[0] = iVar11 / 3 + (iVar11 >> 0x1f) +
                     (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
      if ((((ulonglong)
            `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
            ::__l2::TemporaryShapeBuffer._0_8_ <= local_164) &&
          (local_164 <
           (int *)(`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                   ::__l2::TemporaryShapeBuffer._0_8_ +
                  (longlong)
                  (int)`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                       ::__l2::TemporaryShapeBuffer._20_4_ * 4))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
               ::__l2::TemporaryShapeBuffer._16_4_;
      if (`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._16_4_ ==
          `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._20_4_) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                           (0x404,(ForAnyElementType *)
                                  &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                                   ::__l2::TemporaryShapeBuffer,
                            (int *)&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                                    ::__l2::TemporaryShapeBuffer.field_0x14);
      }
      `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
      ::__l2::TemporaryShapeBuffer._16_4_ = iVar11 + 1;
      *(int *)(`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
               ::__l2::TemporaryShapeBuffer._0_8_ + (longlong)iVar11 * 4) = local_164[0];
      if (((TRefCountPtr<Chaos::FConvex> *)(pTVar14 + 1))->Reference != (FConvex *)0x0) {
        local_a8.Rotation.XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
        local_a8.Rotation.XY.m128d_f64[1] = (pTVar14->Rotation).XY.m128d_f64[1];
        local_a8.Rotation.ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
        local_a8.Rotation.ZW.m128d_f64[1] = (pTVar14->Rotation).ZW.m128d_f64[1];
        local_a8.Translation.XY.m128d_f64[0] = (pTVar14->Translation).XY.m128d_f64[0];
        local_a8.Translation.XY.m128d_f64[1] = (pTVar14->Translation).XY.m128d_f64[1];
        local_a8.Translation.ZW.m128d_f64[0] = (pTVar14->Translation).ZW.m128d_f64[0];
        local_a8.Translation.ZW.m128d_f64[1] = (pTVar14->Translation).ZW.m128d_f64[1];
        local_a8.Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
        local_a8.Scale3D.XY.m128d_f64[1] = (pTVar14->Scale3D).XY.m128d_f64[1];
        local_a8.Scale3D.ZW.m128d_f64[0] = (pTVar14->Scale3D).ZW.m128d_f64[0];
        local_a8.Scale3D.ZW.m128d_f64[1] = (pTVar14->Scale3D).ZW.m128d_f64[1];
        local_108.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_108.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_108.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_108.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_108.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_108.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_108,&local_a8,param_2);
        RecastGeometryExport::ExportChaosConvexMesh
                  (pFVar15,&local_108,pTVar1,(TNavStatArray<int> *)pFVar16,pTVar18);
      }
      pFVar15 = pFVar15 + 1;
      pTVar14 = (TTransform<double> *)((longlong)(pTVar14 + 2) + 0x40);
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  pFVar8 = local_158;
  RecastGeometryExport::ExportRigidBodyBoxElements
            (local_158,pTVar1,(TNavStatArray<int> *)pFVar16,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,pTVar18,param_2,0);
  RecastGeometryExport::ExportRigidBodySphylElements
            (pFVar8,pTVar1,(TNavStatArray<int> *)pFVar16,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,pTVar18,param_2,0);
  RecastGeometryExport::ExportRigidBodySphereElements
            (pFVar8,pTVar1,(TNavStatArray<int> *)pFVar16,
             &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
              ::__l2::TemporaryShapeBuffer,pTVar18,param_2,0);
  uVar6 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._16_8_;
  uVar7 = `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
          ::__l2::TemporaryShapeBuffer._20_4_;
  `void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
  ::__l2::TemporaryShapeBuffer._16_8_ =
       (ulonglong)
       (uint)`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
             ::__l2::TemporaryShapeBuffer._20_4_ << 0x20;
  if (((longlong)uVar6 < 0) && (uVar7 != 0)) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)
                     &`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                      ::__l2::TemporaryShapeBuffer,0,
               (int *)&`void___cdecl_RecastGeometryExport::ExportRigidBodySetup(UBodySetup&___ptr64,TNavStatArray<double>&___ptr64,TNavStatArray<int>&___ptr64,UE::Math::TBox<double>&___ptr64,UE::Math::TTransform<double>_const&___ptr64)'
                       ::__l2::TemporaryShapeBuffer.field_0x14);
  }
  return;
}

// ExportVertexSoupGeometry @ 146e54880

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRecastGeometryExport::ExportVertexSoupGeometry
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FNavigationRelevantData *param_2)

{
  int iVar1;
  FName FVar2;
  uchar auVar3 [8];
  uchar auVar4 [8];
  uint uVar5;
  UObject *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NavigationMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  int iVar13;
  FString local_d8;
  FStatMessage local_c8;
  undefined1 local_b8 [16];
  void *local_a8;
  uchar auStack_a0 [8];
  undefined8 local_98;
  void *local_90;
  uchar local_88 [8];
  undefined8 local_80;
  TEnumAsByte<EWalkableSlopeBehavior> local_78;
  undefined8 local_74;
  float local_6c;
  undefined1 local_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  
  iVar13 = 0;
  local_a8 = (void *)0x0;
  auStack_a0[0] = '\0';
  auStack_a0[1] = '\0';
  auStack_a0[2] = '\0';
  auStack_a0[3] = '\0';
  auStack_a0[4] = '\0';
  auStack_a0[5] = '\0';
  auStack_a0[6] = '\0';
  auStack_a0[7] = '\0';
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_80 = 0;
  local_78.Value = '\0';
  local_74._0_4_ = 0.0;
  local_74._4_4_ = 0.0;
  local_6c = 1.0;
  local_b8._0_8_ = &___7FRecastGeometryExport__6B_;
  (param_2->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (param_2->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  uStack_37 = 0;
  (param_2->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (param_2->Bounds).Max.field0_0x0._s_0.X = 0.0;
  uStack_33 = 0;
  (param_2->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (param_2->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  uStack_31 = 0;
  local_38 = 0;
  (param_2->Bounds).IsValid = '\0';
  (param_2->Bounds).Pad[0] = '\0';
  (param_2->Bounds).Pad[1] = '\0';
  (param_2->Bounds).Pad[2] = '\0';
  (param_2->Bounds).Pad[3] = '\0';
  (param_2->Bounds).Pad[4] = '\0';
  (param_2->Bounds).Pad[5] = '\0';
  (param_2->Bounds).Pad[6] = '\0';
  local_b8._8_8_ = param_2;
  RecastGeometryExport::ExportVertexSoup
            (param_1,(TNavStatArray<double> *)&local_a8,(TNavStatArray<int> *)&local_90,
             &param_2->Bounds);
  local_d8.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)
        &(((TSharedRef<FNavigationElement_const_,1> *)(local_b8._8_8_ + 0x100))->Object->
         OwnerUObject).WeakPtr;
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_d8);
  if ((pUVar6 == (UObject *)0x0) ||
     (lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x180))(pUVar6), lVar7 == 0)) goto LAB_146e54a4a;
  lVar7 = *(longlong *)(lVar7 + 0x1a0);
  if (lVar7 == 0) {
LAB_146e54986:
    lVar7 = 0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_146e54986;
  }
  if (((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x6c))) && (*(int *)(lVar7 + 0x6c) < (int)local_98 / 9)
     ) {
    FNavigationElement::GetFullName
              (((TSharedRef<FNavigationElement_const_,1> *)(local_b8._8_8_ + 0x100))->Object,
               &local_d8);
    FVar2 = (FName)L"";
    if (local_d8.Data.ArrayNum != 0) {
      iVar13 = local_d8.Data.ArrayNum + -1;
      FVar2 = (FName)local_d8.Data.AllocatorInstance;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,(wchar_t *)FVar2);
    if ((uVar5 != `void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
                  ::__l11::LastNameHash) && (2 < (byte)LogNavigation._0_1_)) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)
                 &`void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
    `void___cdecl_RecastGeometryExport::ValidateGeometryExport(FRecastGeometryExport_const&___ptr64)'
    ::__l11::LastNameHash = uVar5;
    if ((FName)local_d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
LAB_146e54a4a:
  RecastGeometryExport::StoreCollisionCache((FRecastGeometryExport *)local_b8);
  auVar3 = local_88;
  if (local_88 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar9 = ::FName::FName((FName *)&local_d8,"STAT_NavigationMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar9,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      auVar4 = local_88;
      local_c8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_88[0] = auVar3[0];
      local_88[1] = auVar3[1];
      local_88[2] = auVar3[2];
      local_88[3] = auVar3[3];
      local_88[4] = auVar3[4];
      local_88[5] = auVar3[5];
      local_88[6] = auVar3[6];
      local_88[7] = auVar3[7];
      local_c8.StatData.Pad[0] = local_88[0];
      local_c8.StatData.Pad[1] = local_88[1];
      local_c8.StatData.Pad[2] = local_88[2];
      local_c8.StatData.Pad[3] = local_88[3];
      local_c8.StatData.Pad[4] = local_88[4];
      local_c8.StatData.Pad[5] = local_88[5];
      local_c8.StatData.Pad[6] = local_88[6];
      local_c8.StatData.Pad[7] = local_88[7];
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      local_c8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      local_88 = auVar4;
      FThreadStats::AddStatMessage(pFVar11,&local_c8);
      FStatsTrace::Add((FName *)&local_d8,-(longlong)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  auVar3 = auStack_a0;
  if (auStack_a0 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_NavigationMemory;
    if (StatPtr_STAT_NavigationMemory == (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)0x0) {
      pFVar9 = ::FName::FName((FName *)&local_d8,"STAT_NavigationMemory");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_NavigationMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavigationMemory,*pFVar9,
                          L"Navigation Memory","STATGROUP_Memory","STATCAT_Advanced",L"Memory",true,
                          false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar10;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      auVar4 = auStack_a0;
      local_c8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      auStack_a0[0] = auVar3[0];
      auStack_a0[1] = auVar3[1];
      auStack_a0[2] = auVar3[2];
      auStack_a0[3] = auVar3[3];
      auStack_a0[4] = auVar3[4];
      auStack_a0[5] = auVar3[5];
      auStack_a0[6] = auVar3[6];
      auStack_a0[7] = auVar3[7];
      local_c8.StatData.Pad[0] = auStack_a0[0];
      local_c8.StatData.Pad[1] = auStack_a0[1];
      local_c8.StatData.Pad[2] = auStack_a0[2];
      local_c8.StatData.Pad[3] = auStack_a0[3];
      local_c8.StatData.Pad[4] = auStack_a0[4];
      local_c8.StatData.Pad[5] = auStack_a0[5];
      local_c8.StatData.Pad[6] = auStack_a0[6];
      local_c8.StatData.Pad[7] = auStack_a0[7];
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar2;
      local_c8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      auStack_a0 = auVar4;
      FThreadStats::AddStatMessage(pFVar11,&local_c8);
      FStatsTrace::Add((FName *)&local_d8,-(longlong)auVar3);
      if (pFVar11->ScopeCount == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// GetDataOwnerName @ 146e5b8b0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FString * __thiscall
FRecastGeometryExport::GetDataOwnerName(FRecastGeometryExport *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = this->Data == (FNavigationRelevantData *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"No Data");
  }
  else {
    pFVar1 = FNavigationElement::GetName((this->Data->SourceElement).Object,&local_18);
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

// SetNavDataPerInstanceTransformDelegate @ 146e72060

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastGeometryExport::SetNavDataPerInstanceTransformDelegate
          (FRecastGeometryExport *this,
          TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  TDelegate<void___cdecl(UE::Math::TBox<double>_const_&,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_00;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  this_00 = &this->Data->NavDataPerInstanceTransformDelegate;
  if (param_1 != this_00) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// StoreCollisionCache @ 146e73cb0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall FRecastGeometryExport::StoreCollisionCache(FRecastGeometryExport *this)

{
  undefined1 *puVar1;
  FNavigationRelevantData *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar4 = *(int *)&(this->IndexBuffer).field_0x10 / 3;
  if (iVar4 != 0) {
    iVar8 = *(int *)&(this->VertexBuffer).field_0x10;
    iVar8 = iVar8 / 3 + (iVar8 >> 0x1f) +
            (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f);
    if (iVar8 != 0) {
      uVar7._0_1_ = (this->SlopeOverride).WalkableSlopeBehavior;
      uVar7._1_3_ = *(undefined3 *)&(this->SlopeOverride).field_0x1;
      uVar7._4_4_ = (this->SlopeOverride).WalkableSlopeAngle;
      uVar5 = (this->SlopeOverride).CachedSlopeAngle;
      uVar6 = (this->SlopeOverride).CachedSlopeCos;
      pFVar2 = this->Data;
      iVar9 = iVar8 * 0x18;
      uVar10 = iVar4 * 0xc + 0x30 + iVar9;
      uStack_1c = (undefined4)uVar7;
      if (-1 < (int)uVar10) {
        puVar1 = &(pFVar2->CollisionData).field_0x14;
        *(undefined4 *)&(pFVar2->CollisionData).field_0x10 = 0;
        if (*(uint *)puVar1 != uVar10) {
          UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                    (1,1,uVar10,(ForAnyElementType *)&pFVar2->CollisionData,0,(int *)puVar1);
        }
        pFVar2 = this->Data;
        UE::Core::Private::ReallocGrow<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                  (1,1,uVar10,(ForAnyElementType *)&pFVar2->CollisionData,
                   (int *)&(pFVar2->CollisionData).field_0x10,
                   (int *)&(pFVar2->CollisionData).field_0x14);
        uVar7 = CONCAT44(uVar5,uVar7._4_4_);
        puVar3 = *(undefined8 **)&this->Data->CollisionData;
        *puVar3 = CONCAT44(iVar8,uVar10);
        puVar3[1] = CONCAT44(uStack_1c,iVar4);
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[2] = uVar7;
        *(undefined4 *)(puVar3 + 3) = uVar6;
        memcpy(puVar3 + 6,*(void **)&this->VertexBuffer,(longlong)iVar9);
        memcpy((void *)((longlong)puVar3 + (longlong)iVar9 + 0x30U),*(void **)&this->IndexBuffer,
               (longlong)(iVar4 * 0xc));
        return;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
  }
  pFVar2 = this->Data;
  puVar1 = &(pFVar2->CollisionData).field_0x14;
  *(undefined4 *)&(pFVar2->CollisionData).field_0x10 = 0;
  if (*(int *)puVar1 == 0) {
    return;
  }
  UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
            (1,1,0,(ForAnyElementType *)&pFVar2->CollisionData,0,(int *)puVar1);
  return;
}

// TransformVertexSoupToRecast @ 146e749d0

void __cdecl
FRecastGeometryExport::TransformVertexSoupToRecast
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TNavStatArray<UE::Math::TVector<double>_> *param_2,TNavStatArray<int> *param_3)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ulonglong local_res8;
  int local_88;
  int local_84;
  int local_80 [2];
  TVector<double> local_78;
  TVector<double> local_60;
  TVector<double> local_48;
  
  iVar9 = param_1->ArrayNum;
  if (iVar9 != 0) {
    if ((iVar9 != (iVar9 / 3 + (iVar9 >> 0x1f) +
                  (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  3) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexSoup.Num() % 3 == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMeshGenerator.cpp"
                           ,0x419,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = *(int *)&param_2->field_0x10;
    iVar10 = param_1->ArrayNum;
    pFVar11 = (param_1->AllocatorInstance).Data;
    uVar8 = iVar10 / 3 + (iVar10 >> 0x1f) +
            (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
    if (0 < (int)uVar8) {
      iVar10 = iVar9 + 1;
      local_res8 = (ulonglong)uVar8;
      do {
        pTVar7 = Unreal2RecastPoint(&local_78,(TVector<double> *)pFVar11);
        if (((*(TVector<double> **)param_2 <= pTVar7) &&
            (pTVar7 < *(TVector<double> **)param_2 + *(int *)&param_2->field_0x14)) &&
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
        iVar6 = *(int *)&param_2->field_0x10;
        if (iVar6 == *(int *)&param_2->field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (0x818,(ForAnyElementType *)param_2,(int *)&param_2->field_0x14);
        }
        *(int *)&param_2->field_0x10 = iVar6 + 1;
        dVar4 = (pTVar7->field0_0x0)._s_0.Y;
        lVar2 = *(longlong *)param_2;
        pdVar1 = (double *)(lVar2 + (longlong)iVar6 * 0x18);
        *pdVar1 = (pTVar7->field0_0x0)._s_0.X;
        pdVar1[1] = dVar4;
        *(double *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18) = (pTVar7->field0_0x0)._s_0.Z;
        pTVar7 = Unreal2RecastPoint(&local_60,(TVector<double> *)(pFVar11 + 0x18));
        if (((*(TVector<double> **)param_2 <= pTVar7) &&
            (pTVar7 < *(TVector<double> **)param_2 + *(int *)&param_2->field_0x14)) &&
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
        iVar6 = *(int *)&param_2->field_0x10;
        if (iVar6 == *(int *)&param_2->field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (0x818,(ForAnyElementType *)param_2,(int *)&param_2->field_0x14);
        }
        *(int *)&param_2->field_0x10 = iVar6 + 1;
        dVar4 = (pTVar7->field0_0x0)._s_0.Y;
        lVar2 = *(longlong *)param_2;
        pdVar1 = (double *)(lVar2 + (longlong)iVar6 * 0x18);
        *pdVar1 = (pTVar7->field0_0x0)._s_0.X;
        pdVar1[1] = dVar4;
        *(double *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18) = (pTVar7->field0_0x0)._s_0.Z;
        pTVar7 = Unreal2RecastPoint(&local_48,(TVector<double> *)(pFVar11 + 0x30));
        if (((*(TVector<double> **)param_2 <= pTVar7) &&
            (pTVar7 < *(TVector<double> **)param_2 + *(int *)&param_2->field_0x14)) &&
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
        iVar6 = *(int *)&param_2->field_0x10;
        if (iVar6 == *(int *)&param_2->field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (0x818,(ForAnyElementType *)param_2,(int *)&param_2->field_0x14);
        }
        *(int *)&param_2->field_0x10 = iVar6 + 1;
        dVar4 = (pTVar7->field0_0x0)._s_0.Y;
        lVar2 = *(longlong *)param_2;
        pdVar1 = (double *)(lVar2 + (longlong)iVar6 * 0x18);
        *pdVar1 = (pTVar7->field0_0x0)._s_0.X;
        pdVar1[1] = dVar4;
        *(double *)(lVar2 + 0x10 + (longlong)iVar6 * 0x18) = (pTVar7->field0_0x0)._s_0.Z;
        local_88 = iVar10 + 1;
        if (((*(int **)param_3 <= &local_88) &&
            (&local_88 < *(int **)param_3 + *(int *)&param_3->field_0x14)) &&
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
        iVar6 = *(int *)&param_3->field_0x10;
        if (iVar6 == *(int *)&param_3->field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_3,(int *)&param_3->field_0x14);
        }
        *(int *)&param_3->field_0x10 = iVar6 + 1;
        *(int *)(*(longlong *)param_3 + (longlong)iVar6 * 4) = local_88;
        local_84 = iVar10;
        if (((*(int **)param_3 <= &local_84) &&
            (&local_84 < *(int **)param_3 + *(int *)&param_3->field_0x14)) &&
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
        iVar6 = *(int *)&param_3->field_0x10;
        if (iVar6 == *(int *)&param_3->field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_3,(int *)&param_3->field_0x14);
        }
        *(int *)&param_3->field_0x10 = iVar6 + 1;
        *(int *)(*(longlong *)param_3 + (longlong)iVar6 * 4) = local_84;
        local_80[0] = iVar9;
        if (((*(int **)param_3 <= local_80) &&
            (local_80 < *(int **)param_3 + *(int *)&param_3->field_0x14)) &&
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
        iVar6 = *(int *)&param_3->field_0x10;
        if (iVar6 == *(int *)&param_3->field_0x14) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_3,(int *)&param_3->field_0x14);
        }
        iVar9 = iVar9 + 3;
        *(int *)&param_3->field_0x10 = iVar6 + 1;
        iVar10 = iVar10 + 3;
        pFVar11 = pFVar11 + 0x48;
        local_res8 = local_res8 - 1;
        *(int *)(*(longlong *)param_3 + (longlong)iVar6 * 4) = local_80[0];
      } while (local_res8 != 0);
    }
  }
  return;
}

