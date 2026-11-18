// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 19

// CreateOptionalVector<int> @ 1434344a0

TOptional<UE::Geometry::TDynamicVector<int,512>_> * __cdecl
FDynamicMesh3Serialization_Local::CreateOptionalVector<int>
          (TOptional<UE::Geometry::TDynamicVector<int,512>_> *__return_storage_ptr__,
          TOptional<UE::Geometry::TDynamicVector<int,512>_> *param_1,ulong64 param_2)

{
  TDynamicVector<int,512> local_28;
  bool local_10;
  
  local_10 = false;
  if (param_1->bIsSet != false) {
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_28);
    local_10 = true;
    UE::Geometry::TDynamicVector<int,512>::Resize(&local_28,(uint)param_2);
  }
  __return_storage_ptr__->bIsSet = local_10;
  if (local_10 != false) {
    (__return_storage_ptr__->TypedValue).CurBlock = local_28.CurBlock;
    (__return_storage_ptr__->TypedValue).CurBlockUsed = local_28.CurBlockUsed;
    (__return_storage_ptr__->TypedValue).Blocks.AllocatorInstance.Data =
         local_28.Blocks.AllocatorInstance.Data;
    (__return_storage_ptr__->TypedValue).Blocks.ArrayNum = local_28.Blocks.ArrayNum;
    (__return_storage_ptr__->TypedValue).Blocks.ArrayMax = local_28.Blocks.ArrayMax;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_28);
    if (local_10 != false) {
      UE::Geometry::TDynamicVector<int,512>::Empty(&local_28,0);
      if (local_28.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Blocks.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// CreateOptionalVector<UE::Math::TVector2<float>_> @ 143434570

TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> * __cdecl
FDynamicMesh3Serialization_Local::CreateOptionalVector<UE::Math::TVector2<float>_>
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_>
           *__return_storage_ptr__,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *param_1,
          ulong64 param_2)

{
  TDynamicVector<UE::Math::TVector2<float>,512> local_28;
  bool local_10;
  
  local_10 = false;
  if (param_1->bIsSet != false) {
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_28);
    local_10 = true;
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Resize(&local_28,(uint)param_2);
  }
  __return_storage_ptr__->bIsSet = local_10;
  if (local_10 != false) {
    (__return_storage_ptr__->TypedValue).CurBlock = local_28.CurBlock;
    (__return_storage_ptr__->TypedValue).CurBlockUsed = local_28.CurBlockUsed;
    (__return_storage_ptr__->TypedValue).Blocks.AllocatorInstance.Data =
         local_28.Blocks.AllocatorInstance.Data;
    (__return_storage_ptr__->TypedValue).Blocks.ArrayNum = local_28.Blocks.ArrayNum;
    (__return_storage_ptr__->TypedValue).Blocks.ArrayMax = local_28.Blocks.ArrayMax;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(&local_28);
    if (local_10 != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&local_28,0);
      if (local_28.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Blocks.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// CreateOptionalVector<UE::Math::TVector<float>_> @ 143434640

TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> * __cdecl
FDynamicMesh3Serialization_Local::CreateOptionalVector<UE::Math::TVector<float>_>
          (TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_>
           *__return_storage_ptr__,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_1,
          ulong64 param_2)

{
  TDynamicVector<UE::Math::TVector<float>,512> local_28;
  bool local_10;
  
  local_10 = false;
  if (param_1->bIsSet != false) {
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_28);
    local_10 = true;
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Resize(&local_28,(uint)param_2);
  }
  __return_storage_ptr__->bIsSet = local_10;
  if (local_10 != false) {
    (__return_storage_ptr__->TypedValue).CurBlock = local_28.CurBlock;
    (__return_storage_ptr__->TypedValue).CurBlockUsed = local_28.CurBlockUsed;
    (__return_storage_ptr__->TypedValue).Blocks.AllocatorInstance.Data =
         local_28.Blocks.AllocatorInstance.Data;
    (__return_storage_ptr__->TypedValue).Blocks.ArrayNum = local_28.Blocks.ArrayNum;
    (__return_storage_ptr__->TypedValue).Blocks.ArrayMax = local_28.Blocks.ArrayMax;
    local_28.Blocks.ArrayNum = 0;
    local_28.Blocks.ArrayMax = 0;
    local_28.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.CurBlock = 0;
    local_28.CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(&local_28);
    if (local_10 != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&local_28,0);
      if (local_28.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Blocks.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// SerializeOptionalVector<int> @ 14344cb40

void __cdecl
FDynamicMesh3Serialization_Local::SerializeOptionalVector<int>
          (FArchive *param_1,TOptional<UE::Geometry::TDynamicVector<int,512>_> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint local_res8 [2];
  
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  cVar7 = param_2->bIsSet;
  puVar1 = &param_1->field_0x28;
  piVar2 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)((bool)cVar7 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      cVar7 = local_res8[0] != 0;
    }
  }
  else {
    cVar7 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar2;
  }
  if (cVar7 != '\0') {
    if ((*puVar1 & 1) != 0) {
      if (param_2->bIsSet != false) {
        UE::Geometry::TDynamicVector<int,512>::Empty(&param_2->TypedValue,0);
        pFVar4 = (param_2->TypedValue).Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      (param_2->TypedValue).CurBlock = 0;
      (param_2->TypedValue).CurBlockUsed = 0;
      (param_2->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->TypedValue).Blocks.ArrayNum = 0;
      (param_2->TypedValue).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&param_2->TypedValue);
      param_2->bIsSet = true;
    }
    if ((param_2->bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_3->bUseCompression != false) {
      UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>(&param_2->TypedValue,param_1);
      return;
    }
    UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>(&param_2->TypedValue,param_1);
  }
  return;
}

// SerializeOptionalVector<UE::Math::TVector2<float>_> @ 14344cc90

void __cdecl
FDynamicMesh3Serialization_Local::SerializeOptionalVector<UE::Math::TVector2<float>_>
          (FArchive *param_1,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint local_res8 [2];
  
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  cVar7 = param_2->bIsSet;
  puVar1 = &param_1->field_0x28;
  piVar2 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)((bool)cVar7 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      cVar7 = local_res8[0] != 0;
    }
  }
  else {
    cVar7 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar2;
  }
  if (cVar7 != '\0') {
    if ((*puVar1 & 1) != 0) {
      if (param_2->bIsSet != false) {
        UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&param_2->TypedValue,0);
        pFVar4 = (param_2->TypedValue).Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      (param_2->TypedValue).CurBlock = 0;
      (param_2->TypedValue).CurBlockUsed = 0;
      (param_2->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->TypedValue).Blocks.ArrayNum = 0;
      (param_2->TypedValue).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock
                (&param_2->TypedValue);
      param_2->bIsSet = true;
    }
    if ((param_2->bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_3->bUseCompression != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>
                (&param_2->TypedValue,param_1);
      return;
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>
              (&param_2->TypedValue,param_1);
  }
  return;
}

// SerializeOptionalVector<UE::Math::TVector<float>_> @ 14344cde0

void __cdecl
FDynamicMesh3Serialization_Local::SerializeOptionalVector<UE::Math::TVector<float>_>
          (FArchive *param_1,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint local_res8 [2];
  
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  cVar7 = param_2->bIsSet;
  puVar1 = &param_1->field_0x28;
  piVar2 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)((bool)cVar7 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((*puVar1 & 1) != 0) {
      cVar7 = local_res8[0] != 0;
    }
  }
  else {
    cVar7 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar2;
  }
  if (cVar7 != '\0') {
    if ((*puVar1 & 1) != 0) {
      if (param_2->bIsSet != false) {
        UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(&param_2->TypedValue,0);
        pFVar4 = (param_2->TypedValue).Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      (param_2->TypedValue).CurBlock = 0;
      (param_2->TypedValue).CurBlockUsed = 0;
      (param_2->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->TypedValue).Blocks.ArrayNum = 0;
      (param_2->TypedValue).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock
                (&param_2->TypedValue);
      param_2->bIsSet = true;
    }
    if ((param_2->bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_3->bUseCompression != false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,1>
                (&param_2->TypedValue,param_1);
      return;
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,0>
              (&param_2->TypedValue,param_1);
  }
  return;
}

// SerializeVector<int> @ 14344cf30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::SerializeVector<int>
          (FArchive *param_1,TDynamicVector<int,512> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  ulonglong uVar19;
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_98;
  uint uStack_94;
  ForAnyElementType FStack_90;
  int aiStack_88 [2];
  void *pvStack_80;
  void *pvStack_78;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_70;
  FNameEntryId FStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  ulonglong uStack_48;
  
  if (param_3->bUseCompression == false) {
    UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>(param_2,param_1);
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar16 = 0;
    auStackX_20[0] = 0;
    uStack_98 = 0;
    auStackX_18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_20);
      }
    }
    else {
      auStackX_20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_98);
      }
    }
    else {
      uStack_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    FStack_90.Data = (FScriptContainerElement *)0x0;
    uVar18 = auStackX_18[0] << 9;
    aiStack_88[0] = 0;
    aiStack_88[1] = 0;
    if ((int)(auStackX_18[0] << 9) < 1) {
      if ((int)(auStackX_18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
    }
    else {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar18,&FStack_90,aiStack_88,aiStack_88 + 1);
      memset(FStack_90.Data + (longlong)iVar9 * 4,0,(longlong)(int)uVar18 << 2);
    }
    FVar17.Data = FStack_90.Data;
    uVar18 = uVar16;
    if (0 < (int)auStackX_18[0]) {
      do {
        `UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>'::__l5::<lambda_1>::
        <lambda_invoker_cdecl>(param_1,(int *)FVar17.Data);
        FVar17.Data = FVar17.Data + 0x800;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < (int)auStackX_18[0]);
    }
    uVar18 = auStackX_20[0] * 0x200 + uStack_98;
    UE::Geometry::TDynamicVector<int,512>::Empty
              (param_2,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(param_2);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar16 < aiStack_88[0]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = FStack_90.Data + (longlong)(int)uVar16 * 4;
        uVar13 = param_2->CurBlockUsed;
        if (param_2->CurBlockUsed == 0x200) {
          if (param_2->CurBlock == (param_2->Blocks).ArrayNum - 1U) {
            UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(param_2);
          }
          param_2->CurBlock = param_2->CurBlock + 1;
          param_2->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar16 = uVar16 + 1;
        *(undefined4 *)
         (*(longlong *)
           ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)param_2->CurBlock * 8) +
         (longlong)(int)uVar13 * 4) = *(undefined4 *)pFVar2;
        param_2->CurBlockUsed = param_2->CurBlockUsed + 1;
      } while (uVar16 < uVar18);
    }
    if (FStack_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_90.Data);
    }
    goto LAB_14343cdee;
  }
  auStackX_10[0] = param_2->CurBlock * 0x200 + param_2->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
    }
  }
  else {
    auStackX_10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    UE::Geometry::TDynamicVector<int,512>::TruncateBlocks(param_2,1,No);
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    if ((param_2->Blocks).ArrayNum == 0) {
      UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(param_2);
    }
    goto LAB_14343cdee;
  }
  uVar18 = 0;
  bVar8 = true;
  uVar13 = 0;
  uVar16 = auStackX_10[0] - 1 >> 9;
  if (auStackX_10[0] == 0) {
    uVar16 = uVar13;
  }
  param_2->CurBlock = uVar16;
  uVar16 = uVar13;
  if (auStackX_10[0] != 0) {
    uVar16 = (auStackX_10[0] - 1 & 0x1ff) + 1;
  }
  param_2->CurBlockUsed = uVar16;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    uStack_94 = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_94,4);
    if (1 < uStack_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar16 = uStack_94;
    if ((bVar12 & 1) != 0) goto LAB_14343c9d4;
  }
  else {
    uVar16 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_14343c9d4:
    bVar8 = uVar16 != 0;
  }
  uVar16 = (uint)((auStackX_10[0] & 0x1ff) != 0) + (auStackX_10[0] >> 9);
  uVar19 = (ulonglong)uVar16;
  if (bVar8) {
    TStack_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_70.ArrayNum = 0;
    TStack_70.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&TStack_70,auStackX_10[0],Default);
    uVar15 = (ulonglong)auStackX_10[0];
    FVar17.Data = TStack_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar16 != 0)) {
      do {
        uStack_48 = 0x200;
        if (uVar15 < 0x200) {
          uStack_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (param_2->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               uStack_48 * 4);
        FVar17.Data = FVar17.Data + 0x800;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar16);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)auStack_50);
    uStack_5c = 0;
    FStack_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)auStack_4c);
    uStack_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = FStack_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = uStack_58;
    FArchive::SerializeCompressedNew
              (param_1,TStack_70.AllocatorInstance.Data,(ulonglong)auStackX_10[0] << 2,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) &&
       (UE::Geometry::TDynamicVector<int,512>::Empty(param_2,uVar16), uVar16 != 0)) {
      do {
        pvStack_80 = ::operator_new(0x800);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(pvStack_80,FVar17.Data,uVar14 << 2);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_80) &&
            ((FScriptContainerElement *)&pvStack_80 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_2->Blocks).ArrayNum;
        if (iVar9 == (param_2->Blocks).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax)
          ;
        }
        FVar17.Data = FVar17.Data + 0x800;
        (param_2->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = pvStack_80;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (TStack_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar16 != 0) {
      do {
        uVar13 = 0x200;
        if (auStackX_10[0] < 0x200) {
          uVar13 = auStackX_10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (param_2->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 2);
        uVar18 = uVar18 + 1;
        auStackX_10[0] = auStackX_10[0] - 0x200;
      } while (uVar18 < uVar16);
    }
  }
  else {
    UE::Geometry::TDynamicVector<int,512>::Empty(param_2,uVar16);
    if (uVar16 != 0) {
      do {
        pvStack_78 = ::operator_new(0x800);
        uVar16 = 0x200;
        if (auStackX_10[0] < 0x200) {
          uVar16 = auStackX_10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvStack_78,(ulonglong)uVar16 << 2);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_78) &&
            ((FScriptContainerElement *)&pvStack_78 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_2->Blocks).ArrayNum;
        if (iVar9 == (param_2->Blocks).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax)
          ;
        }
        (param_2->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = pvStack_78;
        auStackX_10[0] = auStackX_10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14343cdee:
  if (((param_1->field_0x28 & 1) != 0) && ((param_2->Blocks).ArrayNum == 0)) {
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(param_2);
  }
  return;
}

// SerializeVector<UE::Math::TVector2<float>_> @ 14344cf50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::SerializeVector<UE::Math::TVector2<float>_>
          (FArchive *param_1,TDynamicVector<UE::Math::TVector2<float>,512> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  byte bVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_98;
  uint uStack_94;
  void *pvStack_90;
  void *pvStack_88;
  ForAnyElementType FStack_80;
  int aiStack_78 [2];
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> TStack_70;
  FNameEntryId FStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  ulonglong uStack_48;
  
  if (param_3->bUseCompression == false) {
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>(param_2,param_1);
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    uVar17 = 0;
    auStackX_20[0] = 0;
    uStack_98 = 0;
    auStackX_18[0] = 0;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_20);
      }
    }
    else {
      auStackX_20[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_98);
      }
    }
    else {
      uStack_98 = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_18,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
      }
    }
    else {
      auStackX_18[0] = *(uint *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    FStack_80.Data = (FScriptContainerElement *)0x0;
    aiStack_78[0] = 0;
    aiStack_78[1] = 0;
    if ((int)(auStackX_18[0] << 9) < 1) {
      if ((int)(auStackX_18[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(auStackX_18[0] << 9));
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,auStackX_18[0] << 9,&FStack_80,aiStack_78,aiStack_78 + 1);
    }
    FVar16.Data = FStack_80.Data;
    uVar18 = uVar17;
    if (0 < (int)auStackX_18[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector2<float> *)FVar16.Data);
        uVar18 = uVar18 + 1;
        FVar16.Data = FVar16.Data + 0x1000;
      } while ((int)uVar18 < (int)auStackX_18[0]);
    }
    uVar18 = auStackX_20[0] * 0x200 + uStack_98;
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty
              (param_2,(uint)((uVar18 & 0x1ff) != 0) + (uVar18 >> 9));
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(param_2);
    if (uVar18 != 0) {
      do {
        uVar13 = 0;
        if ((int)uVar17 < aiStack_78[0]) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar2 = FStack_80.Data + (longlong)(int)uVar17 * 8;
        uVar13 = param_2->CurBlockUsed;
        if (param_2->CurBlockUsed == 0x200) {
          if (param_2->CurBlock == (param_2->Blocks).ArrayNum - 1U) {
            UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(param_2);
          }
          param_2->CurBlock = param_2->CurBlock + 1;
          param_2->CurBlockUsed = 0;
          uVar13 = 0;
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)
         (*(longlong *)
           ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)param_2->CurBlock * 8) +
         (longlong)(int)uVar13 * 8) = *(undefined8 *)pFVar2;
        param_2->CurBlockUsed = param_2->CurBlockUsed + 1;
      } while (uVar17 < uVar18);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    goto LAB_14343e62e;
  }
  auStackX_10[0] = param_2->CurBlock * 0x200 + param_2->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
    }
  }
  else {
    auStackX_10[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_10[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::TruncateBlocks(param_2,1,No);
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    if ((param_2->Blocks).ArrayNum == 0) {
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(param_2);
    }
    goto LAB_14343e62e;
  }
  uVar18 = 0;
  bVar8 = true;
  uVar13 = 0;
  uVar17 = auStackX_10[0] - 1 >> 9;
  if (auStackX_10[0] == 0) {
    uVar17 = uVar13;
  }
  param_2->CurBlock = uVar17;
  uVar17 = uVar13;
  if (auStackX_10[0] != 0) {
    uVar17 = (auStackX_10[0] - 1 & 0x1ff) + 1;
  }
  param_2->CurBlockUsed = uVar17;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    uStack_94 = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_94,4);
    if (1 < uStack_94) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar12 = param_1->field_0x28;
    uVar17 = uStack_94;
    if ((bVar12 & 1) != 0) goto LAB_14343e215;
  }
  else {
    uVar17 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
    bVar12 = param_1->field_0x28;
LAB_14343e215:
    bVar8 = uVar17 != 0;
  }
  uVar17 = (uint)((auStackX_10[0] & 0x1ff) != 0) + (auStackX_10[0] >> 9);
  uVar19 = (ulonglong)uVar17;
  if (bVar8) {
    TStack_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_70.ArrayNum = 0;
    TStack_70.ArrayMax = 0;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&TStack_70,auStackX_10[0],Default);
    uVar15 = (ulonglong)auStackX_10[0];
    FVar16.Data = TStack_70.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar17 != 0)) {
      do {
        uStack_48 = 0x200;
        if (uVar15 < 0x200) {
          uStack_48 = uVar15;
        }
        uVar10 = uVar13;
        if ((int)uVar18 < (param_2->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
               uStack_48 * 8);
        FVar16.Data = FVar16.Data + 0x1000;
        uVar15 = uVar15 - 0x200;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar17);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)auStack_50);
    uStack_5c = 0;
    FStack_60.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)auStack_4c);
    uStack_58 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar6.Number = uStack_5c;
    FVar6.ComparisonIndex.Value = FStack_60.Value;
    uStack_54 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = uStack_58;
    FArchive::SerializeCompressedNew
              (param_1,TStack_70.AllocatorInstance.Data,(ulonglong)auStackX_10[0] << 3,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) &&
       (UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(param_2,uVar17),
       uVar17 != 0)) {
      do {
        pvStack_90 = ::operator_new(0x1000);
        uVar14 = 0x200;
        if (uVar15 < 0x200) {
          uVar14 = uVar15;
        }
        memcpy(pvStack_90,FVar16.Data,uVar14 << 3);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_90) &&
            ((FScriptContainerElement *)&pvStack_90 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_2->Blocks).ArrayNum;
        if (iVar9 == (param_2->Blocks).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax)
          ;
        }
        FVar16.Data = FVar16.Data + 0x1000;
        (param_2->Blocks).ArrayNum = iVar9 + 1;
        uVar15 = uVar15 - 0x200;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = pvStack_90;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    if (TStack_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
  }
  else if ((bVar12 & 1) == 0) {
    if (uVar17 != 0) {
      do {
        uVar13 = 0x200;
        if (auStackX_10[0] < 0x200) {
          uVar13 = auStackX_10[0];
        }
        uVar10 = 0;
        if ((int)uVar18 < (param_2->Blocks).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar18 * 8),
                   (ulonglong)uVar13 << 3);
        uVar18 = uVar18 + 1;
        auStackX_10[0] = auStackX_10[0] - 0x200;
      } while (uVar18 < uVar17);
    }
  }
  else {
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(param_2,uVar17);
    if (uVar17 != 0) {
      do {
        pvStack_88 = ::operator_new(0x1000);
        uVar17 = 0x200;
        if (auStackX_10[0] < 0x200) {
          uVar17 = auStackX_10[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvStack_88,(ulonglong)uVar17 << 3);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_88) &&
            ((FScriptContainerElement *)&pvStack_88 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (param_2->Blocks).ArrayNum;
        if (iVar9 == (param_2->Blocks).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax)
          ;
        }
        (param_2->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = pvStack_88;
        auStackX_10[0] = auStackX_10[0] - 0x200;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_14343e62e:
  if (((param_1->field_0x28 & 1) != 0) && ((param_2->Blocks).ArrayNum == 0)) {
    UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock(param_2);
  }
  return;
}

// SerializeVector<UE::Math::TVector<float>_> @ 14344cf70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::SerializeVector<UE::Math::TVector<float>_>
          (FArchive *param_1,TDynamicVector<UE::Math::TVector<float>,512> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  code *pcVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_98;
  uint uStack_94;
  uint auStack_90 [2];
  void *pvStack_88;
  void *pvStack_80;
  ForAnyElementType FStack_78;
  int aiStack_70 [2];
  FScriptContainerElement *pFStack_68;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> TStack_60;
  FNameEntryId FStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  
  if (param_3->bUseCompression == false) {
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,0>(param_2,param_1);
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    auStackX_20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_98);
      }
    }
    else {
      uStack_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_94);
      }
    }
    else {
      uStack_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_20);
      }
    }
    else {
      auStackX_20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    FStack_78.Data = (FScriptContainerElement *)0x0;
    aiStack_70[0] = 0;
    aiStack_70[1] = 0;
    if ((int)(auStackX_20[0] << 9) < 1) {
      if ((int)(auStackX_20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(auStackX_20[0] << 9));
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,auStackX_20[0] << 9,&FStack_78,aiStack_70,aiStack_70 + 1);
    }
    FVar17.Data = FStack_78.Data;
    uVar20 = uVar19;
    if (0 < (int)auStackX_20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Serialize<1,1>'::__l5::
        <lambda_1>::<lambda_invoker_cdecl>(param_1,(TVector<float> *)FVar17.Data);
        uVar20 = uVar20 + 1;
        FVar17.Data = FVar17.Data + 0x1800;
      } while ((int)uVar20 < (int)auStackX_20[0]);
    }
    uVar20 = uStack_98 * 0x200 + uStack_94;
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty
              (param_2,(uint)((uVar20 & 0x1ff) != 0) + (uVar20 >> 9));
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(param_2);
    if (uVar20 != 0) {
      do {
        uVar16 = 0;
        if ((int)uVar19 < aiStack_70[0]) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = FStack_78.Data + (longlong)(int)uVar19 * 0xc;
        uVar16 = param_2->CurBlockUsed;
        if (param_2->CurBlockUsed == 0x200) {
          if (param_2->CurBlock == (param_2->Blocks).ArrayNum - 1U) {
            UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(param_2);
          }
          param_2->CurBlock = param_2->CurBlock + 1;
          param_2->CurBlockUsed = 0;
          uVar16 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar5 = *(longlong *)
                 ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)param_2->CurBlock * 8);
        *(undefined8 *)(lVar5 + (longlong)(int)uVar16 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar5 + 8 + (longlong)(int)uVar16 * 0xc) = uVar3;
        param_2->CurBlockUsed = param_2->CurBlockUsed + 1;
      } while (uVar19 < uVar20);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    goto LAB_14343ee67;
  }
  auStackX_18[0] = param_2->CurBlock * 0x200 + param_2->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
    }
  }
  else {
    auStackX_18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (auStackX_18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::TruncateBlocks(param_2,1,No);
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    if ((param_2->Blocks).ArrayNum == 0) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(param_2);
    }
    goto LAB_14343ee67;
  }
  uVar20 = 0;
  bVar10 = true;
  uVar16 = 0;
  uVar19 = auStackX_18[0] - 1 >> 9;
  if (auStackX_18[0] == 0) {
    uVar19 = uVar16;
  }
  param_2->CurBlock = uVar19;
  uVar19 = uVar16;
  if (auStackX_18[0] != 0) {
    uVar19 = (auStackX_18[0] - 1 & 0x1ff) + 1;
  }
  param_2->CurBlockUsed = uVar19;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    auStack_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStack_90,4);
    if (1 < auStack_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar15 = param_1->field_0x28;
    uVar19 = auStack_90[0];
    if ((bVar15 & 1) != 0) goto LAB_14343ea4b;
  }
  else {
    uVar19 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar15 = param_1->field_0x28;
LAB_14343ea4b:
    bVar10 = uVar19 != 0;
  }
  uVar19 = (uint)((auStackX_18[0] & 0x1ff) != 0) + (auStackX_18[0] >> 9);
  uVar21 = (ulonglong)uVar19;
  if (bVar10) {
    TStack_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_60.ArrayNum = 0;
    TStack_60.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&TStack_60,auStackX_18[0],Default);
    uVar18 = (ulonglong)auStackX_18[0];
    FVar17.Data = TStack_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar19 != 0)) {
      do {
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar12 = uVar16;
        if ((int)uVar20 < (param_2->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        memcpy(FVar17.Data,
               *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar17.Data = FVar17.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        uVar20 = uVar20 + 1;
        pFStack_68 = FVar17.Data;
      } while (uVar20 < uVar19);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)auStack_40);
    uStack_4c = 0;
    FStack_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)auStack_3c);
    uStack_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = uStack_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = FStack_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,TStack_60.AllocatorInstance.Data,(ulonglong)auStackX_18[0] * 0xc,FVar9,FVar8,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) &&
       (UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(param_2,uVar19),
       uVar19 != 0)) {
      do {
        pvStack_88 = ::operator_new(0x1800);
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(pvStack_88,FVar17.Data,uVar14 * 0xc);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_88) &&
            ((FScriptContainerElement *)&pvStack_88 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (param_2->Blocks).ArrayNum;
        if (iVar11 == (param_2->Blocks).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax
                             );
        }
        FVar17.Data = FVar17.Data + 0x1800;
        (param_2->Blocks).ArrayNum = iVar11 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = pvStack_88;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (TStack_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar15 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar16 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar16 = auStackX_18[0];
        }
        uVar12 = 0;
        if ((int)uVar20 < (param_2->Blocks).ArrayNum) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar16 * 0xc);
        uVar20 = uVar20 + 1;
        auStackX_18[0] = auStackX_18[0] - 0x200;
      } while (uVar20 < uVar19);
    }
  }
  else {
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::Empty(param_2,uVar19);
    if (uVar19 != 0) {
      do {
        pvStack_80 = ::operator_new(0x1800);
        uVar19 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar19 = auStackX_18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvStack_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_80) &&
            ((FScriptContainerElement *)&pvStack_80 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (param_2->Blocks).ArrayNum;
        if (iVar11 == (param_2->Blocks).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax
                             );
        }
        (param_2->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = pvStack_80;
        auStackX_18[0] = auStackX_18[0] - 0x200;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
  }
LAB_14343ee67:
  if (((param_1->field_0x28 & 1) != 0) && ((param_2->Blocks).ArrayNum == 0)) {
    UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>::AddAllocatedBlock(param_2);
  }
  return;
}

// SerializeVector<UE::Math::TVector<double>_> @ 14344cf90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::SerializeVector<UE::Math::TVector<double>_>
          (FArchive *param_1,TDynamicVector<UE::Math::TVector<double>,512> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FNameEntryId FVar13;
  longlong lVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  code *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  ulonglong uVar23;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_98;
  uint uStack_94;
  uint auStack_90 [2];
  void *pvStack_88;
  void *pvStack_80;
  ForAnyElementType FStack_78;
  int aiStack_70 [2];
  FScriptContainerElement *pFStack_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> TStack_60;
  FNameEntryId FStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  
  if (param_3->bUseCompression == false) {
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>(param_2,param_1);
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar11 < 0x38)) {
    plVar5 = *(longlong **)&param_1->field_0x8;
    uVar20 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    auStackX_20[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_98);
      }
    }
    else {
      uStack_98 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_94);
      }
    }
    else {
      uStack_94 = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    plVar5 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_20);
      }
    }
    else {
      auStackX_20[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>'::__l5::
              <lambda_2>::<lambda_invoker_cdecl>;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    aiStack_70[0] = 0;
    aiStack_70[1] = 0;
    if (0x3eb < (int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20)) {
      pcVar18 = `UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>'::__l5
                ::<lambda_1>::<lambda_invoker_cdecl>;
    }
    if ((int)(auStackX_20[0] << 9) < 1) {
      if ((int)(auStackX_20[0] << 9) < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(auStackX_20[0] << 9));
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,auStackX_20[0] << 9,&FStack_78,aiStack_70,aiStack_70 + 1);
    }
    FVar21.Data = FStack_78.Data;
    uVar22 = uVar20;
    if (0 < (int)auStackX_20[0]) {
      do {
        (*pcVar18)(param_1,FVar21.Data);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)auStackX_20[0]);
    }
    uVar22 = uStack_98 * 0x200 + uStack_94;
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty
              (param_2,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(param_2);
    if (uVar22 != 0) {
      do {
        uVar17 = 0;
        if ((int)uVar20 < aiStack_70[0]) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        FVar21.Data = FStack_78.Data;
        lVar14 = (longlong)(int)uVar20;
        uVar17 = param_2->CurBlockUsed;
        if (param_2->CurBlockUsed == 0x200) {
          if (param_2->CurBlock == (param_2->Blocks).ArrayNum - 1U) {
            UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(param_2);
          }
          param_2->CurBlock = param_2->CurBlock + 1;
          param_2->CurBlockUsed = 0;
          uVar17 = 0;
        }
        uVar20 = uVar20 + 1;
        pFVar3 = FVar21.Data + lVar14 * 0x18;
        uVar7 = *(undefined8 *)(pFVar3 + 8);
        uVar4 = *(undefined8 *)(FVar21.Data + lVar14 * 0x18 + 0x10);
        lVar14 = *(longlong *)
                  ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)param_2->CurBlock * 8);
        puVar2 = (undefined8 *)(lVar14 + (longlong)(int)uVar17 * 0x18);
        *puVar2 = *(undefined8 *)pFVar3;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar14 + 0x10 + (longlong)(int)uVar17 * 0x18) = uVar4;
        param_2->CurBlockUsed = param_2->CurBlockUsed + 1;
      } while (uVar20 < uVar22);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    goto LAB_14343f6af;
  }
  auStackX_18[0] = param_2->CurBlock * 0x200 + param_2->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
    }
  }
  else {
    auStackX_18[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  if (auStackX_18[0] == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return;
    }
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TruncateBlocks(param_2,1,No);
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    if ((param_2->Blocks).ArrayNum == 0) {
      UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(param_2);
    }
    goto LAB_14343f6af;
  }
  uVar22 = 0;
  bVar10 = true;
  uVar17 = 0;
  uVar20 = auStackX_18[0] - 1 >> 9;
  if (auStackX_18[0] == 0) {
    uVar20 = uVar17;
  }
  param_2->CurBlock = uVar20;
  uVar20 = uVar17;
  if (auStackX_18[0] != 0) {
    uVar20 = (auStackX_18[0] - 1 & 0x1ff) + 1;
  }
  param_2->CurBlockUsed = uVar20;
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar1) {
    auStack_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStack_90,4);
    if (1 < auStack_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar20 = auStack_90[0];
    if ((bVar16 & 1) != 0) goto LAB_14343f29c;
  }
  else {
    uVar20 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_14343f29c:
    bVar10 = uVar20 != 0;
  }
  uVar20 = (uint)((auStackX_18[0] & 0x1ff) != 0) + (auStackX_18[0] >> 9);
  uVar23 = (ulonglong)uVar20;
  if (bVar10) {
    TStack_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_60.ArrayNum = 0;
    TStack_60.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&TStack_60,auStackX_18[0],Default);
    uVar19 = (ulonglong)auStackX_18[0];
    FVar21.Data = TStack_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (uVar20 != 0)) {
      do {
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        uVar12 = uVar17;
        if ((int)uVar22 < (param_2->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        memcpy(FVar21.Data,
               *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
               uVar15 * 0x18);
        FVar21.Data = FVar21.Data + 0x3000;
        uVar19 = uVar19 - 0x200;
        uVar22 = uVar22 + 1;
        pFStack_68 = FVar21.Data;
      } while (uVar22 < uVar20);
    }
    FVar13 = FNameEntryId::FromValidEName((EName)auStack_40);
    uStack_4c = 0;
    FStack_50.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
    FVar13 = FNameEntryId::FromValidEName((EName)auStack_3c);
    uStack_48 = *(uint *)CONCAT44(extraout_var_00,FVar13.Value);
    uStack_44 = 0;
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = uStack_48;
    FVar8.Number = uStack_4c;
    FVar8.ComparisonIndex.Value = FStack_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,TStack_60.AllocatorInstance.Data,(ulonglong)auStackX_18[0] * 0x18,FVar9,FVar8
               ,COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) &&
       (UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(param_2,uVar20),
       uVar20 != 0)) {
      do {
        pvStack_88 = ::operator_new(0x3000);
        uVar15 = 0x200;
        if (uVar19 < 0x200) {
          uVar15 = uVar19;
        }
        memcpy(pvStack_88,FVar21.Data,uVar15 * 0x18);
        pFVar3 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&pvStack_88) &&
            ((FScriptContainerElement *)&pvStack_88 <
             pFVar3 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (param_2->Blocks).ArrayNum;
        if (iVar11 == (param_2->Blocks).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax
                             );
        }
        FVar21.Data = FVar21.Data + 0x3000;
        (param_2->Blocks).ArrayNum = iVar11 + 1;
        uVar19 = uVar19 - 0x200;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = pvStack_88;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    if (TStack_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar20 != 0) {
      do {
        uVar17 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar17 = auStackX_18[0];
        }
        uVar12 = 0;
        if ((int)uVar22 < (param_2->Blocks).ArrayNum) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar22 * 8),
                   (ulonglong)uVar17 * 0x18);
        uVar22 = uVar22 + 1;
        auStackX_18[0] = auStackX_18[0] - 0x200;
      } while (uVar22 < uVar20);
    }
  }
  else {
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(param_2,uVar20);
    if (uVar20 != 0) {
      do {
        pvStack_80 = ::operator_new(0x3000);
        uVar20 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar20 = auStackX_18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvStack_80,(ulonglong)uVar20 * 0x18);
        pFVar3 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&pvStack_80) &&
            ((FScriptContainerElement *)&pvStack_80 <
             pFVar3 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        iVar11 = (param_2->Blocks).ArrayNum;
        if (iVar11 == (param_2->Blocks).ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax
                             );
        }
        (param_2->Blocks).ArrayNum = iVar11 + 1;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar11 * 8) = pvStack_80;
        auStackX_18[0] = auStackX_18[0] - 0x200;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
