// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// operator() @ 1419d6170

void __thiscall
`FFileRegion::AccumulateFileRegions'::__l2::<lambda_1>::operator()(void *this,FFileRegion *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  ulong64 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  
  uVar3 = **(uint **)this;
  if (uVar3 != 0xffffffff) {
    plVar4 = *(longlong **)((longlong)this + 8);
    uVar11 = 0;
    if ((int)uVar3 < (int)plVar4[1]) {
      uVar11 = ~uVar3 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(EFileRegionType *)(*plVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) == param_1->Type) {
      plVar4 = *(longlong **)((longlong)this + 8);
      uVar3 = **(uint **)this;
      uVar11 = 0;
      if ((int)uVar3 < (int)plVar4[1]) {
        uVar11 = ~uVar3 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *plVar4;
      plVar4 = (longlong *)(lVar5 + (longlong)(int)uVar3 * 0x18);
      if ((param_1->Offset != *(longlong *)(lVar5 + 8 + (longlong)(int)uVar3 * 0x18) + *plVar4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("NewRegion.Offset == PrevRegion.Offset + PrevRegion.Length",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\FileRegions.cpp"
                              ,0x46,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar4 = plVar4 + 1;
      *plVar4 = *plVar4 + param_1->Length;
      return;
    }
  }
  pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
  if ((((FFileRegion *)pFVar6->Data <= param_1) &&
      (param_1 < (FFileRegion *)pFVar6->Data + *(int *)((longlong)&pFVar6[1].Data + 4))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = *(int *)&pFVar6[1].Data;
  piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,pFVar6,piVar1);
  }
  *(int *)&pFVar6[1].Data = iVar12 + 1;
  uVar9 = param_1->Length;
  pFVar7 = pFVar6->Data;
  pFVar2 = pFVar7 + (longlong)iVar12 * 0x18;
  *(ulong64 *)pFVar2 = param_1->Offset;
  *(ulong64 *)(pFVar2 + 8) = uVar9;
  *(undefined8 *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) = *(undefined8 *)&param_1->Type;
  **(int **)this = iVar12;
  return;
}

// AccumulateFileRegions @ 1419d7990

void __cdecl
FFileRegion::AccumulateFileRegions
          (TArray<FFileRegion,TSizedDefaultAllocator<32>_> *param_1,long64 param_2,long64 param_3,
          long64 param_4,TArrayView<FFileRegion_const_,int> *param_5)

{
  FScriptContainerElement *pFVar1;
  FFileRegion *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TArray<FFileRegion,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FFileRegion,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint local_res8 [2];
  uint *local_d8;
  TArray<FFileRegion,TSizedDefaultAllocator<32>_> *local_d0;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  ulong64 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  ulong64 local_78;
  longlong lStack_70;
  undefined1 local_68;
  uint7 uStack_67;
  ulong64 local_60;
  ulong64 uStack_58;
  undefined1 local_50;
  uint7 uStack_4f;
  FFileRegion local_48;
  
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = param_5->ArrayNum;
  lVar11 = (longlong)local_c0;
  _Src = param_5->DataPtr;
  if (local_c0 == 0) {
    local_bc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_c0,0,&local_c8,local_c0,&local_bc);
    memcpy(local_c8.Data,_Src,lVar11 * 0x18);
  }
  iVar6 = local_c0;
  pFVar12 = local_c8.Data + (longlong)local_c0 * 0x18;
  FVar10.Data = local_c8.Data;
  while( true ) {
    if (local_c0 != iVar6) {
      param_5._0_1_ = 0;
      `TCheckedPointerIterator<FFileRegion,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_5);
    }
    if (FVar10.Data == pFVar12) break;
    *(longlong *)FVar10.Data = *(longlong *)FVar10.Data + param_3;
    FVar10.Data = FVar10.Data + 0x18;
  }
  uVar13 = 0;
  local_res8[0] = 0xffffffff;
  local_d8 = local_res8;
  local_d0 = param_1;
  if (0 < local_c0) {
    lVar11 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < local_c0) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar4 = local_d0;
      pFVar12 = local_c8.Data + lVar11;
      if (*(longlong *)(pFVar12 + 8) != 0) {
        if (param_2 < *(longlong *)pFVar12) {
          lStack_b0 = *(longlong *)pFVar12 - param_2;
          local_68 = 0;
          local_a8 = (ulonglong)uStack_67 << 8;
          uVar9 = *local_d8;
          local_b8 = param_2;
          local_78 = param_2;
          lStack_70 = lStack_b0;
          if (uVar9 != 0xffffffff) {
            uVar8 = 0;
            if ((int)uVar9 < local_d0->ArrayNum) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if (uVar8 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pTVar5 = local_d0;
            if ((pTVar4->AllocatorInstance).Data[(longlong)(int)uVar9 * 0x18 + 0x10] ==
                local_a8._0_1_) {
              uVar9 = *local_d8;
              uVar8 = 0;
              if ((int)uVar9 < local_d0->ArrayNum) {
                uVar8 = ~uVar9 >> 0x1f;
              }
              if (uVar8 == 0) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pFVar2 = (pTVar5->AllocatorInstance).Data;
              pFVar1 = pFVar2 + (longlong)(int)uVar9 * 0x18;
              if (local_b8 !=
                  *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x18 + 8) + *(longlong *)pFVar1) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NewRegion.Offset == PrevRegion.Offset + PrevRegion.Length",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\FileRegions.cpp"
                                   ,0x46,L"");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              *(longlong *)(pFVar1 + 8) = *(longlong *)(pFVar1 + 8) + lStack_b0;
              goto LAB_1419d7ccb;
            }
          }
          pTVar4 = local_d0;
          pFVar1 = (local_d0->AllocatorInstance).Data;
          if ((pFVar1 <= (FScriptContainerElement *)&local_b8) &&
             ((FScriptContainerElement *)&local_b8 < pFVar1 + (longlong)local_d0->ArrayMax * 0x18))
          {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar9 = pTVar4->ArrayNum;
          if (uVar9 == pTVar4->ArrayMax) {
            uVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
          }
          pTVar4->ArrayNum = uVar9 + 1;
          pFVar2 = (pTVar4->AllocatorInstance).Data;
          pFVar1 = pFVar2 + (longlong)(int)uVar9 * 0x18;
          *(ulong64 *)pFVar1 = local_b8;
          *(longlong *)(pFVar1 + 8) = lStack_b0;
          *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x18 + 0x10) = local_a8;
          *local_d8 = uVar9;
        }
