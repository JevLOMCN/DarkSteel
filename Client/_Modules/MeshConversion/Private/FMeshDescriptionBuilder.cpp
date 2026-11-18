// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshConversion
// Functions: 28

// AppendInstance @ 1443ca090

FVertexInstanceID __thiscall
FMeshDescriptionBuilder::AppendInstance(FMeshDescriptionBuilder *this,FVertexID *param_1)

{
  FVertexID FVar1;
  FMeshDescription *this_00;
  FVertexInstanceID FVar2;
  FMeshElementContainer *this_01;
  FVertexID *in_R8;
  
  this_00 = this->MeshDescription;
  FVar1 = *in_R8;
  this_01 = FMeshElementChannels::Get(this_00->VertexInstanceElements,0);
  FVar2 = (FVertexInstanceID)FMeshElementContainer::Add(this_01);
  *param_1 = (FVertexID)FVar2;
  FMeshDescription::CreateVertexInstance_Internal(this_00,FVar2,FVar1);
  return SUB84(param_1,0);
}

// AppendPolygon @ 1443ca0f0

FPolygonID __thiscall
FMeshDescriptionBuilder::AppendPolygon
          (FMeshDescriptionBuilder *this,TArray<FVertexID,TSizedDefaultAllocator<32>_> *param_1,
          FPolygonGroupID *param_2)

{
  FPolygonGroupID FVar1;
  FVertexID FVar2;
  FMeshDescription *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FPolygonID FVar7;
  int iVar8;
  FMeshElementContainer *pFVar9;
  longlong lVar10;
  uint uVar11;
  FPolygonGroupID *in_R9;
  FVertexInstanceID local_78 [2];
  ForAnyElementType local_70;
  undefined8 local_68;
  FVertexInstanceID *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FVertexInstanceID_const_,int> local_48;
  
  FVar1 = param_2[2];
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  if ((int)FVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)FVar1);
  }
  if (0 < (int)FVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)FVar1,&local_70,0,(int *)((longlong)&local_68 + 4));
  }
  uVar11 = 0;
  if (0 < (int)FVar1) {
    lVar10 = 0;
    do {
      pFVar3 = this->MeshDescription;
      uVar6 = 0;
      if ((int)uVar11 < (int)param_2[2]) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar7 = (FPolygonID)(*pcVar4)();
        return FVar7;
      }
      FVar2 = *(FVertexID *)(*(longlong *)param_2 + lVar10 * 4);
      pFVar9 = FMeshElementChannels::Get(pFVar3->VertexInstanceElements,0);
      local_78[0] = (FVertexInstanceID)FMeshElementContainer::Add(pFVar9);
      FMeshDescription::CreateVertexInstance_Internal(pFVar3,local_78[0],FVar2);
      if (((local_70.Data <= local_78) &&
          (local_78 < (FVertexInstanceID *)(local_70.Data + (longlong)local_68._4_4_ * 4))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar7 = (FPolygonID)(*pcVar4)();
        return FVar7;
      }
      iVar8 = (int)local_68;
      if ((int)local_68 == local_68._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_70,(int *)((longlong)&local_68 + 4));
      }
      uVar11 = uVar11 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar8 + 1);
      lVar10 = lVar10 + 1;
      *(FVertexInstanceID *)(local_70.Data + (longlong)iVar8 * 4) = local_78[0];
    } while (lVar10 < (int)FVar1);
  }
  iVar8 = (int)local_68;
  pFVar3 = this->MeshDescription;
  local_58 = (FVertexInstanceID *)local_70.Data;
  if (((int)local_68 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar7 = (FPolygonID)(*pcVar4)();
    return FVar7;
  }
  iStack_50 = iVar8;
  FVar1 = *in_R9;
  pFVar9 = FMeshElementChannels::Get(pFVar3->PolygonElements,0);
  FVar7 = (FPolygonID)FMeshElementContainer::Add(pFVar9);
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iStack_50;
  local_48.DataPtr = local_58;
  *(FPolygonID *)&(param_1->AllocatorInstance).Data = FVar7;
  FMeshDescription::CreatePolygon_Internal
            (pFVar3,FVar7,FVar1,&local_48,(TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0);
  if ((FVertexInstanceID *)local_70.Data != (FVertexInstanceID *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return SUB84(param_1,0);
}

// AppendPolygonGroup @ 1443ca360

FPolygonGroupID __thiscall
FMeshDescriptionBuilder::AppendPolygonGroup(FMeshDescriptionBuilder *this,FName param_1)

{
  TMeshAttributeArraySet<FName> *this_00;
  int iVar1;
  FMeshElementContainer *this_01;
  TMeshAttributeArrayBase<FName> *this_02;
  FName *pFVar2;
  FName in_R8;
  
  this_01 = FMeshElementChannels::Get(this->MeshDescription->PolygonGroupElements,0);
  iVar1 = FMeshElementContainer::Add(this_01);
  this_00 = (TMeshAttributeArraySet<FName> *)(this->GroupMaterialSlotNames).ArrayPtr;
  *(int *)param_1 = iVar1;
  this_02 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_00,0);
  pFVar2 = TMeshAttributeArrayBase<FName>::GetElementBase(this_02,iVar1);
  *pFVar2 = in_R8;
  return (FPolygonGroupID)param_1.ComparisonIndex.Value;
}

// AppendTriangle @ 1443ca3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTriangleID __thiscall
FMeshDescriptionBuilder::AppendTriangle
          (FMeshDescriptionBuilder *this,FVertexID *param_1,FVertexID *param_2,FVertexID *param_3,
          FPolygonGroupID *param_4)

{
  FVertexID FVar1;
  FMeshDescription *pFVar2;
  FVertexInstanceID FVar3;
  FMeshElementContainer *pFVar4;
  undefined1 auStackY_98 [32];
  FVertexInstanceID local_68;
  FVertexInstanceID local_64;
  FVertexInstanceID local_60 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar2 = this->MeshDescription;
  FVar1 = *param_2;
  pFVar4 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  FVar3 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar4);
  FMeshDescription::CreateVertexInstance_Internal(pFVar2,FVar3,FVar1);
  pFVar2 = this->MeshDescription;
  FVar1 = *param_3;
  local_68 = FVar3;
  pFVar4 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  FVar3 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar4);
  FMeshDescription::CreateVertexInstance_Internal(pFVar2,FVar3,FVar1);
  pFVar2 = this->MeshDescription;
  FVar1 = *(FVertexID *)param_4;
  local_64 = FVar3;
  pFVar4 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  FVar3 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar4);
  FMeshDescription::CreateVertexInstance_Internal(pFVar2,FVar3,FVar1);
  local_60[0] = FVar3;
  AppendTriangle(this,(FVertexInstanceID *)param_1,&local_68,&local_64,(FPolygonGroupID *)local_60);
  return SUB84(param_1,0);
}