LAB_14343f6af:
  if (((param_1->field_0x28 & 1) != 0) && ((param_2->Blocks).ArrayNum == 0)) {
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(param_2);
  }
  return;
}

// SerializeVector<UE::Geometry::FDynamicMesh3::FEdge> @ 14344cfb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::SerializeVector<UE::Geometry::FDynamicMesh3::FEdge>
          (FArchive *param_1,TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FNameEntryId FVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  byte bVar14;
  void *pvVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_98;
  uint uStack_94;
  uint auStack_90 [2];
  void *pvStack_88;
  void *pvStack_80;
  FScriptContainerElement *pFStack_78;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> TStack_70;
  TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_> TStack_60;
  FNameEntryId FStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  
  if (param_3->bUseCompression == false) {
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,0>
              (param_2,param_1);
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar9 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID),
     iVar9 < 0x38)) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    uVar23 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    auStackX_20[0] = 0;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_98);
      }
    }
    else {
      uStack_98 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_94);
      }
    }
    else {
      uStack_94 = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_20);
      }
    }
    else {
      auStackX_20[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    TStack_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_70.ArrayNum = 0;
    TStack_70.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNum
              (&TStack_70,auStackX_20[0] << 9,Default);
    FVar16.Data = TStack_70.AllocatorInstance.Data;
    uVar22 = uVar23;
    if (0 < (int)auStackX_20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Serialize<1,1>'::__l5
        ::<lambda_1>::<lambda_invoker_cdecl>(param_1,(FEdge *)FVar16.Data);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)auStackX_20[0]);
    }
    uVar22 = uStack_98 * 0x200 + uStack_94;
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Empty
              (param_2,(uint)((uVar22 & 0x1ff) != 0) + (uVar22 >> 9));
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(param_2)
    ;
    if (uVar22 != 0) {
      do {
        uVar19 = 0;
        if ((int)uVar23 < TStack_70.ArrayNum) {
          uVar19 = ~uVar23 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar21 = TStack_70.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
        uVar19 = param_2->CurBlockUsed;
        if (param_2->CurBlockUsed == 0x200) {
          if (param_2->CurBlock == (param_2->Blocks).ArrayNum - 1U) {
            UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock
                      (param_2);
          }
          param_2->CurBlock = param_2->CurBlock + 1;
          param_2->CurBlockUsed = 0;
          uVar19 = 0;
        }
        uVar23 = uVar23 + 1;
        uVar5 = *(undefined8 *)(pFVar21 + 8);
        puVar12 = (undefined8 *)
                  (*(longlong *)
                    ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)param_2->CurBlock * 8
                    ) + (longlong)(int)uVar19 * 0x10);
        *puVar12 = *(undefined8 *)&pFVar21->field_0x0;
        puVar12[1] = uVar5;
        param_2->CurBlockUsed = param_2->CurBlockUsed + 1;
      } while (uVar23 < uVar22);
    }
    if ((FEdge *)TStack_70.AllocatorInstance.Data != (FEdge *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
    goto LAB_14343ff0e;
  }
  auStackX_18[0] = param_2->CurBlock * 0x200 + param_2->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
    }
  }
  else {
    auStackX_18[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::TruncateBlocks
                (param_2,1,No);
      param_2->CurBlock = 0;
      param_2->CurBlockUsed = 0;
      if ((param_2->Blocks).ArrayNum == 0) {
        UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock
                  (param_2);
      }
    }
    goto LAB_14343ff0e;
  }
  pvVar15 = (void *)0x0;
  bVar8 = true;
  uVar22 = 0;
  uVar23 = auStackX_18[0] - 1 >> 9;
  if (auStackX_18[0] == 0) {
    uVar23 = uVar22;
  }
  param_2->CurBlock = uVar23;
  uVar23 = uVar22;
  if (auStackX_18[0] != 0) {
    uVar23 = (auStackX_18[0] - 1 & 0x1ff) + 1;
  }
  param_2->CurBlockUsed = uVar23;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    auStack_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStack_90,4);
    if (1 < auStack_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar14 = param_1->field_0x28;
    uVar23 = auStack_90[0];
    if ((bVar14 & 1) != 0) goto LAB_14343fa8f;
  }
  else {
    uVar23 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
    bVar14 = param_1->field_0x28;
LAB_14343fa8f:
    bVar8 = uVar23 != 0;
  }
  uVar23 = (uint)((auStackX_18[0] & 0x1ff) != 0) + (auStackX_18[0] >> 9);
  uVar24 = (ulonglong)uVar23;
  if (bVar8) {
    TStack_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_60.ArrayNum = 0;
    TStack_60.ArrayMax = 0;
    TArray<UE::Geometry::FDynamicMesh3::FEdge,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&TStack_60,auStackX_18[0],Default);
    uVar18 = (ulonglong)auStackX_18[0];
    FVar16.Data = TStack_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar11 = pvVar15, uVar23 != 0)) {
      do {
        uVar19 = (uint)pvVar11;
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        uVar20 = uVar22;
        if ((int)uVar19 < (param_2->Blocks).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy(FVar16.Data,
               *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar19 * 8),
               uVar17 << 4);
        FVar16.Data = FVar16.Data + 0x2000;
        uVar18 = uVar18 - 0x200;
        pvVar11 = (void *)(ulonglong)(uVar19 + 1);
        pFStack_78 = FVar16.Data;
      } while (uVar19 + 1 < uVar23);
    }
    FVar10 = FNameEntryId::FromValidEName((EName)auStack_40);
    uStack_4c = 0;
    FStack_50.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    FVar10 = FNameEntryId::FromValidEName((EName)auStack_3c);
    uStack_48 = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
    FVar6.Number = uStack_4c;
    FVar6.ComparisonIndex.Value = FStack_50.Value;
    uStack_44 = 0;
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = uStack_48;
    FArchive::SerializeCompressedNew
              (param_1,TStack_60.AllocatorInstance.Data,(ulonglong)auStackX_18[0] << 4,FVar7,FVar6,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) &&
       (UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Empty(param_2,uVar23),
       uVar23 != 0)) {
      do {
        pvVar11 = ::operator_new(0x2000);
        pvStack_88 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            pvStack_88 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar17 = 0x200;
        if (uVar18 < 0x200) {
          uVar17 = uVar18;
        }
        memcpy(pvStack_88,FVar16.Data,uVar17 << 4);
        pFVar21 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&pvStack_88) &&
            ((FScriptContainerElement *)&pvStack_88 <
             pFVar21 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (param_2->Blocks).ArrayNum;
        if (iVar9 == (param_2->Blocks).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax)
          ;
        }
        FVar16.Data = FVar16.Data + 0x2000;
        (param_2->Blocks).ArrayNum = iVar9 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = pvStack_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (TStack_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar14 & 1) == 0) {
    if (uVar23 != 0) {
      do {
        uVar22 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar22 = auStackX_18[0];
        }
        uVar20 = (uint)pvVar15;
        uVar19 = 0;
        if ((int)uVar20 < (param_2->Blocks).ArrayNum) {
          uVar19 = ~uVar20 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
                   (ulonglong)uVar22 << 4);
        pvVar15 = (void *)(ulonglong)(uVar20 + 1);
        auStackX_18[0] = auStackX_18[0] - 0x200;
      } while (uVar20 + 1 < uVar23);
    }
  }
  else {
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::Empty(param_2,uVar23);
    if (uVar23 != 0) {
      do {
        pvVar11 = ::operator_new(0x2000);
        pvStack_80 = pvVar15;
        if (pvVar11 != (void *)0x0) {
          lVar13 = 0x200;
          puVar12 = (undefined8 *)((longlong)pvVar11 + 8);
          do {
            puVar12[-1] = 0xffffffffffffffff;
            *puVar12 = 0xffffffffffffffff;
            puVar12 = puVar12 + 2;
            lVar13 = lVar13 + -1;
            pvStack_80 = pvVar11;
          } while (lVar13 != 0);
        }
        uVar23 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar23 = auStackX_18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvStack_80,(ulonglong)uVar23 << 4);
        pFVar21 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar21 <= (FScriptContainerElement *)&pvStack_80) &&
            ((FScriptContainerElement *)&pvStack_80 <
             pFVar21 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (param_2->Blocks).ArrayNum;
        if (iVar9 == (param_2->Blocks).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax)
          ;
        }
        (param_2->Blocks).ArrayNum = iVar9 + 1;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar9 * 8) = pvStack_80;
        auStackX_18[0] = auStackX_18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_14343ff0e:
  if (((param_1->field_0x28 & 1) != 0) && ((param_2->Blocks).ArrayNum == 0)) {
    UE::Geometry::TDynamicVector<UE::Geometry::FDynamicMesh3::FEdge,512>::AddAllocatedBlock(param_2)
    ;
  }
  return;
}

