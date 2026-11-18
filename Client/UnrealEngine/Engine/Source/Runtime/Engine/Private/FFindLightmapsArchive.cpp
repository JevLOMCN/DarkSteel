// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FFindLightmapsArchive @ 1489b3520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FFindLightmapsArchive * __thiscall
`UWorld::GetLightMapsAndShadowMaps'::__l2::FFindLightmapsArchive::FFindLightmapsArchive
          (void *this,UObject *param_1,TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int iVar1;
  code *pcVar2;
  FUObjectItem *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  FFindLightmapsArchive *pFVar6;
  FUObjectItem *pFVar7;
  UClass *pUVar8;
  UObjectBase *pUVar9;
  UObject *local_res10;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  TIterator local_58;
  UClass *local_40;
  EObjectFlags local_38;
  EInternalObjectFlags local_34;
  
  local_res10 = param_1;
  FArchiveState::FArchiveState(this);
  *(byte *)((longlong)this + 0x2b) = *(byte *)((longlong)this + 0x2b) | 3;
  *(undefined ***)this = &GetLightMapsAndShadowMaps'::`2'::FFindLightmapsArchive::_vftable_;
  *(TArray<UTexture2D_*,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x90) = param_2;
  *(bool *)((longlong)this + 0x98) = param_3;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pUVar5 = Z_Construct_UClass_ULightMapTexture2D_NoRegister();
  GetObjectsOfClass(pUVar5,&local_68,true,RF_ClassDefaultObject,Borrowed);
  pUVar5 = Z_Construct_UClass_UShadowMapTexture2D_NoRegister();
  GetObjectsOfClass(pUVar5,&local_68,true,RF_ClassDefaultObject,Borrowed);
  pUVar5 = ULightMapVirtualTexture2D::StaticClass();
  GetObjectsOfClass(pUVar5,&local_68,true,RF_ClassDefaultObject,Borrowed);
  if (local_68.ArrayNum != 0) {
    pUVar5 = Z_Construct_UClass_UObject_NoRegister();
    local_58.Index = -1;
    local_58.Array = &GUObjectArray;
    local_58.CurrentObject = (FUObjectItem *)0x0;
    FUObjectArray::TIterator::Advance(&local_58);
    local_38 = RF_NoFlags;
    local_40 = pUVar5;
    local_34 = UE::GetAsyncLoadingInternalFlagsExclusion();
    local_34 = local_34 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
    if ((pUVar5 == (UClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Class",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                           ,0x70,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFindLightmapsArchive *)(*pcVar2)();
      return pFVar6;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&(local_58.Array)->ObjObjectsCritical);
    do {
      pFVar3 = local_58.CurrentObject;
      pUVar9 = (UObjectBase *)0x0;
      if (local_58.CurrentObject != (FUObjectItem *)0x0) {
        pUVar9 = ((local_58.CurrentObject)->field1_0x8).Object;
      }
      if (((local_38 & pUVar9->ObjectFlags) == RF_NoFlags) &&
         (pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar9->InternalIndex),
         (local_34 &
         (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed)) {
        pUVar8 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar5 == pUVar8) break;
        pUVar8 = (pUVar9->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= (int)pUVar8->_padding_) &&
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) break;
      }
      bVar4 = FUObjectArray::TIterator::Advance(&local_58);
      pUVar5 = local_40;
      pFVar3 = local_58.CurrentObject;
    } while (bVar4);
joined_r0x0001489b36dd:
    if (pFVar3 != (FUObjectItem *)0x0) {
      MarkObject((pFVar3->field1_0x8).Object,OBJECTMARK_TagExp);
LAB_1489b36f1:
      do {
        do {
          bVar4 = FUObjectArray::TIterator::Advance(&local_58);
          pFVar3 = local_58.CurrentObject;
          if (!bVar4) goto joined_r0x0001489b36dd;
          pUVar9 = (UObjectBase *)0x0;
          if (local_58.CurrentObject != (FUObjectItem *)0x0) {
            pUVar9 = ((local_58.CurrentObject)->field1_0x8).Object;
          }
        } while ((local_38 & pUVar9->ObjectFlags) != RF_NoFlags);
        pUVar5 = Z_Construct_UClass_UObject_NoRegister();
        if (local_40 != pUVar5) {
          pUVar5 = (pUVar9->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar1 = (int)local_40->_padding_;
          if (((int)pUVar5->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
              &local_40->_padding_)) goto LAB_1489b36f1;
        }
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar9->InternalIndex);
      } while ((local_34 &
               (EInternalObjectFlags)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x20)) !=
               Borrowed);
      goto joined_r0x0001489b36dd;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&(local_58.Array)->ObjObjectsCritical);
    if (*(code **)(*(longlong *)this + 0x168) == operator<<) {
      operator<<(this,&local_res10);
    }
    else {
      (**(code **)(*(longlong *)this + 0x168))();
    }
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return this;
}

// operator<< @ 1489bd730