// AppendTriangle @ 1443ca4f0

FTriangleID __thiscall
FMeshDescriptionBuilder::AppendTriangle
          (FMeshDescriptionBuilder *this,FVertexInstanceID *param_1,FVertexInstanceID *param_2,
          FVertexInstanceID *param_3,FPolygonGroupID *param_4)

{
  FPolygonGroupID FVar1;
  FMeshDescription *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FTriangleID FVar5;
  int iVar6;
  FMeshElementContainer *this_01;
  FPolygonGroupID *in_stack_00000030;
  ForAnyElementType local_48;
  undefined8 local_40;
  FVertexInstanceID *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FVertexInstanceID_const_,int> local_28;
  
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_48,(int *)((longlong)&local_40 + 4));
  iVar6 = iVar4 + 1;
  *(FVertexInstanceID *)(local_48.Data + (longlong)iVar4 * 4) = *param_2;
  local_40._0_4_ = iVar6;
  if (((local_48.Data <= param_3) &&
      (param_3 < (FVertexInstanceID *)(local_48.Data + (longlong)local_40._4_4_ * 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar5 = (FTriangleID)(*pcVar2)();
    return FVar5;
  }
  if ((int)local_40 == local_40._4_4_) {
    local_40._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&local_48,(int *)((longlong)&local_40 + 4));
  }
  iVar6 = (int)local_40 + 1;
  *(FVertexInstanceID *)(local_48.Data + (longlong)(int)local_40 * 4) = *param_3;
  local_40._0_4_ = iVar6;
  if (((local_48.Data <= param_4) &&
      (param_4 < (FPolygonGroupID *)(local_48.Data + (longlong)local_40._4_4_ * 4))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar5 = (FTriangleID)(*pcVar2)();
    return FVar5;
  }
  iVar6 = (int)local_40;
  if ((int)local_40 == local_40._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_48,(int *)((longlong)&local_40 + 4));
  }
  iVar4 = iVar6 + 1;
  local_40 = CONCAT44(local_40._4_4_,iVar4);
  *(FPolygonGroupID *)(local_48.Data + (longlong)iVar6 * 4) = *param_4;
  this_00 = this->MeshDescription;
  local_38 = (FVertexInstanceID *)local_48.Data;
  if ((iVar4 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar5 = (FTriangleID)(*pcVar2)();
    return FVar5;
  }
  FVar1 = *in_stack_00000030;
  iStack_30 = iVar4;
  this_01 = FMeshElementChannels::Get(this_00->TriangleElements,0);
  FVar5 = (FTriangleID)FMeshElementContainer::Add(this_01);
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iStack_30;
  local_28.DataPtr = local_38;
  *param_1 = (FVertexInstanceID)FVar5;
  FMeshDescription::CreateTriangle_Internal
            (this_00,FVar5,FVar1,&local_28,(TArray<FEdgeID,TSizedDefaultAllocator<32>_> *)0x0);
  if ((FVertexInstanceID *)local_48.Data != (FVertexInstanceID *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return SUB84(param_1,0);
}

// AppendTriangle @ 1443ca720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTriangleID __thiscall
FMeshDescriptionBuilder::AppendTriangle
          (FMeshDescriptionBuilder *this,FVertexID *param_1,FPolygonGroupID *param_2)

{
  FVertexID FVar1;
  FMeshDescription *pFVar2;
  FVertexInstanceID FVar3;
  FMeshElementContainer *pFVar4;
  undefined1 auStackY_88 [32];
  FVertexInstanceID local_58;
  FVertexInstanceID local_54;
  FVertexInstanceID local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pFVar2 = this->MeshDescription;
  FVar1 = *(FVertexID *)param_2;
  pFVar4 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  FVar3 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar4);
  FMeshDescription::CreateVertexInstance_Internal(pFVar2,FVar3,FVar1);
  pFVar2 = this->MeshDescription;
  FVar1 = *(FVertexID *)(param_2 + 1);
  local_58 = FVar3;
  pFVar4 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  FVar3 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar4);
  FMeshDescription::CreateVertexInstance_Internal(pFVar2,FVar3,FVar1);
  pFVar2 = this->MeshDescription;
  FVar1 = *(FVertexID *)(param_2 + 2);
  local_54 = FVar3;
  pFVar4 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  FVar3 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar4);
  FMeshDescription::CreateVertexInstance_Internal(pFVar2,FVar3,FVar1);
  local_50[0] = FVar3;
  AppendTriangle(this,(FVertexInstanceID *)param_1,&local_58,&local_54,(FPolygonGroupID *)local_50);
  return SUB84(param_1,0);
}

// AppendUV @ 1443ca820

FUVID __thiscall
FMeshDescriptionBuilder::AppendUV
          (FMeshDescriptionBuilder *this,TVector2<double> *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar3;
  TVector2<float> TVar4;
  bool bVar5;
  uint uVar6;
  FUVID FVar7;
  int iVar8;
  FMeshElementContainer *this_01;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_02;
  TVector2<float>_u_0 *pTVar9;
  undefined4 in_register_00000084;
  uint in_R9D;
  
  uVar6 = 0;
  if ((int)in_R9D < (this->UVCoordinateLayers).ArrayNum) {
    uVar6 = ~in_R9D >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      FVar7 = (FUVID)(*pcVar3)();
      return FVar7;
    }
  }
  this_00 = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)
             ((this->UVCoordinateLayers).AllocatorInstance.Data + (longlong)(int)in_R9D * 8);
  this_01 = FMeshElementChannels::Get(this->MeshDescription->UVElements,in_R9D);
  iVar8 = FMeshElementContainer::Add(this_01);
  dVar1 = *(double *)CONCAT44(in_register_00000084,param_2);
  dVar2 = ((double *)CONCAT44(in_register_00000084,param_2))[1];
  *(int *)&param_1->field0_0x0 = iVar8;
  this_02 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(this_00,0);
  pTVar9 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_02,iVar8)->
            field0_0x0;
  TVar4.field0_0x0._s_0.Y = (float)dVar2;
  TVar4.field0_0x0._s_0.X = (float)dVar1;
  *pTVar9 = TVar4.field0_0x0;
  return SUB84(param_1,0);
}

