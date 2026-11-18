// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 5

// Construct @ 146de5060

FRecastNavMeshCachedData * __cdecl
FRecastNavMeshCachedData::Construct
          (FRecastNavMeshCachedData *__return_storage_ptr__,ARecastNavMesh *param_1)

{
  ushort uVar1;
  int iVar2;
  FSupportedAreaData *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  FRecastNavMeshCachedData *pFVar8;
  UClass *pUVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  TPairInitializer<UClass_const_*_const_&,int_const_&> local_res8;
  UClass *local_res18;
  ForAnyElementType local_58;
  undefined8 local_50;
  UClass **local_48;
  FScriptContainerElement *local_40;
  
  if ((param_1 == (ARecastNavMesh *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RecastNavMeshActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavMesh\\RecastNavMesh.cpp"
                         ,0x10da,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRecastNavMeshCachedData *)(*pcVar5)();
    return pFVar8;
  }
  uVar12 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x0 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AreaClassToIdMap).field_0x48 = 0;
  (__return_storage_ptr__->ActorOwner).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8.Value = (int *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ARecastNavMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=
            (&(__return_storage_ptr__->ActorOwner).WeakPtr,(FObjectPtr)&local_res8.Value);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  *(uint *)&__return_storage_ptr__->field_0x158 =
       (ZPULL(*(undefined4 *)&__return_storage_ptr__->field_0x158,0,1) ^
       param_1->bSortNavigationAreasByCost) & 1 ^
       *(undefined4 *)&__return_storage_ptr__->field_0x158;
  if (&local_58 != (ForAnyElementType *)&param_1->_padding_) {
    DestructItems<FSupportedAreaData,int>((FSupportedAreaData *)0x0,0);
    iVar2 = (int)param_1->_padding_;
    pFVar3 = (FSupportedAreaData *)param_1->_padding_;
    local_50 = CONCAT44(local_50._4_4_,iVar2);
    if ((iVar2 == 0) && (local_50._4_4_ == 0)) {
      local_50 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar2,local_50._4_4_,&local_58,iVar2,(int *)((longlong)&local_50 + 4));
      ConstructItems<FSupportedAreaData,FSupportedAreaData,int>(local_58.Data,pFVar3,iVar2);
    }
  }
  __return_storage_ptr__->FlagsPerArea[0] = 0;
  __return_storage_ptr__->FlagsPerArea[1] = 0;
  __return_storage_ptr__->FlagsPerArea[2] = 0;
  __return_storage_ptr__->FlagsPerArea[3] = 0;
  __return_storage_ptr__->FlagsPerArea[4] = 0;
  __return_storage_ptr__->FlagsPerArea[5] = 0;
  __return_storage_ptr__->FlagsPerArea[6] = 0;
  __return_storage_ptr__->FlagsPerArea[7] = 0;
  __return_storage_ptr__->FlagsPerArea[8] = 0;
  __return_storage_ptr__->FlagsPerArea[9] = 0;
  __return_storage_ptr__->FlagsPerArea[10] = 0;
  __return_storage_ptr__->FlagsPerArea[0xb] = 0;
  __return_storage_ptr__->FlagsPerArea[0xc] = 0;
  __return_storage_ptr__->FlagsPerArea[0xd] = 0;
  __return_storage_ptr__->FlagsPerArea[0xe] = 0;
  __return_storage_ptr__->FlagsPerArea[0xf] = 0;
  __return_storage_ptr__->FlagsPerArea[0x10] = 0;
  __return_storage_ptr__->FlagsPerArea[0x11] = 0;
  __return_storage_ptr__->FlagsPerArea[0x12] = 0;
  __return_storage_ptr__->FlagsPerArea[0x13] = 0;
  __return_storage_ptr__->FlagsPerArea[0x14] = 0;
  __return_storage_ptr__->FlagsPerArea[0x15] = 0;
  __return_storage_ptr__->FlagsPerArea[0x16] = 0;
  __return_storage_ptr__->FlagsPerArea[0x17] = 0;
  __return_storage_ptr__->FlagsPerArea[0x18] = 0;
  __return_storage_ptr__->FlagsPerArea[0x19] = 0;
  __return_storage_ptr__->FlagsPerArea[0x1a] = 0;
  __return_storage_ptr__->FlagsPerArea[0x1b] = 0;
  __return_storage_ptr__->FlagsPerArea[0x1c] = 0;
  __return_storage_ptr__->FlagsPerArea[0x1d] = 0;
  __return_storage_ptr__->FlagsPerArea[0x1e] = 0;
  __return_storage_ptr__->FlagsPerArea[0x1f] = 0;
  __return_storage_ptr__->FlagsPerArea[0x20] = 0;
  __return_storage_ptr__->FlagsPerArea[0x21] = 0;
  __return_storage_ptr__->FlagsPerArea[0x22] = 0;
  __return_storage_ptr__->FlagsPerArea[0x23] = 0;
  __return_storage_ptr__->FlagsPerArea[0x24] = 0;
  __return_storage_ptr__->FlagsPerArea[0x25] = 0;
  __return_storage_ptr__->FlagsPerArea[0x26] = 0;
  __return_storage_ptr__->FlagsPerArea[0x27] = 0;
  __return_storage_ptr__->FlagsPerArea[0x28] = 0;
  __return_storage_ptr__->FlagsPerArea[0x29] = 0;
  __return_storage_ptr__->FlagsPerArea[0x2a] = 0;
  __return_storage_ptr__->FlagsPerArea[0x2b] = 0;
  __return_storage_ptr__->FlagsPerArea[0x2c] = 0;
  __return_storage_ptr__->FlagsPerArea[0x2d] = 0;
  __return_storage_ptr__->FlagsPerArea[0x2e] = 0;
  __return_storage_ptr__->FlagsPerArea[0x2f] = 0;
  __return_storage_ptr__->FlagsPerArea[0x30] = 0;
  __return_storage_ptr__->FlagsPerArea[0x31] = 0;
  __return_storage_ptr__->FlagsPerArea[0x32] = 0;
  __return_storage_ptr__->FlagsPerArea[0x33] = 0;
  __return_storage_ptr__->FlagsPerArea[0x34] = 0;
  __return_storage_ptr__->FlagsPerArea[0x35] = 0;
  __return_storage_ptr__->FlagsPerArea[0x36] = 0;
  __return_storage_ptr__->FlagsPerArea[0x37] = 0;
  __return_storage_ptr__->FlagsPerArea[0x38] = 0;
  __return_storage_ptr__->FlagsPerArea[0x39] = 0;
  __return_storage_ptr__->FlagsPerArea[0x3a] = 0;
  __return_storage_ptr__->FlagsPerArea[0x3b] = 0;
  __return_storage_ptr__->FlagsPerArea[0x3c] = 0;
  __return_storage_ptr__->FlagsPerArea[0x3d] = 0;
  __return_storage_ptr__->FlagsPerArea[0x3e] = 0;
  __return_storage_ptr__->FlagsPerArea[0x3f] = 0;
  uVar15 = uVar12;
  if (0 < (int)local_50) {
    do {
      uVar11 = (uint)uVar12;
      uVar14 = ~uVar11 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar11 < (int)local_50) {
        uVar16 = uVar14;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FRecastNavMeshCachedData *)(*pcVar5)();
        return pFVar8;
      }
      pUVar9 = *(UClass **)(local_58.Data + uVar15 + 0x18);
      local_res18 = pUVar9;
      if (pUVar9 != (UClass *)0x0) {
        if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar9);
        }
        pUVar4 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
        pUVar9 = Z_Construct_UClass_UNavArea_NoRegister();
        lVar10 = *(longlong *)&pUVar4->field_0x10;
        iVar2 = (int)pUVar9->_padding_;
        if (((*(int *)(lVar10 + 0x38) < iVar2) ||
            ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar2 * 8) !=
             &pUVar9->_padding_)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret->IsA(T::StaticClass())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x1181,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FRecastNavMeshCachedData *)(*pcVar5)();
          return pFVar8;
        }
        uVar16 = 0;
        if ((int)uVar11 < (int)local_50) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FRecastNavMeshCachedData *)(*pcVar5)();
          return pFVar8;
        }
        local_48 = &local_res18;
        local_40 = local_58.Data + (longlong)(int)uVar11 * 0x20 + 0x10;
        TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UClass_const_*_const_&,int_const_&>_>
                  ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                    *)&__return_storage_ptr__->AreaClassToIdMap,&local_res8,(bool *)&local_48);
        uVar1 = *(ushort *)&pUVar4[1].field_0x1c;
        uVar16 = 0;
        if ((int)uVar11 < (int)local_50) {
          uVar16 = uVar14;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FRecastNavMeshCachedData *)(*pcVar5)();
          return pFVar8;
        }
        __return_storage_ptr__->FlagsPerArea[*(int *)(local_58.Data + uVar15 + 0x10)] = uVar1;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar15 = uVar15 + 0x20;
    } while ((int)(uVar11 + 1) < (int)local_50);
  }
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 4);
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)__return_storage_ptr__->FlagsPerOffMeshLinkArea =
       *(undefined8 *)__return_storage_ptr__->FlagsPerArea;
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 4) = uVar6;
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0xc);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 8) =
       *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 8);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0xc) = uVar6;
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x14);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x10) =
       *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x10);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x14) = uVar6;
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x1c);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x18) =
       *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x18);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x1c) = uVar6;
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x24);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x20) =
       *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x20);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x24) = uVar6;
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x2c);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x28) =
       *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x28);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x2c) = uVar6;
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x34);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x30) =
       *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x30);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x34) = uVar6;
  uVar6 = *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x3c);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x38) =
       *(undefined8 *)(__return_storage_ptr__->FlagsPerArea + 0x38);
  *(undefined8 *)(__return_storage_ptr__->FlagsPerOffMeshLinkArea + 0x3c) = uVar6;
  if ((*(int *)(lVar10 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    NavLinkFlag = ARecastNavMesh::NavLinkFlag;
    _Init_thread_footer(&::_TSS0);
  }
  if (NavLinkFlag != 0) {
    lVar10 = 2;
    uVar16 = CONCAT22(NavLinkFlag,NavLinkFlag);
    puVar13 = __return_storage_ptr__->FlagsPerOffMeshLinkArea;
    do {
      *(uint *)puVar13 = *(uint *)puVar13 | uVar16;
      *(uint *)(puVar13 + 2) = *(uint *)(puVar13 + 2) | uVar16;
      *(uint *)(puVar13 + 4) = *(uint *)(puVar13 + 4) | uVar16;
      *(uint *)(puVar13 + 6) = *(uint *)(puVar13 + 6) | uVar16;
      *(uint *)(puVar13 + 8) = uVar16 | *(uint *)(puVar13 + 8);
      *(uint *)(puVar13 + 10) = uVar16 | *(uint *)(puVar13 + 10);
      *(uint *)(puVar13 + 0xc) = uVar16 | *(uint *)(puVar13 + 0xc);
      *(uint *)(puVar13 + 0xe) = uVar16 | *(uint *)(puVar13 + 0xe);
      *(uint *)(puVar13 + 0x10) = uVar16 | *(uint *)(puVar13 + 0x10);
      *(uint *)(puVar13 + 0x12) = uVar16 | *(uint *)(puVar13 + 0x12);
      *(uint *)(puVar13 + 0x14) = uVar16 | *(uint *)(puVar13 + 0x14);
      *(uint *)(puVar13 + 0x16) = uVar16 | *(uint *)(puVar13 + 0x16);
      *(uint *)(puVar13 + 0x18) = uVar16 | *(uint *)(puVar13 + 0x18);
      *(uint *)(puVar13 + 0x1a) = uVar16 | *(uint *)(puVar13 + 0x1a);
      *(uint *)(puVar13 + 0x1c) = uVar16 | *(uint *)(puVar13 + 0x1c);
      *(uint *)(puVar13 + 0x1e) = uVar16 | *(uint *)(puVar13 + 0x1e);
      lVar10 = lVar10 + -1;
      puVar13 = puVar13 + 0x20;
    } while (lVar10 != 0);
  }
  DestructItems<FSupportedAreaData,int>((FSupportedAreaData *)local_58.Data,(int)local_50);
  if ((FSupportedAreaData *)local_58.Data != (FSupportedAreaData *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return __return_storage_ptr__;
}

// OnAreaAdded @ 146e18ec0

void __thiscall
FRecastNavMeshCachedData::OnAreaAdded(FRecastNavMeshCachedData *this,UClass *param_1,int param_2)

{
  UNavArea *pUVar1;
  UClass *local_res10;
  int local_res18 [4];
  UClass **local_18;
  int *local_10;
  
  if (((param_1 != (UClass *)0x0) &&
      (local_res10 = param_1, local_res18[0] = param_2,
      pUVar1 = UClass::GetDefaultObject<UNavArea>(param_1), pUVar1 != (UNavArea *)0x0)) &&
     (-1 < local_res18[0])) {
    local_18 = &local_res10;
    local_10 = local_res18;
    TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UClass_const_*_const_&,int_const_&>_>
              ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                *)&this->AreaClassToIdMap,
               (TPairInitializer<UClass_const_*_const_&,int_const_&> *)(local_res18 + 2),
               (bool *)&local_18);
    this->FlagsPerArea[local_res18[0]] = pUVar1->AreaFlags;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      NavLinkFlag = ARecastNavMesh::NavLinkFlag;
      _Init_thread_footer(&::_TSS0);
    }
    if (NavLinkFlag != 0) {
      this->FlagsPerOffMeshLinkArea[local_res18[0]] =
           NavLinkFlag | this->FlagsPerArea[local_res18[0]];
    }
  }
  return;
}