// SerializeVector<UE::Geometry::FIndex3i> @ 14344cfd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::SerializeVector<UE::Geometry::FIndex3i>
          (FArchive *param_1,TDynamicVector<UE::Geometry::FIndex3i,512> *param_2,
          FDynamicMesh3SerializationOptions *param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  FNameEntryId FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  void *pvVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ulonglong uVar24;
  uint auStackX_18 [2];
  uint auStackX_20 [2];
  uint uStack_98;
  uint uStack_94;
  uint auStack_90 [2];
  void *pvStack_88;
  void *pvStack_80;
  FScriptContainerElement *pFStack_78;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> TStack_70;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> TStack_60;
  FNameEntryId FStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  
  if (param_3->bUseCompression == false) {
    UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,0>(param_2,param_1);
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar10 = FArchiveState::CustomVer((FArchiveState *)param_1,&FUE5MainStreamObjectVersion::GUID)
     , iVar10 < 0x38)) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    uVar19 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    auStackX_20[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_98,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_98);
      }
    }
    else {
      uStack_98 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_94,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&uStack_94);
      }
    }
    else {
      uStack_94 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStackX_20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,auStackX_20);
      }
    }
    else {
      auStackX_20[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    TStack_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_70.ArrayNum = 0;
    TStack_70.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
              (&TStack_70,auStackX_20[0] << 9,Default);
    FVar22.Data = TStack_70.AllocatorInstance.Data;
    uVar23 = uVar19;
    if (0 < (int)auStackX_20[0]) {
      do {
        `UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,1>'::__l5::<lambda_1>
        ::<lambda_invoker_cdecl>(param_1,(FIndex3i *)FVar22.Data);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < (int)auStackX_20[0]);
    }
    uVar23 = uStack_98 * 0x200 + uStack_94;
    UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Empty
              (param_2,(uint)((uVar23 & 0x1ff) != 0) + (uVar23 >> 9));
    param_2->CurBlock = 0;
    param_2->CurBlockUsed = 0;
    UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(param_2);
    if (uVar23 != 0) {
      do {
        uVar20 = 0;
        if ((int)uVar19 < TStack_70.ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = TStack_70.AllocatorInstance.Data + (longlong)(int)uVar19 * 0xc;
        uVar20 = param_2->CurBlockUsed;
        if (param_2->CurBlockUsed == 0x200) {
          if (param_2->CurBlock == (param_2->Blocks).ArrayNum - 1U) {
            UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(param_2);
          }
          param_2->CurBlock = param_2->CurBlock + 1;
          param_2->CurBlockUsed = 0;
          uVar20 = 0;
        }
        uVar19 = uVar19 + 1;
        uVar3 = *(undefined4 *)(pFVar2 + 8);
        lVar15 = *(longlong *)
                  ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)param_2->CurBlock * 8);
        *(undefined8 *)(lVar15 + (longlong)(int)uVar20 * 0xc) = *(undefined8 *)pFVar2;
        *(undefined4 *)(lVar15 + 8 + (longlong)(int)uVar20 * 0xc) = uVar3;
        param_2->CurBlockUsed = param_2->CurBlockUsed + 1;
      } while (uVar19 < uVar23);
    }
    if (TStack_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
    goto LAB_143440797;
  }
  auStackX_18[0] = param_2->CurBlock * 0x200 + param_2->CurBlockUsed;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_18);
    }
  }
  else {
    auStackX_18[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (auStackX_18[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::TruncateBlocks(param_2,1,No);
      param_2->CurBlock = 0;
      param_2->CurBlockUsed = 0;
      if ((param_2->Blocks).ArrayNum == 0) {
        UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(param_2);
      }
    }
    goto LAB_143440797;
  }
  pvVar17 = (void *)0x0;
  bVar9 = true;
  uVar23 = 0;
  uVar19 = auStackX_18[0] - 1 >> 9;
  if (auStackX_18[0] == 0) {
    uVar19 = uVar23;
  }
  param_2->CurBlock = uVar19;
  uVar19 = uVar23;
  if (auStackX_18[0] != 0) {
    uVar19 = (auStackX_18[0] - 1 & 0x1ff) + 1;
  }
  param_2->CurBlockUsed = uVar19;
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    auStack_90[0] = (uint)((param_1->field_0x28 & 1) == 0);
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,auStack_90,4);
    if (1 < auStack_90[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    bVar16 = param_1->field_0x28;
    uVar19 = auStack_90[0];
    if ((bVar16 & 1) != 0) goto LAB_143440310;
  }
  else {
    uVar19 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
    bVar16 = param_1->field_0x28;
LAB_143440310:
    bVar9 = uVar19 != 0;
  }
  uVar19 = (uint)((auStackX_18[0] & 0x1ff) != 0) + (auStackX_18[0] >> 9);
  uVar24 = (ulonglong)uVar19;
  if (bVar9) {
    TStack_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_60.ArrayNum = 0;
    TStack_60.ArrayMax = 0;
    TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&TStack_60,auStackX_18[0],Default);
    uVar18 = (ulonglong)auStackX_18[0];
    FVar22.Data = TStack_60.AllocatorInstance.Data;
    if (((param_1->field_0x28 & 1) == 0) && (pvVar12 = pvVar17, uVar19 != 0)) {
      do {
        uVar20 = (uint)pvVar12;
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        uVar21 = uVar23;
        if ((int)uVar20 < (param_2->Blocks).ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        memcpy(FVar22.Data,
               *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar20 * 8),
               uVar14 * 0xc);
        FVar22.Data = FVar22.Data + 0x1800;
        uVar18 = uVar18 - 0x200;
        pvVar12 = (void *)(ulonglong)(uVar20 + 1);
        pFStack_78 = FVar22.Data;
      } while (uVar20 + 1 < uVar19);
    }
    FVar11 = FNameEntryId::FromValidEName((EName)auStack_40);
    uStack_4c = 0;
    FStack_50.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
    FVar11 = FNameEntryId::FromValidEName((EName)auStack_3c);
    uStack_48 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    uStack_44 = 0;
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = uStack_48;
    FVar7.Number = uStack_4c;
    FVar7.ComparisonIndex.Value = FStack_50.Value;
    FArchive::SerializeCompressedNew
              (param_1,TStack_60.AllocatorInstance.Data,(ulonglong)auStackX_18[0] * 0xc,FVar8,FVar7,
               COMPRESS_NoFlags,false,(long64 *)0x0);
    if (((param_1->field_0x28 & 1) != 0) &&
       (UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(param_2,uVar19), uVar19 != 0
       )) {
      do {
        pvVar12 = ::operator_new(0x1800);
        pvStack_88 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            pvStack_88 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar14 = 0x200;
        if (uVar18 < 0x200) {
          uVar14 = uVar18;
        }
        memcpy(pvStack_88,FVar22.Data,uVar14 * 0xc);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_88) &&
            ((FScriptContainerElement *)&pvStack_88 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (param_2->Blocks).ArrayNum;
        if (iVar10 == (param_2->Blocks).ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax
                             );
        }
        FVar22.Data = FVar22.Data + 0x1800;
        (param_2->Blocks).ArrayNum = iVar10 + 1;
        uVar18 = uVar18 - 0x200;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = pvStack_88;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    if (TStack_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_60.AllocatorInstance.Data);
    }
  }
  else if ((bVar16 & 1) == 0) {
    if (uVar19 != 0) {
      do {
        uVar23 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar23 = auStackX_18[0];
        }
        uVar21 = (uint)pvVar17;
        uVar20 = 0;
        if ((int)uVar21 < (param_2->Blocks).ArrayNum) {
          uVar20 = ~uVar21 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,*(undefined8 *)
                            ((param_2->Blocks).AllocatorInstance.Data + (longlong)(int)uVar21 * 8),
                   (ulonglong)uVar23 * 0xc);
        pvVar17 = (void *)(ulonglong)(uVar21 + 1);
        auStackX_18[0] = auStackX_18[0] - 0x200;
      } while (uVar21 + 1 < uVar19);
    }
  }
  else {
    UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Empty(param_2,uVar19);
    if (uVar19 != 0) {
      do {
        pvVar12 = ::operator_new(0x1800);
        pvStack_80 = pvVar17;
        if (pvVar12 != (void *)0x0) {
          lVar15 = 0x200;
          puVar13 = (undefined4 *)((longlong)pvVar12 + 8);
          do {
            *(undefined8 *)(puVar13 + -2) = 0xffffffffffffffff;
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 3;
            lVar15 = lVar15 + -1;
            pvStack_80 = pvVar12;
          } while (lVar15 != 0);
        }
        uVar19 = 0x200;
        if (auStackX_18[0] < 0x200) {
          uVar19 = auStackX_18[0];
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvStack_80,(ulonglong)uVar19 * 0xc);
        pFVar2 = (param_2->Blocks).AllocatorInstance.Data;
        if (((pFVar2 <= (FScriptContainerElement *)&pvStack_80) &&
            ((FScriptContainerElement *)&pvStack_80 <
             pFVar2 + (longlong)(param_2->Blocks).ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (param_2->Blocks).ArrayNum;
        if (iVar10 == (param_2->Blocks).ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(param_2->Blocks).AllocatorInstance,&(param_2->Blocks).ArrayMax
                             );
        }
        (param_2->Blocks).ArrayNum = iVar10 + 1;
        *(void **)((param_2->Blocks).AllocatorInstance.Data + (longlong)iVar10 * 8) = pvStack_80;
        auStackX_18[0] = auStackX_18[0] - 0x200;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
LAB_143440797:
  if (((param_1->field_0x28 & 1) != 0) && ((param_2->Blocks).ArrayNum == 0)) {
    UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::AddAllocatedBlock(param_2);
  }
  return;
}

// RecomputeVertexRefCounts @ 143515230

void __cdecl
FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts
          (ulong64 param_1,TDynamicVector<UE::Geometry::FIndex3i,512> *param_2,
          FRefCountVector *param_3,FRefCountVector *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  <lambda_2> local_res8 [8];
  <lambda_3> local_res10 [8];
  TDynamicVector<UE::Geometry::FIndex3i,512> *local_38;
  FRefCountVector *local_30;
  <lambda_1> local_28;
  
  local_res8[0] = (<lambda_2>)0x0;
  local_res10[0] = (<lambda_3>)0x0;
  uVar3 = (uint)param_1;
  local_38 = param_2;
  local_30 = param_3;
  UE::Geometry::TDynamicVector<unsigned_short,512>::Resize(&param_4->RefCounts,uVar3);
  UE::Geometry::TDynamicVector<unsigned_short,512>::Fill
            (&param_4->RefCounts,&UE::Geometry::FRefCountVector::INVALID_REF_COUNT);
  local_28.AllocateRefCount = local_res8;
  param_4->UsedCount = 0;
  local_28.IncrementRefCount = local_res10;
  local_28.__this = param_4;
  `FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts'::__l2::<lambda_1>::
  operator()<_UE::Geometry::FRefCountVector::Rebuild<_FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts_::__l2::<lambda_1>_const_&,_FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts_::__l2::<lambda_2>_const_&,_FDynamicMesh3Serialization_Local::RecomputeVertexRefCounts_::__l2::<lambda_3>_const_&>_::__l2::<lambda_1>_const_&>
            (&local_38,&local_28);
  uVar5 = uVar3 - param_4->UsedCount;
  UE::Geometry::TDynamicVector<int,512>::Resize(&param_4->FreeIndices,uVar5);
  uVar6 = 0;
  uVar2 = 0;
  if (uVar5 != 0 && uVar3 != 0) {
    do {
      if (*(short *)(*(longlong *)
                      ((param_4->RefCounts).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar2 >> 9) * 8) + (ulonglong)(uVar2 & 0x1ff) * 2) == -1) {
        uVar4 = uVar6 & 0x1ff;
        uVar1 = uVar6 >> 9;
        uVar6 = uVar6 + 1;
        *(uint *)(*(longlong *)
                   ((param_4->FreeIndices).Blocks.AllocatorInstance.Data + (ulonglong)uVar1 * 8) +
                 (ulonglong)uVar4 * 4) = uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar6 < uVar5 && uVar2 < uVar3);
  }
  return;
}

// ResetDenseTriangleRefCounts @ 143518d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDynamicMesh3Serialization_Local::ResetDenseTriangleRefCounts
          (ulong64 param_1,FRefCountVector *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  
  UE::Geometry::TDynamicVector<int,512>::TruncateBlocks(&param_2->FreeIndices,1,No);
  iVar1 = (param_2->FreeIndices).Blocks.ArrayNum;
  (param_2->FreeIndices).CurBlock = 0;
  (param_2->FreeIndices).CurBlockUsed = 0;
  if (iVar1 == 0) {
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&param_2->FreeIndices);
  }
  UE::Geometry::TDynamicVector<unsigned_short,512>::Resize(&param_2->RefCounts,(uint)param_1);
  uVar6 = 0;
  param_2->UsedCount = (uint)param_1;
  uVar2 = (param_2->RefCounts).Blocks.ArrayNum;
  if (uVar2 != 0) {
    do {
      if (uVar6 < uVar2 - 1) {
        uVar5 = 0x200;
LAB_143518da5:
        uVar3 = 0;
        do {
          lVar4 = (longlong)(int)uVar3;
          uVar3 = uVar3 + 1;
          *(undefined2 *)
           (*(longlong *)
             ((param_2->RefCounts).Blocks.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
           lVar4 * 2) = 1;
        } while (uVar3 < uVar5);
      }
      else {
        uVar5 = ((param_2->RefCounts).CurBlock - (uVar2 - 1)) * 0x200 +
                (param_2->RefCounts).CurBlockUsed;
        if (uVar5 != 0) goto LAB_143518da5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return;
}

// SerializeAttributeSet @ 14352b020

void __cdecl
FDynamicMesh3Serialization_Local::SerializeAttributeSet
          (FArchive *param_1,FDynamicMesh3 *param_2,FCompactMaps *param_3,
          FDynamicMesh3SerializationOptions *param_4)

{
  int *piVar1;
  FDynamicMeshAttributeSet *pFVar2;
  ulonglong *puVar3;
  FDynamicMeshAttributeSet *pFVar4;
  bool bVar5;
  uint local_res8 [2];
  
  pFVar2 = (param_2->AttributeSet).Ptr;
  pFVar4 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar4 = pFVar2;
  }
  bVar5 = pFVar4 != (FDynamicMeshAttributeSet *)0x0;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    local_res8[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res8[0] = (uint)(pFVar4 != (FDynamicMeshAttributeSet *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      bVar5 = local_res8[0] != 0;
      goto LAB_14352b07d;
    }
  }
  else {
    bVar5 = *(int *)*puVar3 != 0;
    *puVar3 = (ulonglong)piVar1;
    if ((param_1->field_0x28 & 1) != 0) {
LAB_14352b07d:
      if (!bVar5) {
        pFVar2 = (param_2->AttributeSet).Ptr;
        (param_2->AttributeSet).Ptr = (FDynamicMeshAttributeSet *)0x0;
        if (pFVar2 == (FDynamicMeshAttributeSet *)0x0) {
          return;
        }
        (**(code **)pFVar2->_padding_)(pFVar2,1);
        return;
      }
      UE::Geometry::FDynamicMesh3::EnableAttributes(param_2);
      goto LAB_14352b100;
    }
  }
  if (!bVar5) {
    return;
  }
LAB_14352b100:
  pFVar2 = (param_2->AttributeSet).Ptr;
  pFVar4 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar4 = pFVar2;
  }
  UE::Geometry::FDynamicMeshAttributeSet::Serialize(pFVar4,param_1,param_3,param_4->bUseCompression)
  ;
  return;
}

// SerializeRefCounts @ 14352b140

void __cdecl
FDynamicMesh3Serialization_Local::SerializeRefCounts
          (FArchive *param_1,FRefCountVector *param_2,FDynamicMesh3SerializationOptions *param_3)

{
  UE::Geometry::FRefCountVector::Serialize
            (param_2,param_1,param_3->bCompactData,param_3->bUseCompression);
  return;
}

// SerializeSmallListSet @ 14352b160

void __cdecl
FDynamicMesh3Serialization_Local::SerializeSmallListSet
          (FArchive *param_1,FSmallListSet *param_2,FDynamicMesh3SerializationOptions *param_3)

{
  UE::Geometry::FSmallListSet::Serialize
            (param_2,param_1,param_3->bCompactData,param_3->bUseCompression);
  return;
}

// SerializeUniqueTriangleData @ 14352b180

void __cdecl
FDynamicMesh3Serialization_Local::SerializeUniqueTriangleData
          (FArchive *param_1,TDynamicVector<UE::Geometry::FIndex3i,512> *param_2,
          TOptional<UE::Geometry::TDynamicVector<int,512>_> *param_3,int *param_4,
          FDynamicMesh3SerializationOptions *param_5)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  int *piVar5;
  code *pcVar6;
  FDynamicMesh3SerializationOptions *pFVar7;
  FDynamicMesh3SerializationOptions *pFVar8;
  bool bVar9;
  char cVar10;
  
  pFVar8 = param_5;
  if (param_5->bUseCompression == false) {
    UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,0>(param_2,param_1);
    pFVar7 = param_5;
  }
  else {
    UE::Geometry::TDynamicVector<UE::Geometry::FIndex3i,512>::Serialize<1,1>(param_2,param_1);
    pFVar7 = param_5;
  }
  param_5._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  cVar10 = param_3->bIsSet;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    param_5._0_4_ = 0;
    if ((*puVar1 & 1) == 0) {
      param_5._0_4_ = (uint)((bool)cVar10 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_5,4);
    if (1 < (uint)param_5) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    pFVar7 = (FDynamicMesh3SerializationOptions *)CONCAT44(param_5._4_4_,(uint)param_5);
    if ((*puVar1 & 1) == 0) goto LAB_14352b23d;
  }
  else {
    param_5._0_4_ = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  cVar10 = (uint)param_5 != 0;
LAB_14352b23d:
  param_5 = pFVar7;
  if (cVar10 != '\0') {
    if ((*puVar1 & 1) != 0) {
      if (param_3->bIsSet != false) {
        UE::Geometry::TDynamicVector<int,512>::Empty(&param_3->TypedValue,0);
        pFVar4 = (param_3->TypedValue).Blocks.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
      }
      (param_3->TypedValue).CurBlock = 0;
      (param_3->TypedValue).CurBlockUsed = 0;
      (param_3->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_3->TypedValue).Blocks.ArrayNum = 0;
      (param_3->TypedValue).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&param_3->TypedValue);
      param_3->bIsSet = true;
    }
    if (param_3->bIsSet == false) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (pFVar8->bUseCompression == false) {
      UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>(&param_3->TypedValue,param_1);
    }
    else {
      UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>(&param_3->TypedValue,param_1);
    }
  }
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_4);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014352b31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_4,4);
    return;
  }
  *param_4 = *piVar5;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  return;
}

// SerializeUniqueVertexData @ 14352b340

void __cdecl
FDynamicMesh3Serialization_Local::SerializeUniqueVertexData
          (FArchive *param_1,TDynamicVector<UE::Math::TVector<double>,512> *param_2,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_3,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector<float>,512>_> *param_4,
          TOptional<UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>_> *param_5,
          FDynamicMesh3SerializationOptions *param_6)

{
  undefined1 *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FDynamicMesh3SerializationOptions *pFVar7;
  bool bVar8;
  char cVar9;
  
  pFVar7 = param_6;
  if (param_6->bUseCompression == false) {
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,0>(param_2,param_1);
  }
  else {
    UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Serialize<1,1>(param_2,param_1);
  }
  SerializeOptionalVector<UE::Math::TVector<float>_>(param_1,param_3,pFVar7);
  SerializeOptionalVector<UE::Math::TVector<float>_>(param_1,param_4,pFVar7);
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  cVar9 = param_5->bIsSet;
  puVar2 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar2) {
    param_6._0_4_ = 0;
    if ((*puVar1 & 1) == 0) {
      param_6._0_4_ = (uint)((bool)cVar9 != false);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_6,4);
    if (1 < (uint)param_6) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar3 = (uint)param_6;
    if ((*puVar1 & 1) == 0) goto LAB_14352b415;
  }
  else {
    uVar3 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  cVar9 = uVar3 != 0;
LAB_14352b415:
  if (cVar9 != '\0') {
    if ((*puVar1 & 1) != 0) {
      if (param_5->bIsSet != false) {
        UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Empty(&param_5->TypedValue,0);
        pFVar5 = (param_5->TypedValue).Blocks.AllocatorInstance.Data;
        if (pFVar5 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar5);
        }
      }
      (param_5->TypedValue).CurBlock = 0;
      (param_5->TypedValue).CurBlockUsed = 0;
      (param_5->TypedValue).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_5->TypedValue).Blocks.ArrayNum = 0;
      (param_5->TypedValue).Blocks.ArrayMax = 0;
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::AddAllocatedBlock
                (&param_5->TypedValue);
      param_5->bIsSet = true;
    }
    if (param_5->bIsSet == false) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (pFVar7->bUseCompression == false) {
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,0>
                (&param_5->TypedValue,param_1);
    }
    else {
      UE::Geometry::TDynamicVector<UE::Math::TVector2<float>,512>::Serialize<1,1>
                (&param_5->TypedValue,param_1);
    }
  }
  return;
}