// AppendUVTriangle @ 1443ca910

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMeshDescriptionBuilder::AppendUVTriangle
          (FMeshDescriptionBuilder *this,FTriangleID *param_1,FUVID param_2,FUVID param_3,
          FUVID param_4,int param_5)

{
  int iVar1;
  FVertexInstanceID FVar2;
  int iVar3;
  FUVID *pFVar4;
  FMeshDescription *this_00;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar5;
  FVertexInstanceID *pFVar6;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar7;
  code *pcVar8;
  TVector2<float>_u_0_s_0 TVar9;
  bool bVar10;
  uint uVar11;
  TArrayView<FVertexInstanceID,int> *pTVar12;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar13;
  TVector2<float>_u_0_s_0 *pTVar14;
  TVector2<float>_u_0 *pTVar15;
  undefined4 uStack_4c;
  TArrayView<FUVID_const_,int> local_48;
  TArrayView<FVertexInstanceID,int> local_38;
  
  TArray<FUVID,TSizedDefaultAllocator<32>_>::SetNum(&this->TempUVBuffer,3,No);
  if ((this->TempUVBuffer).ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(FUVID *)(this->TempUVBuffer).AllocatorInstance.Data = param_2;
  if ((this->TempUVBuffer).ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(FUVID *)((this->TempUVBuffer).AllocatorInstance.Data + 4) = param_3;
  if ((this->TempUVBuffer).ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(FUVID *)((this->TempUVBuffer).AllocatorInstance.Data + 8) = param_4;
  pFVar4 = (FUVID *)(this->TempUVBuffer).AllocatorInstance.Data;
  iVar1 = (this->TempUVBuffer).ArrayNum;
  this_00 = this->MeshDescription;
  if (iVar1 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar1;
  local_48.DataPtr = pFVar4;
  FMeshDescription::SetTriangleUVIndices(this_00,*param_1,&local_48,param_5);
  uVar11 = 0;
  if (param_5 < (this->UVCoordinateLayers).ArrayNum) {
    uVar11 = (uint)~param_5 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar5 = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)
            ((this->UVCoordinateLayers).AllocatorInstance.Data + (longlong)param_5 * 8);
  pTVar12 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                      (&this->MeshDescription->TriangleVertexInstances,&local_38,(int)*param_1);
  iVar1 = pTVar12->ArrayNum;
  pFVar6 = pTVar12->DataPtr;
  if (iVar1 < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar2 = *pFVar6;
  if ((this->TempUVBuffer).ArrayNum < 1) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar3 = *(int *)(this->TempUVBuffer).AllocatorInstance.Data;
  pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar5,0);
  pTVar14 = (TVector2<float>_u_0_s_0 *)
            TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar13,iVar3);
  pTVar7 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(this->InstanceUVs).ArrayPtr;
  TVar9 = *pTVar14;
  if (pTVar7 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    if (param_5 < (pTVar7->ArrayForChannels).ArrayNum) {
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (pTVar7,param_5);
      pTVar15 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar2)->field0_0x0;
      pTVar15->_s_0 = TVar9;
    }
    else {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6053602128486727879>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                          ,199,"UVLayerIndex < InstanceUVs.GetNumChannels()");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  if (iVar1 < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar2 = pFVar6[1];
  if ((this->TempUVBuffer).ArrayNum < 2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar3 = *(int *)((this->TempUVBuffer).AllocatorInstance.Data + 4);
  pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar5,0);
  pTVar14 = (TVector2<float>_u_0_s_0 *)
            TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar13,iVar3);
  pTVar7 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(this->InstanceUVs).ArrayPtr;
  TVar9 = *pTVar14;
  if (pTVar7 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    if (param_5 < (pTVar7->ArrayForChannels).ArrayNum) {
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (pTVar7,param_5);
      pTVar15 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar2)->field0_0x0;
      pTVar15->_s_0 = TVar9;
    }
    else {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6053602128486727879>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                          ,199,"UVLayerIndex < InstanceUVs.GetNumChannels()");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  if (iVar1 < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar2 = pFVar6[2];
  if ((this->TempUVBuffer).ArrayNum < 3) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar1 = *(int *)((this->TempUVBuffer).AllocatorInstance.Data + 8);
  pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar5,0);
  pTVar14 = (TVector2<float>_u_0_s_0 *)
            TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar13,iVar1);
  pTVar5 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(this->InstanceUVs).ArrayPtr;
  TVar9 = *pTVar14;
  if (pTVar5 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    if (param_5 < (pTVar5->ArrayForChannels).ArrayNum) {
      pTVar13 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (pTVar5,param_5);
      pTVar15 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (pTVar13,(int)FVar2)->field0_0x0;
      pTVar15->_s_0 = TVar9;
    }
    else {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6053602128486727879>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                          ,199,"UVLayerIndex < InstanceUVs.GetNumChannels()");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  return;
}

// AppendVertex @ 1443cae70

FVertexID __thiscall
FMeshDescriptionBuilder::AppendVertex(FMeshDescriptionBuilder *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  int iVar4;
  FMeshElementContainer *this_01;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_02;
  TVector<float> *pTVar5;
  double *in_R8;
  
  this_01 = FMeshElementChannels::Get(this->MeshDescription->VertexElements,0);
  iVar4 = FMeshElementContainer::Add(this_01);
  dVar1 = *in_R8;
  dVar2 = in_R8[1];
  dVar3 = in_R8[2];
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(this->VertexPositions).ArrayPtr;
  *(int *)&param_1->field0_0x0 = iVar4;
  this_02 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
  pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_02,iVar4);
  (pTVar5->field0_0x0)._s_0.X = (float)dVar1;
  (pTVar5->field0_0x0)._s_0.Y = (float)dVar2;
  (pTVar5->field0_0x0)._s_0.Z = (float)dVar3;
  return SUB84(param_1,0);
}

// AppendVertexWithId @ 1443caf30

FVertexID __thiscall
FMeshDescriptionBuilder::AppendVertexWithId
          (FMeshDescriptionBuilder *this,int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FMeshDescription *pFVar5;
  FMeshElementContainer *this_00;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar6;
  undefined4 in_register_00000014;
  double *in_R9;
  
  pFVar5 = this->MeshDescription;
  *(int *)CONCAT44(in_register_00000014,param_1) = (int)param_2;
  this_00 = FMeshElementChannels::Get(pFVar5->VertexElements,0);
  FMeshElementContainer::Insert(this_00,(int)param_2);
  dVar1 = *in_R9;
  dVar2 = in_R9[1];
  dVar3 = in_R9[2];
  iVar4 = *(int *)CONCAT44(in_register_00000014,param_1);
  this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar6 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,iVar4);
  (pTVar6->field0_0x0)._s_0.X = (float)dVar1;
  (pTVar6->field0_0x0)._s_0.Y = (float)dVar2;
  (pTVar6->field0_0x0)._s_0.Z = (float)dVar3;
  return (FVertexID)param_1;
}

// ComputeBoundingBox @ 1443cc080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FMeshDescriptionBuilder::ComputeBoundingBox
          (FMeshDescriptionBuilder *this,TBox<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TElementIDs local_res8;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  TConstIterator local_a0 [4];
  
  uVar2 = _UNK_150a9e6b8;
  uVar1 = ___xmm_ff7fffff7f7fffff7f7fffff7f7fffff;
  fVar6 = __real_ff7fffff;
  local_res8.Array = &FMeshElementChannels::Get(this->MeshDescription->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_res8,(TConstIterator *)&local_c0);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_res8,local_a0);
  fStack_cc = (float)((ulonglong)uVar2 >> 0x20);
  fStack_d0 = (float)uVar2;
  fStack_d4 = (float)((ulonglong)uVar1 >> 0x20);
  local_d8 = (float)uVar1;
  fVar7 = fVar6;
  fVar8 = fStack_d4;
  while( true ) {
    if ((local_c0.CurrentBitIndex == local_a0[0].Iterator.CurrentBitIndex) &&
       (local_c0.Array == local_a0[0].Iterator.Array)) break;
    iVar4 = -1;
    if (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits) {
      iVar4 = local_c0.CurrentBitIndex;
    }
    this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                         (this->VertexPositions).ArrayPtr,0);
    pTVar3 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar4);
    fVar5 = (float)*(undefined8 *)&pTVar3->field0_0x0;
    if (fVar5 < local_d8) {
      local_d8 = fVar5;
    }
    if (fStack_cc < fVar5) {
      fStack_cc = fVar5;
    }
    fStack_d4 = (float)((ulonglong)*(undefined8 *)&pTVar3->field0_0x0 >> 0x20);
    if (fStack_d4 < fVar8) {
      fVar8 = fStack_d4;
    }
    if (fVar7 < fStack_d4) {
      fVar7 = fStack_d4;
    }
    fVar5 = (pTVar3->field0_0x0)._s_0.Z;
    if (fVar5 < fStack_d0) {
      fStack_d0 = fVar5;
    }
    if (fVar6 < fVar5) {
      fVar6 = fVar5;
    }
    local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)local_d8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)fVar8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)fStack_d0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)fStack_cc;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)fVar7;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)fVar6;
  if ((fStack_cc < local_d8) || ((fVar7 < fVar8 || (fVar6 < fStack_d0)))) {
    __return_storage_ptr__->IsValid = '\0';
  }
  else {
    __return_storage_ptr__->IsValid = '\x01';
  }
  return __return_storage_ptr__;
}