// OnAreaRemoved @ 146e19200

void __thiscall
FRecastNavMeshCachedData::OnAreaRemoved(FRecastNavMeshCachedData *this,UClass *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  UClass *local_res10;
  
  if (param_1 != (UClass *)0x0) {
    piVar9 = (int *)0x0;
    iVar1 = *(int *)&(this->AreaClassToIdMap).field_0x8;
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    iVar2 = *(int *)&(this->AreaClassToIdMap).field_0x34;
    piVar5 = piVar9;
    if (iVar1 != iVar2) {
      puVar7 = *(undefined1 **)&(this->AreaClassToIdMap).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->AreaClassToIdMap).field_0x38;
      }
      iVar4 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->AreaClassToIdMap).field_0x48 - 1U & uVar6) * 4);
      if (iVar4 != -1) {
        lVar3 = *(longlong *)&(this->AreaClassToIdMap).field_0x0;
        do {
          piVar5 = (int *)(lVar3 + (longlong)iVar4 * 0x18);
          if (*(UClass **)(lVar3 + (longlong)iVar4 * 0x18) == param_1) break;
          iVar4 = piVar5[4];
          piVar5 = piVar9;
        } while (iVar4 != -1);
      }
    }
    piVar8 = piVar5 + 2;
    if (piVar5 == (int *)0x0) {
      piVar8 = piVar9;
    }
    if (piVar8 != (int *)0x0) {
      if (iVar1 != iVar2) {
        local_res10 = param_1;
        TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<UClass_const_*>
                  ((TSet<TTuple<UClass_const_*,int>,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>,FDefaultSetAllocator>
                    *)&this->AreaClassToIdMap,uVar6,&local_res10);
      }
      this->FlagsPerArea[*piVar8] = 0;
      this->FlagsPerOffMeshLinkArea[*piVar8] = 0;
    }
  }
  return;
}