FArchive * __thiscall
`UWorld::GetLightMapsAndShadowMaps'::__l2::FFindLightmapsArchive::operator<<
          (void *this,UObject **param_1)

{
  int *piVar1;
  UObject *pUVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FArchive *pFVar8;
  UObject *local_18 [2];
  
  if ((UObjectBase *)*param_1 == (UObjectBase *)0x0) {
    return this;
  }
  bVar5 = ObjectHasAnyMarks((UObjectBase *)*param_1,OBJECTMARK_TagExp);
  if (!bVar5) {
    return this;
  }
  pUVar2 = *param_1;
  pUVar7 = UWorld::StaticClass();
  iVar6 = (int)pUVar7->_padding_;
  if ((iVar6 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar6 * 8)
      == &pUVar7->_padding_)) {
    return this;
  }
  pUVar2 = *param_1;
  pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((iVar6 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar6 * 8)
      == &pUVar7->_padding_)) {
    return this;
  }
  pUVar2 = *param_1;
  pUVar7 = Z_Construct_UClass_ULightMapTexture2D_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar6) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar6 * 8)
      != &pUVar7->_padding_)) {
    pUVar2 = *param_1;
    pUVar7 = Z_Construct_UClass_UShadowMapTexture2D_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar7->_padding_)) {
      pUVar2 = *param_1;
      pUVar7 = ULightMapVirtualTexture2D::StaticClass();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar6) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) goto LAB_1489bd945;
    }
  }
  pUVar2 = *param_1;
  if (pUVar2 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x90);
      local_18[0] = pUVar2;
      if ((pFVar3->Data <= (FScriptContainerElement *)local_18) &&
         (((FScriptContainerElement *)local_18 <
           pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8 &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)))) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(UObject **)(pFVar3->Data + (longlong)iVar6 * 8) = local_18[0];
      goto LAB_1489bd945;
    }
  }
  local_18[0] = (UObject *)0x0;
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3591672255320434082>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                     ,0x25a2,"Tex");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FArchive *)(*pcVar4)();
    return pFVar8;
  }
LAB_1489bd945:
  UnMarkObject((UObjectBase *)*param_1,OBJECTMARK_TagExp);
  (**(code **)(*(longlong *)*param_1 + 200))(*param_1,this);
  return this;
}

// operator<< @ 1489bd990

FArchive * __thiscall
`UWorld::GetLightMapsAndShadowMaps'::__l2::FFindLightmapsArchive::operator<<
          (void *this,FObjectPtr *param_1)

{
  int *piVar1;
  FObjectPtr_u_0 FVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FArchive *pFVar8;
  FObjectPtr_u_0 local_18 [2];
  
  if ((param_1->field0_0x0).Handle != (UObject *)0x0) {
    pUVar7 = UWorld::StaticClass();
    bVar5 = FObjectPtr::IsA(param_1,pUVar7);
    if (!bVar5) {
      pUVar7 = Z_Construct_UClass_UStaticMesh_NoRegister();
      bVar5 = FObjectPtr::IsA(param_1,pUVar7);
      if (!bVar5) {
        pUVar7 = Z_Construct_UClass_ULightMapTexture2D_NoRegister();
        bVar5 = FObjectPtr::IsA(param_1,pUVar7);
        if (!bVar5) {
          pUVar7 = Z_Construct_UClass_UShadowMapTexture2D_NoRegister();
          bVar5 = FObjectPtr::IsA(param_1,pUVar7);
          if (!bVar5) {
            pUVar7 = ULightMapVirtualTexture2D::StaticClass();
            bVar5 = FObjectPtr::IsA(param_1,pUVar7);
            if (!bVar5) {
              pFVar8 = FArchiveUObject::SerializeObjectPtr(this,param_1);
              return pFVar8;
            }
          }
        }
        FVar2 = (FObjectPtr_u_0)(param_1->field0_0x0).Handle;
        if (FVar2.Handle != (UObject *)0x0) {
          pUVar7 = Z_Construct_UClass_UTexture2D_NoRegister();
          iVar6 = (int)pUVar7->_padding_;
          if ((iVar6 <= *(int *)(*(longlong *)&(FVar2.Handle)->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&(FVar2.Handle)->field_0x10 + 0x30) + (longlong)iVar6 * 8
               ) == &pUVar7->_padding_)) {
            pFVar3 = *(ForAnyElementType **)((longlong)this + 0x90);
            local_18[0] = FVar2;
            if (((FObjectPtr_u_0 *)pFVar3->Data <= local_18) &&
               (local_18 < (FObjectPtr_u_0 *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))
               ) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
            }
            iVar6 = *(int *)&pFVar3[1].Data;
            piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar3,piVar1);
            }
            *(int *)&pFVar3[1].Data = iVar6 + 1;
            ((FObjectPtr_u_0 *)(pFVar3->Data + (longlong)iVar6 * 8))->Handle =
                 (UObject *)local_18[0];
            return this;
          }
        }
        local_18[0].Handle = (UObject *)0x0;
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3591672255320434110>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\World.cpp"
                           ,0x25be,"Tex");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
      }
    }
  }
  return this;
}