// EnablePolyGroups @ 1443d5b10

void __thiscall FMeshDescriptionBuilder::EnablePolyGroups(FMeshDescriptionBuilder *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMeshElementContainer *pFVar4;
  FAttributesSetEntry *pFVar5;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  pFVar4 = FMeshElementChannels::Get(this->MeshDescription->PolygonElements,0);
  pFVar5 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar4->Attributes,ExtendedMeshAttribute::PolyTriGroups);
  if (((pFVar5 == (FAttributesSetEntry *)0x0) || (pFVar1 = (pFVar5->Ptr).Ptr, pFVar1->Type != 4)) ||
     (pFVar1->Extent != 1)) {
    (this->PolyGroups).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  }
  else {
    (this->PolyGroups).ArrayPtr = pFVar1;
    if (pFVar1 != (FMeshAttributeArraySetBase *)0x0) {
      return;
    }
  }
  pFVar4 = FMeshElementChannels::Get(this->MeshDescription->PolygonElements,0);
  local_res8[0] = 0;
  FAttributesSetBase::RegisterAttribute<int,0>
            (&pFVar4->Attributes,(FName)local_res10,
             ExtendedMeshAttribute::PolyTriGroups.ComparisonIndex.Value.Value,(int *)&DAT_00000001,
             (EMeshAttributeFlags)local_res8);
  pFVar4 = FMeshElementChannels::Get(this->MeshDescription->PolygonElements,0);
  pFVar5 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar4->Attributes,ExtendedMeshAttribute::PolyTriGroups);
  if (((pFVar5 == (FAttributesSetEntry *)0x0) || (pFVar1 = (pFVar5->Ptr).Ptr, pFVar1->Type != 4)) ||
     (pFVar1->Extent != 1)) {
    (this->PolyGroups).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  }
  else {
    (this->PolyGroups).ArrayPtr = pFVar1;
    if (pFVar1 != (FMeshAttributeArraySetBase *)0x0) {
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PolyGroups.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                     ,0x38,L"");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetPosition @ 1443d60a0

TVector<double> * __thiscall
FMeshDescriptionBuilder::GetPosition
          (FMeshDescriptionBuilder *this,TVector<double> *__return_storage_ptr__,FVertexID *param_1)

{
  float fVar1;
  undefined8 uVar2;
  FVertexID FVar3;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar4;
  
  FVar3 = *param_1;
  this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar4 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,(int)FVar3);
  uVar2 = *(undefined8 *)&pTVar4->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar2;
  fVar1 = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar2 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar1;
  return __return_storage_ptr__;
}