// operator= @ 146e37d10

FRecastNavMeshCachedData * __thiscall
FRecastNavMeshCachedData::operator=
          (FRecastNavMeshCachedData *this,FRecastNavMeshCachedData *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  TMap<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
  *pTVar1;
  TMap<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
  *pTVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  FRecastNavMeshCachedData *pFVar8;
  longlong lVar9;
  
  if (((FRecastNavMeshCachedData *)(param_1->FlagsPerArea + 0x3f) < this) ||
     ((FRecastNavMeshCachedData *)(this->FlagsPerArea + 0x3f) < param_1)) {
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 4);
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 8);
    uVar6 = *(undefined8 *)(param_1->FlagsPerArea + 0xc);
    *(undefined8 *)this->FlagsPerArea = *(undefined8 *)param_1->FlagsPerArea;
    *(undefined8 *)(this->FlagsPerArea + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 0x10);
    uVar7 = *(undefined8 *)(param_1->FlagsPerArea + 0x14);
    *(undefined8 *)(this->FlagsPerArea + 8) = uVar5;
    *(undefined8 *)(this->FlagsPerArea + 0xc) = uVar6;
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 0x18);
    uVar6 = *(undefined8 *)(param_1->FlagsPerArea + 0x1c);
    *(undefined8 *)(this->FlagsPerArea + 0x10) = uVar4;
    *(undefined8 *)(this->FlagsPerArea + 0x14) = uVar7;
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 0x20);
    uVar7 = *(undefined8 *)(param_1->FlagsPerArea + 0x24);
    *(undefined8 *)(this->FlagsPerArea + 0x18) = uVar5;
    *(undefined8 *)(this->FlagsPerArea + 0x1c) = uVar6;
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 0x28);
    uVar6 = *(undefined8 *)(param_1->FlagsPerArea + 0x2c);
    *(undefined8 *)(this->FlagsPerArea + 0x20) = uVar4;
    *(undefined8 *)(this->FlagsPerArea + 0x24) = uVar7;
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 0x30);
    uVar7 = *(undefined8 *)(param_1->FlagsPerArea + 0x34);
    *(undefined8 *)(this->FlagsPerArea + 0x28) = uVar5;
    *(undefined8 *)(this->FlagsPerArea + 0x2c) = uVar6;
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 0x38);
    uVar6 = *(undefined8 *)(param_1->FlagsPerArea + 0x3c);
    *(undefined8 *)(this->FlagsPerArea + 0x30) = uVar4;
    *(undefined8 *)(this->FlagsPerArea + 0x34) = uVar7;
    *(undefined8 *)(this->FlagsPerArea + 0x38) = uVar5;
    *(undefined8 *)(this->FlagsPerArea + 0x3c) = uVar6;
  }
  else {
    lVar9 = 0x40;
    pFVar8 = this;
    do {
      pFVar8->FlagsPerArea[0] = *(ushort *)(((longlong)param_1 - (longlong)this) + (longlong)pFVar8)
      ;
      pFVar8 = (FRecastNavMeshCachedData *)(pFVar8->FlagsPerArea + 1);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  this->FlagsPerOffMeshLinkArea[0] = param_1->FlagsPerOffMeshLinkArea[0];
  this->FlagsPerOffMeshLinkArea[1] = param_1->FlagsPerOffMeshLinkArea[1];
  this->FlagsPerOffMeshLinkArea[2] = param_1->FlagsPerOffMeshLinkArea[2];
  this->FlagsPerOffMeshLinkArea[3] = param_1->FlagsPerOffMeshLinkArea[3];
  this->FlagsPerOffMeshLinkArea[4] = param_1->FlagsPerOffMeshLinkArea[4];
  this->FlagsPerOffMeshLinkArea[5] = param_1->FlagsPerOffMeshLinkArea[5];
  this->FlagsPerOffMeshLinkArea[6] = param_1->FlagsPerOffMeshLinkArea[6];
  this->FlagsPerOffMeshLinkArea[7] = param_1->FlagsPerOffMeshLinkArea[7];
  this->FlagsPerOffMeshLinkArea[8] = param_1->FlagsPerOffMeshLinkArea[8];
  this->FlagsPerOffMeshLinkArea[9] = param_1->FlagsPerOffMeshLinkArea[9];
  this->FlagsPerOffMeshLinkArea[10] = param_1->FlagsPerOffMeshLinkArea[10];
  this->FlagsPerOffMeshLinkArea[0xb] = param_1->FlagsPerOffMeshLinkArea[0xb];
  this->FlagsPerOffMeshLinkArea[0xc] = param_1->FlagsPerOffMeshLinkArea[0xc];
  this->FlagsPerOffMeshLinkArea[0xd] = param_1->FlagsPerOffMeshLinkArea[0xd];
  this->FlagsPerOffMeshLinkArea[0xe] = param_1->FlagsPerOffMeshLinkArea[0xe];
  this->FlagsPerOffMeshLinkArea[0xf] = param_1->FlagsPerOffMeshLinkArea[0xf];
  this->FlagsPerOffMeshLinkArea[0x10] = param_1->FlagsPerOffMeshLinkArea[0x10];
  this->FlagsPerOffMeshLinkArea[0x11] = param_1->FlagsPerOffMeshLinkArea[0x11];
  this->FlagsPerOffMeshLinkArea[0x12] = param_1->FlagsPerOffMeshLinkArea[0x12];
  this->FlagsPerOffMeshLinkArea[0x13] = param_1->FlagsPerOffMeshLinkArea[0x13];
  this->FlagsPerOffMeshLinkArea[0x14] = param_1->FlagsPerOffMeshLinkArea[0x14];
  this->FlagsPerOffMeshLinkArea[0x15] = param_1->FlagsPerOffMeshLinkArea[0x15];
  this->FlagsPerOffMeshLinkArea[0x16] = param_1->FlagsPerOffMeshLinkArea[0x16];
  this->FlagsPerOffMeshLinkArea[0x17] = param_1->FlagsPerOffMeshLinkArea[0x17];
  this->FlagsPerOffMeshLinkArea[0x18] = param_1->FlagsPerOffMeshLinkArea[0x18];
  this->FlagsPerOffMeshLinkArea[0x19] = param_1->FlagsPerOffMeshLinkArea[0x19];
  this->FlagsPerOffMeshLinkArea[0x1a] = param_1->FlagsPerOffMeshLinkArea[0x1a];
  this->FlagsPerOffMeshLinkArea[0x1b] = param_1->FlagsPerOffMeshLinkArea[0x1b];
  this->FlagsPerOffMeshLinkArea[0x1c] = param_1->FlagsPerOffMeshLinkArea[0x1c];
  this->FlagsPerOffMeshLinkArea[0x1d] = param_1->FlagsPerOffMeshLinkArea[0x1d];
  this->FlagsPerOffMeshLinkArea[0x1e] = param_1->FlagsPerOffMeshLinkArea[0x1e];
  this->FlagsPerOffMeshLinkArea[0x1f] = param_1->FlagsPerOffMeshLinkArea[0x1f];
  this->FlagsPerOffMeshLinkArea[0x20] = param_1->FlagsPerOffMeshLinkArea[0x20];
  this->FlagsPerOffMeshLinkArea[0x21] = param_1->FlagsPerOffMeshLinkArea[0x21];
  this->FlagsPerOffMeshLinkArea[0x22] = param_1->FlagsPerOffMeshLinkArea[0x22];
  this->FlagsPerOffMeshLinkArea[0x23] = param_1->FlagsPerOffMeshLinkArea[0x23];
  this->FlagsPerOffMeshLinkArea[0x24] = param_1->FlagsPerOffMeshLinkArea[0x24];
  this->FlagsPerOffMeshLinkArea[0x25] = param_1->FlagsPerOffMeshLinkArea[0x25];
  this->FlagsPerOffMeshLinkArea[0x26] = param_1->FlagsPerOffMeshLinkArea[0x26];
  this->FlagsPerOffMeshLinkArea[0x27] = param_1->FlagsPerOffMeshLinkArea[0x27];
  this->FlagsPerOffMeshLinkArea[0x28] = param_1->FlagsPerOffMeshLinkArea[0x28];
  pTVar1 = &param_1->AreaClassToIdMap;
  pTVar2 = &this->AreaClassToIdMap;
  this->FlagsPerOffMeshLinkArea[0x29] = param_1->FlagsPerOffMeshLinkArea[0x29];
  this->FlagsPerOffMeshLinkArea[0x2a] = param_1->FlagsPerOffMeshLinkArea[0x2a];
  this->FlagsPerOffMeshLinkArea[0x2b] = param_1->FlagsPerOffMeshLinkArea[0x2b];
  this->FlagsPerOffMeshLinkArea[0x2c] = param_1->FlagsPerOffMeshLinkArea[0x2c];
  this->FlagsPerOffMeshLinkArea[0x2d] = param_1->FlagsPerOffMeshLinkArea[0x2d];
  this->FlagsPerOffMeshLinkArea[0x2e] = param_1->FlagsPerOffMeshLinkArea[0x2e];
  this->FlagsPerOffMeshLinkArea[0x2f] = param_1->FlagsPerOffMeshLinkArea[0x2f];
  this->FlagsPerOffMeshLinkArea[0x30] = param_1->FlagsPerOffMeshLinkArea[0x30];
  this->FlagsPerOffMeshLinkArea[0x31] = param_1->FlagsPerOffMeshLinkArea[0x31];
  this->FlagsPerOffMeshLinkArea[0x32] = param_1->FlagsPerOffMeshLinkArea[0x32];
  this->FlagsPerOffMeshLinkArea[0x33] = param_1->FlagsPerOffMeshLinkArea[0x33];
  this->FlagsPerOffMeshLinkArea[0x34] = param_1->FlagsPerOffMeshLinkArea[0x34];
  this->FlagsPerOffMeshLinkArea[0x35] = param_1->FlagsPerOffMeshLinkArea[0x35];
  this->FlagsPerOffMeshLinkArea[0x36] = param_1->FlagsPerOffMeshLinkArea[0x36];
  this->FlagsPerOffMeshLinkArea[0x37] = param_1->FlagsPerOffMeshLinkArea[0x37];
  this->FlagsPerOffMeshLinkArea[0x38] = param_1->FlagsPerOffMeshLinkArea[0x38];
  this->FlagsPerOffMeshLinkArea[0x39] = param_1->FlagsPerOffMeshLinkArea[0x39];
  this->FlagsPerOffMeshLinkArea[0x3a] = param_1->FlagsPerOffMeshLinkArea[0x3a];
  this->FlagsPerOffMeshLinkArea[0x3b] = param_1->FlagsPerOffMeshLinkArea[0x3b];
  this->FlagsPerOffMeshLinkArea[0x3c] = param_1->FlagsPerOffMeshLinkArea[0x3c];
  this->FlagsPerOffMeshLinkArea[0x3d] = param_1->FlagsPerOffMeshLinkArea[0x3d];
  this->FlagsPerOffMeshLinkArea[0x3e] = param_1->FlagsPerOffMeshLinkArea[0x3e];
  this->FlagsPerOffMeshLinkArea[0x3f] = param_1->FlagsPerOffMeshLinkArea[0x3f];
  if (pTVar2 != pTVar1) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    _Src = &(param_1->AreaClassToIdMap).field_0x10;
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
    _Dst = &(this->AreaClassToIdMap).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->AreaClassToIdMap).field_0x8 =
         *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x8;
    *(undefined4 *)&(this->AreaClassToIdMap).field_0xc =
         *(undefined4 *)&(param_1->AreaClassToIdMap).field_0xc;
    *(undefined8 *)&(param_1->AreaClassToIdMap).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->AreaClassToIdMap).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->AreaClassToIdMap).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->AreaClassToIdMap).field_0x20 =
           *(undefined8 *)&(param_1->AreaClassToIdMap).field_0x20;
      *(undefined8 *)&(param_1->AreaClassToIdMap).field_0x20 = 0;
      *(undefined4 *)&(this->AreaClassToIdMap).field_0x28 =
           *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x28;
      *(undefined4 *)&(this->AreaClassToIdMap).field_0x2c =
           *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x2c;
      *(undefined8 *)&(param_1->AreaClassToIdMap).field_0x28 = 0;
    }
    *(undefined4 *)&(this->AreaClassToIdMap).field_0x30 =
         *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x30;
    *(undefined4 *)&(this->AreaClassToIdMap).field_0x34 =
         *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x34;
    *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x34 = 0;
    if (*(longlong *)&(param_1->AreaClassToIdMap).field_0x40 == 0) {
      *(undefined4 *)&(this->AreaClassToIdMap).field_0x38 =
           *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x38;
    }
    pvVar3 = *(void **)&(this->AreaClassToIdMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    *(undefined8 *)&(this->AreaClassToIdMap).field_0x40 =
         *(undefined8 *)&(param_1->AreaClassToIdMap).field_0x40;
    *(undefined8 *)&(param_1->AreaClassToIdMap).field_0x40 = 0;
    *(undefined4 *)&(this->AreaClassToIdMap).field_0x48 =
         *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x48;
    *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x48 = 0;
  }
  (this->ActorOwner).WeakPtr = (param_1->ActorOwner).WeakPtr;
  *(uint *)&this->field_0x158 =
       (ZPULL(*(undefined4 *)&this->field_0x158,0,1) ^ param_1->bUseSortFunction) & 1 ^
       *(undefined4 *)&this->field_0x158;
  return this;
}

