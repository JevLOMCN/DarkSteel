// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// FStaticMeshLODResourcesMeshSurfaceAdapter @ 14caca5d0

FStaticMeshLODResourcesMeshSurfaceAdapter * __thiscall
UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter::FStaticMeshLODResourcesMeshSurfaceAdapter
          (FStaticMeshLODResourcesMeshSurfaceAdapter *this,FStaticMeshLODResources *param_1,
          UStaticMesh *param_2,bool param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  UMaterialInterface *pUVar12;
  longlong lVar13;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar14;
  ulonglong uVar15;
  FStaticMeshSectionArray *pFVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  UStaticMesh *local_res18;
  char local_res20;
  FStaticMeshSectionArray *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar1 = &this->field_0x40;
  puVar2 = &this->field_0x50;
  puVar3 = &this->field_0x4c;
  *(undefined8 *)this = 0;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  puVar4 = &this->field_0x5c;
  puVar5 = &this->field_0x60;
  *(double *)&this->field_0x8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x10 = uVar9;
  *(double *)&this->field_0x18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x28 = uVar9;
  *(double *)&this->field_0x30 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  *(undefined4 *)puVar3 = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)puVar4 = 0;
  *(undefined4 *)puVar5 = 0;
  this->field_0x38 = 0;
  *(FStaticMeshLODResources **)this = param_1;
  uVar17 = *(int *)&(param_1->Sections).field_0x28 + 1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*(int *)puVar4 < (int)uVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,(ForAnyElementType *)puVar2,*(int *)&this->field_0x58,(int *)puVar4);
  }
  uVar17 = *(uint *)&(param_1->Sections).field_0x28;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*(int *)puVar3 < (int)uVar17) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,(ForAnyElementType *)puVar1,*(int *)&this->field_0x48,(int *)puVar3);
  }
  uVar17 = *(uint *)&(param_1->Sections).field_0x28;
  uVar15 = (ulonglong)(int)uVar17;
  pFVar16 = *(FStaticMeshSectionArray **)&(param_1->Sections).field_0x20;
  if (pFVar16 == (FStaticMeshSectionArray *)0x0) {
    pFVar16 = &param_1->Sections;
  }
  piVar7 = (int *)&pFVar16->field_0x0;
  lVar8 = uVar15 * 7;
  do {
    if (*(int *)&(param_1->Sections).field_0x28 != (int)uVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FStaticMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar16 == (FStaticMeshSectionArray *)(piVar7 + lVar8)) {
      if ((*(undefined1 **)puVar2 <= puVar5) &&
         (puVar5 < *(undefined1 **)puVar2 + (longlong)*(int *)puVar4 * 4)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FStaticMeshLODResourcesMeshSurfaceAdapter *)(*pcVar6)();
          return pFVar14;
        }
      }
      iVar11 = *(int *)&this->field_0x58;
      if (iVar11 == *(int *)puVar4) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)puVar2,(int *)puVar4);
      }
      *(int *)&this->field_0x58 = iVar11 + 1;
      *(undefined4 *)(*(longlong *)puVar2 + (longlong)iVar11 * 4) = *(undefined4 *)puVar5;
      return this;
    }
    local_70 = *(int *)pFVar16;
    uStack_6c = *(undefined4 *)&pFVar16->field_0x4;
    uStack_68 = *(undefined4 *)&pFVar16->field_0x8;
    uStack_64 = *(undefined4 *)&pFVar16->field_0xc;
    local_58 = *(undefined4 *)&pFVar16->field_0x18;
    local_60 = *(undefined8 *)&pFVar16->field_0x10;
    if (local_res20 == '\0') {
LAB_14caca780:
      if ((*(undefined1 **)puVar2 <= puVar5) &&
         (puVar5 < *(undefined1 **)puVar2 + (longlong)*(int *)puVar4 * 4)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FStaticMeshLODResourcesMeshSurfaceAdapter *)(*pcVar6)();
          return pFVar14;
        }
      }
      iVar11 = *(int *)&this->field_0x58;
      if (iVar11 == *(int *)puVar4) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)puVar2,(int *)puVar4);
      }
      *(int *)&this->field_0x58 = iVar11 + 1;
      *(undefined4 *)(*(longlong *)puVar2 + (longlong)iVar11 * 4) = *(undefined4 *)puVar5;
      *(int *)puVar5 = *(int *)puVar5 + *(int *)&pFVar16->field_0x8;
      local_90 = pFVar16;
      if ((*(FStaticMeshSectionArray ***)puVar1 <= &local_90) &&
         (&local_90 < *(FStaticMeshSectionArray ***)puVar1 + *(int *)puVar3)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FStaticMeshLODResourcesMeshSurfaceAdapter *)(*pcVar6)();
          return pFVar14;
        }
      }
      iVar11 = *(int *)&this->field_0x48;
      if (iVar11 == *(int *)puVar3) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)puVar1,(int *)puVar3);
      }
      *(int *)&this->field_0x48 = iVar11 + 1;
      *(FStaticMeshSectionArray **)(*(longlong *)puVar1 + (longlong)iVar11 * 8) = local_90;
    }
    else {
      pUVar12 = UStaticMesh::GetMaterial(local_res18,local_70);
      if (pUVar12 == (UMaterialInterface *)0x0) {
LAB_14caca776:
        bVar10 = false;
      }
      else {
        local_88 = 0;
        uStack_80 = 0;
        lVar13 = (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,&local_88);
        if ((lVar13 == 0) || (*(char *)(lVar13 + 0x148) != '\0')) goto LAB_14caca776;
        bVar10 = true;
      }
      if (bVar10) goto LAB_14caca780;
    }
    uVar15 = (ulonglong)uVar17;
    pFVar16 = (FStaticMeshSectionArray *)&pFVar16->field_0x1c;
  } while( true );
}