// GetPosition @ 1443d6110

TVector<double> * __thiscall
FMeshDescriptionBuilder::GetPosition
          (FMeshDescriptionBuilder *this,TVector<double> *__return_storage_ptr__,
          FVertexInstanceID *param_1)

{
  float fVar1;
  undefined8 uVar2;
  FVertexInstanceID FVar3;
  FVertexID FVar4;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar5;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar6;
  
  FVar3 = *param_1;
  this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FVertexID> *)
                       (this->MeshDescription->VertexInstanceVertices).ArrayPtr,0);
  pFVar5 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,(int)FVar3);
  FVar4 = *pFVar5;
  this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar6 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,(int)FVar4);
  uVar2 = *(undefined8 *)&pTVar6->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar2;
  fVar1 = (pTVar6->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar2 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)fVar1;
  return __return_storage_ptr__;
}

// ReserveNewUVs @ 1443d8300

void __thiscall
FMeshDescriptionBuilder::ReserveNewUVs(FMeshDescriptionBuilder *this,int param_1,int param_2)

{
  FMeshDescription *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar4;
  
  if ((this->MeshDescription->UVElements->Channels).ArrayNum <= param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshDescription->GetNumUVElementChannels() > UVLayerIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                       ,0x76,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->MeshDescription;
  this_00 = FMeshElementChannels::Get(pFVar1->UVElements,param_2);
  pFVar4 = FMeshElementChannels::Get(pFVar1->UVElements,param_2);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar4->BitArray).NumBits - pFVar4->NumHoles) + param_1);
  return;
}

// ReserveNewVertices @ 1443d83a0

void __thiscall
FMeshDescriptionBuilder::ReserveNewVertices(FMeshDescriptionBuilder *this,int param_1)

{
  FMeshDescription *pFVar1;
  FMeshElementContainer *this_00;
  FMeshElementContainer *pFVar2;
  
  pFVar1 = this->MeshDescription;
  this_00 = FMeshElementChannels::Get(pFVar1->VertexElements,0);
  pFVar2 = FMeshElementChannels::Get(pFVar1->VertexElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&this_00->BitArray,((pFVar2->BitArray).NumBits - pFVar2->NumHoles) + param_1);
  return;
}

// ResumeMeshDescriptionIndexing @ 1443d8400

void __thiscall
FMeshDescriptionBuilder::ResumeMeshDescriptionIndexing(FMeshDescriptionBuilder *this)

{
  FMeshDescription *pFVar1;
  
  pFVar1 = this->MeshDescription;
  (pFVar1->VertexInstanceToTriangles).bSuspended = false;
  (pFVar1->VertexInstanceToTriangles).bEverythingStale = true;
  pFVar1 = this->MeshDescription;
  (pFVar1->EdgeToTriangles).bSuspended = false;
  (pFVar1->EdgeToTriangles).bEverythingStale = true;
  pFVar1 = this->MeshDescription;
  (pFVar1->PolygonToTriangles).bSuspended = false;
  (pFVar1->PolygonToTriangles).bEverythingStale = true;
  pFVar1 = this->MeshDescription;
  (pFVar1->PolygonGroupToPolygons).bSuspended = false;
  (pFVar1->PolygonGroupToPolygons).bEverythingStale = true;
  (pFVar1->PolygonGroupToTriangles).bSuspended = false;
  (pFVar1->PolygonGroupToTriangles).bEverythingStale = true;
  pFVar1 = this->MeshDescription;
  (pFVar1->UVToTriangles).bSuspended = false;
  (pFVar1->UVToTriangles).bEverythingStale = true;
  return;
}

// SetAllEdgesHardness @ 1443d8450