LAB_1419d7ccb:
        pTVar4 = local_d0;
        local_98 = *(longlong *)pFVar12;
        lStack_90 = *(longlong *)(pFVar12 + 8);
        local_88 = *(longlong *)(pFVar12 + 0x10);
        uVar9 = *local_d8;
        if (uVar9 == 0xffffffff) {
LAB_1419d7dea:
          pTVar4 = local_d0;
          pFVar1 = (local_d0->AllocatorInstance).Data;
          if ((pFVar1 <= (FScriptContainerElement *)&local_98) &&
             ((FScriptContainerElement *)&local_98 < pFVar1 + (longlong)local_d0->ArrayMax * 0x18))
          {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar9 = pTVar4->ArrayNum;
          if (uVar9 == pTVar4->ArrayMax) {
            uVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
          }
          pTVar4->ArrayNum = uVar9 + 1;
          pFVar2 = (pTVar4->AllocatorInstance).Data;
          pFVar1 = pFVar2 + (longlong)(int)uVar9 * 0x18;
          *(longlong *)pFVar1 = local_98;
          *(longlong *)(pFVar1 + 8) = lStack_90;
          *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x18 + 0x10) = local_88;
          *local_d8 = uVar9;
        }
        else {
          uVar8 = 0;
          if ((int)uVar9 < local_d0->ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pTVar5 = local_d0;
          if ((pTVar4->AllocatorInstance).Data[(longlong)(int)uVar9 * 0x18 + 0x10] != local_88._0_1_
             ) goto LAB_1419d7dea;
          uVar9 = *local_d8;
          uVar8 = 0;
          if ((int)uVar9 < local_d0->ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar2 = (pTVar5->AllocatorInstance).Data;
          pFVar1 = pFVar2 + (longlong)(int)uVar9 * 0x18;
          if (local_98 !=
              *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x18 + 8) + *(longlong *)pFVar1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewRegion.Offset == PrevRegion.Offset + PrevRegion.Length",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Serialization\\FileRegions.cpp"
                               ,0x46,L"");
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          *(longlong *)(pFVar1 + 8) = *(longlong *)(pFVar1 + 8) + lStack_90;
        }
        param_2 = *(longlong *)(pFVar12 + 8) + *(longlong *)pFVar12;
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar13 < local_c0);
  }
  if (param_2 < param_4) {
    uStack_58 = param_4 - param_2;
    local_50 = 0;
    local_48._16_8_ = (ulonglong)uStack_4f << 8;
    local_60 = param_2;
    local_48.Offset = param_2;
    local_48.Length = uStack_58;
    `FFileRegion::AccumulateFileRegions'::__l2::<lambda_1>::operator()(&local_d8,&local_48);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

// LoadFromCompactBinary @ 141a0a190

bool __cdecl FFileRegion::LoadFromCompactBinary(FCbFieldView *param_1,FFileRegion *param_2)

{
  FCbFieldView *pFVar1;
  ulong64 uVar2;
  TStringView<char8_t> local_28;
  FCbFieldView local_18;
  
  local_28.Size = 6;
  local_28.DataPtr = "offset";
  pFVar1 = FCbFieldView::operator[](param_1,&local_18,&local_28);
  uVar2 = FCbFieldView::AsInteger(pFVar1,0,(FIntegerParams)0x80);
  local_28.Size = 6;
  param_2->Offset = uVar2;
  local_28.DataPtr = "length";
  pFVar1 = FCbFieldView::operator[](param_1,&local_18,&local_28);
  uVar2 = FCbFieldView::AsInteger(pFVar1,0,(FIntegerParams)0x80);
  local_28.Size = 4;
  param_2->Length = uVar2;
  local_28.DataPtr = "type";
  pFVar1 = FCbFieldView::operator[](param_1,&local_18,&local_28);
  uVar2 = FCbFieldView::AsInteger(pFVar1,0,(FIntegerParams)0x10);
  param_2->Type = (EFileRegionType)uVar2;
  return true;
}

// SerializeFileRegions @ 141a1ec70

void __cdecl
FFileRegion::SerializeFileRegions
          (FArchive *param_1,TArray<FFileRegion,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FFileRegion *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar10 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
      return;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar7 = ~uVar9 >> 0x1f;
              }
              if ((uVar7 == 0) &&
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
              ::operator<<(param_1,(FFileRegion *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x18)
                          );
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FFileRegion,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FFileRegion *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18);
              DefaultConstructItems<FFileRegion,int>(pFVar2,1);
              ::operator<<(param_1,pFVar2);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return;
          }
        }
        return;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return;
}