// operator= @ 146e38260

FRecastNavMeshCachedData * __thiscall
FRecastNavMeshCachedData::operator=
          (FRecastNavMeshCachedData *this,FRecastNavMeshCachedData *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  TMap<UClass_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,int,0>_>
  *this_01;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FRecastNavMeshCachedData *pFVar7;
  longlong lVar8;
  
  if (((FRecastNavMeshCachedData *)(param_1->FlagsPerArea + 0x3f) < this) ||
     ((FRecastNavMeshCachedData *)(this->FlagsPerArea + 0x3f) < param_1)) {
    uVar3 = *(undefined8 *)(param_1->FlagsPerArea + 4);
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 8);
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 0xc);
    *(undefined8 *)this->FlagsPerArea = *(undefined8 *)param_1->FlagsPerArea;
    *(undefined8 *)(this->FlagsPerArea + 4) = uVar3;
    uVar3 = *(undefined8 *)(param_1->FlagsPerArea + 0x10);
    uVar6 = *(undefined8 *)(param_1->FlagsPerArea + 0x14);
    *(undefined8 *)(this->FlagsPerArea + 8) = uVar4;
    *(undefined8 *)(this->FlagsPerArea + 0xc) = uVar5;
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 0x18);
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 0x1c);
    *(undefined8 *)(this->FlagsPerArea + 0x10) = uVar3;
    *(undefined8 *)(this->FlagsPerArea + 0x14) = uVar6;
    uVar3 = *(undefined8 *)(param_1->FlagsPerArea + 0x20);
    uVar6 = *(undefined8 *)(param_1->FlagsPerArea + 0x24);
    *(undefined8 *)(this->FlagsPerArea + 0x18) = uVar4;
    *(undefined8 *)(this->FlagsPerArea + 0x1c) = uVar5;
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 0x28);
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 0x2c);
    *(undefined8 *)(this->FlagsPerArea + 0x20) = uVar3;
    *(undefined8 *)(this->FlagsPerArea + 0x24) = uVar6;
    uVar3 = *(undefined8 *)(param_1->FlagsPerArea + 0x30);
    uVar6 = *(undefined8 *)(param_1->FlagsPerArea + 0x34);
    *(undefined8 *)(this->FlagsPerArea + 0x28) = uVar4;
    *(undefined8 *)(this->FlagsPerArea + 0x2c) = uVar5;
    uVar4 = *(undefined8 *)(param_1->FlagsPerArea + 0x38);
    uVar5 = *(undefined8 *)(param_1->FlagsPerArea + 0x3c);
    *(undefined8 *)(this->FlagsPerArea + 0x30) = uVar3;
    *(undefined8 *)(this->FlagsPerArea + 0x34) = uVar6;
    *(undefined8 *)(this->FlagsPerArea + 0x38) = uVar4;
    *(undefined8 *)(this->FlagsPerArea + 0x3c) = uVar5;
  }
  else {
    lVar8 = 0x40;
    pFVar7 = this;
    do {
      pFVar7->FlagsPerArea[0] = *(ushort *)(((longlong)param_1 - (longlong)this) + (longlong)pFVar7)
      ;
      pFVar7 = (FRecastNavMeshCachedData *)(pFVar7->FlagsPerArea + 1);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  this->FlagsPerOffMeshLinkArea[0] = param_1->FlagsPerOffMeshLinkArea[0];
  this->FlagsPerOffMeshLinkArea[1] = param_1->FlagsPerOffMeshLinkArea[1];
  this->FlagsPerOffMeshLinkArea[2] = param_1->FlagsPerOffMeshLinkArea[2];
  this->FlagsPerOffMeshLinkArea[3] = param_1->FlagsPerOffMeshLinkArea[3];
  this->FlagsPerOffMeshLinkArea[4] = param_1->FlagsPerOffMeshLinkArea[4];
  this->FlagsPerOffMeshLinkArea[5] = param_1->FlagsPerOffMeshLinkArea[5];
  this->FlagsPerOffMeshLinkArea[6] = param_1->FlagsPerOffMeshLinkArea[6];
  this->FlagsPerOffMeshLinkArea[7] = param_1->FlagsPerOffMeshLinkArea[7];
  this->FlagsPerOffMeshLinkArea[8] = param_1->FlagsPerOffMeshLinkArea[8];
  this->FlagsPerOffMeshLinkArea[9] = param_1->FlagsPerOffMeshLinkArea[9];
  this->FlagsPerOffMeshLinkArea[10] = param_1->FlagsPerOffMeshLinkArea[10];
  this->FlagsPerOffMeshLinkArea[0xb] = param_1->FlagsPerOffMeshLinkArea[0xb];
  this->FlagsPerOffMeshLinkArea[0xc] = param_1->FlagsPerOffMeshLinkArea[0xc];
  this->FlagsPerOffMeshLinkArea[0xd] = param_1->FlagsPerOffMeshLinkArea[0xd];
  this->FlagsPerOffMeshLinkArea[0xe] = param_1->FlagsPerOffMeshLinkArea[0xe];
  this->FlagsPerOffMeshLinkArea[0xf] = param_1->FlagsPerOffMeshLinkArea[0xf];
  this->FlagsPerOffMeshLinkArea[0x10] = param_1->FlagsPerOffMeshLinkArea[0x10];
  this->FlagsPerOffMeshLinkArea[0x11] = param_1->FlagsPerOffMeshLinkArea[0x11];
  this->FlagsPerOffMeshLinkArea[0x12] = param_1->FlagsPerOffMeshLinkArea[0x12];
  this->FlagsPerOffMeshLinkArea[0x13] = param_1->FlagsPerOffMeshLinkArea[0x13];
  this->FlagsPerOffMeshLinkArea[0x14] = param_1->FlagsPerOffMeshLinkArea[0x14];
  this->FlagsPerOffMeshLinkArea[0x15] = param_1->FlagsPerOffMeshLinkArea[0x15];
  this->FlagsPerOffMeshLinkArea[0x16] = param_1->FlagsPerOffMeshLinkArea[0x16];
  this->FlagsPerOffMeshLinkArea[0x17] = param_1->FlagsPerOffMeshLinkArea[0x17];
  this->FlagsPerOffMeshLinkArea[0x18] = param_1->FlagsPerOffMeshLinkArea[0x18];
  this->FlagsPerOffMeshLinkArea[0x19] = param_1->FlagsPerOffMeshLinkArea[0x19];
  this->FlagsPerOffMeshLinkArea[0x1a] = param_1->FlagsPerOffMeshLinkArea[0x1a];
  this->FlagsPerOffMeshLinkArea[0x1b] = param_1->FlagsPerOffMeshLinkArea[0x1b];
  this->FlagsPerOffMeshLinkArea[0x1c] = param_1->FlagsPerOffMeshLinkArea[0x1c];
  this->FlagsPerOffMeshLinkArea[0x1d] = param_1->FlagsPerOffMeshLinkArea[0x1d];
  this->FlagsPerOffMeshLinkArea[0x1e] = param_1->FlagsPerOffMeshLinkArea[0x1e];
  this->FlagsPerOffMeshLinkArea[0x1f] = param_1->FlagsPerOffMeshLinkArea[0x1f];
  this->FlagsPerOffMeshLinkArea[0x20] = param_1->FlagsPerOffMeshLinkArea[0x20];
  this->FlagsPerOffMeshLinkArea[0x21] = param_1->FlagsPerOffMeshLinkArea[0x21];
  this->FlagsPerOffMeshLinkArea[0x22] = param_1->FlagsPerOffMeshLinkArea[0x22];
  this->FlagsPerOffMeshLinkArea[0x23] = param_1->FlagsPerOffMeshLinkArea[0x23];
  this->FlagsPerOffMeshLinkArea[0x24] = param_1->FlagsPerOffMeshLinkArea[0x24];
  this->FlagsPerOffMeshLinkArea[0x25] = param_1->FlagsPerOffMeshLinkArea[0x25];
  this->FlagsPerOffMeshLinkArea[0x26] = param_1->FlagsPerOffMeshLinkArea[0x26];
  this->FlagsPerOffMeshLinkArea[0x27] = param_1->FlagsPerOffMeshLinkArea[0x27];
  this->FlagsPerOffMeshLinkArea[0x28] = param_1->FlagsPerOffMeshLinkArea[0x28];
  this_01 = &this->AreaClassToIdMap;
  this->FlagsPerOffMeshLinkArea[0x29] = param_1->FlagsPerOffMeshLinkArea[0x29];
  this->FlagsPerOffMeshLinkArea[0x2a] = param_1->FlagsPerOffMeshLinkArea[0x2a];
  this->FlagsPerOffMeshLinkArea[0x2b] = param_1->FlagsPerOffMeshLinkArea[0x2b];
  this->FlagsPerOffMeshLinkArea[0x2c] = param_1->FlagsPerOffMeshLinkArea[0x2c];
  this->FlagsPerOffMeshLinkArea[0x2d] = param_1->FlagsPerOffMeshLinkArea[0x2d];
  this->FlagsPerOffMeshLinkArea[0x2e] = param_1->FlagsPerOffMeshLinkArea[0x2e];
  this->FlagsPerOffMeshLinkArea[0x2f] = param_1->FlagsPerOffMeshLinkArea[0x2f];
  this->FlagsPerOffMeshLinkArea[0x30] = param_1->FlagsPerOffMeshLinkArea[0x30];
  this->FlagsPerOffMeshLinkArea[0x31] = param_1->FlagsPerOffMeshLinkArea[0x31];
  this->FlagsPerOffMeshLinkArea[0x32] = param_1->FlagsPerOffMeshLinkArea[0x32];
  this->FlagsPerOffMeshLinkArea[0x33] = param_1->FlagsPerOffMeshLinkArea[0x33];
  this->FlagsPerOffMeshLinkArea[0x34] = param_1->FlagsPerOffMeshLinkArea[0x34];
  this->FlagsPerOffMeshLinkArea[0x35] = param_1->FlagsPerOffMeshLinkArea[0x35];
  this->FlagsPerOffMeshLinkArea[0x36] = param_1->FlagsPerOffMeshLinkArea[0x36];
  this->FlagsPerOffMeshLinkArea[0x37] = param_1->FlagsPerOffMeshLinkArea[0x37];
  this->FlagsPerOffMeshLinkArea[0x38] = param_1->FlagsPerOffMeshLinkArea[0x38];
  this->FlagsPerOffMeshLinkArea[0x39] = param_1->FlagsPerOffMeshLinkArea[0x39];
  this->FlagsPerOffMeshLinkArea[0x3a] = param_1->FlagsPerOffMeshLinkArea[0x3a];
  this->FlagsPerOffMeshLinkArea[0x3b] = param_1->FlagsPerOffMeshLinkArea[0x3b];
  this->FlagsPerOffMeshLinkArea[0x3c] = param_1->FlagsPerOffMeshLinkArea[0x3c];
  this->FlagsPerOffMeshLinkArea[0x3d] = param_1->FlagsPerOffMeshLinkArea[0x3d];
  this->FlagsPerOffMeshLinkArea[0x3e] = param_1->FlagsPerOffMeshLinkArea[0x3e];
  this->FlagsPerOffMeshLinkArea[0x3f] = param_1->FlagsPerOffMeshLinkArea[0x3f];
  if (this_01 != &param_1->AreaClassToIdMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->AreaClassToIdMap).field_0x38,
               (int *)&(this->AreaClassToIdMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->AreaClassToIdMap).field_0x38,
               *(int *)&(param_1->AreaClassToIdMap).field_0x48);
    iVar2 = *(int *)&(param_1->AreaClassToIdMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<UClass_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,(ForAnyElementType *)this_01,(int *)&(this->AreaClassToIdMap).field_0x8,
               (int *)&(this->AreaClassToIdMap).field_0xc);
    puVar1 = &(param_1->AreaClassToIdMap).field_0x10;
    this_00 = &(this->AreaClassToIdMap).field_0x10;
    *(undefined4 *)&(this->AreaClassToIdMap).field_0x30 =
         *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x30;
    *(undefined4 *)&(this->AreaClassToIdMap).field_0x34 =
         *(undefined4 *)&(param_1->AreaClassToIdMap).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->AreaClassToIdMap,(longlong)iVar2 * 0x18);
    }
  }
  (this->ActorOwner).WeakPtr = (param_1->ActorOwner).WeakPtr;
  *(uint *)&this->field_0x158 =
       (ZPULL(*(undefined4 *)&this->field_0x158,0,1) ^ param_1->bUseSortFunction) & 1 ^
       *(undefined4 *)&this->field_0x158;
  return this;
}