void __thiscall
FMeshDescriptionBuilder::SetAllEdgesHardness(FMeshDescriptionBuilder *this,bool param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  FMeshElementContainer *pFVar6;
  FAttributesSetEntry *pFVar7;
  ForElementType<unsigned_int> FVar8;
  TMeshAttributeArrayBase<bool> *this_00;
  bool *pbVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  TMeshAttributeArraySet<bool> *pTVar13;
  TMeshAttributeArraySet<bool> *this_01;
  TMeshAttributeArraySet<bool> *pTVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_68;
  uint local_38;
  uint uStack_34;
  
  pFVar6 = FMeshElementChannels::Get(this->MeshDescription->EdgeElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::Edge::IsHard);
  pTVar13 = (TMeshAttributeArraySet<bool> *)0x0;
  if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
      (this_01 = (TMeshAttributeArraySet<bool> *)(pFVar7->Ptr).Ptr,
      *(uint *)&this_01->_padding_ != 5)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1)) {
    this_01 = pTVar13;
  }
  FVar8 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(this->MeshDescription->EdgeElements,0);
  local_88 = 0;
  uStack_84 = 1;
  uVar12 = *(int *)((longlong)FVar8 + 0x18);
  uStack_74 = 0;
  uStack_70 = 0;
  if (uVar12 != 0) {
    FVar15 = FVar8;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    }
    uVar16 = *(uint *)FVar15;
    pTVar14 = pTVar13;
    while (uVar16 == 0) {
      iVar11 = (int)pTVar13;
      uStack_70 = (int)pTVar14 + 0x20;
      pTVar14 = (TMeshAttributeArraySet<bool> *)(ulonglong)uStack_70;
      local_88 = iVar11 + 1;
      pTVar13 = (TMeshAttributeArraySet<bool> *)(ulonglong)local_88;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
      goto LAB_1443d855d;
      uVar16 = ((uint *)((longlong)FVar15 + 4))[iVar11];
    }
    uStack_84 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uStack_74 = (int)lVar10 + -1 + uStack_70;
    if ((int)uVar12 < (int)uStack_74) {
LAB_1443d855d:
      uStack_74 = uVar12;
    }
  }
  local_68._padding_ = CONCAT44(uStack_84,local_88);
  local_68.CurrentBitIndex = uStack_74;
  local_68.UnvisitedBitMask = 0xffffffff;
  local_68._28_4_ = uStack_6c;
  local_68.BaseBitIndex = uStack_70;
  iVar11 = (int)uVar12 >> 5;
  uVar16 = -1 << ((byte)uVar12 & 0x1f);
  uVar17 = uVar12 & 0xffffffe0;
  local_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar8;
  local_38 = uVar16;
  uStack_34 = uVar12;
  if (((int)uVar12 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = *(uint *)((longlong)FVar8 + 0x18);
  uVar4 = uStack_34;
  if (uVar12 != uVar2) {
    FVar15 = FVar8;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    }
    uVar16 = uVar16 & *(uint *)((longlong)FVar15 + (longlong)iVar11 * 4);
    while (uVar16 == 0) {
      lVar10 = (longlong)iVar11;
      uVar17 = uVar17 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1443d8635;
      uVar16 = *(uint *)((longlong)FVar15 + 4 + lVar10 * 4);
      local_38 = 0xffffffff;
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uStack_34 = (int)lVar10 + -1 + uVar17;
    uVar4 = uStack_34;
    if ((int)uVar2 < (int)uStack_34) {
LAB_1443d8635:
      uStack_34 = uVar2;
      uVar4 = uVar2;
    }
  }
  while ((local_68.CurrentBitIndex != uVar4 ||
         ((ForElementType<unsigned_int>)local_68.Array != FVar8))) {
    uVar12 = 0xffffffff;
    if (local_68.CurrentBitIndex < *(int *)((longlong)local_68.Array + 0x18)) {
      uVar12 = local_68.CurrentBitIndex;
    }
    this_00 = TMeshAttributeArraySet<bool>::GetArrayForChannel(this_01,0);
    pbVar9 = TMeshAttributeArrayBase<bool>::GetElementBase(this_00,uVar12);
    *pbVar9 = param_1;
    local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_68);
  }
  return;
}

// SetInstanceColor @ 1443d86c0

void __thiscall
FMeshDescriptionBuilder::SetInstanceColor
          (FMeshDescriptionBuilder *this,FVertexInstanceID *param_1,TVector4<float> *param_2)

{
  FVertexInstanceID FVar1;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_01;
  TVector4<float> *pTVar4;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)(this->InstanceColors).ArrayPtr;
  if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
    uVar2 = *(undefined8 *)&param_2->field0_0x0;
    uVar3 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    FVar1 = *param_1;
    this_01 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel(this_00,0);
    pTVar4 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase(this_01,(int)FVar1)
    ;
    *(undefined8 *)&pTVar4->field0_0x0 = uVar2;
    *(undefined8 *)((longlong)&pTVar4->field0_0x0 + 8) = uVar3;
  }
  return;
}

// SetInstanceNormal @ 1443d8710

void __thiscall
FMeshDescriptionBuilder::SetInstanceNormal
          (FMeshDescriptionBuilder *this,FVertexInstanceID *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FVertexInstanceID FVar4;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  TVector<float> *pTVar5;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(this->InstanceNormals).ArrayPtr;
  if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    FVar4 = *param_1;
    dVar1 = (param_2->field0_0x0)._s_0.X;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar3 = (param_2->field0_0x0)._s_0.Z;
    this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
    pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,(int)FVar4);
    (pTVar5->field0_0x0)._s_0.X = (float)dVar1;
    (pTVar5->field0_0x0)._s_0.Y = (float)dVar2;
    (pTVar5->field0_0x0)._s_0.Z = (float)dVar3;
  }
  return;
}

// SetInstanceTangentSpace @ 1443d87a0

void __thiscall
FMeshDescriptionBuilder::SetInstanceTangentSpace
          (FMeshDescriptionBuilder *this,FVertexInstanceID *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FVertexInstanceID FVar4;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  TMeshAttributeArraySet<float> *this_01;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_02;
  TVector<float> *pTVar5;
  TMeshAttributeArrayBase<float> *this_03;
  float *pfVar6;
  
  SetInstanceNormal(this,param_1,param_2);
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(this->InstanceTangents).ArrayPtr;
  if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    dVar3 = (param_3->field0_0x0)._s_0.Z;
    FVar4 = *param_1;
    this_02 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
    pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_02,(int)FVar4);
    (pTVar5->field0_0x0)._s_0.X = (float)dVar1;
    (pTVar5->field0_0x0)._s_0.Y = (float)dVar2;
    (pTVar5->field0_0x0)._s_0.Z = (float)dVar3;
  }
  this_01 = (TMeshAttributeArraySet<float> *)(this->InstanceBiTangentSign).ArrayPtr;
  if (this_01 != (TMeshAttributeArraySet<float> *)0x0) {
    FVar4 = *param_1;
    this_03 = TMeshAttributeArraySet<float>::GetArrayForChannel(this_01,0);
    pfVar6 = TMeshAttributeArrayBase<float>::GetElementBase(this_03,(int)FVar4);
    *pfVar6 = param_4;
  }
  return;
}

// SetInstanceUV @ 1443d8870

void __thiscall
FMeshDescriptionBuilder::SetInstanceUV
          (FMeshDescriptionBuilder *this,FVertexInstanceID *param_1,TVector2<double> *param_2,
          int param_3)

{
  double dVar1;
  double dVar2;
  FVertexInstanceID FVar3;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar4;
  TVector2<float> TVar5;
  bool bVar6;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TVector2<float>_u_0 *pTVar7;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(this->InstanceUVs).ArrayPtr;
  if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    if (param_3 < (this_00->ArrayForChannels).ArrayNum) {
      dVar1 = (param_2->field0_0x0)._s_0.X;
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      FVar3 = *param_1;
      this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (this_00,param_3);
      pTVar7 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                          (this_01,(int)FVar3)->field0_0x0;
      TVar5.field0_0x0._s_0.Y = (float)dVar2;
      TVar5.field0_0x0._s_0.X = (float)dVar1;
      *pTVar7 = TVar5.field0_0x0;
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6053602128486727879>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshConversion\\Private\\MeshDescriptionBuilder.cpp"
                         ,199,"UVLayerIndex < InstanceUVs.GetNumChannels()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// SetMeshDescription @ 1443d8b70

void __thiscall
FMeshDescriptionBuilder::SetMeshDescription(FMeshDescriptionBuilder *this,FMeshDescription *param_1)

{
  FAttributesSetBase *this_00;
  int iVar1;
  FMeshAttributeArraySetBase *pFVar2;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> *pTVar3;
  FName FVar4;
  uint uVar5;
  FMeshElementContainer *pFVar6;
  FAttributesSetEntry *pFVar7;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_01;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar8;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar9;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  FName local_res18;
  FName *local_38;
  FAttributesSetEntry **local_30;
  
  pFVar6 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  pTVar9 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  if ((((pFVar7 == (FAttributesSetEntry *)0x0) || (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type != 2))
      || (pFVar2->Extent != 1)) || (pFVar2 == (FMeshAttributeArraySetBase *)0x0)) {
    pFVar6 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
    local_res18 = MeshAttribute::VertexInstance::TextureCoordinate;
    this_00 = &pFVar6->Attributes;
    pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this_00,MeshAttribute::VertexInstance::TextureCoordinate);
    FVar4 = local_res18;
    if (pFVar7 != (FAttributesSetEntry *)0x0) {
      pFVar2 = (pFVar7->Ptr).Ptr;
      if ((pFVar2->Type == 2) && (pFVar2->Extent == 1)) {
        (**(code **)(pFVar2->_padding_ + 0x70))();
        ((pFVar7->Ptr).Ptr)->Flags = Mandatory|Lerpable;
        goto LAB_1443d8d20;
      }
      local_res8.Key = (FName *)local_res18;
      if (*(int *)&(pFVar6->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar6->Attributes).Map.field_0x34) {
        uVar5 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)this_00,FVar4.Number + uVar5,(FName *)&local_res8);
      }
    }
    iVar1 = (pFVar6->Attributes).NumElements;
    local_res8.Value = (FAttributesSetEntry *)0x0;
    this_01 = ::operator_new(0x48);
    pTVar8 = pTVar9;
    if (this_01 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
      *(undefined4 *)&this_01->_padding_ = 2;
      *(undefined4 *)((longlong)&this_01->_padding_ + 4) = 1;
      *(int *)&this_01->_padding_ = iVar1;
      *(undefined4 *)((longlong)&this_01->_padding_ + 4) = 0x21;
      (this_01->ArrayForChannels).AllocatorInstance.SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
      this_01->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
      (this_01->ArrayForChannels).ArrayNum = 0;
      (this_01->ArrayForChannels).ArrayMax = 1;
      (this_01->DefaultValue).field0_0x0._s_0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(this_01,1);
      pTVar8 = this_01;
    }
    pFVar7 = local_res8.Value;
    if (local_res8.Value != (FAttributesSetEntry *)0x0) {
      pTVar3 = &(local_res8.Value)->Ptr;
      local_res8.Value = (FAttributesSetEntry *)pTVar8;
      (*(code *)pTVar3->Ptr->_padding_)(pFVar7,1);
      pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)local_res8.Value;
    }
    local_res8.Value = (FAttributesSetEntry *)pTVar8;
    local_38 = &local_res18;
    local_30 = &local_res8.Value;
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
              ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_38);
    if ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)local_res8.Value !=
        (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
      (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)();
    }
  }
LAB_1443d8d20:
  this->MeshDescription = param_1;
  pFVar6 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
      (pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar7->Ptr).Ptr,
      (int)pTVar8->_padding_ != 1)) || (*(int *)((longlong)&pTVar8->_padding_ + 4) != 1)) {
    pTVar8 = pTVar9;
  }
  (this->VertexPositions).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar8;
  pFVar6 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
      (pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar7->Ptr).Ptr,
      (int)pTVar8->_padding_ != 2)) || (*(int *)((longlong)&pTVar8->_padding_ + 4) != 1)) {
    pTVar8 = pTVar9;
  }
  (this->InstanceUVs).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar8;
  pFVar6 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
      (pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar7->Ptr).Ptr,
      (int)pTVar8->_padding_ != 1)) || (*(int *)((longlong)&pTVar8->_padding_ + 4) != 1)) {
    pTVar8 = pTVar9;
  }
  (this->InstanceNormals).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar8;
  pFVar6 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
      (pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar7->Ptr).Ptr,
      (int)pTVar8->_padding_ != 1)) || (*(int *)((longlong)&pTVar8->_padding_ + 4) != 1)) {
    pTVar8 = pTVar9;
  }
  (this->InstanceTangents).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar8;
  pFVar6 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
      (pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar7->Ptr).Ptr,
      (int)pTVar8->_padding_ != 3)) || (*(int *)((longlong)&pTVar8->_padding_ + 4) != 1)) {
    pTVar8 = pTVar9;
  }
  (this->InstanceBiTangentSign).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar8;
  pFVar6 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::VertexInstance::Color);
  if (((pFVar7 == (FAttributesSetEntry *)0x0) ||
      (pTVar8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar7->Ptr).Ptr,
      (int)pTVar8->_padding_ != 0)) || (*(int *)((longlong)&pTVar8->_padding_ + 4) != 1)) {
    pTVar8 = pTVar9;
  }
  (this->InstanceColors).ArrayPtr = (FMeshAttributeArraySetBase *)pTVar8;
  pFVar6 = FMeshElementChannels::Get(param_1->PolygonGroupElements,0);
  pFVar7 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar6->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  if (((pFVar7 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar7->Ptr).Ptr, pFVar2->Type == 6)) &&
     (pFVar2->Extent == 1)) {
    (this->GroupMaterialSlotNames).ArrayPtr = pFVar2;
    return;
  }
  (this->GroupMaterialSlotNames).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  return;
}

// SetNumUVLayers @ 1443d9280

void __thiscall FMeshDescriptionBuilder::SetNumUVLayers(FMeshDescriptionBuilder *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FMeshElementContainer *pFVar7;
  FAttributesSetEntry *pFVar8;
  FMeshAttributeArraySetBase *pFVar9;
  uint uVar10;
  longlong lVar11;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(this->InstanceUVs).ArrayPtr;
  if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(this_00,param_1);
  }
  FMeshDescription::SetNumUVChannels(this->MeshDescription,param_1);
  iVar5 = (this->UVCoordinateLayers).ArrayNum;
  piVar1 = &(this->UVCoordinateLayers).ArrayNum;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&(this->UVCoordinateLayers).AllocatorInstance,piVar1,
                       &(this->UVCoordinateLayers).ArrayMax);
    DefaultConstructItems<TMeshAttributesRef<FUVID,UE::Math::TVector2<float>_>,int>
              ((this->UVCoordinateLayers).AllocatorInstance.Data + (longlong)iVar4 * 8,
               param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar10 = iVar5 - param_1;
      if (((int)(uVar10 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (this->UVCoordinateLayers).AllocatorInstance.Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar10) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 8,(longlong)iVar5 << 3);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->UVCoordinateLayers).AllocatorInstance,*piVar1,
                   &(this->UVCoordinateLayers).ArrayMax);
      }
    }
  }
  uVar10 = 0;
  if (0 < param_1) {
    lVar11 = 0;
    do {
      pFVar7 = FMeshElementChannels::Get(this->MeshDescription->UVElements,uVar10);
      pFVar8 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
               ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                       *)&pFVar7->Attributes,MeshAttribute::UV::UVCoordinate);
      if (((pFVar8 == (FAttributesSetEntry *)0x0) || (pFVar9 = (pFVar8->Ptr).Ptr, pFVar9->Type != 2)
          ) || (pFVar9->Extent != 1)) {
        pFVar9 = (FMeshAttributeArraySetBase *)0x0;
      }
      uVar6 = 0;
      if ((int)uVar10 < *piVar1) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar10 = uVar10 + 1;
      *(FMeshAttributeArraySetBase **)((this->UVCoordinateLayers).AllocatorInstance.Data + lVar11) =
           pFVar9;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < param_1);
  }
  return;
}

// SetPolyGroupID @ 1443d9490

void __thiscall
FMeshDescriptionBuilder::SetPolyGroupID
          (FMeshDescriptionBuilder *this,FTriangleID *param_1,int param_2)

{
  TMeshAttributeArrayBase<int> *this_00;
  int *piVar1;
  int local_res18 [4];
  
  FMeshDescription::GetTrianglePolygon(this->MeshDescription,SUB84(local_res18,0));
  this_00 = TMeshAttributeArraySet<int>::GetArrayForChannel
                      ((TMeshAttributeArraySet<int> *)(this->PolyGroups).ArrayPtr,0);
  piVar1 = TMeshAttributeArrayBase<int>::GetElementBase(this_00,local_res18[0]);
  *piVar1 = param_2;
  return;
}

// SetPosition @ 1443d94e0

void __thiscall
FMeshDescriptionBuilder::SetPosition
          (FMeshDescriptionBuilder *this,FVertexID *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FVertexID FVar4;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar5;
  
  FVar4 = *param_1;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar5 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,(int)FVar4);
  (pTVar5->field0_0x0)._s_0.X = (float)dVar1;
  (pTVar5->field0_0x0)._s_0.Y = (float)dVar2;
  (pTVar5->field0_0x0)._s_0.Z = (float)dVar3;
  return;
}

// SuspendMeshDescriptionIndexing @ 1443d9590

void __thiscall
FMeshDescriptionBuilder::SuspendMeshDescriptionIndexing(FMeshDescriptionBuilder *this)

{
  FMeshDescription *pFVar1;
  
  (this->MeshDescription->VertexInstanceToTriangles).bSuspended = true;
  (this->MeshDescription->EdgeToTriangles).bSuspended = true;
  (this->MeshDescription->PolygonToTriangles).bSuspended = true;
  pFVar1 = this->MeshDescription;
  (pFVar1->PolygonGroupToPolygons).bSuspended = true;
  (pFVar1->PolygonGroupToTriangles).bSuspended = true;
  (this->MeshDescription->UVToTriangles).bSuspended = true;
  return;
}

// Translate @ 1443d95d0

void __thiscall
FMeshDescriptionBuilder::Translate(FMeshDescriptionBuilder *this,TVector<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar6;
  TVector<float> *pTVar7;
  int iVar8;
  TElementIDs local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  TConstIterator local_68 [2];
  
  local_res8.Array = &FMeshElementChannels::Get(this->MeshDescription->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_res8,(TConstIterator *)&local_88);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_res8,local_68);
  while( true ) {
    if ((local_88.CurrentBitIndex == local_68[0].Iterator.CurrentBitIndex) &&
       (local_88.Array == local_68[0].Iterator.Array)) break;
    iVar8 = -1;
    if (local_88.CurrentBitIndex < (local_88.Array)->NumBits) {
      iVar8 = local_88.CurrentBitIndex;
    }
    pTVar6 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                       ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                        (this->VertexPositions).ArrayPtr,0);
    pTVar7 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar6,iVar8);
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar4 = (param_1->field0_0x0)._s_0.Z;
    uVar5 = *(undefined8 *)&pTVar7->field0_0x0;
    fVar1 = (pTVar7->field0_0x0)._s_0.Z;
    pTVar6 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                       ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                        (this->VertexPositions).ArrayPtr,0);
    pTVar7 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar6,iVar8);
    (pTVar7->field0_0x0)._s_0.X = (float)dVar2 + (float)uVar5;
    (pTVar7->field0_0x0)._s_0.Y = (float)dVar3 + (float)((ulonglong)uVar5 >> 0x20);
    (pTVar7->field0_0x0)._s_0.Z = (float)dVar4 + fVar1;
    local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
  }
  return;
}

